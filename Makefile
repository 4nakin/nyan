CC = g++
LDFLAGS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

nyan: main.o NGame.o NImage.o NSprite.o TitleState.o IntroState.o MainState.o NyanCat.o Zombie.o
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

MainState.o: src/MainState.cpp
	$(CC) -g -c $<

NyanCat.o: src/NyanCat.cpp
	$(CC) -g -c $<

Zombie.o: src/Zombie.cpp
	$(CC) -g -c $<

clean:
	rm *.o
	rm nyan
