#include <stdio.h>
int main()
{
    int l1;
    int l2;
    char small[101]; // limite de small +1 para el imite
    int x, y, z, s;
    char clong[1001]; // limite para long +1 
    for (scanf("%d ", &l1), l2 = 1; l2 <= l1; l2++)
    {
        scanf("%s", small);
        z = y = s = 1001;
        clong[y] = small[0];
        for (x = 1; small[x] != '\0'; x++)
        {
            if (clong[z] <= small[x])
                //y = z + 1, z++;
                y = z - 1, z--; 
            else
                y = s + 1, s++;
            clong[y] = small[x];
        }
        clong[s + 1] = '\0';
        printf("Case Output #%d: %s\n", l2, (clong + z));
    }
}
