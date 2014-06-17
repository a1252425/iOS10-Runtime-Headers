/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLCamera : PBCodable <NSCopying> {
    double _altitude;
    double _heading;
    double _latitude;
    double _longitude;
    double _pitch;
    struct { 
        unsigned int altitude : 1; 
        unsigned int heading : 1; 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int pitch : 1; 
    } _has;
}

@property bool hasLatitude;
@property double latitude;
@property bool hasLongitude;
@property double longitude;
@property bool hasHeading;
@property double heading;
@property bool hasPitch;
@property double pitch;
@property bool hasAltitude;
@property double altitude;


- (bool)hasPitch;
- (void)setHasPitch:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (bool)hasLongitude;
- (bool)hasLatitude;
- (bool)hasHeading;
- (void)setHasHeading:(bool)arg1;
- (void)setHeading:(double)arg1;
- (bool)hasAltitude;
- (void)setHasAltitude:(bool)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setPitch:(double)arg1;
- (double)heading;
- (double)pitch;
- (double)altitude;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (double)longitude;
- (double)latitude;
- (void)setAltitude:(double)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end