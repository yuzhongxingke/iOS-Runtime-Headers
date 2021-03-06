/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteArrayChange : NSArrayChange {
    unsigned int  _changeType;
    unsigned int  _destinationIndex;
    unsigned int  _sourceIndex;
    id  _value;
}

- (unsigned int)changeType;
- (void)dealloc;
- (unsigned int)destinationIndex;
- (id)initWithType:(unsigned int)arg1 sourceIndex:(unsigned int)arg2 destinationIndex:(unsigned int)arg3 value:(id)arg4;
- (unsigned int)sourceIndex;
- (id)value;

@end
