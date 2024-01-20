#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    printf("Bu, ana proqramdir.\n");

    
    if (execlp("ls", "ls", "-l", (char *)NULL) == -1) {
        perror("exec sehv bas verdi");
        exit(EXIT_FAILURE);
    }

    
    printf("Bu, execlp-den sonraki kod hissesidir. Bu setr icra olunmayacaq.\n");

    return 0;
}

