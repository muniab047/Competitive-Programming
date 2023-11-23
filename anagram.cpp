#include <bits/stdc++.h>


using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b;

    sort(b.begin(), b.end()); 

    for (int i = 0; i <= (a.size() - b.size()); ++i) { 
        c = a.substr(i, b.size()); 

        sort(c.begin(), c.end()); 

        if (b == c) {
            cout << i << " ";
        }
    }

    return 0;
}