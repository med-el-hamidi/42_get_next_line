#include "get_next_line_bonus.h"
#include <fcntl.h> 
#include <stdio.h>
#include <stdlib.h>

/*NOTE:
**file1.txt, file2.txt and file2.txt must exist with content.
*/
int main(void)
{
    int fd1 = open("file1.txt", O_RDONLY);
    int fd2 = open("file2.txt", O_RDONLY);
    int fd3 = open("file3.txt", O_RDONLY);
    char *line;

    if (fd1 < 0 || fd2 < 0 || fd3 < 0)
    {
        perror("Error opening files");
        return (1);
    }

    // Read lines alternately from the three files
    for (int i = 0; i < 3; i++)
    {
        line = get_next_line(fd1);
        if (line)
        {
            printf("File1: %s", line);
            free(line);
        }

        line = get_next_line(fd2);
        if (line)
        {
            printf("File2: %s", line);
            free(line);
        }

        line = get_next_line(fd3);
        if (line)
        {
            printf("File3: %s", line);
            free(line);
        }
    }

    // Close file descriptors
    close(fd1);
    close(fd2);
    close(fd3);

    return (0);
}
