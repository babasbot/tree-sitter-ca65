module.exports = grammar({
  name: "a6502",
  rules: {
    source_file: ($) => repeat($._definition),
    _definition: ($) => choice(),
  },
});
