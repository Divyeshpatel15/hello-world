#include<stdio.h>
    int n1,n2,a,d;
    char e,c;
int main()

{
    do{
    printf("enter expression");
    scanf("%d%c%d",&n1,&e,&n2);

    switch(e)
    {
        case '+':
            a=n1+n2;
        printf("result:%d",a);
        break;
        case '-':
        a=n1-n2;
        printf("result:%d",a);
        break;
        case '/':
        a=n1/n2;
        printf("result:%d",a);
        break;
        case '*':
        a=n1*n2;
        printf("result:%d",a);
        break;
        default:
            printf("you enter wrong expression");
    }
    printf("if you want continue press y?");
    scanf("%d",&d);
    scanf("%c",&c);
    }while(c=='y');
    return 0;
}
