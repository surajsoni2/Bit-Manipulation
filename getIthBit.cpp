#include<iostream>
using namespace std;

int getIthBit(int n, int i){
    if(n==0 || (n==1 && i!=0)){
        return 0;
    }
    if(n==1 && i==0){
        return 1;
    }
    n = (n>>i);
    return (n&1);

}
int main(){
    int n,i;
    cout<<"Enter the number you want get it's ith bit ";
    cin>>n;
    cout<<"Enter the ith bit place ";
    cin>>i;

    cout<<"Message: Position of bits start from 0 to n";
    cout<<getIthBit(n,i);

    return 0;
}