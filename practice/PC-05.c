题目：输入正整数m和n（设100≤m≤n≤999），输出m到n之间满足下列条件的三位数：它的个位数的立方加十位数的平方再加上百位数等于该数的本身
     （例如135＝1＋3*3＋5*5*5）。
      如输入：135  600
      则输出：135  175  518  598
#include <stdio.h>
main()
{
    int  m,n;
    int  i,a,b,c;
/***********SPACE***********/
    scanf( "%d%d", &m, &n );
/***********SPACE***********/
    for ( i=m; i <= n; i++ )
    {
        a = i%10;
/***********SPACE***********/
        b = i/10%10;
        c = i/100%10;
/***********SPACE***********/
        if (i==a*a*a+b*b+c)
/***********SPACE***********/
            printf( "%d  ",i);
    }
}
