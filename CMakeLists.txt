cmake_minimum_required(VERSION 2.8)                          
PROJECT(cameraWrapper)                                      

FIND_PACKAGE( OpenCV REQUIRED )                            
INCLUDE_DIRECTORIES( ${OpenCV_INCLUDE_DIRS} )

ADD_LIBRARY(mywrapper "CameraWrapper.cpp")


ADD_EXECUTABLE(demo "${CMAKE_SOURCE_DIR}/demo.cpp")                        
TARGET_LINK_LIBRARIES (demo mywrapper ${OpenCV_LIBS})     
