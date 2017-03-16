#include <stdio.h>
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"RUSSIAN");
cout<<"Проверка ввода и вывода строк\n";   

char* s = new char[];

cout << "Enter string :";

gets(s);
if(s!=NULL)
{
puts(s);
}


return 0;
} 