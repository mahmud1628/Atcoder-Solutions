#include<iostream>
#include<stack>
using namespace std;

int main() {
    string s,t;
    getline(cin,s);
    getline(cin,t);
    int c=0;
    for(int i=0;i<t.size();i++) {
        if(s[c] == t[i]) {
            cout<<i+1<<" ";
            c++;
        }
    }
}