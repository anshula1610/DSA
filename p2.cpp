#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number to be checked:";
    cin>>n;
    int i = 1;
    while(i<n){
        if(n%i==0){
            cout<<"the number is not prime for"<<i<<endl;
        }
        else{
            cout<<"The number is prime"<<i<<endl;
        }
        i++;

    }
    return 0;
}