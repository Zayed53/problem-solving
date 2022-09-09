#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, c=0;
    vector<int> vec;
    cin>>n;
    for(int i=0, in;i<n;i++){
        cin>>in;
        vec.push_back(in);
    }for(int i=0, j=1; j<vec.size();i++, j++){
        if(vec[i]>vec[j]){
            c=c+1;
            i++;
            j++;
        }else{continue;}
    }return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
