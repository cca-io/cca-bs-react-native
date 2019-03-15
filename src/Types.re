[@bs.deriving abstract]
type insets = {
  left: float,
  right: float,
  top: float,
  bottom: float,
};

[@bs.deriving jsConverter]
type accessibilityState = [ | `selected | `disabled];

type accessibilityStates;

let accessibilityStates: array(accessibilityState) => accessibilityStates =
  states => states->Belt.Array.map(accessibilityStateToJs)->Obj.magic;

[@bs.deriving abstract]
type point = {
  x: float,
  y: float,
};
