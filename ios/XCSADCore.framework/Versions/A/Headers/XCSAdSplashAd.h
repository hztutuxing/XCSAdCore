//
//  XCSAdSplashAd.h
//  ADSuyiSDKDemo-iOS
//
//  Created by kaifa on 2020/11/9.
//  Copyright © 2020 陈坤. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class XCSAdSplash;

@protocol XCSAdSplashAdDelegate <NSObject>

/**
 开屏展现成功
 
 @param splashAd 广告实例
 */
- (void)xcs_splashAdSuccessToPresentScreen:(XCSAdSplash *)splashAd;

/**
 开屏展现失败
 
 @param splashAd 广告实例
 @param error 具体错误信息
 */
- (void)xcs_splashAdFailToPresentScreen:(XCSAdSplash *)splashAd error:(NSError *)error;

/**
 开屏广告点击
 
 @param splashAd 广告实例
 */
- (void)xcs_splashAdClicked:(XCSAdSplash *)splashAd;

/**
 开屏被关闭
 
 @param splashAd 广告实例
 */
- (void)xcs_splashAdClosed:(XCSAdSplash *)splashAd;

/**
 开屏展示
 
 @param splashAd 广告实例
 */
- (void)xcs_splashAdEffective:(XCSAdSplash *)splashAd;

@end

@interface XCSAdSplash : NSObject

@end

NS_ASSUME_NONNULL_END
