#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

main()
{
 FILE *fd;
  //1
   int directory = mkdir("dir1", 0777);
    chdir("dir1");
     fd = fopen ("file10", "w+");
      if (fd<0)
       {
          printf("errroe");
          }
          fclose(fd);
          chdir("..");
          //2
	  FILE *fdd;
          int directory2 = mkdir("dir2", 0777);
          chdir("dir2");
          fdd = fopen ("file20", "w+");
          if (fdd<0)
          {
          printf("error");
          }
          fclose(fdd);
          chdir("..");
          //3
	  FILE *fd1;
          fd1 = fopen ("file1", "w+");
          if (fd1<0)
          {
          printf("error");
          }
          fclose(fd1);
          //4
          int link = symlink("dir2/file20","link1");
          }

