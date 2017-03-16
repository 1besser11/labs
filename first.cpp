#include <stdio.h>
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main()
{
setlocale(LC_ALL,"RUSSIAN");
cout<<"Проверка ввода и вывода строк\n";   

for(int i=0;i<15;i++)
printf("Hello world\n");

return 0;
} 