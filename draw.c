#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
  int x, y, A, B, d, deltaX, deltaY;
  x = x0;
  y = y0;
  if(x0 > x1){ //switcheroo if the order is wrong
    x0 = x1;
    y0 = y1;
    x1 = x;
    y1 = y;
  }
  x = x0;
  y = y0;
  A = y1 - y;
  B = -1 * ( x1 - x);
  deltaY = A;
  deltaX = -1 * B;
  /*
  printf("%d\n", x0);
  printf("%d\n", y0);
  printf("%d\n", x1);
  printf("%d\n", y1);
  printf("%d\n", x);
  printf("%d\n", y);
  */

  //octant ONE
  if( deltaY >= 0 && deltaY <= deltaX ){
    d = 2*A + B;
    while(x <= x1) {
      plot(s, c, x ,y);
      if (d >  0){
	y++;
	d += 2 * B;
      }
      x++;
      d += (2 * A);
    }
  }
  //octant DOS
  else if(deltaY >= 0 && deltaY >= deltaX){
    d = A + 2*B;
    while(y <= y1){
      plot(s,c,x,y);
      if(d < 0){
	x++;
	d+= (2*A);
      }
      y++;
      d+=2*B;
    }
  }
  //octant 7
  else if(deltaY < 0 && deltaY < -deltaX){
    d = A - 2*B;
    while(y >= y1) {
      plot(s, c, x, y);
      if(d > 0) {
	x++;
	d+=2*A;
      }    
      y--;
      d-=2*B;      
    }
  }
  //octant 8
  else if(deltaY < 0 && deltaY >= -deltaX){
    d = 2*A - B;
    while(x <= x1){
      plot(s,c,x,y);
      if(d < 0){
	y--;
	d -= 2*B;
      }
      x++;
      d+= 2*A;
    }
  }
}
