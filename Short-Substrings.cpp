#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string sub;
        sub += s[0];
        sub += s[1];
        if (s.size() == 2)
        {
            cout << s << "\n";
        }
        else
        {

            for (int i = 3; i < s.size(); i += 2)
            {
                sub += s[i];
            }
            cout << sub << "\n";
        }
    }
}