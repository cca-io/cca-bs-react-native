[@react.component] [@bs.module "react-native"]
external make:
  (
    ~accessible: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityComponentType: [@bs.string] [
                                   | `none
                                   | `button
                                   | `radiobutton_checked
                                   | `radiobutton_unchecked
                                 ]
                                   =?,
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
    ~delayLongPress: int=?,
    ~delayPressIn: int=?,
    ~delayPressOut: int=?,
    ~disabled: bool=?,
    ~hitSlop: Types.insets=?,
    ~style: Style.t=?,
    ~onLayout: RNEvent.NativeLayoutEvent.t => unit=?,
    ~onPress: unit => unit=?,
    ~onLongPress: unit => unit=?,
    ~onPressIn: unit => unit=?,
    ~onPressOut: unit => unit=?,
    ~pressRetentionOffset: Types.insets=?,
    ~activeOpacity: float=?,
    ~focusedOpacity: float=?,
    ~testID: string=?,
    // FIXME
    ~tvParallaxProperties: Js.t({.})=?,
    ~children: React.element=?
  ) =>
  React.element =
  "TouchableOpacity";

[@bs.send]
external setOpacityTo: (React.Ref.domRef, float, float) => unit =
  "setOpacityTo";
