/*#include <cstdio>
#include <cstdlib>

int main() {
    char buf[64];
    long max = 0, sum = 0;
    while(fgets(buf, sizeof(buf), stdin) != NULL) {
        if(buf[0] == '\n' || buf[0] == '\r') {
            if(sum > max) max = sum;
            sum = 0;
            continue;
        }
        sum += strtol(buf, NULL, 10);
    }
    printf("Elf with more cals has %ld cals.\n", max);
    return 0;
}*/

#include <iostream>
#include <string>

int main()
{
    std::string buf;
    long int max = 0, sum = 0;
    while(std::cin >> buf)
    {
        if(buf[0] == '\n')
        {
            if(sum > max)
                max = sum;
            sum = 0;
            continue;
        }
        sum += std::stoi(buf);
    }
    std::cout << max << std::endl;
    return 0;
}
