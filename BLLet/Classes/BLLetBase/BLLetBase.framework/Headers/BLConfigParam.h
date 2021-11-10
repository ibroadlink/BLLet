//
//  ConfigParam.h
//  Let
//
//  Created by yzm on 16/5/13.
//  Copyright © 2016年 BroadLink Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BLConstants.h"

@interface BLConfigParam : NSObject

/**
 Get Global Config Settings
 
 @return Global Config Params Instance object
 */
+ (instancetype)sharedConfigParam;

/** Get License from BroadLink Co., Ltd. */
@property (nonatomic, copy) NSString *sdkLicense;

/** APP Package Name (Bundle ID)**/
@property (nonatomic, copy) NSString *packName;

/** Get Company ID */
@property (nonatomic, copy) NSString *companyId;

/** Get License ID */
@property (nonatomic, copy) NSString *licenseId;

/** Get login user ID */
@property (nonatomic, copy) NSString *userid;

/** Get login user session */
@property (nonatomic, copy) NSString *loginSession;

/** Get login user family ID */
@property (nonatomic, copy) NSString *familyId;

/** APPService Enable , default 0 */
@property (nonatomic, assign, getter=getAppServiceEnable) NSUInteger appServiceEnable;

/** Global Http timeout, default 30000ms */
@property (nonatomic, assign, getter=getHttpTimeout) NSUInteger httpTimeout;

/** Account Http request host base url */
@property (nonatomic, copy, getter=getAccountHost) NSString *accountHost;

/** APP Manage Http request host base url */
@property (nonatomic, copy, getter=getAppManageHost) NSString *appManageHost;

/** IRCode Http request host base url */
@property (nonatomic, copy, getter=getIRCodeHost) NSString *iRCodeHost;

/** Family Http request host base url */
@property (nonatomic, copy, getter=getFamilyHost) NSString *familyHost;

/** FamilyPrivate Http request host base url */
@property (nonatomic, copy, getter=getFamilyPrivateHost) NSString *familyPrivateHost;

/** Data Service Http request host base url */
@property (nonatomic, copy, getter=getDataServiceHost) NSString *dataServiceHost;

/** Picker Http request host base url */
@property (nonatomic, copy, getter=getPickerHost) NSString *pickerHost;

/** CloudTime Http request host base url */
@property (nonatomic, copy, getter=getCloudHost) NSString *cloudHost;

/** Oauth Http request host base url */
@property (nonatomic, copy, getter=getOauthHost) NSString *oauthHost;

/** App Service Http request host base url */
@property (nonatomic, copy, getter=getAppServiceHost) NSString *appServiceHost;

/** APP Controler store script and ui path, default in ./Let/ */
@property (nonatomic, copy, getter=getSdkFileSavePath) NSString *sdkFileSavePath;

/** APP Controler store script path*/
@property (nonatomic, copy, readonly) NSString *scriptStorePath;

/** APP Controler store ui path*/
@property (nonatomic, copy, readonly) NSString *uiStorePath;

/** APP Controler store ircode gz path*/
@property (nonatomic, copy, readonly) NSString *ircodeStorePath;

/** APP Controler probe devices timeout, default 3000ms */
@property (nonatomic, assign, getter=getControllerProbeInterval) NSUInteger controllerProbeInterval;

/** APP Controler control devices timeout in lan, default 2000ms*/
@property (nonatomic, assign, getter=getControllerLocalTimeout) NSUInteger controllerLocalTimeout;

/** APP Controler control devices timeout in wan, default 4000ms*/
@property (nonatomic, assign, getter=getControllerRemoteTimeout) NSUInteger controllerRemoteTimeout;

/** APP Controler control devices netmode, default BL_NET_DEFAULT */
@property (nonatomic, assign, getter=getControllerNetMode) BLDeviceNetModeEnum controllerNetMode;

/* APP Controler SDK support other device control protocol **/
@property (nonatomic, assign) BLDeviceSupportProtocolEnum controllerSupportProtocol;

/** APP Controler control devices send package count, default 1 */
@property (nonatomic, assign, getter=getControllerSendCount) NSUInteger controllerSendCount;

/** APP Controler easyconfig timeout - set device wifi ssid and password timeout, default 75s */
@property (nonatomic, assign, getter=getControllerEasyConfigTimeout) NSUInteger controllerEasyConfigTimeout;

/** APP Download address whether to use the new platform , default 0 */
@property (nonatomic, assign, getter=getControllerScriptDownloadVersion) NSUInteger controllerScriptDownloadVersion;

/// APP Controler auto query device status on server. default true
@property (nonatomic, assign) BOOL controllerAutoQueryDeviceStatus;

/* Device Pair serInfo **/
@property (nonatomic, copy) NSDictionary *deviceConnectServiceInfo;

/* BLPicker Data report count, default 20 **/
@property (nonatomic, assign) NSUInteger dataReportCount;

/* Login Mutex, default false **/
@property (nonatomic, assign) BOOL isLoginMutexMode;

/* Add Http Head **/
@property (nonatomic, copy) NSDictionary *httpCommonHeader;

/// 增加上报信息
/// @param info 上报信息
- (void)addInfoToUpload:(NSDictionary *)info;

/// 获取上报信息的Base数据
- (NSString *)queryUploadInfo;

@end
