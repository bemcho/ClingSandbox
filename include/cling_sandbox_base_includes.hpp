#ifndef BASE_INCLUDES_HPP
#define BASE_INCLUDES_HPP
/**
This file is mainly for common includes

Command Line

Cling has its own command line, which looks like any other Unix shell. The emacs-like command line editor is what we call interactive command line or interactive shell.

Once we start Cling it automatically includes several header files and its own runtime universe. Thus it creates the minimal environment for the user to start.
Grammar

Cling is capable to parse everything that Clang can do. In addition, Cling can parse some interpreter-specific C++ extensions.
Metaprocessor

Cling Metaprocessor provides convenient and easy to use interface for changing the interpreter's internal state or for executing handy commands. Cling provides the following metaprocessor commands:

syntax: .(command), where command is:

    .x filename.cxx - loads filename and calls void filename() if defined
    .L library | filename.cxx - loads library or filename.cxx
    .printAST - shows the abstract syntax tree after each processed entity
    .I path - adds an include path

Resources

    Forum
    Contact the developers at cling-dev@cern.ch (link sends e-mail)
    LLVM Developers' Meeting, "Creating cling, an interactive interpreter interface for clang", Axel Naumann, Philippe Canal, Paul Russo, Vassil Vassilev, 04.11.2010, San Jose, CA, United States - Slides (link is external) | Video (link is external)
    Google Tech Talk (slides | video (link is external))
    more clang-centric presentations (link is external)

    https://root-forum.cern.ch/c/cling/cling-support

 */



#include <iostream>
#include <memory>
#include <numeric>
#include <algorithm>
#include <string>
#include "gnuplot_i.hpp"


#endif // BASE_INCLUDES_HPP
