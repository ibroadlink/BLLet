//
//  BLQueryIRCodeParams.h
//  Let
//
//  Created by junjie.zhu on 2017/1/23.
//  Copyright © 2017年 BroadLink Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

/*按键类型*/
typedef NS_ENUM(NSUInteger, BL_AC_KEY_E) {
    BL_AC_KEY_SWITCH,      /*开关键*/
    BL_AC_KEY_MODE,        /*模式键*/
    BL_AC_KEY_TEMP_ADD,    /*温度加键*/
    BL_AC_KEY_TEMP_SUB,    /*温度减键*/
    BL_AC_KEY_WIND_SPPED   /*风速键*/
};

@interface BLQueryIRCodeParams : NSObject

//按键(新lua⽆需这个, 可输入任意值, 定 0)
@property(nonatomic, assign)BL_AC_KEY_E key;
//频率 (固定为 38)
@property(nonatomic, assign)NSUInteger freq;
//开关 (0: 关, 1: 开)
@property(nonatomic, assign)NSUInteger state;
//模式 (0: 自动, 1: 制冷, 2: 除湿, 3: 通⻛, 4: 制热)
@property(nonatomic, assign)NSUInteger mode;
//风速 (0: ⾃动, 1: 低, 2: 中, 3: ⾼)
@property(nonatomic, assign)NSUInteger speed;
//上下扫风 (0: 关闭, 1: ⾃动, 2: 固定风向1, 3: 固定⻛向2, 4: 固定风向3, 5: 固定风向4, 6: 固定风向5)
@property(nonatomic, assign)NSUInteger direct;
//温度 (16度-30度)
@property(nonatomic, assign)NSUInteger temperature;
//左右扫风 (0: 关闭, 1: ⾃动, 2: 固定风向1, 3: 固定风向2, 4: 固定风向3, 5: 固定风向4, 6: 固定风向5)
@property(nonatomic, assign)NSUInteger left_right_direct;
//负离⼦子 (0: 关闭, 1: 打开)
@property(nonatomic, assign)NSUInteger anion;
//睡眠 (0: 关闭, 1: 打开)
@property(nonatomic, assign)NSUInteger sleep;
//速冷 (0: 关闭, 1: 打开)
@property(nonatomic, assign)NSUInteger quick_cool;
//速热 (0: 关闭, 1: 打开)
@property(nonatomic, assign)NSUInteger quick_heat;
//辅热 (0: 关闭, 1: 打开)
@property(nonatomic, assign)NSUInteger assist_heat;
//静⾳音 (0: 关闭, 1: 打开)
@property(nonatomic, assign)NSUInteger mute;
//童锁 (0: 关闭, 1: 打开)
@property(nonatomic, assign)NSUInteger child_lock;
//节能 (0: 关闭, 1: 打开)
@property(nonatomic, assign)NSUInteger eco;
//屏显 (0: 关闭, 1: 打开)
@property(nonatomic, assign)NSUInteger screen;

@end
