/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class AYOperation;



@interface _AYOperationEndWaiter : NSObject 
{
    AYOperation *_operation;
    BOOL _finished;
}


- (void)operationEnded:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (void)wait;
- (void)dealloc;

@end