/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AXAccessQueue, NSObject<OS_xpc_object>;

@interface AXUIMessageContext : NSObject {
    id _completion;
    BOOL _completionRequiresWritingBlock;
    void *_context;
    AXAccessQueue *_targetAccessQueue;
    NSObject<OS_xpc_object> *_xpcMessage;
}

@property(copy) id completion;
@property BOOL completionRequiresWritingBlock;
@property void* context;
@property(retain) AXAccessQueue * targetAccessQueue;
@property(retain) NSObject<OS_xpc_object> * xpcMessage;

- (id)completion;
- (BOOL)completionRequiresWritingBlock;
- (void*)context;
- (void)dealloc;
- (void)setCompletion:(id)arg1;
- (void)setCompletionRequiresWritingBlock:(BOOL)arg1;
- (void)setContext:(void*)arg1;
- (void)setTargetAccessQueue:(id)arg1;
- (void)setXpcMessage:(id)arg1;
- (id)targetAccessQueue;
- (id)xpcMessage;

@end
