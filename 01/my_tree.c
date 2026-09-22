#include <stdio.h>

struct node {
    char *label;
    struct node *left;
    struct node *right;
};

int main(void) {
    struct node ll = {"ganz unde links", NULL, NULL};
    struct node lr = {"lr", NULL, NULL};
    struct node left = {"left", &ll, &lr};
    struct node right = {"right", NULL, NULL};
    struct node root = {"root", &left, &right};
    struct node *rootPointer = &root;

    printf("node %s", rootPointer -> left -> left -> label);
    return 0;
}