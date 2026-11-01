// Privacy: telemetry blocking (Privacy.x), an NSURLProtocol that answers the analytics endpoints
// itself and counts what it stopped. On unless switched off.
// Search clutter keys (Hide video carousel / social proof) are owned by Shared/AdBlock.
#import <UIKit/UIKit.h>

#define SGKeyBlockTelemetry @"spotifyglass.blockTelemetry"

// Re-export the two search keys so existing Clutter.m / PrivacySettings keep compiling.
// Canonical definitions live in Shared/AdBlock/AdBlock.h.
#ifndef SGKeyHideSearchVideos
#define SGKeyHideSearchVideos @"spotifyglass.adblock.searchVideos"
#endif
#ifndef SGKeyHideSocialProof
#define SGKeyHideSocialProof @"spotifyglass.adblock.socialProof"
#endif

// The destinations it knows in the order it lists them, and how many requests to one of them it
// has answered instead of letting out (nil label for all of them).
NSArray<NSString *> *SGBlockedLabels(void);
NSUInteger SGBlockedCount(NSString *label);
void SGResetBlocked(void);

// Kept for compatibility; the real page is now SGAdsSettingsPage (Premium, ads & privacy).
UIViewController *SGPrivacySettingsPage(void);
