INCLUDE_PATH =  -I"C:\Program Files\Eiffel Software\EiffelStudio 19.05 GPL\library\time\spec\include"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN   -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 19.05 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN   -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 19.05 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:WINDOWS
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 19.05 GPL\studio\spec\win64\lib\msc_vc140\wkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 19.05 GPL\studio\config\win64\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 19.05 GPL\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = wsf_markup.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C16_c.obj 

OLDOBJECTS =  fu515.obj fu515d.obj ty523.obj ty523d.obj ty524.obj ty524d.obj ty495.obj ty495d.obj \
	ty496.obj ty496d.obj ty497.obj ty497d.obj ty498.obj ty498d.obj ty499.obj ty499d.obj \
	ty505.obj ty505d.obj ty506.obj ty506d.obj ty507.obj ty507d.obj ty508.obj ty508d.obj \
	ty525.obj ty525d.obj in526.obj in526d.obj ce503.obj ce503d.obj ha509.obj ha509d.obj \
	ha518.obj ha518d.obj st513.obj st513d.obj st516.obj st516d.obj ta519.obj ta519d.obj \
	ta527.obj ta527d.obj li500.obj li500d.obj ha510.obj ha510d.obj ha517.obj ha517d.obj \
	ta511.obj ta511d.obj ta521.obj ta521d.obj li504.obj li504d.obj li501.obj li501d.obj \
	li502.obj li502d.obj rt514.obj rt514d.obj rt522.obj rt522d.obj ta512.obj ta512d.obj \
	ta520.obj ta520d.obj 

all::  Cobj16.lib

Cobj16.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

