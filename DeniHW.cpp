#include <iostream>
#include <ctime>

using namespace std;

int jopa (int base, int stepen)
{
    if (stepen > 1)
        return (base * jopa (base, stepen - 1));
    else
        return (base);
}

int main()
{
    int a, b;

    cin >> a;
    cin >> b;

    cout << jopa (a,b);

    return (0);
}
