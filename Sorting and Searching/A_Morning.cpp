 //A. Morning
 #include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;  
    cin>>s; 

    int prev = 1, curr, ans =0; 
    
     for(int i=0; i<4; i++){ 
         curr = s[i]-'0';
        if(curr == 0){
            curr = 10;  
        } 
        ans += (abs(curr - prev) + 1); 
        prev = curr; 
     }
      cout<<ans<<'\n';
}
int main() {
   int t; cin>>t; 
   while(t--){ 
    solve();
   } 
 
    return 0;
}
