//
//  JN_Const.h
//  JNBaseComponent_Example
//
//  Created by 钱海超 on 2018/12/5.
//  Copyright © 2018 953995648@qq.com. All rights reserved.
//

#ifndef JN_Const_h
#define JN_Const_h

// 屏幕的宽和高
#define  JN_ScreenW                             [UIScreen mainScreen].bounds.size.width
#define  JN_ScreenH                             [UIScreen mainScreen].bounds.size.height

// 判断是否为iPhone X
#define JN_iPhoneX \
({BOOL isPhoneX = NO;\
if (@available(iOS 11.0, *)) {\
isPhoneX = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.0;\
}\
(isPhoneX);})


// 状态栏的高度
#define  JN_StatusBarHeight                     (JN_iPhoneX ? 44.f : 20.f)

// 导航栏高度
#define  JN_NavigationBarHeight                  44.f

// Tabbar height.
#define  JN_TabbarHeight                        (JN_iPhoneX ? (49.f+34.f) : 49.f)

// Tabbar safe bottom margin.
#define  JN_TabbarSafeBottomMargin              (JN_iPhoneX ? 34.f : 0.f)

// Status bar & navigation bar height.
#define  JN_StatusBarAndNavigationBarHeight     (JN_iPhoneX ? 88.f : 64.f)

#define  JN_ViewSafeAreInsets(view)             ({UIEdgeInsets insets; if(@available(iOS 11.0, *)) {insets = view.safeAreaInsets;} else {insets = UIEdgeInsetsZero;} insets;})

#endif /* JN_Const_h */
