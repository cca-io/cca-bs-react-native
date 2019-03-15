[@react.component] [@bs.module "react-native"]
// value == string || float
external make:
  (
    ~onValueChange: ('a, int) => unit=?,
    ~selectedValue: 'a=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~enabled: bool=?,
    // Android only
    ~mode: [@bs.string] [ | `dialog | `dropdown]=?,
    ~prompt: string=?,
    // iOS only
    ~itemStyle: Style.t=?,
    // View Props
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
  "Picker";

module Item = {
  [@react.component] [@bs.module "react-native"] [@bs.scope "Picker"]
  external make:
    (~value: 'a=?, ~label: string, ~color: Style.color=?, ~testID: string=?) =>
    React.element =
    "Item";
};
