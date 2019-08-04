DOXYGEN_BIN = $$system(command -v doxygen)
isEmpty(DOXYGEN_BIN):error("Unable to detect doxygen in PATH")

QMAKE_EXTRA_TARGETS += doc
doc.target = doc
doc.CONFIG = phony
doc.commands = cd $${PWD} && $${DOXYGEN_BIN} Doxyfile
doc.depends = FORCE

QMAKE_CLEAN += $${PWD}/html/* $${PWD}/buteo-sync-plugins.tag

# Install rules
htmldocs.files = $${PWD}/html/*
htmldocs.path = /usr/share/doc/buteo-sync-plugins-doc
htmldocs.CONFIG += no_check_exist

INSTALLS += htmldocs
