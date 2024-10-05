  // Distinct number
  #include<bits/stdc++.h> 
 #define ll long long 
 #define pb() push_back() 
 #define mod  1e9 + 7 
 #define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 using namespace std;
  
 int main(){  
    fastread();
    int n; cin>>n; 
    int arr[n]; 

     
  for(int i=0; i<n; i++){ 
    cin>>arr[i]; 
 }  
 sort(arr, arr + n);  
int dist_num =0;
 for(int i=0; i<n-1; i++){ 
     if(arr[i] != arr[i+1]) dist_num++;
 }  
  
 cout << dist_num + 1; 
  
  return 0;
 }
 
