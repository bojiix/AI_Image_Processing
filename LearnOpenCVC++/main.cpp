#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>

#include <iostream>

using namespace cv;
using namespace std;

namespace chapter1 {
	#include "Chapter1.h"
}
namespace chapter2 {
	#include "Chapter2.h"
}
namespace chapter3 {
	#include "Chapter3.h"
}
namespace chapter4 {
	#include "Chapter4.h"
}
namespace chapter5 {
	#include "Chapter5.h"
}
namespace chapter6 {
	#include "Chapter6.h"
}
namespace chapter7 {
#include "Chapter7.h"
}
namespace chapter8 {
	#include "Chapter8.h"
}

void youChose(int i);
char chapterHasTheFollowing(int ch, string options[], int n);
bool goBackQ();

int main() {
	char x, y, z;

	beginning:
	cout << "Hi! There are 8 chapters in this project, numbered from 1 to 8. Choose a chapter... "; cin >> x;

	switch (x)
	{
		case '1':
		{
			youChose(1);
			string options[3] = { "Show Image", "Show Video", "Capture Webcam" };
			y = chapterHasTheFollowing(2, options, 3);

			switch (y) {
				case '1':
					chapter1::showImage("Resources/test.png");

					if (goBackQ()) {
						goto beginning;
					}
				break;

				case '2':
					chapter1::showVideo("Resources/test_video.mp4");
				break;

				case '3':
					chapter1::captureWebcam(0);
				break;

				default:
					if (goBackQ()) {
						goto beginning;
					}
				break;
			}
		}
		break;

		case '2':
		{
			youChose(2);
			string options[3] = { "Convert RGB image to Grayscale", "Add Gaussian Blur", "Detect edges" };
			y = chapterHasTheFollowing(2, options, 3);

			switch (y) {
				case '1':
					chapter2::convertRGBToGray("Resources/test.png");

					if (goBackQ()) {
						goto beginning;
					}
				break;

				case '2':
					chapter2::addGaussianBlur("Resources/test.png");

					if (goBackQ()) {
						goto beginning;
					}
				break;

				case '3':
					chapter2::displayEdges("Resources/test.png");

					if (goBackQ()) {
						goto beginning;
					}
				break;

				default:
					if (goBackQ()) {
						goto beginning;
					}
				break;
			}
		}
		break;

		case '3':
		{
			youChose(3);
			string options[2] = { "Resize Image", "Crop Image" };
			y = chapterHasTheFollowing(3, options, 2);

			switch (y) {
				case '1':
					chapter3::resizeImage("Resources/test.png");

					if (goBackQ()) {
						goto beginning;
					}
				break;

				case '2':
					chapter3::cropImage("Resources/test.png");

					if (goBackQ()) {
						goto beginning;
					}
				break;

				default:
					if (goBackQ()) {
						goto beginning;
					}
				break;
			}
		}
		break;

		case '4': {
			youChose(5);
			string options[1] = { "Draw shapes on a blank image" };
			y = chapterHasTheFollowing(5, options, 1);

			switch (y) {
				case '1':
					chapter4::drawShapesOnBlank();

					if (goBackQ()) {
						goto beginning;
					}
				break;

				default:
					if (goBackQ()) {
						goto beginning;
					}
				break;
			}
		}
		break;

		case '5': {
			youChose(5);
			string options[1] = { "Warp perspective" };
			y = chapterHasTheFollowing(5, options, 1);

			switch (y) {
				case '1':
					chapter5::warpPerspectiveOfPortion("Resources/cards.jpg");

					if (goBackQ()) {
						goto beginning;
					}
					break;

				default:
					if (goBackQ()) {
						goto beginning;
					}
				break;
			}
		}
		break;

		case '6': 
		{
			youChose(6);
			string options[1] = { "Detect Color" };
			y = chapterHasTheFollowing(6, options, 1);

			switch (y) {
			case '1':
				chapter6::detectColor("Resources/lambo.png");

				if (goBackQ()) {
					goto beginning;
				}
				break;

			default:
				if (goBackQ()) {
					goto beginning;
				}
				break;
			}
		}
		break;

		case '7': {
			youChose(7);
			string options[2] = { "Detect Shape Method Simple", "Detect Shape Method Complex" };
			y = chapterHasTheFollowing(7, options, 2);

			switch (y) {
			case '1':
				chapter7::shapeDetection("Resources/shapes.png", 1);

				if (goBackQ()) {
					goto beginning;
				}
			break;

			case '2':
				chapter7::shapeDetection("Resources/shapes.png", 2);

				if (goBackQ()) {
					goto beginning;
				}
				break;

			default:
				if (goBackQ()) {
					goto beginning;
				}
				break;
			}
		}
		break;

		case '8': {
			youChose(8);
			string options[1] = { "Face detection" };
			y = chapterHasTheFollowing(8, options, 1);

			switch (y)
			{
			case '1':
				chapter8::detectFace("Resources/test.png");

				if (goBackQ()) {
					goto beginning;
				}
				break;
			default:
				break;
			}

		}
		break;

		default:
			break;
	}

	return 0;
}

void youChose(int i) {
	cout << "You chose Chapter " << i << ".\n";
}

char chapterHasTheFollowing(int ch, string options[], int n) {
	char y;
	cout << "Chapter " << ch << " has the following methods implemented:";

	for (int i = 1; i <= n; i++) {
		if (i != 1) {
			cout << ",";
		}
		cout << " (" << i << ")" << options[i - 1];
	}

	cout << ", (" << n + 1 << ")Go back or leave. Choose an option... "; cin >> y;

	return y;
}

bool goBackQ() {
	char z;
	cout << "Would you like to go back at the beginning or leave? Go back - 1, Leave - Any key... "; cin >> z;
	return z == '1';
}