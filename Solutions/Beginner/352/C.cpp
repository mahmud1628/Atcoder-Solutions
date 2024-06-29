#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    int m=n;
    while(m--) {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    unsigned long long int res =0;
    for(int i=0;i<n;i++) {
        res+=v[i].first;
    }
    unsigned long long int max = res +  v[0].second - v[0].first; 
    for(int i=1;i<n;i++) {
        if(res + v[i].second - v[i].first > max) 
            max = res + v[i].second - v[i].first;
    }
    cout<<max<<endl;
}