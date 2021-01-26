//
//  XCSAdSDK.h
//  ADSuyiSDKDemo-iOS
//
//  Created by kaifa on 2020/7/27.
//  Copyright © 2020 陈坤. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XCSAdBannerProtocol.h"
#import "XCSAdTemplateNativeProtocol.h"
#import "XCSAdSplashProtocol.h"
#import "XCSAdRewardvodProtocol.h"
#import "XCSAdIntertitialProtocol.h"

NS_ASSUME_NONNULL_BEGIN

/// 广告加载配置
@interface XCSAdLoader : NSObject

/// 广告加载中间件
@property (nonatomic, assign) Class loaderClazz;
/// 自己家广告位置 id
@property (nonatomic, copy) NSString *positionId;
/// 真实的广告位置 id
@property (nonatomic, copy) NSString *realPosid;
/// 广告平台
@property (nonatomic, copy) NSString *platform;

@end


/// 广告 SDK 注册中心
@interface XCSAdSDK : NSObject

+ (instancetype)shareInst;

- (void)registerBannerLoaderClass:(Class <XCSADBannerLoaderProtocol>) clazz;
- (void)registerTemplateNativeLoaderClass:(Class <XCSAdTemplateNativeProtocol>) clazz;
- (void)registerSplshadLoaderClass:(Class<XCSAdSplashProtocol>)clazz;
- (void)registerRewardvodLoaderClass:(Class<XCSAdRewardvodProtocol>)clazz;
- (void)registerIntertitialadLoaderClass:(Class<XCSAdIntertitialProtocol>)clazz;

- (XCSAdLoader *)bannerLoaderWithPosid:(NSString *)posid;
- (XCSAdLoader *)infoLoaderWithPosid:(NSString *)posid;
- (XCSAdLoader *)splashLoaderWithPosid:(NSString *)posid;
- (XCSAdLoader *)rewardvodLoaderWithPosid:(NSString *)posid;
- (XCSAdLoader *)intertitialadLoaderWithPosid:(NSString *)posid;

@end

NS_ASSUME_NONNULL_END
