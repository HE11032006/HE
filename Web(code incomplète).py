''' 
Objectifs : 
-Afficher la liste de liens ("crawlés") dans le Terminal
-Obtenir le code source d'une page web
-Obtenir les liens disponibles sur une page web (href), excluant les liens externes
-Afficher les cookies de la session courante dans le Terminal
-Retourne la liste des cookies de la session courante
- Crawl (indexe) une page de manière récursive
        

'''
#!/usr/bin/env python3
# coding:utf-8
import sys
import urllib
from urllib.parse import urlparse

import mechanize
from bs4 import BeautifulSoup


class WebCrawler:

    def __init__(self, url, proxy=None, user_agent="Mozilla/5.0 (X11; Linux i686; rv:68.0)\
     Gecko/20100101 Firefox/68.0"):
        if url.endswith("/"):
            self.url = url.rstrip("/")
        else:
            self.url = url
        self.proxy = proxy
        self.user_agent = user_agent
        self.browser = mechanize.Browser()
        self.link_list = []
        self.stopped = False

    def print_link_list(self):
        """
        Affiche la liste de liens ("crawlés") dans le Terminal
        :return:
        """
        for link in self.link_list:
            print(link)

    def get_page_source(self, page=None):
        """
        Obtient le code source d'une page web
        :param page: optionnel : la page recherchée, sinon utilise self.url
        :return: Le code source HTML de la page
        """
        if page is None:
            page = self.url
        self.browser.set_handle_robots(False)
        user_agent = {("User-agent", self.user_agent)}
        self.browser.addheaders = user_agent
        if self.proxy:
            self.browser.set_proxies(self.proxy)
        page = page.strip()
        try:
            res = self.browser.open(page)
        except Exception as e:
            print("[-] Erreur pour la page : " + page + " " + str(e))
            return None
        return res

    