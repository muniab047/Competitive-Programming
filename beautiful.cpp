#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, n1,n2,n3,n4;
    bool b=true;
    string s;

    cin>>n;
    while(b){
        n++;
        s= to_string(n);
        n1= count(s.begin(),s.end(), s[0]);
        n2= count(s.begin(),s.end(), s[1]);
        n3= count(s.begin(),s.end(), s[2]);
        n4= count(s.begin(),s.end(), s[3]);

        if(n1==1&&n2==1&&n3==1&&n4==1){
            cout<<n;
            b=false;
        }

        
    }

    
}