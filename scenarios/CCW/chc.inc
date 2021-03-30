##############################
# Country definition for CHC #
##############################
province = {
  id = 1219 # 南通
}
province = {
  id = 1239 # 寧波
}
province = {
  id = 1271 # 延安
  infra = { size = 1 current_size = 1 }
  landfort = 5
}
province = {
  id = 2619 # 淮安
  ic = { size = 1 current_size = 1 }
  infra = { size = 0.8 current_size = 0.8 }
  landfort = 3
  supplypool = 1000
}
province = { id = 2654 landfort = 8 supplypool = 750 } # 黃岡
province = {
  id = 2822 # 五台山
  ic = { size = 1 current_size = 1 }
  infra = { size = 0.8 current_size = 0.8 }
  landfort = 7
  supplypool = 1000
  oilpool = 500
}
province = {
  id = 2831 # 遼縣
  ic = { size = 1 current_size = 1 }
  infra = { size = 0.8 current_size = 0.8 }
  landfort = 7
  supplypool = 1000
  oilpool = 500
}
province = {
  id = 2856 # 蒙陰
  ic = { size = 1 current_size = 1 }
  infra = { size = 0.8 current_size = 0.8 }
  landfort = 7
  supplypool = 1000
  oilpool = 500
}
province = {
  id = 2861 # 威海衛
  ic = { size = 1 current_size = 1 }
}
province = {
  id = 2947 # 蔚縣
  ic = { size = 1 current_size = 1 }
  landfort = 7
  supplypool = 1000
  oilpool = 500
}
province = {
  id = 2992 # 武強
  ic = { size = 1 current_size = 1 }
  infra = { size = 0.7 current_size = 0.7 }
  landfort = 3
  supplypool = 1000
  oilpool = 500
}
province = {
  id = 3768 # 五指山
  ic = { size = 1 current_size = 1 }
  infra = { size = 0.8 current_size = 0.8 }
  landfort = 7
  supplypool = 1000
  oilpool = 500
}

#####################
# Country main data #
#####################

country = {
  tag                = CHC
  intrinsic_gov_type = leninist
  capital            = 1271 # 延安
  extra_tc           = 7
  manpower           = 100
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 800
  money          = 20

  diplomacy = {
    relation = { tag = CHI value = -100 }
    relation = { tag = CGX value = -50 }
    relation = { tag = SOV value = 150 access = yes }
    relation = { tag = JAP value = 0 }
    relation = { tag = CYN value = 0 }
  }
  SpyInfo                = { country = "CHC" NumberOfSpies = 10 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 15 }
  SpyInfo                = { country = "MON" NumberOfSpies = 5 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 5 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 5 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 5 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 5 }
  SpyInfo                = { country = "U01" NumberOfSpies = 5 }

  nationalprovinces      = { 1170 1192 1193 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1219 1220 1221 1222 1223 1224 1225 1226 1227 1228 1229 1230 1231 1232 1233 1234 1235 1236 1237 1238 1239 1240 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1271 1272 1273 1274 1275 1276 1277 1278 1279 1280 1281 1282 1283 1293 1294 1305 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1327 1360 1361 1362 1363 1364 1365 1374 1375 1377 1378 1379 1380 1381 1382 1385 1386 1387 1388 1389 1390 1394 1395 1396 1397 1398 1399 1401 1402 1403 1404 1418 1419 1420 1421 1430 1431 1432 1433 1434 1435 1436 1437 1438 1439 1440 1441 1442 1443 1444 1445 1446 1447 1448 1450 1451 1452 1453 1455 1530 1595 1623 1779 1810 1811 1875 1876 1884 1885 1886 1887 1888 1889 1890 1894 1898 2605 2606 2607 2608 2609 2610 2611 2612 2613 2614 2615 2616 2617 2618 2619 2620 2621 2622 2623 2624 2625 2626 2627 2628 2629 2630 2631 2632 2633 2634 2635 2636 2637 2638 2639 2640 2641 2642 2643 2644 2645 2646 2647 2648 2649 2650 2651 2652 2653 2654 2655 2656 2657 2658 2659 2660 2661 2662 2663 2664 2665 2666 2667 2668 2669 2670 2671 2672 2673 2674 2675 2676 2677 2678 2679 2680 2681 2682 2683 2684 2685 2686 2687 2688 2689 2690 2691 2692 2693 2694 2695 2696 2697 2698 2699 2700 2701 2702 2703 2704 2705 2706 2707 2708 2709 2710 2711 2712 2713 2714 2715 2716 2717 2718 2719 2720 2721 2722 2723 2724 2725 2726 2727 2728 2729 2730 2731 2732 2733 2734 2735 2736 2737 2738 2739 2740 2741 2742 2743 2744 2745 2746 2747 2748 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 2761 2762 2763 2764 2765 2766 2767 2768 2769 2770 2771 2772 2773 2774 2775 2776 2777 2778 2779 2780 2781 2782 2783 2784 2785 2786 2787 2788 2789 2790 2791 2792 2793 2794 2795 2796 2797 2798 2799 2800 2801 2802 2803 2804 2805 2806 2807 2808 2809 2810 2811 2812 2813 2814 2815 2816 2817 2818 2819 2820 2821 2822 2823 2824 2825 2826 2827 2828 2829 2830 2831 2832 2833 2834 2835 2836 2837 2838 2839 2840 2841 2842 2843 2844 2845 2846 2847 2848 2849 2850 2851 2852 2853 2854 2855 2856 2857 2858 2859 2860 2861 2862 2863 2864 2865 2866 2867 2868 2869 2870 2871 2872 2873 2875 2876 2877 2878 2879 2880 2881 2882 2883 2884 2885 2886 2887 2888 2889 2890 2891 2892 2893 2894 2895 2896 2897 2898 2899 2900 2901 2902 2903 2904 2905 2906 2907 2908 2909 2910 2911 2912 2913 2914 2915 2916 2917 2918 2919 2920 2921 2922 2923 2924 2925 2926 2927 2928 2929 2930 2931 2932 2933 2934 2935 2936 2937 2938 2939 2940 2941 2942 2943 2944 2945 2946 2947 2948 2949 2950 2951 2952 2953 2954 2957 2962 2964 2965 2966 2967 2968 2969 2970 2971 2972 2973 2974 2975 2976 2977 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2989 2996 2997 2998 2999 3000 3464 3470 3471 3472 3478 3480 3481 3590 3591 3592 3593 3594 3767 3768 2874 2990 2991 2992 2993 2994 2995 3669 2955 2956 2958 2959 2960 2961 2963 }
  ownedprovinces         = { 6596 6597 6598 6599 6600 6601 6602 6603 6604 6605 1271 1272 2789 2791 2792 2794 2796 2790 2826 2827 2828 2829 2816 2819 2821 2822 2831 2837 1226 1207 2611 2612 2609 2613 2618 2619 2620 2621 1219 2615 2942 2943 2945 2946 2874 2875 2876 2947 2944 1206 2881 1595 2865 2992 2993 2994 2867 2748 1811 1212 1317 3767 3768 2709 2710 1314 2856 2857 2858 2859 2860 2861 2862 2863 2864 1213 1170 1894 2850 2851 2852 1214 1239 2841 2842 1388 1397 2879 2654 }
  controlledprovinces    = { 6596 6597 6598 6599 6600 6601 6602 6603 6604 6605 1271 1272 2789 2791 2792 2794 2796 2790 2826 2827 2828 2829 2816 2819 2821 2822 2831 2837 1226 1207 2611 2612 2609 2613 2618 2619 2620 2621 1219 2615 2942 2943 2945 2946 2874 2875 2876 2947 2944 1206 2881 1595 2865 2992 2993 2994 2867 2748 1811 1212 1317 3767 3768 2709 2710 1314 2856 2857 2858 2859 2860 2861 2862 2863 2864 1213 1170 1894 2850 2851 2852 1214 1239 2841 2842 1388 1397 2879 2654 }

  techapps               = { 1010 5310 5010 5180 1020 1030 2280 1040 7800 1270 1280 1290 1300 6570 6300 14140 14150 14160 14170 14180 78000 2290 66500 66510 66520 66530 66540 1170 1890 2720 1180 1900 2800 1910 2810 1050 1310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 2
    free_market       = 1
    professional_army = 3
    defense_lobby     = 10
    interventionism   = 5
  }
  chiefofnavy            = { type = 9 id = 16119 } # 奥格 H 费德尔 
  chiefofair             = { type = 9 id = 16038 } # 共產黨 
  socialpolicy           = "policy_social_revolutionary"
  nationalculture        = "policy_political_new-democratic"

  landunit = {
    id       = { type = 11571 id = 1 }
    name     = "陝甘寧晉綏聯防军"
    location = 1271
    morale   = 90
    leader   = 76313
    division = {
      id             = { type = 11571 id = 2 }
      name           = "邊區保安司令部 "
      type           = hq
      model          = 2
    }
    division = {
      id             = { type = 11571 id = 3 }
      name           = "警備第1旅"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 6
    }
    division = {
      id             = { type = 11571 id = 4 }
      name           = "第385旅"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 6
    }
    division = {
      id             = { type = 11571 id = 5 }
      name           = "警備第3旅"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 6
    }
    division = {
      id             = { type = 11571 id = 6 }
      name           = "教導旅"
      type           = bergsjaeger
      model          = 5
      extra          = b_u7
      brigade_model  = 6
    }
    division = {
      id             = { type = 11571 id = 7 }
      name           = "新编第4旅 "
      type           = bergsjaeger
      model          = 5
      extra          = b_u7
      brigade_model  = 6
    }
    division = {
      id             = { type = 11571 id = 8 }
      name           = "新編第359旅 "
      type           = bergsjaeger
      model          = 5
      extra          = b_u7
      brigade_model  = 6
    }
  }
  landunit = {
    id       = { type = 24000 id = 159 }
    name     = "陝甘寧军區 "
    location = 1271
    division = {
      id             = { type = 24000 id = 160 }
      name           = "陝甘寧军區 "
      type           = garrison
      model          = 0
      strength       = 100
      experience     = 20
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 30291 id = 7 }
    name     = "八路军"
    location = 2822
    leader   = 76312
    division = {
      id             = { type = 30291 id = 11 }
      name           = "八路军司令部"
      type           = garrison
      model          = 2
      extra          = engineer
      brigade_model  = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11571 id = 813 }
    name     = "晉綏邊區"
    location = 2816
    leader   = 76085
    division = {
      id             = { type = 11571 id = 814 }
      name           = "晉綏司令部"
      type           = hq
      model          = 2
      extra          = none
      brigade_model  = 0
    }
    division = {
      id             = { type = 11571 id = 815 }
      name           = "晉綏根據地"
      type           = garrison
      model          = 2
      extra          = engineer
      brigade_model  = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11571 id = 70 }
    name     = "晉綏野戰军"
    location = 2827
    morale   = 90
    leader   = 76313
    division = {
      id             = { type = 11571 id = 71 }
      name           = "第358旅"
      type           = bergsjaeger
      model          = 5
      extra          = b_u7
      brigade_model  = 6
    }
    division = {
      id             = { type = 11571 id = 72 }
      name           = "獨立第1旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
    }
    division = {
      id             = { type = 11571 id = 73 }
      name           = "獨立第2旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
    }
    division = {
      id             = { type = 11571 id = 74 }
      name           = "獨立第3旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
    }
    division = {
      id             = { type = 11571 id = 75 }
      name           = "獨立第4旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
    }
    division = {
      id             = { type = 11571 id = 76 }
      name           = "騎兵旅"
      type           = cavalry
      model          = 2
    }
  }
  landunit = {
    id       = { type = 11571 id = 807 }
    name     = "晉冀魯豫军區"
    location = 2851
    leader   = 76326
    division = {
      id             = { type = 11571 id = 808 }
      name           = "晉冀魯豫司令部"
      type           = hq
      model          = 2
      extra          = none
      brigade_model  = 0
    }
    division = {
      id             = { type = 11571 id = 809 }
      name           = "晉冀魯豫根據地"
      type           = garrison
      model          = 2
      extra          = engineer
      brigade_model  = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11571 id = 9 }
    name     = "晉冀魯豫第2縱队"
    location = 2831
    morale   = 90
    leader   = 76164
    division = {
      id             = { type = 11571 id = 10 }
      name           = "第4旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 11 }
      name           = "第5旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 12 }
      name           = "第6旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 13 }
    name     = "晉冀魯豫第3縱队"
    location = 2852
    morale   = 90
    leader   = 76016
    division = {
      id             = { type = 11571 id = 14 }
      name           = "第7旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 15 }
      name           = "第8旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 16 }
      name           = "第9旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 17 }
    name     = "晉冀魯豫第4縱队"
    location = 2851
    morale   = 90
    leader   = 76014
    division = {
      id             = { type = 11571 id = 18 }
      name           = "第10旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 19 }
      name           = "第11旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 20 }
      name           = "第12旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 21 }
    name     = "晉冀魯豫第6縱队"
    location = 1226
    morale   = 90
    leader   = 76308
    division = {
      id             = { type = 11571 id = 22 }
      name           = "第16旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 23 }
      name           = "第17旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 24 }
      name           = "第18旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 25 }
    name     = "晉冀魯豫第7縱队"
    location = 1811
    morale   = 90
    leader   = 76125
    division = {
      id             = { type = 11571 id = 26 }
      name           = "第19旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 27 }
      name           = "第20旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 28 }
      name           = "第21旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 30291 id = 109 }
    name     = "晉冀察军區"
    location = 2947
    leader   = 76333
    division = {
      id             = { type = 30291 id = 110 }
      name           = "晉冀察司令部"
      type           = hq
      model          = 2
      extra          = none
      brigade_model  = 0
    }
    division = {
      id             = { type = 11571 id = 119 }
      name           = "晉冀察根據地"
      type           = garrison
      model          = 2
      extra          = engineer
      brigade_model  = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11571 id = 29 }
    name     = "冀察縱队"
    location = 1206
    division = {
      id             = { type = 11571 id = 30 }
      name           = "第6旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 31 }
      name           = "第7旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 32 }
      name           = "第9旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 33 }
    name     = "冀晉縱队"
    location = 2819
    division = {
      id             = { type = 11571 id = 34 }
      name           = "第2旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 35 }
      name           = "第4旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 36 }
    name     = "冀中縱队"
    location = 2867
    division = {
      id             = { type = 11571 id = 37 }
      name           = "第11旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 38 }
      name           = "第12旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 39 }
      name           = "第13旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 40 }
    name     = "晉冀魯豫第1縱队"
    location = 2850
    division = {
      id             = { type = 11571 id = 41 }
      name           = "第1旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 42 }
      name           = "第2旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 43 }
      name           = "第3旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 44 }
    name     = "熱遼縱队"
    location = 1397
    division = {
      id             = { type = 11571 id = 45 }
      name           = "第22旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 46 }
      name           = "第27旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 47 }
      name           = "第30旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 48 }
    name     = "冀東縱队"
    location = 2875
    division = {
      id             = { type = 11571 id = 49 }
      name           = "第12旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 50 }
      name           = "第13旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 51 }
      name           = "第14旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 52 }
    name     = "冀察縱队"
    location = 1206
    division = {
      id             = { type = 11571 id = 53 }
      name           = "第8旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 54 }
      name           = "第10旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 55 }
    name     = "冀晉縱队"
    location = 2819
    division = {
      id             = { type = 11571 id = 56 }
      name           = "第1旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 69 }
      name           = "第2旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 57 }
      name           = "第3旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 58 }
    name     = "冀中縱队"
    location = 2867
    division = {
      id             = { type = 11571 id = 59 }
      name           = "第1旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 60 }
      name           = "第2旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 61 }
    name     = "中原第1縱队"
    location = 2654
    leader   = 76125
    division = {
      id             = { type = 11571 id = 62 }
      name           = "第1旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
      locked         = yes
    }
    division = {
      id             = { type = 11571 id = 63 }
      name           = "第2旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
      locked         = yes
    }
    division = {
      id             = { type = 11571 id = 64 }
      name           = "第3旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11571 id = 65 }
    name     = "中原第2縱队"
    location = 2654
    division = {
      id             = { type = 11571 id = 66 }
      name           = "第13旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
      locked         = yes
    }
    division = {
      id             = { type = 11571 id = 67 }
      name           = "第14旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
      locked         = yes
    }
    division = {
      id             = { type = 11571 id = 68 }
      name           = "第15旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11571 id = 77 }
    name     = "山東第1縱队"
    location = 2862
    division = {
      id             = { type = 11571 id = 78 }
      name           = "第1旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 79 }
      name           = "第2旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 80 }
      name           = "第3旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 81 }
    name     = "山東第2縱队"
    location = 2865
    division = {
      id             = { type = 11571 id = 82 }
      name           = "第4旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 83 }
      name           = "第5旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 84 }
      name           = "第9旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 85 }
    name     = "新四军第七师"
    location = 2615
    division = {
      id             = { type = 11571 id = 86 }
      name           = "第19旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 87 }
      name           = "第20旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 88 }
      name           = "第21旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 90 }
    name     = "山東解放军"
    location = 2856
    division = {
      id             = { type = 11571 id = 91 }
      name           = "第1师"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 92 }
      name           = "第2师"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 93 }
      name           = "第3师"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 94 }
      name           = "第4师"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 95 }
      name           = "第5师"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 96 }
      name           = "第6师"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 97 }
      name           = "第7师"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 98 }
      name           = "第8师"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 99 }
    name     = "華中第8縱队"
    location = 2619
    division = {
      id             = { type = 11571 id = 100 }
      name           = "第1旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 101 }
      name           = "第2旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 102 }
      name           = "第3旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 103 }
    name     = "華中第6縱队"
    location = 2619
    division = {
      id             = { type = 11571 id = 104 }
      name           = "第16旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 105 }
      name           = "第17旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 106 }
      name           = "第18旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 107 }
    name     = "華中第7縱队"
    location = 2619
    division = {
      id             = { type = 11571 id = 108 }
      name           = "第19旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 109 }
      name           = "第20旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 110 }
      name           = "第21旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 111 }
    name     = "華中第9縱队"
    location = 2619
    division = {
      id             = { type = 11571 id = 112 }
      name           = "第25旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 113 }
      name           = "第26旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 114 }
      name           = "第27旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 11571 id = 115 }
    name     = "新四军第三师"
    location = 2611
    division = {
      id             = { type = 11571 id = 116 }
      name           = "第7旅"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 117 }
      name           = "第8旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
    division = {
      id             = { type = 11571 id = 118 }
      name           = "第10旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 30291 id = 195 }
    name     = "華中根據地"
    location = 2619
    leader   = 76310
    division = {
      id             = { type = 30291 id = 196 }
      name           = "華中根據地"
      type           = garrison
      model          = 0
      extra          = police
      brigade_model  = 3
      morale         = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11571 id = 500 }
    name     = "瓊崖縱队"
    location = 3768
    leader   = 76023
    division = {
      id             = { type = 11571 id = 190 }
      name           = "瓊崖縱队"
      type           = infantry
      model          = 4
      experience     = 20
      locked         = yes
    }
    division = {
      id             = { type = 11571 id = 191 }
      name           = "瓊崖根據地"
      type           = garrison
      model          = 0
      extra          = police
      brigade_model  = 3
      morale         = 100
      locked         = yes
    }
    dig_in   = 60.000
  }
  landunit = {
    id       = { type = 11571 id = 890 }
    name     = "東江縱队"
    location = 2709
    leader   = 76177
    division = {
      id             = { type = 11571 id = 905 }
      name           = "東江縱队"
      type           = militia
      model          = 22
    }
  }
  landunit = {
    id       = { type = 11571 id = 300 }
    name     = "東北抗日聯军"
    location = 2925
    leader   = 76203
    division = {
      id             = { type = 11571 id = 310 }
      name           = "抗聯教導旅"
      type           = infantry
      model          = 50
      strength       = 7
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11571 id = 810 }
    name     = "太行山根據地"
    location = 2831
    division = {
      id             = { type = 11571 id = 811 }
      name           = "太行山根據地"
      type           = garrison
      model          = 1
      extra          = engineer
      brigade_model  = 5
      morale         = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11571 id = 812 }
    name     = "山東根據地"
    location = 2856
    division = {
      id             = { type = 11571 id = 816 }
      name           = "山東根據地"
      type           = garrison
      model          = 1
      extra          = engineer
      brigade_model  = 5
      morale         = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 11571 id = 817 }
    name     = "冀南根據地"
    location = 2992
    division = {
      id             = { type = 11571 id = 818 }
      name           = "冀南根據地"
      type           = garrison
      model          = 1
      extra          = engineer
      brigade_model  = 5
      morale         = 100
      locked         = yes
    }
  }

  landdivision = { dormant = yes id = { type = 11571 id = 200 } name = "第7旅"  type = bergsjaeger model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 201 } name = "第8旅"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 202 } name = "第10旅"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 203 } name = "獨立旅"  type = bergsjaeger model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 204 } name = "第7师"  type = bergsjaeger model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 205 } name = "第8师"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 206 } name = "第9师"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 207 } name = "第10师"  type = bergsjaeger model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 208 } name = "第11师"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 209 } name = "第12师"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 210 } name = "第19旅"  type = bergsjaeger model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 211 } name = "第20旅"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 212 } name = "第22旅"  type = bergsjaeger model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 213 } name = "第23旅"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 214 } name = "第24旅"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 215 } name = "第19旅"  type = bergsjaeger model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 216 } name = "第20旅"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 217 } name = "第21旅"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 218 } name = "合江军區"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 219 } name = "北安军區"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 220 } name = "牡丹江军區"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 221 } name = "嫩江军區"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 222 } name = "松江军區"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 223 } name = "安東军區"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 224 } name = "嫩南军區"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 225 } name = "遼西军區"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 226 } name = "通化军區"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 227 } name = "警備第1旅"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 228 } name = "警備第2旅"  type = infantry model = 4 extra = b_u4 brigade_model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 229 } name = "哈爾濱衛戍司令部"  type = garrison model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 230 } name = "四平城防"  type = garrison model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 231 } name = "哈爾濱衛戍司令部"  type = garrison model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 11571 id = 232 } name = "大別山根據地"  type = garrison model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 24000 id = 127 } name = "人民解放军第112'平江'师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 50 extra = b_u8 brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 24000 id = 128 } name = "人民解放军第113'平型关'师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 60 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 129 } name = "人民解放军第114‘天津’师 "  type = cavalry model = 5 strength = 100 max_strength = 100 experience = 50 extra = light_armor_brigade brigade_model = 8 } 
  landdivision = { dormant = yes id = { type = 24000 id = 130 } name = "人民解放军第127'铁军'师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 90 extra = light_armor_brigade brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 24000 id = 131 } name = "人民解放军第160'四平'师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 60 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 132 } name = "人民解放军第162‘瑞金团’师 "  type = cavalry model = 5 strength = 100 max_strength = 100 experience = 60 extra = armored_car brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 24000 id = 133 } name = "人民解放军第115师 "  type = cavalry model = 5 strength = 100 max_strength = 100 experience = 40 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 134 } name = "人民解放军第116'汉城'师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 80 extra = b_u8 brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 24000 id = 135 } name = "人民解放军第117师 "  type = cavalry model = 5 strength = 100 max_strength = 100 experience = 40 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 136 } name = "人民解放军第79'济南'师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 60 extra = engineer brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 137 } name = "人民解放军第80'渡江'师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 60 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 138 } name = "人民解放军第81‘上海’师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 60 extra = sp_rct_artillery brigade_model = 20 } 
  landdivision = { dormant = yes id = { type = 24000 id = 149 } name = "人民解放军第58师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 30 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 150 } name = "人民解放军第60'长津湖'师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 80 extra = b_u8 brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 24000 id = 151 } name = "人民解放军第128师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 30 extra = engineer brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 24000 id = 139 } name = "第四野战军司令部 "  type = hq model = 2 strength = 100 max_strength = 100 experience = 70 extra = b_u9 brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 24000 id = 140 } name = "人民解放军第1师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 30 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 141 } name = "人民解放军第2师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 30 extra = police brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 142 } name = "人民解放军第3师 "  type = motorized model = 5 strength = 100 max_strength = 100 experience = 30 extra = engineer brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 24000 id = 143 } name = "人民解放军第34师 "  type = motorized model = 5 strength = 75 max_strength = 100 experience = 30 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 144 } name = "人民解放军第35'大别山'师 "  type = mechanized model = 1 strength = 75 max_strength = 100 experience = 30 extra = engineer brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 145 } name = "人民解放军第36师 "  type = motorized model = 5 strength = 75 max_strength = 100 experience = 30 extra = artillery brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 146 } name = "人民解放军第32'淮海先锋'师 "  type = bergsjaeger model = 5 strength = 75 max_strength = 100 experience = 50 extra = engineer brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 147 } name = "人民解放军第40'抗日决死'师 "  type = bergsjaeger model = 5 strength = 75 max_strength = 100 experience = 50 extra = engineer brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 148 } name = "人民解放军第41师 "  type = bergsjaeger model = 5 strength = 75 max_strength = 100 experience = 30 extra = police brigade_model = 5 } 
  landdivision = { dormant = yes id = { type = 24000 id = 152 } name = "人民解放军坦克第1师'铁甲第一' "  type = armor model = 3 strength = 100 max_strength = 100 experience = 40 extra = heavy_armor brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 24000 id = 153 } name = "人民解放军坦克第2师'华北铁骑' "  type = armor model = 3 strength = 100 max_strength = 100 experience = 40 extra = sp_artillery brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 24000 id = 154 } name = "人民解放军坦克第3师'志愿军之光' "  type = armor model = 3 strength = 100 max_strength = 100 experience = 40 extra = sp_rct_artillery brigade_model = 2 } 
}
