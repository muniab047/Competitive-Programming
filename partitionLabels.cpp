#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> lastIndex;
        for (int i=0; i<s.length(); i++) {
            lastIndex[s[i]] = i;
        }

        vector<int> res;
        int max_i = 0;
        int prev = -1;

        for (int i=0; i<s.length(); i++) {
            max_i = max(max_i, lastIndex[s[i]]);
            if (max_i == i) {
                res.push_back(max_i - prev);
                prev = max_i;
            }
        }
        return res;
    }
};