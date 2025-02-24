#include <bits/stdc++.h>
using namespace std;

/*
  N = number of TV shows
  M = total free minutes to fill
  A = array of size N, each element is [D, s1, s2, s3]
      where D is duration and s1, s2, s3 are start times
*/
string solve(int N, int M, vector<vector<int>> &A) {
    
    if (M == 0) return "YES";
    static bool visited[305][1 << 10]; 
    memset(visited, false, sizeof(visited));

    queue<pair<int,int>> q;

    visited[0][0] = true;
    q.push({0, 0});

    while (!q.empty()) {
        auto frontVal = q.front();
        int t = frontVal.first;
        int mask = frontVal.second;
        q.pop();
        if (t == M) return "YES";
for (int i = 0; i < N; i++) {
            if (mask & (1 << i)) continue; 

            int D = A[i][0];
            for (int k = 1; k <= 3; k++) {
                int s = A[i][k];
                int e = s + D;  

                if (s <= t && t <= e) {
                    int newT = e;
                    if (newT >= M) {
                        return "YES";
                    }
                    int newMask = mask | (1 << i);
                    if (!visited[newT][newMask]) {
                        visited[newT][newMask] = true;
                        q.push({newT, newMask});
                    }
                }
            }
        }
    }
    return "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Example usage:
    // N = 4, M = 120
    // A = [
    //   [60, 10, 60, 100],
    //   [30, 0, 50, 90],
    //   [20, 0, 20, 40],
    //   [50, 50, 70, 110]
    // ]
    // Expected => "YES"
    int N = 4;
    int M = 120;
    vector<vector<int>> A = {
        {60, 10, 60, 100},
        {30, 0, 50, 90},
        {20, 0, 20, 40},
        {50, 50, 70, 110}
    };

    cout << solve(N, M, A) << "\n"; // Should print "YES"
    return 0;
}
