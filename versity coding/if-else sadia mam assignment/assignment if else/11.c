#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    int thousand = (tk/1000);
    int left1 = (tk%1000);
    int fivehun = (left1/500);
    int left2 = (left1%500);
    int twohun = (left2/200);
    int left3 = (left2%200);
    int onehun = (left3/100);
    int left4 = (left3%100);
    int fifty = (left4/50);
    int left5 = (left4%50);
    int twenty= (left5/20);
    int left6 = (left5%20);
    int ten = (left6/10);
    int left7 = (left6%10);
    printf("the number of 1000 tk notes :%d\n",thousand);
    printf("the number of 500 tk notes :%d\n",fivehun);
    printf("the number of 200 tk notes :%d\n",twohun);
    printf("the number of 100 tk notes :%d\n",onehun);
    printf("the number of 50 tk notes :%d\n",fifty);
    printf("the number of 20 tk notes :%d\n",twenty);
    printf("the number of 10 tk notes :%d\n",ten);
    return 0;}
