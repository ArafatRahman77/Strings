#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s;
    string t;
    cin >> s;
    cin >> t;
    reverse(t.begin(), t.end());
    if (s.compare(t) == 0)
        cout << "YES";
    else
        cout << "NO";
}