#include <bits/stdc++.h>
using namespace std;

int getMaxTasksCompleted(int dailyTimeLimit, vector<int> tasksRequired, vector<int> tasksOptional) {
    multiset<int> bins;
    for (int r : tasksRequired) {
        int capacity = dailyTimeLimit - r;
        if (capacity > 0)
            bins.insert(capacity);
    }
    sort(tasksOptional.begin(), tasksOptional.end());
    
    int count = 0;
    for (int t : tasksOptional) {
        
        auto it = bins.lower_bound(t);
        if (it != bins.end()) {
            int rem = *it;
            
            bins.erase(it);
            int newCap = rem - t;
            
            if (newCap > 0)
                bins.insert(newCap);
            count++;
        }
    }
    
    return count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int dailyTimeLimit;
    cin >> dailyTimeLimit;
    
    int n, m;
    cin >> n; // number of required tasks (days)
    cin >> m; // number of optional tasks
    
    vector<int> tasksRequired(n), tasksOptional(m);
    for (int i = 0; i < n; i++) {
        cin >> tasksRequired[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> tasksOptional[j];
    }
    
    cout << getMaxTasksCompleted(dailyTimeLimit, tasksRequired, tasksOptional) << "\n";
    
    return 0;
}
