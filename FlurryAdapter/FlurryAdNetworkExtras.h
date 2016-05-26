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

FOUNDATION_EXPORT NSString * const kFlurryExtraBrandingLogo;
FOUNDATION_EXPORT NSString * const kFlurryExtraAppCategory;

@interface FlurryAdNetworkExtras : NSObject <GADAdNetworkExtras>

@property BOOL isDebugLogEnabled;
@property FlurryLogLevel logLevel;

@end
