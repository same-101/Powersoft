I=src/main.c
O=bin/psl
TF=test/test.psl

start:
	gcc -o $(O) $(I)
	./$(O) $(TF)