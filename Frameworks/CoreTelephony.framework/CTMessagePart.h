/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSData, NSString, NSMutableDictionary;



@interface CTMessagePart : NSObject 
{
    NSString *_contentType;
    NSMutableDictionary *_contentTypeParams;
    NSString *_contentId;
    NSString *_contentLocation;
    NSData *_data;
}

@property(copy) NSData *data;
@property(copy) NSString *contentLocation;
@property(copy) NSString *contentId;
@property(copy) NSString *contentType;


- (id)data;
- (void)dealloc;
- (id)contentType;
- (void)setData:(id)arg1;
- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)contentTypeParameterWithName:(id)arg1;
- (id)allContentTypeParameterNames;
- (void)setContentType:(id)arg1;
- (id)contentLocation;
- (void)setContentLocation:(id)arg1;
- (id)contentId;
- (void)setContentId:(id)arg1;

@end