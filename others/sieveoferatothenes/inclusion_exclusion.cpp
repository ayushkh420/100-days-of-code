// this is the progrma for inclusion-exclusion principle 

//  Ques- how many numbers are divisible b/w 1 to 1000 by 5 or 7.


#include<iostream>
using namespace std;

int divisible(int n,int a, int b){
    int c1= n/a;
    int c2= n/b;

    int c3= n/(a*b);

    return c1+c2-c3;

}

int main(){
    int a,n,b;
    cin>>n>>a>>b;

    cout<<divisible(n,a,b)<<endl;
    return 0;
}