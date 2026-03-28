#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], rev[100];
    int i, length = 0, flag = 0;

     Input string
    printf("Enter a string: ");
    scanf("%s", str1);

     i. Calculate length
    while (str1[length] != '\0') 
    {
        length++;
    }
    printf("Length of string = %d\n", length);

     ii. String reversal
    for (i = 0; i < length; i++)
    {
        rev[i] = str1[length - i - 1];
    }
    rev[i] = '\0';
    printf("Reversed string = %s\n", rev);

     iii. Equality check
    printf("Enter another string to compare: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

     iv. Palindrome check
    if (strcmp(str1, rev) == 0)
        printf("String is a palindrome\n");
    else
        printf("String is not a palindrome\n");

     v. Substring check
    if (strstr(str1, str2) != NULL)
        printf("'%s' is a substring of '%s'\n", str2, str1);
    else
        printf("'%s' is not a substring of '%s'\n", str2, str1);

    return 0;
}