#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int uc = 0, lc = 0, i;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            uc++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            lc++;
    }
    if (uc > lc)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else if (lc > uc)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    else if (uc = lc)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
}