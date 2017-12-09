//
//  BLPOAuthResult.h
//  Let
//
//  Created by zhujunjie on 2017/8/1.
//  Copyright © 2017年 BroadLink Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLPOAuthResult : NSObject

@property (nonatomic, assign, getter=getError) NSInteger error;

@property (nonatomic, strong, getter=getMsg) NSString *msg;

@property (nonatomic, copy) NSString *accessToken;

@property (nonatomic, assign) NSInteger expires;

/**
 Judge result is success or not.
 
 @return Success or not.
 */
- (Boolean)succeed;

@end
