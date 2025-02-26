#include<iostream>
using namespace std;
 int main(){
    int i = 1;
    char ch = 'A' ;
    int n;
    cout<<"enter no.";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch;
            ch += 1;
            j += 1;
        }
        cout<<endl;
        i += 1;
    }
    return 0;
 }