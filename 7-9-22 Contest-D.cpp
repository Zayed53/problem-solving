#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, k, c=0, c1=0, b=0, ck=0;
    string str;
    cin>>n>>k;
    cin.ignore();
    cin>>str;
    int p1=0, p2=str.size()-1;
    for(int i=0; i<str.size() ;i++){
        if(str[i]=='B'){
            p1=i;
            break;
        }
    }for(int i=str.size()-1; i>=0 ;i--){
        if(str[i]=='B'){
            p2=i;
            break;
        }
    }for(int i=p1; i<=p2 ;i++){
        if(str[i]=='B'){
            b=b+1;
            if(b==k){
                ck=1;
                break;
            }
        }else if(str[i]=='W'){
            c1=c1+1;
            b=b+1;
            if(b==k){
                ck=1;
                break;
            }
        }
    }b=0;
    int c2=0;
    for(int i=p2; i>=p1 ;i--){
        if(str[i]=='B'){
            b=b+1;
            if(b==k){
                ck=1;
                break;
            }
        }else if(str[i]=='W'){
            c2=c2+1;
            b=b+1;
            if(b==k){
                ck=1;
                //cout<<"c2 and b and k"<<c2<<b<<k;
                break;
            }
        }
    }
    if(c1<c2){
        c=c1;
    }else{c=c2;}
    b=p2-p1+1;
    if(ck==1){
        //cout<<"c before"<<c1<<c2;
        return c;
    }
    //cout<<"C="<<c;
    c=c+k-b;
    //cout<<"b"<<b;
    return c;
}



int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return  0;
}
