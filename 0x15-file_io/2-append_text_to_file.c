#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file.
 * @filename: A pointer to the  name of the file.
 * @text_content: The string to add at the end of file.
 * Return: Always 0.
 * Return : if the function fails or filename Null -1
 * if the file does not exit the user lacks permission to write in the file -1
 * otherwise 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);

if (o == -1 | w == -1)
return (-1);

close(o);

return (1);

}
