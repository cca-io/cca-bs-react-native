type content;
type options;

[@bs.obj]
external content:
  (~title: string=?, ~message: string=?, ~url: string=?, unit) => content =
  "";

[@bs.obj]
external options:
  (
    ~subject: string=?,
    ~tintColor: string=?,
    ~excludedActivityTypes: array(string)=?,
    ~dialogTitle: string=?,
    unit
  ) =>
  options =
  "";

[@bs.module "react-native"] [@bs.scope "Share"]
external share: (content, options) => Js.Promise.t(bool) = "share";
