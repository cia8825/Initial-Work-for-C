#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fname[10];
    int sbpnum;
    int dbpnum;
    float MAPbp;
    float pp;

    printf("Enter a First Name? ");
    scanf(" %s", &fname);
    printf("Enter Systolic BP? ");
    scanf(" %d", &sbpnum);
    printf("Enter Diastolic BP? ");
    scanf(" %d", &dbpnum);

    pp = sbpnum - dbpnum;
    //printf("Pulse Pressure (pp) = %f \n", pp);

        if(pp < 0)
        {
            printf("PP can not be negative \n");
            exit(0);
        }

    MAPbp = ((2*dbpnum)+sbpnum)/3;

    printf("\nFirst Name: %s\nSystolic BP: %d\nDiastolic BP: %d\nMAP BP: %0.3f\n" , fname,sbpnum,dbpnum,MAPbp);

    if(sbpnum > 140 && dbpnum > 90)
    {
        printf("Condition: High BP\n");
    }

    else if(sbpnum < 110 && dbpnum < 60)
    {
        printf("Condition: Low BP\n");
    }

    else
    {
        printf("Condition: Normal BP\n");
    }

    return 0;
}
