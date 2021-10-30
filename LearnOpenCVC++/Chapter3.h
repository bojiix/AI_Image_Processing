#pragma once

void resizeImage(string path) {
	Mat img = imread(path);
	Mat imgResize1, imgResize2;

	cout << img.size() << endl;
	resize(img, imgResize1, Size(640, 480));
	resize(img, imgResize2, Size(), .5, .5);

	imshow("Image", img);
	imshow("Image Resized1", imgResize1);
	imshow("Image Resized2", imgResize2);
	waitKey(0);
}

void cropImage(string path) {
	Mat img = imread(path);
	Mat imgCrop, imgResize2;

	Rect roi(100, 100, 300, 250);
	imgCrop = img(roi);

	imshow("Image", img);
	imshow("Image Crop", imgCrop);
	waitKey(0);
}