#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cout<<"enter no.";
    cin>>n;
    while(i<=n){
        int j = 1;
        char ch = 'A' + n - 1;
        while(j<=i){
            
            char newone = ch  - j +1 ;
            cout<<newone;
           j = j + 1;
        }
        cout<<endl;
       i = i + 1;
    }
    return 0;
}