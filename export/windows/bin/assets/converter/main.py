# the simplest pdf to png converter you've ever seen, with very nice quality
import os, pkg_resources, sys

# cover your ass just in case you get caught lacking...
installed = {pkg.key for pkg in pkg_resources.working_set}
if not installed.__contains__('pymupdf'):
    os.system('pip install pymupdf')

import fitz as pdf

args = sys.argv
doc = pdf.open(args[1])
name = args[2]

for x in range(0, doc.page_count):
    pixmap = doc.load_page(x).get_pixmap(dpi=200)
    pixmap.save(os.path.abspath(f'assets/scripts/{name}/pages/{x}.png'), 'png')