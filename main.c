#include <stdio.h>

int main()
{
    int is_child = 1, single = 0, series = 0, month = 1;
    double price, output, input = 170.33;

    if(series){
        if(is_child){
            price = 4.5;
        }
        price = 6.5;
    } else if(month) {
        if(is_child){
            price = 25.5;
        }
        price = 30.0;
    } else if (single){
        if(is_child){
            price = 2.5;
        }
        price = 3.5;
    }

    output = input - price;

    if(output < 0.0){
        printf("Ihr Einwurf ist nicht ausreichend, um das gewuenschte Produkt zu erhalten. Bitte versuchen Sie es erneut.");
    } else {
        if(series){
            if(is_child){
                printf("Sie erhalten eine Streifenkarte fuer Kinder. Vielen Dank fuer Ihren Einkauf!\n");
            }
            printf("Sie erhalten eine Streifenkarte fuer Erwachsene. Vielen Dank fuer Ihren Einkauf!\n");
        } else if(month) {
            if(is_child){
                printf("Sie erhalten eine Monatskarte fuer Kinder. Vielen Dank fuer Ihren Einkauf!\n");
            }
            printf("Sie erhalten eine Monatskarte fuer Erwachsene. Vielen Dank fuer Ihren Einkauf!\n");
        } else if (single){
            if(is_child){
                printf("Sie erhalten eine Einzelkarte fuer Kinder. Vielen Dank fuer Ihren Einkauf!\n");
            }
            printf("Sie erhalten eine Einzelkarte fuer Erwachsene. Vielen Dank fuer Ihren Einkauf!\n");
        }

        if(output != 0.0){
            printf("Ihr Rueckgeld betraegt %.2lf und wird in folgender Konstellation ausgegeben: ", output);

            while(output > 0.001){
                // output != 0.0 funktioniert nicht, aufgrund der rundungsfehler.
                if(output >= 500.0){
                    printf("500 Euro Schein, ");
                    output = output - 500.0;
                } else if(output >= 200.0){
                    printf("200 Euro Schein, ");
                    output = output - 200.0;
                } else if(output >= 100.0){
                    printf("100 Euro Schein, ");
                    output = output - 100.0;
                } else if(output >= 50.0){
                    printf("50 Euro Schein, ");
                    output = output - 50.0;
                } else if(output >= 20.0){
                    printf("20 Euro Schein, ");
                    output = output - 20.0;
                } else if(output >= 10.0){
                    printf("10 Euro Schein, ");
                    output = output - 10.0;
                } else if(output >= 5.0){
                    printf("5 Euro Schein, ");
                    output = output - 5.0;
                } else if(output >= 2.0){
                    printf("2 Euro Muenze, ");
                    output = output - 2.0;
                } else if(output >= 1.0){
                    printf("1 Euro Muenze, ");
                    output = output - 1.0;
                } else if(output >= 0.5){
                    printf("50ct Muenze, ");
                    output = output - 0.5;
                } else if(output >= 0.2){
                    printf("20ct Muenze, ");
                    output = output - 0.2;
                } else if(output >= 0.1){
                    printf("10ct Muenze, ");
                    output = output - 0.1;
                } else if(output >= 0.05){
                    printf("5ct Muenze, ");
                    output = output - 0.05;
                } else if(output >= 0.02){
                    printf("2ct Muenze, ");
                    output = output - 0.02;
                } else if(output >= 0.01){
                    printf("1ct Muenze, ");
                    output = output - 0.01;
                }
            }
        }
    }




    return 0;
}
