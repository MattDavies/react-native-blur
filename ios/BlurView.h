#import <UIKit/UIKit.h>

@interface BlurView : UIView

@property (nonatomic, copy) NSString *blurType;
@property (nonatomic, copy) NSNumber *blurAmount;
@property (nonatomic) BOOL blurEnabled;

@end
