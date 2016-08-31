# Project makefile

# Project files
MODULES=main appl word


# Create the source file list
SOURCES=$(foreach mod,$(MODULES),$(mod).cpp)
HEADERS=$(foreach mod,$(MODULES),$(mod).h)
OBJECTS=$(foreach mod,$(MODULES),$(mod).o)

# Compiler options
CC=g++
FLAG=-g -std=c++11 -Wall


# Make targets
all:		main

main:	$(SOURCES) $(HEADERS)
		@for file in $(MODULES); do\
			 echo "$$file.h" >> log.txt;\
			 echo "=========" >> log.txt;\
			 cat -n "$$file".h >> log.txt;\
			 echo " " >> log.txt;\
			 echo "$$file.cpp" >> log.txt;\
			 echo "=========" >> log.txt;\
			 cat -n "$$file.cpp" >> log.txt;\
			 echo " " >> log.txt;\
		 done;
		@echo " " >> log.txt; echo "Compiler Output: " >> log.txt;
		@$(CC) $(FLAG) -o main $(SOURCES) 2>>log.txt 1>>log.txt
		@echo " " >> log.txt;

clean:
		rm -rf *.o main main.exe main.cpp~ log.txt

