#include <stdio.h>
int main() {
    float n1, n2, n3, n4;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    float media;
    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
    printf("Media: %.1f\n", media);
    if (media >= 7) {
        printf("Aluno aprovado.\n");
    } else if (media >= 5 && media <= 6.9) {
        printf("Aluno em exame.\n");
        float x; scanf("%f", &x);
        media = (media + x) / 2;
        if (media >= 5) {
            printf("Nota do exame: %.1f\n", x);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media);
        } else if (media <= 4.9) {
            printf("Nota do exame: %.1f\n", x);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media);
        } else {
        printf("Aluno reprovado.\n");
    }
    return 0;
}
}