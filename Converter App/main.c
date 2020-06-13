#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
This program will take an intial value, a final valie, and increment value, Then it will display the equivalent values in other units.
 In this program :
init = initial value
final = final value
inc = increment value
k = kilometers/hour
r = rods/min
f = furlongs/fortnight
s = smooths/second
*/
int main()
{

float init, final, inc, k, r, f, s;

printf("Welcome to the convert program\n");
printf("=============\nKilometers/hours\nrods/min\nfurlongs/fortnight\nsmoots/seconds\n\n=============\n");
printf("Please enter the initial value:");
scanf("%f", &init); //putting the intered value in init adress.
printf("Please enter the final value:");
scanf("%f", &final);
printf("Please enter the increment value:");
scanf("%f",&inc);



    while (inc != 0.0)
    {
        printf("_________________________________________________________________\n");
        printf("           Km/Hr        Rods/Min  Frlngs/Frtnght      Smoots/sec\n");
        printf("_________________________________________________________________\n");
        for (k=init; k<=final; k=k+inc)
        {
            r=k*3.314;
            f=k*1670.245;
            s=k*0.1632258;
            printf("|%15.2f|%15.2f|%15.2f|%15.2f|\n",k,r,f,s);
            // %16.2f means the float is allocated 16 spaces in the print function with two decimal spaces.
        }
        printf("|_______________|_______________|_______________|_______________|\n");
    
    
        printf("Enter initial:");
        scanf("%f", &init);
        printf("Enter final:");
        scanf("%f",&final);
        printf("Enter Increment:");
        scanf("%f",&inc);

}
        printf("Goodbye");
}
