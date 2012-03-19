#for /f "tokens=1,2 delims=." %%a in ("%file_name%") do (
#	set trunk=%%a
#)
TRUNK	=
EXE		= .exe
OBJ		= .obj
SRC		= .c
CC		= cl
CFLAG	= 
FILES	= mylib1
MACRO	= 

all:$(TRUNK)_$(CC)$(EXE)
#all:$(FILES)$(OBJ), $(TRUNK)_$(CC)$(EXE)
#	echo $(trunk)

$(TRUNK)_$(CC)$(EXE): $(TRUNK)_$(CC)$(OBJ) $(FILES)_$(CC)$(OBJ)
#	$(CC) /Fe$(TRUNK)_$(CC)$(EXE) $(TRUNK)_$(CC)$(OBJ) $(FILES)$(OBJ)
	$(CC) /Fe$(TRUNK)_$(CC)$(EXE) $(TRUNK)_$(CC)$(OBJ) $(FILES)_$(CC)$(OBJ)

$(TRUNK)_$(CC)$(OBJ): $(TRUNK)$(SRC)
	$(CC) -D$(MACRO) -c /Fo$(TRUNK)_$(CC)$(OBJ) $(TRUNK)$(SRC)

$(FILES)_$(CC)$(OBJ): $(FILES)$(SRC)
	$(CC) -c /Fo$(FILES)_$(CC)$(OBJ) $(FILES)$(SRC)
