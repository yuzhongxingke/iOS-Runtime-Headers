/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITapticEngine : NSObject {
    BOOL  _feedbackActivated;
    _UIFeedbackStatesBehavior * _feedbackBehavior;
}

@property (nonatomic) BOOL feedbackActivated;
@property (nonatomic, retain) _UIFeedbackStatesBehavior *feedbackBehavior;

- (void).cxx_destruct;
- (id)_stateForFeedback:(int)arg1;
- (void)actuateFeedback:(int)arg1;
- (void)endUsingFeedback:(int)arg1;
- (BOOL)feedbackActivated;
- (id)feedbackBehavior;
- (id)init;
- (void)prepareUsingFeedback:(int)arg1;
- (void)setFeedbackActivated:(BOOL)arg1;
- (void)setFeedbackBehavior:(id)arg1;

@end
