#include <stdio.h>    
#include <opencv2/opencv.hpp>    
    
using namespace cv;    
using namespace std;    
    
int main(int argc, char** argv)    
{    
  VideoCapture cap(0); 
	namedWindow("demo", WINDOW_AUTOSIZE);   
  if (!cap.isOpened())    
    {    
      cout << "Failed to open camera." << endl;    
      return -1;    
    }    
    
  for(;;)    
    {    
      Mat frame;    
      cap >> frame;    
      imshow("demo", frame);    
      if(waitKey(30) >= 0)    
      break;    
    }    
  return 0;    
}  

