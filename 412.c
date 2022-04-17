// #include<stdio.h>
// int main()
// {
//     int i = 0;
//     for(i=1; i<=100; i++)
//     {
//        if(i%3==0)
//        printf("%d ",i);
//     }
//     return 0 ;
// }
// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     int y = 0;
//     for(y=1000;y<=2000;y++)
//     {
//     if(y%4==0&&y%100!=0)
//     {
//         printf("%d ",y);
//         a++;
//     }
//     else if(y%400==0)
//     {
//         printf("%d ",y);
//         a++;
//     }
//     }
//     printf("\na=%d",a);
// //     return 0;
// // }
// #include<stdio.h>
// int main()
// {
//     int i = 0;
//     int a = 0;
//     for(i=1;i<=100;i++)
//     {
//         if(i%10==9)
//         a++;
//         if(i/10==9)
//         a++;
//     }
//     printf("a=%d",a);
//     return 0 ;
// }

// #include<time.h>
// void menu()
// {
//     printf("*********************************\n");
//     printf("****  1. play    0.exit    ******\n");
//     printf("*********************************\n");
// }
// void game()
// {
//     int ret = 0;
//     int guess = 0;
//     ret = rand()%100+1;
    
// while(1) 
//     {
//     printf("请猜数字:>");
//     scanf("%d",&guess);
    
//     if(guess>ret)
//     {
//         printf("猜大了\n");
//     }
//     else if(guess<ret)
//     {
//         printf("猜小了\n");
//     }
//     else
//     {
//         printf("恭喜你猜对了\n");
//         break;
//     }
//     }
// }
// int main()
// {
//     srand((unsigned int)time(NULL));
//     int input = 0;
//     do
//     {

//     menu();
//     printf("请选择>:");
//     scanf("%d",&input);
//     switch(input)
// {
//     case 1:
//     game();
//     break;
//     case 0:
//     printf("退出游戏\n");
//     break;
//     default:
//     printf("选择错误\n");
//     break;
// }

//     }while (input);
//     return 0 ;
// }
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char input[20]={0};
    ststem("shutdown -s -t 60");
    again:
    printf("请输入我是猪否则电脑一分钟之内关机\n请输入>:");
    scanf("%s",input);
    if(strcmp(input,"我是猪")==0)
    {
        system("shutdown -a");
    }
    else
    {
    goto again;
    }
    return 0;
}