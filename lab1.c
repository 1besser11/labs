#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct team
{
    int points;
    char name[20]; 
};





int main()
{
    char score[3];
char s;
int i=0;
FILE *f;
char delim = ',';
char d='\n';
if ((f = fopen("/home/nikita/Downloads/premier_league.csv", "r"))==NULL)
printf("error\n");

char *name = new char;
char *n = new char;
int n1;
while((s = fgetc(f))!=d ) 
{
    
n[i++]=s;
}
n1=atoi(n);
cout<<n1<<endl<<endl<<endl;
i=0;

team *t = new team;
int y =0;
int r =0;
while(s!=EOF){
while((s=fgetc(f))!=delim && s!=EOF) 
{

t[y].name[i++]=s;
}
i=0;
cout<<t[y].name;
int m = 0;
int p=0;
t[y].points=0;
for(int k=0;k<10;k++){
while(s!=EOF  &&(s =fgetc(f))!=delim  &&  s !=d ) 
{
   score[m++] = s;
}

if(score[0]>score[2])
t[y].points=t[y].points+3;
if(score[0]==score[2])
t[y].points=t[y].points+1;
if(score[0]<score[2])
t[y].points=t[y].points+0;

m=0;
}
if (s!=EOF){
cout<<t[y].points<<endl;

y++;
}
}
//printf("success\n");


fclose(f);
//cout<<t[1].points;
int tz=0;
team temp;
for(int i = 0; i < n1;i++)
    {            
        for(int j = 0; j < n1; j++) 
        {     
            if (t[j + 1].points < t[j].points) 
            {
                temp = t[j + 1]; 
                t[j + 1] = t[j]; 
                t[j] = temp;
            }
        }
    }

    for(int i =n1; i>0;i--)
    cout<<i<<t[i].name<<endl;


FILE *g=fopen("/home/nikita/Downloads/result.csv","w");
 for(int i =n1, k=0; i>0;i--,k++){
fprintf(g,"%i,%s,%i\n",k+1, t[i].name, t[i].points);
}
fclose(g);
}