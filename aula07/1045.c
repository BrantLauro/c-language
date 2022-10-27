#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, c, aux;
    scanf("%lf %lf %lf", &a, &b, &c);
    while (a < b || a < c || b < c) {
        if(b > a){
            aux = a;
            a = b;
            b = aux;
        }
        if (c > b) {
            aux = b;
            b = c;
            c = aux;
        }
    }
    if (a >= (b + c)) { printf("NAO FORMA TRIANGULO\n"); return 0; }
    if (pow(a, 2) == pow(b, 2) + pow(c, 2)) printf("TRIANGULO RETANGULO\n");
    if (pow(a, 2) > pow(b, 2) + pow(c, 2)) printf("TRIANGULO OBTUSANGULO\n");
    if (pow(a, 2) < pow(b, 2) + pow(c, 2)) printf("TRIANGULO ACUTANGULO\n");
    if (a == b && b == c) printf("TRIANGULO EQUILATERO\n");
    if ((a == b && b !=c) || (a != b && b == c)) printf("TRIANGULO ISOSCELES\n");
    return 0;
}