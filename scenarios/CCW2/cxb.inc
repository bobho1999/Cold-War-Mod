##############################
# Country definition for CXB #
##############################
province = {
  id = 2810 # ���
  infra = { size = 0.1 current_size = 0.1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CXB
  regular_id         = CHI
  puppet             = CHI
  control            = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1443 # ����
  dissent            = 25
  extra_tc           = 2
  manpower           = 15
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50
  SpyInfo                = { country = "CXB" NumberOfSpies = 10 }

  nationalprovinces      = { 1275 1276 1277 1442 1441 1440 1443 1274 1444 2796 2797 2798 2799 2800 2801 2805 2806 2807 2955 2956 2958 2959 2960 2961 2963 2808 2809 2804 2802 2803 1273 2810 2811 }
  ownedprovinces         = { 1273 2810 2802 2804 2808 2809 2803 2801 2806 2805 2807 1440 1441 1443 1442 2955 2956 2958 2961 1444 2963 2960 2959 }
  controlledprovinces    = { 1273 2810 2802 2804 2808 2809 2803 2801 2806 2805 2807 1440 1441 1443 1442 2955 2956 2958 2961 1444 2963 2960 2959 }

  techapps               = { 1010 5180 5310 1020 1170 1180 6560 6030 6120 74900 1030 1190 1890 66540 66510 66520 66530 66500 2720 1040 1900 2800 6110 6130 6140 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 10
    interventionism   = 3
  }
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_conservatism"

  landunit = {
    id       = { type = 22003 id = 1 }
    name     = "��������������5(�����ˣ��� "
    location = 1435
    division = {
      id             = { type = 22003 id = 2 }
      name           = "½�������5ʦ������������ "
      type           = cavalry
      model          = 2
      extra          = artillery
      brigade_model  = 2
      experience     = 35
    }
    division = {
      id             = { type = 22003 id = 3 }
      name           = "½�������T����1ʦ������������"
      type           = cavalry
      model          = 2
      extra          = artillery
      brigade_model  = 2
      experience     = 35
    }
    division = {
      id             = { type = 22003 id = 4 }
      name           = "½�������T����2ʦ������������ "
      type           = cavalry
      model          = 2
      extra          = artillery
      brigade_model  = 2
      experience     = 35
    }
  }
  landunit = {
    id       = { type = 22003 id = 5 }
    name     = "�����������11�� "
    location = 2811
    division = {
      id             = { type = 22003 id = 6 }
      name           = "½����168ʦ������������ "
      type           = militia
      model          = 3
      experience     = 15
    }
    division = {
      id             = { type = 22003 id = 7 }
      name           = "½����7ʦ������������"
      type           = militia
      model          = 3
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22003 id = 8 }
    name     = "�����������81�� "
    location = 2802
    division = {
      id             = { type = 22003 id = 9 }
      name           = "½����35ʦ������������ "
      type           = militia
      model          = 3
      experience     = 15
    }
    division = {
      id             = { type = 22003 id = 15 }
      name           = "½��������60ʦ������������ "
      type           = militia
      model          = 3
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22003 id = 10 }
    name     = "�����������82�� "
    location = 1443
    division = {
      id             = { type = 22003 id = 11 }
      name           = "½����100ʦ������������ "
      type           = militia
      model          = 3
      experience     = 15
    }
    division = {
      id             = { type = 22003 id = 16 }
      name           = "½��������61ʦ������������ "
      type           = militia
      model          = 3
      experience     = 15
    }
    division = {
      id             = { type = 22003 id = 17 }
      name           = "½���¾��T����8ʦ������������ "
      type           = cavalry
      model          = 2
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22003 id = 12 }
    name     = "�ຣʡ����˾�"
    location = 1440
    division = {
      id             = { type = 22003 id = 13 }
      name           = "�ຣʡ�����F"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 22003 id = 31 }
      name           = "�ຣʡ����F"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 22003 id = 14 }
      name           = "�ຣ���ʦ"
      type           = cavalry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 22003 id = 18 }
    name     = "����ʡ����˾�"
    location = 1273
    division = {
      id             = { type = 22003 id = 19 }
      name           = "����ʡ�����F"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 22003 id = 33 }
      name           = "����ʡ����F"
      type           = militia
      model          = 3
    }
  }

  landdivision = { dormant = yes id = { type = 22003 id = 20 } name = "������?"  type = garrison model = 1 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 22003 id = 21 } name = "������?"  type = garrison model = 1 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 22003 id = 22 } name = "������?"  type = garrison model = 1 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 22003 id = 23 } name = "������?"  type = garrison model = 1 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 22003 id = 24 } name = "������?"  type = garrison model = 1 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 22003 id = 25 } name = "������?"  type = garrison model = 1 extra = engineer brigade_model = 3 locked = yes } 
}