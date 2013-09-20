/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSPPackage>, TSPPackageWriteCoordinator;

@interface TSSupportPackageWriteCoordinator : TSPPackageWriteCoordinator {
    <TSPPackage> *_documentPackage;
    TSPPackageWriteCoordinator *_packageWriteCoordinator;
}

- (void).cxx_destruct;
- (long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2;
- (BOOL)componentWriter:(id)arg1 externalPackageDidWriteObject:(id)arg2 claimingComponent:(id*)arg3;
- (void)didReferenceData:(id)arg1;
- (id)initWithContext:(id)arg1 documentPackage:(id)arg2;
- (id)initWithContext:(id)arg1 packageIdentifier:(unsigned char)arg2;
- (id)initWithContext:(id)arg1 packageWriteCoordinator:(id)arg2;
- (BOOL)isComponentExternal:(id)arg1 wasWritten:(BOOL*)arg2 wasCopied:(BOOL*)arg3;
- (BOOL)isObjectInExternalPackage:(id)arg1 claimingComponent:(id*)arg2;
- (id)objectForIdentifier:(long long)arg1;
- (BOOL)shouldEnqueueComponent:(id)arg1;

@end