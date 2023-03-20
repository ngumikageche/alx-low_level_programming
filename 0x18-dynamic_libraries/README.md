[+] C - Dynamic libraries
[+] Author: Joseph Kageche
{*]
-----------------------------------------------------------------------
Also Called shared Library
They are linked at run time
Every program can access this library at runtime & can avoid creation of multiple copies for every program
---------------------------------------------------------------------------

creating object file
----------------------------------------------------------
gcc -c *.c -fpic
#-fpic to create dynamic library
----------------------------------------------------------

//Creating a dynamic library
----------------------------------------------------------
gcc *.o -shared -o libdynamic.so
