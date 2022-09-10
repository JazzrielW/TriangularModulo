#include "raylib.h"
#include <iostream>
#include <string>

Color IndexColor(int indexu, int color_num){
    int num_color = color_num;
    int color_step = int(0xFFFFFF/num_color);
    //int color_step = 512;
    int final = indexu*color_step;
    Color returner;
    returner=(Color){(final & 0xff0000)>>16,(final & 0x00ff00)>>8, (final & 0x0000ff),255};
    return returner;
}

int main(void)
{
    InitWindow(1900, 680, "Triangular, Dude");

    int colors =10;
   
    bool writing = false;
    int final_number =0;
    int scale = 10;


   
    while (!WindowShouldClose())
    {
        int key = GetKeyPressed();
        bool boolkey = bool(key);

       // std::cout << cc_size;

        BeginDrawing();
            ClearBackground(RAYWHITE);
            std::string color_string = std::to_string(colors);
            char const *color_chars = color_string.c_str();
           // for(int colors = 0; colors<1000; colors++){
            if(writing){ 
                   // std::cout << "Entered writing mode!" << std::endl;
                    //std::cout << key << std::endl;
                    if(key ==  257){
                        boolkey =  false;
                        writing = false;
                        colors = final_number;
                        final_number = 0;
                        }
                    }
                    if(boolkey){
                        int number_pressed = key - 320; //you can press other keys besides numpad
                        //and negative numbers happen.. which somehow cause no errors. Oh well
                        final_number = final_number*10 + number_pressed;
                    }
                    
            if(key == 78){writing = true;
            final_number =0; }
            //key 78 = n; key 257 = enter; keys 32X = numbers 0 to 9
            if(key == KEY_UP){scale++;} 
            if(key == KEY_DOWN){scale--;}
            if(key == KEY_LEFT){colors--;}
            if(key == KEY_RIGHT){colors++;}
            //std::cout << IsKeyPressed('s') << std::endl;
            int a =0;
            int a_buff =0;
            int b=0;
            for(int i = 0; i<1200000; i++){
                 DrawRectangle(40+b*scale,30+a*scale,scale,scale,IndexColor(i%colors, colors));
                // DrawPixel(40+b,30+a,IndexColor(i%colors, colors));

                if(b+1 > a_buff){ 
                    a_buff++;
                    a=a_buff;
                    b=0;}
                else{
                    b++;
                    a--;}
                //std::cout << a, b;
            }
           DrawText(color_chars, 0, 0, 25, BLACK);

           // }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}

