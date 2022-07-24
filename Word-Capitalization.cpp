#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char s[1001];
    cin >> s;
    char *p = &s[0];
    *p = (char)toupper(*p);
    cout << s;
}