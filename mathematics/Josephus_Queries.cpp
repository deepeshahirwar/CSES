 //A. Binary Imbalance
 #include <bits/stdc++.h>
using namespace std;

int main() {
   
    int n,k; cin>>n,k; 
    vector<int>arr(n);  

    for(int i=0; i<n; i++){
        arr[i] = i+1; 
        // cout<<i+1<<" ";
    }  
    cout<<endl;
   int ans =0; 
   int j=1; 
   
    for(int i= 1; i<= k; i++){
        ans = arr[j%n]+1; 
        j += 2; 
    }
     
     cout<<"ans-> " << ans<<endl;
  
    return 0;
}
