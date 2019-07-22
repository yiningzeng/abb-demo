//
// Created by baymin on 19-7-22.
//
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;


int main() {


    for (int i=1; i<=32; i++) {
        stringstream ss;
        ss<<i;
        Mat img=imread("/opt/MVS/Samples_LinuxSDK/demo/abb-demo/64/ImageProcess/png/" + ss.str() +".png");

        if (img.empty()) {
            cout << "Error" << endl;
            return -1;
        }
        imshow("camera", img);
        resizeWindow("camera", 1600, 1200);
//    setWindowProperty("camera", CV_WND_PROP_FULLSCREEN, CV_WINDOW_FULLSCREEN);
        moveWindow("camera", 1921, -25);

        waitKey(500);
    }

    return 0;
}

