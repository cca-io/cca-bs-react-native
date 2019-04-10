'use strict';

var ReactNative = require("react-native");
var PromiseUtils$CcaBsReactNative = require("../utils/PromiseUtils.js");

function getInitialURL(param) {
  return ReactNative.Linking.getInitialURL().then(PromiseUtils$CcaBsReactNative.nullableToOption);
}

exports.getInitialURL = getInitialURL;
/* react-native Not a pure module */
