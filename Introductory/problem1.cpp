 //Palindrome
 #include <bits/stdc++.h>
using namespace std;
bool solve(string s){ 
    int n = s.size();
      
     int i=0; 
     int j = n-1;
      while(i <= j){
        if(s[i] != s[j]){
            return false;
        } 
        i++; 
        j--;
      }  
      return true;  
        
}
int main() {
   string s; 
   cin>>s; 
    
    bool ans2 = solve(s); 
    cout<<ans2<<endl; 

    return 0;
}
