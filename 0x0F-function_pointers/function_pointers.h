#ifndef FILE_MAIN
#define FILE_MAIN

/*a list that was given from the task 0 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, int size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
