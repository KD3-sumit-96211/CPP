#include<stdio.h>
struct Date
{
    int Day;
    int Month;
    int Year;
};

void initDate(struct Date* ptrDate)
{
    ptrDate-> Day = 1;
    ptrDate-> Month = 1;
    ptrDate-> Year = 2000;
}

void printDateOnConsole(struct Date* ptrDate) 
{
    printf("Date is : %d%d%d\n",ptrDate->Day,ptrDate->Month,ptrDate->Year);
}
void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter day: ");
    scanf("%d", &ptrDate->Day);

    printf("Enter month: ");
    scanf("%d", &ptrDate->Month);

    printf("Enter year: ");
    scanf("%d", &ptrDate->Year);
}
int main() {
    struct Date d;
    int choice;

    do {
        printf("1. Initialize Date\n");
        printf("2. Accept Date\n");
        printf("3. Print Date\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                initDate(&d);
                printf("Date initialized.\n");
                break;

            case 2:
                acceptDateFromConsole(&d);
                break;

            case 3:
                printDateOnConsole(&d);
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}


