// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        long long n,x;
    cin>>n>>x;
    
    vector<long long> arr;
    arr.push_back(0);
    
    for(int i=0;i<n;i++){
        long long temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    
    arr.push_back(x);
    n = arr.size();
    
    long long max_diff = INT_MIN;
    
    for(int i=1;i<n;i++){
        if(i == n-1){
            max_diff = max(max_diff, 2*(arr[i] - arr[i-1]));
        }
        else{
            max_diff = max(max_diff, arr[i] - arr[i-1]);
        }
    }
    
    cout<<max_diff<<endl;
    }
    return 0;
}
