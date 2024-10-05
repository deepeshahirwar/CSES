 //A. Gift Carpet
 #include <bits/stdc++.h>
using namespace std;

int main() {
   int t; cin>>t; 
   while(t--){
    int n, m; 
    cin>>n>>m;
    vector<vector<char>>mat(n, vector<char>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    } 
     
     string need = "vika";
     int idx =0; 
      
      for(int j=0; j<m; j++){// for traversing column wise
        for(int i=0; i<n; i++){
            if(mat[i][j] == need[idx]){
                idx++; 
                break;
            }
        }
      } 
      cout<<((idx == 4) ? "YES\n" : "NO\n");
   } 
 
    return 0;
}
