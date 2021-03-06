
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_event_AdjustmentEvent__
#define __java_awt_event_AdjustmentEvent__

#pragma interface

#include <java/awt/AWTEvent.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Adjustable;
      namespace event
      {
          class AdjustmentEvent;
      }
    }
  }
}

class java::awt::event::AdjustmentEvent : public ::java::awt::AWTEvent
{

public:
  AdjustmentEvent(::java::awt::Adjustable *, jint, jint, jint);
  AdjustmentEvent(::java::awt::Adjustable *, jint, jint, jint, jboolean);
  virtual ::java::awt::Adjustable * getAdjustable();
  virtual jint getValue();
  virtual jint getAdjustmentType();
  virtual jboolean getValueIsAdjusting();
  virtual ::java::lang::String * paramString();
private:
  static const jlong serialVersionUID = 5700290645205279921LL;
public:
  static const jint ADJUSTMENT_FIRST = 601;
  static const jint ADJUSTMENT_LAST = 601;
  static const jint ADJUSTMENT_VALUE_CHANGED = 601;
  static const jint UNIT_INCREMENT = 1;
  static const jint UNIT_DECREMENT = 2;
  static const jint BLOCK_DECREMENT = 3;
  static const jint BLOCK_INCREMENT = 4;
  static const jint TRACK = 5;
private:
  ::java::awt::Adjustable * __attribute__((aligned(__alignof__( ::java::awt::AWTEvent)))) adjustable;
  jint adjustmentType;
  jint value;
  jboolean isAdjusting;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_event_AdjustmentEvent__
