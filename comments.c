#include<stdio.h>
#define MAX_SIZE 50
void main()
{
char comment[MAX_SIZE];
int i=2,a=0;
printf("\n Enter comment:");
fgets(comment,MAX_SIZE,stdin);
if(comment[0]=='/')
{
if(comment[1]=='/')
printf("\n it is an comment");
else if(comment[1]=='*')
{
for(i=2;i<=40;i++)
{
if(comment[i]=='*'&&comment[i+1]=='/')
{
printf("\n it is a comment");
a=1;
break;
}
else continue;
}
if(a==0)
printf("\n it is not a comment ");
}
else
printf("\n it is not a comment");
}
else
printf("\n it is not a comment");
}
