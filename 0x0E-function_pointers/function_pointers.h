#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));

#endif /* _FUNCTION_POINTERS_H */
