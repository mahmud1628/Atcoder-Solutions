#include<iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int c = abs(a - b);
    if(c == 1 || c==9) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}