
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_geom_Area$Intersection__
#define __java_awt_geom_Area$Intersection__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace geom
      {
          class Area;
          class Area$Intersection;
          class Area$Segment;
          class Point2D;
      }
    }
  }
}

class java::awt::geom::Area$Intersection : public ::java::lang::Object
{

public:
  Area$Intersection(::java::awt::geom::Area *, ::java::awt::geom::Point2D *, jdouble, jdouble);
public: // actually package-private
  ::java::awt::geom::Point2D * __attribute__((aligned(__alignof__( ::java::lang::Object)))) p;
  jdouble ta;
  jdouble tb;
  ::java::awt::geom::Area$Segment * seg;
  ::java::awt::geom::Area * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_geom_Area$Intersection__
