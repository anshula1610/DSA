#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=3;i++){
        int value=i;
        for(int j=0;j<=i;j++){
            cout<<value;
            value++;
        }
        cout<<"\n";
    }
}