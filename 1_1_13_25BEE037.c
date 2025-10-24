#include <stdio.h>
int main() {
    long bytes;
    float kb, mb, gb;
    printf("Enter size in bytes: ");
    scanf("%ld", &bytes);
    kb = bytes / 1024.0;
    mb = kb / 1024.0;
    gb = mb / 1024.0;
    printf("%.2f KB\n%.2f MB\n%.2f GB\n", kb, mb, gb);
    return 0;
}
