CXX=g++
CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS=-lsfml-graphics -lsfml-window -lsfml-system
EXEC=Test_V1

all: $(EXEC)

Test_V1: main.o interface.o toucher.o zone.o air.o
	$(CXX) -o $@ $^ $(LDFLAGS)

main.o: interface.h toucher.h zone.h parametre.h
%.o: %.c
	$(CXX) -o $@ -c $< $(CFLAGS)

toucher.o: toucher.h interface.h parametre.h
%.o : %.c
	$(CXX) -o $@ -c $< $(CFLAGS)

interface.o: toucher.h interface.h parametre.h
%.o : %.c
	$(CXX) -o $@ -c $< $(CFLAGS)

zone.o: toucher.h zone.h parametre.h
%.o : %.c
	$(CXX) -o $@ -c $< $(CFLAGS)

air.o:
%.o : %.c
	$(CXX) -o $@ -c $< $(CFLAGS)
