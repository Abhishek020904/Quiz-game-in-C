#include <stdio.h>

int main()
{
    int i = 0;
    char option, choice;
    do
    {
        printf("name of the fastest land animal\n a-cheetah\n b-lion\n c-leaopard\n d-rabbit\n");
        scanf(" %c", &option);
        if (option == 'a')
        {
            i++;
        }

        printf("name the biggest desert on the planet\n a-thar\n b-sahara\n c-antartica\n d-colombus\n");
        scanf(" %c", &option);
        if (option == 'c')
        {
            i++;
        }

        printf("which of the following is the oldest coding language\n a-c++\n b-java\n c-javascript\n d-c\n");
        scanf(" %c", &option);
        if (option == 'd')
        {
            i++;
        }

        printf("your score is %d\n", i);
        printf("do you want to play the quiz again y-yes n-no: ");
        scanf(" %c", &choice);
    } while (choice == 'y');
    printf("Thank you.....");
    return 0;
}