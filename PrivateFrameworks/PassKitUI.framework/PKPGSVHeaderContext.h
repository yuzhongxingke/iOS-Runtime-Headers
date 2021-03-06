/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPGSVHeaderContext : NSObject {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _headerMargins;
    UIView * _headerView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _subheaderMargins;
    UIView * _subheaderView;
}

@property (nonatomic, readonly) float headerHeight;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } headerMargins;
@property (nonatomic, readonly) UIView *headerView;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } subheaderMargins;
@property (nonatomic, readonly) UIView *subheaderView;
@property (nonatomic, readonly) float totalHeight;

+ (void)animateAppearanceForLayer:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)animateDisappearanceForLayer:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (id)createUpdatedHeaderContextForGroupStackView:(id)arg1 passType:(unsigned int)arg2 currentContext:(id)arg3 allowSubheader:(BOOL)arg4;

- (void).cxx_destruct;
- (float)_headerHeight;
- (float)_subheaderHeight;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForHeaderViewInContainerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForSubheaderViewInContainerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (unsigned int)hash;
- (float)headerHeight;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })headerMargins;
- (id)headerView;
- (id)init;
- (id)initWithHeaderView:(id)arg1 headerMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 subheaderView:(id)arg3 subheaderMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;
- (BOOL)isEqual:(id)arg1;
- (struct CGPoint { float x1; float x2; })positionForHeaderViewInContainerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })positionForSubheaderViewInContainerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHeaderMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSubheaderMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })subheaderMargins;
- (id)subheaderView;
- (float)totalHeight;

@end
