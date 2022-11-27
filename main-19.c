
#include <stdio.h>
int i,n;
void odd(int n)
{
 for(i=0;i<=n;i++)
  if(i%2!=0){
      printf("%d\n" ,i);
      
  } 
    
}
int main()
{
 printf("enter the number");
 scanf("%d",&n);
 
 odd(n);
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}

