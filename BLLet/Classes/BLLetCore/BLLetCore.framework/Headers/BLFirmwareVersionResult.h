//
//  FirmwareVersionResult.h
//  Let
//
//  Created by yzm on 16/5/17.
//  Copyright © 2016年 BroadLink Co., Ltd. All rights reserved.
//

#import <BLLetBase/BLLetBase.h>

@interface BLFirmwareVersionResult : BLBaseResult

///云端设备更新信息
@property (nonatomic, copy) NSDictionary *serverversion;

/// 模块固件版本号
@property (nonatomic, copy, getter=getVersion) NSString *version;

/// 电控版本号
@property (nonatomic, copy) NSString *mcuVersion;

@end
