run : bin/tazo
	./bin/tazo

bin/tazo : src/Main.cpp
	g++ src/Main.cpp -Iinclude -o bin/tazo

assets/mensaje : bin/tazo
	./bin/tazo > assets/mensaje

