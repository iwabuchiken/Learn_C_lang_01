TRUNK	= sub1_stderr
EXE		= .exe
OBJ		= .obj
#OBJ		= main.o
SRC		= .c
#CC		= gcc
CC		= cl
WORD	= def

all: $(TRUNK)$(EXE)

$(TRUNK)$(EXE): $(TRUNK)$(OBJ)
	$(CC) /Fe$(TRUNK)$(EXE) $(TRUNK)$(OBJ)

$(TRUNK)$(OBJ): $(TRUNK)$(SRC)
	$(CC) -c $(TRUNK)$(SRC)

set_vars:
	echo vcvars32
