CC = g++
CXXFLAGS = -std=c++14 -Wall -o
OBJ = Decimal_To_Binary 
all: ${OBJ}
${OBJ}: object_Decimal_To_Binary
	${CC} ${CXXFLAGS} $@ $@.o
object_Decimal_To_Binary:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
