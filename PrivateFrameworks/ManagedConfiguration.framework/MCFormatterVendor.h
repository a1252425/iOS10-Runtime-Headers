/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumberFormatter, NSObject<OS_dispatch_queue>;

@interface MCFormatterVendor : NSObject  {
    NSNumberFormatter *_numberFormatter;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedInstance;

- (id)numberFormatter;
- (void)_localeDidChange:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end