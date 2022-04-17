// #include <stdio.h>
// int main()
// {
//     // int ch = 0;
//     // while((ch=getchar())!=EOF)
//     // {
//     //     purchar(ch);
//    // }
//    int ret = 0;
//    char password[20]={0};
//    printf("请输入密码:>");
//    scanf("%s",password);
//    getchar();
//    printf("请确认(Y/N):>");
//    ret = getchar();
//    if(ret == 'Y')
//    {
//        printf("确认\n");
//    }
//    else
//    {
//    printf("放弃\n");
//    }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//    int ret = 1;
//    int n = 0 ;
//    int i;

//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//    ret=ret*i;
//    }
//    printf("ret=%d",ret);
//    return 0;


// }
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if(a<c)
    {
        int tmp = a;
        a = c ;
        c = tmp;
    }
    if(b<c)
    {
        int tmp = b ;
        b = c ;
        c = tmp ;
    }
    printf("%d%d%d\n",a,b,c);
   return 0;
}