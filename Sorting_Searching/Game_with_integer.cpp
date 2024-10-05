 //A. Game with Integers
 #include<bits/stdc++.h> 
 #define ll long long 
 #define pb() push_back() 
 #define mod  1e9 + 7  
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));  

using namespace std; 


int main() { 
    fastread(); 

   int t; cin>>t; 
   while(t--){ 
       int n; cin>>n;  
       vector<ll>a(n);

      for(int i=0; i<n; i++){
        cin>>a[i];
      }  
  
      sort(a.begin(), a.end());
       if(n == 1){
        cout<<0<<endl; 
       }
       else{
         cout<<a[n-1] - a[0] << endl;
       } 

    } 

    return 0;
}
