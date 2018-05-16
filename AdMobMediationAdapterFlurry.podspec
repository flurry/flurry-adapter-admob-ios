Pod::Spec.new do |spec|
	spec.name               = 'AdMobMediationAdapterFlurry'
	spec.version            = '8.6.0'
	spec.summary            = 'Flurry adapter for Google Ads SDK'
	spec.license            = { :type => 'Commercial', :file => 'Licenses/Flurry-LICENSE.txt' }
	spec.description        = 'The Flurry adapter allows app publishers mediate the Flurry SDK using Google Ads for AdMob or DFP'
	spec.homepage           = 'https://developer.yahoo.com/flurry/docs/publisher/mediation/admob/ios/'
	spec.author             = { 'Flurry' => 'integration@flurry.com' }
	spec.source             = { :git => 'https://github.com/flurry/flurry-adapter-admob-ios.git', :tag => spec.version.to_s }
	spec.requires_arc       = false
	spec.platforms          = { :ios => '8.0' }
	spec.source_files       = [
		'FlurryAdapter/FlurryAdNetworkExtras.h'
	]
	spec.vendored_libraries  = 'FlurryAdapter/libFlurryAdapter.a'
	spec.dependency 'Flurry-iOS-SDK/FlurrySDK', '~> 8'
	spec.dependency 'Flurry-iOS-SDK/FlurryAds', '~> 8'
	spec.dependency 'Google-Mobile-Ads-SDK', '~> 7.12'
end

