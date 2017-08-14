//
//  ImageBrowserView.h
//  dlcat
//
//  Created by 王克 on 2017/8/14.
//  Copyright © 2017年 王克. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WKImageBrowserView : UIView<UIScrollViewDelegate>
// 下标
@property (nonatomic, strong) UILabel * indexLbl;
//图片数组
@property (nonatomic, strong) NSArray * imageArr;
// 创建图片浏览器
- (instancetype)initWithImageArr:(NSArray *)imags andTag:(NSInteger)index;
// 显示图片浏览器
- (void)show;

@end
