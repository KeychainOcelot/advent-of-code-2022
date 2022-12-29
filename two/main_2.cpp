#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
    std::string input = "./input";
    if(argc > 1) {
        input = argv[1];
    }

    std::string line;
    std::fstream file(input);

    int score = 0;
    while(std::getline(file, line)) {
        if(line[2] == 'X') {
            score += (line[0] - 'A' - 1 + 3) % 3 + 1;
        } else if(line[2] == 'Y') {
            score += 3 + line[0] - 'A' + 1;
        } else {
            score += 6 + (line[0] - 'A' + 1) % 3 + 1;
        }
    }
    std::cout << score << std::endl;
    return 0;
}
