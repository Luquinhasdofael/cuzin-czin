#include <stdio.h>
#include <math.h>
int main() {
    double a;
    scanf("%lf", &a);
    double b;
    scanf("%lf", &b);
    double c;
    scanf("%lf", &c);
    double raiz;
    raiz = pow(b, 2) - (4 * a * c);
    if (a == 0 || raiz < 0) {
        printf("Impossivel de calcular\n");
    }
    else {
    double delta = sqrt(raiz);
    double r1;
    r1 = (-b + delta) / (2 * a);
    double r2;
    r2 = (-b - delta) / (2 * a);
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
    }
    return 0;
}
