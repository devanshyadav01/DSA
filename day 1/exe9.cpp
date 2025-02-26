#include<iostream>
using namespace std;
int main(){
int i = 1;
int n;
char ch = 'A';
cout<<"enter alphabet";
cin>>n;
while(i<=n){
    int j = 1;
    
    while(j<=n){
    cout<<ch;
    
    j += 1;
    }
    cout<<endl;
    ch += 1;
    i += 1;
}   
    return 0;
}