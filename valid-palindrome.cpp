#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool b=true;
    int start, end;
    

    s.erase(remove_if(s.begin(),s.end(),[](char a){return !isalnum(a);}), s.end());
    transform(s.begin(), s.end(), s.begin(), ::tolower);


    if(s!=""){
        start=0;
        end=s.size()-1;
        while(start <= end){
        
        
        if(s[start]!=s[end]){
            b=false;
            cout<<"false";
            break;
        }
     }

    }
   
    if(b){
        cout<<"true";
    }




}