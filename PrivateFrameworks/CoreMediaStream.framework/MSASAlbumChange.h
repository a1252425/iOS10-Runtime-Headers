/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MSASInvitation, NSString;

@interface MSASAlbumChange : NSObject  {
    BOOL _wasDeleted;
    NSString *_GUID;
    NSString *_ownerEmail;
    NSString *_ownerPersonID;
    NSString *_ownerFullName;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    NSString *_URLString;
    MSASInvitation *_invitation;
    NSString *_name;
}

@property(copy) NSString * ownerEmail;
@property(copy) NSString * ownerPersonID;
@property(copy) NSString * ownerFullName;
@property(copy) NSString * ownerFirstName;
@property(copy) NSString * ownerLastName;
@property(retain) NSString * GUID;
@property(retain) NSString * URLString;
@property(retain) NSString * name;
@property BOOL wasDeleted;
@property(retain) MSASInvitation * invitation;


- (void)setOwnerLastName:(id)arg1;
- (id)ownerLastName;
- (void)setOwnerFirstName:(id)arg1;
- (id)ownerFirstName;
- (void)setOwnerFullName:(id)arg1;
- (id)ownerFullName;
- (void)setOwnerPersonID:(id)arg1;
- (id)ownerPersonID;
- (void)setOwnerEmail:(id)arg1;
- (id)ownerEmail;
- (void)setInvitation:(id)arg1;
- (id)invitation;
- (void)setWasDeleted:(BOOL)arg1;
- (void)setGUID:(id)arg1;
- (BOOL)wasDeleted;
- (id)URLString;
- (id)GUID;
- (id)name;
- (void).cxx_destruct;
- (id)description;
- (void)setURLString:(id)arg1;
- (void)setName:(id)arg1;

@end