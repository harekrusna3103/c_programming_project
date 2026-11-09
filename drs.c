#include<stdio.h>
int main()
{
    int N,R=0,Remnder;
    printf("Enter a number :---   ");
    scanf("%d",&N);
    while(N!=0)
      {
          Remnder=N%10;
          R=R*10+Remnder;
          N/=10;
      }
     printf("The reverse of a number is =%d\n",R);
    return 0;
}