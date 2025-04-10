
 
kompilator=g++
standard=-std=c++14
#optymalizacja=-O3
optymalizacja=
debug=-g
#debug=
profilowanie=-pg

.PHONY : clean

__ : main
	./main   
	
# -fverbose-asm -fdump-tree-all	
	
main.asm : main.cpp
	$(kompilator) $(standard) -g -O -Wa,-aslh $^ > $@
	
1.asm : main.cpp
	$(kompilator) $(standard) -S $^ -o $@
	
	            
main : main.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) -pedantic-errors -o $@ $^ 
		
	
profil : main.cpp 
	if [ -f main ]; then rm main ; fi ;
	$(kompilator) $(standard) $(profilowanie) -o main main.cpp 
	./main
	gprof main > profil.txt
	
clean : 
	rm main main.asm 1.asm. *.out profil.txt	
	

