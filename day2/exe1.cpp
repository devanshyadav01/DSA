#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    char ch = 'A';
    cout<<"eneter no.";
    cin>>n;
    while(i<=n){
        int j = 1;
            char nw = ch;
        while(j<=n){
            cout<<nw;
            nw += 1;
            j += 1;
        }
        cout<<endl;
        ch += 1;
        i += 1;
    }
    return 0;
}
