
#include <stdio.h>

int main()
{
int d,i,j;
printf("enter the number\n");
scanf("%d",&d);

for(i=0;i<5;i++)
{
    for(j=0;j<=4+i ;j++ )
    {
    if(j>=4-i )
     printf("*");
     else
     printf(" ");
    }
printf("\n");
    
}
for(i=5;i<9;i++)
{
   for(j=0;j<=12-i;j++) 
    {
     if(j>=i-4)
     printf("*");
     else
     printf(" ");
        
    }
    printf("\n");
    
 }












    return 0;
}


