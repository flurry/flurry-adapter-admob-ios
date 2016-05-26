//
//  GADMAdapterFlurryAppCircle.h
//
//  Flurry adapter class
//
//  Copyright © 2016 Yahoo, Inc. All rights reserved.
//

@import GoogleMobileAds;

#import <Foundation/Foundation.h>
#import "GADMAdNetworkAdapterProtocol.h"

// Flurry/DFP Adapter. For legacy reasons, this should not be renamed.
@interface GADMAdapterFlurryAppCircle : NSObject<GADMAdNetworkAdapter>

typedef NS_ENUM(NSInteger, FlurryFetchError) {
    FlurryFetchErrorNotConfigured = 1,
    FlurryFetchErrorAdRequestNotSupported = 2,
    FlurryFetchErrorAdResponseNotSupported = 3,
};

@end
