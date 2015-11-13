// Test.cpp : 定义控制台应用程序的入口点。
// 
//#include "stdafx.h"  
#include "cxcore.h"   
#include "cv.h"   
#include "highgui.h"


#include <stdio.h>
#include <cv.h>
#include <highgui.h>
#include <cxcore.h>
#include <cvaux.h>


void main()
{
void * WindowHandle1;
char *FileName="pp.jpg";
char *WndName = "Show Image";

IplImage *Image1 = cvLoadImage(FileName,1);

cvNamedWindow(WndName,0);
cvResizeWindow(WndName,400,400);

WindowHandle1=cvGetWindowHandle("Show Image");
printf("The Window Handle is : %d\n",WindowHandle1);
printf("The Window Name is : %s\n",cvGetWindowName(WindowHandle1));

cvShowImage(WndName,Image1);
cvWaitKey(0);

cvDestroyWindow(WndName);
cvReleaseImage(&Image1);
}






