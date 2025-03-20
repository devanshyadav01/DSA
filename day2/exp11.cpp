#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cout<<"enter no.";
    cin>>n;
    while(i<=n){
        int j = n;
        while(j>=i){
            cout<<" ";
            j-=1;
        }

        int k = 1;
    while(k<=i){
        cout<<i;
        k+=1;
    }
    cout<<endl;
    i+=1;
    }
}