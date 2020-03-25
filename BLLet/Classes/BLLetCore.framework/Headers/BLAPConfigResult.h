//
//  BLAPConfigResult.h
//  Let
//
//  Created by zhujunjie on 2017/7/25.
//  Copyright © 2017年 BroadLink Co., Ltd. All rights reserved.
//

#import <BLLetBase/BLLetBase.h>

typedef NS_ENUM(NSUInteger, BLAPConfigProtocolEnum) {
    /** 普通AP配置 */
    BL_AP_CONFIG_DEFAULT = 0,
    /** 加密方式AP配置*/
    BL_AP_CONFIG_ENCRYPT,
    /** AUX定制协议AP配置 */
    BL_AP_CONFIG_AUX,
};

@interface BLAPConfigResult : BLBaseResult

@property (nonatomic, copy) NSString *mac;      //设备MAC地址
@property (nonatomic, copy) NSString *did;      //设备唯一did
@property (nonatomic, copy) NSString *pid;      //设备的产品ID
@property (nonatomic, copy) NSString *ssid;     //设备所连接Wi-Fi SSID
@property (nonatomic, copy) NSString *devkey;   //设备控制密钥

@end
