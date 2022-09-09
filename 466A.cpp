#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4];
    int mn, num,ans, ans1, ans2;
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }mn=arr[3]/arr[1];
    if(arr[0]<arr[1]){
        ans1=arr[0]*arr[2];
        ans=ans1<arr[3]?ans1:arr[3];
        cout<<ans;
        return 0;
    }
    if(mn<arr[2]){
        num=arr[0]/arr[1];
        ans1=num*arr[3]+((arr[0]-num*arr[1])*arr[2]);
        ans2=(num+1)*arr[3];
        ans=ans1<ans2?ans1:ans2;
        cout<<ans;
    }
    else{
        ans=arr[0]*arr[2];
        cout<<ans;
    }
    return 0;


}
