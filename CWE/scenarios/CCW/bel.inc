##############################
# Country definition for BEL #
##############################
province = {
  id = 45 # ����
}
province = {
  id = 50 # ��������
  anti_air = 2
}
province = {
  id = 51 # ��³����
  anti_air = 1
}
province = { id = 68 landfort = 2 anti_air = 2 } # ����
province = {
  id = 1095 # ������
  supplypool = 50
  oilpool = 1
}

#####################
# Country main data #
#####################

country = {
  tag                = BEL
  capital            = 51 # ��³����
  manpower           = 40
  tc_mod                 = 1.1
  research_mod           = 1.2
  peacetime_ic_mod       = 0.8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100
  escorts        = 20

  diplomacy = {
    relation = { tag = AST value = 75 }
    relation = { tag = CAN value = 150 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = GER value = 20 }
    relation = { tag = HOL value = 150 }
    relation = { tag = IRE value = 75 }
    relation = { tag = ITA value = -5 }
    relation = { tag = JAP value = -25 }
    relation = { tag = LUX value = 200 }
    relation = { tag = NOR value = 100 }
    relation = { tag = NZL value = 20 }
    relation = { tag = POR value = -20 }
    relation = { tag = SAF value = 35 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 1 }

  nationalprovinces      = { 45 50 51 69 3055 52 65 68 70 71 3101 1071 1072 1073 1074 1143 1095 3382 3383 1098 1127 1142 1144 3384 }
  ownedprovinces         = { 1063 1071 1072 1073 1074 1095 1098 1127 1142 1143 1144 3055 3101 3364 3382 3383 3384 45 50 51 52 65 68 69 70 }
  controlledprovinces    = { 1063 1071 1072 1073 1074 1095 1098 1127 1142 1143 1144 3055 3101 3364 3382 3383 3384 45 50 51 52 65 68 69 70 }

  techapps               = { 5050 5080 5170 5190 5110 5200 5180 5660 5670 5680 5310 5010 1010 2280 2290 2610 2420 2540 2550 2010 2020 4120 4010 3490 3550 3600 3010 3070 6010 6020 6040 6100 6050 8010 8020 8030 8040 9010 7430 7510 6060 6070 6080 66540 66520 66530 66510 66500 1050 1040 1030 1020 1170 1180 1190 1760 1770 1780 1200 1890 1900 1910 2810 2800 2720 5800 5020 5690 5220 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 3
    freedom           = 10
    free_market       = 9
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 15001 } # ���²��� ���� 
  headofgovernment       = { type = 9 id = 15002 } # ���� �� ���� 
  foreignminister        = { type = 9 id = 15003 } # ���� �� ���� 
  armamentminister       = { type = 9 id = 15004 } # �������� ��Τ�� 
  ministerofsecurity     = { type = 9 id = 15005 } # ŷ�� �յ� 
  ministerofintelligence = { type = 9 id = 15006 } # �������� ��Τ�� 
  chiefofstaff           = { type = 9 id = 15007 } # ��˹�� ������ 
  chiefofarmy            = { type = 9 id = 15008 } # ά���� �� ˹�����ؿ� �� �ȿ˶� 
  chiefofnavy            = { type = 9 id = 15009 } # G. ��Ĭ��˹ 
  chiefofair             = { type = 9 id = 15010 } # L F E ��̩ 
  nationalidentity       = "policy_economy_Colonialism"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_conservatism"

  landunit = {
    id       = { type = 11500 id = 1 }
    name     = "����ʱ��I�� "
    location = 51
    division = {
      id             = { type = 11500 id = 2 }
      name           = "��1����ʦ "
      type           = motorized
      model          = 0
      extra          = b_u8
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11500 id = 3 }
    name     = "����ʱ��II�� "
    location = 52
    division = {
      id             = { type = 11500 id = 4 }
      name           = "��2����ʦ "
      type           = infantry
      model          = 0
      experience     = 15
    }
    division = {
      id             = { type = 11500 id = 5 }
      name           = "��3����ʦ "
      type           = infantry
      model          = 0
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11500 id = 6 }
    name     = "����ʱ��III�� "
    location = 51
    division = {
      id             = { type = 11500 id = 7 }
      name           = "��1�Ա�ʦ "
      type           = motorized
      model          = 0
      extra          = artillery
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 11500 id = 8 }
    name     = "����ʱ��IV�� "
    location = 69
    division = {
      id             = { type = 11500 id = 9 }
      name           = "��4����ʦ "
      type           = infantry
      model          = 0
      extra          = police
      experience     = 15
    }
    division = {
      id             = { type = 11500 id = 10 }
      name           = "��5����ʦ "
      type           = infantry
      model          = 0
      extra          = artillery
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11500 id = 11 }
    name     = "����ʱ��V�� "
    location = 70
    division = {
      id             = { type = 11500 id = 12 }
      name           = "��6����ʦ "
      type           = infantry
      model          = 0
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11500 id = 13 }
    name     = "����ʱģ���� "
    location = 68
    division = {
      id             = { type = 11500 id = 14 }
      name           = "��2ʦ "
      type           = motorized
      model          = 0
      extra          = artillery
      experience     = 15
    }
    division = {
      id             = { type = 11500 id = 15 }
      name           = "��7����ʦ "
      type           = motorized
      model          = 0
      extra          = artillery
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11500 id = 16 }
    name     = "����ʱ��VII�� "
    location = 45
    division = {
      id             = { type = 11500 id = 17 }
      name           = "��1ɽ��ʦ "
      type           = bergsjaeger
      model          = 0
      extra          = engineer
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11500 id = 18 }
    name     = "����ʱǹ��� "
    location = 51
    division = {
      id             = { type = 11500 id = 19 }
      name           = "��1Ħ��ʦ "
      type           = motorized
      model          = 1
      extra          = light_armor_brigade
      experience     = 15
    }
    division = {
      id             = { type = 11500 id = 20 }
      name           = "��1ָ�����ʦ "
      type           = cavalry
      model          = 1
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11500 id = 21 }
    name     = "ֳ����� "
    location = 1095
    division = {
      id             = { type = 11500 id = 22 }
      name           = "��1ֳ��ʦ "
      type           = militia
      model          = 0
      experience     = 15
    }
  }

  navalunit = {
    id       = { type = 11500 id = 23 }
    name     = "����ʱ���佢�� "
    location = 45
    base     = 45
    division = {
      id             = { type = 11500 id = 24 }
      name           = "��1���佢��� "
      type           = transport
    }
    division = {
      id             = { type = 11500 id = 26 }
      name           = "��2���佢��� "
      type           = transport
    }
  }
}