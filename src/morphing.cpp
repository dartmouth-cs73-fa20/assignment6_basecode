// morphing.cpp
// Assignment 6


#include "morphing.h"
#include "utils.h"
#include "a2.h"
#include "a6.h"

using namespace std;

/**************************************************************
 //            IMAGE WARPING/MORPHING FUNCTIONS              //
 *************************************************************/

// warp an entire image according to a pair of segments.
FloatImage warpBy1(const FloatImage &im, Segment &segBefore, Segment &segAfter)
{
	return im; // CHANGE ME
}

// warp an image according to a vector of before and after segments using segment weighting
FloatImage warp(const FloatImage &im, vector<Segment> &segsBefore, vector<Segment> &segsAfter, float a, float b,
                float p)
{
	return im; // CHANGE ME
}

// return a vector of N images in addition to the two inputs that morphs going between im1 and im2 for the corresponding segments
vector<FloatImage> morph(const FloatImage &im1, const FloatImage &im2, vector<Segment> &segsBefore,
                         vector<Segment> &segsAfter, int N, float a, float b, float p)
{
	// check if im1 and im2 are the same size and throw the appropriate exception before performing morph

    return vector<FloatImage>(); // CHANGE ME
}

/**************************************************************
 //                 SEGMENT CLASS FUNCTIONS                  //
 *************************************************************/

// Segment constructor takes in 2 points (x1,y1) and (x2,y2) corresponding to the ends of a segment and computes:
// P - 2-element vector to point (x1, y1)
// Q - 2-element vector to pont (x2, y2)
// PQ - 2-element vector from P to Q
// PQ2 - squared distance between P and Q
// PQlength - distance between P and Q
// PQDivByPQlength2 - 2-element vector PQ normalized by PQ2
// perpPQ - 2-element vector perpendicular to PQ
// perpPQDivByPQlength - 2-element vector perpPQ normalized by PQlength
Segment::Segment(float x1, float y1, float x2, float y2)
{
	P.fill(0.f);
	Q.fill(0.f);
	perpPQ.fill(0.f);

	// finish implementing this
}

// Implement the computation of the u coordinate of a point (x,y) with respect to a segment
float Segment::getU(float x, float y)
{
	return 0.0f; // CHANGE ME
}

// Implement the computation of the v coordinate of a point (x,y) with respect to a segment
float Segment::getV(float x, float y)
{
	return 0.0f; // CHANGE ME
}

// compute the new (x, y) position of a point given by the (u,v) location relative to another segment.
// return the point (x,y) in a 2-element vector
Vec2f Segment::UVtoX(float u, float v)
{
	// takes the u,v values and returns a coordinate - to be called from target segment

	return Vec2f(); // CHANGE ME
}

// Implement distance from a point (x,y) to the segment. Remember the 3 cases from class
float Segment::dist(float x, float y)
{
	return 0.0f; // CHANGE ME
}

// compute the weight of a segment to a point (x,y) given the weight parameters a,b, and p
float Segment::weight(float x, float y, float a, float b, float p)
{
	return 0.0f; // CHANGE ME
}

/**************************************************************
 //               DON'T EDIT BELOW THIS LINE                //
 *************************************************************/

// add 2 vectors of the same length.
Vec2f Segment::add(const Vec2f &vec1, const Vec2f &vec2)
{
	return Vec2f{{vec2[0]+vec1[0], vec2[1]+vec1[1]}};
}

// subtracts 2 vectors of the same length.
Vec2f Segment::subtract(const Vec2f &vec1, const Vec2f &vec2)
{
	return Vec2f{{vec2[0]-vec1[0], vec2[1]-vec1[1]}};
}

// takes the dot product between 2 vectors of the same length
float Segment::dot(const Vec2f &vec1, const Vec2f &vec2)
{
	return vec2[0]*vec1[0] + vec2[1]*vec1[1];
}

// mutliplies an entire vector by a scalor value
Vec2f Segment::scalarMult(const Vec2f &vec, float factor)
{
	return Vec2f{{vec[0]*factor, vec[1]*factor}};
}

// destructor
Segment::~Segment() {} // Nothing to clean up
