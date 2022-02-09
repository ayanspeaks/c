#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int pow1(int x, int n)
    {
        int i, result = 1;
        for (i = 0; i < n; i++)
        { // Power Function //
            result *= x;
        }
        return (result);
    }

    int a, s;
    int val[] = {
        0,
        0,
        0,
        0};
    int value[] = {
        0,
        0,
        0,
        0};
         int ex = 0;
    scanf(" %d", &a);
    if (a / 1000 != 0 && a / 1000 < 10)
    {
    	int i;
        // Extracting the digits and storing them in the arrays .
        for (i = 0; i <= 3; ++i)
        {
            value[i] = val[i] = (a % pow1(10, i + 1) - a % pow1(10, i)) / pow1(10, i);
            if (i > 0)
            {
                if (val[i] == val[i - 1])
                {
                    ex++;
                }
            }
        }
        if (ex == 3)
        {
            printf("Wrong input");
            exit(0);
        }
        int j = 0, k = a;
        
        // Start of process
        while (k != 6174)
        {
            while (1)
            {
            	 s = 0;
                for (i = 0; i <= 3; i++)
                {
                    if (val[i] > val[i + 1])
                    {
                        int temp = val[i];
                        val[i] = val[i + 1];
                        val[i + 1] = temp;
                        s = 1;
                    }
                }
                if (s == 0)
                {
                    break;
                }
            }
            while (1)
            {
                s = 0;
                for ( i = 0; i <= 3; i++)
                {
                    if (value[i] < value[i + 1])
                    {
                        int temp = value[i];
                        value[i] = value[i + 1];
                        value[i + 1] = temp;
                        s = 1;
                    }
                     }
                if (s == 0)
                {
                    break;
                }
            }
            j++;
            printf("max:%d min: %d ", value[0] * 1000 + value[1] * 100 + value[2] * 10 + value[3], val[0] * 1000 + val[1] * 100 + val[2] * 10 + val[3]);

            k = value[0] * 1000 + value[1] * 100 + value[2] * 10 + value[3] - (val[0] * 1000 + val[1] * 100 + val[2] * 10 + val[3]);
            printf("diff:%d\n", k);
            for (i = 0; i <= 3; ++i)
            {
                value[i] = val[i] = (k % pow1(10, i + 1) - k % pow1(10, i)) / pow1(10, i);
            }
        }
        printf("Took %d turns", j);
    }
    else
        {
        printf("Wrong input");
    }

    return 0;
}

