#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>

int main() {
    char dataType[20];
    printf("Enter the data type name (or \"all\" to display all): ");
    scanf("%s", dataType);

    if (strcmp(dataType, "int") == 0) {
        printf("Size of int: %zu bytes\n", sizeof(int));
        printf("Value range of int: %d to %d\n", INT_MIN, INT_MAX);
    } else if (strcmp(dataType, "float") == 0) {
        printf("Size of float: %zu bytes\n", sizeof(float));
        printf("Value range of float: %E to %E\n", FLT_MIN, FLT_MAX);
    } else if (strcmp(dataType, "double") == 0) {
        printf("Size of double: %zu bytes\n", sizeof(double));
        printf("Value range of double: %E to %E\n", DBL_MIN, DBL_MAX);
    } else if (strcmp(dataType, "char") == 0) {
        printf("Size of char: %zu bytes\n", sizeof(char));
        printf("Value range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    } else if (strcmp(dataType, "all") == 0) {
        printf("Size of int: %zu bytes\n", sizeof(int));
        printf("Value range of int: %d to %d\n", INT_MIN, INT_MAX);
        printf("Size of float: %zu bytes\n", sizeof(float));
        printf("Value range of float: %E to %E\n", FLT_MIN, FLT_MAX);
        printf("Size of double: %zu bytes\n", sizeof(double));
        printf("Value range of double: %E to %E\n", DBL_MIN, DBL_MAX);
        printf("Size of char: %zu bytes\n", sizeof(char));
        printf("Value range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    } else {
        printf("Unknown data type.\n");
    }

    return 0;
}
