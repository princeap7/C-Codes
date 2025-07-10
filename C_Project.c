/*============================= CREATED BY ================================
``````````````````````````  VRAJ SONI (23CP406)  ``````````````````````````
`````````````````````````  PRINCE PATEL (23CP423)  ````````````````````````
`````````````````````````  DARSH PATEL (23CP419)  `````````````````````````
&&&&&&&&&&&&&&&&&&&&&&&  ELECTRICITY BILL GENERATOR  $$$$$$$$$$$$$$$$$$$$$$*/

#include<stdio.h>

float calculateBill(int localityType, int units)

{
    float totalBill, taxRate, rate; 
    
    //SELECT LOCALITY TYPE, DIFFRENT LOCALITY TYPE HAS DIFFRENT CHARGES OF UNITS...
    switch(localityType)
    {
        case 1:
            rate = 5.00; 
            //FOR RESIDENTIAL
            break;

        case 2:
            rate = 10.00; 
            // FOR CORPORATE
            break;

        case 3:
            rate = 3.75; 
            // FOR GOVERNMENT
            break;

        default:
            printf("\n\n**INVALID LOCALITY TYPE......!!!!!!!**");
            printf("\nPlease Input : ");
            printf("\n1 for RESIDENTIAL AREA");
            printf("\n2 for CORPORATE SECTION");
            printf("\n3 for GOVERNMENT SECTION.\n");
            return 0.0; 
    }

    totalBill = units * rate;

    if (0 < totalBill && totalBill < 500)
    {
        taxRate = 0.01; 
        // FOR THOSE WHOM BILL AMOUNT IS LESS THAN 500
    }
    else if (500 < totalBill && totalBill < 2000)
    {
        taxRate = 0.06; 
        // THOSE WHO HAVE MORE THAN AVERAGE AMOUNT OF BILL HAS TO PAY TAX OF 6%
    }
    else if (totalBill >= 2001)
    {
        taxRate = 0.18;  
        // FOR BILL AMOUNT MORE THAN 5000, USER HAS TO PAY TAX OF 18%
    }
    else{
        printf("INVALID INPUT");
        return 0.0;
    }

    totalBill += taxRate * totalBill;

    return totalBill;
}

int main()
{
    char cname[50];  
    int units;
    int cid;
    int localityType;

    printf("\nENTER YOUR NAME :  ");

    scanf("%s", cname);

    printf("\nENTER YOUR CUSTOMER ID(10 DIGITS) :  ");

    scanf("%d", &cid);

    printf("\nSELECT YOUR LOCALITY TYPE: \n1.RESIDENTIAL AREA\n2.CORPORATE SECTION\n3.GOVERNMENT SECTION.\n\n");

    scanf("%d", &localityType);

    printf("\nENTER YOUR CONSUMED UNITS : ");

    scanf("%d", &units);

    float totalBill = calculateBill(localityType, units);

    if(totalBill != 0)
    {
        printf("\n\nDEAR CUSTOMER %s - %d\n\n",cname, cid);

        printf("LAST MONTH YOU HAVE CONSUMED TOTAL %d UNITS IN YOUR HOUSE \n\nSO YOUR TOTAL BILL OF LAST MONTH IS Rs. %.2f.",units, totalBill);

        printf("\n\n**KINDLY PAY THIS BILL BEFORE 5th DATE OF NEXT MONTH.**");

        printf("\n\nT.H.A.N.K...Y.O.U..!.!.!.!.\n..............................\n");
    }

    return 0;
}