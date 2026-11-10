#include <stdio.h>
#include <string.h>

int main() {
    char buffer[20];
    
    // Fill buffer with '*'
    memset(buffer, '*', 19);
    buffer[19] = '\0';
    
    printf("Buffer: %s\n", buffer); // Buffer: *******************
    return 0;
}
