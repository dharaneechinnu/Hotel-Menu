#include <stdio.h>
int main()
/*This is hotel menu card*/
{
int ch,qty,p,tot;
printf("\n\t\t\tMenu card ");
printf("\n*******************************************************************************\n");
printf("\n\t\t1.Coffee Rs:50");
printf("\n\t\t2.tea Rs:60");
printf("\n\t\t3.veg Rice Rs:150");
printf("\n\t\t4.Chicken Rice Rs:180");
printf("\n\t\t5.Milk shake Rs:120\n");
printf("\n*******************************************************************************\n");
first:
printf("\nEnter the choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\nYou have selected Coffee ");
printf("\nBill.No : 1");
printf("\nEnter the qty : ");
scanf("%d",&qty);
tot=(qty*50);
break;
case 2: printf("\nYou have selected tea ");
printf("\nEnter the qty : ");
scanf("%d",&qty);
tot=(qty*60);
break;
case 3: printf("\nYou have selected veg rice ");
printf("\nEnter the qty : ");
scanf("%d",&qty);
tot=(qty*150);
break;
case 4: printf("\nYou have selected chiken rice ");
printf("\nEnter the qty : ");
scanf("%d",&qty);
tot=(qty*180);
break;
case 5: printf("\nYou have selected milk shake ");
printf("\nEnter the qty : ");
scanf("%d",&qty);
tot=(qty*120);
break;
default: printf("\nInvalid Number ");
}
printf("\n Do you Want continue press 1 or press any number to exit : ");
scanf("%d",&p);if(p==1){
goto first;
}
printf("\nTotal amount : %d\nTax include :15Percentage\nService Charger:20 Percentage\nSwachh Bharat : 12percentage",tot);
printf("\n Thank you Come again!!!!!!");
return 0;
}