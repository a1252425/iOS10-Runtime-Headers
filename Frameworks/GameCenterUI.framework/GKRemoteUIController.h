/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSURL, RUILoader, GKRemoteUIController, NSMutableArray, NSString, UINavigationController, NSData, NSArray;

@interface GKRemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, GKRemoteUIAuxiliaryViewDelegate> {
    BOOL _loading;
    BOOL _shouldApplyGameCenterTheme;
    BOOL _accountChanged;
    BOOL _previousUseCustomBackButtonActionValue;
    BOOL _loadingInitialUI;
    BOOL _complete;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    NSError *_error;
    NSString *_authToken;
    NSData *_pushToken;
    NSString *_appleID;
    NSString *_playerID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_alias;
    NSMutableArray *_objectModels;
    UINavigationController *_navigationController;
    NSArray *_staticViewControllers;
    RUILoader *_loader;
    GKRemoteUIController *_presentedRemoteUIController;
    NSURL *_url;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadHandler;

    int _layoutStyle;
}

@property(copy) id completionHandler;
@property(retain) NSError * error;
@property BOOL loading;
@property BOOL shouldApplyGameCenterTheme;
@property(readonly) NSString * bagKey;
@property(readonly) NSURL * fallbackURL;
@property(retain) NSString * authToken;
@property(retain) NSData * pushToken;
@property(retain) NSString * appleID;
@property(retain) NSString * playerID;
@property(retain) NSString * firstName;
@property(retain) NSString * lastName;
@property(retain) NSString * alias;
@property BOOL accountChanged;
@property(retain) NSMutableArray * objectModels;
@property UINavigationController * navigationController;
@property(retain) NSArray * staticViewControllers;
@property(retain) RUILoader * loader;
@property(retain) GKRemoteUIController * presentedRemoteUIController;
@property BOOL previousUseCustomBackButtonActionValue;
@property BOOL loadingInitialUI;
@property(retain) NSURL * url;
@property(copy) id loadHandler;
@property(getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property int layoutStyle;
@property BOOL complete;

+ (id)remoteUIController;

- (void)setLoader:(id)arg1;
- (void)setLayoutStyle:(int)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(BOOL)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (BOOL)objectModel:(id)arg1 shouldShowModalHTMLViewWithURL:(id)arg2;
- (id)objectModel:(id)arg1 tableFooterViewForAttributes:(id)arg2 page:(id)arg3;
- (id)objectModel:(id)arg1 tableHeaderViewForAttributes:(id)arg2 page:(id)arg3;
- (Class)objectModel:(id)arg1 customFooterClassForSection:(id)arg2;
- (Class)objectModel:(id)arg1 customHeaderClassForSection:(id)arg2;
- (void)objectModel:(id)arg1 configureTableSection:(id)arg2 page:(id)arg3;
- (void)objectModel:(id)arg1 configureTableRow:(id)arg2 page:(id)arg3;
- (void)objectModel:(id)arg1 configureTableView:(id)arg2 page:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)objectModelDidChange:(id)arg1;
- (void)setAppleID:(id)arg1;
- (id)appleID;
- (void)setPushToken:(id)arg1;
- (id)pushToken;
- (id)bagKey;
- (void)setPlayerID:(id)arg1;
- (id)playerID;
- (void)setPreviousUseCustomBackButtonActionValue:(BOOL)arg1;
- (void)setObjectModels:(id)arg1;
- (BOOL)accountChanged;
- (void)setShouldApplyGameCenterTheme:(BOOL)arg1;
- (void)loadInitialRemoteUIWithHandler:(id)arg1;
- (void)configureFromBagKey:(id)arg1 withCompletionHandler:(id)arg2;
- (void)auxiliaryView:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3;
- (void)auxiliaryView:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (id)addThemeInfoToAttributes:(id)arg1;
- (void)updatePostbackDictionary:(id)arg1 withHandler:(id)arg2;
- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(id)arg2;
- (void)performAction:(int)arg1 withObjectModel:(id)arg2;
- (BOOL)loadingInitialUI;
- (void)presentObjectModel:(id)arg1 animated:(BOOL)arg2;
- (void)popObjectModelAnimated:(BOOL)arg1;
- (void)replaceObjectModelAtIndex:(unsigned int)arg1 withObjectObjectModel:(id)arg2;
- (void)presentInParentNavigationController:(id)arg1 animated:(BOOL)arg2;
- (void)setPresentedRemoteUIController:(id)arg1;
- (id)presentedRemoteUIController;
- (int)indexOfVisiblePage;
- (id)staticViewControllers;
- (void)updateAccountAndMarkComplete:(BOOL)arg1 completionHandler:(id)arg2;
- (void)setAccountChanged:(BOOL)arg1;
- (void)didLoadURL:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)loader;
- (void)finishLoadingWithError:(id)arg1;
- (void)loadURL:(id)arg1 postData:(id)arg2;
- (id)postbackDataForDictionary:(id)arg1;
- (id)loadHandler;
- (void)loadURL:(id)arg1 postBody:(id)arg2;
- (id)postBodyForInitialLoad;
- (void)setLoadingInitialUI:(BOOL)arg1;
- (void)setLoadHandler:(id)arg1;
- (id)fallbackURL;
- (BOOL)shouldApplyGameCenterTheme;
- (int)layoutStyle;
- (id)objectModels;
- (void)setStaticViewControllers:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (BOOL)previousUseCustomBackButtonActionValue;
- (id)initWithObjectModel:(id)arg1;
- (void)pushObjectModel:(id)arg1 animated:(BOOL)arg2;
- (int)preferredLayoutStyle;
- (void)fireCompletionHandler;
- (id)authToken;
- (void)setAuthToken:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)alias;
- (id)lastName;
- (id)firstName;
- (id)init;
- (void)dealloc;
- (void)setError:(id)arg1;
- (id)error;
- (BOOL)complete;
- (void)setComplete:(BOOL)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)viewControllers;
- (id)navigationController;
- (id)completionHandler;
- (BOOL)isUserInteractionEnabled;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (id)url;

@end