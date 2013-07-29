/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class PKPrinter, UIPrinterSetupConnectingView, UIScrollView, UIPrinterSetupPINView;

@interface UIPrinterSetupPINViewController : UIViewController  {
    PKPrinter *_printer;
    UIPrinterSetupConnectingView *_connectingView;
    UIPrinterSetupPINView *_PINView;
    UIScrollView *_scrollView;
}

@property(retain) PKPrinter * printer;
@property(retain) UIPrinterSetupConnectingView * connectingView;
@property(retain) UIPrinterSetupPINView * PINView;
@property(retain) UIScrollView * scrollView;


- (void)dealloc;
- (id)PINView;
- (id)connectingView;
- (void)connected:(BOOL)arg1;
- (void)showFailure;
- (void)showSetup;
- (void)connectToPrinter;
- (void)setPINView:(id)arg1;
- (void)setConnectingView:(id)arg1;
- (id)initWithPrinter:(id)arg1;
- (id)printer;
- (void)setPrinter:(id)arg1;
- (id)scrollView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setScrollView:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;

@end