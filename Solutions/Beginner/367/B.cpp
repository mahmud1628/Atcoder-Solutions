#include<iostream>
using namespace std;

int main() {
    string x;
    cin>>x;
    while(x[x.size() - 1] == '0') {
        x.pop_back();
    }
    if(x[x.size() - 1] == '.') {
        x.pop_back();
    }
    cout<<x<<endl;
}