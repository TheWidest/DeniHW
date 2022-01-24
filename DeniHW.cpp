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

    cout << "Вторая правка";

    return (0);
}
