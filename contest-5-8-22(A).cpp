#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, c=0, s=2;
    vector<int> vec;
    cin>>n;
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        vec.push_back(in);
    }
    for(int i=0; i<vec.size(); i++){
        if(vec[i]==0){
            c++;
        }if((count(vec.begin(), vec.end(), vec[i]))>1){
            s=1;
        }
    }if(c>0){
        return n-c;
    }if(s==1){
        return n;
    }
        return n+1;


}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
