//
//  SendVCodeParam.h
//  Let
//
//  Created by yzm on 16/5/18.
//  Copyright © 2016年 BroadLink Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SendVCodeParam : NSObject

/**
 *  手机号码或邮箱地址
 */
@property (nonatomic, strong, getter=getPhoneNumberOrEmail) NSString *phoneNumberOrEmail;

/**
 *  国家区域号
 */
@property (nonatomic, strong, getter=getCountryCode) NSString *countryCode;

/**
 *  验证码id
 */
@property (nonatomic, strong, getter=getCaptchaId) NSString *captchaId;

/**
 *  验证码内容
 */
@property (nonatomic, strong, getter=getCaptcha) NSString *captcha;


/**
 *  初始化并设置邮箱地址
 *
 *  @param email 邮箱地址
 *
 *  @return 实例化
 */
- (instancetype)initWithEmail:(NSString *)email;

/**
 *  初始化并设置邮箱地址
 *
 *  @param email 邮箱地址
 *  @param captchaId 图形验证码id
 *  @param captcha 图形验证码
 *  @return 实例化
 */
- (instancetype)initWithEmail:(NSString *)email
                    captchaId:(NSString *)captchaId
                      captcha:(NSString *)captcha;

/**
 *  初始化并设置手机号码以及手机号码所在国家区域号
 *
 *  @param phoneNumber 手机号码
 *  @param countryCode 国家区域号
 *
 *  @return 实例化
 */
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber
                        countryCode:(NSString *)countryCode;
/**
 *  初始化并设置手机号码以及手机号码所在国家区域号【带图形验证码接口】
 *
 *  @param phoneNumber 手机号码
 *  @param countryCode 国家区域号
 *  @param captchaId 图形验证码id
 *  @param captcha 图形验证码
 *
 *  @return 实例化
 */
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber
                        countryCode:(NSString *)countryCode
                          captchaId:(NSString *)captchaId
                            captcha:(NSString *)captcha;


@end
