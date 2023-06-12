#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int binary_search(vector<int>v, int key){
   int n = v.size();
   sort(v.begin(), v.end());
   int left = 0; int right = n-1;
   while(left<=right){
      int mid = (left + right)/2;
      if(v[mid]==key){
         return mid;
      }
      else if(v[mid]<key){
         left = mid+1;
      }
      else{
         right = mid-1;
      }
   }
   return -1;
}


void solve(){
   int n; cin>>n;
   vector<int>v(n);
   for(auto &i : v) cin>>i;
   int key; cin>>key;

   cout<<binary_search(v, key);
}

int main(){
   system("cls");
   
   solve();
   
   return 0;
}