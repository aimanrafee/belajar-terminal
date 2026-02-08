#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

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
        else if(strcmp(command, "clear") == 0) {
            printf("\e[1;1H\e[2J");
        }
        else if(strcmp(command, "pasir") == 0) {
            printf(YEL "\n[ INFO ] " RESET "Segala kehebatan bermula dari pasir.\n");
            printf("Tanpa Silika, tiada Transistor. Tanpa Transistor, tiada Kod.\n");
            printf("Ingatlah asal-usul teknologi.\n\n");
        }
        else if(strcmp(command, "time") == 0) {
            time_t t = time(NULL);
            struct tm tm = *localtime(&t);
            char time_str[50];
            char date_str[50];
            strftime(time_str, sizeof(time_str), "%I:%M:%S %p", &tm);
            strftime(date_str, sizeof(date_str), "%d-%m-%Y", &tm);
            printf(YEL "Current System Time: " RESET "%s\n", time_str);
            printf(YEL "Date               : " RESET "%s\n", date_str);
        }
        else if(strcmp(command, "ver") == 0) {
            printf(WHT "CLF Git OS " GRN "v1.2" RESET " [Universal Adaptor Edition]\n");
        }
        else if(strcmp(command, "status") == 0) {
            printf(CYN "\n[ HARDWARE STATUS ]\n" RESET);
            
            #ifdef __ANDROID__
                // Jika di Termux (Android)
                system("termux-battery-status | grep percentage");
            #elif __APPLE__
                // Jika di MacBook/macOS
                system("pmset -g batt | grep -Eo \"[0-9]+%%\"");
            #else
                // Jika di Linux Laptop / WSL
                printf("Checking Laptop Battery...\n");
                system("upower -i $(upower -e | grep 'BAT') | grep percentage || echo 'Battery tool (upower) not found.'");
            #endif
            printf("\n");
        }
        else if(strcmp(command, "help") == 0) {
            printf(YEL "\nAvailable Commands:\n" RESET);
            printf(" - " CYN "help" RESET "   : Show this menu\n");
            printf(" - " CYN "about" RESET "  : The vision and mission\n");
            printf(" - " CYN "ver" RESET "    : Display OS version\n");
            printf(" - " CYN "fetch" RESET "  : Show system info\n");
            printf(" - " CYN "time" RESET "   : Show system clock\n");
            printf(" - " CYN "status" RESET " : Check battery level\n");
            printf(" - " CYN "clear" RESET "  : Clean the screen\n");
            printf(" - " CYN "pasir" RESET "  : Secret of the silicon\n");
            printf(" - " CYN "exit" RESET "   : Shutdown the OS\n");
        }
        else if(strcmp(command, "about") == 0) {
            printf(MAG "\n--- THE HOLY GRAIL PROJECT ---\n" RESET);
            printf("Visi: Memahami teknologi dari pasir ke kod.\n");
            printf("Misi: Menghapuskan jurang pengetahuan sistem.\n");
            printf("Status: " YEL "Jilid 5 (The Battery Pulse)\n" RESET);
            printf("Architect: " CYN "Aiman Rafee\n\n" RESET);
        }
        else if(strcmp(command, "fetch") == 0) {
            printf(CYN "      _      ______ \n");
            printf("     | |    |  ____|\n");
            printf(" ____| |    | |__   \n");
            printf(" / ___| |    |  __|  \n");
            printf("| |___| |____| |     \n");
            printf(" \\____|______|_|     \n" RESET);
            printf(WHT "----------------------\n" RESET);
            printf("OS: " GRN "CLF Git OS v1.2\n" RESET);
            printf("KERNEL: " YEL "Custom 0.3c (Multi-Platform)\n" RESET);
            printf("ARCH: " BLU "Silicon-Nano (Simulated)\n" RESET);
            printf("HARDWARE: " MAG "Detecting System...\n" RESET);
            printf("BUILDER: " CYN "Aiman Rafee\n" RESET);
        }
        else {
            printf(RED "Error: Command '%s' not found. Type 'help'.\n" RESET, command);
        }
    }
    return 0;
}
