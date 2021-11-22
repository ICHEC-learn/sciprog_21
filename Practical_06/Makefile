C = gcc
CCFLAGS = -O3
LDFLAGS = -lm

all: mmc
mmc: main.o mm.o
        $(CC) -o $@ $^ $(LDFLAGS)
##$(CC) -o mc main.o mm.o $(LDFLAGGS)

mm.o: mm.c
        $(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) mm.c

main.o: main.c
        $(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) main.c

clean: 
        rm *.o
