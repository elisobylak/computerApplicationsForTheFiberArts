import processing.serial.*;

// Global variables
int new_sX, old_sX;
int new_sY, old_sY;
int nX, nY;
Serial myPort;

// Setup the Processing Canvas
void setup(){
  //x,y
  size( 800, 400 );
  strokeWeight( 5 );
 
  //Open the serial port for communication with the Arduino
  //Make sure the COM port is correct
  myPort = new Serial(this, "/dev/cu.usbmodemfd131", 9600);
  myPort.bufferUntil('\n');
}


// Draw the Window on the computer screen
void draw(){
  
  // Fill canvas grey
  background( 100 );
    
  // Set the stroke colour to white
  stroke(255); 
  
  // Draw a circle at the mouse location
  ellipse( nX, nY, 10, 10 );

  //Draw Line from the top of the page to the bottom of the page
  //in line with the mouse.
  line(nX,0,nX,height);  
  line(0,nY,width,nY);
}


// Get the new mouse location and send it to the arduino
void mouseMoved(){
  nX = mouseX;
  nY = mouseY; 
  
  println(myPort);
  
  //map the mouse x coordinates to the LEDs on the Arduino.
  new_sX=(int)map(nX,0,800,0,10);
  new_sY=(int)map(nY,400,0,11,21);

  if(new_sY==old_sY){
    //do nothing
  } else {  
    old_sY = new_sY;
    myPort.write(""+new_sY);
  }
  
  while(myPort.available() > 0){
    int inByte = myPort.read();
    println(inByte);
  }
}
