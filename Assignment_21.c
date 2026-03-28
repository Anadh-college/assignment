#include <stdio.h>
#include <string.h>

int main() 
{
    char s1[100], s2[100];
    int choice;

    while(1) 
{
        printf("\n1.Length  2.Copy  3.Combine  4.Compare  5.Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        if (choice == 5) break;

        printf("Enter String: ");
        scanf("%s", s1); 

        switch(choice)
 {
            case 1: 
                printf("Length is: %zu", strlen(s1));
                break;
            case 2:
                strcpy(s2, s1);
                printf("Copied! s2 is now: %s", s2);
                break;
            case 3:
                printf("Enter string to add: ");
                scanf("%s", s2);
                strcat(s1, s2);
                printf("Combined: %s", s1);
                break;
            case 4:
                printf("Enter string to compare: ");
                scanf("%s", s2);
                if
                    (strcmp(s1, s2) == 0) 
                    printf("Equal");
                else 
                    printf("Not Equal");
                break;
        }
        printf("\n");
    }
    return 0;
}
