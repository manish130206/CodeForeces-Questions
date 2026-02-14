#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    
    vector<long long > arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    long long min_ops = INT_MAX;
    
    for(int i=0;i<n;i++){
        min_ops = min(min_ops, abs(arr[i]));
    }
    
    cout<<min_ops<<endl;
    
    return 0;
}
