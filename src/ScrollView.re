[@react.component] [@bs.module "react-native"]
external make:
  (
    ~contentContainerStyle: Style.t=?,
    ~horizontal: bool=?,
    ~keyboardDismissMode: [@bs.string] [ | `none | `interactive | `onDrag]=?,
    ~keyboardShouldPersistTaps: [@bs.string] [ | `always | `never | `handled]=?,
    ~onContentSizeChange: ((float, float)) => unit=?,
    ~onScroll: RNEvent.NativeScrollEvent.t => unit=?,
    ~pagingEnabled: bool=?,
    ~refreshControl: React.element=?,
    ~scrollEnabled: bool=?,
    ~showsHorizontalScrollIndicator: bool=?,
    ~showsVerticalScrollIndicator: bool=?,
    ~stickyHeaderIndices: list(int)=?,
    ~overScrollMode: [@bs.string] [ | `always | `never | `auto]=?,
    ~scrollPerfTag: string=?,
    ~alwaysBounceHorizontal: bool=?,
    ~alwaysBounceVertical: bool=?,
    ~automaticallyAdjustContentInsets: bool=?,
    ~bounces: bool=?,
    ~canCancelContentTouches: bool=?,
    ~centerContent: bool=?,
    ~contentInset: Types.insets=?,
    ~contentOffset: Types.point=?,
    ~decelerationRate: [@bs.string] [ | `fast | `normal]=?,
    ~directionalLockEnabled: bool=?,
    ~indicatorStyle: [@bs.string] [ | `default | `black | `white]=?,
    ~maximumZoomScale: float=?,
    ~minimumZoomScale: float=?,
    ~onScrollAnimationEnd: unit => unit=?,
    ~scrollEventThrottle: int=?,
    ~scrollIndicatorInsets: Types.insets=?,
    ~scrollsToTop: bool=?,
    ~snapToInterval: float=?,
    ~snapToAlignment: [@bs.string] [ | `center | `start | `end_]=?,
    ~zoomScale: float=?,
    // Common View props
    ~accessibilityLabel: string=?,
    ~accessible: bool=?,
    ~hitSlop: Types.insets=?,
    ~onAccessibilityTap: unit => unit=?,
    ~onLayout: RNEvent.NativeLayoutEvent.t => unit=?,
    ~onMagicTap: unit => unit=?,
    ~onMoveShouldSetResponder: RNEvent.NativeEvent.t => bool=?,
    ~onMoveShouldSetResponderCapture: RNEvent.NativeEvent.t => bool=?,
    ~onResponderGrant: RNEvent.NativeEvent.t => unit=?,
    ~onResponderMove: RNEvent.NativeEvent.t => unit=?,
    ~onResponderReject: RNEvent.NativeEvent.t => unit=?,
    ~onResponderRelease: RNEvent.NativeEvent.t => unit=?,
    ~onResponderTerminate: RNEvent.NativeEvent.t => unit=?,
    ~onResponderTerminationRequest: RNEvent.NativeEvent.t => unit=?,
    ~onStartShouldSetResponder: RNEvent.NativeEvent.t => bool=?,
    ~onStartShouldSetResponderCapture: RNEvent.NativeEvent.t => bool=?,
    ~pointerEvents: [@bs.string] [
                      | `auto
                      | `none
                      | [@bs.as "box-none"] `boxNone
                      | [@bs.as "box-only"] `boxOnly
                    ]
                      =?,
    ~removeClippedSubviews: bool=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~accessibilityComponentType: [@bs.string] [
                                   | `none
                                   | `button
                                   | `radiobutton_checked
                                   | `radiobutton_unchecked
                                 ]
                                   =?,
    ~accessibilityLiveRegion: [@bs.string] [ | `none | `polite | `assertive]=?,
    ~collapsable: bool=?,
    ~importantForAccessibility: [@bs.string] [
                                  | `auto
                                  | `yes
                                  | `no
                                  | [@bs.as "no-hide-descendants"]
                                    `noHideDescendants
                                ]
                                  =?,
    ~needsOffscreenAlphaCompositing: bool=?,
    ~renderToHardwareTextureAndroid: bool=?,
    ~accessibilityRole: [@bs.string] [
                          | `none
                          | `button
                          | `link
                          | `search
                          | `image
                          | `keyboardkey
                          | `text
                          | `adjustable
                          | `header
                          | `summary
                          | `imagebutton
                        ]
                          =?,
    ~accessibilityStates: Types.accessibilityStates=?,
    ~accessibilityViewIsModal: bool=?,
    ~shouldRasterizeIOS: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "ScrollView";

type scrollToParams;
[@bs.obj]
external scrollToParams:
  (~x: float, ~y: float, ~animated: bool=?, ~duration: float=?, unit) =>
  scrollToParams =
  "";
[@bs.send] external scrollTo: scrollToParams => unit = "";

type scrollToEndOptions;
[@bs.obj]
external scrollToEndOptions:
  (~animated: bool=?, ~duration: float=?, unit) => scrollToEndOptions =
  "";
[@bs.send] external scrollToEnd: React.Ref.domRef => unit = "scrollToEnd";
[@bs.send]
external scrollToEndWithOptions: (React.Ref.domRef, scrollToEndOptions) => unit =
  "scrollToEnd";

[@bs.send] external flashScrollIndicators: React.Ref.domRef => unit = "";
