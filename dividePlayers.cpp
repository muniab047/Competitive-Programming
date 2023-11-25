#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        std::sort(skill.begin(), skill.end());
        long long result = 0;
        auto left = 0;
        auto right = skill.size()-1;
        long long sum = skill[left] + skill[right];
        while (left < right) {
            if (skill[left] + skill[right] == sum) {
                result += skill[left] * skill[right];
            } else {
                return -1;
            }
            left+=1;
            right-=1;
        }

        return result;
    }
};
