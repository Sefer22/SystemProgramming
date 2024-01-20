#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    printf("Bu, ana proqramdir.\n");

    
    if (execlp("ls", "ls", "-l", (char *)NULL) == -1) {
        perror("exec s?hv bas verdi");
        exit(EXIT_FAILURE);
    }

    
    printf("Bu, execlp-d?n sonraki kod hiss?sidir. Bu s?tr icra olunmayacaq.\n");

    return 0;
}

