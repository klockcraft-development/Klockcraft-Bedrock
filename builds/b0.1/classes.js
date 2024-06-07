const cv = require('opencv-js');

function main() {
  console.log("Coming soon!");

  let myImage;
  cv.namedWindow("PhotoFrame");
  myImage = cv.imread("promotional.jpg");
  if (myImage.empty()) {
    console.log("Couldn't load the image.");
    return -1;
  }
  cv.imshow("PhotoFrame", myImage);
  cv.waitKey(0);
  return 0;
}

main();

