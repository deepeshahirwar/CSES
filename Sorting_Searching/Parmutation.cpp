 //Parmutations
 #include<bits/stdc++.h> 
 #define ll long long 
 #define pb() push_back() 
 #define mod  1e9 + 7  
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));  

using namespace std; 

int main() { 
    fastread(); 

    
       int n; cin>>n;  
       vector<int>a(n); 
       // base case 
       if(n <= 3 && n != 1){
        cout<<"NO SOLUTION"<<'\n';
       } 
       else if(n == 1){
        cout<<n<<endl;
       } 
       else{
          for(int i=2; i<=n; i+=2){  
             cout<<i<<" ";
            }   
             for(int i=1; i<=n; i+=2){  
             cout<<i<<" ";
            }  
       }
      
    return 0;
}
