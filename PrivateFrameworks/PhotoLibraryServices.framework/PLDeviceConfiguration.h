/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDeviceConfiguration : NSObject {
    bool  _isPad;
    bool  _isRetina;
    bool  _isRidingCrudSnow;
    bool  _isRidingPowderSnow;
    bool  _isTV;
    bool  _isWatch;
    struct CGSize { 
        double width; 
        double height; 
    }  _logicalScreenSize;
    double  _screenScale;
}

@property (nonatomic) bool isPad;
@property (nonatomic) bool isRetina;
@property (nonatomic, readonly) bool isRidingCrudSnow;
@property (nonatomic, readonly) bool isRidingPowderSnow;
@property (nonatomic) bool isTV;
@property (nonatomic) bool isWatch;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } logicalScreenSize;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) bool shouldUseNanoThumbnailFormats;

+ (id)defaultDeviceConfiguration;

- (id)description;
- (id)initWithLogicalScreenSize:(struct CGSize { double x1; double x2; })arg1 screenScale:(double)arg2 isRidingCrudSnow:(bool)arg3 isRidingPowderSnow:(bool)arg4;
- (bool)isPad;
- (bool)isRetina;
- (bool)isRidingCrudSnow;
- (bool)isRidingPowderSnow;
- (bool)isTV;
- (bool)isWatch;
- (struct CGSize { double x1; double x2; })logicalScreenSize;
- (double)screenScale;
- (void)setIsPad:(bool)arg1;
- (void)setIsRetina:(bool)arg1;
- (void)setIsTV:(bool)arg1;
- (void)setIsWatch:(bool)arg1;
- (bool)shouldUseNanoThumbnailFormats;

@end