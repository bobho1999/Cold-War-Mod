##############################
# Country definition for HOL #
##############################
province = {
  id = 46 # 鹿特丹
}
province = {
  id = 47 # 阿姆斯特丹
}
province = {
  id = 874 # 帕拉马里博
}
province = {
  id = 1355 # 棉兰
  landfort = 5
  supplypool = 500
  oilpool = 100
}
province = {
  id = 1358 # 巨港（巴邻旁）
  landfort = 5
  supplypool = 500
  oilpool = 100
}
province = {
  id = 1628 # 雅加达
  ic = 2
  landfort = 5
  supplypool = 500
  oilpool = 100
}
province = {
  id = 1640 # 望加锡
}
province = {
  id = 1641 # 马辰（班贾尔马辛）
}
province = {
  id = 1642 # 坤甸（庞提纳克）
}
province = {
  id = 1653 # 万鸦老
}
province = {
  id = 1665 # 荷兰迪亚（查亚普拉）
}
province = {
  id = 1674 # 马老奇
}
province = { id = 3057 landfort = 1 } # 马斯特里赫特

#####################
# Country main data #
#####################

country = {
  tag                = HOL
  capital            = 47 # 阿姆斯特丹
  manpower           = 100
  # Resource Reserves
  energy         = 2500
  metal          = 2500
  rare_materials = 1000
  oil            = 500
  supplies       = 2500
  money          = 100
  transports     = 150
  escorts        = 20

  nationalprovinces      = { 49 77 78 79 3057 48 3056 3058 46 47 3744 3745 1355 3749 1356 1357 3746 3747 1359 1358 3750 1354 1628 1636 3751 1629 1630 1631 1632 1633 1634 3748 1657 1639 3759 3760 1663 1660 1659 1661 1656 1655 1654 1653 1651 3758 1652 3757 1640 3753 1643 1642 3754 1645 1648 1650 1649 1641 3755 3756 1637 1638 1635 1674 1673 1664 1665 }
  ownedprovinces         = { 49 77 78 79 3057 48 3056 3058 46 47 3748 1641 3755 3754 1642 1643 3753 3756 1650 1649 1645 1648 3757 1640 1652 3758 1651 1653 1674 1673 1664 1665 1663 1660 3760 1637 1635 1638 1639 1657 3759 1656 1659 1661 1654 1655 1358 1355 1628 1636 801 874 }
  controlledprovinces    = { 49 77 78 79 3057 48 3056 3058 46 47 3748 1641 3755 3754 1642 1643 3753 3756 1650 1649 1645 1648 3757 1640 1652 3758 1651 1653 1674 1673 1664 1665 1663 1660 3760 1637 1635 1638 1639 1657 3759 1656 1659 1661 1654 1655 1358 1355 1628 1636 801 874 }

  techapps               = { 78100 1010 1020 1030 1040 1050 1170 1180 1190 1410 1420 1430 1760 1770 1780 1890 1900 1910 2280 2290 2300 2310 2320 2540 2550 2560 2570 2420 2430 2440 2010 2020 2030 2040 26100 3070 3080 3090 3010 3020 3030 3250 3130 3140 3150 4120 4130 4140 4010 4020 4030 5050 5080 5170 5190 5800 5660 5180 5670 5680 5310 5010 5020 5110 66500 66510 66520 66530 66540 9030 9020 9010 9710 9700 6010 6020 6040 6050 6060 6070 6080 6100 2720 2800 2810 1920 2820 2360 5690 }

  policy = {
    democratic        = 8
    political_left    = 3
    freedom           = 7
    free_market       = 7
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 7
  }
  headofstate            = { type = 6 id = 8001 } # 威廉明娜 

  landunit = {
    id       = { type = 40100 id = 1 }
    name     = "雅加達守備队"
    location = 1628
    division = {
      id             = { type = 40100 id = 2 }
      name           = "雅加達守備队"
      type           = infantry
      model          = 5
      extra          = engineer
      brigade_model  = 3
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 40100 id = 5 }
    name     = "巨港守備队"
    location = 1358
    division = {
      id             = { type = 40100 id = 6 }
      name           = "巨港守備队"
      type           = infantry
      model          = 5
      extra          = engineer
      brigade_model  = 3
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 40100 id = 7 }
    name     = "棉蘭守備队"
    location = 1355
    division = {
      id             = { type = 40100 id = 8 }
      name           = "棉蘭守備队"
      type           = infantry
      model          = 5
      extra          = engineer
      brigade_model  = 3
      locked         = yes
    }
  }

  landdivision = { dormant = yes id = { type = 40100 id = 9 } name = "泗水守備队"  type = infantry model = 5 extra = engineer brigade_model = 3 locked = yes } 
}
