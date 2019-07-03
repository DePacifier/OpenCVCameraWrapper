# OpenCVCameraWrapper
Camera Wrapper for OpenCV

This a simple OpenCV wrapping class that can easily get or read a single frame of a complete picture from an image source. 
The wrapper is basically a singleton class which holdes different properties of the camera needed by the user and returns a camera kind of object. This object will be given by the initiateCamera method of the wrapper class(Necssarry beacuse of singleton implementation). 

To start using the wrapper class, you have to do the following
'''
#include "CameraWrapper.cpp" //Given that the file is in the same directory
CameraWrapper *CameraWrapper::cameraInstance = 0;
'''

To start the camera, you will rather use the inititate camera rather than just create an object of the wrapper. 
'''
CameraWrapper *MyCam = MyCam -> initiateCamera();
'''

Then you can basically use all the methods that are attributted to it. Like opening the camera, reading from the camera and finally closing the camera. But there is a catch both close and read depend on the opening of the camera so you have to first open the camera inorder to use the other methods. Like this:
'''
MyCam->openCamera();
MyCam->readCamera();
MyCam->closeCamera();
'''

Thats all about it!!!
