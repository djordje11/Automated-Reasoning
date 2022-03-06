#ifndef __FORMULA__
#define __FORMULA__
#include "types.h"

class Formula
{
public:
  Formula(){} 
  virtual bool eval(const Valuation& v) const = 0 ;
  virtual void print() const = 0;
};


#endif