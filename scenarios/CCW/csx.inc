##############################
# Country definition for CSX #
##############################
province = { id = 1208 landfort = 5 } # 呼和浩特
province = { id = 1209 landfort = 8 } # 大同
province = {
  id = 1225 # 太原
  landfort = 10
}

#####################
# Country main data #
#####################

country = {
  tag                = CSX
  regular_id         = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1225 # 太原
  dissent            = 25
  extra_tc           = 20
  manpower           = 30
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50
  SpyInfo                = { country = "CSX" NumberOfSpies = 10 }

  nationalprovinces      = { 1170 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1224 1225 1226 1271 1272 1273 1397 1398 1439 1595 1810 1811 1894 2673 2748 2785 2787 2788 2789 2790 2791 2792 2793 2794 2796 2802 2803 2804 2808 2809 2810 2811 2812 2813 2814 2815 2816 2817 2819 2820 2821 2822 2823 2824 2825 2826 2827 2828 2829 2830 2831 2832 2833 2834 2835 2836 2837 2838 2839 2850 2851 2852 2853 2854 2855 2856 2857 2858 2859 2860 2861 2862 2863 2864 2865 2866 2867 2868 2869 2870 2871 2872 2873 2874 2875 2876 2881 2939 2940 2941 2942 2943 2944 2945 2946 2947 2992 2993 2994 1386 }
  ownedprovinces         = { 1209 1225 2820 2823 2824 2825 2832 2834 2835 2836 1208 2814 1439 2813 2812 2811 2830 2833 }
  controlledprovinces    = { 1209 1225 2820 2823 2824 2825 2832 2834 2835 2836 1208 2814 1439 2813 2812 2811 2830 2833 }

  techapps               = { 1010 1020 8000 4400 5050 5180 5310 5010 2280 1170 1180 1030 6500 6510 6530 6590 6560 6030 6120 6110 6130 74900 66540 66510 66500 66520 66530 2290 1190 1040 1890 2720 1900 2800 1910 2810 2300 6140 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 6 id = 503001 } # 阎锡山 
  headofgovernment       = { type = 6 id = 503002 } # 阎锡山 
  chiefofnavy            = { type = 9 id = 16119 } # 奥格 H 费德尔 
  chiefofair             = { type = 9 id = 16008 } # 埃里克 维特 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 22002 id = 11 }
    name     = "国民革命军第19军 "
    location = 1208
    division = {
      id             = { type = 22002 id = 12 }
      name           = "陆军第68师（晋军） "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 13 }
      name           = "陆军暫編第37师（晋军）"
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 20 }
      name           = "陆军暫編第42师（晋军）"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 21 }
    name     = "国民革命军第23军 "
    location = 2834
    division = {
      id             = { type = 22002 id = 22 }
      name           = "陆军暫編第40师（晋军） "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 23 }
      name           = "陆军暫編第46师（晋军）"
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 24 }
      name           = "陆军暫編第47师（晋军）"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 14 }
    name     = "国民革命军第33军 "
    location = 1225
    division = {
      id             = { type = 22002 id = 15 }
      name           = "陆军第71师（晋军） "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 16 }
      name           = "陆军暫編第38师（晋军）"
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 25 }
      name           = "陆军暫編第46师（晋军）"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 5 }
    name     = "国民革命军第34军 "
    location = 1225
    division = {
      id             = { type = 22002 id = 6 }
      name           = "陆军第73师（晋军） "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 7 }
      name           = "陆军暫編第44师（晋军）"
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 26 }
      name           = "陆军暫編第45师（晋军）"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 8 }
    name     = "国民革命军第61军 "
    location = 2834
    division = {
      id             = { type = 22002 id = 9 }
      name           = "陆军第69师（晋军） "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 10 }
      name           = "陆军第72师（晋军）"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 28 }
    name     = "国民革命军第83军 "
    location = 1225
    division = {
      id             = { type = 22002 id = 29 }
      name           = "陆军第66师（晋军） "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 30 }
      name           = "陆军暫編第49师（晋军） "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 31 }
      name           = "陆军暫編第50师（晋军）"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 17 }
    name     = "国民革命军骑兵第1军 "
    location = 2830
    division = {
      id             = { type = 22002 id = 18 }
      name           = "陆军骑兵第1师（晋军） "
      type           = cavalry
      model          = 2
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 19 }
      name           = "陆军骑兵第2师（晋军）"
      type           = cavalry
      model          = 2
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 43 }
    name     = "国民革命军第43军 "
    location = 1209
    division = {
      id             = { type = 22002 id = 44 }
      name           = "陆军第70师（晋军） "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 45 }
      name           = "陆军第49师（晋军）"
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 46 }
      name           = "陆军暫編第39师（晋军）"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 506 }
    name     = "太原城防 "
    location = 1225
    division = {
      id             = { type = 22002 id = 606 }
      name           = "太原城防"
      type           = garrison
      model          = 0
      extra          = engineer
      brigade_model  = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22002 id = 507 }
    name     = "大同城防 "
    location = 1209
    division = {
      id             = { type = 22002 id = 607 }
      name           = "大同城防"
      type           = garrison
      model          = 1
      extra          = engineer
      brigade_model  = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22002 id = 508 }
    name     = "歸綏城防 "
    location = 1208
    division = {
      id             = { type = 22002 id = 608 }
      name           = "歸綏城防" #歸綏
      type           = garrison
      model          = 0
      extra          = engineer
      brigade_model  = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22002 id = 27 }
    name     = "山西省保安司令部"
    location = 1225
    division = {
      id             = { type = 22002 id = 36 }
      name           = "山西省保安團"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 22002 id = 38 }
      name           = "山西省民防團"
      type           = militia
      model          = 3
    }
  }
  landunit = {
    id       = { type = 22002 id = 39 }
    name     = "綏遠省保安司令部"  #綏遠
    location = 1208
    division = {
      id             = { type = 22002 id = 47 }
      name           = "綏遠省保安團"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 22002 id = 49 }
      name           = "綏遠省民防團"
      type           = militia
      model          = 3
    }
  }
}
