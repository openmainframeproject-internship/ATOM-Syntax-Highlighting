# Documentation Folder
| Document | Description |
|---|---|
| Statement of Work| Update the syntax highlighters adding support for macro statements, highlighting commas and parentheses, and support for variables. Also add new snippets to test different aspects of the syntax highlighting grammar. |
| Architecture | Currently, there are 4 repos for different syntax highlighters: https://github.com/search?q=org%3Aopenmainframeproject+atompkg |
| Detailed Design | Inside each repo there is a "grammars" folder that contains the regex for highlighting. <br> The "snippets" folder containing related code groups that can be expanded with a keyword.|
| Installation Guide| Install atom: https://atom.io/ <br><br> Clone the syntax highlighting package into ~/.atom/packages so Atom just sees the package and can pick up the code (reload Atom if it was open while cloning) <br><br> Make sure that the new z/VM languages show up as an option when selecting a syntax |
| User Guide | After making changes use CTL-SHIFT-F5 or C-S-P window:reload to update the active editor with the revised grammar |
