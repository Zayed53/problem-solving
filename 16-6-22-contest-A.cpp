#include <bits/stdc++.h>

using namespace std;

string solve(){
    int a, b, d, sa=0,sb=0, ca=0, cb=0;
    cin>>a>>b;
    d=abs(a-b);
    string str;
    if(d==0){
        for(int i=0;i<a;i++){
            str.append("01");
        }
    }
    if(a<b){
        while(ca<a){
            if(sa<d){
                ca++;
                str.push_back('0');
                sa++;
                if(sa==d){
                    sb=0;
                }
            }else if(sb<d){
                cb++;
                str.push_back('1');
                sb++;
                if(sb==d){
                    sa=0;
                }
            }
        }for(int i=0;i<(b-cb);i++){
            str.push_back('1');
        }
    }else if(b<a){
        while(cb<b){
            if(sb<d){
                cb++;
                str.push_back('1');
                sb++;
                if(sb==d){
                    sa=0;
                }
            }else if(sa<d){
                ca++;
                str.push_back('0');
                sa++;
                if(sa==d){
                    sb=0;
                }
            }
        }for(int i=0;i<(a-ca);i++){
            str.push_back('0');
        }
    }return str;


}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
