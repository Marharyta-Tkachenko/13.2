#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

#define Z -1

#define SQR(x) (x * x)
#define RIZNYCA(x, z) (x - z) 
#define MAX(x,y) (SQR(x - z) > (x - y)) ? SQR(x - z) : (x - y)
#define MIN(x,y) ((x - y) > (y - z)) ? (y - z) : (x - y)

#define PRINTI(x) puts("control output"); \
   printf(#x"=%d\n", x)
int main()
{
    int x, y, z, w,
        p_do_kvadr,
        riznyca1, riznyca2;

    char ch;

    do
    {
#if ( Z>1)
        puts("calculate w: ");
        scanf("%d", &x);
        PRINTI(x);
        scanf("%d", &y);
        PRINTI(y);
        scanf_s("%d", &z);
        PRINTI(z);
        p_do_kvadr = RIZNYCA(x, z);
        p_do_kvadr = SQR(p_do_kvadr);
        PRINTI(p_do_kvadr);
        riznyca1 = RIZNYCA(x, y);
        PRINTI(riznyca1);
        w = MAX(p_do_kvadr, riznyca1);
        PRINTI(w);

#else
        {
            puts("calculate w: ");
            scanf("%d", &x);
            PRINTI(x);
            scanf("%d", &y);
            PRINTI(y);
            scanf("%d", &z);
            PRINTI(z);
            riznyca1 = RIZNYCA(x, y);
            PRINTI(riznyca1);
            riznyca2 = RIZNYCA(y, z);
            PRINTI(riznyca2);
            w = MIN(riznyca1, riznyca2);
            PRINTI(w);
        }
#endif
        puts("Repeat?  y /n ");
        std::cin >> ch;
    } while (ch == 'y');

}
