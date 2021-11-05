all: main

main: main.cpp
	g++ -fsanitize=address -ggdb -std=c++14 -o $@ $^

clean:
	rm -rf main