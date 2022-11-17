CC = g++
CXXFLAGS = -std=c++14 -Wall -o
OBJ = Fibonacci 
all: ${OBJ}
${OBJ}: object_Fibonacci
	${CC} ${CXXFLAGS} $@ $@.o
object_Fibonacci:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
