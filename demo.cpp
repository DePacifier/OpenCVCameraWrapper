#include "CameraWrapper.cpp"
#include <stdio.h>

using namespace std;

CameraWrapper *CameraWrapper::cameraInstance = 0;

int main(){
    //Using default Values
    CameraWrapper *MyCam = MyCam -> initiateCamera();
    MyCam->openCamera();
    MyCam->readCamera();
    MyCam->closeCamera();

    //Using personal Values
    CameraWrapper *MyCam2 = MyCam2 -> initiateCamera(0,600,400);; // Checks if Singleton works
    MyCam2->openCamera();
    MyCam2->readCamera();
    MyCam2->closeCamera();

    return 0;
}
