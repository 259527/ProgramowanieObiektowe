program.out : main.o menu.o tablica.o tablica_wysw.o pliki.o komorka.o
	g++ -o $@ $^
main.o : main.cpp
	g++ -c -o $@ $^
menu.o : menu.cpp
	g++ -c -o $@ $^
tablica.o : tablica.cpp
	g++ -c -o $@ $^
tablica_wysw.o : tablica_wysw.cpp
	g++ -c -o $@ $^
pliki.o : pliki.cpp
	g++ -c -o $@ $^
komorka.o : komorka.cpp
	g++ -c -o $@ $^