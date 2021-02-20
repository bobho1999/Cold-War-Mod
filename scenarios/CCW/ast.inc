##############################
# Country definition for AST #
##############################
province = {
  id = 1670 # 拉包尔
  anti_air = 2
}
province = { id = 1672 anti_air = 1 } # 莱城（新几内亚）
province = {
  id = 1679 # 莫尔兹比港
  anti_air = 1
  supplypool = 50
  oilpool = 1
}
province = {
  id = 1696 # 汤斯维尔
}
province = {
  id = 1703 # 达尔文
  ic = 1
  anti_air = 5
}
province = {
  id = 1712 # 珀斯
  coastalfort = 1
  anti_air = 5
}
province = { id = 1718 anti_air = 1 } # 麦夸里岛
province = {
  id = 1722 # 布里斯班
  ic = 3
  coastalfort = 1
  anti_air = 4
}
province = { id = 1724 ic = 1 } # 纽卡斯尔（澳洲）
province = { id = 1725 anti_air = 3 } # 纳拉布赖
province = {
  id = 1727 # 悉尼
  ic = 2
  coastalfort = 2
  anti_air = 4
}
province = {
  id = 1728 # 堪培拉
  anti_air = 2
}
province = {
  id = 1730 # 墨尔本
  ic = 2
  coastalfort = 1
  anti_air = 3
}
province = {
  id = 1733 # 阿德莱德
  ic = 2
  anti_air = 2
}

#####################
# Country main data #
#####################

country = {
  tag                = AST
  capital            = 1728 # 堪培拉
  manpower           = 110
  research_mod           = 1.1
  peacetime_ic_mod       = 0.6
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 85
  escorts        = 22

  diplomacy = {
    relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 65 }
    relation = { tag = FRA value = 0 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 40 }
    relation = { tag = SAF value = 200 }
    relation = { tag = SAU value = 50 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }

  nationalprovinces      = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726 1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734 }
  ownedprovinces         = { 1611 1666 1667 1668 1669 1670 1671 1672 1675 1676 1677 1678 1679 1680 1682 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726 1727 1728 1729 1730 1731 1732 1733 1734 3954 3955 }
  controlledprovinces    = { 1611 1666 1667 1668 1669 1670 1671 1672 1675 1676 1677 1678 1679 1680 1682 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726 1727 1728 1729 1730 1731 1732 1733 1734 3954 3955 }

  techapps               = { 5050 5080 5170 5190 5110 5180 5660 5670 5310 5010 5020 1010 2280 2290 2610 2420 2540 2010 3010 3070 3130 4120 4010 6010 6020 6040 6050 6500 8010 8020 8150 8390 8530 9010 9020 9030 7510 1020 1030 1040 1050 1170 1180 1190 1270 1280 1290 1410 1420 1430 1440 1300 1890 1900 1910 1760 1770 1780 2300 2310 2320 3080 3090 3100 3110 3020 3030 3040 4020 5800 9710 9700 78100 66500 66510 66520 66530 66540 6060 6070 8040 8030 8050 2720 2800 2810 2360 2370 2550 2560 2570 2430 2440 2450 2020 2030 2040 26100 26200 5680 5690 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 7
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 56001 } # 艾萨克 阿尔弗雷德 艾萨克斯 
  headofgovernment       = { type = 9 id = 56002 } # 约瑟夫 A 莱昂斯 
  foreignminister        = { type = 9 id = 56003 } # 乔治 F 皮尔斯 
  armamentminister       = { type = 9 id = 56004 } # 罗伯特 A 帕克希尔 
  ministerofsecurity     = { type = 9 id = 56005 } # 托马斯 帕特森 
  ministerofintelligence = { type = 9 id = 56006 } # 亚历山大 麦克拉克兰 
  chiefofstaff           = { type = 9 id = 56007 } # 约瑟夫 A 莱昂斯 
  chiefofarmy            = { type = 9 id = 56008 } # 约翰 拉瓦拉克 
  chiefofnavy            = { type = 9 id = 56009 } # 拉格纳 M 科尔文 
  chiefofair             = { type = 9 id = 56010 } # 理查德 威廉姆斯 
  nationalidentity       = "policy_economy_monopoly"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_republicanism"

  landunit = {
    id       = { type = 30001 id = 1 }
    name     = "澳大利亚第I军 "
    location = 1693
    division = {
      id             = { type = 30001 id = 2 }
      name           = "第1卫戍师 "
      type           = militia
      model          = 4
      extra          = artillery
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 30001 id = 3 }
    name     = "澳大利亚第VI军 "
    location = 1729
    division = {
      id             = { type = 30001 id = 4 }
      name           = "第6卫戍师 "
      type           = militia
      model          = 4
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 30001 id = 5 }
    name     = "澳大利亚第II军 "
    location = 1727
    division = {
      id             = { type = 30001 id = 6 }
      name           = "第1步兵师 "
      type           = infantry
      model          = 4
      extra          = artillery
      brigade_model  = 3
      strength       = 30
      experience     = 20
    }
    division = {
      id             = { type = 30001 id = 195 }
      name           = "第2步兵师 "
      type           = infantry
      model          = 4
      extra          = artillery
      brigade_model  = 3
      strength       = 30
      experience     = 20
    }
    division = {
      id             = { type = 30001 id = 226 }
      name           = "第1骑兵师 "
      type           = cavalry
      model          = 3
      strength       = 30
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 30001 id = 7 }
    name     = "澳大利亚第IV军 "
    location = 1733
    division = {
      id             = { type = 30001 id = 8 }
      name           = "第4卫戍师 "
      type           = militia
      model          = 4
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 30001 id = 9 }
    name     = "澳大利亚第V军 "
    location = 1712
    division = {
      id             = { type = 30001 id = 10 }
      name           = "第5卫戍师 "
      type           = militia
      model          = 4
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 30001 id = 11 }
    name     = "澳大利亚第VII军 "
    location = 1703
    division = {
      id             = { type = 30001 id = 12 }
      name           = "达尔文卫戍师 "
      type           = garrison
      model          = 0
      strength       = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 30001 id = 13 }
    name     = "莫尔兹比港卫戍部队 "
    location = 1679
    division = {
      id             = { type = 30001 id = 14 }
      name           = "莫尔兹比港卫戍师 "
      type           = garrison
      model          = 0
      extra          = artillery
      brigade_model  = 3
      strength       = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 30001 id = 205 }
    name     = "澳大利亚第II军 "
    location = 1730
    division = {
      id             = { type = 30001 id = 206 }
      name           = "第3步兵师 "
      type           = infantry
      model          = 4
      extra          = artillery
      brigade_model  = 3
      strength       = 30
      experience     = 20
    }
    division = {
      id             = { type = 30001 id = 207 }
      name           = "第2骑兵师 "
      type           = cavalry
      model          = 3
      strength       = 30
      experience     = 20
    }
  }

  navalunit = {
    id       = { type = 10500 id = 17 }
    name     = "澳大利亚皇家海军第I舰队 "
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 18 }
      name           = "澳大利亚号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 10500 id = 19 }
      name           = "堪培拉号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division = {
      id             = { type = 10500 id = 20 }
      name           = "悉尼号 "
      type           = light_cruiser
      model          = 2
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division = {
      id             = { type = 10500 id = 21 }
      name           = "第1驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 10500 id = 22 }
    name     = "澳大利亚皇家海军第I运输舰队 "
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 23 }
      name           = "第8运输舰编队 "
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 10500 id = 24 }
    name     = "澳大利亚皇家海军后备舰队 "
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 25 }
      name           = "阿德莱德号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
  }
  navalunit = {
    id       = { type = 10500 id = 28 }
    name     = "澳大利亚皇家海军第II运输舰队 "
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 29 }
      name           = "第1运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 30 }
      name           = "第2运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 31 }
      name           = "第3运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 32 }
      name           = "第4运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 33 }
      name           = "第5运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 34 }
      name           = "第6运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 10500 id = 35 }
      name           = "第7运输舰编队 "
      type           = transport
    }
  }

  airunit = { 
    id       = { type = 10500 id = 15 }
    name     = "澳大利亚皇家空军第I联队 "
    location = 1727
    base     = 1727
    division = {
      id             = { type = 10500 id = 16 }
      name           = "第1战术轰炸机大队 "
      type           = tactical_bomber
      model          = 1
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 10500 id = 101 }
    name           = "帕斯号 "
    type           = light_cruiser
    model          = 2
    cost           = 3.1
    date           = { year = 1936 month = july day = 4 }
    close_when_finished = no
    waitingforclosure = no
  }
  division_development = {
    id             = { type = 10500 id = 102 }
    name           = "霍巴特号 "
    type           = light_cruiser
    model          = 2
    cost           = 3.1
    date           = { year = 1936 month = january day = 13 }
    close_when_finished = no
    waitingforclosure = no
  }
}
