/*10. write a program to which takes the cost print the selling price
of a product form the use . now calculate and print profit or loss percentage*/

#include <stdio.h>
int main()
{
    float cp,sp,profit,loss; 
    float per_pro,per_loss;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);
    
    if(sp > cp)
    {
        profit= sp - cp;
        per_pro=profit/cp*100;
        printf("%.2lf%% profit",per_pro);
    }
    else if(cp > sp)
    {
        loss = cp - sp;
        per_loss=loss/cp*100;
        printf("%.2lf%% loss",per_loss);
    }
    else
    {
        
        printf("No Profit No Loss.");
    }

    return 0;
}