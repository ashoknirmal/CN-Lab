#include <stdio.h>
#include <string.h>

#define MAX 100

void bitStuffing(char input[], char output[]) {
    int i, j, count = 0;
    int n = strlen(input);
    j = 0;

    for (i = 0; i < n; i++) {
        output[j] = input[i];
        if (input[i] == '1') {
            count++;
        } else {
            count = 0;
        }
        if (count == 5) {
            j++;
            output[j] = '0';  // Stuff a '0' after five consecutive '1's
            count = 0;
        }
        j++;
    }
    output[j] = '\0';  // Null terminate the output string
}

int main() {
    char input[MAX], output[MAX];
    printf("Enter the input bit string: ");
    scanf("%s", input);
    bitStuffing(input, output);
    printf("Bit-stuffed output: %s\n", output);
    return 0;
}
