#include <stdio.h>
#include <string.h>

int isVowel(char ch);

int main()
{
    // basic
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("%c - Vowel\n", ch);
    }
    else
    {
        printf("%c - Consonant\n", ch);
    }

    // using string.h
    // without function
    printf("Enter the character: ");
    scanf(" %c", &ch);
    char vowels[] = "aeiouAEIOU";
    if (strchr(vowels, ch) != NULL)
    {
        printf("%c - Vowel\n", ch);
    }
    else
    {
        printf("%c - Consonant\n", ch);
    }

    // with function
    printf("Enter the character: ");
    scanf(" %c", &ch);
    if (isVowel(ch))
        printf("%c is vowel\n", ch);
    else
        printf("%c is consonant\n", ch);

    return 0;
}

int isVowel(char ch)
{
    char vowels[] = "aeiouAEIOU";
    return (strchr(vowels, ch) != NULL);
}

