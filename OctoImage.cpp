#include "OctoImage.h"

OctoImage::OctoImage()
{
}

std::vector<float> OctoImage::CalcProportions(double width, double height, double target)
{

    // cross-multiplication (rule of 3) method tho define the must have image
    // height
    double cRatio = target * height;

    double value = cRatio / width;

    std::vector<float> proportions;

    proportions.push_back(target);
    proportions.push_back(value);

    return proportions;

}