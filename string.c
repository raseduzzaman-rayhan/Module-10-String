// #include <stdio.h>
// int main()
// {
//     int a[4];
//     for (int i = 0; i < 4; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d\n", a[i]);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    char a[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%c", &a[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}