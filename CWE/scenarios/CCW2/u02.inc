##############################
# Country definition for U01 #
##############################
province = {
  id = 981 # �￦��
}
province = {
  id = 993 # ������
}
province = {
  id = 1089 # �Ű���
}
province = {
  id = 1092 # ����ά��
  supplypool = 200
  oilpool = 50
}
province = {
  id = 1137 # ����������
  supplypool = 200
  oilpool = 50
}

#####################
# Country main data #
#####################

country = {
  tag                = U01
  regular_id         = FRA
  puppet             = FRA
  control            = FRA
  capital            = 981 # �￦��
  dissent            = 5
  manpower           = 100
  peacetime_ic_mod       = 0.8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100
  transports     = 100
  escorts        = 10

  nationalprovinces      = { 3324 993 995 996 997 975 976 1083 1084 3326 998 3325 1005 1006 1003 1004 991 987 989 990 3323 984 3320 981 973 3321 974 980 985 977 3322 986 979 994 978 1134 1137 1077 1087 3373 1086 3371 1079 1080 1081 1082 3378 3372 3370 1070 1078 1088 1076 1075 1093 3377 1092 3376 3374 1089 }
  ownedprovinces         = { 973 981 984 987 989 3323 990 991 995 993 3324 996 997 1005 1004 1006 1003 998 3326 1084 1083 976 975 974 3321 3320 980 985 986 979 994 978 977 3322 3325 1082 3378 1081 1077 1078 1086 1087 3373 1088 1092 3377 1093 1075 3374 3376 1076 1080 1079 3371 1070 3370 3372 1134 1137 1089 }
  controlledprovinces    = { 974 975 976 1083 1084 1005 1006 1003 1004 998 3326 3325 997 996 3324 993 987 3323 981 973 3321 984 989 990 991 995 994 979 986 985 980 3320 978 977 3322 1137 1134 1093 3377 1092 1075 3376 3374 1077 1087 3373 1086 3371 1080 1081 1082 3378 3372 3370 1070 1078 1079 1076 1088 1089 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1170 1180 1190 1760 1770 1780 1890 1910 1900 1920 2820 2810 2800 2720 1540 1550 1560 1270 1280 1290 1300 1310 1410 1420 1430 1440 2280 2290 2300 2310 66500 66510 66520 66530 66540 6010 6020 6040 6050 6060 6070 6080 9700 9710 9010 9020 9030 5050 5310 5010 6090 78100 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 1
  }
  nationalidentity       = "policy_economy_colonial"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_conservatism"
}
