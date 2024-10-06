#include<stdio.h>
int main(){
    float miles, gal, avg_miles, overavg; int count=0;
    while(gal!=-1){
        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gal);
        if(gal==-1)
        break;
        printf("Enter the miles driven: ");
        scanf("%f", &miles);
        if(miles==0 || gal==0)
        printf("Invalid input!");
        avg_miles = miles/gal;
        printf("The miles/gallon for this tank was %f\n\n", avg_miles);
        count++;
        overavg += avg_miles;
    }
        printf("The overall average miles/gallon was %f", overavg/count);
       
    return 0;
}
