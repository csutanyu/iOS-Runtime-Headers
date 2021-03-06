/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFURLProtocol : NSURLProtocol {
    struct _CFURLProtocol { } *cfProt;
}

+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (void)_resumeLoading;
- (void)_suspendLoading;
- (void)dealloc;
- (void)finalize;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)startLoading;
- (void)stopLoading;

@end
