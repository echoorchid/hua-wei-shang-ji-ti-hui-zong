/*
题目描述:
计算字符串最后一个单词的长度，单词以空格隔开。

输入例子:
hello world
输出例子:
5
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s) && !cin.eof()){
        int n=0,flag=1;
        for(int i=s.length()-1;i>=0;--i){//倒着计算
            if(flag && s[i]==' '){//如果末尾有空格，先清除末尾空格
                continue;
            }
            else if(s[i]!=' '){
                flag = 0;
                ++n;
            }
            else{
                break;
            }
        }
        cout << n << endl;
        cin.ignore();
    }
    return 0;
}
