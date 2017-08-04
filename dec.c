#include <stdio.h>
#include<conio.h>
int main()
{
int d[20];
int decimalno,i=0;
printf("Enter the decimal number you want to conver to binary: \n");
scanf("%d",&decimalno);
while(decimalno>0)
{
d[i]=decimalno%2;
i++;
decimalno=decimalno/2;
}
for(int j=i-1;j>=0;j--)
{
printf("%d",d[j]);
}
printf("The binary version of the number you input, %d, is = ",decimalno);
getch();
}          
