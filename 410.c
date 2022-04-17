// // #include <stdio.h>
// // int main()
// // {
// // int age = 50;
// // if(age<18)

// //     printf("未成年\n");

// //     else if(age>=18&&age<=30)
    
// //     printf("青壮年\n");
    
// //     else
    
// //     printf("中老年\n");
    
// // }
// // #include <stdio.h>
// // int main()
// // {
// // int i = 1;
// // while(i<=100)
// // {
// //     if(i%2==1)
// //     printf("%d\n",i);
// //     i++;
// // }
// // return 0;
// // }

// // int a = 4;
// // if(a%2==0)
// // printf("不是奇数");
// // else
// // printf("是奇数");
// // }
// #include <stdio.h>
// int main()
// {
// int n = 1;
// int m = 2;
// switch (n)
// {
//     case 1:
//     m++;
//     case 2:
//     n++;
//     case 3:
//        switch(n)
//        {
//        case 1:
//        n++;
//        case 2
//        :m++,n++;
//        break;
//        }
//        case 4:m++;
//        break;
//        default:
//        break;

// }
//    printf("m = %d,n = %d\n",m,n);
//    return 0; 
// }
// #include <stdio.h>
// int main()
// {
//     int m;
//     int i;
//    for(m=99;m<=200;m+=2)
//     {
//     for(i=2;i<m;i++)
//     if(m%i==0) break;
//     if(i==m)
//     printf ("%d\n",m);
//     }
//     return 0 ; 
//}
// #include <stdio.h>
// int main()
// {
//    int i,j;
//    for(i=1;i<=9;i++)
// {
//    for(j=1;j<=i;j++)
//    {
//    printf("%d*%d=%d",i,j,i*j);
//    }
//    printf("\n");
   
// }
// return 0 ;
// }
#include<stdio.h>
int main()
{
int i=1000;
while(i<=2000)
{
if(i%100==0&&i%400==0)
 printf("%d\n",i);
    i++;  
// }
//  else if(i%100!=0&&i%4==0)
//    { printf("%d\n",i);
//   i++;}
//   else
//   return 0;
 }
   return 0;
}