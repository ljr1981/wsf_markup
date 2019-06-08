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

OBJECTS = big_file_C28_c.obj 

OLDOBJECTS =  ty912.obj ty912d.obj ty913.obj ty913d.obj ty916.obj ty916d.obj ty917.obj ty917d.obj \
	ty920.obj ty920d.obj ty921.obj ty921d.obj ty914.obj ty914d.obj ty918.obj ty918d.obj \
	ty922.obj ty922d.obj na894.obj na894d.obj sp904.obj sp904d.obj ar895.obj ar895d.obj \
	re892.obj re892d.obj ar896.obj ar896d.obj se899.obj se899d.obj dy897.obj dy897d.obj \
	bo893.obj bo893d.obj ta891.obj ta891d.obj li898.obj li898d.obj un903.obj un903d.obj \
	ar905.obj ar905d.obj bi900.obj bi900d.obj dy902.obj dy902d.obj ch901.obj ch901d.obj \
	rt910.obj rt910d.obj rt911.obj rt911d.obj rt915.obj rt915d.obj rt919.obj rt919d.obj \
	rt923.obj rt923d.obj ar907.obj ar907d.obj qu906.obj qu906d.obj ar908.obj ar908d.obj \
	st909.obj st909d.obj 

all::  Cobj28.lib

Cobj28.lib: $(OBJECTS) Makefile
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

