#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class Solution {
public:
    int lengthOfLastWord(string s) {
        std::string accumilator;
        std::vector<std::string> vales;
        s += " ";
        int count = 0;
        for (auto iter : s) {
            if (iter != ' ') {
                accumilator += iter;

                count++;
            }
            else if (iter == ' ' and count != 0) {
                count = 0;
                vales.push_back(accumilator);
                accumilator.clear();
            }




        }
        return vales[vales.size() - 1].size();
    }
};
