    /*

     * C program to find the LCM of two integers using Euclids' algorithm

     */

    #include <stdio.h>

     

    void main()

    {

        int num1, num2, gcd, lcm, remainder, numerator, denominator;

    

        scanf("%d %d", &num1, &num2);

        if (num1 > num2)

        {

            numerator = num1;

            denominator = num2;

        }

        else

        {

            numerator = num2;

            denominator = num1;

        }

        remainder = numerator % denominator;

        while (remainder != 0)

        {

            numerator   = denominator;

            denominator = remainder;

            remainder   = numerator % denominator;

        }

        gcd = denominator;

        lcm = num1 * num2 / gcd;

        printf("%d",lcm);

    }
