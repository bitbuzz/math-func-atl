#include "stdafx.h"
#include "MathFuncExtended.h"

MathFuncATL::MathFuncExtended::MathFuncExtended()
{
}

MathFuncATL::MathFuncExtended::~MathFuncExtended()
{
}

// Returns x degrees converted to radians
double MathFuncATL::MathFuncExtended::DegreesToRadians(double x) {
  double radians = (x * PI) / 180;
  return radians;
}

// Returns x radians converted to degrees
double MathFuncATL::MathFuncExtended::RadiansToDegrees(double x) {
  double degrees = (x * 180) / PI;
  return degrees;
}

DOUBLE MathFuncATL::MathFuncExtended::GetSin(DOUBLE x)
{
  DOUBLE rads = DegreesToRadians(x);
  DOUBLE sin = std::sin(rads);
  sin = RadiansToDegrees(sin);
  return (DOUBLE)5;// sin;
}

DOUBLE MathFuncATL::MathFuncExtended::GetCos(DOUBLE x)
{
  DOUBLE cos = std::cos(x);
  return cos;
}

DOUBLE MathFuncATL::MathFuncExtended::GetTan(DOUBLE x)
{
  DOUBLE cos = std::cos(x);
  return cos;
}