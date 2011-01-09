/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CALayer, CALayerArray;



@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming>
{
    struct _CALayerIvars { 
        NSInteger refcount; 
        NSUInteger flags; 
        NSUInteger parent; 
        CALayerArray *sublayers; 
        CALayer *mask; 
        struct _CALayerState {} *state; 
        struct _CALayerState {} *previous_state; 
        struct _CALayerAnimation {} *animations; 
        NSUInteger slots[3]; 
    } _attr;
}

@property(readonly) CALayer *currentLayer;
@property(readonly) CALayer *_mapKit_mapLayer;
@property BOOL needsLayoutOnGeometryChange;
@property BOOL canDrawConcurrently;
@property(getter=isFrozen) BOOL frozen;
@property BOOL allowsHitTesting;
@property BOOL clearsContext;
@property CGAffineTransform contentsTransform;
@property BOOL sortsSublayers;
@property BOOL preloadsCache;
@property BOOL allowsDisplayCompositing;
@property CGSize sizeRequisition;
@property(copy) NSArray *behaviors;
@property float velocityStretch;
@property float mass;
@property float momentOfInertia;
@property float coefficientOfRestitution;
@property(readonly) CGRect visibleRect;
@property CGRect bounds;
@property CGPoint position;
@property float zPosition;
@property CGPoint anchorPoint;
@property float anchorPointZ;
@property CATransform3D transform;
@property CGRect frame;
@property(getter=isHidden) BOOL hidden;
@property(getter=isDoubleSided) BOOL doubleSided;
@property(getter=isGeometryFlipped) BOOL geometryFlipped;
@property(readonly) CALayer *superlayer;
@property(copy) NSArray *sublayers;
@property CATransform3D sublayerTransform;
@property(retain) CALayer *mask;
@property BOOL masksToBounds;
@property(retain) id contents;
@property CGRect contentsRect;
@property(copy) NSString *contentsGravity;
@property float contentsScale;
@property CGRect contentsCenter;
@property(copy) NSString *minificationFilter;
@property(copy) NSString *magnificationFilter;
@property float minificationFilterBias;
@property(getter=isOpaque) BOOL opaque;
@property BOOL needsDisplayOnBoundsChange;
@property NSUInteger edgeAntialiasingMask;
@property CGColor *backgroundColor;
@property float cornerRadius;
@property float borderWidth;
@property CGColor *borderColor;
@property float opacity;
@property(retain) id compositingFilter;
@property(copy) NSArray *filters;
@property(copy) NSArray *backgroundFilters;
@property BOOL shouldRasterize;
@property float rasterizationScale;
@property CGColor *shadowColor;
@property float shadowOpacity;
@property CGSize shadowOffset;
@property float shadowRadius;
@property CGPath *shadowPath;
@property(copy) NSDictionary *actions;
@property(copy) NSString *name;
@property id delegate;
@property(copy) NSDictionary *style;
@property(copy) NSString *fillMode;
@property BOOL autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property double timeOffset;
@property float speed;
@property double duration;
@property double beginTime;

+ (BOOL)needsDisplayForKey:(id)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)layer;
+ (id)defaultActionForKey:(id)arg1;
+ (int (*)())CA_setterForType:(NSInteger)arg1;
+ (int (*)())CA_getterForType:(NSInteger)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)properties;
+ (id)defaultValueForKey:(id)arg1;
+ (void)_initializeSafeCategory;

- (void)scrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isDescendantOf:(id)arg1;
- (id)actionForKey:(id)arg1;
- (void*)regionBeingDrawn;
- (float)repeatCount;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })sublayerTransform;
- (double)beginTime;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (void)setContentsChanged;
- (void)setAnchorPointZ:(float)arg1;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)setGeometryFlipped:(BOOL)arg1;
- (void)setTimeOffset:(double)arg1;
- (BOOL)autoreverses;
- (id)fillMode;
- (void)setSpeed:(float)arg1;
- (float)anchorPointZ;
- (BOOL)isDoubleSided;
- (struct CGColor { }*)borderColor;
- (float)borderWidth;
- (void)setBorderWidth:(float)arg1;
- (void)display;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (void)setCanDrawConcurrently:(BOOL)arg1;
- (float)minificationFilterBias;
- (void)setMinificationFilterBias:(float)arg1;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (id)debugDescription;
- (BOOL)isFlipped;
- (BOOL)needsLayout;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBehaviors:(id)arg1;
- (NSUInteger)edgeAntialiasingMask;
- (void)setNeedsLayoutOnGeometryChange:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsRect;
- (void)setFrozen:(BOOL)arg1;
- (void)setShadowPath:(struct CGPath { }*)arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowRadius:(float)arg1;
- (BOOL)shouldRasterize;
- (float)cornerRadius;
- (id)initWithLayer:(id)arg1;
- (BOOL)hidden;
- (void)clearHasBeenCommitted;
- (void)setMask:(id)arg1;
- (BOOL)opaque;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setSortsSublayers:(BOOL)arg1;
- (void)setMinificationFilter:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setZPosition:(float)arg1;
- (void)setDoubleSided:(BOOL)arg1;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)setFlipped:(BOOL)arg1;
- (void)setEdgeAntialiasingMask:(NSUInteger)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (void)setPreloadsCache:(BOOL)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (void)setSublayerTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })doubleBounds;
- (void)setDoubleBounds:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })doublePosition;
- (void)setDoublePosition:(struct CADoublePoint { double x1; double x2; })arg1;
- (id)presentationLayer;
- (void)setBeginTime:(double)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setFillMode:(id)arg1;
- (void)setName:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setMagnificationFilter:(id)arg1;
- (void)setContents:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransform;
- (void)setSublayers:(id)arg1;
- (void)setContentsGravity:(id)arg1;
- (id)contentsGravity;
- (void)setContentsCenter:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsCenter;
- (float)contentsScale;
- (void)setContentsScale:(float)arg1;
- (void)setRasterizationScale:(float)arg1;
- (void)setShouldRasterize:(BOOL)arg1;
- (BOOL)masksToBounds;
- (void)setOpacity:(float)arg1;
- (float)opacity;
- (BOOL)clearsContext;
- (void)displayIfNeeded;
- (id)filters;
- (id)name;
- (void)removeAllAnimations;
- (void)invalidateContents;
- (float)speed;
- (void)setContentsTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)mask;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(NSUInteger)arg2;
- (BOOL)hasBeenCommitted;
- (id)valueForKeyPath:(id)arg1;
- (BOOL)isFrozen;
- (id)animationKeys;
- (id)animationForKey:(id)arg1;
- (struct CGPoint { float x1; float x2; })position;
- (void)layoutIfNeeded;
- (void)layoutBelowIfNeeded;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)needsDisplay;
- (BOOL)needsDisplayOnBoundsChange;
- (void)setClearsContext:(BOOL)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addSublayer:(id)arg1;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setMasksToBounds:(BOOL)arg1;
- (void)removeFromSuperlayer;
- (id)superlayer;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform;
- (void)removeAnimationForKey:(id)arg1;
- (void)setTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (id)contents;
- (struct CGColor { }*)backgroundColor;
- (BOOL)isOpaque;
- (id)sublayers;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (NSUInteger)retainCount;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setDuration:(double)arg1;
- (double)duration;
- (id)valueForKey:(id)arg1;
- (id)init;
- (struct CGColor { }*)shadowColor;
- (void)setOpaque:(BOOL)arg1;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)release;
- (id)retain;
- (void)setNeedsDisplay;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGSize { float x1; float x2; })size;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (BOOL)isHidden;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setNeedsLayout;
- (void)setHidden:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (double)timeOffset;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (BOOL)contentsAreFlipped;
- (void)layoutSublayers;
- (float)shadowOpacity;
- (float)shadowRadius;
- (id)actions;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)setAllowsDisplayCompositing:(BOOL)arg1;
- (void)_dealloc;
- (BOOL)isGeometryFlipped;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (BOOL)_scheduleAnimationTimer;
- (void)_cancelAnimationTimer;
- (id)modelLayer;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (void)_renderBorderInContext:(struct CGContext { }*)arg1;
- (void)_display;
- (struct CGSize { float x1; float x2; })_preferredSize;
- (struct CGSize { float x1; float x2; })preferredFrameSize;
- (float)zPosition;
- (id)magnificationFilter;
- (id)minificationFilter;
- (id)backgroundFilters;
- (void)setBackgroundFilters:(id)arg1;
- (id)compositingFilter;
- (void)setCompositingFilter:(id)arg1;
- (void)setActions:(id)arg1;
- (struct CGPath { }*)shadowPath;
- (float)rasterizationScale;
- (void)reloadValueForKeyPath:(id)arg1;
- (BOOL)needsLayoutOnGeometryChange;
- (BOOL)canDrawConcurrently;
- (BOOL)_canDisplayConcurrently;
- (BOOL)drawsMipmapLevels;
- (BOOL)allowsHitTesting;
- (void)setAllowsHitTesting:(BOOL)arg1;
- (BOOL)sortsSublayers;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (BOOL)layoutIsActive;
- (BOOL)ignoresHitTesting;
- (id)ancestorSharedWithLayer:(id)arg1;
- (id)layerBeingDrawn;
- (id)layerAtTime:(double)arg1;
- (BOOL)doubleSided;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })contentsTransform;
- (BOOL)preloadsCache;
- (BOOL)allowsDisplayCompositing;
- (struct CGSize { float x1; float x2; })sizeRequisition;
- (void)setSizeRequisition:(struct CGSize { float x1; float x2; })arg1;
- (id)behaviors;
- (float)velocityStretch;
- (void)setVelocityStretch:(float)arg1;
- (float)mass;
- (void)setMass:(float)arg1;
- (float)momentOfInertia;
- (void)setMomentOfInertia:(float)arg1;
- (float)coefficientOfRestitution;
- (void)setCoefficientOfRestitution:(float)arg1;
- (id)_implicitActionForKey:(id)arg1;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (struct Layer { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; NSUInteger x3; unsigned short x4; unsigned short x5; float x6; struct LayerExt {} *x7; struct Handle {} *x8; struct Object {} *x9; struct Vec2<double> { double x_10_1_1; double x_10_1_2; } x10; struct Rect { double x_11_1_1; double x_11_1_2; double x_11_1_3; double x_11_1_4; } x11; struct TypedArray<CA::Render::Layer> {} *x12; struct TypedArray<CA::Render::Animation> {} *x13; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; NSInteger x2; struct HashTable<CALayer*,uintptr_t*> {} *x3; struct SpinLock {} *x4; NSUInteger x5; struct Level {} *x6; struct Command {} *x7; struct Deleted {} *x8; struct List<const void*> {} *x9; struct Context {} *x10; struct HashTable<CALayer*,CALayer*> {} *x11; struct __CFRunLoop {} *x12; struct __CFRunLoopObserver {} *x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; }*)arg1 layerFlags:(NSUInteger)arg2 commitFlags:(NSUInteger*)arg3;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)_renderLayerDefinesProperty:(NSUInteger)arg1;
     /* Encoded args for previous method: B12@0:4I8 */

- (NSUInteger)_renderLayerPropertyAnimationFlags:(NSUInteger)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (void)_scrollPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (void)_scrollRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (void)setPositionWithValue:(id)arg1;
- (void)setBoundsWithValue:(id)arg1;
- (NSInteger)compareTextEffectsOrdering:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)currentLayer;
- (BOOL)getPresentationValue:(id*)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(BOOL)arg4;
- (id)_mapKit_mapLayer;
- (BOOL)getPresentationValue:(id*)arg1 forKey:(id)arg2 removeAnimation:(BOOL)arg3;

@end