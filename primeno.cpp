#include<iostream>
using namespace std;
int main()
    {
        int n;
        cout<<"enter the number to be checked:";
        cin>>n;
        bool isprime=1;
        for(int i = 2;i<n;i++){
        if(n%i==0){
            //cout<<"number is not prime"<<endl;
            isprime=0;
            break;

        }
    }
        if(isprime=0)
        {
            cout<<"the number is not prime"<<endl;
        }
        else{
            cout<<"The number is prime"<<endl;
        }
    }