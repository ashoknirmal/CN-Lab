#include <stdio.h>
#include <string.h>

#define MAX 100

void byteStuffing(char input[], char output[]) {
    int i, j = 0;
    char flag = 'F';
    char escape = 'E';

    output[j++] = flag;  // Start with a flag character

    for (i = 0; i < strlen(input); i++) {
        if (input[i] == flag || input[i] == escape) {
            output[j++] = escape;  // Insert escape character before flag or escape
        }
        output[j++] = input[i];
    }

    output[j++] = flag;  // End with a flag character
    output[j] = '\0';    // Null terminate the output string
}

int main() {
    char input[MAX], output[MAX];
    printf("Enter the input byte string: ");
    scanf("%s", input);
    byteStuffing(input, output);
    printf("Byte-stuffed output: %s\n", output);
    return 0;
}
