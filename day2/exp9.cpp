#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cout<<"enter no.";
    cin>>n;
    while(i<=n){
        //for space
        int j=2;
        while(j<=i){
            cout<<"-";
            j += 1;
        }

        //for star
        int k = n;
        while(k>=i){
            cout<<"*";
            k-=1;
        }
        cout<<endl;
        i+=1;



    }
}