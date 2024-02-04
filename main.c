#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "src/imports.h"

void main() {
    char * regex = malloc(2);
    printf(green "[+] " white "Enter a desired regex: ");
    scanf("%s", regex);
    if (strlen(regex) >= 2) {
        free(regex);
        int buffer = strlen(regex) + 1;
        char *newRegex = realloc(regex, strlen(regex) + 1);
    }
    else{
        printf("Memory allocation failed");
    }
    int garbageLLLLLLLLL;
    skinmaker("terminalconfig.ps1", regex);
    free(regex);
    printf(red "[+] " white "Your config file has been created, thank u for using this tool!\n");
    printf(green "[+]" white "head to the following path to configure the terminal: \nC:\\Users\\[USERNAME]\\Documents\\WindowsPowerShell");
    scanf("%d", garbageLLLLLLLLL);
}
