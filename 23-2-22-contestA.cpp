#include <bits/stdc++.h>

using namespace std;

double solve(){
    double x[3], y[3];
    for(int i=0;i<3;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                continue;
            }if(y[i]==y[j]){
                int k=((0+1+2)-i-j);
                if(y[k]<y[i]){
                    return (abs(x[i]-x[j]));
                }
            }
        }
    }return 0.0000;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<setprecision(9)<<solve()<<"\n";
    }return 0;
}
