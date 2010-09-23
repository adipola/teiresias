all: teiresias

teiresias: TeiresiasStack.o TeiresiasMethods.o TeiresiasUtilities.o
	g++ TeiresiasMain.cpp TeiresiasStack.o TeiresiasMethods.o TeiresiasUtilities.o -o teiresias

TeiresiasStack.o: TeiresiasStack.cpp
	g++ -c TeiresiasStack.cpp

TeiresiasMethods.o: TeiresiasMethods.cpp
	g++ -c TeiresiasMethods.cpp

TeiresiasUtilities.o: TeiresiasUtilities.cpp
	g++ -c TeiresiasUtilities.cpp

clean:
	rm -rf *.o teiresias
