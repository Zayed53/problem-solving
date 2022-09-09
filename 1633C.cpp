#include <bits/stdc++.h>

using namespace std;

string solve(){
    long long hc, dc, hm, dm, k, w, a, n, m;
    cin>>hc>>dc;
    cin>>hm>>dm;
    cin>>k>>w>>a;
//    if((hm/dc)<=(hc/dm)){
//        return "YES";
//    }
    //n=k, m=0;
    for(int i=0;i<=k;i++){
        if(((hm+dc+i*w-1)/(dc+i*w))<=((hc+dm+((k-i)*a)-1)/dm)){
            return "YES";
        }//n--;
        //m++;
    }return "NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
