# -*- coding: cp950 -*-
import httplib
import json
import sys, locale

stationName = raw_input("���I: ").decode(sys.stdin.encoding or locale.getpreferredencoding(True))
#print "Echo [",stationName,"]"

conn = httplib.HTTPConnection("data.ntpc.gov.tw")
qryString = "/od/data/api/54DDDC93-589C-4858-9C95-18B2046CC1FC?$format=json&$filter=sna%20eq%20" + stationName

conn.request("GET",qryString.encode('utf8'))
response = conn.getresponse()
#print response.status, response.reason

data = response.read()
#print len(data)

if len(data) > 30:
    jStation = json.loads(data)

    stationTotal = jStation[0]['tot']
    stationAvailable = jStation[0]['sbi']
    stationVacant = jStation[0]['bemp']
    stationState = jStation[0]['act']

    if jStation[0]['act'] == "1":
        print u"�`��: " + stationTotal + u", �i��: " + stationAvailable + u", �i��: " + stationVacant
    else:
        print u"����B"
else:
    print "Not Found"
