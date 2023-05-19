#Jashan Rai Lab 10 Mini Shell

lab10: lab10.o ParseCmd.o ProcessExtCmd.o RunExtCmd.o Redirect.o lab9_10.h
	gcc lab10.o ParseCmd.o ProcessExtCmd.o RunExtCmd.o Redirect.o -Wall

lab10.o: lab10.c lab9_10.h
	gcc -c lab10.c
	
ParseCmd.o: ParseCmd.c lab9_10.h
	gcc -c ParseCmd.c

ProcessExtCmd.o: ProcessExtCmd.c lab9_10.h
	gcc -c ProcessExtCmd.c
		
RunExtCmd.o: RunExtCmd.c lab9_10.h
	gcc -c RunExtCmd.c
		
Redirect.o: Redirect.c
	gcc -c Redirect.c

