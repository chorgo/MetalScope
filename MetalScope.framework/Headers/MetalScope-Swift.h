// Generated by Apple Swift version 4.2.1 effective-4.1.50 (swiftlang-1000.11.42 clang-1000.11.45.1)
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
#include <objc/NSObject.h>
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
#if __has_feature(modules)
@import CoreGraphics;
@import CoreMotion;
@import Foundation;
@import QuartzCore;
@import SceneKit;
@import UIKit;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MetalScope",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


@interface CMMotionManager (SWIFT_EXTENSION(MetalScope))
- (BOOL)shouldWaitDeviceOrientationAtTime:(NSTimeInterval)time SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift method 'CMMotionManager.shouldWaitDeviceOrientation(atTime:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@end

@class NSCoder;

SWIFT_CLASS("_TtC10MetalScope15MediaSphereNode")
@interface MediaSphereNode : SCNNode
@property (nonatomic) id _Nullable mediaContents SWIFT_DEPRECATED_OBJC("Swift property 'MediaSphereNode.mediaContents' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)initWithRadius:(CGFloat)radius segmentCount:(NSInteger)segmentCount OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC10MetalScope23MonoSphericalMediaScene")
@interface MonoSphericalMediaScene : SCNScene
@property (nonatomic, strong) MediaSphereNode * _Nonnull mediaSphereNode SWIFT_DEPRECATED_OBJC("Swift property 'MonoSphericalMediaScene.mediaSphereNode' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;

SWIFT_CLASS("_TtC10MetalScope23MonoSphericalImageScene")
@interface MonoSphericalImageScene : MonoSphericalMediaScene
@property (nonatomic, strong) UIImage * _Nullable image SWIFT_DEPRECATED_OBJC("Swift property 'MonoSphericalImageScene.image' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@class UIColor;

SWIFT_CLASS("_TtC10MetalScope25OrientationIndicatorLayer")
@interface OrientationIndicatorLayer : CALayer
@property (nonatomic) float fov SWIFT_DEPRECATED_OBJC("Swift property 'OrientationIndicatorLayer.fov' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) float rotation SWIFT_DEPRECATED_OBJC("Swift property 'OrientationIndicatorLayer.rotation' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIColor * _Nonnull color SWIFT_DEPRECATED_OBJC("Swift property 'OrientationIndicatorLayer.color' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSublayers;
- (void)updateOrientation SWIFT_DEPRECATED_OBJC("Swift method 'OrientationIndicatorLayer.updateOrientation()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10MetalScope24OrientationIndicatorView")
@interface OrientationIndicatorView : UIView
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) Class _Nonnull layerClass;)
+ (Class _Nonnull)layerClass SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) OrientationIndicatorLayer * _Nonnull orientationIndicatorLayer SWIFT_DEPRECATED_OBJC("Swift property 'OrientationIndicatorView.orientationIndicatorLayer' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)tintColorDidChange;
- (void)updateOrientation SWIFT_DEPRECATED_OBJC("Swift method 'OrientationIndicatorView.updateOrientation()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)updateOrientationWithAnimated:(BOOL)animated SWIFT_DEPRECATED_OBJC("Swift method 'OrientationIndicatorView.updateOrientation(animated:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10MetalScope15OrientationNode")
@interface OrientationNode : SCNNode
@property (nonatomic, readonly, strong) SCNNode * _Nonnull pointOfView SWIFT_DEPRECATED_OBJC("Swift property 'OrientationNode.pointOfView' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) CGFloat fieldOfView SWIFT_DEPRECATED_OBJC("Swift property 'OrientationNode.fieldOfView' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)updateDeviceOrientationAtTime:(NSTimeInterval)time SWIFT_DEPRECATED_OBJC("Swift method 'OrientationNode.updateDeviceOrientation(atTime:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)updateInterfaceOrientationAtTime:(NSTimeInterval)time SWIFT_DEPRECATED_OBJC("Swift method 'OrientationNode.updateInterfaceOrientation(atTime:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)setOrientationWithOrientation:(UIDeviceOrientation)orientation SWIFT_DEPRECATED_OBJC("Swift method 'OrientationNode.setOrientation(orientation:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)resetRotation SWIFT_DEPRECATED_OBJC("Swift method 'OrientationNode.resetRotation()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)resetRotationWithAnimated:(BOOL)animated completionHanlder:(void (^ _Nullable)(void))completionHanlder SWIFT_DEPRECATED_OBJC("Swift method 'OrientationNode.resetRotation(animated:completionHanlder:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
/// Requests reset of rotation in the next rendering frame.
/// \param animated Pass true to animate the transition.
///
- (void)setNeedsResetRotationWithAnimated:(BOOL)animated SWIFT_DEPRECATED_OBJC("Swift method 'OrientationNode.setNeedsResetRotation(animated:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@end


@interface OrientationNode (SWIFT_EXTENSION(MetalScope))
- (void)resetCenter SWIFT_DEPRECATED_OBJC("Swift method 'OrientationNode.resetCenter()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)resetCenterWithAnimated:(BOOL)animated completionHanlder:(void (^ _Nullable)(void))completionHanlder SWIFT_DEPRECATED_OBJC("Swift method 'OrientationNode.resetCenter(animated:completionHanlder:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@end

@protocol SCNSceneRendererDelegate;
@class UIWindow;

SWIFT_CLASS("_TtC10MetalScope12PanoramaView")
@interface PanoramaView : UIView
@property (nonatomic, strong) SCNScene * _Nullable scene SWIFT_DEPRECATED_OBJC("Swift property 'PanoramaView.scene' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, weak) id <SCNSceneRendererDelegate> _Nullable sceneRendererDelegate SWIFT_DEPRECATED_OBJC("Swift property 'PanoramaView.sceneRendererDelegate' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) OrientationNode * _Nonnull orientationNode SWIFT_DEPRECATED_OBJC("Swift property 'PanoramaView.orientationNode' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)willMoveToWindow:(UIWindow * _Nullable)newWindow;
@end




@interface PanoramaView (SWIFT_EXTENSION(MetalScope))
- (void)resetCenter SWIFT_DEPRECATED_MSG("Use `setNeedsResetRotation` instead") SWIFT_DEPRECATED_OBJC("Swift method 'PanoramaView.resetCenter()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@end

@protocol SCNSceneRenderer;

@interface PanoramaView (SWIFT_EXTENSION(MetalScope)) <SCNSceneRendererDelegate>
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer updateAtTime:(NSTimeInterval)time;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didApplyAnimationsAtTime:(NSTimeInterval)time;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didSimulatePhysicsAtTime:(NSTimeInterval)time;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer willRenderScene:(SCNScene * _Nonnull)scene atTime:(NSTimeInterval)time;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didRenderScene:(SCNScene * _Nonnull)scene atTime:(NSTimeInterval)time;
@end


@interface PanoramaView (SWIFT_EXTENSION(MetalScope))
@property (nonatomic, readonly, strong) SCNNode * _Nullable pointOfView SWIFT_DEPRECATED_OBJC("Swift property 'PanoramaView.pointOfView' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, readonly) CGSize viewportSize SWIFT_DEPRECATED_OBJC("Swift property 'PanoramaView.viewportSize' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@end


@interface PanoramaView (SWIFT_EXTENSION(MetalScope))
- (void)setVerticalPanningEnabledWithIsEnabled:(BOOL)isEnabled;
- (void)setHorizontalPanningEnabledWithIsEnabled:(BOOL)isEnabled;
- (void)setDeviceOrientationTrackingEnabledWithIsEnabled:(BOOL)isEnabled;
@property (nonatomic, readonly) BOOL isVerticalPanningEnabled;
@property (nonatomic, readonly) BOOL isHorizontalPanningEnabled;
@property (nonatomic, readonly) BOOL isDeviceTrackingEnabled;
- (void)setHorizontalRotationAnglesWithMinAngle:(float)minAngle maxAngle:(float)maxAngle;
- (void)setFOVWithFov:(CGFloat)fov;
- (void)setOrientationWithOrientation:(UIDeviceOrientation)orientation;
@end

@class UIPanGestureRecognizer;
@protocol UIViewControllerTransitionCoordinator;

@interface PanoramaView (SWIFT_EXTENSION(MetalScope))
@property (nonatomic, readonly, strong) id <SCNSceneRenderer> _Nonnull sceneRenderer SWIFT_DEPRECATED_OBJC("Swift property 'PanoramaView.sceneRenderer' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) BOOL isPlaying SWIFT_DEPRECATED_OBJC("Swift property 'PanoramaView.isPlaying' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) SCNAntialiasingMode antialiasingMode SWIFT_DEPRECATED_OBJC("Swift property 'PanoramaView.antialiasingMode' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (UIImage * _Nonnull)snapshot SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift method 'PanoramaView.snapshot()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, readonly, strong) UIPanGestureRecognizer * _Nonnull panGestureRecognizer SWIFT_DEPRECATED_OBJC("Swift property 'PanoramaView.panGestureRecognizer' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)updateInterfaceOrientation SWIFT_DEPRECATED_OBJC("Swift method 'PanoramaView.updateInterfaceOrientation()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)updateInterfaceOrientationWith:(id <UIViewControllerTransitionCoordinator> _Nonnull)transitionCoordinator SWIFT_DEPRECATED_OBJC("Swift method 'PanoramaView.updateInterfaceOrientation(with:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)setNeedsResetRotationWithAnimated:(BOOL)animated SWIFT_DEPRECATED_OBJC("Swift method 'PanoramaView.setNeedsResetRotation(animated:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)setNeedsResetRotation:(id _Nullable)sender SWIFT_DEPRECATED_OBJC("Swift method 'PanoramaView.setNeedsResetRotation(_:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@end


SWIFT_CLASS("_TtC10MetalScope16StereoCameraNode")
@interface StereoCameraNode : SCNNode
@property (nonatomic) float nearZ SWIFT_DEPRECATED_OBJC("Swift property 'StereoCameraNode.nearZ' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) float farZ SWIFT_DEPRECATED_OBJC("Swift property 'StereoCameraNode.farZ' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC10MetalScope25StereoSphericalMediaScene")
@interface StereoSphericalMediaScene : SCNScene
@property (nonatomic, strong) MediaSphereNode * _Nonnull leftMediaSphereNode SWIFT_DEPRECATED_OBJC("Swift property 'StereoSphericalMediaScene.leftMediaSphereNode' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) MediaSphereNode * _Nonnull rightMediaSphereNode SWIFT_DEPRECATED_OBJC("Swift property 'StereoSphericalMediaScene.rightMediaSphereNode' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10MetalScope25StereoSphericalImageScene")
@interface StereoSphericalImageScene : StereoSphericalMediaScene
@property (nonatomic, strong) UIImage * _Nullable image SWIFT_DEPRECATED_OBJC("Swift property 'StereoSphericalImageScene.image' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@class UITapGestureRecognizer;

SWIFT_CLASS("_TtC10MetalScope10StereoView")
@interface StereoView : UIView
@property (nonatomic, strong) SCNScene * _Nullable scene SWIFT_DEPRECATED_OBJC("Swift property 'StereoView.scene' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, weak) id <SCNSceneRendererDelegate> _Nullable sceneRendererDelegate SWIFT_DEPRECATED_OBJC("Swift property 'StereoView.sceneRendererDelegate' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) OrientationNode * _Nonnull orientationNode SWIFT_DEPRECATED_OBJC("Swift property 'StereoView.orientationNode' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) StereoCameraNode * _Nonnull stereoCameraNode SWIFT_DEPRECATED_OBJC("Swift property 'StereoView.stereoCameraNode' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UITapGestureRecognizer * _Nonnull tapGestureRecognizer SWIFT_DEPRECATED_OBJC("Swift property 'StereoView.tapGestureRecognizer' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end






@interface StereoView (SWIFT_EXTENSION(MetalScope))
- (void)resetCenter SWIFT_DEPRECATED_MSG("Use `setNeedsResetRotation` instead") SWIFT_DEPRECATED_OBJC("Swift method 'StereoView.resetCenter()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@end


@interface StereoView (SWIFT_EXTENSION(MetalScope))
@property (nonatomic) BOOL isPlaying SWIFT_DEPRECATED_OBJC("Swift property 'StereoView.isPlaying' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (UIImage * _Nonnull)snapshot SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift method 'StereoView.snapshot()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)setNeedsResetRotation SWIFT_DEPRECATED_OBJC("Swift method 'StereoView.setNeedsResetRotation()' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@end

@class UIButton;
@class NSBundle;

SWIFT_CLASS("_TtC10MetalScope20StereoViewController")
@interface StereoViewController : UIViewController
@property (nonatomic, strong) SCNScene * _Nullable scene SWIFT_DEPRECATED_OBJC("Swift property 'StereoViewController.scene' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, readonly, strong) StereoView * _Nonnull stereoView SWIFT_DEPRECATED_OBJC("Swift property 'StereoViewController.stereoView' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) BOOL showsCloseButton SWIFT_DEPRECATED_OBJC("Swift property 'StereoViewController.showsCloseButton' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, readonly, strong) UIButton * _Nonnull closeButton SWIFT_DEPRECATED_OBJC("Swift property 'StereoViewController.closeButton' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, copy) void (^ _Nullable closeButtonHandler)(UIButton * _Nonnull) SWIFT_DEPRECATED_OBJC("Swift property 'StereoViewController.closeButtonHandler' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) BOOL showsHelpButton SWIFT_DEPRECATED_OBJC("Swift property 'StereoViewController.showsHelpButton' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, readonly, strong) UIButton * _Nonnull helpButton SWIFT_DEPRECATED_OBJC("Swift property 'StereoViewController.helpButton' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, copy) void (^ _Nullable helpButtonHandler)(UIButton * _Nonnull) SWIFT_DEPRECATED_OBJC("Swift property 'StereoViewController.helpButtonHandler' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIView * _Nullable introductionView SWIFT_DEPRECATED_OBJC("Swift property 'StereoViewController.introductionView' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end




@interface UIApplication (SWIFT_EXTENSION(MetalScope))
- (UIInterfaceOrientation)interfaceOrientationAtTime:(NSTimeInterval)time SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift method 'UIApplication.interfaceOrientation(atTime:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop