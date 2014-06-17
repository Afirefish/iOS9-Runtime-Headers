/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class <IKAppDeviceConfig>, NSString, NSNumber;

@interface IKJSDevice : IKJSObject <IKJSDevice> {
    <IKAppDeviceConfig> *_deviceConfig;
}

@property <IKAppDeviceConfig> * deviceConfig;
@property(readonly) NSString * vendorID;
@property(readonly) NSString * appVersion;
@property(readonly) NSString * appIdentifier;
@property(readonly) NSString * systemVersion;
@property(readonly) NSString * model;
@property(readonly) NSString * productType;
@property(readonly) NSNumber * pixelRatio;
@property(readonly) bool isInRetailDemoMode;

+ (id)getMobileGestaltString:(struct __CFString { }*)arg1;

- (bool)isInRetailDemoMode;
- (id)appVersion;
- (id)vendorID;
- (id)capacity:(id)arg1;
- (void)setDeviceConfig:(id)arg1;
- (id)deviceConfig;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;
- (id)appIdentifier;
- (id)pixelRatio;
- (id)model;
- (id)productType;
- (void).cxx_destruct;
- (id)systemVersion;

@end