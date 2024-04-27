#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<string> a(N);
    for(int i=0;i<N;i++) {
        cin>>a[i];
    } 
    vector<string> b(N);
    for(int i=0;i<N;i++) {
        cin>>b[i];
    }
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if(a[i][j] != b[i][j]) {
                cout<<i+1<< " " <<j+1<<endl;
                return 0;
            }
        }
    }
}