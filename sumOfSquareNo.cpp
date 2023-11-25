#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int x)
    {
        unsigned long long l = 0;
        unsigned long long r = (unsigned long long)x + 1;
        unsigned long long m = 0;
        unsigned long long square = 0;

        while (l < r)
        {
            m = (l + r) / 2;

            square = m * m;

            if (square <= x)
            {
                if (square == x)
                {
                    return true;
                }

                l = m + 1;
            }
            else
            {
                r = m;
            }
        }

        return false;
    }

    bool judgeSquareSum(int c) {
        for (auto i = 0; i <= sqrt(c); i++)
        {
            if (isPerfectSquare(c - i * i))
            {
                return true;
            }
        }

        return false;
    }
};