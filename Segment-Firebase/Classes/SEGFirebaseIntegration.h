//
//  SEGFirebaseIntegration.h
//  Pods
//

#import <Foundation/Foundation.h>
#if SWIFT_PACKAGE
#import "Analytics.h"
#else
#import <Analytics/SEGIntegration.h>
#endif


@interface SEGFirebaseIntegration : NSObject <SEGIntegration>

@property (nonatomic, strong) NSDictionary *settings;
@property (nonatomic, strong) Class firebaseClass;

- (id)initWithSettings:(NSDictionary *)settings;
- (id)initWithSettings:(NSDictionary *)settings andFirebase:(id)firebaseClass;


@end
