#include "a6.h"
#include <iostream>
#include <math.h>

using namespace std;

// create a new image that is k times bigger than the input by using nearest neighbor interpolation
FloatImage scaleNN(const FloatImage &im, float factor)
{
	// create new FloatImage that is factor times larger than input image

	// loop over new FloatImage pixels and set appropriate values (smartAccessor is probably overkill here)

	// return new image
	return im; // CHANGE ME
}

// using bilinear interpolation to assign the value of a location from its neighboring pixel values
float interpolateLin(const FloatImage &im, float x, float y, int z, bool clamp)
{
	// Hint: use smartAccessor() to handle coordinates outside the image
	//return final float value
    return 0.0; // CHANGE ME
}

// create a new image that is k times bigger than the input by using bilinear interpolation
FloatImage scaleLin(const FloatImage &im, float factor)
{
	// create new FloatImage that is factor times larger than input image

    // loop over new FloatImage pixels and set appropriate values (use interpolateLin())

	// return new image
    return im; // CHANGE ME
}

// rotate an image around its center by theta
FloatImage rotate(const FloatImage &im, float theta)
{
	//rotate im around its center by theta

	// return rotated image
    return im; // CHANGE ME
}