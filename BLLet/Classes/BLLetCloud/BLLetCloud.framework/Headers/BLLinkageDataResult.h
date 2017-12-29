//
//  BLLinkageDataResult.h
//  Let
//
//  Created by 白洪坤 on 2017/12/20.
//  Copyright © 2017年 BroadLink Co., Ltd. All rights reserved.
//

#import <BLLetBase/BLBaseResult.h>
#import "BLCModuleInfo.h"

@interface BLDevinfo : NSObject
- (instancetype)initWithDictionary:(NSDictionary *)dic;

@property (nonatomic, strong, getter=getDid) NSString *did;
@property (nonatomic, strong, getter=getPid) NSString *pid;
@property (nonatomic, strong, getter=getSdid) NSString *sdid;
@property (nonatomic, strong, getter=getSpid) NSString *spid;
@property (nonatomic, strong, getter=getAeskey) NSString *aeskey;
@property (nonatomic, assign, getter=getTerminalid) NSUInteger terminalid;
@property (nonatomic, assign, getter=getRelatestatus) NSUInteger relatestatus;
@end


@interface BLLinkageDataResult : BLBaseResult
@property (nonatomic, strong) NSArray *devinfo;
@property (nonatomic, strong) NSArray *linkages;
@property (nonatomic, strong) NSArray *modules;
@end
