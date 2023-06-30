#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];

    while (fgets(str, sizeof(str), stdin) != NULL) {
        int len = 0;
        int i = 0;

        while (str[i] != '\0') {
            if (isalpha(str[i])) {
                len++;
                while (isalpha(str[i]))
                    i++;
            } else {
                i++;
            }
        }

        printf("%d\n", len);
    }

    return 0;
}
