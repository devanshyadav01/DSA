#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cout<<"enter no.";
    cin>>n;
    while(i<=n){
        int j = 1;
        int count = i;
        while(j<=i){
            cout<<count;
            j += 1;
            count += 1;
         }
         cout<<endl;
         i+=1;
    }
}