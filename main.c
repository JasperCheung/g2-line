#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;

  clear_screen(s);
 
 
  
 
  draw_line(250, 250, 250, 500, s, c); 
  draw_line(250, 250, 250, 0, s, c); 
  draw_line(250, 250, 400, 250, s, c); 
  draw_line(250, 250, 100, 250, s, c); 
  draw_line(250, 250, 400, 300, s, c); 
  draw_line(250, 250, 300, 350, s, c); 
  draw_line(250, 250, 170, 400, s, c); 
  draw_line(250, 250, 100, 320, s, c); 
  draw_line(250, 250, 100, 170, s, c); 
  draw_line(250, 250, 130, 100, s, c); 
  draw_line(250, 250, 300, 150, s, c); 
  draw_line(250, 250, 350, 200, s, c);
  draw_line(-230,-322, 269, 232, s, c);
  
 
  display(s);
  save_extension(s, "lines.png");

  
}
