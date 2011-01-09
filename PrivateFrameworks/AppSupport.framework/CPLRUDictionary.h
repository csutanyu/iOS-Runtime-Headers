/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class CPLRUDictionaryNode;



@interface CPLRUDictionary : NSObject 
{
    struct __CFDictionary { } *_dictionary;
    NSUInteger _maxCount;
    CPLRUDictionaryNode *_head;
    CPLRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(NSUInteger)arg1;

- (id)initWithMaximumCapacity:(NSUInteger)arg1;
- (id)description;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)allKeys;
- (NSUInteger)count;
- (void)removeAllObjects;
- (void)dealloc;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (void)_removeNode:(id)arg1;
- (void)_moveNodeToFront:(id)arg1;
- (void)_addNodeToFront:(id)arg1;
- (NSUInteger)linkedListCount;
- (id)allKeysInLRUOrder;
- (id)allValuesInLRUOrder;
- (id)objectForKeyWithoutAffectingLRU:(id)arg1;

@end