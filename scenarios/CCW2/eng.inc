##############################
# Country definition for ENG #
##############################
province = {
  id = 5 # 斯卡帕湾
}
province = {
  id = 9 # 格拉斯哥
}
province = {
  id = 10 # 爱丁堡
}
province = {
  id = 14 # 利物浦
}
province = {
  id = 16 # 伯明翰
}
province = {
  id = 17 # 诺里奇
}
province = {
  id = 19 # 伦敦
}
province = {
  id = 20 # 多佛尔（英国）
}
province = {
  id = 21 # 朴茨茅斯
}
province = {
  id = 22 # 布里斯托尔
}
province = {
  id = 23 # 普利茅斯
}
province = {
  id = 28 # 贝尔法斯特
  supplypool = 500
  oilpool = 500
}
province = {
  id = 31 # 马耳他岛
  landfort = 5
  coastalfort = 5
  supplypool = 500
  oilpool = 500
}
province = { id = 66 landfort = 1 } # 亚琛
province = {
  id = 67 # 埃森
  synthetic_oil = 1
}
province = {
  id = 75 # 科隆（德国）
  landfort = 1
  synthetic_oil = 1
}
province = {
  id = 80 # 威廉港
}
province = {
  id = 88 # 汉堡
}
province = {
  id = 90 # 基尔
}
province = {
  id = 348 # 直布罗陀
  landfort = 10
  supplypool = 1000
  oilpool = 1000
}
province = {
  id = 404 # 海法
}
province = {
  id = 444 # 尼科西亚
}
province = {
  id = 576 # 纽芬兰岛
}
province = {
  id = 866 # 福克兰群岛
  supplypool = 500
  oilpool = 100
}
province = {
  id = 873 # 乔治敦（圭亚那）
}
province = {
  id = 900 # 苏伊士运河区（东岸）
  landfort = 10
}
province = {
  id = 1315 # 香港
  supplypool = 1000
  oilpool = 1000
}
province = {
  id = 1352 # 吉隆坡
}
province = {
  id = 1353 # 新加坡
  supplypool = 500
  oilpool = 500
}
province = {
  id = 1457 # 加尔各答
}
province = {
  id = 1466 # 艾哈迈达巴德
}
province = {
  id = 1469 # 德里
}
province = {
  id = 1494 # 卡拉奇（巴基斯坦）
}
province = {
  id = 1505 # 孟买
}
province = {
  id = 1508 # 维杰亚瓦达
}
province = {
  id = 1509 # 马德拉斯（金奈）
}
province = {
  id = 1515 # 马杜赖
}
province = {
  id = 1517 # 科伦坡
  coastalfort = 2
  supplypool = 200
  oilpool = 200
}
province = {
  id = 1644 # 古晋
}
province = {
  id = 1685 # 瓜达尔卡纳尔岛
  supplypool = 500
}
province = { id = 1762 supplypool = 100 } # 菲尼克斯群岛
province = {
  id = 1799 # 加沙
}
province = {
  id = 1817 # 迪戈加西亚岛
  supplypool = 500
  oilpool = 500
}
province = {
  id = 3007 # 诺丁汉
}
province = { id = 3059 landfort = 1 } # 克雷费尔德
province = {
  id = 3741 # 斯里巴加湾
}

#####################
# Country main data #
#####################

country = {
  tag                = ENG
  ai                 = "eng_1950.ai"
  capital            = 19 # 伦敦
  manpower           = 600
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 2500
  oil            = 500
  supplies       = 5000
  money          = 100
  transports     = 1600
  escorts        = 150
  free = {
    oil            = 20
  }

  diplomacy = {
    relation = { tag = FRA value = 100 access = yes }
    relation = { tag = USA value = 150 access = yes }
    relation = {
      tag        = POR
      value      = 100
      guaranteed = { year = 1939 month = may day = 22 }
    }
    relation = { tag = EGY value = 0 access = yes }
    relation = { tag = ITA value = 0 access = yes }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 10 }

  nationalprovinces      = { 3011 1349 1350 1351 1352 1353 3736 3737 3738 1284 1285 1286 1287 1288 1454 1456 1457 1458 1459 1460 1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1474 1475 1476 1477 1478 1479 1480 1481 1482 1483 1494 1505 1506 1507 1508 1509 1510 1511 1512 1513 1514 1515 1516 1517 1518 1519 1877 1878 3771 3772 3773 3774 3775 3776 3777 3778 3779 3780 3781 3782 3783 3784 3785 3786 3787 3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3800 3801 3802 3803 3804 3805 3806 3807 3808 3809 3810 3811 3812 3813 3814 3815 3816 3817 3818 3819 3820 3821 3822 3823 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3859 3860 3861 3862 3863 3950 2675 2966 2967 2970 17 19 20 21 3012 3013 3014 3015 3016 4092 11 12 13 14 3004 3005 3006 3007 3008 4094 15 16 22 23 3009 3010 4093 3 5 6 8 3002 3579 3580 7 9 10 3003 3019 758 348 31 28 29 }
  ownedprovinces         = { 3011 3958 1315 1349 1350 1351 1352 1353 3736 3737 3738 1284 1285 1286 1287 1288 1454 1456 1457 1458 1459 1460 1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1474 1475 1476 1477 1478 1479 1480 1481 1482 1483 1494 1505 1506 1507 1508 1509 1510 1511 1512 1513 1514 1515 1516 1517 1518 1519 1877 1878 3771 3772 3773 3774 3775 3776 3777 3778 3779 3780 3781 3782 3783 3784 3785 3786 3787 3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3804 3805 3806 3807 3808 3809 3810 3813 3814 3815 3816 3817 3818 3819 3820 3821 3822 3823 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3859 3860 3861 3862 3863 2675 2966 2967 2970 17 19 20 21 3012 3013 3014 3015 3016 4092 11 12 13 14 3004 3005 3006 3007 3008 4094 15 16 22 23 3009 3010 4093 3 5 6 8 3002 3579 3580 7 9 10 3003 3019 3743 3742 1647 3740 1646 1644 444 3939 31 348 1036 3354 1035 3353 3595 29 28 3071 3072 90 89 88 3070 3068 80 3069 3066 81 3067 86 297 85 3065 66 3059 67 75 3060 3063 76 3064 3191 461 460 3190 900 4 1040 1041 1039 1033 1038 758 575 576 3980 891 652 897 808 896 4036 871 873 809 3597 866 3585 1148 1147 1816 1136 1817 1614 1622 1684 1685 1683 1681 3956 1686 1688 1687 3957 1752 1753 1767 1768 1770 1769 1761 1760 1759 1757 1758 1754 1762 1763 3970 3965 653 3741 406 3926 1799 1798 404 3927 1797 }
  controlledprovinces    = { 3011 3958 1315 1349 1350 1351 1352 1353 3736 3737 3738 1284 1285 1286 1287 1288 1454 1456 1457 1458 1459 1460 1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1474 1475 1476 1477 1478 1479 1480 1481 1482 1483 1494 1505 1506 1507 1508 1509 1510 1511 1512 1513 1514 1515 1516 1517 1518 1519 1877 1878 3771 3772 3773 3774 3775 3776 3777 3778 3779 3780 3781 3782 3783 3784 3785 3786 3787 3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3804 3805 3806 3807 3808 3809 3810 3813 3814 3815 3816 3817 3818 3819 3820 3821 3822 3823 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3859 3860 3861 3862 3863 2675 2966 2967 2970 17 19 20 21 3012 3013 3014 3015 3016 4092 11 12 13 14 3004 3005 3006 3007 3008 4094 15 16 22 23 3009 3010 4093 3 5 6 8 3002 3579 3580 7 9 10 3003 3019 3743 3742 1647 3740 1646 1644 444 3939 31 348 3595 29 28 3071 3072 90 89 88 3070 3068 80 3069 3066 81 3067 86 297 85 3065 66 3059 67 75 3060 3063 76 3064 3191 461 460 3190 900 4 758 575 576 3980 891 652 897 808 896 4036 871 873 809 3597 866 3585 1148 1147 1816 1136 1817 1614 1622 1684 1685 1683 1681 3956 1686 1688 1687 3957 1752 1753 1767 1768 1770 1769 1761 1760 1759 1757 1758 1754 1762 1763 3970 3965 653 3741 404 3927 1797 1798 1799 3926 406 }

  techapps               = { 1010 1020 1030 1040 1050 1060 5220 5410 5050 5100 5110 5300 5310 5010 1200 1210 1270 1280 1290 1660 1670 1560 5080 5170 5190 5800 5180 5660 5020 5290 5680 5670 5690 2280 2290 2300 2310 5550 5560 5580 5470 5480 5490 5500 1760 1770 1780 1790 1970 1890 1900 1910 1920 1550 1540 1170 1180 1190 1410 1420 1430 1440 9700 9710 9010 9020 9030 8010 8020 8390 8150 8030 8050 8660 8060 8080 8100 8130 8140 8470 8440 8420 8530 8200 8160 9660 9670 9620 9630 9640 9680 9580 9590 9600 9540 9550 9560 9520 9510 9500 4120 4130 4010 4020 4030 4060 4140 4150 4040 4050 74600 7140 3070 3080 3090 3100 3110 3230 3220 3210 3200 3190 3130 3140 3010 3020 3030 3040 3050 3320 3330 3340 3250 3260 3270 3280 3290 12100 12110 12120 3400 3410 3420 8040 8070 8120 8310 2540 2550 2010 2020 2030 2040 2050 2060 26100 26200 2360 2370 2320 2420 2430 2440 2560 26300 4220 4230 4190 4200 4250 66500 66510 66520 66530 66540 6010 6020 6040 6050 6060 6070 6080 6100 2720 2800 2810 2820 2160 2170 2380 2220 2450 2070 2080 2570 9190 9200 9210 9220 9310 9140 9150 9160 9170 9180 9430 9440 9450 9320 9330 9340 9230 9240 9250 9260 9390 9410 9400 9090 9100 9110 9120 9130 9040 9050 9060 9070 9080 9350 9270 6900 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 8
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 1033 } # 乔治六世 
  headofgovernment       = { type = 9 id = 1040 } # 克莱门特 艾德礼 
  foreignminister        = { type = 9 id = 1047 } # 埃内斯特 贝文 
  armamentminister       = { type = 9 id = 1067 } # 斯塔福德 克里普斯 
  ministerofsecurity     = { type = 9 id = 1089 } # 詹姆斯 丘特尔 埃德 
  ministerofintelligence = { type = 9 id = 1106 } # 布伦丹 布拉肯 
  chiefofstaff           = { type = 9 id = 1123 } # 伯纳德 蒙哥马利 爵士 
  chiefofarmy            = { type = 9 id = 1133 } # 伯纳德 蒙哥马利 爵士 
  chiefofnavy            = { type = 9 id = 1139 } # 约翰 坎宁汉姆 爵士 
  chiefofair             = { type = 9 id = 1148 } # 亚瑟 特德 爵士 
  nationalidentity       = "policy_economy_monopoly"
  socialpolicy           = "policy_social_Puritanism-liberalism"
  nationalculture        = "policy_political_conservatism"
  dormant_ministers      = { 1001 1002 1004 1006 1007 1008 1009 1010 1031 1042 1049 1052 1053 1054 1068 1073 1081 1082 1090 1107 1119 1124 1127 1128 1131 1134 1140 1143 1160 1162 }

  landunit = {
    id       = { type = 12700 id = 8 }
    name     = "香港防卫司令部 "
    location = 1315
    division = {
      id             = { type = 12700 id = 9 }
      name           = "皇家香港军团 "
      type           = garrison
      model          = 1
      extra          = artillery
      brigade_model  = 4
      strength       = 100
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 10 }
    name     = "远东防卫司令部 "
    location = 1353
    division = {
      id             = { type = 12700 id = 11 }
      name           = "新加坡卫戍要塞群 "
      type           = garrison
      model          = 1
      extra          = b_u8
      brigade_model  = 2
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 30251 id = 1 }
    name     = "第1军 "
    location = 88
    division = {
      id             = { type = 30254 id = 1 }
      name           = "第3摩托化步兵师 "
      type           = motorized
      model          = 5
      extra          = engineer
      brigade_model  = 0
      experience     = 80
    }
    division = {
      id             = { type = 30254 id = 2 }
      name           = "第49'西部骑马'步兵师 "
      type           = motorized
      model          = 5
      extra          = sp_artillery
      brigade_model  = 2
      experience     = 80
    }
    division = {
      id             = { type = 30254 id = 3 }
      name           = "第53'威尔士'步兵师 "
      type           = motorized
      model          = 5
      extra          = artillery
      brigade_model  = 1
      experience     = 80
    }
    division = {
      id             = { type = 30254 id = 4 }
      name           = "第52'低地'步兵师 "
      type           = motorized
      model          = 5
      extra          = anti_air
      brigade_model  = 1
      experience     = 80
    }
    division = {
      id             = { type = 30254 id = 5 }
      name           = "警卫步兵师 "
      type           = motorized
      model          = 5
      extra          = light_armor_brigade
      brigade_model  = 1
      experience     = 80
    }
    division = {
      id             = { type = 30254 id = 6 }
      name           = "第308步兵旅 "
      type           = infantry
      model          = 5
      strength       = 35
      max_strength   = 35
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 30251 id = 2 }
    name     = "第8军 "
    location = 85
    division = {
      id             = { type = 30254 id = 7 }
      name           = "“沙漠之鼠”第7装甲师 "
      type           = armor
      model          = 3
      extra          = heavy_armor
      brigade_model  = 1
      experience     = 90
    }
    division = {
      id             = { type = 30254 id = 8 }
      name           = "第11装甲师 "
      type           = armor
      model          = 3
      extra          = tank_destroyer
      brigade_model  = 1
      experience     = 90
    }
    division = {
      id             = { type = 30254 id = 9 }
      name           = "第55'西兰开郡'步兵师 "
      type           = motorized
      model          = 0
      extra          = artillery
      brigade_model  = 1
      experience     = 90
    }
    division = {
      id             = { type = 30254 id = 10 }
      name           = "”红魔鬼“第5空降旅 "
      type           = paratrooper
      model          = 1
      strength       = 50
      max_strength   = 50
      experience     = 90
    }
    division = {
      id             = { type = 30254 id = 11 }
      name           = "第15'苏格兰'步兵师 "
      type           = motorized
      model          = 5
      extra          = engineer
      brigade_model  = 0
      experience     = 90
    }
  }
  landunit = {
    id       = { type = 30251 id = 3 }
    name     = "第30军 "
    location = 89
    division = {
      id             = { type = 30254 id = 12 }
      name           = "第43'威塞克斯'步兵师 "
      type           = motorized
      model          = 5
      extra          = engineer
      brigade_model  = 0
      experience     = 85
    }
    division = {
      id             = { type = 30254 id = 13 }
      name           = "第5摩托化步兵师 "
      type           = motorized
      model          = 5
      extra          = artillery
      brigade_model  = 1
      experience     = 85
    }
    division = {
      id             = { type = 30254 id = 14 }
      name           = "第51'高地'步兵师 "
      type           = motorized
      model          = 5
      extra          = engineer
      brigade_model  = 0
      experience     = 85
    }
    division = {
      id             = { type = 30254 id = 15 }
      name           = "警卫装甲师 "
      type           = armor
      model          = 3
      extra          = heavy_armor
      brigade_model  = 1
      experience     = 85
    }
    division = {
      id             = { type = 30254 id = 16 }
      name           = "第305步兵旅 "
      type           = motorized
      model          = 5
      extra          = anti_air
      brigade_model  = 1
      strength       = 35
      max_strength   = 35
      experience     = 85
    }
    division = {
      id             = { type = 30254 id = 17 }
      name           = "第301摩托化步兵师 "
      type           = motorized
      model          = 5
      extra          = tank_destroyer
      brigade_model  = 1
      strength       = 35
      max_strength   = 35
      experience     = 85
    }
  }
  landunit = {
    id       = { type = 30251 id = 4 }
    name     = "莱茵集团军 "
    location = 85
    division = {
      id             = { type = 30254 id = 18 }
      name           = "莱茵集团军总部 "
      type           = hq
      model          = 2
      extra          = anti_air
      brigade_model  = 1
      experience     = 90
    }
  }
  landunit = {
    id       = { type = 30251 id = 5 }
    name     = "第8集团军 "
    location = 460
    division = {
      id             = { type = 30254 id = 19 }
      name           = "第8集团军 "
      type           = hq
      model          = 2
      experience     = 75
    }
  }
  landunit = {
    id       = { type = 30251 id = 6 }
    name     = "第5军 "
    location = 460
    division = {
      id             = { type = 30254 id = 20 }
      name           = "第6装甲师 "
      type           = armor
      model          = 3
      extra          = heavy_armor
      brigade_model  = 1
      experience     = 75
    }
    division = {
      id             = { type = 30254 id = 21 }
      name           = "第56'伦敦'步兵师 "
      type           = motorized
      model          = 5
      extra          = light_armor_brigade
      brigade_model  = 1
      experience     = 75
    }
    division = {
      id             = { type = 30254 id = 22 }
      name           = "第78摩托化步兵师 "
      type           = motorized
      model          = 5
      extra          = light_armor_brigade
      brigade_model  = 1
      experience     = 75
    }
  }
  landunit = {
    id       = { type = 30251 id = 9 }
    name     = "第14集团军 "
    location = 1353
    division = {
      id             = { type = 30254 id = 29 }
      name           = "第14集团军 "
      type           = hq
      model          = 2
      extra          = engineer
      brigade_model  = 0
      experience     = 50
    }
  }
  landunit = {
    id       = { type = 30251 id = 10 }
    name     = "第15军 "
    location = 900
    division = {
      id             = { type = 30254 id = 30 }
      name           = "第82西非步兵师 "
      type           = infantry
      model          = 5
      experience     = 50
    }
    division = {
      id             = { type = 30254 id = 31 }
      name           = "第81西非步兵师 "
      type           = infantry
      model          = 5
      experience     = 50
    }
    division = {
      id             = { type = 30254 id = 33 }
      name           = "第36步兵师 "
      type           = infantry
      model          = 5
      extra          = engineer
      brigade_model  = 0
      experience     = 55
    }
  }
  landunit = {
    id       = { type = 30251 id = 13 }
    name     = "直布罗陀司令部 "
    location = 348
    division = {
      id             = { type = 30254 id = 42 }
      name           = "直布罗陀防卫队 "
      type           = infantry
      model          = 5
      extra          = anti_air
      brigade_model  = 1
      strength       = 100
      experience     = 30
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 30251 id = 14 }
    name     = "马耳他司令部 "
    location = 31
    division = {
      id             = { type = 30254 id = 43 }
      name           = "马耳他防卫队 "
      type           = infantry
      model          = 5
      extra          = anti_air
      brigade_model  = 1
      strength       = 100
      experience     = 30
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 30251 id = 15 }
    name     = "塞浦路斯司令部 "
    location = 444
    division = {
      id             = { type = 30254 id = 44 }
      name           = "塞浦路斯防卫队 "
      type           = garrison
      model          = 1
      strength       = 100
      experience     = 30
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 30252 id = 1 }
    name     = "本土舰队 "
    location = 5
    base     = 5
    division = {
      id             = { type = 30255 id = 1 }
      name           = "百眼巨人号 "
      type           = escort_carrier
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 2 }
      name           = "暴怒号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 3 }
      name           = "可畏号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 300 }
      name           = "巨人号 "
      type           = escort_carrier
      model          = 1
    }
    division = {
      id             = { type = 30255 id = 301 }
      name           = "复仇号 "
      type           = escort_carrier
      model          = 1
    }
    division = {
      id             = { type = 30255 id = 302 }
      name           = "庄严号 "
      type           = escort_carrier
      model          = 1
    }
    division = {
      id             = { type = 30255 id = 303 }
      name           = "光荣号 "
      type           = escort_carrier
      model          = 1
    }
    division = {
      id             = { type = 30255 id = 304 }
      name           = "大洋号 "
      type           = escort_carrier
      model          = 1
    }
    division = {
      id             = { type = 30255 id = 4 }
      name           = "约克公爵号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 5 }
      name           = "贝里克号 "
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 6 }
      name           = "肯特号 "
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 7 }
      name           = "牙买加号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 8 }
      name           = "谢菲尔德号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 9 }
      name           = "德文号 "
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 10 }
      name           = "第1驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 11 }
      name           = "第2驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 12 }
      name           = "第3驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 13 }
      name           = "第4驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 14 }
      name           = "第5驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 2 }
    name     = "预备舰队 "
    location = 28
    base     = 28
    division = {
      id             = { type = 30255 id = 15 }
      name           = "独角兽号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 16 }
      name           = "安森号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 17 }
      name           = "豪号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 18 }
      name           = "乔治五世国王号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 19 }
      name           = "决心号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 20 }
      name           = "复仇号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 21 }
      name           = "皇权号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 22 }
      name           = "埃弗汉姆号 "
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 23 }
      name           = "萨福克号 "
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 24 }
      name           = "加的夫号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 25 }
      name           = "开普敦号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 26 }
      name           = "不屈号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 27 }
      name           = "卡莱尔号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 28 }
      name           = "狄俄墨得斯号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 29 }
      name           = "利物浦号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 30 }
      name           = "百慕大号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 31 }
      name           = "伯明翰号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 32 }
      name           = "纽芬兰号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 33 }
      name           = "乌干达号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 34 }
      name           = "克利奥帕特拉号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 35 }
      name           = "欧娅露丝号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 36 }
      name           = "利安德号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 37 }
      name           = "贝罗纳号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 38 }
      name           = "第6驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 39 }
      name           = "第7驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 3 }
    name     = "地中海舰队 "
    location = 444
    base     = 444
    division = {
      id             = { type = 30255 id = 40 }
      name           = "迪多号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 41 }
      name           = "月神号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 42 }
      name           = "保皇号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 43 }
      name           = "第8驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 44 }
      name           = "第9驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 45 }
      name           = "第10驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 46 }
      name           = "第11驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 47 }
      name           = "第12驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 48 }
      name           = "第13驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 49 }
      name           = "第14驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 4 }
    name     = "A舰队 "
    location = 21
    base     = 21
    division = {
      id             = { type = 30255 id = 50 }
      name           = "厌战号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 51 }
      name           = "拉米利斯号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 52 }
      name           = "马来亚号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 53 }
      name           = "罗德尼号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 54 }
      name           = "尼尔森号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 55 }
      name           = "达娜厄号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 56 }
      name           = "霍金斯号 "
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 57 }
      name           = "弗罗比舍号 "
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 58 }
      name           = "水神号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 59 }
      name           = "翡翠号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 60 }
      name           = "企业号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 61 }
      name           = "派遣号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 62 }
      name           = "天龙号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 63 }
      name           = "阿贾克斯号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 64 }
      name           = "猎户星座号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 65 }
      name           = "格拉斯哥号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 66 }
      name           = "贝尔法斯特号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 67 }
      name           = "锡拉号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 68 }
      name           = "天狼星号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 69 }
      name           = "毛里求斯号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 70 }
      name           = "谷物女神号 "
      type           = light_cruiser
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 71 }
      name           = "阿尔戈英雄号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 72 }
      name           = "黑王子号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 73 }
      name           = "王冠号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 5 }
    name     = "B舰队 "
    location = 906
    base     = 906
    division = {
      id             = { type = 30255 id = 74 }
      name           = "不安号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 75 }
      name           = "敏捷号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 76 }
      name           = "第34驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 77 }
      name           = "第35驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 78 }
      name           = "第36驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 79 }
      name           = "第21驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 80 }
      name           = "科伦坡号 "
      type           = light_cruiser
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 81 }
      name           = "第19驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 82 }
      name           = "第20驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 83 }
      name           = "第15驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 84 }
      name           = "第16驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 85 }
      name           = "第17驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 86 }
      name           = "第18驱逐舰队 "
      type           = destroyer
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 87 }
      name           = "第22驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 88 }
      name           = "第23驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 89 }
      name           = "第24驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 90 }
      name           = "第25驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 91 }
      name           = "第26驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 92 }
      name           = "第27驱逐舰队 "
      type           = destroyer
      model          = 0
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 6 }
    name     = "东印度舰队 "
    location = 1517
    base     = 1517
    division = {
      id             = { type = 30255 id = 93 }
      name           = "尼日利亚号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 94 }
      name           = "锡兰号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 95 }
      name           = "第28驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 96 }
      name           = "第29驱逐舰队 "
      type           = destroyer
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 97 }
      name           = "第30驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 7 }
    name     = "东方舰队 "
    location = 1517
    base     = 1517
    division = {
      id             = { type = 30255 id = 98 }
      name           = "胜利号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 99 }
      name           = "不屈者号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 100 }
      name           = "伊丽莎白女王号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 101 }
      name           = "声望号 "
      type           = battlecruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 102 }
      name           = "卡拉多克号 "
      type           = light_cruiser
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 103 }
      name           = "阿基里斯号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 8 }
    name     = "H舰队 "
    location = 348
    base     = 348
    division = {
      id             = { type = 30255 id = 104 }
      name           = "德里号 "
      type           = light_cruiser
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 105 }
      name           = "卡利登号 "
      type           = light_cruiser
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 106 }
      name           = "曙光女神号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 107 }
      name           = "第31驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 9 }
    name     = "印度洋舰队 "
    location = 2027
    base     = 1517
    division = {
      id             = { type = 30255 id = 108 }
      name           = "纽卡斯尔号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 109 }
      name           = "萨福克号 "
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 10 }
    name     = "远东舰队 "
    location = 1517
    base     = 1517
    division = {
      id             = { type = 30255 id = 110 }
      name           = "光辉号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 111 }
      name           = "不倦号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 112 }
      name           = "勇敢号 "
      type           = battleship
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 113 }
      name           = "苏塞克斯号 "
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 114 }
      name           = "伦敦号 "
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 115 }
      name           = "什罗普号 "
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 116 }
      name           = "冈比亚号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 117 }
      name           = "坎伯兰号 "
      type           = heavy_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 118 }
      name           = "肯尼亚号 "
      type           = light_cruiser
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 119 }
      name           = "第32驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 120 }
      name           = "第33驱逐舰队 "
      type           = destroyer
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 11 }
    name     = "第1潜艇编队 "
    location = 23
    base     = 23
    division = {
      id             = { type = 30255 id = 121 }
      name           = "第1潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 122 }
      name           = "第2潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 123 }
      name           = "第24潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 124 }
      name           = "第25潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 12 }
    name     = "第3潜艇编队 "
    location = 28
    base     = 28
    division = {
      id             = { type = 30255 id = 125 }
      name           = "第3潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 126 }
      name           = "第4潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 127 }
      name           = "第5潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 128 }
      name           = "第6潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 129 }
      name           = "第7潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 13 }
    name     = "第4潜艇编队 "
    location = 1517
    base     = 1517
    division = {
      id             = { type = 30255 id = 130 }
      name           = "第8潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 131 }
      name           = "第9潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 132 }
      name           = "第10潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 14 }
    name     = "第5潜艇编队 "
    location = 21
    base     = 21
    division = {
      id             = { type = 30255 id = 133 }
      name           = "第11潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 134 }
      name           = "第12潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 135 }
      name           = "第13潜艇舰队 "
      type           = submarine
      model          = 2
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 15 }
    name     = "第6潜艇编队 "
    location = 23
    base     = 23
    division = {
      id             = { type = 30255 id = 136 }
      name           = "第14潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 16 }
    name     = "第7潜艇编队 "
    location = 28
    base     = 28
    division = {
      id             = { type = 30255 id = 137 }
      name           = "第15潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 138 }
      name           = "第16潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 139 }
      name           = "第17潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 140 }
      name           = "第18潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 17 }
    name     = "第8潜艇编队 "
    location = 1517
    base     = 1517
    division = {
      id             = { type = 30255 id = 141 }
      name           = "第19潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 142 }
      name           = "第20潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 18 }
    name     = "第9潜艇编队 "
    location = 8
    base     = 8
    division = {
      id             = { type = 30255 id = 143 }
      name           = "第21潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 144 }
      name           = "第22潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 19 }
    name     = "第10潜艇编队 "
    location = 525
    base     = 525
    division = {
      id             = { type = 30255 id = 145 }
      name           = "第23潜艇舰队 "
      type           = submarine
      model          = 1
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 20 }
    name     = "第1运输舰编队 "
    location = 5
    base     = 5
    division = {
      id             = { type = 30255 id = 146 }
      name           = "萨福克运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 147 }
      name           = "特洛伊星运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 148 }
      name           = "玛丽女王运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 149 }
      name           = "新阿姆斯特丹运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 150 }
      name           = "斯特拉登丹运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 151 }
      name           = "埃德蒙顿堡运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 152 }
      name           = "拉尔斯湾运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 153 }
      name           = "兰利堡运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 154 }
      name           = "埃塞雷德国王运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 21 }
    name     = "第2运输舰编队 "
    location = 5
    base     = 5
    division = {
      id             = { type = 30255 id = 155 }
      name           = "君权运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 156 }
      name           = "帝国火绳枪运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 157 }
      name           = "霍罗拉塔运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 158 }
      name           = "亨利八世运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 159 }
      name           = "主教运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 160 }
      name           = "印度帝国运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 161 }
      name           = "非洲帝国运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 162 }
      name           = "皇家苏格兰运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 163 }
      name           = "皇家统治运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 22 }
    name     = "第3运输舰编队 "
    location = 21
    base     = 21
    division = {
      id             = { type = 30255 id = 164 }
      name           = "伊丽莎白女王运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 165 }
      name           = "加拿大女皇运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 166 }
      name           = "克兰麦考利运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 167 }
      name           = "山姆运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 168 }
      name           = "山姆自由运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 169 }
      name           = "山姆福伊尔运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 170 }
      name           = "山姆不朽运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 171 }
      name           = "山姆莱特岛运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 172 }
      name           = "山姆忠诚运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 23 }
    name     = "第4运输舰编队 "
    location = 444
    base     = 444
    division = {
      id             = { type = 30255 id = 173 }
      name           = "帝国船长运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 174 }
      name           = "安第斯运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 175 }
      name           = "帝国魔力运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 176 }
      name           = "山姆莫尔兹比运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 177 }
      name           = "第1运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 178 }
      name           = "第2运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 179 }
      name           = "第3运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 180 }
      name           = "第4运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 181 }
      name           = "第5运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 24 }
    name     = "第5运输舰编队 "
    location = 444
    base     = 444
    division = {
      id             = { type = 30255 id = 182 }
      name           = "埃塞克斯运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 183 }
      name           = "马洛亚运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 184 }
      name           = "帝国酋长运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 185 }
      name           = "第6运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 186 }
      name           = "第7运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 187 }
      name           = "第8运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 188 }
      name           = "第9运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 189 }
      name           = "第10运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 190 }
      name           = "第11运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 25 }
    name     = "第6运输舰编队 "
    location = 1353
    base     = 1353
    division = {
      id             = { type = 30255 id = 191 }
      name           = "斯特林堡运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 192 }
      name           = "帝国荣耀运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 193 }
      name           = "山姆火炬运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 194 }
      name           = "第12运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 195 }
      name           = "第13运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 196 }
      name           = "第14运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 197 }
      name           = "第15运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 198 }
      name           = "第16运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 199 }
      name           = "第17运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
  }
  navalunit = {
    id       = { type = 30252 id = 26 }
    name     = "第7运输舰编队 "
    location = 1299
    base     = 1299
    division = {
      id             = { type = 30255 id = 200 }
      name           = "决心运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 201 }
      name           = "杜文根堡运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 202 }
      name           = "达拉谟运输大队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 203 }
      name           = "第18运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 204 }
      name           = "第19运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 205 }
      name           = "第20运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 206 }
      name           = "第21运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 207 }
      name           = "第22运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
    division = {
      id             = { type = 30255 id = 208 }
      name           = "第23运输舰支队 "
      type           = transport
      model          = 0
      experience     = 30
    }
  }

  airunit = { 
    id       = { type = 30253 id = 1 }
    name     = "英国皇家空军第10空军联队 "
    location = 370
    base     = 370
    division = {
      id             = { type = 30256 id = 1 }
      name           = "第126中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 30256 id = 2 }
      name           = "第165中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 30256 id = 3 }
      name           = "皇家加拿大空军第406中队 "
      type           = tactical_bomber
      model          = 1
      strength       = 100
      experience     = 50
    }
    division = {
      id             = { type = 30256 id = 4 }
      name           = "皇家澳大利亚空军第464中队 "
      type           = tactical_bomber
      model          = 1
      strength       = 100
      experience     = 50
    }
  }
  airunit = { 
    id       = { type = 30253 id = 2 }
    name     = "英国皇家空军第11空军联队 "
    location = 80
    base     = 80
    division = {
      id             = { type = 30256 id = 5 }
      name           = "第1中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 30256 id = 6 }
      name           = "第501中队  "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 7 }
      name           = "第219中队 "
      type           = tactical_bomber
      model          = 1
      strength       = 100
      experience     = 45
    }
    division = {
      id             = { type = 30256 id = 8 }
      name           = "第29中队 "
      type           = tactical_bomber
      model          = 1
      strength       = 100
      experience     = 54
    }
  }
  airunit = { 
    id       = { type = 30253 id = 3 }
    name     = "第2战术空军联队第1大队 "
    location = 46
    base     = 46
    division = {
      id             = { type = 30256 id = 9 }
      name           = "第3中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 50
    }
    division = {
      id             = { type = 30256 id = 10 }
      name           = "第33中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 11 }
      name           = "第245中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 30256 id = 12 }
      name           = "第694中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 50
    }
  }
  airunit = { 
    id       = { type = 30253 id = 4 }
    name     = "第2战术空军联队第2大队 "
    location = 21
    base     = 21
    division = {
      id             = { type = 30256 id = 13 }
      name           = "第65中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 42
    }
    division = {
      id             = { type = 30256 id = 14 }
      name           = "第181中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 42
    }
    division = {
      id             = { type = 30256 id = 15 }
      name           = "皇家加拿大空军第401中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 30256 id = 16 }
      name           = "第610中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 50
    }
  }
  airunit = { 
    id       = { type = 30253 id = 5 }
    name     = "英国皇家空军第12空军联队 "
    location = 51
    base     = 51
    division = {
      id             = { type = 30256 id = 17 }
      name           = "第168中队 "
      type           = multi_role
      model          = 2
      strength       = 75
      experience     = 45
    }
    division = {
      id             = { type = 30256 id = 18 }
      name           = "第25中队 "
      type           = tactical_bomber
      model          = 1
      strength       = 75
      experience     = 50
    }
    division = {
      id             = { type = 30256 id = 19 }
      name           = "第264中队 "
      type           = tactical_bomber
      model          = 1
      strength       = 100
      experience     = 45
    }
    division = {
      id             = { type = 30256 id = 20 }
      name           = "第303中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 55
    }
  }
  airunit = { 
    id       = { type = 30253 id = 6 }
    name     = "英国皇家空军第13空军联队 "
    location = 20
    base     = 20
    division = {
      id             = { type = 30256 id = 21 }
      name           = "第504中队 "
      type           = interceptor
      model          = 1
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 22 }
      name           = "皇家加拿大空军第412中队 "
      type           = interceptor
      model          = 1
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 23 }
      name           = "第308中队 "
      type           = interceptor
      model          = 1
      strength       = 100
      experience     = 10
    }
  }
  airunit = { 
    id       = { type = 30253 id = 7 }
    name     = "英国皇家空军第14空军联队 "
    location = 20
    base     = 20
    division = {
      id             = { type = 30256 id = 24 }
      name           = "第118中队 "
      type           = interceptor
      model          = 1
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 25 }
      name           = "皇家加拿大空军第441中队 "
      type           = interceptor
      model          = 1
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 26 }
      name           = "第331中队 "
      type           = interceptor
      model          = 1
      strength       = 100
      experience     = 10
    }
  }
  airunit = { 
    id       = { type = 30253 id = 8 }
    name     = "英国皇家空军第38空军联队 "
    location = 8
    base     = 8
    division = {
      id             = { type = 30256 id = 27 }
      name           = "第190中队 "
      type           = naval_bomber
      model          = 1
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 28 }
      name           = "第297中队 "
      type           = naval_bomber
      model          = 1
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 29 }
      name           = "第570中队 "
      type           = naval_bomber
      model          = 1
      strength       = 100
      experience     = 30
    }
  }
  airunit = { 
    id       = { type = 30253 id = 9 }
    name     = "第603中队 "
    location = 67
    base     = 67
    division = {
      id             = { type = 30256 id = 30 }
      name           = "第603中队  "
      type           = interceptor
      model          = 2
      strength       = 100
      experience     = 50
    }
  }
  airunit = { 
    id       = { type = 30253 id = 10 }
    name     = "第43中队 "
    location = 348
    base     = 348
    division = {
      id             = { type = 30256 id = 31 }
      name           = "第43中队 "
      type           = interceptor
      model          = 2
      strength       = 100
      experience     = 50
    }
  }
  airunit = { 
    id       = { type = 30253 id = 11 }
    name     = "东南亚司令部第1空军联队 "
    location = 1353
    base     = 1353
    division = {
      id             = { type = 30256 id = 32 }
      name           = "第17/67/81中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 50
    }
    division = {
      id             = { type = 30256 id = 33 }
      name           = "第36/155中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 50
    }
    division = {
      id             = { type = 30256 id = 34 }
      name           = "第607/615中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 50
    }
    division = {
      id             = { type = 30256 id = 35 }
      name           = "第28/30中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 45
    }
  }
  airunit = { 
    id       = { type = 30253 id = 12 }
    name     = "东南亚司令部第2空军联队 "
    location = 404
    base     = 404
    division = {
      id             = { type = 30256 id = 36 }
      name           = "第5/11/20中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 37 }
      name           = "第42/34/42中队 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 30256 id = 38 }
      name           = "第60/79中队 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 65
    }
    division = {
      id             = { type = 30256 id = 39 }
      name           = "第183中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 30
    }
  }
  airunit = { 
    id       = { type = 30253 id = 13 }
    name     = "东南亚司令部第3空军联队"
    location = 1353
    base     = 1353
    division = {
      id             = { type = 30256 id = 40 }
      name           = "第200/203/215中队 "
      type           = strategic_bomber
      model          = 2
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 50
    }
    division = {
      id             = { type = 30256 id = 41 }
      name           = "第99/159中队 "
      type           = strategic_bomber
      model          = 2
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 70
    }
    division = {
      id             = { type = 30256 id = 42 }
      name           = "第292/355/356中队 "
      type           = strategic_bomber
      model          = 2
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 30256 id = 43 }
      name           = "皇家加拿大空军第429中队 "
      type           = strategic_bomber
      model          = 2
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 50
    }
  }
  airunit = { 
    id       = { type = 30253 id = 14 }
    name     = "东南亚司令部第4空军联队"
    location = 1353
    base     = 1353
    division = {
      id             = { type = 30256 id = 44 }
      name           = "第27/47/88中队 "
      type           = naval_bomber
      model          = 1
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 45 }
      name           = "第176/177/211中队 "
      type           = naval_bomber
      model          = 1
      strength       = 100
      experience     = 30
    }
  }
  airunit = { 
    id       = { type = 30253 id = 15 }
    name     = "东南亚司令部第5空军联队 "
    location = 1353
    base     = 1353
    division = {
      id             = { type = 30256 id = 46 }
      name           = "第31/62/117中队 "
      type           = transport_plane
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 47 }
      name           = "第194/435/436中队 "
      type           = transport_plane
      model          = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 48 }
      name           = "第45中队 "
      type           = tactical_bomber
      model          = 1
      strength       = 40
      experience     = 50
    }
    division = {
      id             = { type = 30256 id = 49 }
      name           = "第692中队 "
      type           = tactical_bomber
      model          = 1
      strength       = 100
      experience     = 40
    }
  }
  airunit = { 
    id       = { type = 30253 id = 16 }
    name     = "英国皇家空军第1空军联队 "
    location = 23
    base     = 23
    division = {
      id             = { type = 30256 id = 50 }
      name           = "第12中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 30256 id = 51 }
      name           = "第103中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 30256 id = 52 }
      name           = "第300中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 30256 id = 53 }
      name           = "第576中队  "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
  }
  airunit = { 
    id       = { type = 30253 id = 17 }
    name     = "英国皇家空军第3空军联队 "
    location = 14
    base     = 14
    division = {
      id             = { type = 30256 id = 54 }
      name           = "第15中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 55 }
      name           = "第115中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 30256 id = 56 }
      name           = "第218中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 30256 id = 57 }
      name           = "第106中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 40
    }
  }
  airunit = { 
    id       = { type = 30253 id = 18 }
    name     = "英国皇家空军第4空军联队 "
    location = 17
    base     = 17
    division = {
      id             = { type = 30256 id = 58 }
      name           = "第10中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 30256 id = 59 }
      name           = "第76中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 30256 id = 60 }
      name           = "第78中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 30256 id = 61 }
      name           = "第640中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
  }
  airunit = { 
    id       = { type = 30253 id = 19 }
    name     = "英国皇家空军第5空军联队 "
    location = 13
    base     = 13
    division = {
      id             = { type = 30256 id = 62 }
      name           = "第9中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 63 }
      name           = "第49中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 30256 id = 64 }
      name           = "第467中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 65 }
      name           = "第619中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 50
    }
  }
  airunit = { 
    id       = { type = 30253 id = 20 }
    name     = "英国皇家空军第6空军联队 "
    location = 19
    base     = 19
    division = {
      id             = { type = 30256 id = 66 }
      name           = "皇家加拿大空军第408中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 67 }
      name           = "皇家加拿大空军第424中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 30256 id = 68 }
      name           = "皇家加拿大空军第427中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 50
    }
    division = {
      id             = { type = 30256 id = 69 }
      name           = "皇家加拿大空军第432中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 40
    }
  }
  airunit = { 
    id       = { type = 30253 id = 21 }
    name     = "英国皇家空军第8空军联队 "
    location = 19
    base     = 19
    division = {
      id             = { type = 30256 id = 70 }
      name           = "第7中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 75
      experience     = 60
    }
    division = {
      id             = { type = 30256 id = 71 }
      name           = "第156中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 30256 id = 72 }
      name           = "第582中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 30256 id = 73 }
      name           = "第346中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
  }
  airunit = { 
    id       = { type = 30253 id = 22 }
    name     = "英国皇家空军第16空军联队 "
    location = 20
    base     = 20
    division = {
      id             = { type = 30256 id = 74 }
      name           = "第313中队  "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 50
    }
    division = {
      id             = { type = 30256 id = 75 }
      name           = "第64中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 50
    }
    division = {
      id             = { type = 30256 id = 76 }
      name           = "第332中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 50
    }
    division = {
      id             = { type = 30256 id = 77 }
      name           = "第132中队 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 30
    }
  }
  airunit = { 
    id       = { type = 30253 id = 23 }
    name     = "英国皇家空军第18空军联队 "
    location = 47
    base     = 47
    division = {
      id             = { type = 30256 id = 78 }
      name           = "第184中队 "
      type           = interceptor
      model          = 2
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 30256 id = 79 }
      name           = "第80中队 "
      type           = interceptor
      model          = 2
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 30256 id = 80 }
      name           = "第137中队 "
      type           = interceptor
      model          = 2
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 30256 id = 81 }
      name           = "加拿大皇家空军第416中队 "
      type           = interceptor
      model          = 2
      strength       = 100
      experience     = 45
    }
  }
  airunit = { 
    id       = { type = 30253 id = 523 }
    name     = "流星Mk III中队 "
    location = 19
    base     = 19
    division = {
      id             = { type = 30256 id = 578 }
      name           = "流星Mk III中队 "
      type           = interceptor
      model          = 2
      strength       = 50
      experience     = 40
    }
  }
  airunit = { 
    id       = { type = 30253 id = 24 }
    name     = "英国皇家空军第9空军联队 "
    location = 67
    base     = 67
    division = {
      id             = { type = 30256 id = 82 }
      name           = "第82/84/110中队 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 55
    }
    division = {
      id             = { type = 30256 id = 83 }
      name           = "第258/261/273中队 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 55
    }
    division = {
      id             = { type = 30256 id = 84 }
      name           = "第135/146/152中队 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 45
    }
    division = {
      id             = { type = 30256 id = 85 }
      name           = "第113/123/134中队 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 60
    }
  }
  airunit = { 
    id       = { type = 30253 id = 25 }
    name     = "英国皇家空军第7空军联队 "
    location = 28
    base     = 28
    division = {
      id             = { type = 30256 id = 86 }
      name           = "第61中队 "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 50
    }
    division = {
      id             = { type = 30256 id = 87 }
      name           = "第625中队  "
      type           = strategic_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 60
    }
  }

  division_development = {
    id             = { type = 30255 id = 400 }
    name           = "特修斯号 "
    type           = escort_carrier
    model          = 1
    cost           = 5.0
    date           = { year = 1946 month = february day = 9 }
    close_when_finished = no
    waitingforclosure = no
    days           = 185
  }
  division_development = {
    id             = { type = 30255 id = 600 }
    name           = "勇士号 "
    type           = escort_carrier
    model          = 1
    cost           = 5.0
    date           = { year = 1946 month = march day = 14 }
    close_when_finished = no
    waitingforclosure = no
    days           = 220
  }
  division_development = {
    id             = { type = 30255 id = 601 }
    name           = "成功号 "
    type           = escort_carrier
    model          = 1
    cost           = 5.0
    date           = { year = 1946 month = may day = 9 }
    close_when_finished = no
    waitingforclosure = no
    days           = 255
  }
}
