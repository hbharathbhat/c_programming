typedef struct day{
    int date;
    int month;
    int year;
}Date;

int main()
{
    struct day d1,d2;
    printf("Enter your Birth Date: ");
    scanf("%d",&d1.date);
    printf("Enter your Birth Month: ");
    scanf("%d",&d1.month);
    printf("Enter your Birth Year: ");
    scanf("%d",&d1.year);

    printf("Enter Present Date: ");
    scanf("%d",&d2.date);
    printf("Enter Present Month: ");
    scanf("%d",&d2.month);
    printf("Enter Present Year: ");
    scanf("%d",&d2.year);

    printf("\nYour Birth Date: %d.%d.%d\n",d1.date,d1.month,d1.year);
    printf("Present Date: %d.%d.%d\n",d2.date,d2.month,d2.year);
}
