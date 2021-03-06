//
//  UIDevice+NBExtend.h
//  NBBaseFrameCode
//
//  Created by NapoleonBai on 16/10/14.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

//ios系统版本
#define current_device_version [[[UIDevice currentDevice] systemVersion] floatValue]

#define IOS_11_LATER  current_device_version >= 11.0f
#define IOS_10_X current_device_version >= 10.0f && current_device_version < 11.0f
#define IOS_10_LATER  current_device_version >= 10.0f
#define IOS_9_X current_device_version >= 9.0f && current_device_version < 10.0f
#define IOS_9_LATER current_device_version >= 9.0f
#define IOS_8_X current_device_version >= 8.0f && current_device_version < 9.0f
#define iOS_8_LATER current_device_version>= 8.0f
#define IOS_7_X current_device_version >= 7.0f && current_device_version < 8.0f
#define IOS_7_LATER current_device_version >= 7.0f

// iPhone 4 / 4s
#define IPHONE_3_5 ([UIScreen mainScreen].bounds.size.height==480.0f)
// iPhone 5 / 5s
#define IPHONE_4_0 ([UIScreen mainScreen].bounds.size.height==568.0f)
// iPhone 6/7/8
#define IPHONE_4_7 ([UIScreen mainScreen].bounds.size.height==667.0f)
// iPhone * plus
#define IPHONE_5_5 ([UIScreen mainScreen].bounds.size.height==736.0f || [UIScreen mainScreen].bounds.size.height==414.0f)
//2436px × 1125px (812pt × 375pt @3x) iPhone X
#define IPHONE_5_8 ([UIScreen mainScreen].bounds.size.height==812.0f || [UIScreen mainScreen].bounds.size.height==375.0f)

@interface UIDevice (NBExtend)


@end
