#include <stdio.h>
 
int main() {
    int frango, bife, massa, pFrango, pBife, pMassa, Total = 0;
    scanf("%d %d %d", &frango, &bife, &massa);
    scanf("%d %d %d", &pFrango, &pBife, &pMassa);
    if(pFrango > frango) Total += pFrango - frango;
    if(pBife > bife) Total += pBife - bife;
    if(pMassa > massa) Total += pMassa - massa;
    printf("%d\n", Total);
    return 0;
}