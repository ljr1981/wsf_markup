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

OBJECTS = big_file_C18_c.obj 

OLDOBJECTS =  sp584.obj sp584d.obj ar583.obj ar583d.obj na593.obj na593d.obj sp585.obj sp585d.obj \
	re587.obj re587d.obj ar561.obj ar561d.obj it590.obj it590d.obj it589.obj it589d.obj \
	li562.obj li562d.obj re573.obj re573d.obj in571.obj in571d.obj ge592.obj ge592d.obj \
	re586.obj re586d.obj in588.obj in588d.obj cu567.obj cu567d.obj tr563.obj tr563d.obj \
	ar575.obj ar575d.obj se578.obj se578d.obj dy576.obj dy576d.obj bo574.obj bo574d.obj \
	ta572.obj ta572d.obj li577.obj li577d.obj un582.obj un582d.obj ty591.obj ty591d.obj \
	ac568.obj ac568d.obj co564.obj co564d.obj bi579.obj bi579d.obj fi565.obj fi565d.obj \
	dy581.obj dy581d.obj ba569.obj ba569d.obj ch580.obj ch580d.obj co570.obj co570d.obj \
	bo566.obj bo566d.obj 

all::  Cobj18.lib

Cobj18.lib: $(OBJECTS) Makefile
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

