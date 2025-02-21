#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    double a, b, c;
    double x1, x2, d;
    char choice;

    do {
        printf("Vvedite a: \n");
        scanf("%lf", &a);
        printf("Vvedite b: \n");
        scanf("%lf", &b);
        printf("Vvedite c: \n");
        scanf("%lf", &c);

        d = pow(b, 2) - 4 * a * c;
        printf("d = %lf \n", d);

        if (d > 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);

            printf("x1 = %lf \n", x1);
            printf("x2 = %lf \n", x2);
        } else if (d == 0) {
            x1 = (-b + sqrt(d)) / (2 * a);

            printf("x1 = %lf \n", x1);
        } else {
            printf("Korney net\n");
        }

        // Âîïðîñ ïîëüçîâàòåëþ, õî÷åò ëè îí ïðîäîëæèòü ââîä íîâûõ çíà÷åíèé
        printf("\nContinue? (y/n)\n");
        scanf(" %c", &choice); // Îáðàòèòå âíèìàíèå íà ïðîáåë ïåðåä %c — ýòî íóæíî äëÿ ïðîïóñêà ñèìâîëà íîâîé ñòðîêè ïîñëå ïðåäûäóùåãî ââîäà
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
