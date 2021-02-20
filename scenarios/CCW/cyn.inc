##############################
# Country definition for CYN #
##############################
province = {
  id = 1307 # ����
}

#####################
# Country main data #
#####################

country = {
  tag                = CYN
  regular_id         = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1307 # ����
  dissent            = 15
  extra_tc           = 4
  manpower           = 20
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50
  SpyInfo                = { country = "CYN" NumberOfSpies = 10 }

  nationalprovinces      = { 1293 1294 1305 1307 1308 1327 1362 2746 2747 2977 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 2761 2762 2763 2764 2765 2769 2770 1279 2651 2771 2772 1889 2779 1888 1360 1361 2775 2780 2976 2778 1280 2768 1265 1263 2766 2767 2773 3000 1363 2744 1262 2742 2741 2743 2740 1364 2738 1365 2737 2745 2974 1898 2774 2777 2776 1890 1281 2975 }
  ownedprovinces         = { 1293 1294 1305 1307 1308 1327 1362 2746 2747 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 2761 2763 2765 2974 }
  controlledprovinces    = { 1293 1294 1305 1307 1308 1327 1362 2746 2747 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 2761 2763 2765 2974 }

  techapps               = { 1010 4400 5050 5180 5310 2280 1020 1030 6560 6030 6120 6110 6130 74900 66540 66520 66530 66510 66500 2290 1890 1270 1040 1280 2720 }

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
  chiefofnavy            = { type = 9 id = 16119 } # �¸� H �ѵ¶� 
  chiefofair             = { type = 9 id = 16018 } # �Ϸ�?�y 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 22001 id = 1 }
    name     = "�����������60(��֮���ã��� "
    location = 1203
    division = {
      id             = { type = 22001 id = 2 }
      name           = "½����182ʦ������� "
      type           = motorized
      model          = 3
      extra          = artillery
      brigade_model  = 4
      experience     = 35
      locked         = yes
    }
    division = {
      id             = { type = 22001 id = 4 }
      name           = "½����184ʦ������� "
      type           = motorized
      model          = 3
      experience     = 35
      locked         = yes
    }
    division = {
      id             = { type = 22001 id = 3 }
      name           = "��?��21ʦ������� "
      type           = motorized
      model          = 3
      experience     = 35
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22001 id = 13 }
    name     = "�����������58�� "
    location = 1875
    division = {
      id             = { type = 22001 id = 14 }
      name           = "½����183ʦ������� "
      type           = infantry
      model          = 3
      experience     = 15
    }
    division = {
      id             = { type = 22001 id = 15 }
      name           = "��?��10ʦ������� "
      type           = infantry
      model          = 3
      experience     = 15
    }
    division = {
      id             = { type = 22001 id = 16 }
      name           = "��?��11ʦ������� "
      type           = infantry
      model          = 3
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22001 id = 9 }
    name     = "�����������93�� "
    location = 1203
    division = {
      id             = { type = 22001 id = 10 }
      name           = "½���ݱ��18ʦ������� "
      type           = militia
      model          = 4
      experience     = 15
      locked         = yes
    }
    division = {
      id             = { type = 22001 id = 11 }
      name           = "½���ݱ��20ʦ������� "
      type           = militia
      model          = 4
      experience     = 15
      locked         = yes
    }
    division = {
      id             = { type = 22001 id = 12 }
      name           = "½���ݱ��22ʦ������� "
      type           = militia
      model          = 4
      experience     = 15
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22001 id = 5 }
    name     = "?��ʡ����˾�"
    location = 1307
    division = {
      id             = { type = 22001 id = 6 }
      name           = "?��ʡ�����F"
      type           = militia
      model          = 4
    }
    division = {
      id             = { type = 22001 id = 8 }
      name           = "?��ʡ����F"
      type           = militia
      model          = 4
    }
  }
}