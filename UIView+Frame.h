//
//  UIView+Frame.h
//  传智微博
//
//  Created by apple on 15-3-5.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)
// 分类不能添加成员属性
// @property如果在分类里面，只会自动生成get,set方法的声明，不会生成成员属性，和方法的实现
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;


@property (nonatomic, assign) CGFloat top;
@property (nonatomic, assign) CGFloat bottom;
@property (nonatomic, assign) CGFloat right;
@property (nonatomic, assign) CGFloat left;

@property (assign, nonatomic) CGFloat mj_x;
@property (assign, nonatomic) CGFloat mj_y;
@property (assign, nonatomic) CGFloat mj_w;
@property (assign, nonatomic) CGFloat mj_h;
@property (assign, nonatomic) CGSize mj_size;
@property (assign, nonatomic) CGPoint mj_origin;

/*  水平方向最大值
*/
@property (nonatomic, assign, readonly) CGFloat maxX;

/**
 *  垂直方向最大值
 */
@property (nonatomic, assign, readonly) CGFloat maxY;

/**
 *  水平中间点
 */
@property (nonatomic, assign, readonly) CGFloat midX;

/**
 *  垂直中间点
 */
@property (nonatomic, assign, readonly) CGFloat midY;

@end
