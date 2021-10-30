#pragma once

void drawShapesOnBlank() {
	Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255));

	circle(img, Point(128, 256), 155, Scalar(78, 29, 215));
	circle(img, Point(256, 256), 155, Scalar(0, 69, 255), 10);
	circle(img, Point(306, 256), 155, Scalar(124, 69, 155), FILLED);

	rectangle(img, Point(130, 220), Point(400, 300), Scalar(0, 0, 0), 10);
	Rect rect(100, 100, 200, 150);
	rectangle(img, rect, Scalar(0, 50, 0), FILLED);

	line(img, Point(50, 340), Point(382, 100), Scalar(123, 43, 36));
	line(img, Point(150, 340), Point(22, 100), Scalar(123, 43, 36), 10);

	putText(img, "This is a text", Point(137, 262), FONT_HERSHEY_DUPLEX, 1.25, Scalar(167, 32, 240), 2);

	imshow("Image", img);
	waitKey(0);
}