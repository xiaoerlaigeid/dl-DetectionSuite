//
// Created by frivas on 26/03/17.
//

#include "VideoReader.h"

VideoReader::VideoReader(const std::string &videoPath) {
    this->cap =  new cv::VideoCapture(videoPath);

    if(!cap->isOpened())  // check if we succeeded
			 throw std::invalid_argument( "Couldn't open Video file!" );

    init=false;
}

bool VideoReader::getNextSample(Sample &sample) {

    cv::Mat image;

    try {
        while (!cap->read(image)) {
            std::cout << "Frame not valid " << std::endl;
        }

        //    init=true;

        sample.setColorImage(image);
        return true;
    }
    catch (...){
        return false;
    }

}
