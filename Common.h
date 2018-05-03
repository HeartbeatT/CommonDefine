

#ifndef Common_h
#define Common_h


#ifndef Common_h
#define Common_h




/**
 singleton
 
 @param OB classname
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
\
\
+(id) allocWithZone:(struct _NSZone *)zone {\
\
return [self sharedManager];\
\
}\
\
\
\
- (id)copyWithZone:(NSZone *)zone\
{\
return self;\
}\
\
\
- (id)mutableCopyWithZone:(NSZone *)zone\
{\
return self;\
}\




#endif /* Common_h */
