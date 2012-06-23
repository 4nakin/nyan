CC = g++
LDFLAGS = -lBox2D -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

nyan: main.o NGame.o TitleState.o
	$(CC) -g -o $@ $^ $(LDFLAGS)

main.o: src/main.cpp
	$(CC) -g -c $<

NGame.o: src/NGame.cpp
	$(CC) -g -c $<

TitleState.o: src/TitleState.cpp
	$(CC) -g -c $<

clean:
	rm *.o
	rm nyan
