#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++){
           char ch = 'A'+i-1;
            cout<<ch;
        } 
    cout<<endl;
 }
 return 0;
}