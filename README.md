# ClingSandbox
Libs ,frameworks that works well with llvm cling - no boost basicaly
C++ repl for the win ;)
This is intended for mobile computation toolset eg: while traveling to work to play with opencv, linear algebra,ML, AI etc.

Replacing Octave or Mathlab - 
  
  motivation is:
    - well you code in one language, that is faster(depends of underlyng openblas,atlas,mkl etc. or whatever linear algebra lib you build armadillo for example)
    - C++ repl so much fun.
---------------------------------------------------------------------------------------------------------------------------------------------------
gnuplot-cpp:
  is a gnuplot c++ interface that plays very well with cling
  
  credits: Jeremy Conlin jeremit0@gmail.com.
  
https://code.google.com/archive/p/gnuplot-cpp/
C++ interface to Gnuplot via POSIX pipes

This is a small piece of code which is based on the C interface to gnuplot written by N. Devillard. The original code was pure C and though it compiled with a C++ compiler I felt that it could be rewritten in an OO fashion. Hence this project. Like the original interface, it depends on the system having POSIX pipes.

You can download the source code using the link on the right. Included with the source code is a great example file showing some of the available features. There is some doxygen-based documentation, but it needs some work to be complete.

If you would like to help out with this project, we welcome you. Start by checking out the source code with subversion and contact the project maintainer, 


---------------------------------------------------------------------------------------------------------------------------------------------------

Armadillo is a high quality linear algebra library (matrix maths) for the C++ language, aiming towards a good balance between speed and ease of use
 
Provides high-level syntax (API) deliberately similar to Matlab
 
Useful for algorithm development directly in C++, or quick conversion of research code into production environments (eg. software & hardware products)
 
Can be used for machine learning, pattern recognition, computer vision, signal processing, bioinformatics, statistics, finance, etc
 
Provides efficient classes for vectors, matrices and cubes, as well as 200+ associated functions; integer, floating point and complex numbers are supported
 
Various matrix decompositions are provided through integration with LAPACK, or one of its high performance drop-in replacements (eg. multi-threaded Intel MKL, or OpenBLAS)
 
A sophisticated expression evaluator (based on template meta-programming) automatically combines several operations to increase speed and efficiency
 
Available under a permissive license, useful for both open-source and proprietary (closed-source) software 
http://arma.sourceforge.net/ 
---------------------------------------------------------------------------------------------------------------------------------------------------

For each sandbox:
*.clingmeta hosts - .I, .L etc cling commands so far cling can not load those files, so they are just copy paste repo, kind of
*_sandbox.hpp - hosts local include that do not belong in includes/base_includes.hpp
*.cpp - hosts actual c++
*.cling - hosts mixed c++ and cling meta

Globals:
  includes - hosts common includes eg: <iostream> ,<algorithm>, <numeric> etc.
  libs - hosts local binary dependencies eg: not installed in /usr/lib, /usr/local/lib etc

---------------------------------------------------------------------------------------------------------------------------------------------------

If you try to (.L or .x ) load file that do not have functions or classes definitions , but only namespace with some variables, cling more likely will crash,
  so if you need such thing just paste it in the cling.
  
---------------------------------------------------------------------------------------------------------------------------------------------------

If you have installed the files mentioned in any *.cling file, you should be able to run it in cling(copy paste)
For emacs you may use cling/cling.el under https://github.com/bemcho/misc which is my .emacs.d setup for C++ devevlopment
For more see: https://github.com/tuhdo/emacs-c-ide-demo
