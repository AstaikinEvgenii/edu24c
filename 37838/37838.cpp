#include <iostream>

int main() 
{
    int n; 
    std::cin >> n;

    int count = 0; 

    for (int i = 0; i < n; ++i) 
    {
        int number;
        std::cin >> number; 
        if (number % 10 == 3) {
            count++;
             
        }
    }

    std::cout << count << std::endl; 
    return 0;
}