#include <stdio.h>
#include <math.h>

void main()
{
    int number, range, power,lower,upper,sum,rem,clone;
    printf("\nEnter the range: ");
    scanf("%d",&range);
    printf("\nThe armstrong numbers are: ");
    for (number=10; number <= range; number++)
    {
        if (number % 10 == 0){
            lower = 10,upper =100;
            for (power = 1; power <= 10; power+= 1){
                if (number >= lower && number < upper){
                    power += 1;
                    break;
                }
                lower *= 10;
                upper *= 10;
            }
        }
        sum = 0; clone = number;
        while (clone > 0) {
            rem = clone % 10;
            sum += pow(rem,power);
            clone /= 10;
        }
        if (sum == number) {
            printf("%d\n",sum);
        }
    }
}