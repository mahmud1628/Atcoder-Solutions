#include<iostream>
#include<vector>
#include<stack>
#include<cmath>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<int> a(N);
    for(int i=0;i<N;i++) cin>>a[i];
    stack<int> s;
    for(int i=0;i<N;i++) {
        s.push(a[i]);
        again:
        if(s.size() == 1) continue;
        int temp = s.top();
        s.pop();
        if(temp == s.top()) {
            s.pop();
            s.push(temp+1);
            goto again;
        }
        else {
            s.push(temp);
        }
    }
    cout<<s.size()<<endl;
}