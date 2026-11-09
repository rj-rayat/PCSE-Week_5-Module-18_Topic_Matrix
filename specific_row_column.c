#include <stdio.h>
int main()
{ 
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Speciic Row

    // int s;
    // scanf("%d", &s);
    // for (int i = 0; i < c; i++)
    // {
    //     printf("%d", a[s][i]);
    // }

    // Specifi Column
    int s;
    scanf("%d", &s);
    for (int i = 0; i < r; i++)
    {
        printf("%d", a[i][s]);
    }
  return 0;
}