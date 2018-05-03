//
//  Common.h
//  MCSingleton
//
//  Created by 张小帅 on 2018/5/3.
//  Copyright © 2018年 MC. All rights reserved.
//

#ifndef Common_h
#define Common_h




/**
 单例

 @param OB 类名
 @return
 */
#define sharedManager(OB)   +(OB*)sharedManager;
#define SHAREDManager(OB) \
static OB *sharedInstance = nil;\
+ (OB *)sharedManager\
{\
    static dispatch_once_t oneT;\
    dispatch_once(&oneT, ^{\
        sharedInstance = [super allocWithZone:NULL];\
    });\
    return sharedInstance;\
}\



#endif /* Common_h */
