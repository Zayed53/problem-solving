#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, fl=0, t;
    cin>>n;
    if(n%7==0){
        cout<<n<<"\n";
    }else{
        if(to_string(n).length()==1){
            if(n%7==0){
                cout<<n<<"\n";
        }else{
            cout<<7<<"\n";
        }
        }else if(to_string(n).length()==2){
            for(int i=1; i<=9; i++){
                if(((n/10)*10+i)%7==0){
                    cout<<((n/10)*10+i)<<"\n";
                    fl=1;
                    break;
                }
            }if(fl!=1){
                t=n%10;
                for(int i=0;i<=9;i++){
                    if(((i*10+t)%7)==0){
                        cout<<(i*10+t)<<"\n";
                        break;
                    }
                }
            }
        }else if(to_string(n).length()==3){
            for(int i=1; i<=9; i++){
                if(((n/10)*10+i)%7==0){
                    cout<<((n/10)*10+i)<<"\n";
                    fl=1;
                    break;
                }
            }if(fl!=1){
                t=n%100;
                for(int i=0;i<=9;i++){
                    if(((i*100+t)%7)==0){
                        cout<<(i*100+t)<<"\n";
                        break;
                    }
                }
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        solve();
    }return 0;
}
