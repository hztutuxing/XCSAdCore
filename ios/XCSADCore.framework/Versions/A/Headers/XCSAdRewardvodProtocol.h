//
//  XCSAdRewardvodProtocol.h
//  ADSuyiSDKDemo-iOS
//
//  Created by kaifa on 2020/11/10.
//  Copyright © 2020 陈坤. All rights reserved.
//

#ifndef XCSAdRewardvodProtocol_h
#define XCSAdRewardvodProtocol_h


#import <UIKit/UIKit.h>

@protocol XCSAdRewardvodProtocol <NSObject>

/**
 广告数据加载成功回调
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdLoadSuccess:(id)rewardvodAd;

/**
 激励视频广告准备好被播放
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdReadyToPlay:(id)rewardvodAd;

/**
 视频数据下载成功回调，已经下载过的视频会直接回调
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdVideoLoadSuccess:(id)rewardvodAd;
/**
 视频播放页即将展示回调
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdWillVisible:(id)rewardvodAd;
/**
 视频广告曝光回调
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdDidVisible:(id)rewardvodAd;
/**
 视频播放页关闭回调
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdDidClose:(id)rewardvodAd;
/**
 视频广告信息点击回调
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdDidClick:(id)rewardvodAd;
/**
 视频广告视频播放完成
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdDidPlayFinish:(id)rewardvodAd;

/**
 视频广告视频达到奖励条件
 
 @param rewardvodAd 广告实例
 */
- (void)XCSRewardvodAdDidRewardEffective:(id)rewardvodAd;

/**
 视频广告请求失败回调
 
 @param rewardvodAd 广告实例
 @param errorModel 具体错误信息
 */
- (void)XCSRewardvodAdFailToLoad:(id)rewardvodAd error:(NSError *)errorModel;

/**
 视频广告播放时各种错误回调
 
 @param rewardvodAd 广告实例
 @param errorModel 具体错误信息
 */
- (void)XCSRewardvodAdPlaying:(id)rewardvodAd error:(NSError *)errorModel;

@end

@protocol XCSAdRewardvodLoaderProtocol <NSObject>

@required
@property (nonatomic, weak) id<XCSAdRewardvodProtocol> xcs_loadDelegate;

/// 通过参数实现加载过关
/// @param paramDict 包含广告加载的一些信息，比如
/// @param error 加载错误通过这个返回
- (void)loadAdWithParams:(NSDictionary *)paramDict error:(NSError **)error;

/**
 激励视频广告是否准备好
 */
- (BOOL)rewardvodAdIsReady;

/**
 展示激励视频广告
 */
- (void)showRewardvodAd;

@end

#endif /* XCSAdRewardvodProtocol_h */
