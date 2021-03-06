
#define NUM_OBSTACLES 10 //define a constant named "NUM_OBSTACLES" equal to 8
Box obstacles[NUM_OBSTACLES]; //create the obstacles array

void initObstacles(){
  //top 
  obstacles[0].w = gb.display.width();
  obstacles[0].h = 4;
  obstacles[0].x = 0;
  obstacles[0].y = 0;
  //bottom
  obstacles[1].w = gb.display.width();
  obstacles[1].h = 4;
  obstacles[1].x = 0;
  obstacles[1].y = gb.display.height()-4;
  //left
  obstacles[2].w = 4;
  obstacles[2].h = gb.display.height();
  obstacles[2].x = 0;
  obstacles[2].y = 0;
  //right
  obstacles[3].w = 4;
  obstacles[3].h = gb.display.height();
  obstacles[3].x = gb.display.width()-4;
  obstacles[3].y = 0;
  //randomize the other obstacles
  for(byte i=4; i<NUM_OBSTACLES; i++){
    obstacles[i].w = random(4,16);
    obstacles[i].h = random(4,16);
    obstacles[i].x = random(0, gb.display.width() - obstacles[i].w);
    obstacles[i].y = random(0, gb.display.height() - obstacles[i].h);
  }
}

void updateObstacles(){
  
}

void drawObstacles(){
  for(byte i=0; i<NUM_OBSTACLES; i++){
    gb.display.drawRect(obstacles[i].x, obstacles[i].y, obstacles[i].w, obstacles[i].h);
  }
}
