#include<stdio.h>
// int get_max(int x,int y)
// {
//     if(x>y)
//     return x;
//     else
//     return y;
// }
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int max = get_max(a,b);
//     printf("max=%d\n",max);
//     int i = 100;
//     int j = 200;
//     int Max = get_max(i,j);
//     printf("max=%d\n",Max);
//     return 0;
// }

int is_prime(int n)
{
    int m = 0;
    for(m=2;m<sqrt(n);m++)
    {
     if(n%m == 0)
     return 0;
    }   
    return 1;  
}

int main()
{
int i = 0;
for(i=101;i<=200;i+=2)
{
   if(is_prime(i) == 1)
   {
   printf("%d\n",i);
   }
}
return 0;
}