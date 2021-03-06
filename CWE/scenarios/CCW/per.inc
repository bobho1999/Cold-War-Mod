##############################
# Country definition for PER #
##############################
province = {
  id = 1497 # ����˹��
  anti_air = 2
}
province = {
  id = 1825 # ɳ���ն��ۣ���÷��ۣ�
}

#####################
# Country main data #
#####################

country = {
  tag                = PER
  capital            = 1502 # �º���
  extra_tc           = 5
  manpower           = 105
  research_mod           = 1.15
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 15
  escorts        = 3

  diplomacy = {
    relation = { tag = AFG value = 25 }
    relation = { tag = DEN value = 50 }
    relation = { tag = ENG value = 25 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = SAU value = 100 }
    relation = { tag = SOV value = -20 }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = -50 }
  }

  nationalprovinces      = { 1495 1496 1497 1498 1499 1500 1501 1502 1503 1787 1788 1789 1825 1826 1859 3881 3882 3883 3884 3885 3886 3887 3888 3889 3890 3891 3892 3893 3894 3895 3896 3897 3898 3899 3900 3901 3902 3903 3904 3905 3949 3906 }
  ownedprovinces         = { 1495 1496 1497 1498 1499 1500 1501 1502 1788 1789 1825 1826 3881 3883 3886 3889 3890 3891 3892 3893 3894 3895 3896 3897 3898 3899 3900 3901 3902 3903 3904 3905 }
  controlledprovinces    = { 1495 1496 1497 1498 1499 1500 1501 1502 1788 1789 1825 1826 3881 3883 3886 3889 3890 3891 3892 3893 3894 3895 3896 3897 3898 3899 3900 3901 3902 3903 3904 3905 }

  techapps               = { 5050 5180 5660 1010 7420 7510 1020 1030 1040 1050 1170 1180 1190 1270 1890 1900 3010 3020 5310 5010 5020 66500 66510 66520 66530 66540 6390 6400 6420 78100 9700 9710 9010 9020 9030 8010 8020 8030 2800 2720 2280 2290 2420 2360 2300 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 53001 } # ���� ɳ�� ����ά 
  headofgovernment       = { type = 9 id = 53002 } # ����ï�� ��ķ 
  foreignminister        = { type = 9 id = 53003 } # ��ŵ��ͼ�� �� ���� 
  armamentminister       = { type = 9 id = 53004 } # �������� �� �ɺռ��� 
  ministerofsecurity     = { type = 9 id = 53005 } # ���� ���˰Ͷ� ���� 
  ministerofintelligence = { type = 9 id = 53006 } # ���� ������ 
  chiefofstaff           = { type = 9 id = 53007 } # ���� ɳ�� ����ά 
  chiefofarmy            = { type = 9 id = 53008 } # ������������ ������� 
  chiefofnavy            = { type = 9 id = 53009 } # �������� ���� ��˹������ 
  chiefofair             = { type = 9 id = 53010 } # �������� �� �ɺռ��� 
  nationalidentity       = "policy_economy_Laisser-faire"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_regality"

  landunit = {
    id       = { type = 16600 id = 1 }
    name     = "��˹�۹���1�� "
    location = 1502
    division = {
      id             = { type = 16600 id = 2 }
      name           = "��1����ʦ "
      type           = infantry
      extra          = artillery
    }
    division = {
      id             = { type = 16600 id = 3 }
      name           = "��1���ʦ "
      type           = cavalry
      extra          = b_u4
    }
  }
}
