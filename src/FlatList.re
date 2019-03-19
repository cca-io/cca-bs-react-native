module RenderItem = {
  [@bs.deriving abstract]
  type props('item) = {
    item: 'item,
    index: int,
  };

  type t('item) = React.component(props('item));
};

module SeparatorComponent = {
  [@bs.deriving abstract]
  type props('item) = {
    highlighted: bool,
    [@bs.optional]
    leadingItem: 'item,
  };

  type t('item) = React.component(props('item));
};

module ViewableItem = {
  [@bs.deriving abstract]
  type t('item) = {
    item: 'item,
    key: string,
    index: Js.undefined(int),
    isViewable: bool,
    section: Js.t({.}),
  };
};

module ViewableItemsChanged = {
  [@bs.deriving abstract]
  type t('item) = {
    viewableItems: array(ViewableItem.t('item)),
    changed: array(ViewableItem.t('item)),
  };
};

type itemLayout = {
  .
  "length": int,
  "offset": int,
  "index": int,
};

[@react.component] [@bs.module "react-native"]
external make:
  (
    ~data: array('item),
    ~renderItem: RenderItem.t('item),
    ~keyExtractor: ('item, int) => string,
    ~itemSeparatorComponent: SeparatorComponent.t('item)=?,
    ~bounces: bool=?,
    ~listFooterComponent: React.element=?,
    ~listHeaderComponent: React.element=?,
    ~listEmptyComponent: React.element=?,
    ~columnWrapperStyle: Style.t=?,
    ~extraData: 'any=?,
    ~getItemLayout: (option(array('item)), int) => itemLayout=?,
    ~horizontal: bool=?,
    ~initialNumToRender: int=?,
    ~initialScrollIndex: int=?,
    ~inverted: bool=?,
    ~numColumns: 'int=?,
    ~onEndReached: {. "distanceFromEnd": float} => unit=?,
    ~onEndReachedThreshold: float=?,
    ~onRefresh: unit => unit=?,
    ~onViewableItemsChanged: ViewableItemsChanged.t('item) => unit=?,
    ~overScrollMode: [@bs.string] [ | `auto | `always | `never]=?,
    ~pagingEnabled: bool=?,
    ~refreshControl: React.element=?,
    ~refreshing: bool=?,
    ~removeClippedSubviews: bool=?,
    ~scrollEnabled: bool=?,
    ~stickyHeaderIndices: list(int)=?,
    ~showsHorizontalScrollIndicator: bool=?,
    ~showsVerticalScrollIndicator: bool=?,
    ~windowSize: int=?,
    ~maxToRenderPerBatch: int=?,
    ~viewabilityConfig: Js.t({.})=?,
    ~onScroll: RNEvent.NativeScrollEvent.t => unit=?,
    ~style: Style.t=?
  ) =>
  React.element =
  "FlatList";

type scrollToEndOptions;
[@bs.obj]
external scrollToEndOptions: (~animated: bool=?, unit) => scrollToEndOptions =
  "";
[@bs.send] external scrollToEnd: React.Ref.domRef => unit = "scrollToEnd";
[@bs.send]
external scrollToEndWithOptions: (React.Ref.domRef, scrollToEndOptions) => unit =
  "scrollToEnd";

type scrollToIndexParams;
[@bs.obj]
external scrollToIndexParams:
  (
    ~viewOffset: float=?,
    ~viewPosition: float=?,
    ~animated: bool=?,
    ~index: int,
    unit
  ) =>
  scrollToIndexParams =
  "";
[@bs.send]
external scrollToIndex: scrollToIndexParams => unit = "scrollToIndex";

type scrollToItemParams('item);
[@bs.obj]
external scrollToItemParams:
  (~viewPosition: float=?, ~animated: bool=?, ~item: 'item, unit) =>
  scrollToIndexParams =
  "";
[@bs.send]
external scrollToItem: scrollToItemParams('item) => unit = "scrollToItem";

type scrollToOffsetParams;
[@bs.obj]
external scrollToOffsetParams:
  (~animated: bool=?, ~offset: float, unit) => scrollToOffsetParams =
  "";
[@bs.send]
external scrollToOffset: scrollToOffsetParams => unit = "scrollToOffset";

[@bs.send] external recordInteraction: React.Ref.domRef => unit = "";

[@bs.send] external flashScrollIndicators: React.Ref.domRef => unit = "";
