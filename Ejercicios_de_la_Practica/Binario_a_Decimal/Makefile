CC = g++
CXXFLAGS = -std=c++14 -Wall -o
OBJ = Binario_a_Decimal
all: ${OBJ}
${OBJ}: object_Binario_a_Decimal
	${CC} ${CXXFLAGS} $@ $@.o
object_Binario_a_Decimal:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
