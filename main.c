#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "src/imports.h"

void main() {
    char *regex = malloc(100);
    printf(green "[+] " white "Enter a desired regex: ");
    scanf("%s", regex);
    if (strlen(regex) >= 100) {
        char *regex = malloc(strlen(regex) + 1);
    }
    int garbageLLLLLLLLL;
    skinmaker("terminalconfig.ps1", regex);
    free(regex);
    printf(red "[+] " white "Your config file has been created, thank u for using this tool!\n");
    printf(green "[+]" white "head to the following path to configure the terminal: \nC:\\Users\\[USERNAME]\\Documents\\WindowsPowerShell");
    scanf("%d", garbageLLLLLLLLL);
}