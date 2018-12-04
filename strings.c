#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    char *phrase = get_string("Enter phrase: ");
    char *word = get_string("Word to check for: ");
    if(strstr(phrase, word)) {
        printf("true\n1\n");
    } else {
        printf("false\n0\n");
    }

}