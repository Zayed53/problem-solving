#include <bits/stdc++.h>

using namespace std;

string solve(){
    int n;
    cin>>n;
    long long s;
    vector<long long> vec(n);
//    set<long long>chk;
    for(auto &i : vec){
        cin>>i;
    }
    s=vec[0];
    for(int i=1;i<n;i++){
        if(vec[i]%s!=0){
            return "NO";
        }
    }return "YES";
//    if(vec[0]==1){
//        return "YES";
//    }
////    for(auto &i:vec){
////        chk.insert(i);
////    }if(chk.size()==1){
////        return "YES";
////    }
//    for(int i=vec.size()-1;i>=1;i--){
//        s=0;
//        int ck=0;
//        for(int j=i-1;j>=0;j--){
//            s=s+vec[j];
//            if(vec[i]%s==0){
//               ck=1;
//               break;
//            }
//        }if(ck==0){
//            return "NO";
//        }
//    }return "YES";

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
