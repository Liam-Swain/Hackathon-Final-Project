from urllib.request import urlopen
from bs4 import BeautifulSoup as BS
import fileinput


# Create/open file
file = open("StockData.txt", "w+")

# Iterate through and collect information from stock pages
for iteration in range(1,101):  # Slightly more pages than necessary to account for future stocks leading to additional pages being created
    print("Collecting data from page " + str(iteration) + " of 100") # Notifies user of collection progress
    url = "https://www.centralcharts.com/en/price-list-ranking/ALL/asc/ts_29-us-nyse-stocks--qc_1-alphabetical-order?p=" + str(iteration)
    page = urlopen(url)
    html = page.read().decode("utf-8") # Get html from page
    soup = BS(html, "html.parser")
    text = soup.get_text() # Get raw text from html
    # Cleaning text
    text = text.partition("Issued Cap.")[-1]
    text = text.split("1 free credit", 1)[0]
    text = "".join([s for s in text.strip().splitlines(True) if s.strip("\r\n").strip()])
    text = text.replace("-\n","")
    text = text.replace("AI\n","")
    if iteration == 1:
      final_text = text[:-3]
    else:
      final_text = text[:-5]
    # Write text to file
    file.write(final_text)

# Close file
file.close()