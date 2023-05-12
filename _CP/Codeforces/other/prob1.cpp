#include <iostream>
#include <bits/stdc++.h>
#include <string>

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"

using namespace std; 

int main() {
    boost
    int t,n,i,j;
    string s,ans,x;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        if(s.size()==1 && s=="0"){
            cout<<"0"<<endl;
            continue;
        }
        else if(s.size()==1 && s=="1"){
            cout<<"1"<<endl;
            continue;
        }
        ans = s.substr(0,n);
        for(i=1; i+n<=s.size(); i++){
            x=s.substr(i,n);
            for(j=0; j<x.size();j++){
                if(x[j]==ans[j]){
                    break;
                }
            }
            if(j==x.size()){
                if(ans[j-1]=='1')
                    ans[j-1]='0';
                else
                    ans[j-1]='1';
            }
        }
        cout<<ans<<endl;
    }
}