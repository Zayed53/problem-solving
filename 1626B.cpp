#include <bits/stdc++.h>


using namespace std;

string solve(){
    string n, ans;
    cin>>n;
    int v, ck=0;
    for(int i=n.size()-1; i>0 ;i--){
        v=n[i]-'0'+n[i-1]-'0';
        if(v>=10){
            string lst=to_string(v);
            ans=n.substr(0,i-1);
            ans=ans.append(lst);
            ans=ans.append(n.substr(i+1, n.size()-1));
            ck=1;
            break;
        }
    }if(ck!=1){
        for(int i=0; i<n.size()-1;i++){
            v=n[i]-'0'+n[i+1]-'0';
            if(v<10){
                string lst=to_string(v);
                ans=n.substr(i+2, n.size()-1);
                ans=lst.append(ans);
                ans=n.substr(0, i).append(ans);
                break;
            }
        }
    }

    return ans;
}
 int main()
 {
     int t;
     string ans;
     cin>>t;
     while(t--){
        ans=solve();
        cout<<ans<<"\n";
     }return 0;
 }
