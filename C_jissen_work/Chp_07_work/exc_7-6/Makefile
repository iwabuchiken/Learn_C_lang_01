TRUNK	=
EXE		= .exe
OBJ		= .obj
SRC		= .c
CC		= cl
CFLAG	= 
FILES	= mylib1
MACRO	=
INCLUDE	=  C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\C_jissen_work\Chp_07_work\exc_7-6\

all:$(TRUNK)_$(CC)$(EXE)
#all:$(TRUNK)$(EXE)

$(TRUNK)$(EXE): $(TRUNK)$(OBJ) $(FILES)$(OBJ)
	$(CC) /Fe$(TRUNK)_$(CC)$(EXE) $(TRUNK)$(OBJ) $(FILES)$(OBJ)

$(TRUNK)$(OBJ): $(TRUNK)$(SRC)
	$(CC) -D$(MACRO) -c /Fo$(TRUNK)$(OBJ) $(TRUNK)$(SRC)

$(FILES)_$(CC)$(OBJ): $(FILES)$(SRC)
	$(CC) -c /Fo$(FILES)_$(CC)$(OBJ) \
		$(INCLUDE)$(FILES)$(SRC)
