#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, a, b, maxap=0, maxbp=0, maxan=0, maxbn=0;

    cin>>n;

    while(n--){
        cin>>a>>b;
        if(a>0){
            maxap=a>maxap?a:maxap;
        }else{
            maxan=(a*-1)>maxan?(a*-1):maxan;
        }
        if(b>0){
            maxbp=b>maxbp?b:maxbp;
        }else{
            maxbn=(b*-1)>maxbn?(b*-1):maxbn;
        }
    }

    //cout<<maxbn<<maxbp<<maxan<<maxap<<"\n";

    return (maxbn*2+maxbp*2+maxan*2+maxap*2);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
