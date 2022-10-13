// Find the no. of set bits(1's bits) of any number 
// Eg. - n=9
//       9= 00001001
//        no. of set bits(1's bits) = 2

#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;

    while (n!=0)
    {
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;
    
    return 0;
}