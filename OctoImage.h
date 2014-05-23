#ifndef IMAGE_H
#define	IMAGE_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

class OctoImage
{
public:
    OctoImage();
    std::vector<float> CalcProportions(double width, double height, double target);
private:

};

#endif	/* IMAGE_H */