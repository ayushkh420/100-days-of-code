// 

#include<iostream>
using namespace std;

int getbit(int n,int pos){
    return((n & (1<<pos))!=0);
}

int setbit(int n, int pos){
    return (n | (1<<pos));
}

int clearbit(int n, int pos){
    int mask = ~(1<<pos);
    return(n & mask);
}

int main(){
    // cout<<setbit(5,1);
    cout<<clearbit(5,2);
    return 0;
}