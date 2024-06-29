derlecalistir:program calistir

program: kutup
	gcc ./lib/CANLI.o ./lib/BITKI.o ./lib/BOCEK.o ./lib/SINEK.o ./lib/PIRE.o ./lib/HABITAT.o ./lib/BAGLILISTE.o ./lib/test.o -o ./bin/program

kutup:
	gcc -I "./include" -c ./src/CANLI.c -o ./lib/CANLI.o
	gcc -I "./include" -c ./src/BITKI.c -o ./lib/BITKI.o
	gcc -I "./include" -c ./src/BOCEK.c -o ./lib/BOCEK.o
	gcc -I "./include" -c ./src/SINEK.c -o ./lib/SINEK.o
	gcc -I "./include" -c ./src/PIRE.c -o ./lib/PIRE.o
	gcc -I "./include" -c ./src/HABITAT.c -o ./lib/HABITAT.o
	gcc -I "./include" -c ./src/BAGLILISTE.c -o ./lib/BAGLILISTE.o
	gcc -I "./include" -c ./src/test.c -o ./lib/test.o
calistir: 
	./bin/program.exe