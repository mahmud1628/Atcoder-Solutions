#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int s = 1;
    int i = 1;
    while(s<=1000) {
        s = c * i;
        i++;
        if(s>=a && s<=b) {
            cout<<s<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}