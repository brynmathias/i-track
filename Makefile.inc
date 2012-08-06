# need to determine the platform and define the appropriate:
MAKE=make
CXX=


EXE_EXT=
CXX=g++-4.7
ifndef PLATFORM
PLATFORM=linux
endif



ifeq ($(g++-4.7 --version),command not found: g++-4.7)
  CXX=clang++
endif

INCDIR= \
-Iinclude

CXXFLAGS=  -c -Wall -ansi -g -D$(PLATFORM) -D_REENTRANT -fPIC -std=c++11 -O1
