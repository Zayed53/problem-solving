#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s;
    vector<int> vec;
    string str;
    cin>>n;
    cin.ignore();
    cin>>str;
    for(int i=0;i<str.size()-3;i++){
        s=0;
        s=s+min(26-(abs('A'-str[i])), (abs('A'-str[i])));
        s=s+min(26-(abs('C'-str[i+1])), (abs('C'-str[i+1])));
        s=s+min(26-(abs('T'-str[i+2])), (abs('T'-str[i+2])));
        s=s+min(26-(abs('G'-str[i+3])), (abs('G'-str[i+3])));
        vec.push_back(s);
    }cout<<*min_element(vec.begin(), vec.end());
    return 0;
}
