##############################
# Country definition for MEX #
##############################
province = {
  id = 738 # 拉巴斯（墨西哥）
}
province = { id = 747 anti_air = 1 } # 蒙特雷
province = {
  id = 749 # 坦皮科
}
province = {
  id = 751 # 瓜达拉哈拉（墨西哥）
  anti_air = 1
}
province = {
  id = 752 # 墨西哥城
  anti_air = 2
}
province = { id = 754 anti_air = 2 } # 阿卡普尔科

#####################
# Country main data #
#####################

country = {
  tag                = MEX
  capital            = 752 # 墨西哥城
  extra_tc           = 5
  manpower           = 162
  tc_mod                 = 1.1
  research_mod           = 1.1
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 20
  escorts        = 3

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = HOL value = 25 }
    relation = { tag = IRE value = 30 }
    relation = { tag = USA value = 125 }
  }

  nationalprovinces      = { 3971 4013 4014 4015 4016 4017 4018 737 738 739 740 741 742 743 744 745 747 749 750 751 752 753 754 755 756 664 758 665 757 759 760 805 806 807 4019 4020 539 540 4021 4022 728 729 730 731 4011 732 733 734 768 735 736 761 762 763 764 765 766 767 4012 706 715 716 717 718 719 720 721 746 748 726 722 723 724 725 727 }
  ownedprovinces         = { 3971 4013 4014 4015 4016 4017 4018 737 738 739 740 741 742 743 744 745 747 749 750 751 752 753 754 755 756 }
  controlledprovinces    = { 3971 4013 4014 4015 4016 4017 4018 737 738 739 740 741 742 743 744 745 747 749 750 751 752 753 754 755 756 }

  techapps               = { 5050 5080 5170 5190 5180 5660 5010 1010 2280 2290 2420 6020 6040 8010 8020 8030 8150 8160 8200 8390 8440 8530 7420 7510 1020 1030 1040 1050 1170 1180 1190 1890 2720 2800 1900 5310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 8
    freedom           = 6
    free_market       = 6
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 36001 } # 拉萨罗 卡德纳斯 
  headofgovernment       = { type = 9 id = 36002 } # 拉萨罗 卡德纳斯 
  foreignminister        = { type = 9 id = 36003 } # 爱德华多 海 
  armamentminister       = { type = 9 id = 36004 } # 恩里克 埃斯特拉达 雷诺索 
  ministerofsecurity     = { type = 9 id = 36005 } # 弗朗西斯科 U 贝纳维德 
  ministerofintelligence = { type = 9 id = 36006 } # 普卢塔科 E 卡勒 
  chiefofstaff           = { type = 9 id = 36007 } # 本杰明 G 希尔 
  chiefofarmy            = { type = 9 id = 36008 } # 巴勃罗 基罗加 埃斯卡米罗 
  chiefofnavy            = { type = 9 id = 36009 } # 赫克托 麦克薛罗 
  chiefofair             = { type = 9 id = 36010 } # 古斯塔沃 萨利纳斯 卡米纳 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_social-democracy"

  landunit = {
    id       = { type = 29500 id = 1 }
    name     = "墨西哥第1军 "
    location = 752
    division = {
      id             = { type = 29500 id = 2 }
      name           = "总统警卫队 "
      type           = motorized
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 29500 id = 3 }
      name           = "第1步兵师 "
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 29500 id = 4 }
      name           = "第2步兵师 "
      type           = infantry
      strength       = 100
    }
    division = {
      id             = { type = 29500 id = 5 }
      name           = "第3步兵师 "
      type           = infantry
      extra          = artillery
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 29500 id = 6 }
    name     = "墨西哥骑兵军 "
    location = 742
    division = {
      id             = { type = 29500 id = 7 }
      name           = "第1骑兵师 "
      type           = cavalry
      strength       = 100
    }
    division = {
      id             = { type = 29500 id = 8 }
      name           = "第2骑兵师 "
      type           = cavalry
      strength       = 100
    }
  }

  airunit = { 
    id       = { type = 29500 id = 11 }
    name     = "墨西哥第1空军联队 "
    location = 754
    base     = 754
    division = {
      id             = { type = 29500 id = 12 }
      name           = "第1截击机大队 "
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }
}
