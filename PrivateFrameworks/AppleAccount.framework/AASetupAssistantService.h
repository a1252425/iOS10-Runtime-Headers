/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSOperationQueue, NSString, AASigningSession, ACAccount, NSDate;

@interface AASetupAssistantService : NSObject  {
    NSOperationQueue *_requesterQueue;
    NSString *_appleID;
    NSString *_password;
    NSString *_emailChoice;
    ACAccount *_account;
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorage;
    AASigningSession *_signingSession;
    NSDate *_signingSessionCreationDate;
}

@property(copy) NSString * appleID;
@property(copy) NSString * password;
@property(copy) NSString * emailChoice;

+ (void)resetURLConfiguration;
+ (id)urlConfiguration;

- (void)createAppleIDWithParameters:(id)arg1 handler:(id)arg2;
- (void)setEmailChoice:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)shouldPresentUpgradeFlowWithCompletion:(id)arg1;
- (void)upgradeiCloudTermsIfNecessaryWithHandler:(id)arg1;
- (void)setupDelegateAccountsWithParameters:(id)arg1 handler:(id)arg2;
- (void)updateAppleIDWithParameters:(id)arg1 handler:(id)arg2;
- (void)authenticateWithHandler:(id)arg1;
- (void)downloadURLConfiguration:(id)arg1;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (id)emailChoice;
- (void)_doHSADeviceProvisioningSynchronizationWithDSID:(id)arg1 data:(id)arg2;
- (void)_doHSADeviceProvisioningWithDSID:(id)arg1 data:(id)arg2;
- (id)_signingSession;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (id)appleID;
- (void)setPassword:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)init;
- (id)password;
- (void)dealloc;
- (void).cxx_destruct;

@end