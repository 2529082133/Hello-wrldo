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
//     printf("�������:>");
//     scanf("%d",&guess);
    
//     if(guess>ret)
//     {
//         printf("�´���\n");
//     }
//     else if(guess<ret)
//     {
//         printf("��С��\n");
//     }
//     else
//     {
//         printf("��ϲ��¶���\n");
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
//     printf("��ѡ��>:");
//     scanf("%d",&input);
//     switch(input)
// {
//     case 1:
//     game();
//     break;
//     case 0:
//     printf("�˳���Ϸ\n");
//     break;
//     default:
//     printf("ѡ�����\n");
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
    printf("������������������һ����֮�ڹػ�\n������>:");
    scanf("%s",input);
    if(strcmp(input,"������")==0)
    {
        system("shutdown -a");
    }
    else
    {
    goto again;
    }
    return 0;
}