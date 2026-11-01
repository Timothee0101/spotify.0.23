#import "Settings/SGModPage.h"
#import "Privacy.h"
#import "Shared/AdBlock/AdBlock.h"

// The old Privacy & clutter page is now the full Premium, ads & privacy page.
UIViewController *SGPrivacySettingsPage(void) {
    return SGAdsSettingsPage();
}
