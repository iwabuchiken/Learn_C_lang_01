TRUNK	= sub1_stderr
EXE		= .exe
OBJ		= .obj
#OBJ		= main.o
SRC		= .c
#CC		= gcc
CC		= cl
WORD	= def
res = `echo %%vcvars%%`
#all: $(TRUNK)$(EXE)

$(TRUNK)_$(CC)$(EXE): $(TRUNK)_$(CC)$(OBJ)
	$(CC) /Fe$(TRUNK)_$(CC)$(EXE) $(TRUNK)_$(CC)$(OBJ)

$(TRUNK)_$(CC)$(OBJ): $(TRUNK)$(SRC)
	$(CC) /Fo$(TRUNK)_$(CC)$(OBJ) $(TRUNK)$(SRC)

abc:
	echo abc
	echo $(WORD)
vc:
	echo vcvars32
	echo %%vcvars%%
#	res = `echo %%vcvars%%`
	echo $(res)
	vcvars32
