//
//  XCSAdIntertitialvod.h
//  ADSuyiSDKDemo-iOS
//
//  Created by SJQ on 2021/1/26.
//  Copyright © 2021 陈坤. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class XCSAdIntertitialvod;
@protocol XCSIntertitialAdDelegate <NSObject>

/**
请求成功回调
*/
- (void)XCSinterstitialAdSuccedToLoad:(XCSAdIntertitialvod *)interstitialAd;

/**
请求失败回调
*/
- (void)XCSinterstitialAdFailedToLoad:(XCSAdIntertitialvod *)interstitialAd error:(id)error;

/**
展示在屏幕内回调
*/
- (void)XCSinterstitialAdDidPresent:(XCSAdIntertitialvod *)interstitialAd;

/**
展示在屏幕内失败回调
*/
- (void)XCSinterstitialAdFailedToPresent:(XCSAdIntertitialvod *)interstitialAd error:(NSError *)error;

/**
点击回调
*/
- (void)XCSinterstitialAdDidClick:(XCSAdIntertitialvod *)interstitialAd;

/**
关闭回调
*/
- (void)XCSinterstitialAdDidClose:(XCSAdIntertitialvod *)interstitialAd;

/**
展示回调
 */
- (void)XCSinterstitialAdExposure:(XCSAdIntertitialvod *)interstitialAd;

@end


@interface XCSAdIntertitialvod : NSObject

@property (nonatomic, weak) id<XCSIntertitialAdDelegate> delegate;
@property (nonatomic, weak) UIViewController *vc;
@property (nonatomic, assign) NSInteger tolerateTimeout;
@property (nonatomic, copy) NSString *posId;

- (void)loadIntertiticalad;

- (void)show;

@end

NS_ASSUME_NONNULL_END
