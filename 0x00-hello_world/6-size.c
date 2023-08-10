#include <stdio.h>
/**
* main - Entry point
*
* Description: Print the size of each data types
*
* Return: 0 if successfully
*/
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long: %d byte(s)\n", sizeof(long));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
