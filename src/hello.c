#include <stdio.h>
#include <string.h>

// Definisi Warna ANSI
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

int main() {
    char command[50];
    printf(CYN "--- " GRN "CLF Git OS Kernel Booted" CYN " ---\n" RESET);
    printf("Type '" YEL "help" RESET "' to see available commands.\n");

    while(1) {
        printf(MAG "CLF_OS >> " RESET);
        scanf("%s", command);

        if(strcmp(command, "exit") == 0) {
            printf(RED "Shutting down CLF Git OS...\n" RESET);
            break;
        } 
        else if(strcmp(command, "ver") == 0) {
            printf(WHT "CLF Git OS " GRN "v1.0" RESET " [Full Stack Ground Zero Edition]\n");
        } 
        else if(strcmp(command, "help") == 0) {
            printf(YEL "\nAvailable Commands:\n" RESET);
            printf(" - " CYN "help" RESET "  : Show this list\n");
            printf(" - " CYN "about" RESET " : The vision of this OS\n");
            printf(" - " CYN "ver" RESET "   : Display OS version\n");
            printf(" - " CYN "fetch" RESET " : Show system info & logo\n");
            printf(" - " CYN "exit" RESET "  : Shutdown OS\n\n");
        }
        else if(strcmp(command, "about") == 0) {
            printf(MAG "\n--- THE HOLY GRAIL PROJECT ---\n" RESET);
            printf("Visi: Memahami teknologi dari pasir sehingga ke peranti di tangan.\n");
            printf("Misi: Menghapuskan jurang pengetahuan antara 'Benda Hidup' & 'Benda Mati'.\n");
            printf("Status: " YEL "Jilid 3 (The Ghost in the Machine) sedang ditulis...\n" RESET);
            printf("Architect: " CYN "Aiman Rafee\n\n" RESET);
        }
        else if(strcmp(command, "fetch") == 0) {
            printf(CYN "       _      ______ \n");
            printf("      | |    |  ____|\n");
            printf("  ____| |    | |__   \n");
            printf(" / ___| |    |  __|  \n");
            printf("| |___| |____| |     \n");
            printf(" \\____|______|_|     \n" RESET);
            printf(WHT "----------------------\n" RESET);
            printf("OS: " GRN "CLF Git OS v1.0\n" RESET);
            printf("KERNEL: " YEL "Custom 0.1a (Ground Zero)\n" RESET);
            printf("ARCH: " BLU "Silicon-Nano (Simulated)\n" RESET);
            printf("HARDWARE: " MAG "ASML 2nm Wafer-Base\n" RESET);
            printf("BUILDER: " CYN "Aiman Rafee\n" RESET);
        } 
        else {
            printf(RED "Error: Command '%s' not found. Type 'help' for list.\n" RESET, command);
        }
    }
    return 0;
}
