//
//  XCSAdRewardvod.h
//  ADSuyiSDKDemo-iOS
//
//  Created by kaifa on 2020/11/10.
//  Copyright © 2020 陈坤. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class XCSAdRewardvod;
@protocol XCSAdRewardvodDelegate <NSObject>

/**
 广告数据加载成功回调
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdLoadSuccess:(XCSAdRewardvod *)rewardvodAd;

/**
 激励视频广告准备好被播放
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdReadyToPlay:(XCSAdRewardvod *)rewardvodAd;

/**
 视频数据下载成功回调，已经下载过的视频会直接回调
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdVideoLoadSuccess:(XCSAdRewardvod *)rewardvodAd;
/**
 视频播放页即将展示回调
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdWillVisible:(XCSAdRewardvod *)rewardvodAd;
/**
 视频广告曝光回调
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdDidVisible:(XCSAdRewardvod *)rewardvodAd;
/**
 视频播放页关闭回调
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdDidClose:(XCSAdRewardvod *)rewardvodAd;
/**
 视频广告信息点击回调
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdDidClick:(XCSAdRewardvod *)rewardvodAd;
/**
 视频广告视频播放完成
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdDidPlayFinish:(XCSAdRewardvod *)rewardvodAd;

/**
 视频广告视频达到奖励条件
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdDidRewardEffective:(XCSAdRewardvod *)rewardvodAd;

/**
 视频广告请求失败回调
 
 @param rewardvodAd 广告实例
 @param errorModel 具体错误信息
 */
- (void)XCSRewardvodAdFailToLoad:(XCSAdRewardvod *)rewardvodAd error:(NSError *)errorModel;

/**
 视频广告播放时各种错误回调
 
 @param rewardvodAd 广告实例
 @param errorModel 具体错误信息
 */
- (void)XCSRewardvodAdPlaying:(XCSAdRewardvod *)rewardvodAd error:(NSError *)errorModel;


@end

@interface XCSAdRewardvod : NSObject

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
 代理回调
 */
@property (nonatomic, weak) id<XCSAdRewardvodDelegate> delegate;

/**
加载激励视频广告
*/
- (void)loadRewardvodAd;

/**
 激励视频广告是否准备好
 */
- (BOOL)rewardvodAdIsReady;

/**
 展示激励视频广告
 */
- (void)showRewardvodAd;

@end

NS_ASSUME_NONNULL_END
