/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    CNContact * _internalContact;
    NSString * _key;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) CNContact *internalContact;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) id value;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
+ (id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
+ (BOOL)supportsSecureCoding;

- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)internalContact;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (id)label;
- (id)labeledValue;
- (int)multiValueIdentifier;
- (void)setIdentifier:(id)arg1;
- (void)setInternalContact:(id)arg1;
- (void)setKey:(id)arg1;
- (id)sourceContact;
- (id)value;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (id)property;

@end
