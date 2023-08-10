#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: Printing sentence using the puts function
 *
 * Return: value is 1
*/
int main(void)
{
char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, sentence, 59);
return (1);
}
