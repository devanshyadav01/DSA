#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cout<<"enter no.";
    cin>>n;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        int j = 1;       
        while(j<=i){
            cout<<i+j-1;           
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}