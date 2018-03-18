module Banner = {
  type bannerSize =
    | Banner
    | LargeBanner
    | MediumRectangle
    | FullBanner
    | Leaderboard
    | SmartBannerPortrait
    | SmartBannerLandscape;
  [@bs.module "expo"] external js : ReasonReact.reactClass = "AdMobBanner";
  let make =
      (
        ~bannerSize=Banner,
        ~didFailToReceiveAdWithError: option('a => unit)=?,
        ~adViewWillPresentScreen: option(unit => unit)=?,
        ~adViewWillDismissScreen: option(unit => unit)=?,
        ~adViewDidDismissScreen: option(unit => unit)=?,
        ~adViewWillLeaveApplication: option(unit => unit)=?,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "bannerSize":
          switch (bannerSize) {
          | Banner => "banner"
          | LargeBanner => "largeBanner"
          | MediumRectangle => "mediumRectangle"
          | FullBanner => "fullBanner"
          | Leaderboard => "leaderboard"
          | SmartBannerPortrait => "smartBannerPortrait"
          | SmartBannerLandscape => "smartBannerLandscape"
          },
        "didFailToReceiveAdWithError":
          Js.Nullable.fromOption(didFailToReceiveAdWithError),
        "adViewWillPresentScreen":
          Js.Nullable.fromOption(adViewWillPresentScreen),
        "adViewWillDismissScreen":
          Js.Nullable.fromOption(adViewWillDismissScreen),
        "adViewDidDismissScreen":
          Js.Nullable.fromOption(adViewDidDismissScreen),
        "adViewWillLeaveApplication":
          Js.Nullable.fromOption(adViewWillLeaveApplication),
      },
    );
};

module PublisherBanner = {
  type bannerSize =
    | Banner
    | LargeBanner
    | MediumRectangle
    | FullBanner
    | Leaderboard
    | SmartBannerPortrait
    | SmartBannerLandscape;
  [@bs.module "expo"] external js : ReasonReact.reactClass = "PublisherBanner";
  let make =
      (
        ~bannerSize=Banner,
        ~didFailToReceiveAdWithError: option('a => unit)=?,
        ~adViewWillPresentScreen: option(unit => unit)=?,
        ~adViewWillDismissScreen: option(unit => unit)=?,
        ~adViewDidDismissScreen: option(unit => unit)=?,
        ~adViewWillLeaveApplication: option(unit => unit)=?,
        ~admobDispatchAppEvent: option('a => unit)=?,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=js,
      ~props={
        "bannerSize":
          switch (bannerSize) {
          | Banner => "banner"
          | LargeBanner => "largeBanner"
          | MediumRectangle => "mediumRectangle"
          | FullBanner => "fullBanner"
          | Leaderboard => "leaderboard"
          | SmartBannerPortrait => "smartBannerPortrait"
          | SmartBannerLandscape => "smartBannerLandscape"
          },
        "didFailToReceiveAdWithError":
          Js.Nullable.fromOption(didFailToReceiveAdWithError),
        "adViewWillPresentScreen":
          Js.Nullable.fromOption(adViewWillPresentScreen),
        "adViewWillDismissScreen":
          Js.Nullable.fromOption(adViewWillDismissScreen),
        "adViewDidDismissScreen":
          Js.Nullable.fromOption(adViewDidDismissScreen),
        "adViewWillLeaveApplication":
          Js.Nullable.fromOption(adViewWillLeaveApplication),
        "admobDispatchAppEvent":
          Js.Nullable.fromOption(admobDispatchAppEvent),
      },
    );
};

module Interstitial = {
  [@bs.module "expo"] [@bs.scope "AdMobInterstitial"]
  external setAdUnitID : 'a => unit = "setAdUnitID";
  [@bs.module "expo"] [@bs.scope "AdMobInterstitial"]
  external setTestDeviceID : 'a => unit = "setTestDeviceID";
  [@bs.module "expo"] [@bs.scope "AdMobInterstitial"]
  external requestAd : ('a => unit) => unit = "requestAd";
  [@bs.module "expo"] [@bs.scope "AdMobInterstitial"]
  external showAd : ('a => unit) => unit = "showAd";
  [@bs.module "expo"] [@bs.scope "AdMobInterstitial"]
  external isReady : (Js.boolean => unit) => unit = "isReady";
};

module Rewarded = {
  [@bs.module "expo"] [@bs.scope "AdMobRewarded"]
  external setAdUnitID : 'a => unit = "setAdUnitID";
  [@bs.module "expo"] [@bs.scope "AdMobRewarded"]
  external setTestDeviceID : 'a => unit = "setTestDeviceID";
  [@bs.module "expo"] [@bs.scope "AdMobRewarded"]
  external requestAd : ('a => unit) => unit = "requestAd";
  [@bs.module "expo"] [@bs.scope "AdMobRewarded"]
  external showAd : ('a => unit) => unit = "showAd";
};