
import PyPDF2

pdf_file = PyPDF2.PdfFileReader(open("/Users/HP/Desktop/textpythonprécis.pyf", "rb"))
doc_info = pdf_file.getDocumentInfo()
for info in doc_info:
    print("[+] " + info + " " + doc_info[info])
