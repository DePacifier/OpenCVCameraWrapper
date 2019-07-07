# OpenCVCameraWrapper
Camera Wrapper for OpenCV

This a simple OpenCV wrapping class that can easily get or read a single frame of a complete picture from an image source. 
The wrapper is basically a singleton class which holdes different properties of the camera needed by the user and returns a camera kind of object. This object will be given by the initiateCamera method of the wrapper class(Necssarry beacuse of singleton implementation). 

To start using the wrapper class, you have to do the following
```
#include "CameraWrapper.cpp" //Given that the file is in the same directory
CameraWrapper *CameraWrapper::cameraInstance = 0;
```

To start the camera, you will rather use the inititate camera rather than just create an object of the wrapper. 
```
CameraWrapper *MyCam = MyCam -> initiateCamera();
```

Then you can basically use all the methods that are attributted to it. Like opening the camera, reading from the camera and finally closing the camera. But there is a catch both close and read depend on the opening of the camera so you have to first open the camera inorder to use the other methods. Like this:
```
MyCam->openCamera();
MyCam->readCamera();
MyCam->closeCamera();
```

#Fixing Issues With Camera using Virtual Machine(Virtual Box)

If you are running and using a virtual machine(specifically virtual box) and have a problem with the webcam not working or an external usb camera not working, one way of fixing is by installing the extension pack for virtual box. This extension pack will have all the required drivers and will make the VM to detect the webcams. 

You can find the extension here:
https://download.virtualbox.org/virtualbox/6.0.8/Oracle_VM_VirtualBox_Extension_Pack-6.0.8.vbox-extpack
or you can manually find the extension pack on this page:
https://www.virtualbox.org/wiki/Downloads

After installing the extension you can mount the webcam or external cam and it will work fine.

Here is a sample:

https://github.com/DePacifier/OpenCVCameraWrapper/blob/master/Screenshot%20from%202019-07-05%2007-13-50.png

Thats all about it!!!
