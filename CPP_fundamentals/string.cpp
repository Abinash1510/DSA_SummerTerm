#include<bits/stdc++.h>
using namespace std;

void solve(){
  string dummyString = "Hello World";
  cout<< dummyString.length();
  dummyString[1] = '1';
  dummyString[10] = 'X';
  cout<<"Index : " <<dummyString[1] <<endl;
  cout<<"Index : " <<dummyString[10] <<endl;
  
  cout<<dummyString;
}

int main(){
   system("cls");
   
   solve();
   
   return 0;
}