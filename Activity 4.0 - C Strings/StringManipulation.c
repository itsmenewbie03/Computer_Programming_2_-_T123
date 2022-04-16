#include <stdio.h>
#include <string.h>
int isUpperVowel(char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
int isLowerVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int isVowel(char c){
    return isUpperVowel(c) || isLowerVowel(c);
}
void vowelsToUpper(char *input)
{
    int changesMade = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        int temp = input[i];
        if (isLowerVowel(input[i]))
        {
            input[i] = (char)temp - 32;
        }
    }
}
int vowelCount(char *input)
{
    int vowelCount = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (isVowel(input[i]))
        {
            vowelCount++;
        }
    }
    return vowelCount;
}

int consonantCount(char *input)
{
    int consonantCount = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isVowel(input[i]) && input[i] != ' ')
        {
            consonantCount++;
        }
    }
    return consonantCount;
}

int main()
{
    char sentence[100];
    printf("Input a sentence: ");
    scanf("%[^\n]s", sentence);
    vowelsToUpper(sentence);
    printf("String Converted: %s\n\n", sentence);
    printf("String Length: %d\n", strlen(sentence));
    printf("Vowels: %d\n", vowelCount(sentence));
    printf("Consonants: %d\n", consonantCount(sentence));
    return 0;
}