//
//  XCSAdSplashProtocol.h
//  ADSuyiSDKDemo-iOS
//
//  Created by kaifa on 2020/11/9.
//  Copyright © 2020 陈坤. All rights reserved.
//

#ifndef XCSAdSplashProtocol_h
#define XCSAdSplashProtocol_h

#import <UIKit/UIKit.h>

@protocol XCSAdSplashProtocol <NSObject>

- (void)XCSADSplashLoadSuccess:(id)splash;
- (void)XCSAdSplashLoadFail:(id)splash error:(NSError *)error;
- (void)XCSAdSplashExposed:(id)splash;
- (void)XCSAdSplashClicked:(id)splash;
- (void)XCSAdSplashClosed:(id)splash;

@end

@protocol XCSAdSplashLoaderProtocol <NSObject>

@required
@property (nonatomic, weak) id<XCSAdSplashProtocol> xcs_loadDelegate;

/// 通过参数实现加载过关
/// @param paramDict 包含广告加载的一些信息，比如
/// @param error 加载错误通过这个返回
- (void)loadAdWithParams:(NSDictionary *)paramDict error:(NSError **)error;

@end

#endif /* XCSAdSplashProtocol_h */
