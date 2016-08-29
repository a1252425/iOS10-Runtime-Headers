/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchFoundationResult : SFSearchResult <MKLocationManagerObserver> {
    SFActionItem * _action;
    id  _attributionObserver;
    NSBundle * _bundle;
    NSString * _bundleID;
    NSArray * _descriptions;
    NSString * _distanceString;
    MKSearchFoundationRichText * _fourthLineDisplayedText;
    NSMutableArray * _fourthLineText;
    unsigned long long  _iconSize;
    MKLocationManager * _locationManager;
    MKMapItem * _mapItem;
    NSData * _mapsData;
    unsigned long long  _mksfResultType;
    bool  _optionSmallerScreen;
    MKSearchFoundationRichText * _secondLineDisplayedText;
    NSMutableArray * _secondLineText;
    NSString * _temporaryReviewString;
    MKSearchFoundationRichText * _thirdLineDisplayedText;
    NSMutableArray * _thirdLineText;
    SFImage * _thumbnail;
    SFText * _title;
}

@property (nonatomic, retain) id attributionObserver;
@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *distanceString;
@property (nonatomic, retain) MKSearchFoundationRichText *fourthLineDisplayedText;
@property (nonatomic, copy) NSMutableArray *fourthLineText;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic, retain) MKLocationManager *locationManager;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, retain) NSData *mapsData;
@property (nonatomic) unsigned long long mksfResultType;
@property (nonatomic) bool optionSmallerScreen;
@property (nonatomic, retain) MKSearchFoundationRichText *secondLineDisplayedText;
@property (nonatomic, copy) NSMutableArray *secondLineText;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *temporaryReviewString;
@property (nonatomic, retain) MKSearchFoundationRichText *thirdLineDisplayedText;
@property (nonatomic, copy) NSMutableArray *thirdLineText;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_defaultRichTextItems;
- (bool)_isSmallerScreen;
- (void)_locationApprovalDidChange;
- (id)action;
- (id)attributionObserver;
- (id)bundle;
- (id)bundleID;
- (void)dealloc;
- (id)descriptions;
- (id)distanceString;
- (id)fourthLineDisplayedText;
- (id)fourthLineText;
- (unsigned long long)iconSize;
- (id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3;
- (id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3;
- (id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3;
- (id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3;
- (id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3;
- (id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3;
- (id)locationManager;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)mapItem;
- (id)mapItemFromFavoritesData:(id)arg1;
- (id)mapsData;
- (unsigned long long)mksfResultType;
- (bool)optionSmallerScreen;
- (id)secondLineDisplayedText;
- (id)secondLineText;
- (void)setAction:(id)arg1;
- (void)setAttributionObserver:(id)arg1;
- (void)setBundle:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDescriptions:(id)arg1;
- (void)setDistanceString:(id)arg1;
- (void)setFourthLineDisplayedText:(id)arg1;
- (void)setFourthLineText:(id)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setMksfResultType:(unsigned long long)arg1;
- (void)setOptionSmallerScreen:(bool)arg1;
- (void)setSecondLineDisplayedText:(id)arg1;
- (void)setSecondLineText:(id)arg1;
- (void)setTemporaryReviewString:(id)arg1;
- (void)setThirdLineDisplayedText:(id)arg1;
- (void)setThirdLineText:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)styledStringFromStringArray:(id)arg1;
- (id)temporaryReviewString;
- (id)thirdLineDisplayedText;
- (id)thirdLineText;
- (id)thumbnail;
- (id)title;

@end