CC = g++
LDFLAGS = -lBox2D -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

nyan: main.o NGame.o NImage.o NSprite.o TitleState.o IntroState.o
	$(CC) -g -o $@ $^ $(LDFLAGS)

main.o: src/main.cpp
	$(CC) -g -c $<

NGame.o: src/NGame.cpp
	$(CC) -g -c $<

NImage.o: src/NImage.cpp
	$(CC) -g -c $<

NSprite.o: src/NSprite.cpp
	$(CC) -g -c $<

TitleState.o: src/TitleState.cpp
	$(CC) -g -c $<

IntroState.o: src/IntroState.cpp
	$(CC) -g -c $<

clean:
	rm *.o
	rm nyan
