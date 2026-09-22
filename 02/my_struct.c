#include <stdio.h>
#include <stdlib.h>


struct point { int x; int y; };

struct point *create_point(int x, int y) {
    struct point *p = malloc(sizeof(struct point)); // Speicher auf dem Heap allozieren mit malloc
    p->x = x; // i want to access "fields" of/via pointer
    p->y = y; // therefore use ->
    return p;
}

int main(void) {
    struct point *origin = create_point(0, 0);
    printf("(%d, %d)\n", origin->x, origin->y);
    free(origin); // manuell, kein Garbage Collector
    return 0;
}

