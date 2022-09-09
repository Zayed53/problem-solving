#include <bits/stdc++.h>

using namespace std;

long long solve(){
    int n;
    long long ans=0, s1, s2, in;
    cin>>n;
    vector<long long> vecA;
    vector<long long> vecB;
    for(int i=0; i<n ;i++){
        cin>>in;
        vecA.push_back(in);
    }
    for(int i=0; i<n ;i++){
        cin>>in;
        vecB.push_back(in);
    }
    if(n==2){
        s1=abs(vecA[1]-vecA[0])+abs(vecB[1]-vecB[0]);
        s2=abs(vecB[1]-vecA[0])+abs(vecA[1]-vecB[0]);
        ans=s2<s1?s2:s1;
    }else{
        for(int i=1; i<=n-1;i++){
            s1=abs(vecA[i]+vecA[i-1])+abs(vecB[i]-vecB[i-1]);//+abs(vecA[i+1]-vecA[i])+abs(vecB[i+1]-vecB[i])
            s2=abs(vecB[i]+vecA[i-1])+abs(vecA[i]-vecB[i-1]);//+abs(vecA[i+1]-vecB[i])+abs(vecB[i+1]-vecA[i])
            if(s2<s1){
                swap(vecA[i], vecB[i]);
            }ans=ans+abs(vecA[i]-vecA[i-1])+abs(vecB[i]-vecB[i-1]);
        }//ans=abs(vecA[n-1]-vecA[n-2])+abs(vecB[n-1]-vecB[n-2]);
    }return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
