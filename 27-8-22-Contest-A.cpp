#include <bits/stdc++.h>

using namespace std;

int solve(){
    char a, b, c, d;
    int arr[26]={0}, c2=0;;
    cin>>a>>b;
    cin>>c>>d;
    arr[a-'a']=arr[a-'a']+1;
    arr[b-'a']=arr[b-'a']+1;
    arr[c-'a']=arr[c-'a']+1;
    arr[d-'a']=arr[d-'a']+1;
    for(int i=0;i<26;i++){
        if(arr[i]==4){
            return 0;
        }if(arr[i]==3){
            return 1;
        }if(arr[i]==2){
            c2++;
        }
    }if(c2==1){
        return 2;
    }if(c2==2){
        return 1;
    }
    return 3;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}
