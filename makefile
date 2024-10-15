build : src/Main.cpp
	g++ src/Main.cpp -Iinclude -o bin/tazo

run : bin/tazo
	./bin/tazo