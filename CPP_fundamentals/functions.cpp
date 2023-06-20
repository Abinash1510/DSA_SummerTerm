#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;




//returnType functionName(dataType parameterName){

//}

//create/declare
// void myFunc(){
//     cout << "This is my Function" << endl;
// }

// void myFunc2(){
//     myFunc();
// }

// int power(int base, int power){
//     int ans = 1;
//     for(int i = 1; i <= power; i++){
//         ans = ans * base;
//     }
//     return ans;
// }

// void test(int n){
//     n++;
//     cout << "test method n is : " << n << endl;
// }

// int main(){
//     int n;
//     cin >> n;
//     test(n);
//     cout << "main method n is : " << n << endl;




    
    // int a , b;
    // cin >> a >> b;
    // cout << "Ans is : " << power(a,b);

    // int ans = 1;

    // for(int i = 1; i <= b; i++){
    //     ans = ans * a;
    // }

    // cout << "ans is : " << ans << endl;

    // int c , d;
    // cin >> c >> d;

    // ans = 1;

    // for(int i = 1; i <= d; i++){
    //     ans = ans * c;
    // }

    // cout << "ans is : " << ans << endl;

    // int e , f;
    // cin >> e >> f;

    // ans = 1;

    // for(int i = 1; i <= f; i++){
    //     ans = ans * e;
    // }

    // cout << "ans is : " << ans << endl;


    //-------------------------Pass by value

// }

//Create a function to find if the number entered by the user is even or odd


// void checkEvenOdd(int num) {
//   if (num % 2 == 0) {
//     cout << num << " is even." << endl;
//   } else {
//     cout << num << " is odd." << endl;
//   }
// }

// int main() {
//   int num;
//   cout << "Enter a number: ";
//   cin >> num;

//   checkEvenOdd(num);

//   return 0;
// }

void checkEvenOdd(int num){
    string result = (num%2 == 0) ? "The number is EVEN": "The number is ODD";
    cout<<result<<endl;
}

int main(){
    system("cls");
    cout<<"Input number of test cases: ";
    int tc; cin>>tc;
    while(tc--){
        cout<<"Type in the number: ";
        int num; cin>>num;
        checkEvenOdd(num);
    }

}
