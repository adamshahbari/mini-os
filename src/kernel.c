#include "kernel.h"
#include <stdio.h>
#include <string.h>

int main() {
    printf("Mini-OS Kernel started...\n");
    init_scheduler();
    init_memory();
    init_filesystem();

    // temporary CLI loop
    while (1) {
        char command[50];
        printf("mini-os> ");
        scanf("%s", command);

        if (strcmp(command, "exit") == 0) break;
        else if (strcmp(command, "ps") == 0) list_processes();
        else if (strcmp(command, "ls") == 0) list_files();
        else printf("Unknown command: %s\n", command);
    }

    printf("Shutting down Mini-OS...\n");
    return 0;
}
