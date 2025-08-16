# -*- coding: cp950 -*-
import httplib
import json
import sys, locale

routeId = raw_input("RouteID: ").decode(sys.stdin.encoding or locale.getpreferredencoding(True))
#print "Echo [",routeID,"]"

stopId = raw_input("StopID: ").decode(sys.stdin.encoding or locale.getpreferredencoding(True))
#print "Echo [",stopID,"]"

conn = httplib.HTTPConnection("data.ntpc.gov.tw")

qryString = "/od/data/api/245793DB-0958-4C10-8D63-E7FA0D39207C?$format=json&$filter=RouteID%20eq%20" + routeId + "%20and%20StopID%20eq%20" + stopId

conn.request("GET",qryString.encode('utf8'))
response = conn.getresponse()
#print response.status, response.reason

data = response.read()
#print len(data)

if len(data) > 30:
    jBusArrival = json.loads(data)

    if( jBusArrival[0]['EstimateTime'] == "-1" ):
        print "�|���o��"
    elif( jBusArrival[0]['EstimateTime'] == "-2" ):
        print "��ޤ����a"                
    elif( jBusArrival[0]['EstimateTime'] == "-3" ):
        print "���Z���w�L"
    elif( jBusArrival[0]['EstimateTime'] == "-4" ):
        print "���饼��B"                
    else:
        print "�쯸�Ѿl�ɶ�:",route['EstimateTime']
else:
    print "Not found"
