#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int liner_search(vector<int> ls, int key){
    for(int i=0; i<ls.size(); i++){
        if(ls[i] == key){
            return i;
        }
    }
    return -1;
}


void solve(){
    int n; cin>>n; //size of array
    vector<int> pronou(n); //array
    for(auto &i : pronou){
        cin>>i;         // input array
    }
    cout<<endl;
    int key; cin>>key; // input key

    int wawu = liner_search(pronou, key);
    if(wawu == -1){
        cout<<"not found";
    }
    else{
        cout<<"found at index : " << wawu<<endl;
    }
}

int main(){
   system("cls");
   
   solve();
   
   return 0;
}