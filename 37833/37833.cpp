#include <iostream>
using namespace std;

int c{}; int t{};
int maxx{};



int main()
{
    cout << "How many numders?" << endl;
    cin >> c;
    if (c > 1000)
        cout << "Re-enter numbers" << endl;
    else
    int a[c] = {};
    for (int i = 0; i < c; i++)
    {   
        cin >> t;
        if (t > 30000)
        {
            cout << " Re-enter data" << endl;
            i--;
        }
        else a[i] = t;
    }
    for (int j = 0; j < c; j++)
    {
        if (a[j] % 3 == 0)
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