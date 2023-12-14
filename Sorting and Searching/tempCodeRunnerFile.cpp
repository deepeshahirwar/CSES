 //A. Game with Integers
 #include<bits/stdc++.h> 
 #define ll long long 
 #define pb() push_back() 
 #define mod  1e9 + 7  
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));  

using namespace std; 


int main() { 
    fastread(); 

  
       int n,x; cin>>n>>x;  
       vector<ll>a(n);

      for(int i=0; i<n; i++){
        cin>>a[i];
      }  
  
      sort(a.begin(), a.end());
      int ans = 0; 
      for(int  i=0; i<n-1; i++){
        ans += a[i+1]-a[i];
     } 
     if(x-ans > 0){
     cout<<"ans->"<<x-ans<<endl;
     }else{
        cout<<0<<endl;
     }
   

    return 0;
}
