// Generated by Apple Swift version 5.3.1 (swiftlang-1200.0.41 clang-1200.0.32.8)
#ifndef AMD_POWER_GADGET_SWIFT_H
#define AMD_POWER_GADGET_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AppKit;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import QuartzCore;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AMD_Power_Gadget",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSMenuItem;

SWIFT_CLASS("_TtC16AMD_Power_Gadget11AppDelegate")
@interface AppDelegate : NSObject <NSApplicationDelegate>
@property (nonatomic, weak) IBOutlet NSMenuItem * _Null_unspecified appearanceToggle;
- (IBAction)openPage:(id _Nonnull)sender;
- (IBAction)gadget:(id _Nonnull)sender;
- (IBAction)tool:(id _Nonnull)sender;
- (IBAction)changeAppearance:(id _Nonnull)sender;
- (IBAction)sysmonitor:(id _Nonnull)sender;
- (void)applicationDidFinishLaunching:(NSNotification * _Nonnull)aNotification;
- (void)applicationWillTerminate:(NSNotification * _Nonnull)aNotification;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol CAAction;
@class NSCoder;

SWIFT_CLASS("_TtC16AMD_Power_Gadget11CPUBarLayer")
@interface CPUBarLayer : CALayer
@property (nonatomic) CGColorRef _Nonnull frequencyColor;
@property (nonatomic) CGColorRef _Nonnull loadColor;
@property (nonatomic) CGFloat frequencyFill;
@property (nonatomic) CGFloat loadFill;
+ (BOOL)needsDisplayForKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)drawInContext:(CGContextRef _Nonnull)ctx;
- (id <CAAction> _Nullable)actionForKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSColor;

IB_DESIGNABLE
SWIFT_CLASS("_TtC16AMD_Power_Gadget16CPUPowerStepView")
@interface CPUPowerStepView : NSView
@property (nonatomic) IBInspectable CGFloat viewTopPercentage;
@property (nonatomic) IBInspectable CGFloat viewBottomPercentage;
@property (nonatomic) IBInspectable CGFloat barMarginLeft;
@property (nonatomic) IBInspectable CGFloat barMarginRight;
@property (nonatomic) IBInspectable CGFloat barSpacing;
@property (nonatomic) IBInspectable CGFloat maxBarWidth;
@property (nonatomic) IBInspectable CGFloat barCorner;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull barTopColor;
@property (nonatomic) IBInspectable CGFloat barTopWidth;
@property (nonatomic) IBInspectable CGFloat lineCurviness;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull backgroundColor1;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull backgroundColorSide;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull textColor2;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull barColor1;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull barColor2;
@property (nonatomic) IBInspectable CGFloat gridWidth;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull gridColor;
@property (nonatomic) IBInspectable CGFloat borderWidth;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull borderColor;
@property (nonatomic, readonly) BOOL mouseDownCanMoveWindow;
- (void)drawRect:(NSRect)dirtyRect;
@property (nonatomic, readonly, getter=isOpaque) BOOL opaque;
- (void)prepareForInterfaceBuilder;
- (nonnull instancetype)initWithFrame:(NSRect)frameRect OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSWindow;
@class NSEvent;

IB_DESIGNABLE
SWIFT_CLASS("_TtC16AMD_Power_Gadget17CPUSpeedShiftView")
@interface CPUSpeedShiftView : NSControl
@property (nonatomic) IBInspectable CGFloat borderWidth;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull borderColor;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull backgroundColor;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull textColor;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull stepColor1;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull stepColor2;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull stepColor3;
- (void)viewWillMoveToWindow:(NSWindow * _Nullable)newWindow;
- (void)mouseMoved:(NSEvent * _Nonnull)event;
- (void)mouseExited:(NSEvent * _Nonnull)event;
@property (nonatomic, readonly) BOOL acceptsFirstResponder;
- (BOOL)becomeFirstResponder SWIFT_WARN_UNUSED_RESULT;
- (void)mouseDown:(NSEvent * _Nonnull)event;
- (void)drawRect:(NSRect)dirtyRect;
- (nonnull instancetype)initWithFrame:(NSRect)frameRect OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


IB_DESIGNABLE
SWIFT_CLASS("_TtC16AMD_Power_Gadget9GraphView")
@interface GraphView : NSView
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull backgroundColor1;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull backgroundColor2;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull foregroundColor1_1;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull foregroundColor1_2;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull foregroundColor2_1;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull foregroundColor2_2;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull foregroundColorX_1;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull foregroundColorX_2;
@property (nonatomic) IBInspectable CGFloat gridWidth;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull gridColor;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull lineColor1;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull lineColor2;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull lineColorX;
@property (nonatomic) IBInspectable CGFloat lineWidth;
@property (nonatomic) IBInspectable CGFloat lineCurviness;
@property (nonatomic) IBInspectable CGFloat dotRadius;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull dotStrokeColor;
@property (nonatomic, strong) IBInspectable NSColor * _Nonnull dotFillColor;
@property (nonatomic) IBInspectable CGFloat viewTopPercentage;
@property (nonatomic) IBInspectable CGFloat viewBottomPercentage;
- (void)drawRect:(NSRect)dirtyRect;
- (void)prepareForInterfaceBuilder;
- (nonnull instancetype)initWithFrame:(NSRect)frameRect OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16AMD_Power_Gadget22GraphViewGridLineLayer")
@interface GraphViewGridLineLayer : CALayer
@property (nonatomic, strong) NSColor * _Nonnull gridColor;
@property (nonatomic) CGFloat gridWidth;
@property (nonatomic) CGFloat viewBottom;
@property (nonatomic) CGFloat viewHeight;
@property (nonatomic) CGFloat dataMin;
@property (nonatomic) CGFloat dataDiff;
@property (nonatomic) CGFloat dataY;
+ (BOOL)needsDisplayForKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)drawInContext:(CGContextRef _Nonnull)ctx;
- (id <CAAction> _Nullable)actionForKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16AMD_Power_Gadget18GraphViewLineLayer")
@interface GraphViewLineLayer : CALayer
@property (nonatomic) CGColorRef _Nonnull lineColor;
@property (nonatomic) CGColorRef _Nonnull dotFillColor;
@property (nonatomic) CGColorRef _Nonnull pointColor;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) CGFloat dotRadius;
@property (nonatomic) CGFloat viewBottom;
@property (nonatomic) CGFloat viewHeight;
@property (nonatomic) CGFloat dataMin;
@property (nonatomic) CGFloat dataDiff;
@property (nonatomic) CGFloat dataXScale;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nonnull pointsX;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nonnull pointsY;
@property (nonatomic) CGFloat xOffset;
@property (nonatomic) CGFloat scrollIndexBar;
@property (nonatomic, copy) NSArray<CGColorRef> * _Nonnull foregroundColors;
+ (BOOL)needsDisplayForKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)drawInContext:(CGContextRef _Nonnull)ctx;
- (id <CAAction> _Nullable)actionForKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



@class NSTableView;
@class NSTableColumn;
@class NSBundle;

SWIFT_CLASS("_TtC16AMD_Power_Gadget26PStateEditorViewController")
@interface PStateEditorViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>
@property (nonatomic, weak) IBOutlet NSTableView * _Null_unspecified tableView;
- (void)viewDidLoad;
- (NSInteger)numberOfRowsInTableView:(NSTableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (IBAction)apply:(id _Nonnull)sender;
- (CGFloat)tableView:(NSTableView * _Nonnull)tableView heightOfRow:(NSInteger)row SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)tableView:(NSTableView * _Nonnull)tableView objectValueForTableColumn:(NSTableColumn * _Nullable)tableColumn row:(NSInteger)row SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(NSTableView * _Nonnull)tableView setObjectValue:(id _Nullable)object forTableColumn:(NSTableColumn * _Nullable)tableColumn row:(NSInteger)row;
- (IBAction)revert:(id _Nonnull)sender;
- (IBAction)close:(id _Nonnull)sender;
- (IBAction)import:(id _Nonnull)sender;
- (IBAction)export:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSNibName _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSTextField;
@class NSTabView;
@class NSSegmentedControl;
@class NSVisualEffectView;
@class NSBox;
@class NSButton;

SWIFT_CLASS("_TtC16AMD_Power_Gadget23PowerToolViewController")
@interface PowerToolViewController : NSViewController <NSWindowDelegate>
@property (nonatomic, weak) IBOutlet CPUPowerStepView * _Null_unspecified cpuFreqGraph;
@property (nonatomic, weak) IBOutlet NSTextField * _Null_unspecified basicLabel;
@property (nonatomic, weak) IBOutlet CPUSpeedShiftView * _Null_unspecified overviewSpeedShift;
@property (nonatomic, weak) IBOutlet NSTabView * _Null_unspecified configTabView;
@property (nonatomic, weak) IBOutlet NSSegmentedControl * _Null_unspecified configControl;
- (IBAction)onConfigControl:(id _Nonnull)sender;
@property (nonatomic, weak) IBOutlet NSSegmentedControl * _Null_unspecified pStateControl;
- (IBAction)onPStateControl:(id _Nonnull)sender;
@property (nonatomic, strong) IBOutlet NSVisualEffectView * _Null_unspecified vsView;
@property (nonatomic, weak) IBOutlet NSBox * _Null_unspecified boxView;
@property (nonatomic, weak) IBOutlet NSButton * _Null_unspecified boardHelpButton;
- (IBAction)boardHelp:(id _Nonnull)sender;
@property (nonatomic, weak) IBOutlet NSButton * _Null_unspecified cpbSupportedBox;
@property (nonatomic, weak) IBOutlet NSButton * _Null_unspecified cpbEnabledBox;
- (IBAction)cpbEnabledBox:(id _Nonnull)sender;
@property (nonatomic, weak) IBOutlet NSButton * _Null_unspecified asaBox;
- (IBAction)onASA:(id _Nonnull)sender;
@property (nonatomic, weak) IBOutlet NSButton * _Null_unspecified lpmBox;
- (IBAction)onLPM:(id _Nonnull)sender;
@property (nonatomic, weak) IBOutlet NSTextField * _Null_unspecified topLabel1;
@property (nonatomic, weak) IBOutlet NSTextField * _Null_unspecified topLabel2;
- (IBAction)fanControlButton:(id _Nonnull)sender;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)windowWillClose:(NSNotification * _Nonnull)notification;
- (IBAction)onOverviewSpeedStep:(id _Nonnull)sender;
- (IBAction)openGitHub:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSNibName _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16AMD_Power_Gadget27SystemMonitorViewController")
@interface SystemMonitorViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>
@property (nonatomic, weak) IBOutlet NSTableView * _Null_unspecified tableView;
@property (nonatomic, weak) IBOutlet NSTextField * _Null_unspecified chipIntelLabel;
- (void)viewDidLoad;
- (CGFloat)tableView:(NSTableView * _Nonnull)tableView heightOfRow:(NSInteger)row SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfRowsInTableView:(NSTableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (IBAction)autobutton:(id _Nonnull)sender;
- (IBAction)takeOffButton:(id _Nonnull)sender;
- (id _Nullable)tableView:(NSTableView * _Nonnull)tableView objectValueForTableColumn:(NSTableColumn * _Nullable)tableColumn row:(NSInteger)row SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(NSTableView * _Nonnull)tableView setObjectValue:(id _Nullable)object forTableColumn:(NSTableColumn * _Nullable)tableColumn row:(NSInteger)row;
- (nonnull instancetype)initWithNibName:(NSNibName _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSScrollView;

SWIFT_CLASS("_TtC16AMD_Power_Gadget14ViewController")
@interface ViewController : NSViewController <NSWindowDelegate>
@property (nonatomic, weak) IBOutlet NSScrollView * _Null_unspecified scrollView;
@property (nonatomic, weak) IBOutlet NSView * _Null_unspecified contentView;
@property (nonatomic, weak) IBOutlet NSTextField * _Null_unspecified subtitleLabel;
@property (nonatomic, weak) IBOutlet GraphView * _Null_unspecified frequencyGraphView;
@property (nonatomic, weak) IBOutlet GraphView * _Null_unspecified temperatureGraphView;
@property (nonatomic, weak) IBOutlet GraphView * _Null_unspecified powerGraphView;
@property (nonatomic, weak) IBOutlet NSTextField * _Null_unspecified frequencyLabel;
@property (nonatomic, weak) IBOutlet NSTextField * _Null_unspecified temperatureLabel;
@property (nonatomic, weak) IBOutlet NSTextField * _Null_unspecified powerLabel;
@property (nonatomic, weak) IBOutlet NSVisualEffectView * _Null_unspecified vsView;
- (void)viewDidLoad;
- (void)viewWillAppear;
@property (nonatomic) id _Nullable representedObject;
- (IBAction)launchPowerTool:(id _Nonnull)sender;
- (void)windowWillClose:(NSNotification * _Nonnull)notification;
- (IBAction)buttonPressed:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSNibName _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif