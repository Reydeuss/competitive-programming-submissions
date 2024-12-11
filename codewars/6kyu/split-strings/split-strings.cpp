#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s) {
    std::vector<std::string> result;
    const int len = s.size();

    if (len % 2 == 0) {
        for (int i = 0; i < len; i += 2) {
            result.push_back(s.substr(i, 2));
        }
    } else {
        for (int i = 0; i < len - 1; i += 2) {
            result.push_back(s.substr(i,2));
        }
        result.push_back(s.substr(len - 1, 1) + "_");
    }  
    return result;
}
