#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int main()
{
    int i, flag = 0;
    char s1[101];
    char s2[101];
    cin >> s1;
    cin >> s2;

    for (i = 0; i < strlen(s1); i++)
    {

        if (toupper(s1[i]) < toupper(s2[i]))
        {
            flag = -1;
            break;
        }
        if (toupper(s1[i]) > toupper(s2[i]))
        {
            flag = 1;
            break;
        }
    }
    cout << flag;
}