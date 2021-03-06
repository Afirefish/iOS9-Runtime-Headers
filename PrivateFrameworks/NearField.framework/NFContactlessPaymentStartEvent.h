/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFContactlessPaymentStartEvent : NSObject <NSSecureCoding> {
    NFApplet * _applet;
    NSString * _appletIdentifier;
    unsigned short  _selectStatus;
}

@property (nonatomic, readonly) NFApplet *applet;
@property (nonatomic, readonly) unsigned short selectStatus;

+ (BOOL)supportsSecureCoding;

- (void)_setApplet:(id)arg1;
- (id)applet;
- (id)appletIdentifier;
- (id)asDictionary;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned short)selectStatus;

@end
