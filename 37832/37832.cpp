#include <iostream>
using namespace std;

int c{};
int k{};

int main()
{
    cout << "How many numbers?" << endl;
    cin >> c;

    int a[c] = {};

    for (int i = 0; i < c; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < c; j++)
    {
        if (a[j] % 4 == 0)
        {
            k++;
        }
    }

    cout << k << endl;

    return 0;
}
