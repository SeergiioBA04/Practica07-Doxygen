CC = g++
CXXFLAGS = -std=c++14 -Wall -o
OBJ = Sum_Of_Digits
all: ${OBJ}
${OBJ}: object_Sum_Of_Digits
	${CC} ${CXXFLAGS} $@ $@.o
object_Sum_Of_Digits:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
