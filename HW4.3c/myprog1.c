#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

main()
{
 int fd,fdd,fd1;
 //1
 int directory = mkdir("dir1", 0777);
 chdir("dir1");
 fd = open ("file10", O_RDWR | O_CREAT, 0644);
 if (fd<0)
 {
   perror("errroe");
}
close(fd);
chdir("..");
//2
int directory2 = mkdir("dir2", 0777);
chdir("dir2");
fdd = open ("file20", O_RDWR | O_CREAT, 0644);
if (fdd<0)
{
perror("error");
}
close(fdd);
chdir("..");
//3
fd1 = open ("file1", O_RDWR | O_CREAT, 0644);
if (fd1<0)
{
perror("error");
}
close(fd1);
//4
int link = symlink("dir2/file20","link1");
}

