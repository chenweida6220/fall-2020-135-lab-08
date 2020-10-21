main: main.o imageio.o funcs.o
	g++ -o main main.o imageio.o funcs.o

main.o: main.cpp funcs.h imageio.h

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h

funcs.o: funcs.cpp funcs.h

clean:
	rm -f sample sample.o imageio.o outImage.pgm
	rm -f a.out main main.o funcs.o
	rm -f taskA.pgm taskB.pgm taskC.pgm taskD.pgm taskE.pgm taskF.pgm taskG.pgm
