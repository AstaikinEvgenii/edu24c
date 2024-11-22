#include <iostream>
using namespace std;

int c{}; int maxx{};

int main ()
{
    cout << "How many numbers?" << endl;
    cin >> c;
    int a[c] = {};
    for (int i = 100; i < c; i++)
{
    cin >> a[i];
}
for (int j = 0; j < c; j++)
{
    if (a[j] % 6 == 0)
    {
        if (a[j] > maxx)
        {
            maxx = a[j];

        }

    }

}
cout << maxx << endl;

    return 0;
}
