#include<iostream>
using namespace std;

int main(){
    string binaryNum;
    cin>>binaryNum;

    int ans=0,j=1;
    for (int i = binaryNum.size()-1; i >=0; i--)
    {
        if (binaryNum[i]=='1')
        {
            ans=ans+j;
            
        }
        j*=2;
    }
   cout<<ans; 
    
}