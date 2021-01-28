#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 100)
    {
        amt = unit * 1.50;
    }
    else if(unit <= 300)
    {
        amt = amt + (unit * 1.50);
    }
    else if(unit <= 500)
    {
        amt = amt + (unit * 1.5);
    }
    else
    {
        amt = amt + (unit * 1.50);
    }

    
    total_amt  = amt;

    printf("Electricity Unit = %d and Bill = %f",unit , total_amt);

    return 0;
}