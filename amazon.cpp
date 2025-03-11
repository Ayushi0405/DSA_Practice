#include <bits/stdc++.h>
using namespace std;

long adjusted(int rating, int impactFactor) {
    long double val = (long double)rating / (long double)impactFactor;
    if (rating >= 0) {
        return (long) floor(val);
    } else {
        return (long) ceil(val);
    }
}
long calculateMaxQualityScore(int impactFactor, vector<int> ratings){
    int n = ratings.size();
    long dp0  = ratings[0];
    long dp1a = (long)ratings[0] * impactFactor;  /
    long dp1b = adjusted(ratings[0], impactFactor); 
    long globalMax = max({dp0, dp1a, dp1b});
    for(int i = 1; i < n; ++i){
        long r    = ratings[i];
        long amp  = (long)r * impactFactor;
        long adj  = adjusted(r, impactFactor);
        long new_dp0  = max(dp0 + r, (long)r);
        long new_dp1a = max({dp1a + amp, dp0 + amp, amp});
        long new_dp1b = max({dp1b + adj, dp0 + adj, adj});
        globalMax = max({globalMax, new_dp0, new_dp1a, new_dp1b});
        dp0  = new_dp0;
        dp1a = new_dp1a;
        dp1b = new_dp1b;
    }
    
    return globalMax;
}

int main(){
    // Example failing test:
    int impactFactor = 3;
    vector<int> ratings = {-4};
    cout << calculateMaxQualityScore(impactFactor, ratings) << endl;
    // Expected: -1 (because ceiling(-4/3) = -1), not 0
    return 0;
}
