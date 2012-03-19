TRUNK	= lib
EXE		= .exe
OBJ		= .obj
#OBJ		= main.o
SRC		= .c
#CC		= gcc
CC		= cl
WORD	= def
REVISION	= 1

all: $(TRUNK)$(EXE)

$(TRUNK)$(EXE): $(TRUNK)$(OBJ)
#	$(CC) -o $(TRUNK)$(EXE) $(TRUNK)$(OBJ)
#	$(CC) /Fe $(TRUNK)$(EXE) $(TRUNK)$(OBJ)
	$(CC) $(TRUNK)$(OBJ) /Fe$(TRUNK)$(EXE)

$(TRUNK)$(OBJ): $(TRUNK)$(SRC)
	$(CC) /Fo /DREVISION=$(REVISION) $(TRUNK)$(SRC)

abc:
	echo abc
	echo $(WORD)
