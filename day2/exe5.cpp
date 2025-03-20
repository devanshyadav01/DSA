#include<iostream>
using namespace std;
int main(){
    int i =  1;
    int n;
    cout<<"enter no.";
    cin>>n;
    while(i<=n){
        int j = 1;
        char start = 'A' + n - i;
        while(j<=i){
            cout<<start;
            start += 1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}