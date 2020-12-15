TARGET=sculptor
CC=g++
DEBUG=-g
OPT=-O0
WARN=-Wall
PTHREAD=-pthread
CCFLAGS=$(DEBUG) $(OPT) $(WARN) $(PTHREAD) -pipe
LD=g++
LDFLAGS=$(PTHREAD) -export-dynamic
OBJS= main.o sculptor.o interpretador.o putvoxel.o cutvoxel.o putbox.o cutbox.o putsphere.o cutsphere.o putellipsoid.o cutellipsoid.o
all: $(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(LDFLAGS)
 
main.o: src/main.cpp
	$(CC) -c $(CCFLAGS) src/main.cpp -o main.o
 
sculptor.o: src/sculptor.cpp
	$(CC) -c $(CCFLAGS) src/sculptor.cpp  -o sculptor.o
 
interpretador.o: src/interpretador.cpp
	$(CC) -c $(CCFLAGS) src/interpretador.cpp  -o interpretador.o

putvoxel.o: src/putvoxel.cpp
	$(CC) -c $(CCFLAGS) src/putvoxel.cpp  -o putvoxel.o

putbox.o: src/putbox.cpp
	$(CC) -c $(CCFLAGS) src/putbox.cpp  -o putbox.o

putsphere.o: src/putsphere.cpp
	$(CC) -c $(CCFLAGS) src/putsphere.cpp  -o putsphere.o

putellipsoid.o: src/putellipsoid.cpp
	$(CC) -c $(CCFLAGS) src/putellipsoid.cpp  -o putellipsoid.o

cutvoxel.o: src/cutvoxel.cpp
	$(CC) -c $(CCFLAGS) src/cutvoxel.cpp  -o cutvoxel.o

cutbox.o: src/cutbox.cpp
	$(CC) -c $(CCFLAGS) src/cutbox.cpp  -o cutbox.o

cutsphere.o: src/cutsphere.cpp
	$(CC) -c $(CCFLAGS) src/cutsphere.cpp  -o cutsphere.o

cutellipsoid.o: src/cutellipsoid.cpp
	$(CC) -c $(CCFLAGS) src/cutellipsoid.cpp  -o cutellipsoid.o

clean:
	rm -f *.o
