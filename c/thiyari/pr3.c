//******roll no = 1261*********
//******NAME : MITUL DUDHAT*****
//******DIV : C********
#include <stdio.h>
#include <math.h>
float PAmount, ROI, Time_Period;
void getdata()
{

    printf("\nPlease enter the Principal Amount : \n");
    scanf("%f", &PAmount);

    printf("Please Enter Rate Of Interest : \n");
    scanf("%f", &ROI);

    printf("Please Enter the Time Period in Years : \n");
    scanf("%f", &Time_Period);
}
int compountinterst(float PAmount, float ROI, float Time_Period)
{

    float CIFuture, CI;

    CIFuture = PAmount * (pow((1 + ROI / 100), Time_Period));
    CI = CIFuture - PAmount;
    return CI;
}
int main()
{
    getdata();
    printf("\nCompound Interest for Principal Amount is = %f", compountinterst(PAmount, ROI, Time_Period));
    return 0;
}