##############################
# Country definition for CSX #
##############################
province = { id = 1208 landfort = 5 } # ���ͺ���
province = { id = 1209 landfort = 8 } # ��ͬ
province = {
  id = 1225 # ̫ԭ
  landfort = 10
}

#####################
# Country main data #
#####################

country = {
  tag                = CSX
  regular_id         = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1225 # ̫ԭ
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

  techapps               = { 1010 1020 8000 4400 5050 5180 5310 5010 2280 1170 1180 1030 6500 6510 6530 6590 6560 6030 6120 6110 6130 74900 66540 66510 66500 66520 66530 2290 1190 1040 1890 2720 }

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
  headofstate            = { type = 6 id = 503001 } # ����ɽ 
  headofgovernment       = { type = 6 id = 503002 } # ����ɽ 
  chiefofnavy            = { type = 9 id = 16119 } # �¸� H �ѵ¶� 
  chiefofair             = { type = 9 id = 16008 } # ����� ά�� 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 22002 id = 11 }
    name     = "�����������19�� "
    location = 1208
    division = {
      id             = { type = 22002 id = 12 }
      name           = "½����68ʦ�������� "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 13 }
      name           = "��?��37ʦ��������"
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 20 }
      name           = "��?��42ʦ��������"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 21 }
    name     = "�����������23�� "
    location = 2834
    division = {
      id             = { type = 22002 id = 22 }
      name           = "��?��40ʦ�������� "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 23 }
      name           = "��?��46ʦ��������"
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 24 }
      name           = "��?��47ʦ��������"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 14 }
    name     = "�����������33�� "
    location = 1225
    division = {
      id             = { type = 22002 id = 15 }
      name           = "½����71ʦ�������� "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 16 }
      name           = "��?��38ʦ��������"
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 25 }
      name           = "��?��46ʦ��������"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 5 }
    name     = "�����������34�� "
    location = 1225
    division = {
      id             = { type = 22002 id = 6 }
      name           = "½����73ʦ�������� "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 7 }
      name           = "��?��44ʦ��������"
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 26 }
      name           = "��?��45ʦ��������"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 8 }
    name     = "�����������61�� "
    location = 2834
    division = {
      id             = { type = 22002 id = 9 }
      name           = "½����69ʦ�������� "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 10 }
      name           = "½����72ʦ��������"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 28 }
    name     = "�����������83�� "
    location = 1225
    division = {
      id             = { type = 22002 id = 29 }
      name           = "½����66ʦ�������� "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 30 }
      name           = "��?��49ʦ�������� "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 31 }
      name           = "��?��50ʦ��������"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 17 }
    name     = "��������������1�� "
    location = 2830
    division = {
      id             = { type = 22002 id = 18 }
      name           = "½�������1ʦ�������� "
      type           = cavalry
      model          = 2
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 19 }
      name           = "½�������2ʦ��������"
      type           = cavalry
      model          = 2
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 43 }
    name     = "�����������43�� "
    location = 1209
    division = {
      id             = { type = 22002 id = 44 }
      name           = "½����70ʦ�������� "
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 45 }
      name           = "½����49ʦ��������"
      type           = militia
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 22002 id = 46 }
      name           = "��?��39ʦ��������"
      type           = militia
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 22002 id = 506 }
    name     = "̫ԭ�Ƿ� "
    location = 1225
    division = {
      id             = { type = 22002 id = 606 }
      name           = "̫ԭ�Ƿ�"
      type           = garrison
      model          = 0
      extra          = engineer
      brigade_model  = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22002 id = 507 }
    name     = "��ͬ�Ƿ� "
    location = 1209
    division = {
      id             = { type = 22002 id = 607 }
      name           = "��ͬ�Ƿ�"
      type           = garrison
      model          = 1
      extra          = engineer
      brigade_model  = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22002 id = 508 }
    name     = "�w?�Ƿ� "
    location = 1208
    division = {
      id             = { type = 22002 id = 608 }
      name           = "�w?�Ƿ�"
      type           = garrison
      model          = 0
      extra          = engineer
      brigade_model  = 0
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22002 id = 27 }
    name     = "ɽ��ʡ����˾�"
    location = 1225
    division = {
      id             = { type = 22002 id = 36 }
      name           = "ɽ��ʡ�����F"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 22002 id = 38 }
      name           = "ɽ��ʡ����F"
      type           = militia
      model          = 3
    }
  }
  landunit = {
    id       = { type = 22002 id = 39 }
    name     = "?�hʡ����˾�"
    location = 1208
    division = {
      id             = { type = 22002 id = 47 }
      name           = "?�hʡ�����F"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 22002 id = 49 }
      name           = "?�hʡ����F"
      type           = militia
      model          = 3
    }
  }
}