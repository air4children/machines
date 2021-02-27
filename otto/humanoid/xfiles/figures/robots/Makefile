INKSCAPE?=inkscape	# Inkscape (svg support)
#References
#https://scaron.info/blog/makefiles-for-latex.html

FIGURES_SVG=$(wildcard vectors/*.svg)
FIGURES_PNG=$(subst vectors/,versions/,$(FIGURES_SVG:.svg=.png))
FIGURES_PDF=$(subst vectors/,versions/,$(FIGURES_SVG:.svg=.pdf))

all:	$(FIGURES_PNG) #$(FIGURES_PDF)

# Pattern rule for converting SVG to PNG
versions/%.png: vectors/%.svg
	$(INKSCAPE) --export-filename $(@) $(<)

versions/%.pdf: vectors/%.svg
	$(INKSCAPE) --export-filename $(@) $(<)


viewpng:
	eog $(FIGURES_PNG)

clean:  ##  output figure files
	rm -f $(FIGURES_PNG) $(FIGURES_PDF)

