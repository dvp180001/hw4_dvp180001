#files
EXEC := myprog
#options
CC := gcc
CFLAGS := -O3
#rules
$(EXEC): myprog1.o
	$(CC) myprog1.c -o $(EXEC)
myprog1.o: myprog1.c
#phony targets
.PHONY: clobber clean neat echo
clean:
	$(RM) *.o
	$(RM) $(EXEC)
			

