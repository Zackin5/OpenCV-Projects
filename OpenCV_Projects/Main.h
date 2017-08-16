#pragma once
#include <iostream>
#include <ctime>
#include "opencv2\opencv.hpp"

int main();

//** MAIN FUNCTIONS **//

int handleInputs();

// Run background subtraction on a video
int videoBGSub();

// Run background subtraction on webcam stream
int webcamBGSub();
int webcamBGSub(int webcam_ID, float window_scale, bool save_frames, unsigned int saved_frame_interval, bool background_train_on_initalize, int background_train_time);


//** SUB FUNCTIONS **//

// Timestamp an image
void timestamp(cv::Mat inframe, cv::OutputArray outframe);

// Print a message on a image
void drawMessage(cv::Mat inframe, cv::OutputArray outframe, char message[]);