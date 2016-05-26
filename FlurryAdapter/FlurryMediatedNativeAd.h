//
//  FlurryMediatedNativeAd.h
//
//  Base definition of mediated Flurry ads
//
//  Copyright © 2016 Yahoo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FlurryAdNative.h"
#import "GADMAdNetworkAdapterProtocol.h"

@interface FlurryMediatedNativeAd : NSObject<GADMediatedNativeAd>

@property (nonnull, strong) FlurryAdNative *flurryNativeAd;
@property (nonnull, strong) NSString *flurryHeadline;
@property (nonnull, strong) NSString *flurrySummary;
@property (nonnull, strong) NSString *flurrySource;
@property (nonnull, strong) NSString *flurryCallToAction;
@property (nonnull, strong) NSString *flurryAppCategory;
@property (nonnull, strong) NSDecimalNumber *flurryStarRating;
@property (nonnull, strong) GADNativeAdImage *flurryBrandingLogo;
@property (nonnull, strong) GADNativeAdImage *flurrySmallImage;
@property (nonnull, strong) GADNativeAdImage *flurryStarRatingImage;
@property (nonnull, strong) NSArray *flurryImages;
@property (nonnull, strong) NSMutableDictionary* flurryExtraAssets;

- (_Nullable instancetype)init NS_UNAVAILABLE;
/*!
 * @brief Initializes the mediated ad with an instance of a Flurry native ad.
 */
- (_Nullable instancetype)initWithFlurryNativeAd:(FlurryAdNative * _Nonnull)flurryNativeAd
                             withImagesPreloaded:(BOOL)preloadImages NS_DESIGNATED_INITIALIZER;

// Common assets
- (NSString * _Nullable) headline;
- (NSString * _Nullable) body;
- (NSString * _Nullable) callToAction;
- (NSArray * _Nullable) images;

@end
