//
//  GHDShop.h
//  GrouponHD
//
//  Created by Frankenstein Yang on 1/17/15.
//  Copyright (c) 2015 Frankenstein Yang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GHDShop : NSObject

/** 商户名 */
@property (copy, nonatomic) NSString *name;
/** 商户ID */
@property (copy, nonatomic) NSString *ID;
/** 商户城市 */
@property (copy, nonatomic) NSString *city;

/** 纬度 */
@property (assign, nonatomic) float latitude;
/** 经度 */
@property (assign, nonatomic) float longitude;

/** 商户页面链接，适用于网页应用 */
@property (copy, nonatomic) NSString *url;
/** 商户HTML5页面链接，适用于移动应用和联网车载应用 */
@property (copy, nonatomic) NSString *h5_url;

/** 商户地址 */
@property (copy, nonatomic) NSString *address;

@end
