#include <iostream>

using namespace std;

int gen_dig(int dig){
    int ans=0;
    ans+=dig/9;
    if(dig%9)
        ans+=1;

    return ans;
}

int main(){
    // freopen("input2.txt","r",stdin);
    int n,pc,pr;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>pc>>pr;
        pc=gen_dig(pc);
        pr=gen_dig(pr);
        if(pc>pr)
            cout<<"1 "<<pr<<endl;
        else if(pc==pr)
            cout<<"1 "<<pr<<endl;
        else
            cout<<"0 "<<pc<<endl;
    }

    return 0;
}