#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, j, i, s1=0, s2=0;
    vector<int> vec;
    vector<int> odd;
    vector<int>even;
    cin>>n;
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        vec.push_back(in);
    }
    if(n==1){
        cout<<vec[0];
        return 0;
//    }if(n==2){
//        if((vec[1]%2==0&&vec[0]%2==0)||(vec[1]%2!=0&&vec[0]%2!=0)){
//            cout<<vec[0];
//            return 0;
//        }else{
//            cout<<0;
//            return 0;
//        }
//    }while(j>0){

    }
    for(auto i:vec){
        if(i%2!=0){
            odd.push_back(i);
        }else{
            even.push_back(i);
        }
    }sort(odd.begin(), odd.end());
    reverse(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    reverse(even.begin(), even.end());
    if(odd.size()==even.size()){
        cout<<0;
        return 0;
    }if(odd.size()>even.size()){
        for(int i=0; i<n; i++){
            if(i%2==0){
                odd.erase(odd.begin()+0);
            }if(i%2!=0){
                if(even.size()==0){
                    break;
                }even.erase(even.begin()+0);
            }
        }
    }if(even.size()>odd.size()){
        for(int i=0; i<n; i++){
            if(i%2==0){
                even.erase(even.begin()+0);
            }if(i%2!=0){
                if(odd.size()==0){
                    break;
                }odd.erase(odd.begin()+0);
            }
        }
    }for(auto i: odd){
        s1=s1+i;
    }for(auto I: even){
        s2=s2+I;
    }
    cout<<s1+s2;
    return 0;



}
