#pragma once

void showImage(string path) {
	Mat img = imread(path);
	imshow("Image", img);
	waitKey(0);
}

void showVideo(string path) {
	VideoCapture cap(path);
	Mat img;

	while (true) {
		cap.read(img);
		imshow("Image", img);
		waitKey(20);
	}
}

void captureWebcam(int id) {
	VideoCapture cap(id);
	Mat img;

	while (true) {
		cap.read(img);
		imshow("Image", img);
		waitKey(1);
	}
}