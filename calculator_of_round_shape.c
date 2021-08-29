#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define Pi 3.141592653579
int main()
{
    int flag, command;
    double r, h, V1, V2, V3;
    flag = 1;
    while (flag == 1) {
        printf("1-Ball\n");
        printf("2-Cylinder\n");
        printf("3-Cone\n");
        printf("other-Exit\n");
        printf("Please enter your command:\n");
        scanf("%d", &command);
        if (command == 1) {
            printf("Please enter the radius:\n");
            scanf("%lf", &r);
            V1 = 4.0/3 * Pi *  pow(r,3);
            printf("%.2f\n", V1);

        }
        else if (command == 2) {
            printf("Please enter the radius and the height:\n");
            scanf("%lf %lf", &r, &h);
            V2 = Pi * pow(r,2) * h;
            printf("%.2f\n", V2);
        }
        else if (command == 3) {
            printf("Please enter the radius and the height:\n");
            scanf("%lf %lf", &r, &h);
            V3 = 1.0/3 * Pi * pow(r,2) * h;
            printf("%.2f\n", V3);
        } else {
            flag = 0;
            exit(0);
        }
    } 


    return 0;
}