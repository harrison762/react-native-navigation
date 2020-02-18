#import <Foundation/Foundation.h>
#import "TransitionDetailsOptions.h"
#import "DisplayLinkAnimation.h"
#import "RNNInterpolator.h"

@interface ElementBaseTransition : NSObject <DisplayLinkAnimation>

- (instancetype)initWithView:(UIView *)view startDelay:(NSTimeInterval)startDelay duration:(NSTimeInterval)duration interpolation:(Text *)interpolation;

- (CGFloat)defaultDuration;

@property (readonly, strong) UIView* view;
@property (readonly, nonatomic) NSTimeInterval startDelay;
@property (readonly, nonatomic) NSTimeInterval duration;

@end
