#pragma once

void convertRGBToGray(string path) {
	Mat img = imread(path);
	Mat imgGray;

	cvtColor(img, imgGray, COLOR_BGR2GRAY);

	imshow("Image", img);
	imshow("Image Gray", imgGray);
	waitKey(0);
}

void addGaussianBlur(string path) {
	Mat img = imread(path);
	Mat imgBlur;

	GaussianBlur(img, imgBlur, Size(7, 7), 5, 0);

	imshow("Image", img);
	imshow("Image Blur", imgBlur);
	waitKey(0);
}

void displayEdges(string path) {
	Mat img = imread(path);
	Mat imgCanny, imgDil, imgErode;

	Canny(img, imgCanny, 50, 100);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	dilate(imgCanny, imgDil, kernel);
	erode(imgDil, imgErode, kernel);

	imshow("Image", img);
	imshow("Image Canny", imgCanny);
	imshow("Image Dilation", imgDil);
	imshow("Image Erosion", imgErode);

	waitKey(0);
}