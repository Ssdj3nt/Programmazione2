#include<stdio.h>
#include<string.h>

#define MAX_LENGTH 100000

int failure[MAX_LENGTH];
char text[MAX_LENGTH];
char pattern[MAX_LENGTH];

void buildFailureFunction(char *pattern, int m) {
    int i = 1, j = 0;
    failure[0] = 0;

    while (i < m) {
        if (pattern[i] == pattern[j]) {
            failure[i] = j + 1;
            i++;
            j++;
        } else if (j > 0) {
            j = failure[j - 1];
        } else {
            failure[i] = 0;
            i++;
        }
    }
}

int KMPSearch(char *text, char *pattern) {
    int n = strlen(text);
    int m = strlen(pattern);

    buildFailureFunction(pattern, m);

    int i = 0, j = 0;
    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }
        if (j == m) {
            return i - m;
        } else if (i < n && text[i] != pattern[j]) {
            if (j != 0) {
                j = failure[j - 1];
            } else {
                i++;
            }
        }
    }

    return -1;
}

int main() {
    printf("Enter text: ");
    scanf("%s", text);
    printf("Enter pattern: ");
    scanf("%s", pattern);

    int result = KMPSearch(text, pattern);
    if (result == -1) {
        printf("Pattern not found in text\n");
    } else {
        printf("Pattern found at index %d\n", result);
    }

    return 0;
}
