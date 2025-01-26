#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

/*NOTE:
**file1.txt and file2.txt must exist with content.
*/
int main(void)
{
    int fd1 = open("file1.txt", O_RDONLY);
    int fd2 = open("file2.txt", O_RDONLY);
    char *line;
    
    if (fd1 < 0 || fd2 < 0)
    {
        perror("Error opening files");
        return (1);
    }
    while ((line = get_next_line(fd1)))
    {
        printf("File1: %s", line);
        free(line);
    }

    while ((line = get_next_line(fd2)))
    {
        printf("File2: %s", line);
        free(line);
    }

    close(fd1);
    close(fd2);
    return (0);
}
