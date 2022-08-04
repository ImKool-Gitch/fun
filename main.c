#include <stdio.h>
#include <stdlib.h>
#define TRUE 1

size_t length(const char* buffer)
{
    size_t count = 0;
    while (TRUE)
    {
        if (buffer[count] == 0)
        {
            return count;
        }
        count++;
    }
}

void strrncpy(char* dest, const char* src, size_t size)
{
    for (size_t index = 0; index < size; index++)
    {
        dest[index] = src[index];
    }
}

int main()
{
    char* buff = malloc(5);
    char* str = malloc(5);
    printf("Enter a string: ");
    scanf("%s", buff);
    if (length(buff) > 5)
    {
        printf("Error ! Trying to wirte more characters than allocated !");
        return 1;
    }
    strrncpy(str, buff, 5);
    printf("%s", str);
    free(buff);
    free(str);
    buff = NULL;
    str = NULL;
    return 0;
}
