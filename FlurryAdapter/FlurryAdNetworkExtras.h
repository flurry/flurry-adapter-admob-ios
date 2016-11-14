//
//  FlurryAdNetworkExtras.h
//
//  Extra parameters for configuring the Flurry SDK/network
//
//  Copyright © 2016 Yahoo, Inc. All rights reserved.
//

@import GoogleMobileAds;

#import <Foundation/Foundation.h>
#import "Flurry.h"

FOUNDATION_EXPORT NSString * const kFlurryExtraAppCategory;

@interface FlurryAdNetworkExtras : NSObject <GADAdNetworkExtras>

/*!
 * @brief Flag to set debug log on the Flurry SDK
 *
 * @deprecated since 7.8.0, this flag is now no-op. Please use logLevel instead.
 */
@property BOOL isDebugLogEnabled;
/*!
 * @brief Sets the log level for the Flurry session.
 *
 * @discussion Accepts a @c[FlurryLogLevel] enum. This should be set before any Flurry ad requests might be made and
 *             cannot be changed after a Flurry session is active.
 */
@property FlurryLogLevel logLevel;

@end
