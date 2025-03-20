#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cout<<"enter no.";
    cin>>n;
    while(i<=n){
        
        //for stars
        int j = n;
        while(j>=i){
            cout<<"* ";
            j -= 1;
        }
    
        
        // for space
        int k = 2 ;
        while(k<=i){
            cout<<"- ";
           k += 1;
        }
        cout<<endl;
        i+=1;
    }
    
    
}