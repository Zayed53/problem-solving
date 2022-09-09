#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<string> v;
    for(int i = 0; i < 3; i++) {
    string s;
        getline(cin, s);
        v.push_back(s);
    }

    vector<int> num[3];
    int k = 0;
    for(auto &i: v) {
        stringstream ss;
        int temp;
        ss << i;
        while(ss >> temp) num[k++].push_back(temp);
    }

    for(int i = 0; i < 3; i++) {
        for(auto i: num[i])
            cout << i << '\t';
        cout << '\n';
    }

    return 0;

}
