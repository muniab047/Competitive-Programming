#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for( int i=1; i<numbers.size(); i++ ){
            int d= target - numbers[i];
            int lo = lower_bound(numbers.begin(),numbers.begin()+i-1,d)-numbers.begin();
            if(lo < numbers.size() && numbers[lo]==d){
                return {lo+1, i+1 };
            }
        }
        return {-1, -1};
    }
};