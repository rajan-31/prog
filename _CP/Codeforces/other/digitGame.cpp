#include <iostream>
#include <bits/stdc++.h>
#include <vector>

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"

using namespace std; 
vector<int> optimize(int op, vector<int> data);

int main() {
    long t,digits,i;
    int flag=0;
    vector<int> nums;
    string ip;
    cin>>t;

    while(t--){
        cin>>digits;
        cin>>ip;

        if(digits<=2){
            if(digits==2)
                ip[1]=ip[0];
            i=int(ip[0]);
            if(i%2==0)
                cout<<'2'<<endl;
            else
                cout<<'1'<<endl;
            continue;
        }

        for(auto itr: ip){
            nums.push_back(int(itr));
        }

        digits--;
        while(digits--){
            if(flag==0){
                nums=optimize(0,nums);
                flag=1;
            }
            else{
                nums=optimize(1,nums);
                flag=0;
            }

            cout<<ip<<endl;
        }



        nums.clear();
    }
}

vector<int> optimize(int op, vector<int> data){
    int galf=0;
    if(op==0){
        for(int j=0; j<data.size(); j++)
            if(data[j]%2==0){
                data.erase(data.begin()+j);
                galf=1;
            }
        if(galf==0)
            data.erase(data.begin());
    }
    else{
        for(int j=0; j<data.size(); j++)
            if(data[j]%2==0){
                data.erase(data.begin()+j);
                galf=1;
            }
        if(galf==0)
            data.erase(data.begin()+1);
    }
    cout<<data.size()<<endl;
    return data;
}