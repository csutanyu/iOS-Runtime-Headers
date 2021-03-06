/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, TSDRep, TSUNoCopyDictionary;

@interface TSDTextureSet : NSObject <NSCopying> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    int _stageIndex;
    } mActiveChunkIndices;
    NSMutableArray *mAllTextures;
    CALayer *mAlternateLayer;
    NSDictionary *mBakedAttributes;
    NSMutableDictionary *mBoundingRectForStage;
    } mBounds;
    } mCenter;
    unsigned int mChunkCount;
    struct CGColorSpace { } *mColorSpace;
    NSMutableDictionary *mContentRectForStage;
    NSMutableDictionary *mFinalTextureForStage;
    TSUNoCopyDictionary *mFinalTexturesToStageMap;
    BOOL mIsBackground;
    BOOL mIsBaked;
    BOOL mIsMagicMove;
    CALayer *mLayer;
    int mMaxStageIndex;
    } mOriginalPosition;
    TSDRep *mRep;
    NSMutableDictionary *mReverseFinalTextureForStage;
    TSUNoCopyDictionary *mReverseFinalTexturesToStageMap;
    BOOL mShouldIncludeFinalTexturesInVisibleSet;
    BOOL mShouldTransformUsingTextureCenter;
    TSUNoCopyDictionary *mStageIndexForTexture;
    float mTextureAngle;
    } mTextureContentRect;
    float mTextureOpacity;
    int mTextureZOrder;
    NSMutableArray *mTextures;
}

@property(retain) CALayer * alternateLayer;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } boundingRect;
@property(retain) NSDictionary * boundingRectForStage;
@property struct CGPoint { float x1; float x2; } center;
@property(readonly) unsigned int chunkCount;
@property struct CGColorSpace { }* colorSpace;
@property(retain) NSDictionary * contentRectForStage;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property BOOL isBackground;
@property BOOL isBaked;
@property BOOL isMagicMove;
@property(readonly) CALayer * layer;
@property(readonly) int maxStageIndex;
@property struct CGPoint { float x1; float x2; } originalPosition;
@property TSDRep * rep;
@property BOOL shouldIncludeFinalTexturesInVisibleSet;
@property BOOL shouldTransformUsingTextureCenter;
@property(readonly) int stageIndex;
@property float textureAngle;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } textureContentRect;
@property float textureOpacity;
@property int textureZOrder;
@property(readonly) NSArray * visibleTextures;

- (void)addFinalTexture:(id)arg1 forStage:(int)arg2 reverse:(BOOL)arg3;
- (void)addPerspectiveLayerToTexture:(id)arg1 withShowSize:(struct CGSize { float x1; float x2; })arg2;
- (void)addRenderable:(id)arg1 forStage:(int)arg2;
- (void)addRenderable:(id)arg1;
- (void)adjustAnchorPointRelativeToCenterOfRotation;
- (id)alternateLayer;
- (void)applyActionEffect:(id)arg1 viewScale:(float)arg2 isMagicMove:(BOOL)arg3 shouldBake:(BOOL)arg4 applyScaleOnly:(BOOL)arg5 shouldCheckActionKeys:(BOOL)arg6;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectForStage:(int)arg1 isBuildIn:(BOOL)arg2;
- (id)boundingRectForStage;
- (struct CGPoint { float x1; float x2; })center;
- (unsigned int)chunkCount;
- (struct CGColorSpace { }*)colorSpace;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForStage:(int)arg1 isBuildIn:(BOOL)arg2;
- (id)contentRectForStage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)finalTextureForStage:(int)arg1 reverse:(BOOL)arg2;
- (id)firstVisibleTextureForTextureType:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)hideLayersOfFinalTextures;
- (id)init;
- (BOOL)isBackground;
- (BOOL)isBackgroundTexture:(id)arg1;
- (BOOL)isBaked;
- (BOOL)isMagicMove;
- (id)layer;
- (int)maxStageIndex;
- (id)newFlattenedTexture;
- (id)newFlattenedTextureFromTextures:(id)arg1 newRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGPoint { float x1; float x2; })originalPosition;
- (void)p_applyPositionFromAttributes:(id)arg1 viewScale:(float)arg2;
- (void)p_resetAttributesWithViewScale:(float)arg1;
- (void)removeRenderable:(id)arg1;
- (void)renderIntoContext:(struct CGContext { }*)arg1;
- (void)renderLayerContentsIfNeeded;
- (id)rep;
- (void)resetAnchorPoint;
- (void)setAlternateLayer:(id)arg1;
- (void)setBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forStage:(int)arg2;
- (void)setBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBoundingRectForStage:(id)arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forStage:(int)arg2;
- (void)setContentRectForStage:(id)arg1;
- (void)setIsBackground:(BOOL)arg1;
- (void)setIsBaked:(BOOL)arg1;
- (void)setIsMagicMove:(BOOL)arg1;
- (void)setLayerGeometryFromRep:(id)arg1;
- (void)setOriginalPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRep:(id)arg1;
- (void)setShouldIncludeFinalTexturesInVisibleSet:(BOOL)arg1;
- (void)setShouldTransformUsingTextureCenter:(BOOL)arg1;
- (void)setTextureAngle:(float)arg1;
- (void)setTextureContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTextureOpacity:(float)arg1;
- (void)setTextureZOrder:(int)arg1;
- (BOOL)shouldIncludeFinalTexturesInVisibleSet;
- (BOOL)shouldTransformUsingTextureCenter;
- (int)stageIndex;
- (int)stageIndexForTexture:(id)arg1;
- (void)teardown;
- (float)textureAngle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textureContentRect;
- (float)textureOpacity;
- (int)textureZOrder;
- (id)visibleTextures;
- (id)visibleTexturesForStage:(int)arg1 isBuildIn:(BOOL)arg2 shouldFlatten:(BOOL)arg3;

@end
