#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    printf("�п�J�@�s��(�̦h10��)�x�Ϊ����W�Υk�U�y�СG�]��J������п�J{*}�^\n");
    char s[5];
    int k=0;
    double map[11][4];
    int cr[11];
    while(1)
    {
        scanf("%s",s);
        if(s[0]=='*') break;
        if(s[0]=='r')
        {
            scanf("%lf %lf %lf %lf",&map[k][0],&map[k][1],&map[k][2],&map[k][3]);
            cr[k]=1;
        }
        else
        {
            scanf("%lf %lf %lf",&map[k][0],&map[k][1],&map[k][2]);
            cr[k]=0;
        }
        k++;
    }
    int a,b,c,m=0;
    double x,y;
    while(1)
    {
        printf("�п�J�y��(x,y)�G");
        scanf("%lf %lf",&x,&y);
        if(x==9999.9&&y==9999.9) break;
        int flag=0;
        m++;
        for(a=0;a<k;a++)
        {
            if(cr[a]==1&&x>map[a][0]&&x<map[a][2]&&y<map[a][1]&&y>map[a][3])
            {printf("�P�_���G�GPoint %d is contained in figure %d\n",m,a+1);flag=1;}
            if(cr[a]==0&&sqrt((x-map[a][0])*(x-map[a][0])+(y-map[a][1])*(y-map[a][1]))<map[a][2])
            {printf("�P�_���G�GPoint %d is contained in figure %d\n",m,a+1);flag=1;}
        }
        if(flag==0)
            printf("�P�_���G�GPoint %d is not contained in any figure\n",m);
    }
    return 0;
}
