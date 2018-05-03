

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


/**
 image
 
 @param pointer nameString
 @return iamge
 */
#define TImageNamed(pointer) [UIImage imageNamed:[UIUtil imageName:pointer］



//Height
#define TScreenHeight ([UIScreen mainScreen].applicationFrame.size.height)

//Width
#define TScreenWidth ([UIScreen mainScreen].applicationFrame.size.width)


/**
 *  Release  NSLog
 *
 *  @param ...
 *
 *  @return
 */
#ifndef __OPTIMIZE__
#    define NSLog(...) NSLog(__VA_ARGS__)
#else
#    define NSLog(...) {}
#endif

#endif /* Common_h */
