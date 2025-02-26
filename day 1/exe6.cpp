#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int count = 1;
    int n;
    cout<<"enter no.";
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<count;
            j=j+1;
            count += 1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}