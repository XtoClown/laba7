#include <iostream>
#include "string.h"
using namespace std;
int main()
{
    int j;
    char s[80];
    char s1[200];
    char ch = ' ';
    cin.getline(s, 50);
    //j = strlen(s1);
    cout << "Your line " << s << endl;
    for (int i = 0; i < strlen(s); i++) {
        if ((ch == s[i + 1]) || (s[i - 1] == 0) || (ch == s[i - 1]) || (s[i + 1] == 0)) {
            cout << s[i] << ch << endl;
            s1[j] == s[i] + ch;
        }
    }
    cout << s1 << endl;
    return 0;
}