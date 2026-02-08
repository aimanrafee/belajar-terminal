#include <stdio.h>
#include <string.h>

int main() {
    char command[50];
    printf("--- CLF Git OS Kernel Booted ---\n");
    
    while(1) {
        printf("CLF_OS >> ");
        scanf("%s", command);
        
        if(strcmp(command, "exit") == 0) {
            printf("Shutting down CLF Git OS...\n");
            break;
        } else if(strcmp(command, "ver") == 0) {
            printf("CLF Git OS v1.0 (Classic-Legacy-Future)\n");
        } else {
            printf("Error: Command '%s' not found.\n", command);
        }
    }
    return 0;
}
