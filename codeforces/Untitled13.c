#include <stdio.h>
int main()

int main() {
    int u, d;
    sscanf("-2", "%u", &u);
    sscanf("-2", "%d", &d);
    //puts(u == d ? "u == d" : "u != d");
    printf("u: %u %d\n", u, u);
    printf("d: %u %d\n", d, d);
    return 0;
}
