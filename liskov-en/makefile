 
compiler=g++ 
standard=-std=c++20
optimisation=-O3
#optimisation=



worse : worse.o
	./worse.o

better : better.o
	./better.o
	
worse.o : worse.cpp  
	$(compiler) $(standard) $(optimisation) -pedantic-errors -o $@ $^

better.o : better.cpp
	$(compiler) $(standard) $(optimisation) -pedantic-errors -o $@ $^
