#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    char a= 'A';
    vector<char>v;

    if(s.size()>26){
        cout<<-1;
    }
    else{
        for(int i=0; i<26;i++){
            int counter= count(s.begin(), s.end(), a);
            if (counter==0){
                v.push_back(a);

            }
            else if(counter>1){
                cout<<-1;
                break;
            }
            
            a+=1;


        }
        int j=0;
         for(int i=0; i<s.size(); i++){
            if(s[i]!='?'){
                cout<<s[i];
            }
            else{
                cout<<v[j];
                j++;
            }
         }


    }
}