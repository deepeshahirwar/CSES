 
 #include<bits/stdc++.h> 
 #define ll long long 
 #define pb() push_back() 
 #define mod  1e9 + 7  
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));  

using namespace std; 
const int maxn = 2e5 + 10;

int main() { 
    fastread(); 

       int n,x; cin>>n>>x;  
      int a[maxn];
      bool  have_gon_yet[maxn];

      for(int i=0; i<n; i++){
        cin>>a[i];
      }  
  
      sort(a, a+n);
      int ans = 0; 
      int i=0; 
      int j=n-1; 
       
       while(i < j){
        if(a[i]+a[j] > x){
            --j;
        } 
        else{
            ans++;   
            have_gon_yet[i] = have_gon_yet[j]= true; 
            i++;  
            --j;
        }
       } 

     for(int i=0; i<n; i++){
        if(have_gon_yet[i] == false)ans++;
     }
     
     cout<<ans<<endl;
    
    return 0;
}
