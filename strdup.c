#include<stdio.h>

int main()
{
    const char *foo = "bar";

    char *bar = strdup(foo); /* now contains a new copy of "bar" */
    printf("%s\n", bar);     /* prints "bar" */
    free(bar);

    char *foo = malloc(sizeof(char) * 1024);        /* buffer for 1024 chars */
    snprintf(foo, 1024, "%s - %s\n", "foo", "bar"); /* puts "foo - bar\n" in foo */
    printf(foo);                                    /* prints "foo - bar" */
    free(foo);

    return 0;
}

