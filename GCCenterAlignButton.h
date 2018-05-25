//
//  GCCenterAlignButton.h
//
//  Created by chinachong on 2016/11/3.
//  Copyright © 2016年 ChinaChong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GCCenterAlignButton : UIButton
// 给定图片到文字的间距 即可实现图在上文字在下
- (void)verticalImageAndTitle:(CGFloat)spacing;
@end
