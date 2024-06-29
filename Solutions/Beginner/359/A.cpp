#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    getchar();
    int res = 0;
    while(n--) {
        string s;
        cin>>s;
        if(s == "Takahashi") res++;
    }
    cout<<res<<endl;
}