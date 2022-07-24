#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char A[101];
    cin >> A;
    int i = 0;
    for (i = 0; A[i] != '\0'; i++)
    {
        if (tolower(A[i]) == 'a' || tolower(A[i]) == 'e' || tolower(A[i]) == 'i' || tolower(A[i]) == 'o' || tolower(A[i]) == 'u' || tolower(A[i]) == 'y')
            continue;
        else
        {
            char c = (char)tolower(A[i]);
            cout << '.' << c;
        }
    }
}