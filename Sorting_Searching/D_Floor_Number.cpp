 //D. Floor Number
 #include <bits/stdc++.h>
using namespace std;
void solve(){ 
    int n,x; cin>>n>>x; 
    
       int cnt = 1;
     for(int i=2; i<=n; i += x){ 
        if(n <= i){
            break;
        }  else{
            cnt++;
        } 
     } 
     cout<<cnt<<endl;

    }
int main() {
   int t; cin>>t; 
   while(t--){ 
       
         solve();

    }
    return 0;
}
