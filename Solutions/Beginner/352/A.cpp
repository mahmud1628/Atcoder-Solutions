#include<iostream>
using namespace std;

int main() {
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    if((x<= z && y>=z) || (x>=z && y<=z)) {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}