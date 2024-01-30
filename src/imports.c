#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void returntext() {
    char *introduce = malloc(strlen("Terminal mod by Infamous Koala") + 1);
    strcpy(introduce, "Terminal mod by Infamous Koala");
    system("cls");
    printf("%s\n", introduce);
    free(introduce);
}

void skinmaker(char filename[30], char *regex) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    
    char content[200];
    sprintf(content, "Clear-Host\n"
                     "echo \"Terminal Modded By Infamous Koala\"\n"
                     "function prompt {\n"
                     "    \"%s \"\n"
                     "}", regex);

    fprintf(file, "%s", content);
    fclose(file);
    system("powershell -Command New-Item -Path $PROFILE -ItemType File -Force");
}