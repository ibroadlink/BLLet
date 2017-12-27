//
//  BLNetworkImp.h
//  Let
//
//  Created by junjie.zhu on 2016/11/17.
//  Copyright © 2016年 BroadLink Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLNetworkImp : NSObject

/**
 获取当前连接WiFi列表信息

 @return WiFi列表信息
 */
+ (NSArray *)getCurrentWifiList;

/**
 *  获取当前连接的Wi-Fi的SSID
 *
 *  @return SSID
 */
+ (NSString *)getCurrentSSIDInfo;

/**
 *  域名解析
 *
 *  @param host 域名
 *
 *  @return ip地址
 */
+ (NSString *)getIpAddrFromHost:(NSString *)host;


/**
 *  获取当前网关地址
 *
 *  @return address
 */
+ (NSString *)getCurrentGatewayAddress;


@end
