#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char un[50], pwd[50], back;
    char username[50]={'A','d','m','i','n','0','1','\0'};
    char password[50]={'L','3','t','M','3','i','n','\0'};

    int  a=1, b=1, menu=1;
    int option, selection, refill, dispense;
    int tylenol=40, advil=40, ibuprofen=30, codeine=10;

    while(a == 1 || b == 1)
    {
        printf("Enter Username:");
        scanf(" %s",&un);

        printf("Enter Password:");
        scanf(" %s",&pwd);

            if(strcmp(un,username)==0)
            {
                printf("c");
                a=0;
            }
            else
            {
                a=1;
            }

            if(strcmp(pwd,password)==0)
            {
                printf("c");
                b=0;
            }
            else
            {
                b=1;
            }
    }

    system("@cls||clear");

            while(menu == 1)
            {
                system("@cls||clear");

                printf("\t\tDrug Administration System\nMenu:\n\tl. Check Quantity\n\t2. Refill\n\t3. Dispense\n\t4. Quit\n\nSelect Option: ");
                scanf(" %d", &option);

                    if(option == 4)
                    {
                        system("@cls||clear");
                        printf("Program End.\n");
                        break;
                    }

                    while(option == 1)
                    {
                        system("@cls||clear");
                        printf("\tCurrent Quantities\n Tylenol: %d\n Advil: %d\n Ibuprofen: %d\n Codeine: %d\n\n To return to menu press 1 or press z to break: ", tylenol, advil, ibuprofen, codeine);
                        scanf(" %d", &back);

                            if(back == 'z')
                            {
                                menu == 1;
                                option = 0;
                                break;
                            }
                        break;
                    }

                    while(option == 2)
                    {
                        system("@cls||clear");
                        printf("Select drug by number\n\n1. Tylenol 2. Advil 3. Ibuprofen 4. Codeine: ");
                        scanf(" %d", &selection);

                            if(selection == 1)
                            {
                                printf("\nEnter refill quantity: ");
                                scanf(" %d", &refill);

                                tylenol = tylenol + refill;
                                menu == 1;
                                break;
                            }

                            if(selection == 2)
                            {
                                printf("\nEnter refill quantity: ");
                                scanf(" %d", &refill);

                                advil = advil + refill;
                                menu == 1;
                                break;
                            }
                            if(selection == 3)
                            {
                                printf("\nEnter refill quantity: ");
                                scanf(" &d", &refill);

                                ibuprofen = ibuprofen + refill;
                                menu == 1;
                                break;
                            }
                            if(selection == 4)
                            {
                                printf("\nEnter refill quantity: ");
                                scanf(" &d", &refill);

                                codeine = codeine + refill;
                                menu == 1;
                                break;
                            }

                       break;

                    }

                    while(option == 3)
                    {
                        system("@cls||clear");

                        printf("Select drug by number\n\n1. Tylenol 2.Advil 3.Ibuprofen 4.Codeine: ");
                        scanf(" %d", &selection);

                            if(selection ==1)
                            {
                                printf("\nEnter quantity to dispense: ");
                                scanf(" %d", &dispense);

                                tylenol = tylenol - dispense;

                                    if(tylenol < 0)
                                    {
                                        tylenol = 0;
                                    }

                                menu == 1;
                                break;
                            }

                            if(selection == 2)
                            {
                                printf("\nEnter quantity to dispense: ");
                                scanf(" %d", &dispense);

                                advil = advil - dispense;

                                    if(advil < 0)
                                    {
                                        advil = 0;
                                    }

                                menu == 1;
                                break;
                            }

                            if(selection == 3)
                            {
                                printf("\nEnter quantity to dispense: ");
                                scanf(" %d", &dispense);

                                ibuprofen = ibuprofen - dispense;

                                    if(ibuprofen < 0)
                                    {
                                        ibuprofen = 0;
                                    }

                                menu == 1;
                                break;
                            }

                            if(selection == 4)
                            {
                                printf("\nEnter quantity to dispense: ");
                                scanf(" %d", &dispense);

                                codeine = codeine - dispense;

                                    if(codeine < 0)
                                    {
                                        codeine = 0;
                                    }

                                menu == 1;
                                break;
                            }

                        break;
                    }
            }

}
