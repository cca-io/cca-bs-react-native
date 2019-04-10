

import * as Caml_option from "bs-platform/lib/es6/caml_option.js";

function nullableToOption(stringOrNull) {
  return Promise.resolve(stringOrNull === null ? undefined : Caml_option.some(stringOrNull));
}

export {
  nullableToOption ,
  
}
/* No side effect */
