 
# stale kompilacji:
kompilator=g++ 
standard=-std=c++20
optymalizacja=-O3
#optymalizacja=

# kompilacja i uruchomienie:

gorzej : gorzej.o
	./gorzej.o

lepiej : lepiej.o
	./lepiej.o
	
gorzej.o : gorzej.cpp  
	$(kompilator) $(standard) $(optymalizacja) -pedantic-errors -o $@ $^

lepiej.o : lepiej.cpp
	$(kompilator) $(standard) $(optymalizacja) -pedantic-errors -o $@ $^
