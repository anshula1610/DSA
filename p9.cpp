#include<iostream>
using namespace std;
int main(){
    char val='A';
    for(int i=0;i<=3;i++){
        char p=val;
        for(int j=0;j<=3;j++){
            cout<<p;
            p++;
        }
        cout<<endl;
    }

}