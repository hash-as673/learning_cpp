#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "Hello World";
    cout<<s<<'\n';
    cout<<"Enter something:\n";
    string something;
    getline(cin,something);
    cout<<something<<endl;
  
    for (int i = 0; i < s.size(); i++){
        cout<<s[i]<<endl;
    }

    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--){
    //     string s;
    //     getline(cin,s);
    //     cout<<s<<endl;
    // }
    string str;
    string str_rev;

    for(int i = str.size() -1 ; i>= 0 ; --i){
        str_rev.push_back(str[i]);
    }

    //dealing with large numbers
    string n;
    cin>>n;
    int last_digit = n[n.size() - 1] - '0';
    cout<<last_digit;
    return 0;   
    
}