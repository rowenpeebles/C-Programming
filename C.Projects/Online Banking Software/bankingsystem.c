#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Creating the struct 'user' adding variables
struct user
{
    char phone[50];
    char ac[50];
    char password[50];
    float balance;
};

int main()
{
    struct user usr, usrl;
    int opt;
    int choice;
    FILE *fp;
    char filename[50], phone[50], pword[50];
    char cont = 'y';
    float amount;

    // Displaying user menu
    while (cont == 'y') {
    system("clear");
    printf("\n\n");
    printf("\t==========     YOUR BANK      ==========");
    printf("\n\n\t1. Register Account");
    printf("\n\n\t2. Login to Account");
    printf("\n\n\t3. Exit System");
    printf("\n\n\t========================================\n");

    // Prompting user to select an operation
    printf("\n\n\tYour choice:\t");
    scanf("%d", &opt);

    // Conditional IF statement for operation 1
    if (opt == 1)
    {
        system("clear");
        printf("\n\n");
        printf("\t==========    NEW ACCOUNT     ==========");
        printf("\n\n\tAccount No:\t");
        scanf("%s", usr.ac);
        printf("\n\n\tPhone no:\t");
        scanf("%s", usr.phone);
        printf("\n\n\tNew Password:\t");
        scanf("%s", usr.password);

        usr.balance = 0;

        strcpy(filename, usr.phone);
        fp = fopen(strcat(filename, ".dat"), "w");
        fwrite(&usr, sizeof(struct user), 1, fp);

        if (&fwrite != 0)
        {
            printf("\n\n\tAccount Successfully Registered");
        }

        else
        {
            printf("\n\n\tSomething went wrong, please try again");
        }

        fclose(fp);
    }

    // Conditional IF statement for operation 2
    if (opt == 2)
    {
        system("clear");
        printf("\nPhone Number:\t");
        scanf("%s", phone);
        printf("Password:\t");
        scanf("%s", pword);
        strcpy(filename, phone);
        fp = fopen(strcat(filename, ".dat"), "r");

        if (fp == NULL)
        {
            printf("\nAccount number not registered");
        }

        else
        {
            fread(&usr, sizeof(struct user), 1, fp);
            fclose(fp);
        }

        if (!strcmp(pword, usr.password))
        {
            printf("\n\tWelcome %s", usr.phone);

            // Conditional switch-case statement nested in a while loop
            while (cont == 'y')
            {
                system("clear");
                printf("\n\n1. Balance Inquiry");
                printf("\n2. Deposit Cash");
                printf("\n3. Cash Withdrawl");
                printf("\n4. Online Transfer");
                printf("\n5. Change Password");
                printf("\n6. Log Out");
                printf("\n\nYour Choice:\t");
                scanf("%d", &choice);

                switch (choice)
                {
                    // Conditional switch-case statement for operation 1
                    case 1:
                        printf("\nYour current balance is %.2f", usr.balance);
                        break;
                    
                    // Conditional switch-case statement for operation 2
                    case 2:
                        printf("\nEnter the amount:\t");
                        scanf("%f", &amount);
                        usr.balance += amount;
                        fp = fopen(filename, "r");
                        fwrite(&usr, sizeof(struct user), 1, fp);

                        if (&fwrite != NULL) printf("\nSuccessful Deposit");
                        fclose(fp);
                        break;
                    
                    // Conditional switch-case statement for operation 3
                    case 3:
                        printf("\nEnter the amount:\t");
                        scanf("%f", &amount);
                        usr.balance -= amount;
                        fp = fopen(filename, "r");
                        fwrite(&usr, sizeof(struct user), 1, fp);

                        if (&fwrite != NULL) 
                        {
                            printf("\nSuccessfully Withdrawn %.2f", amount);
                        }

                        fclose(fp);
                        break;
                    
                    // Conditional switch-case statement for operation 4
                    case 4:
                        printf("\nEnter phone number to transfer balance:\t");
                        scanf("%s", phone);
                        printf("\nEnter the amount you wish to transfer:\t");
                        scanf("%f", &amount); 

                        if (amount > usr.balance) 
                        {
                            printf("\nInsufficient balance");
                        }

                        else
                        {
                            strcpy(filename, phone);
                            fp = fopen(strcat(filename, ".dat"), "r");

                            if (fp == NULL)
                            {
                                printf("\nPhone number not registered");
                                return 0;
                            }

                            fread(&usrl, sizeof(struct user), 1, fp);
                            fclose(fp);
                            fp = fopen(filename, "w");
                            usrl.balance += amount;
                            fwrite(&usrl, sizeof(struct user), 1, fp);

                            fclose(fp);

                            if (&fwrite != NULL)
                            {
                                printf("\nSuccessfully transferred %.2f to %s", 
						        amount, phone); 
                                strcpy(filename, usr.phone);
                                fp = fopen(strcat(filename, ".dat"), "w");
                                usr.balance -= amount;
                                fwrite(&usr, sizeof(struct user), 1, fp);
                                fclose(fp);
                            }
                        }
                    
                    // Conditional switch-case statement for operation 5
                    case 5:
                        printf("\nPlease enter your new password:\t");
                        scanf("%s", pword);
                        fp = fopen(filename, "w");
                        strcpy(usr.password, pword);
                        fwrite(&usr, sizeof(struct user), 1, fp);

                        if (&fwrite != NULL)
                        {
                            printf("\nPassword successfully changed");
                        }
                    break;

                    // Conditional switch-case statement for operation 6
                    case 6:
                        (cont == 'n');
                        printf("\n\tLogged Out..\n\n");
                        break;
                    
                    // Conditional switch-case statement for default operation
                    default:
                        printf("\nInvalid Option..");
                        break;
                    
                }

                printf("\n\n\tContinue with the transaction? [y/n]\t");
                scanf("%s", &cont);
            }

            printf("\n\tProgram closed...");
            printf("\n\n");

            return 0;
        }

        else
        {
            printf("\n\n\tInvalid password..");
        }
    }

    // Conditional switch-case statement for operation 4
    if (opt == 3)
    {
        printf("\n\tProgram Closed..\n\n");
        exit(0);
        break;
    }

    }
    
    return 0;
}
