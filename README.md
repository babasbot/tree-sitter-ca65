# tree-sitter-ca65

![tests](https://github.com/babasbot/tree-sitter-ca65/actions/workflows/tests.yml/badge.svg?branch=main)

**tree-sitter-ca65** is a [tree-sitter] grammar for ca65 macro assembly. This
project aims to provide a robust and accurate parser for 6502 assembly, enabling
syntax highlighting, code navigation, and other code analysis features.

## Project Status

This project is a work in progress and is subject to change. The parser is currently
under development and has not been submitted to be included in the official nvim-treesitter
list. Therefore, it needs to be manually configured and installed.

## Installation

To install the trunk version of the tree-sitter-ca65 grammar in Neovim, you need to
configure nvim-treesitter by adding the following configuration to your init.lua file:

```lua
local parsers = require("nvim-treesitter.parsers").get_parser_configs()

parsers.ca65 = {
  install_info = {
    url = "https://github.com/babasbot/tree-sitter-ca65",
    files = {
      "src/parser.c",
    },
    branch = "main",
  },
  filetype = "asm",
  maintainers = {
    "@babasbot",
  },
}
```

Start `nvim` and run `:TSInstall ca65`.

By default, the `:TSInstall` command does not copy query files from the grammar repository. You must
manually add the query files to your local nvim-treesitter configuration.

Copy the contents of the [`queries/ca65`](queries/ca65) directory into your local Neovim configuration directory:

```
~/.config/nvim/queries/ca65
```

## References

For more information on 6502 assembly, refer to the following resources:

- [6502 Instruction Set](https://www.masswerk.at/6502/6502_instruction_set.html)
- [ca65 Users Guide](https://cc65.github.io/doc/ca65.html)

## License

Licensed under the MIT License. Check the [LICENSE](LICENSE.txt) file for details.

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
