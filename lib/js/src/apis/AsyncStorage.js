'use strict';

var ReactNative = require("react-native");
var PromiseUtils$CcaBsReactNative = require("../utils/PromiseUtils.js");

function getItem(key) {
  return ReactNative.AsyncStorage.getItem(key).then(PromiseUtils$CcaBsReactNative.nullableToOption);
}

function getAllKeys(param) {
  return ReactNative.AsyncStorage.getAllKeys().then(PromiseUtils$CcaBsReactNative.nullableToOption);
}

function multiGet(keys) {
  return ReactNative.AsyncStorage.multiGet(keys).then(PromiseUtils$CcaBsReactNative.nullableToOption);
}

exports.getItem = getItem;
exports.getAllKeys = getAllKeys;
exports.multiGet = multiGet;
/* react-native Not a pure module */
