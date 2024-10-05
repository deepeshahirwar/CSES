 //A. Binary Imbalance
 #include <bits/stdc++.h>
using namespace std;
void solve(){ 
    int n; cin>>n;
    string s;  
    cin>>s; 
      bool flag = false; 
      int one =0, zero =0;
     for(int i=0; i<n-1; i++){ 
        if(s[i] != s[i+1]){ 
           flag =true; 
           break;
        }else if(s[i] == '0'){
            zero++; 
        }else{
            one++;
        }
        
     }  
     
      if(s[n-1] == '0')zero++; 
      else one++;
        
      if(flag || zero > one ){ 
      cout<<"YES"<<'\n'; 
      } 
      else{  
       cout<<"NO"<<'\n';  
      }
        
}
int main() {
   int t; cin>>t; 
   while(t--){ 
       
         solve();

    }
    return 0;
}
