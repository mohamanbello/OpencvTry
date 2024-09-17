//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//
//using namespace cv;
//using namespace std;
//
//void main()
//{
//    
//
//    while (true) {
//
//        String path = "Resources/undefined_image (2).png";
//        Mat img = imread(path);
//        Mat imgGray, imgBlur, imgCanny;
//
//        cvtColor(img,imgGray,COLOR_BGR2GRAY);
//        GaussianBlur(img, imgBlur, Size(3, 3), 3, 0);
//        Canny(imgBlur, imgCanny, 50, 150);
//
//        imshow("Image", img); 
//        imshow("Image Gray", imgGray);
//        imshow("Image Blur", imgBlur);
//        imshow("Image gBlur", imgCanny);
//        waitKey(0);
//       
//    }
//}