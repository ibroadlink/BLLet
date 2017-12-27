//
//  BLLog.h
//  Let
//
//  Created by uuu on 16/6/12.
//  Copyright © 2016年 BroadLink Co., Ltd. All rights reserved.
//

#ifndef BLLog_h
#define BLLog_h

#define BLLogError(frmt, ...)    do{ NSLog((@"[BLLet ERROR]"frmt), ##__VA_ARGS__); } while(0)
#define BLLogWarn(frmt, ...)     do{ NSLog((@"[BLLet WARN]"frmt), ##__VA_ARGS__); } while(0)
#define BLLogDebug(frmt, ...)    do{ NSLog((@"[BLLet DEBUG]"frmt), ##__VA_ARGS__); } while(0)
#define BLLogVerbose(frmt, ...)  do{ NSLog((@"[BLLet VERBOSE]"frmt), ##__VA_ARGS__); } while(0)

#endif /* BLLog_h */
