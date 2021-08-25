CC = g++
SRC=*.cpp classes/*/*.cpp utils/*.cpp 
DEPS=*.hpp classes/*/*.hpp util/*.hpp
EXEFILE = chess
#------------------------------------------------------------------------------

$(EXEFILE): 
	$(CC) -o $(EXEFILE) -Wall -Wno-comment $(SRC) 

all: run clean

run: $(EXEFILE)
	./$(EXEFILE)

#------------------------------------------------------------------------------

clean :
	$(RM) *.o

#------------------------------------------------------------------------------

purge:
	$(RM) chess *.o