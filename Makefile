# Makefile
# COSC 4785
# $Author: ikelly $

CXXFLAGS=-ggdb -Wall -Wno-sign-compare
CXX=g++ 
LEX=flex++
LEXFLAGS=--warn


program1: program1.cpp program1_lex.cpp
	$(CXX) $(CXXFLAGS) program1.cpp program1_lex.cpp -o program1

program1_lex.cpp: program1.lpp
	$(LEX) $(LEXFLAGS) program1.lpp

# 
# Probably do not need the core.* for students.
# This removes all the 'generated' files. You can always generate them again.
# Do need the -f so that all files get deleted even if some are missing.
#
clean: 
	/bin/rm -f program1 program1_lex.cpp core.* 