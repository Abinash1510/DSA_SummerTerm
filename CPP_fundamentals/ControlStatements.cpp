// #include<bits/stdc++.h>
// using namespace std;

// void solve(){
//     // int num =9;

//     // string output = (num<10)?"number is less than 10":"Number is greater than 10";
//     // cout<<output<<endl;
// //   if(num<10){
// //     cout<<"Number less than 10";
// //   }
// //   else cout<<"NUmber greater than 10"<<endl;
//     // switch(num){
//     //     case 8:
//     //     cout<<"number is 8"<<endl;
//     //     break;

//     //     case 9:
//     //     cout<<"number is 9"<<endl;
//     //     // break;
//     //     case 10:
//     //     cout<<"number is 10"<<endl;
//     //     break;
//     //     default:
//     //     cout<<"other"<<endl;
//     //     break;

//     // }

//     // for(int i=1; i<=10; i++){
//     //     cout<<i<<endl;
//     // }
//     int i=1;
//     while(i<=10){
//         cout<<i<<endl;
//         i+=2;
//     }


// }

// int main(){
//    system("cls");
   
//    solve();
   
//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void solve(){
  long long x = 7;
  long long y = pow(x,512);
  cout<<y%(long long)400<<endl;
}

int main(){
   system("cls");
   
   solve();
   
   return 0;
}