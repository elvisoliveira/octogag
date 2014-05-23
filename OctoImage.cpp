#include "OctoImage.h"

OctoImage::OctoImage()
{
}

std::vector<float> OctoImage::CalcProportions(double width, double height, double target)
{

    // cross-multiplication method tho define the must have image
    // height
    double cRatio = target * height;
    
    double value = cRatio / width;

    std::vector<float> proportions;

    proportions.push_back(target);
    proportions.push_back(value);


    //    double maxWidth = target; // Max width for the image
    //    double maxHeight = 9000; // Max height for the image
    //    double ratio = 0; // Used for aspect ratio
    //
    //    double nwidth;
    //    double nheight;
    //    
    //    // Check if the current width is larger than the max
    //    if (width > maxWidth)
    //    {
    //        ratio = maxWidth / width; // get ratio for scaling image
    //
    //        nwidth = maxWidth;
    //        nheight = height * ratio;
    //
    //        height = height * ratio; // Reset height to match scaled image
    //        width = width * ratio; // Reset width to match scaled image
    //    }
    //
    //    // Check if current height is larger than max
    //    if (height > maxHeight)
    //    {
    //        ratio = maxHeight / height; // get ratio for scaling image
    //
    //        nheight = maxHeight;
    //        nwidth = width * ratio;
    //
    //        width = width * ratio; // Reset width to match scaled image
    //        height = height * ratio; // Reset height to match scaled image
    //    }
    //
    //
    //    std::vector<float> proportions;
    //
    //    proportions.push_back(nwidth);
    //    proportions.push_back(nheight);







    //    double percentage;
    //
    //    if (width > height)
    //    {
    //        percentage = (double) target / width;
    //    }
    //    else
    //    {
    //        percentage = (double) target / height;
    //    }
    //
    //    // gets the new value and applies the percentage, then rounds the value
    //    double nwidth = (double) width * percentage;
    //    double nheight = (double) height * percentage;



    return proportions;

}