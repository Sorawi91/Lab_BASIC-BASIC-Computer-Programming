#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int count_vowels_with_pointer(char *str,int *vol);

int main() {
    char sentence[MAX_SIZE];
    int vowel_count,i;

    printf("Enter a sentence: ");
    
    if (fgets(sentence, MAX_SIZE, stdin) == NULL) {
        return 1; 
    }
    
    sentence[strcspn(sentence, "\n")] = '\0';

    vowel_count = 0;
    char *char_ptr = sentence;

    count_vowels_with_pointer(sentence,&vowel_count);
    
    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String: \"%s\"\n", sentence);
    printf("Total Vowel Count: %d\n", vowel_count);

    return 0;
}

int count_vowels_with_pointer(char *str, int *vol){
    while (*str != '\0') {
        if (*str == 'a' || *str == 'A' || *str == 'e' ||*str == 'E' ||*str == 'i' ||*str == 'I' ||*str == 'o' ||*str == 'O' ||*str == 'u' ||*str == 'U') {
            (*vol)++;
        }
        str++;
    }
}