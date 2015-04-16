# chugl
ChucK OpenGL Graphics Module

chugl is a chugin that adds advanced graphic capabilities to the ChucK music programming language. 
chugl supports both a high-level graphics API in addition to standard OpenGL programming methods. 
See http://chuck.stanford.edu/extend/ for more info about chugins and http://chuck.stanford.edu/ to learn more about ChucK. 

Currently in heavy development/alpha status. Mac OS X Only. 

## How to build/install

Currently chugl needs to be built from source to use it. 
First install Xcode or Command-line build tools.
Then install lxml, a Python library. E.g. 

    $ sudo pip install lxml

Clone the master branch of chugl.  

    $ git clone https://github.com/spencersalazar/chugl.git  
    $ cd chugl

Initialize the chuck submodule.

    $ git submodule update --init

Build the chugin with make, supplying the 'osx' argument to indicate your OS.  

    $ make osx  

Install the chugin.  

    $ sudo make install  

And you're off to the races! Currently, chugl is only supported in miniAudicle (and not command-line chuck). 

## Documentation

See the tests/ folder for example code. 
Super-slick autogenerated docs available also at https://ccrma.stanford.edu/~spencer/ckdoc/chugl.html ! 


