/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceResult;

@interface GEOBatchPlaceResult : PBCodable  {
    GEOPlaceResult *_placeResult;
    int _statusCode;
    struct { 
        unsigned int statusCode : 1; 
    } _has;
}

@property BOOL hasStatusCode;
@property int statusCode;
@property(readonly) BOOL hasPlaceResult;
@property(retain) GEOPlaceResult * placeResult;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)placeResult;
- (BOOL)hasPlaceResult;
- (void)setPlaceResult:(id)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setStatusCode:(int)arg1;
- (BOOL)hasStatusCode;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (int)statusCode;
- (id)dictionaryRepresentation;

@end