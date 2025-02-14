#include <iostream>
#include <cmath>

int main() {
    const int numSymbols = 12;
    const int passwordLength = 15; 
    const int additionalDataBytes = 12; 
    const int numUsers = 50; 

    
    int bitsPerSymbol = std::ceil(std::log2(numSymbols));

   
    int bytesPerPassword = std::ceil((passwordLength * bitsPerSymbol) / 8.0);

    int totalBytesPerUser = bytesPerPassword + additionalDataBytes;


    int totalMemoryRequired = totalBytesPerUser * numUsers;

    std::cout << totalMemoryRequired << std::endl; 

    return 0;
}