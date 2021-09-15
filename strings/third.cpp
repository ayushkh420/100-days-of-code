#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s = "sdfhfswwwwwjfnvkds";
    int freq[26];
    for (int i = 0; i < 26; i++)

        freq[i] = 0;

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']++;
    }
    char ans;
    int maxF = -1;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = 'a'+i;
        }
    }

    cout << maxF << endl;
    cout << ans << endl;

    return 0;
}