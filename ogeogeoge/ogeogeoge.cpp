#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите количество чисел в последовательности: ";
    cin >> n;

    int max_multiple_of_5 = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number; 

   
        if (number % 5 == 0) {
          
            if (number > max_multiple_of_5) {
                max_multiple_of_5 = number;
            }
        }
    }


    cout << max_multiple_of_5 << endl;

    return 0;
}