#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    std::string a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    a.append(b);
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    if (a == c)
        std::cout << "YES";
    else
        std::cout << "NO";
}