//
//  XCSAdIntertitialProtocol.h
//  ADSuyiSDKDemo-iOS
//
//  Created by SJQ on 2021/1/26.
//  Copyright © 2021 陈坤. All rights reserved.
//

#ifndef XCSAdIntertitialProtocol_h
#define XCSAdIntertitialProtocol_h
#import <UIKit/UIKit.h>

@protocol XCSAdIntertitialProtocol <NSObject>

/**
请求成功回调
*/
- (void)XCSinterstitialAdSuccedToLoad:(id)interstitialAd;

/**
请求失败回调
*/
- (void)XCSinterstitialAdFailedToLoad:(id)interstitialAd error:(id)error;

/**
展示在屏幕内回调
*/
- (void)XCSinterstitialAdDidPresent:(id)interstitialAd;

/**
展示在屏幕内失败回调
*/
- (void)XCSinterstitialAdFailedToPresent:(id)interstitialAd error:(NSError *)error;

/**
点击回调
*/
- (void)XCSinterstitialAdDidClick:(id)interstitialAd;

/**
关闭回调
*/
- (void)XCSinterstitialAdDidClose:(id)interstitialAd;

/**
展示回调
 */
- (void)XCSinterstitialAdExposure:(id)interstitialAd;

@end

@protocol XCSAdIntertitialLoaderProtocol <NSObject>

@required
@property (nonatomic, weak) id<XCSAdIntertitialProtocol> xcs_loadDelegate;

/// 通过参数实现加载过关
/// @param paramDict 包含广告加载的一些信息，比如
/// @param error 加载错误通过这个返回
- (void)loadAdWithParams:(NSDictionary *)paramDict error:(NSError **)error;

/// 展示广告
- (void)show;

@end


#endif /* XCSAdIntertitialProtocol_h */
