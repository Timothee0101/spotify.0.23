# AdBlock port (0.19 → 0.23)

Full AdBlock module from spoti.pw 0.19.0 transplanted into 0.23.0-beta.

## What was added
- `Sources/Shared/AdBlock/` (entire folder from 0.19)
  - Hide ads
  - Hide upsells
  - Spoof Premium (with original warning)
  - Ad / upsell flags page
  - Network + service hooks (AdNetwork, AdServices, AdHubs, AdPopups, Feeds, Premium, Crossfade, Protobuf)
  - Ad block counters

## Integration changes
- Menu entry: **Premium, ads & privacy** (crown icon) → `SGAdsSettingsPage()`
- `PrivacySettings.m` now redirects to the same page (compatibility)
- Telemetry + counters from Privacy are still present inside the ads page
- Search clutter keys (`searchVideos` / `socialProof`) are owned by AdBlock; Privacy.h re-exports them

## Risk reminder
Spoof Premium is the feature Spotify targeted in the EeveeSpotify takedown.
It can cause forced logout or worse. Use at your own risk.
A real Premium account gains nothing from it.

## Build
Same as upstream 0.23 — `make` in `tweak/`.
The Makefile auto-picks every `.m` / `.x` under `Sources/`.
