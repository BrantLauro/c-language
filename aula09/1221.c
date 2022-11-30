#include <stdio.h>
#include <math.h>
void ehPrimo() {
    int num, divisores = 0;
    scanf("%d", &num);
    for(int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) divisores ++;
    }
    if(divisores == 0) printf("Prime\n");
    else printf("Not Prime\n");
}

int main () {
    int testes;
    scanf("%d", &testes);
    for(int i = 0; i < testes; i++) ehPrimo();
    return 0;
}