#include<iostream>
using namespace std;

int main() {
    int t=0,a=0;
    int n;
    for(int i=0;i<9;i++) {
        cin>>n;
        t+=n;
    }
    for(int i=0;i<8;i++) {
        cin>>n;
        a+=n;
    }
    cout<<t-a+1<<endl;
}