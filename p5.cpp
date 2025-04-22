#include<iostream>
using namespace std;
int main(){
    int count=1;
    for(int i=0;i<=3;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0;i<=3;i++){
        for(int j=0;j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
    for(int i=0;i<=3;i++){
        for(int j=0;j<=i;j++){
            cout<<count;
            count++;
        }
        cout<<"\n";
    }
    return 0;

}