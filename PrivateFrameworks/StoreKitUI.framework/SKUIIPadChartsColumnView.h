/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIItemListTableViewController, NSArray;

@interface SKUIIPadChartsColumnView : UIView  {
    NSArray *_contentViewControllers;
    int _selectedViewControllerIndex;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInset;
}

@property(copy) NSArray * contentViewControllers;
@property(readonly) SKUIItemListTableViewController * selectedViewController;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;


- (id)contentViewControllers;
- (void)_addSelectedViewController;
- (void)setContentViewControllers:(id)arg1;
- (void)setSelectedViewControllerIndex:(int)arg1;
- (void).cxx_destruct;
- (id)selectedViewController;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)layoutSubviews;

@end