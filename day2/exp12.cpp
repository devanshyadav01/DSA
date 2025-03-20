#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cout<<"enter no.";
    cin>>n;
    while(i<=n){
        int j = 2;
        while(j<=i){
            cout<<" ";
            j+=1;
        }
        int k = i;
      while(k<=n){
            cout<<k; 
            k+=1;
        }
        cout<<endl;
        i+=1;
    }
}