# Tree Sitter

- Unlike textmate where highlighting was done for whole syntaxes, tree-sitter calls small parts together.
eg. for syntax like `('hello')`, text mate may use regex `'\\(\\'hello\\'\\)'`. However, tree sitter will call a user-defined `parenthesis-rule` and `single-quotes-rule` and then try to match `hello` in the regex.
- Tree-sitter has 2 parts - creating parsers and syntax highlighting. Parsed data is used to create highlighters.
- Official docs can be found [here](https://tree-sitter.github.io/tree-sitter)

## Pre-requisites
1. NodeJS

## Setting up tree-sitter parsers
1. Initialize empty npm package named say, tree-sitter-{language_name}
2. Install `tree-sitter-cli` as a dev dependency(*Installing it as a normal dep will give errors*)
```bash
npm i --save-dev tree-sitter-cli
```
Or download the source file for your operating system: https://github.com/tree-sitter/tree-sitter/releases/tag/v0.20.0

3. Install nan
```bash
npm i nan
```
4. Edit your path to add `./node_modules/bin` to env variable to use tree-sitter binaries.
```bash
export PATH=$PATH:./node_modules/.bin
```
> This will be needed to be done everytime you reopen a terminal. To prevent this, add it to your path in Windows or to `.bashrc` in Linux.
5. Add a `grammar.js` file. This is where all the parsers will be written.
6. Add this example code below to test if all the setup has been done correctly and then execute the command given after it.
```js
module.exports = grammar({
  name: 'YOUR_LANGUAGE_NAME',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => 'hello'
  }
});
```
```bash
tree-sitter generate    # This should create a C bindings folder which will support parsing.
echo 'hello' > example-file
tree-sitter parse example-file  # example-file is the test language file, say test.asm
```


*All the code I tried (which has given me errors with no progress but will help you get a small headstart) is added to `src/tree-sitter-zvm-languages`.*
