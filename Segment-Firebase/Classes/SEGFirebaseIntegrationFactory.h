#import <Foundation/Foundation.h>
#if SWIFT_PACKAGE
#import "Analytics.h"
#else
#import <Analytics/SEGIntegrationFactory.h>
#endif


@interface SEGFirebaseIntegrationFactory : NSObject <SEGIntegrationFactory>

+ (instancetype)instance;

@end
