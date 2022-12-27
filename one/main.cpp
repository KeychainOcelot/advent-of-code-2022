#include <iostream>
#include <fstream>
#include <string>

int main()
{
    long int max = 0, sum = 0, buf = 0;
    std::fstream inFile, outFile;
    std::string buffer;
    inFile.open("./input.txt", std::ios::in);

    while(getline(inFile, buffer))
    {
        buf = std::stol(buffer);
        sum += buf;
        if(sum > max) {
            max = sum;
        }
        sum = 0;
    }
    std::cout << max << std::endl;
    return 0;
}
