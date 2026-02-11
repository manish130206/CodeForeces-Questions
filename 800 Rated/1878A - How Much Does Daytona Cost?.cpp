#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        
        long long n,k;
        cin>>n>>k;
        
        bool is_k_present = false;
        
        vector<long long> arr(n);
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
            if(arr[i] == k){
                is_k_present = true;
            }
        }
        
        if(is_k_present){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
