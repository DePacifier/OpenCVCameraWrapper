#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;

class CameraWrapper
{
private:
    VideoCapture camera;
    static CameraWrapper *cameraInstance;
    int camHeight, camWidth, camType;

    CameraWrapper(int type = 0, int height = 500, int width = 500)
    {
            camType = type;
            camHeight = height;
            camWidth = width;
        
    }
public:
    

    static CameraWrapper * initiateCamera(int type = 0, int height = 500, int width = 500)
    {
        if(!cameraInstance)
        cameraInstance = new CameraWrapper(type, height, width);

        cameraInstance->camType = type;
        cameraInstance->camHeight = height;
        cameraInstance->camWidth = width;
        
        return cameraInstance;
    }

    int openCamera()
    {
        if (!camera.isOpened())
        {
            VideoCapture cap(camType);
            if (!cap.isOpened())
                return -1;
            cap.set(CV_CAP_PROP_FRAME_WIDTH, camWidth);
            cap.set(CV_CAP_PROP_FRAME_HEIGHT, camHeight);
           
            camera = cap;
            camera.open(camType);
            return 1;
        }
    }

    Mat readCamera()
    {
        if(camera.isOpened()){
            Mat frame;
            namedWindow("window", 1);
            
            camera.read(frame);
            imwrite("image.jpg",frame);
            imshow("window", frame);
            return frame;

        }else{
            printf("Error: Please set the open a Camera First ");
            throw;
        }
        
    }

    void closeCamera()
    {
        if(camera.isOpened()) camera.release();   
    }

};