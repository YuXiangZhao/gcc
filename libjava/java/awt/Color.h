
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Color__
#define __java_awt_Color__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
        class ColorPaintContext;
        class PaintContext;
        class Rectangle;
        class RenderingHints;
      namespace color
      {
          class ColorSpace;
      }
      namespace geom
      {
          class AffineTransform;
          class Rectangle2D;
      }
      namespace image
      {
          class ColorModel;
      }
    }
  }
}

class java::awt::Color : public ::java::lang::Object
{

public:
  Color(jint, jint, jint);
  Color(jint, jint, jint, jint);
  Color(jint);
  Color(jint, jboolean);
  Color(jfloat, jfloat, jfloat);
  Color(jfloat, jfloat, jfloat, jfloat);
  Color(::java::awt::color::ColorSpace *, JArray< jfloat > *, jfloat);
  virtual jint getRed();
  virtual jint getGreen();
  virtual jint getBlue();
  virtual jint getAlpha();
  virtual jint getRGB();
  virtual ::java::awt::Color * brighter();
  virtual ::java::awt::Color * darker();
  virtual jint hashCode();
  virtual jboolean equals(::java::lang::Object *);
  virtual ::java::lang::String * toString();
  static ::java::awt::Color * decode(::java::lang::String *);
  static ::java::awt::Color * getColor(::java::lang::String *);
  static ::java::awt::Color * getColor(::java::lang::String *, ::java::awt::Color *);
  static ::java::awt::Color * getColor(::java::lang::String *, jint);
  static jint HSBtoRGB(jfloat, jfloat, jfloat);
  static JArray< jfloat > * RGBtoHSB(jint, jint, jint, JArray< jfloat > *);
  static ::java::awt::Color * getHSBColor(jfloat, jfloat, jfloat);
  virtual JArray< jfloat > * getRGBComponents(JArray< jfloat > *);
  virtual JArray< jfloat > * getRGBColorComponents(JArray< jfloat > *);
  virtual JArray< jfloat > * getComponents(JArray< jfloat > *);
  virtual JArray< jfloat > * getColorComponents(JArray< jfloat > *);
  virtual JArray< jfloat > * getComponents(::java::awt::color::ColorSpace *, JArray< jfloat > *);
  virtual JArray< jfloat > * getColorComponents(::java::awt::color::ColorSpace *, JArray< jfloat > *);
  virtual ::java::awt::color::ColorSpace * getColorSpace();
  virtual ::java::awt::PaintContext * createContext(::java::awt::image::ColorModel *, ::java::awt::Rectangle *, ::java::awt::geom::Rectangle2D *, ::java::awt::geom::AffineTransform *, ::java::awt::RenderingHints *);
  virtual jint getTransparency();
private:
  static jint convert(jfloat, jfloat, jfloat, jfloat);
  static const jlong serialVersionUID = 118526816881161077LL;
public:
  static ::java::awt::Color * white;
  static ::java::awt::Color * WHITE;
  static ::java::awt::Color * lightGray;
  static ::java::awt::Color * LIGHT_GRAY;
  static ::java::awt::Color * gray;
  static ::java::awt::Color * GRAY;
  static ::java::awt::Color * darkGray;
  static ::java::awt::Color * DARK_GRAY;
  static ::java::awt::Color * black;
  static ::java::awt::Color * BLACK;
  static ::java::awt::Color * red;
  static ::java::awt::Color * RED;
  static ::java::awt::Color * pink;
  static ::java::awt::Color * PINK;
  static ::java::awt::Color * orange;
  static ::java::awt::Color * ORANGE;
  static ::java::awt::Color * yellow;
  static ::java::awt::Color * YELLOW;
  static ::java::awt::Color * green;
  static ::java::awt::Color * GREEN;
  static ::java::awt::Color * magenta;
  static ::java::awt::Color * MAGENTA;
  static ::java::awt::Color * cyan;
  static ::java::awt::Color * CYAN;
  static ::java::awt::Color * blue;
  static ::java::awt::Color * BLUE;
private:
  static const jint RED_MASK = 16711680;
  static const jint GREEN_MASK = 65280;
  static const jint BLUE_MASK = 255;
public: // actually package-private
  static const jint ALPHA_MASK = -16777216;
private:
  static jfloat BRIGHT_SCALE;
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) value;
private:
  JArray< jfloat > * frgbvalue;
  JArray< jfloat > * fvalue;
  jfloat falpha;
  ::java::awt::color::ColorSpace * cs;
public: // actually package-private
  ::java::awt::ColorPaintContext * context;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_Color__
