


function pct(num) {
  return num.toString() + "%";
}

var Margin = /* module */[
  /* pct */pct,
  /* auto */"auto"
];

var Size = /* module */[/* pct */pct];

function deg(num) {
  return num.toString() + "deg";
}

function rad(num) {
  return num.toString() + "rad";
}

var Transform = /* module */[
  /* deg */deg,
  /* rad */rad
];

var FontVariant = /* module */[
  /* smallCaps */"small-caps",
  /* oldstyleNums */"oldstyle-nums",
  /* liningNums */"lining-nums",
  /* tabularNums */"tabular-nums",
  /* proportionalNums */"proportional-nums"
];

export {
  pct ,
  Margin ,
  Size ,
  Transform ,
  FontVariant ,
  
}
/* No side effect */
