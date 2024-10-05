 //A. Line trip
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
       int n,x; cin>>n>>x;  
       int  ans =0;
      int p=0; int a;
      for(int i=0; i<n; i++){ // for max_diff
        cin>>a; 
       ans = max(ans , a-p); 
       p = a;
      }  
   
       ans = max(ans, 2*(x-p));// for last turn
       
       cout<< ans <<endl;

    } 

    return 0;
}
