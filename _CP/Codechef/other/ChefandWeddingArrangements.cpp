#include <iostream>
#include <bits/stdc++.h>

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"

using namespace std; 

int main() {
    boost
	int t;
    cin>>t;
    while(t--){
        int n , k;
        cin >> n >> k;
		int dp[1005], f[1005] , cnt[101];
        // rep(i, n)cin>>f[i];
		for(int i=0;i<n;i++)
			cin>>f[i];

        for(int i = 1; i <= n; i++)
            dp[i] = 1e9;
		
        dp[0] = 0;
        for(int i = 0; i < n; i++)
        {
            memset(cnt , 0 , sizeof cnt);
            for(int j = i; j < n; j++)
            {
                cnt[f[j]]++;
                int g = 0;
                for(int p = 1; p <= 100; p++)
                    if(cnt[p]!=1)g+=cnt[p];
                dp[j + 1] = min(dp[i] + g + k , dp[j + 1]);
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}
