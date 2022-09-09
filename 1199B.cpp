#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h, l;
    double ans;
    cin>>h>>l;
    ans=((l*l)-(h*h))/(2.0*h);
    cout<<fixed<<setprecision(9)<<ans;
    return 0;
}
