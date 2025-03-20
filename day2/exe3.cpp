#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
   
     cout<<"enter no.";
      cin>> n;
      while(i<=n){
        int j = 1;
       
        while(j<=i){
            char ch = ('A' + j + i - 2);
            cout<<ch;
            
            j += 1;
        }
        cout<<endl;
        
        i +=1 ;
      }
    return 0;
}