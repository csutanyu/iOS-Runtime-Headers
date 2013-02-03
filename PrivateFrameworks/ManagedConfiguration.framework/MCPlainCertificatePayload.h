/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSData;

@interface MCPlainCertificatePayload : MCCertificatePayload {
    NSData *_certificateData;
    NSString *_certificateFileName;
    NSInteger _dataEncoding;
    NSString *_password;
}

@property(readonly) NSData *certificateData;
@property(readonly) NSString *certificateFileName;
@property(readonly) NSString *password;
@property(readonly) NSInteger dataEncoding;

+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;
+ (id)typeStrings;

- (id)certificateData;
- (id)certificateFileName;
- (struct __SecCertificate { }*)copyCertificate;
- (NSInteger)dataEncoding;
- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (BOOL)isIdentity;
- (BOOL)isSigned;
- (id)password;
- (id)persistentResourceID;

@end