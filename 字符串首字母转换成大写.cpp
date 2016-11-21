#include <iostream>
#include <string>
#include <cctype>

/*
 *  input: this is a book.
 * output: This Is A Book.
 */

using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int m=0;
    int len = str.size();
    for (int i = 0; i < len; ++i)
    {
        if( m==0 && isalpha(str[i])){
            str[i] = toupper(str[i]);
            m = 1;
        }
        else if( !isalpha(str[i]) ) {
            m = 0;
        }
    }
    cout << str <<endl;
    return 0;
}
