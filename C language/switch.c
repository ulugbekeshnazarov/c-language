#include <stdio.h>
    int main() {
        int day = 2;

        switch (day)
        {
            case 1:
                printf("Dushanba!");
                break;
            
            case 2:
                printf("Seshanba");
                break;
            
            case 3:
                printf("Chorshanba");
                break;
            case 4:
                printf("Payshanba");
            default:
                printf("Bunaqa qatorda javob yuq?");
                break;
        }
    }