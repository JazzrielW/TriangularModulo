# TriangularModulo
Colouring the triangular numbers by modulo

This is a relatively simple program I made out of solving some curiosity I have since HighSchool. Basically if you arrange numbers in a triangle pattern repeating every N numbers and you assign a colour to every number, what sort of pattern emerges? 

i.e. for n=6

1 3 6 4 3 3
2 5 3 2 2
4 2 1 1
1 6 6
5 5
4

It has a predetermined starting value of n=10 and a zoom level of 5px. You can change the zoom with the up and down arrows (down to 1px per number) , and you can decrease or increase N with left and right. You can also skip to any N you like by pressing "n" typing the number you want *on the number pad* and pressing enter (you can get some funky results by pressing any random key instead of numbers). 

This is also reliant on the Raylib graphics library. A precompiled static library and header file have been included as well as a Makefile THIS ONLY WORKS ON WINDOWS. For Linux you have to change the libraries and recompile raylib.


This is absolutely useless, but gives some pretty patterns!
