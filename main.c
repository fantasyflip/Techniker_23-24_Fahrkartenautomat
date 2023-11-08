#include <stdio.h>

int main()
{
    int is_child = 1, single = 0, series = 0, month = 1;
    double price, output, input = 160.23;
    double currencySteps[] = { 500.0, 200.0, 100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01 };

    if(series){
        if(is_child){
            price = 4.5;
        } else {
            price = 6.5;
        }
    } else if(month) {
        if(is_child){
            price = 25.5;
        } else {
            price = 30.0;
        }
    } else if (single){
        if(is_child){
            price = 2.5;
        } else {
            price = 3.5;
        }
    }

    output = input - price;

    if(output < 0.0){
        printf("Ihr Einwurf ist nicht ausreichend, um das gewuenschte Produkt zu erhalten. Bitte versuchen Sie es erneut.");
    } else {
        if(series){
            if(is_child){
                printf("Sie erhalten eine Streifenkarte fuer Kinder. Vielen Dank fuer Ihren Einkauf!\n");
            } else {
                printf("Sie erhalten eine Streifenkarte fuer Erwachsene. Vielen Dank fuer Ihren Einkauf!\n");
            }
        } else if(month) {
            if(is_child){
                printf("Sie erhalten eine Monatskarte fuer Kinder. Vielen Dank fuer Ihren Einkauf!\n");
            } else {
                printf("Sie erhalten eine Monatskarte fuer Erwachsene. Vielen Dank fuer Ihren Einkauf!\n");
            }
        } else if (single){
            if(is_child){
                printf("Sie erhalten eine Einzelkarte fuer Kinder. Vielen Dank fuer Ihren Einkauf!\n");
            } else {
                printf("Sie erhalten eine Einzelkarte fuer Erwachsene. Vielen Dank fuer Ihren Einkauf!\n");
            }
        }

        if(output != 0.0){
            printf("Ihr Rueckgeld betraegt %.2lf Euro und wird in folgender Konstellation ausgegeben:\n\n", output);

            int currencyItemsAmount = sizeof(currencySteps)/sizeof(currencySteps[0]);

            for(int i = 0; i < currencyItemsAmount; i++){
                int count = 0;

                while(output >= currencySteps[i]){
                    count++;
                    output = output - currencySteps[i];
                }

                if(count != 0){
                    if(currencySteps[i] < 1.0){
                        printf("%i %.0lf ", count, currencySteps[i] * 100.0);
                        printf("Cent ");
                    } else {
                        printf("%i %.2lf ", count, currencySteps[i]);
                        printf("Euro ");
                    }

                    if(currencySteps[i] < 5.0){
                        if(count > 1){
                            printf("Muenzen");
                        } else {
                            printf("Muenze");
                        }
                    } else {
                        if(count > 1){
                            printf("Scheine");
                        } else {
                            printf("Schein");
                        }
                    }

                    printf("\n");
                }
            }
        }
    }



    printf("\n\n");

    return 0;
}
