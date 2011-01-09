/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface GMMMapTile : PBCodable 
{
    NSInteger _tileType;
    NSInteger _tileIndexX;
    NSInteger _tileIndexY;
    NSInteger _zoomLevel;
    NSInteger _textSize;
    BOOL _hasTextSize;
}

@property(readonly) BOOL hasTextSize;
@property NSInteger textSize;
@property NSInteger zoomLevel;
@property NSInteger tileIndexY;
@property NSInteger tileIndexX;
@property NSInteger tileType;


- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setTextSize:(NSInteger)arg1;
- (id)description;
- (id)init;
- (NSInteger)textSize;
- (void)dealloc;
- (BOOL)hasTextSize;
- (NSInteger)tileIndexY;
- (void)setTileIndexY:(NSInteger)arg1;
- (NSInteger)tileIndexX;
- (void)setTileIndexX:(NSInteger)arg1;
- (NSInteger)tileType;
- (void)setTileType:(NSInteger)arg1;
- (void)setZoomLevel:(NSInteger)arg1;
- (NSInteger)zoomLevel;
- (void)writeTo:(id)arg1;

@end