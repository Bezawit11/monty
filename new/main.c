#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 *
 *  *
 *
 *   *  
 */
int main(int argc, char **argv)

{
int count = 0, r, l;
size_t t = 0;
FILE *stream;
char *s = NULL, **tokenz;
if (argc != 2)
{
printf("USAGE: monty file\n");
exit(EXIT_FAILURE);
}
stream = fopen(argv[1], "r");
if (stream == NULL){
printf("Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
else{
while ((r = getline(&s, &t, stream)) != -1){
count++;
l = strlen(s);
l = l - 1;
if (s[l] == '\n')
{
*(s + l) = '\0';
}
printf("upto strlen");
tokenz = parse(s, tokenz);
instruction(tokenz, count);
}
}
printf("%d", count);
fclose(stream);
/*free_struct(c);*/
return 1;
}
