#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str ="asmifvfnsfffedfs";
    // convert into upper case string

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;

        }
        
    }
    cout<<str<<endl;

    // convert into lower case string

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;         //change

        }
        
    }
    cout<<str<<endl;

    // **USING FUNCTION**

    transform(str.begin(), str.end(),str.begin(), ::toupper);
    cout<<str<<endl;
    // lower case
    transform(str.begin(), str.end(),str.begin(), ::tolower);
    cout<<str<<endl;

    //!!! sorting in string !!!
    
    string s ="452396578";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
    
    return 0;
}