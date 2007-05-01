
# these are the headers for your project
# noinst_HEADERS = wokno.h

#########################################################################
# APPLICATION SECTION
#########################################################################
# this is the program that gets installed.  it's name is used for all
# of the other Makefile.am variables

AUTOMAKE_OPTIONS = subdir-objects

bin_PROGRAMS = Prahistorie

# the application source, library search path, and link libraries
Prahistorie_SOURCES = \ 
src/main.cpp \
src/app.cpp

Prahistorie_LDADD = $(HOE_LIB) -lHoeGame -lHoeCore  -ll $(HOE_LIB) $(LUA_LIBS) -ldl -lbassmod -lX11 -lfl

