#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int length;
    cout << "Enter any string : ";
    cin>>str;
    length = strlen(str);
    cout << "Length of the string is : " << length;
    return 0;
}

