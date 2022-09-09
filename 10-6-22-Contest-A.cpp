#include <bits/stdc++.h>

using namespace std;

string solve(){
    int m,n,k;
    string stra, strb, c;
    cin>>m>>n>>k;
    cin.ignore();
    cin>>stra;
    cin.ignore();
    cin>>strb;
    sort(stra.begin(), stra.end());
    sort(strb.begin(), strb.end());
    if(stra[0]<strb[0]){
        c.push_back(stra[0]);
        int i=1, j=0, a=1, b=0;
        m--;
        while(m>0&&n>0){
            if((stra[i]<strb[j])){
                if(a<k){
                    b=0;
                    a++;
                    c.push_back(stra[i]);
                    i++;
                    m--;
                }else{
                    a=0;
                    b++;
                    c.push_back(strb[j]);
                    j++;
                    n--;
                }

            }else if((stra[i]<strb[j])){
                if(b<k){
                    a=0;
                    b++;
                    c.push_back(strb[j]);
                    j++;
                    n--;
                }else{
                    b=0;
                    a++;
                    c.push_back(stra[i]);
                    i++;
                    m--;
                }

            }
        }
    }else{
        c.push_back(strb[0]);
        int i=0, j=1, a=0, b=1;
        n--;
        while(m>0&&n>0){
            if((strb[j]<stra[i])){
                if(b<k){
                    a=0;
                    b++;
                    c.push_back(strb[j]);
                    j++;
                    n--;
                }else{
                    b=0;
                    a++;
                    c.push_back(stra[i]);
                    i++;
                    m--;
                }
            }

            else if(stra[i]<strb[j]){
                    if(a<k){
                        b=0;
                        a++;
                        c.push_back(stra[i]);
                        i++;
                        m--;
                }else{
                    a=0;
                    b++;
                    c.push_back(strb[j]);
                    j++;
                    n--;
                }

            }
        }
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
