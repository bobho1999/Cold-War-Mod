##############################
# Country definition for BUL #
##############################
province = {
  id = 417 # ������
  ic = { size = 13 current_size = 7 }
  infra = { size = 0.6 current_size = 0.55 }
  anti_air = 2
}
province = {
  id = 420 # ������
  ic = 6
  infra = { size = 0.6 current_size = 0.55 }
}
province = {
  id = 421 # ���޷�Ϸ�
  ic = { size = 7 current_size = 3 }
  infra = { size = 0.6 current_size = 0.55 }
}
province = {
  id = 422 # �߶���
  ic = { size = 7 current_size = 4 }
  infra = { size = 0.8 current_size = 0.55 }
  anti_air = 3
}

#####################
# Country main data #
#####################

country = {
  tag                = BUL
  puppet             = SOV
  control            = SOV
  capital            = 417 # ������
  dissent            = 15
  manpower           = 60
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 100

  diplomacy = {
    relation = { tag = ENG value = 20 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GRE value = -75 }
    relation = { tag = ROM value = 100 }
    relation = { tag = TUR value = 75 }
    relation = { tag = YUG value = 25 }
  }

  nationalprovinces      = { 3235 3236 3238 3239 3240 416 417 419 420 421 422 }
  ownedprovinces         = { 3235 3236 3238 3239 3240 416 417 419 420 421 422 }
  controlledprovinces    = { 3235 3236 3238 3239 3240 416 417 419 420 421 422 }

  techapps               = { 1010 1020 1030 1040 14010 14020 2010 2020 2030 2040 2050 2070 2170 2290 2290 2300 2300 2310 2310 2320 3010 3020 3030 3400 4010 4020 4030 4040 4120 4130 5010 5050 5080 5100 5130 5310 6300 6310 6320 6330 6340 8040 8050 9010 9020 9030 2060 2080 2160 2220 2230 4050 4060 4140 4170 4190 4250 5020 5220 5350 6570 66540 66520 66530 66510 66500 8010 8020 8030 9700 9710 9190 5170 5800 5190 5180 5660 2280 2360 2420 2540 2550 2430 2440 2560 1050 1060 1170 1180 1190 1200 1270 1290 1280 1890 1900 1910 1760 1770 2720 2800 2810 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 9
    freedom           = 3
    free_market       = 4
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 19051 } # ������ �����޷� 
  headofgovernment       = { type = 9 id = 19059 } # ���� ��¶���Ү�� 
  foreignminister        = { type = 9 id = 19073 } # ��¶��� �����з� 
  armamentminister       = { type = 9 id = 19090 } # ���ؿ� ���� 
  ministerofsecurity     = { type = 9 id = 19104 } # ���� �ȸ�� 
  ministerofintelligence = { type = 9 id = 19114 } # ���� ���з� 
  chiefofstaff           = { type = 9 id = 19124 } # ��ɭ ���пƷ� 
  chiefofarmy            = { type = 9 id = 19136 } # ���� ��ŵ�� 
  chiefofnavy            = { type = 9 id = 19143 } # ˹�ط� ������ 
  chiefofair             = { type = 9 id = 19150 } # ������ ������Ү�� 
  dormant_ministers      = { 19004 19005 19006 19007 19009 19001 19043 19045 19055 19066 19067 19081 19096 19097 19108 19109 19119 19130 19131 19139 19146 }

  landunit = {
    id       = { type = 19000 id = 1 }
    name     = "�������ǵ�1���ž� "
    location = 421
    division = {
      id             = { type = 19000 id = 2 }
      name           = "��1'������'����ʦ "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 4 }
      name           = "��1���ʦ "
      type           = cavalry
      model          = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 19000 id = 5 }
    name     = "�������ǵ�2���ž� "
    location = 422
    division = {
      id             = { type = 19000 id = 6 }
      name           = "��2'��������'����ʦ "
      type           = infantry
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 19000 id = 19 }
      name           = "��2���ʦ "
      type           = cavalry
      model          = 2
      strength       = 100
    }
  }
}