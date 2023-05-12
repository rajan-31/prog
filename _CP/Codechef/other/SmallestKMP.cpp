#include <iostream>
#include <algorithm>


using namespace std;

int main()  
{  
    freopen("input3.txt","r",stdin);

    string str,pat; 
    int T,ind,flag=0;
    cin>>T;

    for(int i=0; i<T; i++){
        ind=0;
        cin>>str>>pat;

        for(auto l:pat)
            str.erase(str.find_first_of(l),1);

        sort(str.begin(),str.end());

        for(auto itr:str){
            flag=0;
            if(itr>pat[0])
                break;
            else if(itr==pat[0] && pat.size()>1){
                for(int j=1; j<pat.size(); j++){
                    if(itr==pat[j])
                        continue;
                    if(pat[j]<itr){
                        flag=1;
                        break;
                    }
                    else
                        break;
                }
            }
            if(flag==1)
                break;
            ind+=1;
        }
        if(str.back()<pat[0])
            str.append(pat);
        else{
            str.insert(ind,pat);
            // cout<<ind;
        }
            
        cout<<str<<endl;
    }
      
    return 0;  
}

// tyzezz
// acddeeaghfaee
// eiooppppppqrttyuuiwy
// aazyzz
// aejmmpqssctwz
// aggggtz