CC = g++
CXXFLAGS = -std=c++14 -Wall -o
OBJ = LeapYear
all: ${OBJ}
${OBJ}: object_LeapYear
	${CC} ${CXXFLAGS} $@ $@.o
object_LeapYear:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
