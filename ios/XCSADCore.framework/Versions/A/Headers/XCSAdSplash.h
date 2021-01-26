//
//  XCSAdSplashAd.h
//  ADSuyiSDKDemo-iOS
//
//  Created by kaifa on 2020/11/9.
//  Copyright © 2020 陈坤. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class XCSAdSplash;

@protocol XCSAdSplashAdDelegate <NSObject>

/**
 开屏展现成功
 
 @param splashAd 广告实例
 */
- (void)XCSSplashAdSuccessToPresentScreen:(XCSAdSplash *)splashAd;

/**
 开屏展现失败
 
 @param splashAd 广告实例
 @param error 具体错误信息
 */
- (void)XCSSplashAdFailToPresentScreen:(XCSAdSplash *)splashAd error:(NSError *)error;

/**
 开屏广告点击
 
 @param splashAd 广告实例
 */
- (void)XCSSplashAdClicked:(XCSAdSplash *)splashAd;

/**
 开屏被关闭
 
 @param splashAd 广告实例
 */
- (void)XCSSplashAdClosed:(XCSAdSplash *)splashAd;

/**
 开屏展示
 
 @param splashAd 广告实例
 */
- (void)XCSSplashAdExposed:(XCSAdSplash *)splashAd;

@end

@interface XCSAdSplash : NSObject

@property (nonatomic, weak) id<XCSAdSplashAdDelegate> delegate;

/*
viewControllerForPresentingModalView
详解：[必选]开发者需传入用来弹出目标页的ViewController，一般为当前ViewController
*/
@property (nonatomic, weak) UIViewController *vc;

/**
 广告位id
*/
@property (nonatomic, copy) NSString *posId;

/**
加载开屏广告

@param window 开屏广告展示的window
@param bottomView 底部logo视图, 高度不能超过屏幕的25%, 建议: 开屏的广告图片默认640 / 960比例, 可以用 MIN(screenHeight - screenWidth * (960 / 640.0), screenHeight * 0.25) 得出bottomview的高度
*/
- (void)loadAndShowInWindow:(UIWindow *)window withBottomView:(nullable UIView *)bottomView;

/**
加载开屏广告

@param window 开屏广告展示的window
*/
- (void)loadAndShowInWindow:(UIWindow *)window;

@end

NS_ASSUME_NONNULL_END
