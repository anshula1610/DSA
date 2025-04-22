#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int count = 1;
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            cout<<setw(4)<<count;
            count++;
        }
        cout<<"\n";
    }
    return 0;
}