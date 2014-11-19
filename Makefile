CP      = g++
CPP  	= main.cpp $(shell find src -regex '.*\.\(cpp\)')
OBJ  	= $(shell find . -regex '.*\.\(o\)')
READY  	= $(shell find obj -regex '.*\.\(o\)')
EXE  	= ./bin/app.exe


default: generate move
	$(CP) $(READY) -o $(EXE)

generate:
	$(CP) -c $(CPP)

move:
	mv $(OBJ)  obj

clean:
	rm -f $(READY)
	rm -f $(EXE)