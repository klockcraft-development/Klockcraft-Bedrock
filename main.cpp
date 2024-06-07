#include <iostream>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;

int main() {
    cout << "Coming soon!" << endl;
    
    Mat myImage; 
    namedWindow("PhotoFrame"); 
    myImage = imread("promotional.jpg"); 
    if (myImage.empty()) { 
        cout << "Couldn't load the image." << endl;
        system("pause"); 
        return -1;
    }
    imshow("PhotoFrame", myImage); 
    waitKey(0); 
    return 0;
}
