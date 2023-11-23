#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;

    cin>>n;

    for(int i=0; i<n;i++){
        int j=0;
        string t="";
        cin>>s;
        
         while(j<s.size()){
            if(s[j]==s[j+1]){
                j+=2;
                continue;
            }
            else{
                if(count(t.begin(),t.end(),s[j])==0){
                    t+=s[j];

                }
                
                j++;
            }

         }
         sort(t.begin(),t.end());
         cout<<t<<endl;
         

        
        

        }
        

    }
