Flurry iOS Adapter for AdMob and DFP
====================================

[![Cocoapods pod version](https://img.shields.io/cocoapods/v/AdMobMediationAdapterFlurry.svg?style=flat)](https://cocoapods.org/pods/AdMobMediationAdapterFlurry)

### Adapter version 7.6.7 - Updated 2016-09-30

This adapter enables mediation of Flurry ads via the Google Ads SDK for 
[DoubleClick for Publishers](https://developers.google.com/mobile-ads-sdk/docs/dfp/ios/mediation-networks) or 
[AdMob](https://firebase.google.com/docs/admob/ios/mediation-networks).

### Installation

To install this adapter via CocoaPods, create a Podfile -- if you do not have one already -- with the following content:

```ruby
target 'YourAppBuildTarget' do
   pod 'AdMobMediationAdapterFlurry', '~> 7'
   # ...your other pod dependencies
end
```

### Mediate Flurry Ads through AdMob or DFP

To integrate Flurry as a mediated network in your AdMob/DFP ad serving, three initial steps are necessary:

1. Integrate Flurry SDK and Flurry adapter for DFP and AdMob into your app.
2. Configure Flurry's Adspace(s). 
3. Configure AdMob to mediate Flurry.

To learn more about these steps, read the Yahoo Developer Network documentation for 
[AdMob](https://developer.yahoo.com/flurry/docs/publisher/mediation/admob/ios/) or 
[DFP](https://developer.yahoo.com/flurry/docs/publisher/mediation/dfp/ios/).

Changelog
---------
### Version 7.6.7 - 2016-09-30
* Bug fixes

### Version 7.6.6 - 2016-08-01
* Allows recycling of views that were used for Flurry native ads
* Fixed banner ad rendering issue

### Version 7.6.3 - 2016-05-25
* Added support for Google Ads SDK v7+
