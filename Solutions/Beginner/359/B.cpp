#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++) cin>>a[i];
    int res = 0;
    for(int i=0;i<2*n-2;i++) {
        if(a[i] == a[i+2]) res++;
    }
    cout<<res<<endl;
}