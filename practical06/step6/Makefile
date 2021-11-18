CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

#Comment line

all : mm

#linking

mm : main.o matrixmultiplicationfun.o
	$(CC) -o$@ $^ $(LDFLAGS)
##$(CC) -o mm main.o matrixmultiplicationfun.o $(LDFLAGS)

#Compiling
matrixmultiplicationfun.o : matrixmultiplicationfun.c
	$(CC) -c $(CCFLAGS) $<

main.o : main.c
	$(CC) -c $(CCFLAGS) main.c

clean :
	rm *.o

