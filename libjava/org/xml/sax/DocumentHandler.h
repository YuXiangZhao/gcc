
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_xml_sax_DocumentHandler__
#define __org_xml_sax_DocumentHandler__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class AttributeList;
          class DocumentHandler;
          class Locator;
      }
    }
  }
}

class org::xml::sax::DocumentHandler : public ::java::lang::Object
{

public:
  virtual void setDocumentLocator(::org::xml::sax::Locator *) = 0;
  virtual void startDocument() = 0;
  virtual void endDocument() = 0;
  virtual void startElement(::java::lang::String *, ::org::xml::sax::AttributeList *) = 0;
  virtual void endElement(::java::lang::String *) = 0;
  virtual void characters(JArray< jchar > *, jint, jint) = 0;
  virtual void ignorableWhitespace(JArray< jchar > *, jint, jint) = 0;
  virtual void processingInstruction(::java::lang::String *, ::java::lang::String *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_xml_sax_DocumentHandler__
