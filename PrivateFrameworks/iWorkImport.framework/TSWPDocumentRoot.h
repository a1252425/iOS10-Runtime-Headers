/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPDocumentRoot : TSKDocumentRoot <TSWPObjectIndex> {
    bool  _didRemoveMissingAttachments;
}

@property (getter=isChangeTrackingEnabled, nonatomic, readonly) bool changeTrackingEnabled;
@property (nonatomic) bool didRemoveMissingAttachments;
@property (nonatomic, readonly) bool supportHeaderFooterParagraphAlignmentInInspectors;

- (bool)cellCommentsAllowedOnInfo:(id)arg1;
- (id)changeSessionManagerForModel:(id)arg1;
- (id)changeVisibility;
- (bool)didRemoveMissingAttachments;
- (void)documentDidLoad;
- (id)documentFonts;
- (struct __CFLocale { }*)hyphenationLocale;
- (bool)isChangeTrackingEnabled;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (void)setDidRemoveMissingAttachments:(bool)arg1;
- (bool)shouldHyphenate;
- (bool)supportHeaderFooterParagraphAlignmentInInspectors;
- (id)unavailableDocumentFonts;
- (bool)useLigatures;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (void)willClose;

@end