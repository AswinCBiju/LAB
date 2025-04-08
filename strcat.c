#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;
    printf("Enter first string ending with $: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string ending with $: ");
    fgets(str2, sizeof(str2), stdin);
    while (str1[i] != '$' && str1[i] != '\0') {
        i++;
    }
    str1[i] = '\0';
    while (str2[j] != '$' && str2[j] != '\0') {
        j++;
    }
    str2[j] = '\0';
	i=0;
    while (str1[i] != '\0') {
        i++;
    }
    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Concatenated string: %s\n", str1);
    return 0;
}


