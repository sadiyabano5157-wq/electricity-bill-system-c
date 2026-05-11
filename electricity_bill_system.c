#include<stdio.h>

int main()
{
    int unit, late;

    float bill, late_fee, final_bill;

    printf("Enter units\n");
    scanf("%d",&unit);

    printf("Late Payment Option\n");

    printf("1 = Yes\n");
    printf("0 = No\n");

    scanf("%d",&late);

    if(unit<=100)
    {
        bill = unit * 2;
    }
    else if(unit>100 && unit<=200)
    {
        bill = unit * 5;
    }
    else
    {
        bill = unit * 10;
    }

    if(late==1)
    {
        late_fee = 200;
    }
    else
    {
        late_fee = 0;
    }

    final_bill = bill + late_fee;

    printf("Bill = %.2f\n",bill);

    printf("Late Fee = %.2f\n",late_fee);

    printf("Final Bill = %.2f\n",final_bill);

    return 0;
}
