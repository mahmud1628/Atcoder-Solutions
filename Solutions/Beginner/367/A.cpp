#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(b < c) {
        if(a > b && a < c) cout<< "No" <<endl;
        else cout << "Yes" <<endl;
    }
    else {
        if( a < c ) {
            if( a >= 12 && b>= 12) {
                if(a > b) {
                    cout << "No" <<endl;
                }
                else {
                    cout << "Yes" <<endl;
                }
            }
            else {
                cout << "No" <<endl;
            }
        }
        else {
            cout << "Yes" <<endl;
        }
    }
}