#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

int main(int argc, char *argv[])
{
    std::string input = "./input.txt";
    if(argc > 1) {
        input = argv[1];
    }

    std::string line;
    std::fstream file(input);

    std::vector<int> totals(1, 0);
    while(std::getline(file, line))
    {
        if(line.size() == 0)
        {
            totals.emplace_back(0);
        }
        else
        {
            totals.back() += std::stoi(line);
        }
    }

    std::nth_element(std::begin(totals), std::begin(totals) + 3, 
            std::end(totals), std::greater<int>());
    const auto sum = totals[0] + totals[1] + totals[2];
    std::cout<<sum<<'\n';
    return sum;
}
