//
//  UIImage+SuyiNavtive.h
//  ADSuyiSDKDemo-iOS
//
//  Created by SJQ on 2021/2/23.
//  Copyright © 2021 陈坤. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (SuyiNavtive)

+ (UIImage *)xcscore_imageNamed:(NSString *)name bundleName:(NSString *)bundleName className:(Class)className;

@end

NS_ASSUME_NONNULL_END
