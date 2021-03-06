
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicTabbedPaneUI__
#define __javax_swing_plaf_basic_BasicTabbedPaneUI__

#pragma interface

#include <javax/swing/plaf/TabbedPaneUI.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
        class Component;
        class Dimension;
        class Font;
        class FontMetrics;
        class Graphics;
        class Insets;
        class LayoutManager;
        class Point;
        class Rectangle;
      namespace event
      {
          class FocusListener;
          class MouseListener;
      }
    }
    namespace beans
    {
        class PropertyChangeListener;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class ActionMap;
        class Icon;
        class JComponent;
        class JTabbedPane;
        class KeyStroke;
      namespace event
      {
          class ChangeListener;
      }
      namespace plaf
      {
          class ComponentUI;
        namespace basic
        {
            class BasicTabbedPaneUI;
            class BasicTabbedPaneUI$ScrollingButton;
            class BasicTabbedPaneUI$ScrollingPanel;
            class BasicTabbedPaneUI$ScrollingViewport;
        }
      }
      namespace text
      {
          class View;
      }
    }
  }
}

class javax::swing::plaf::basic::BasicTabbedPaneUI : public ::javax::swing::plaf::TabbedPaneUI
{

public:
  BasicTabbedPaneUI();
public: // actually package-private
  virtual ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollingButton * createIncreaseButton();
  virtual ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollingButton * createDecreaseButton();
  virtual ::java::awt::Point * findPointForIndex(jint);
  virtual void scrollTab(jint, jint);
  virtual void updateButtons();
  virtual void updateViewPosition();
public:
  static ::javax::swing::plaf::ComponentUI * createUI(::javax::swing::JComponent *);
  virtual void installUI(::javax::swing::JComponent *);
  virtual void uninstallUI(::javax::swing::JComponent *);
public: // actually protected
  virtual ::java::awt::LayoutManager * createLayoutManager();
  virtual void installComponents();
  virtual void uninstallComponents();
  virtual void installDefaults();
  virtual void uninstallDefaults();
  virtual void installListeners();
  virtual void uninstallListeners();
  virtual ::java::awt::event::MouseListener * createMouseListener();
  virtual ::java::awt::event::FocusListener * createFocusListener();
  virtual ::javax::swing::event::ChangeListener * createChangeListener();
  virtual ::java::beans::PropertyChangeListener * createPropertyChangeListener();
  virtual void installKeyboardActions();
  virtual void uninstallKeyboardActions();
public:
  virtual ::java::awt::Dimension * getMinimumSize(::javax::swing::JComponent *);
  virtual ::java::awt::Dimension * getMaximumSize(::javax::swing::JComponent *);
  virtual void paint(::java::awt::Graphics *, ::javax::swing::JComponent *);
public: // actually protected
  virtual void paintTabArea(::java::awt::Graphics *, jint, jint);
  virtual void paintTab(::java::awt::Graphics *, jint, JArray< ::java::awt::Rectangle * > *, jint, ::java::awt::Rectangle *, ::java::awt::Rectangle *);
  virtual void layoutLabel(jint, ::java::awt::FontMetrics *, jint, ::java::lang::String *, ::javax::swing::Icon *, ::java::awt::Rectangle *, ::java::awt::Rectangle *, ::java::awt::Rectangle *, jboolean);
  virtual void paintIcon(::java::awt::Graphics *, jint, jint, ::javax::swing::Icon *, ::java::awt::Rectangle *, jboolean);
  virtual void paintText(::java::awt::Graphics *, jint, ::java::awt::Font *, ::java::awt::FontMetrics *, jint, ::java::lang::String *, ::java::awt::Rectangle *, jboolean);
  virtual jint getTabLabelShiftX(jint, jint, jboolean);
  virtual jint getTabLabelShiftY(jint, jint, jboolean);
  virtual void paintFocusIndicator(::java::awt::Graphics *, jint, JArray< ::java::awt::Rectangle * > *, jint, ::java::awt::Rectangle *, ::java::awt::Rectangle *, jboolean);
  virtual void paintTabBorder(::java::awt::Graphics *, jint, jint, jint, jint, jint, jint, jboolean);
  virtual void paintTabBackground(::java::awt::Graphics *, jint, jint, jint, jint, jint, jint, jboolean);
  virtual void paintContentBorder(::java::awt::Graphics *, jint, jint);
  virtual void paintContentBorderTopEdge(::java::awt::Graphics *, jint, jint, jint, jint, jint, jint);
  virtual void paintContentBorderLeftEdge(::java::awt::Graphics *, jint, jint, jint, jint, jint, jint);
  virtual void paintContentBorderBottomEdge(::java::awt::Graphics *, jint, jint, jint, jint, jint, jint);
  virtual void paintContentBorderRightEdge(::java::awt::Graphics *, jint, jint, jint, jint, jint, jint);
public:
  virtual ::java::awt::Rectangle * getTabBounds(::javax::swing::JTabbedPane *, jint);
  virtual jint getTabRunCount(::javax::swing::JTabbedPane *);
  virtual jint tabForCoordinate(::javax::swing::JTabbedPane *, jint, jint);
public: // actually protected
  virtual ::java::awt::Rectangle * getTabBounds(jint, ::java::awt::Rectangle *);
  virtual ::java::awt::Component * getVisibleComponent();
  virtual void setVisibleComponent(::java::awt::Component *);
  virtual void assureRectsCreated(jint);
  virtual void expandTabRunsArray();
  virtual jint getRunForTab(jint, jint);
  virtual jint lastTabInRun(jint, jint);
  virtual jint getTabRunOverlay(jint);
  virtual jint getTabRunIndent(jint, jint);
  virtual jboolean shouldPadTabRun(jint, jint);
  virtual jboolean shouldRotateTabRuns(jint);
  virtual ::javax::swing::Icon * getIconForTab(jint);
  virtual ::javax::swing::text::View * getTextViewForTab(jint);
  virtual jint calculateTabHeight(jint, jint, jint);
  virtual jint calculateMaxTabHeight(jint);
  virtual jint calculateTabWidth(jint, jint, ::java::awt::FontMetrics *);
  virtual jint calculateMaxTabWidth(jint);
  virtual jint calculateTabAreaHeight(jint, jint, jint);
  virtual jint calculateTabAreaWidth(jint, jint, jint);
  virtual ::java::awt::Insets * getTabInsets(jint, jint);
  virtual ::java::awt::Insets * getSelectedTabPadInsets(jint);
  virtual ::java::awt::Insets * getTabAreaInsets(jint);
  virtual ::java::awt::Insets * getContentBorderInsets(jint);
  virtual ::java::awt::FontMetrics * getFontMetrics();
  virtual void navigateSelectedTab(jint);
  virtual void selectNextTabInRun(jint);
  virtual void selectPreviousTabInRun(jint);
  virtual void selectNextTab(jint);
  virtual void selectPreviousTab(jint);
  virtual void selectAdjacentRunTab(jint, jint, jint);
  virtual jint getTabRunOffset(jint, jint, jint, jboolean);
  virtual jint getPreviousTabIndex(jint);
  virtual jint getNextTabIndex(jint);
  virtual jint getNextTabIndexInRun(jint, jint);
  virtual jint getPreviousTabIndexInRun(jint, jint);
  virtual jint getPreviousTabRun(jint);
  virtual jint getNextTabRun(jint);
  static void rotateInsets(::java::awt::Insets *, ::java::awt::Insets *, jint);
public: // actually package-private
  virtual ::javax::swing::ActionMap * getActionMap();
  virtual ::javax::swing::ActionMap * createActionMap();
public: // actually protected
  virtual void setRolloverTab(jint);
  virtual jint getRolloverTab();
public: // actually package-private
  ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollingButton * __attribute__((aligned(__alignof__( ::javax::swing::plaf::TabbedPaneUI)))) incrButton;
  ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollingButton * decrButton;
  ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollingViewport * viewport;
  ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollingPanel * panel;
  jint currentScrollLocation;
  jint currentScrollOffset;
public: // actually protected
  ::java::awt::Rectangle * calcRect;
  JArray< ::java::awt::Rectangle * > * rects;
  ::java::awt::Insets * contentBorderInsets;
  ::java::awt::Insets * selectedTabPadInsets;
  ::java::awt::Insets * tabAreaInsets;
  ::java::awt::Insets * tabInsets;
  ::java::awt::Color * darkShadow;
  ::java::awt::Color * focus;
  ::java::awt::Color * highlight;
  ::java::awt::Color * lightHighlight;
  ::java::awt::Color * shadow;
  jint maxTabHeight;
  jint maxTabWidth;
  jint runCount;
  jint selectedRun;
  jint tabRunOverlay;
  jint textIconGap;
  JArray< jint > * tabRuns;
public: // actually package-private
  jboolean tabRunsDirty;
public: // actually protected
  ::javax::swing::KeyStroke * downKey;
  ::javax::swing::KeyStroke * leftKey;
  ::javax::swing::KeyStroke * rightKey;
  ::javax::swing::KeyStroke * upKey;
  ::java::awt::event::FocusListener * focusListener;
  ::java::awt::event::MouseListener * mouseListener;
  ::java::beans::PropertyChangeListener * propertyChangeListener;
  ::javax::swing::event::ChangeListener * tabChangeListener;
  ::javax::swing::JTabbedPane * tabPane;
public: // actually package-private
  ::java::awt::LayoutManager * layoutManager;
  ::java::awt::Rectangle * tabAreaRect;
  ::java::awt::Rectangle * contentRect;
private:
  jint rolloverTab;
  jboolean tabsOpaque;
  ::java::awt::Component * visibleComponent;
  ::java::awt::Color * selectedColor;
  ::java::awt::Rectangle * tempTextRect;
  ::java::awt::Rectangle * tempIconRect;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicTabbedPaneUI__
