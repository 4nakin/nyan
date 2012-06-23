CC = g++
LDFLAGS = -lBox2d -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

nyan: main.o
	$(CC) -g -o $@ $^ $(LDFLAGS)

main.o: src/main.cpp
	$(CC) -g -c $<
