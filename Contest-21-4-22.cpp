#include <bits/stdc++.h>

using namespace std;
string solve()
{
    int n, cke=1,cko=1, epo, opo, epe, ope;
    cin>>n;
    for(int i=0, x;i<n;i++){
        cin>>x;
        if(i%2==0&&x%2!=0){
            opo=1;
        }if(i%2==0&&x%2==0){
            ope=1;
        }if(i%2!=0&&x%2!=0){
            epo=1;
        }if(i%2!=0&&x%2==0){
            epe=1;
        }
    }if(((opo==1)&&(ope==1))||((epo==1)&&(epe==1))){
        return "NO";
    }else {
        return "YES";
    }



}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}






