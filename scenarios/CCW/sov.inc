##############################
# Country definition for SOV #
##############################
province = {
  id = 132 # 贝柴摩
}
province = {
  id = 133 # 摩尔曼斯克
}
province = {
  id = 145 # 维堡
  landfort = 2
  anti_air = 3
}
province = {
  id = 163 # 斯大林格勒
  landfort = 10
}
province = {
  id = 168 # 高尔基（下诺夫哥罗德）
}
province = {
  id = 175 # 莫斯科
  landfort = 10
}
province = {
  id = 176 # 雷宾斯克
}
province = {
  id = 187 # 列宁格勒
  landfort = 10
  coastalfort = 5
  synthetic_rares = 1
}
province = {
  id = 194 # 塔林
}
province = {
  id = 197 # 里加
}
province = {
  id = 201 # 阿巴扎
}
province = {
  id = 206 # 梅梅尔
}
province = {
  id = 207 # 考纳斯
}
province = {
  id = 212 # 明斯克
}
province = {
  id = 219 # 斯摩棱斯克
}
province = {
  id = 233 # 敖德萨
}
province = {
  id = 238 # 基辅
}
province = {
  id = 248 # 哈尔科夫
}
province = {
  id = 253 # 塞瓦斯托波尔
  landfort = 5
  coastalfort = 5
}
province = {
  id = 255 # 新罗西斯克
}
province = {
  id = 258 # 罗斯托夫
}
province = {
  id = 264 # 巴甫洛夫斯克
}
province = {
  id = 281 # 利佩茨克
}
province = {
  id = 296 # 罗斯托克
}
province = {
  id = 301 # 施特拉尔松德
}
province = { id = 310 synthetic_rares = 1 } # 莱比锡
province = { id = 311 synthetic_oil = 1 } # 德累斯顿
province = {
  id = 435 # 伊兹梅尔
}
province = {
  id = 463 # 维也纳
}
province = {
  id = 501 # 利沃夫
}
province = {
  id = 504 # 布列斯特
}
province = {
  id = 510 # 柯尼斯堡
  supplypool = 500
  oilpool = 200
}
province = {
  id = 1172 # 勘察加彼得罗巴甫洛夫斯克
}
province = { id = 1175 supplypool = 200 } # 奥哈
province = {
  id = 1176 # 豐原
  infra = { size = 0.6 current_size = 0.5 }
}
province = {
  id = 1177 # 南千島群島
  infra = { size = 0.6 current_size = 0.5 }
  anti_air = { size = 2 current_size = 2 }
  supplypool = 100
  oilpool = 2000
}
province = {
  id = 1200 # 元山
}
province = {
  id = 1201 # 平壤
  infra = { size = 1 current_size = 0.8 }
}
province = {
  id = 1202 # 大連
  anti_air = 4
}
province = {
  id = 1368 # 瓦倫（共青城）
}
province = {
  id = 1371 # 奥莉加
  infra = { size = 0.4 current_size = 0.35 }
}
province = {
  id = 1372 # 海參崴（符拉迪沃斯托克）
  landfort = 1
  coastalfort = 3
  anti_air = 3
}
province = {
  id = 1377 # 通化
  infra = { size = 0.8 current_size = 0.8 }
}
province = {
  id = 1379 # 哈尔滨
  anti_air = 2
}
province = {
  id = 1384 # 赤塔
}
province = {
  id = 1389 # 沈阳（奉天）
  anti_air = 3
}
province = {
  id = 1390 # 长春（新京）
  anti_air = 3
}
province = {
  id = 1393 # 新義州
}
province = {
  id = 1395 # 營口
}
province = {
  id = 1422 # 阿拉木圖
}
province = {
  id = 1544 # 托木斯克
}
province = {
  id = 1548 # 新西伯利亚
}
province = {
  id = 1552 # 鄂木斯克
}
province = {
  id = 1567 # 乌法
}
province = {
  id = 1572 # 斯维尔德洛夫斯克（叶卡捷琳堡）
}
province = {
  id = 1574 # 车里雅宾斯克
}
province = {
  id = 1577 # 奥尔斯克
}
province = {
  id = 1587 # 列宁纳巴德（苦盏）
  infra = { size = 0.6 current_size = 0.4 }
}
province = {
  id = 1783 # 基洛夫
}
province = {
  id = 1827 # 奇斯托波尔
}
province = {
  id = 1828 # 古比雪夫
  synthetic_rares = 1
}
province = {
  id = 1838 # 阿斯特拉罕
}
province = {
  id = 1839 # 叶尔绍夫
}
province = {
  id = 1848 # 巴统
}
province = {
  id = 1907 # 巴库
  landfort = 5
}
province = {
  id = 2930 # 旅順港
  coastalfort = 5
  supplypool = 1000
  oilpool = 500
}
province = {
  id = 3461 # 涅比特◆达格
}
province = {
  id = 3530 # 谢苗诺夫
}

#####################
# Country main data #
#####################

country = {
  tag                = SOV
  regular_id         = RUS
  ai                 = "sov_1950.ai"
  intrinsic_gov_type = leninist
  capital            = 175 # 莫斯科
  dissent            = 5
  manpower           = 1000
  # Resource Reserves
  energy         = 50000
  metal          = 50000
  rare_materials = 5000
  oil            = 15000
  supplies       = 7500
  money          = 100
  transports     = 150
  escorts        = 50

  diplomacy = {
    relation = {
      tag        = MON
      value      = 150
      access     = yes
      guaranteed = { year = 1945 month = december day = 30 }
    }
    relation = {
      tag        = SIK
      value      = 100
      guaranteed = { year = 1944 month = december day = 30 }
    }
    relation = { tag = CHI value = 100 }
    relation = { tag = CGX value = 100 }
    relation = { tag = CHC value = 200 }
    relation = { tag = YUG value = 50 access = yes }
    relation = { tag = ROM value = 150 access = yes }
    relation = { tag = POL value = 150 access = yes }
    relation = { tag = HUN value = 150 access = yes }
    relation = { tag = CZE value = 150 access = yes }
    relation = { tag = ALB value = 100 access = yes }
    relation = { tag = BUL value = 150 access = yes }
  }

  nationalprovinces      = { 2988 1528 1523 1159 1160 1161 1165 1175 1367 1368 1527 1366 1526 1167 1529 1372 1373 1370 1371 1369 2818 3559 3558 1428 1429 3466 3467 3468 3469 3473 1423 1556 3456 3457 1152 1557 1558 201 1563 1422 1424 3449 3450 3451 3452 3453 3454 3485 3486 3487 157 164 165 192 1155 1157 1158 1162 1383 1384 1409 1411 1412 1413 1414 1415 1416 1417 1520 1521 1522 1539 1540 1541 1542 1543 1544 1545 1546 1547 1548 1549 1552 1559 1560 1561 1562 1564 1565 1566 1591 3568 1425 1426 1554 1555 1582 1586 1588 1590 1592 3460 3463 1568 1569 1576 1578 1579 1580 1581 1583 1589 3465 3474 1550 1551 1553 3455 3458 3459 1485 1587 3475 3476 3477 1490 1491 1598 3461 3462 3488 1427 1487 1488 1489 1584 1585 3479 3482 3483 3484 1166 1171 1172 1524 1525 3640 1405 1156 1163 1164 1410 3489 1418 2952 2953 229 500 501 502 3141 3142 510 3112 206 222 503 504 506 562 3135 3136 3137 3138 3140 209 210 211 213 507 3130 3258 230 434 3261 3575 435 3257 1773 1774 1778 1780 1781 1782 1783 1827 3538 3539 3540 156 1829 1831 1832 1839 3524 3525 1577 1828 1830 3546 3547 3548 3549 3550 3551 3552 168 169 1775 1776 3527 3528 3529 3530 3531 3532 155 158 1777 3533 3534 3535 3536 3537 1151 3541 3542 3543 3544 3545 1150 1153 1567 1570 3553 3554 3555 1571 1572 1573 1597 3556 3557 1574 1575 3560 3561 3562 3563 3564 3565 3566 1149 1154 1593 1594 1596 3567 173 174 286 288 3498 3499 3500 3501 243 247 265 266 282 3503 3504 3505 94 170 175 182 1531 1532 1533 1534 1535 1536 1537 1538 181 275 276 277 3495 263 278 279 281 3506 3508 3509 3510 3511 219 285 3490 3491 3492 3493 3494 261 262 264 280 283 284 1895 3507 166 167 176 177 178 179 180 3496 3497 3502 153 154 171 172 1771 3518 3519 3520 3521 3638 3639 150 151 152 1772 133 134 135 3517 183 184 185 186 187 188 240 3513 3514 189 190 289 3512 3515 3516 191 200 215 216 287 1837 1838 3526 258 267 268 269 270 1840 1841 3523 159 160 161 162 163 271 1833 1834 1835 1836 3522 3572 1858 1907 3435 3436 3444 3446 3447 1845 1848 1850 3437 3438 3439 3440 3441 3442 1856 3443 3445 3448 1842 1846 1847 1849 1857 3428 3429 3433 3434 255 256 257 1843 1844 3430 3431 3432 193 194 195 196 199 3118 3120 3121 3122 197 198 202 203 204 205 3123 3124 3125 3126 3127 207 208 214 511 577 1892 2603 3128 3129 212 217 218 1874 1891 3422 3423 220 221 225 272 273 274 3424 3425 3426 3427 235 236 246 250 3412 3413 3420 244 245 248 260 3409 3410 3411 226 227 237 238 3401 3402 3403 3408 252 253 254 3421 233 234 251 3417 3418 3419 3569 3570 4095 239 241 242 1893 3404 3405 249 259 3414 3415 228 231 232 3406 3407 3416 3571 3282 145 3283 146 3119 132 3174 3175 }
  ownedprovinces         = { 1201 2988 1528 1523 1159 1160 1161 1165 1175 1367 1368 1527 1366 1526 1167 1529 1372 1373 1370 1371 1369 2818 3559 3558 1428 1429 3466 3467 3468 3469 3473 1423 1556 3456 3457 1152 1557 1558 201 1563 1422 1424 3449 3450 3451 3452 3453 3454 3485 3486 3487 157 164 165 192 1155 1157 1158 1162 1383 1384 1409 1411 1412 1413 1414 1415 1416 1417 1520 1521 1522 1539 1540 1541 1542 1543 1544 1545 1546 1547 1548 1549 1552 1559 1560 1561 1562 1564 1565 1566 1591 3568 1425 1426 1554 1555 1582 1586 1588 1590 1592 3460 3463 1568 1569 1576 1578 1579 1580 1581 1583 1589 3465 3474 1550 1551 1553 3455 3458 3459 1485 1587 3475 3476 3477 1490 1491 1598 3461 3462 3488 1427 1487 1488 1489 1584 1585 3479 3482 3483 3484 1166 1171 1172 1524 1525 3640 1405 1156 1163 1164 1410 3489 1374 1375 1377 1378 1379 1380 1381 1382 1387 1389 1390 1394 1395 1401 1402 1403 1530 1623 1779 2624 2878 2880 2882 2883 2884 2885 2886 2887 2888 2889 2890 2891 2892 2893 2894 2895 2896 2897 2898 2899 2900 2901 2902 2903 2904 2905 2906 2907 2908 2909 2910 2911 2912 2913 2914 2915 2916 2917 2918 2919 2920 2921 2922 2923 2924 2925 2926 2927 2928 2929 2931 2932 2933 2934 2935 2936 2937 2938 2877 1396 2941 1398 1386 2939 2815 2817 2785 1200 1376 1391 1392 1393 3670 3671 3672 3673 3674 3675 3676 3677 3686 3687 1177 1174 1176 1202 2930 1418 2952 2953 229 500 502 3141 3142 510 3112 206 222 503 504 506 562 3135 3136 3137 3138 3140 209 210 211 213 507 3130 3258 230 434 3261 3575 435 3257 1773 1774 1778 1780 1781 1782 1783 1827 3538 3539 3540 156 1829 1831 1832 1839 3524 3525 1577 1828 1830 3546 3547 3548 3549 3550 3551 3552 168 169 1775 1776 3527 3528 3529 3530 3531 3532 155 158 1777 3533 3534 3535 3536 3537 1151 3541 3542 3543 3544 3545 1150 1153 1567 1570 3553 3554 3555 1571 1572 1573 1597 3556 3557 1574 1575 3560 3561 3562 3563 3564 3565 3566 1149 1154 1593 1594 1596 3567 173 174 286 288 3498 3499 3500 3501 243 247 265 266 282 3503 3504 3505 94 170 175 182 1531 1532 1533 1534 1535 1536 1537 1538 181 275 276 277 3495 263 278 279 281 3506 3508 3509 3510 3511 219 285 3490 3491 3492 3493 3494 261 262 264 280 283 284 1895 3507 166 167 176 177 178 179 180 3496 3497 3502 153 154 171 172 1771 3518 3519 3520 3521 3638 3639 150 151 152 1772 133 134 135 3517 183 184 185 186 187 188 240 3513 3514 189 190 289 3512 3515 3516 191 200 215 216 287 1837 1838 3526 258 267 268 269 270 1840 1841 3523 159 160 161 162 163 271 1833 1834 1835 1836 3522 3572 1858 1907 3435 3436 3444 3446 3447 1845 1848 1850 3437 3438 3439 3440 3441 3442 1856 3443 3445 3448 1842 1846 1847 1849 1857 3428 3429 3433 3434 255 256 257 1843 1844 3430 3431 3432 193 194 195 196 199 3118 3120 3121 3122 197 198 202 203 204 205 3123 3124 3125 3126 3127 207 208 214 511 577 1892 2603 3128 3129 212 217 218 1874 1891 3422 3423 220 221 225 272 273 274 3424 3425 3426 3427 235 236 246 250 3412 3413 3420 244 245 248 260 3409 3410 3411 226 227 237 238 3401 3402 3403 3408 252 253 254 3421 233 234 251 3417 3418 3419 3569 3570 4095 239 241 242 1893 3404 3405 249 259 3414 3415 228 231 232 3406 3407 3416 3571 146 3283 145 3282 132 3119 301 296 3080 3074 3077 3079 299 3078 3076 3087 311 1449 309 3088 310 3089 3075 3073 3091 3092 3090 298 84 3093 3188 464 463 3187 3186 4084 4085 501 3174 3175 3882 1503 3949 1787 3884 1859 3887 3888 3885 }
  controlledprovinces    = { 1201 2988 1528 1523 1159 1160 1161 1165 1175 1367 1368 1527 1366 1526 1167 1529 1372 1373 1370 1371 1369 2818 3559 3558 1428 1429 3466 3467 3468 3469 3473 1423 1556 3456 3457 1152 1557 1558 201 1563 1422 1424 3449 3450 3451 3452 3453 3454 3485 3486 3487 157 164 165 192 1155 1157 1158 1162 1383 1384 1409 1411 1412 1413 1414 1415 1416 1417 1520 1521 1522 1539 1540 1541 1542 1543 1544 1545 1546 1547 1548 1549 1552 1559 1560 1561 1562 1564 1565 1566 1591 3568 1425 1426 1554 1555 1582 1586 1588 1590 1592 3460 3463 1568 1569 1576 1578 1579 1580 1581 1583 1589 3465 3474 1550 1551 1553 3455 3458 3459 1485 1587 3475 3476 3477 1490 1491 1598 3461 3462 3488 1427 1487 1488 1489 1584 1585 3479 3482 3483 3484 1166 1171 1172 1524 1525 3640 1405 1156 1163 1164 1410 3489 1374 1375 1377 1378 1379 1380 1381 1382 1387 1389 1390 1394 1395 1401 1402 1403 1530 1623 1779 2624 2878 2880 2882 2883 2884 2885 2886 2887 2888 2889 2890 2891 2892 2893 2894 2895 2896 2897 2898 2899 2900 2901 2902 2903 2904 2905 2906 2907 2908 2909 2910 2911 2912 2913 2914 2915 2916 2917 2918 2919 2920 2921 2922 2923 2924 2925 2926 2927 2928 2929 2931 2932 2933 2934 2935 2936 2937 2938 2877 1396 2941 1398 1386 2939 2815 2817 2785 1200 1376 1391 1392 1393 3670 3671 3672 3673 3674 3675 3676 3677 3686 3687 1177 1174 1176 1202 2930 1418 2952 2953 229 500 502 3141 3142 510 3112 206 222 503 504 506 562 3135 3136 3137 3138 3140 209 210 211 213 507 3130 3258 230 434 3261 3575 435 3257 1773 1774 1778 1780 1781 1782 1783 1827 3538 3539 3540 156 1829 1831 1832 1839 3524 3525 1577 1828 1830 3546 3547 3548 3549 3550 3551 3552 168 169 1775 1776 3527 3528 3529 3530 3531 3532 155 158 1777 3533 3534 3535 3536 3537 1151 3541 3542 3543 3544 3545 1150 1153 1567 1570 3553 3554 3555 1571 1572 1573 1597 3556 3557 1574 1575 3560 3561 3562 3563 3564 3565 3566 1149 1154 1593 1594 1596 3567 173 174 286 288 3498 3499 3500 3501 243 247 265 266 282 3503 3504 3505 94 170 175 182 1531 1532 1533 1534 1535 1536 1537 1538 181 275 276 277 3495 263 278 279 281 3506 3508 3509 3510 3511 219 285 3490 3491 3492 3493 3494 261 262 264 280 283 284 1895 3507 166 167 176 177 178 179 180 3496 3497 3502 153 154 171 172 1771 3518 3519 3520 3521 3638 3639 150 151 152 1772 133 134 135 3517 183 184 185 186 187 188 240 3513 3514 189 190 289 3512 3515 3516 191 200 215 216 287 1837 1838 3526 258 267 268 269 270 1840 1841 3523 159 160 161 162 163 271 1833 1834 1835 1836 3522 3572 1858 1907 3435 3436 3444 3446 3447 1845 1848 1850 3437 3438 3439 3440 3441 3442 1856 3443 3445 3448 1842 1846 1847 1849 1857 3428 3429 3433 3434 255 256 257 1843 1844 3430 3431 3432 193 194 195 196 199 3118 3120 3121 3122 197 198 202 203 204 205 3123 3124 3125 3126 3127 207 208 214 511 577 1892 2603 3128 3129 212 217 218 1874 1891 3422 3423 220 221 225 272 273 274 3424 3425 3426 3427 235 236 246 250 3412 3413 3420 244 245 248 260 3409 3410 3411 226 227 237 238 3401 3402 3403 3408 252 253 254 3421 233 234 251 3417 3418 3419 3569 3570 4095 239 241 242 1893 3404 3405 249 259 3414 3415 228 231 232 3406 3407 3416 3571 146 3283 145 3282 132 3119 301 296 3080 3074 3077 3079 299 3078 3076 3087 311 1449 309 3088 310 3089 3075 3073 3091 3092 3090 298 84 3093 3188 464 463 3187 3186 4084 4085 501 3174 3175 3888 3887 1859 3884 3882 1503 3949 1787 3885 }

  techapps               = { 1060 1050 1040 1030 1020 1010 1210 1200 5100 8000 8200 8710 8010 8020 8030 1890 1300 1290 1280 1270 1660 1670 1770 2280 2290 2300 5050 5080 5170 5190 5800 5110 5720 5700 5670 5680 5660 5180 5310 5010 5020 5490 5480 5470 5550 5560 5580 4120 4130 4010 4020 4030 4060 4170 4280 4140 4150 4040 4070 6310 6300 2820 2310 2320 2610 2630 2620 2360 2370 2380 2420 2430 2440 2220 2230 2540 2550 2560 2570 2580 2010 2020 2030 2040 2050 2060 2070 2080 2090 2170 2160 2730 2740 5350 5360 5330 5370 5380 8160 8390 8150 9700 9710 9010 9020 9030 4180 4090 4100 4050 4080 5500 5510 5520 1190 1180 1170 1310 1550 1540 1760 1780 1790 1970 1900 1910 1920 6570 6330 6320 6370 6340 6350 6900 3070 3010 3020 3080 3400 3410 74700 1410 26100 3090 3030 3130 3140 3150 3420 66500 66540 66510 66520 66530 6360 9190 9200 9220 9210 9310 9320 9230 9330 9340 9240 9250 9260 8040 8050 26200 26300 2450 2720 2800 2810 5410 5220 5290 9390 9090 9100 9040 9050 9060 9070 9080 9110 9120 9130 9350 9360 9270 9290 9280 1420 4250 4190 4220 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 1
    free_market       = 1
    professional_army = 4
    defense_lobby     = 10
    interventionism   = 10
  }
  headofstate            = { type = 9 id = 4074 } # 约瑟夫 斯大林 
  headofgovernment       = { type = 9 id = 4002 } # 约瑟夫 斯大林 
  foreignminister        = { type = 9 id = 4034 } # 维亚切斯拉夫 莫洛托夫 
  armamentminister       = { type = 9 id = 4038 } # 鲍里斯 L 瓦尼科夫 
  ministerofsecurity     = { type = 9 id = 4041 } # 拉夫连季 贝利亚 
  ministerofintelligence = { type = 9 id = 4049 } # 伊格尔 I 伊利契夫 
  chiefofstaff           = { type = 9 id = 4056 } # 阿列克谢 I 安东诺夫 
  chiefofarmy            = { type = 9 id = 4059 } # 约瑟夫 斯大林 
  chiefofnavy            = { type = 9 id = 4062 } # 尼古拉 库兹涅佐夫 
  chiefofair             = { type = 9 id = 4068 } # 亚历山大 诺维克夫 
  nationalidentity       = "policy_economy_Stalinism-planned"
  socialpolicy           = "policy_social_collectivism"
  nationalculture        = "policy_political_stalinist"
  dormant_leaders        = { 9839 9841 9843 9849 9884 9894 9896 9900 9907 9910 9926 9930 9951 9955 9969 9974 9991 9993 10006 10016 10019 10028 10031 10042 10054 10066 10071 10114 10115 10137 10138 10202 10208 10215 10253 10271 10276 10283 10286 10297 10322 10342 10349 10369 10370 10371 10401 10417 10453 10463 10472 10477 10500 10514 10515 10516 10517 10518 10520 10521 10522 10363 }
  dormant_ministers      = { 4031 4032 4039 4045 4066 4011 4012 4013 4014 4015 4016 4017 4018 4019 4020 4003 4005 4006 4007 4009 4010 4039 4040 4045 4046 4061 4064 4066 4004 4008 4051 }
  dormant_teams          = { 3706 3716 }

  landunit = {
    id       = { type = 30151 id = 1 }
    name     = "苏联紅旗第1集團军"
    location = 1528
    division = {
      id             = { type = 30151 id = 2 }
      name           = "第3步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 3 }
      name           = "第12步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 4 }
      name           = "第231步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 5 }
      name           = "第35步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 6 }
      name           = "第39步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 7 }
      name           = "第59步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 8 }
    name     = "苏联第3集團军*"
    location = 212
    division = {
      id             = { type = 30151 id = 9 }
      name           = "第250步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 10 }
      name           = "第290步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 11 }
      name           = "第348步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 12 }
      name           = "第5步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 13 }
      name           = "第129步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 14 }
      name           = "第169步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 15 }
      name           = "第120近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 16 }
      name           = "第269步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 17 }
      name           = "第283步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 18 }
    name     = "苏联第4集團军"
    location = 1907
    division = {
      id             = { type = 30151 id = 19 }
      name           = "第68山地?"
      type           = bergsjaeger
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 20 }
      name           = "第75步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 21 }
      name           = "第89步兵旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 22 }
      name           = "第90步兵旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 23 }
      name           = "第1騎兵师"
      type           = cavalry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 24 }
      name           = "第23騎兵师"
      type           = cavalry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 25 }
      name           = "第39騎兵师"
      type           = cavalry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 26 }
    name     = "苏联第5集團军*"
    location = 1390
    division = {
      id             = { type = 30151 id = 27 }
      name           = "第187步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 28 }
      name           = "第366步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 29 }
      name           = "第157步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 30 }
      name           = "第159步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 31 }
      name           = "第184步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 32 }
      name           = "第97步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 33 }
      name           = "第144步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 34 }
      name           = "第190步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 35 }
      name           = "第371步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 36 }
      name           = "第63步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 37 }
      name           = "第215步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 38 }
      name           = "第277步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 39 }
      name           = "第72坦克旅"
      type           = armor
      model          = 4
      extra          = none
      brigade_model  = 0
    }
    division = {
      id             = { type = 30151 id = 40 }
      name           = "第76坦克旅"
      type           = armor
      model          = 4
      extra          = none
      brigade_model  = 0
    }
    division = {
      id             = { type = 30151 id = 41 }
      name           = "第208坦克旅"
      type           = armor
      model          = 4
      extra          = none
      brigade_model  = 0
    }
    division = {
      id             = { type = 30151 id = 42 }
      name           = "第210坦克旅"
      type           = armor
      model          = 4
      extra          = none
      brigade_model  = 0
    }
    division = {
      id             = { type = 30151 id = 43 }
      name           = "第218坦克旅"
      type           = armor
      model          = 4
      extra          = none
      brigade_model  = 0
    }
  }
  landunit = {
    id       = { type = 30151 id = 284 }
    name     = "別洛莫?斯基?區"
    location = 151
    division = {
      id             = { type = 30151 id = 285 }
      name           = "第25步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 286 }
      name           = "第289步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 287 }
      name           = "第45步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 288 }
      name           = "第67步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 289 }
      name           = "第83步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 290 }
      name           = "第114步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 291 }
      name           = "第341步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 292 }
      name           = "第367步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 44 }
    name     = "苏联第15集團军"
    location = 1379
    division = {
      id             = { type = 30151 id = 45 }
      name           = "第34步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 46 }
      name           = "第361步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 47 }
      name           = "第388步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 48 }
      name           = "第203坦克旅"
      type           = armor
      model          = 4
      extra          = none
      brigade_model  = 0
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 30151 id = 293 }
    name     = "苏联第16集團军*"
    location = 1379
    division = {
      id             = { type = 30151 id = 294 }
      name           = "第79步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 295 }
      name           = "第2步兵旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30151 id = 296 }
      name           = "薩哈林步兵團"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
      max_strength   = 30
    }
    division = {
      id             = { type = 30151 id = 297 }
      name           = "第5?立步兵旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
      max_strength   = 50
    }
    division = {
      id             = { type = 30151 id = 298 }
      name           = "第113?立步兵旅"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
      max_strength   = 50
    }
    division = {
      id             = { type = 30151 id = 299 }
      name           = "第214坦克旅"
      type           = armor
      model          = 4
      extra          = none
      brigade_model  = 0
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 30151 id = 49 }
    name     = "苏联第17集團军"
    location = 2877
    division = {
      id             = { type = 30151 id = 50 }
      name           = "第209步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 51 }
      name           = "第278步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 52 }
      name           = "第284步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 53 }
    name     = "苏联第22集團军"
    location = 253
    division = {
      id             = { type = 30151 id = 54 }
      name           = "第47步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 55 }
      name           = "第119步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 56 }
      name           = "第168步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 57 }
      name           = "第28步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 58 }
      name           = "第37步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 59 }
      name           = "第219步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 60 }
      name           = "第256步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 61 }
      name           = "第268步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 62 }
      name           = "第394步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 63 }
    name     = "苏联第23集團军"
    location = 187
    division = {
      id             = { type = 30151 id = 64 }
      name           = "第45近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 65 }
      name           = "第63近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 66 }
      name           = "第64近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 67 }
    name     = "苏联第25集團军"
    location = 1201
    division = {
      id             = { type = 30151 id = 68 }
      name           = "第40步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 69 }
      name           = "第384步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 70 }
      name           = "第10機械化步兵师"
      type           = mechanized
      model          = 0
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 71 }
      name           = "第258步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 72 }
      name           = "第386步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 73 }
      name           = "第393步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 300 }
    name     = "苏联第26集團军*"
    location = 424
    division = {
      id             = { type = 30151 id = 301 }
      name           = "第36近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 302 }
      name           = "第68近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 303 }
      name           = "第21步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 304 }
      name           = "第74步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 305 }
      name           = "第93步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 306 }
      name           = "第151步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 307 }
      name           = "第233步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 308 }
      name           = "第236步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 74 }
    name     = "苏联第27集團军"
    location = 3260
    division = {
      id             = { type = 30151 id = 75 }
      name           = "第78步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 76 }
      name           = "第206步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 77 }
      name           = "第337步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 78 }
      name           = "第163步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 79 }
      name           = "第316步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 80 }
      name           = "第320步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 81 }
      name           = "第66近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 82 }
      name           = "第108近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 83 }
      name           = "第125近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 84 }
    name     = "苏联第28集團军"
    location = 503
    division = {
      id             = { type = 30151 id = 85 }
      name           = "第48近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 86 }
      name           = "第55近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 87 }
      name           = "第20步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 88 }
      name           = "第61步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 89 }
      name           = "第130步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 90 }
      name           = "第152步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 91 }
      name           = "第50近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 92 }
      name           = "第54近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 93 }
      name           = "第96近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 94 }
    name     = "苏联第36集團军"
    location = 1380
    division = {
      id             = { type = 30151 id = 95 }
      name           = "第103步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 96 }
      name           = "第275步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 97 }
      name           = "第292步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 98 }
      name           = "第94步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 99 }
      name           = "第210步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 100 }
      name           = "第298步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 101 }
      name           = "第293步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 102 }
    name     = "苏联第37集團军*"
    location = 417
    division = {
      id             = { type = 30151 id = 103 }
      name           = "第259步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 104 }
      name           = "第353步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 105 }
      name           = "第394步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 106 }
      name           = "第195步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 107 }
      name           = "第244步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 108 }
      name           = "第333步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 109 }
      name           = "第188步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 110 }
      name           = "第28近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 111 }
      name           = "第92近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 112 }
      name           = "第255海??戰旅"
      type           = marine
      model          = 3
      extra          = artillery
      brigade_model  = 3
    }
  }
  landunit = {
    id       = { type = 30151 id = 113 }
    name     = "苏联第38集團军*"
    location = 469
    division = {
      id             = { type = 30151 id = 114 }
      name           = "第30步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 115 }
      name           = "第221步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 116 }
      name           = "第276步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 117 }
      name           = "第121步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 118 }
      name           = "第241步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 119 }
      name           = "第305步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 120 }
      name           = "第70近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 121 }
      name           = "第140步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 122 }
      name           = "第183步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 123 }
      name           = "第226步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 309 }
    name     = "苏联第39集團军*"
    location = 2930
    division = {
      id             = { type = 30151 id = 310 }
      name           = "第262步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 311 }
      name           = "第338步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 312 }
      name           = "第358步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 313 }
      name           = "第17近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 314 }
      name           = "第19近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 315 }
      name           = "第91近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 124 }
    name     = "苏联第45集團军*"
    location = 1850
    division = {
      id             = { type = 30151 id = 125 }
      name           = "第261步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 126 }
      name           = "第296步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 127 }
      name           = "第349步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 128 }
      name           = "第392步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 129 }
      name           = "第402步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 130 }
      name           = "第406步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 141 }
    name     = "苏联第47集團军*"
    location = 310
    division = {
      id             = { type = 30151 id = 142 }
      name           = "第185步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 143 }
      name           = "第234步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 144 }
      name           = "第328步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 145 }
      name           = "第60步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 146 }
      name           = "第76步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 147 }
      name           = "第175步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 148 }
      name           = "第132步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 149 }
      name           = "第143步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 150 }
      name           = "第260步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 131 }
    name     = "苏联第51集團军*"
    location = 1572
    division = {
      id             = { type = 30151 id = 132 }
      name           = "第77步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 133 }
      name           = "第279步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 134 }
      name           = "第417步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 135 }
      name           = "第87步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 136 }
      name           = "第91步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 137 }
      name           = "第347步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 138 }
      name           = "第53近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 139 }
      name           = "第204步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 140 }
      name           = "第267步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 151 }
    name     = "苏联第52集團军*"
    location = 501
    division = {
      id             = { type = 30151 id = 152 }
      name           = "第116步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 153 }
      name           = "第294步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 154 }
      name           = "第50步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 155 }
      name           = "第111步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 156 }
      name           = "第254步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 157 }
      name           = "第31步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 158 }
      name           = "第214步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 159 }
      name           = "第373步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 160 }
      name           = "第213步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 161 }
    name     = "苏联第57集團军"
    location = 426
    division = {
      id             = { type = 30151 id = 162 }
      name           = "第10近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 163 }
      name           = "第20近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 164 }
      name           = "第61近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 165 }
      name           = "第73近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 166 }
      name           = "第113步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 167 }
      name           = "第299步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 168 }
      name           = "第84步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 169 }
      name           = "第104步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 170 }
      name           = "第122步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 171 }
    name     = "苏联第65集團军"
    location = 483
    division = {
      id             = { type = 30151 id = 172 }
      name           = "第16步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 173 }
      name           = "第69步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 174 }
      name           = "第108步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 175 }
      name           = "第186步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 176 }
      name           = "第413步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 177 }
      name           = "第44近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 178 }
      name           = "第193步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 179 }
      name           = "第354步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 180 }
    name     = "苏联第4近衛集團军*"
    location = 463
    division = {
      id             = { type = 30151 id = 181 }
      name           = "第5近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 182 }
      name           = "第7近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 183 }
      name           = "第80近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 184 }
      name           = "第41近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 185 }
      name           = "第62近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 186 }
      name           = "第66近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 187 }
      name           = "第69近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 188 }
      name           = "第4近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 189 }
      name           = "第34近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 190 }
      name           = "第40近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 191 }
    name     = "苏联第6近衛集團军*"
    location = 577
    division = {
      id             = { type = 30151 id = 192 }
      name           = "第9近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 193 }
      name           = "第71近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 194 }
      name           = "第166近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 195 }
      name           = "第46近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 196 }
      name           = "第16立陶宛步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 197 }
      name           = "第29步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 198 }
      name           = "第45近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 199 }
      name           = "第63近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 200 }
      name           = "第64近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 201 }
    name     = "苏联第7近衛集團军*"
    location = 463
    division = {
      id             = { type = 30151 id = 202 }
      name           = "第19步兵师"
      type           = infantry
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 203 }
      name           = "第252步兵师"
      type           = infantry
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 204 }
      name           = "第4近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 205 }
      name           = "第6近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 206 }
      name           = "第25近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 207 }
      name           = "第303步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 208 }
      name           = "第72近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 209 }
      name           = "第141步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 210 }
      name           = "第375步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 211 }
      name           = "第409步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 212 }
    name     = "苏联第8近衛集團军*"
    location = 3092
    division = {
      id             = { type = 30151 id = 213 }
      name           = "第35近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 214 }
      name           = "第47近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 215 }
      name           = "第57近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 216 }
      name           = "第39近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 217 }
      name           = "第79近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 218 }
      name           = "第88近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 219 }
      name           = "第27近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 220 }
      name           = "第74近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 221 }
      name           = "第82近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 222 }
      name           = "第11坦克?"
      type           = armor
      model          = 4
      extra          = none
      brigade_model  = 0
    }
  }
  landunit = {
    id       = { type = 30151 id = 233 }
    name     = "苏联第37空降?團"
    location = 3403
    division = {
      id             = { type = 30151 id = 330 }
      name           = "第98近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 331 }
      name           = "第99近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 332 }
      name           = "第103近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 232 }
    name     = "苏联第38空降?團"
    location = 167
    division = {
      id             = { type = 30151 id = 327 }
      name           = "第104近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 328 }
      name           = "第105近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 329 }
      name           = "第106近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 231 }
    name     = "苏联第39空降?團*"
    location = 1372
    division = {
      id             = { type = 30151 id = 238 }
      name           = "第100近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 239 }
      name           = "第107近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 240 }
      name           = "第114近衛空降?"
      type           = paratrooper
      model          = 2
      extra          = b_u7
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 223 }
    name     = "苏联第10近衛集團军*"
    location = 206
    division = {
      id             = { type = 30151 id = 224 }
      name           = "第3近衛摩托化步兵师"
      type           = motorized
      model          = 5
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 225 }
      name           = "第29近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 226 }
      name           = "第30近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 227 }
      name           = "第85近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 228 }
      name           = "第22近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 229 }
      name           = "第56近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 230 }
      name           = "第65近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 316 }
    name     = "苏联第11近衛集團军*"
    location = 510
    division = {
      id             = { type = 30151 id = 317 }
      name           = "第11近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 318 }
      name           = "第26近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 319 }
      name           = "第83近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 320 }
      name           = "第1近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 321 }
      name           = "第16近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 322 }
      name           = "第31近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 323 }
      name           = "第169步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 324 }
      name           = "第5近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 325 }
      name           = "第18近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 326 }
      name           = "第84近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 281 }
    name     = "苏联第1近衛坦克集團军*"
    location = 311
    division = {
      id             = { type = 30151 id = 282 }
      name           = "第8近衛機械化步兵师"
      type           = mechanized
      model          = 1
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 283 }
      name           = "第11近衛坦克?"
      type           = armor
      model          = 4
      extra          = super_heavy_armor
      brigade_model  = 2
    }
  }
  landunit = {
    id       = { type = 30151 id = 241 }
    name     = "苏联第3近衛坦克集團军*"
    location = 3078
    division = {
      id             = { type = 30151 id = 242 }
      name           = "第3機械化步兵师"
      type           = mechanized
      model          = 1
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 243 }
      name           = "第6近衛坦克?"
      type           = armor
      model          = 4
      extra          = super_heavy_armor
      brigade_model  = 2
    }
    division = {
      id             = { type = 30151 id = 244 }
      name           = "第7近衛坦克?"
      type           = armor
      model          = 4
      extra          = super_heavy_armor
      brigade_model  = 2
    }
  }
  landunit = {
    id       = { type = 30151 id = 245 }
    name     = "苏联第5近衛坦克集團军*"
    location = 212
    division = {
      id             = { type = 30151 id = 246 }
      name           = "第8機械化步兵师"
      type           = mechanized
      model          = 1
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 247 }
      name           = "第8近衛坦克?"
      type           = armor
      model          = 4
      extra          = super_heavy_armor
      brigade_model  = 2
    }
    division = {
      id             = { type = 30151 id = 248 }
      name           = "第29坦克?"
      type           = armor
      model          = 4
      extra          = none
      brigade_model  = 2
    }
  }
  landunit = {
    id       = { type = 30151 id = 249 }
    name     = "苏联第6近衛坦克集團军*"
    location = 1404
    division = {
      id             = { type = 30151 id = 250 }
      name           = "第7機械化步兵师"
      type           = mechanized
      model          = 1
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 253 }
      name           = "第9機械化步兵师"
      type           = mechanized
      model          = 1
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 251 }
      name           = "第5近衛坦克?"
      type           = armor
      model          = 4
      extra          = super_heavy_armor
      brigade_model  = 2
    }
  }
  landunit = {
    id       = { type = 30151 id = 263 }
    name     = "土耳其斯坦?區"
    location = 1427
    division = {
      id             = { type = 30151 id = 264 }
      name           = "第306步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 265 }
      name           = "第344步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 266 }
      name           = "第357步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 267 }
      name           = "第201步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 268 }
      name           = "第360步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 269 }
      name           = "第374步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 270 }
    name     = "苏联第3突擊集團军"
    location = 3077
    division = {
      id             = { type = 30151 id = 271 }
      name           = "第146步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 272 }
      name           = "第265步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 273 }
      name           = "第364步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 274 }
      name           = "第9近衛坦克?"
      type           = armor
      model          = 4
      extra          = super_heavy_armor
      brigade_model  = 2
    }
    division = {
      id             = { type = 30151 id = 275 }
      name           = "第23近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 276 }
      name           = "第52近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 277 }
      name           = "第33步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 278 }
      name           = "第150步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 279 }
      name           = "第171步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 280 }
      name           = "第207步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }
  landunit = {
    id       = { type = 30151 id = 252 }
    name     = "苏联第5突擊集團军"
    location = 3077
    division = {
      id             = { type = 30151 id = 254 }
      name           = "第248步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 255 }
      name           = "第301步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 256 }
      name           = "第266步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 257 }
      name           = "第89近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 258 }
      name           = "第94近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 259 }
      name           = "第60近衛步兵师"
      type           = motorized
      model          = 4
      extra          = b_u7
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 260 }
      name           = "第295步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 261 }
      name           = "第416步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
    division = {
      id             = { type = 30151 id = 262 }
      name           = "第230步兵师"
      type           = infantry
      model          = 4
      extra          = b_u4
      brigade_model  = 4
    }
  }

  navalunit = {
    id       = { type = 30152 id = 1 }
    name     = "黑海舰队 "
    location = 253
    base     = 253
    division = {
      id             = { type = 30155 id = 1 }
      name           = "巴黎公社 "
      type           = battleship
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 2
      brigade_model5 = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 2 }
      name           = "伏罗希洛夫 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 3 }
      name           = "莫洛托夫 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_anti_air_l
      extra3         = naval_radar_l
      brigade_model1 = 0
      brigade_model2 = 2
      brigade_model3 = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 4 }
      name           = "卡冈诺维奇 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_anti_air_l
      extra3         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 5 }
      name           = "红色高加索 "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 6 }
      name           = "红色工会国际 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 7 }
      name           = "第1驱逐舰支队 "
      type           = destroyer
      model          = 0
      extra1         = naval_anti_air_s
      brigade_model1 = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 8 }
      name           = "第2驱逐舰支队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 9 }
      name           = "第3驱逐舰支队 "
      type           = destroyer
      model          = 1
      extra1         = naval_anti_air_s
      brigade_model1 = 1
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 10 }
      name           = "第4驱逐舰支队 "
      type           = destroyer
      model          = 1
      extra1         = naval_anti_air_s
      brigade_model1 = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 11 }
      name           = "第17驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 30155 id = 12 }
      name           = "第18驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 30155 id = 13 }
      name           = "第19驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 0
    }
    division = {
      id             = { type = 30155 id = 14 }
      name           = "第1运输舰支队 "
      type           = transport
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 15 }
      name           = "第2运输舰支队 "
      type           = transport
      experience     = 25
    }
  }
  navalunit = {
    id       = { type = 30152 id = 2 }
    name     = "北方舰队 "
    location = 133
    base     = 133
    division = {
      id             = { type = 30155 id = 16 }
      name           = "摩尔曼斯克 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 17 }
      name           = "第13驱逐舰支队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 18 }
      name           = "第20驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 0
    }
    division = {
      id             = { type = 30155 id = 19 }
      name           = "第21驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
  }
  navalunit = {
    id       = { type = 30152 id = 3 }
    name     = "白令海舰队 "
    location = 1372
    base     = 1372
    division = {
      id             = { type = 30155 id = 20 }
      name           = "第16驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_anti_air_s
      brigade_model1 = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 21 }
      name           = "第23驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 0
    }
    division = {
      id             = { type = 30155 id = 22 }
      name           = "第25驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
  }
  navalunit = {
    id       = { type = 30152 id = 4 }
    name     = "波罗的海舰队 "
    location = 187
    base     = 187
    division = {
      id             = { type = 30155 id = 23 }
      name           = "十月革命 "
      type           = battleship
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 2
      brigade_model5 = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 24 }
      name           = "基洛夫 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 25 }
      name           = "马克西姆·高尔基 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 26 }
      name           = "加里宁 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_anti_air_l
      extra3         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 27 }
      name           = "第9驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      brigade_model1 = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 28 }
      name           = "第28驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 30155 id = 29 }
      name           = "第27驱逐舰支队 "
      type           = destroyer
      model          = 2
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
  }
  navalunit = {
    id       = { type = 30152 id = 5 }
    name     = "第2潜艇分队 "
    location = 187
    base     = 187
    division = {
      id             = { type = 30155 id = 30 }
      name           = "第9潜艇支队 "
      type           = submarine
      model          = 1
      experience     = 25
    }
  }
  navalunit = {
    id       = { type = 30152 id = 6 }
    name     = "第3潜艇分队 "
    location = 187
    base     = 187
    division = {
      id             = { type = 30155 id = 31 }
      name           = "第12潜艇支队 "
      type           = submarine
      model          = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 32 }
      name           = "第13潜艇支队 "
      type           = submarine
      model          = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 33 }
      name           = "第14潜艇支队 "
      type           = submarine
      model          = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 34 }
      name           = "第15潜艇支队 "
      type           = submarine
      model          = 3
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 35 }
      name           = "第16潜艇支队 "
      type           = submarine
      model          = 3
      experience     = 25
    }
  }
  navalunit = {
    id       = { type = 30152 id = 7 }
    name     = "第4潜艇分队 "
    location = 253
    base     = 253
    division = {
      id             = { type = 30155 id = 36 }
      name           = "第17潜艇支队 "
      type           = submarine
      model          = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 37 }
      name           = "第18潜艇支队 "
      type           = submarine
      model          = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 38 }
      name           = "第19潜艇支队 "
      type           = submarine
      model          = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 39 }
      name           = "第20潜艇支队 "
      type           = submarine
      model          = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 40 }
      name           = "第21潜艇支队 "
      type           = submarine
      model          = 1
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 41 }
      name           = "第22潜艇支队 "
      type           = submarine
      model          = 1
      experience     = 25
    }
  }
  navalunit = {
    id       = { type = 30152 id = 8 }
    name     = "第5潜艇分队 "
    location = 253
    base     = 253
    division = {
      id             = { type = 30155 id = 42 }
      name           = "第23潜艇支队 "
      type           = submarine
      model          = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 43 }
      name           = "第24潜艇支队 "
      type           = submarine
      model          = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 44 }
      name           = "第25潜艇支队 "
      type           = submarine
      model          = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 45 }
      name           = "第26潜艇支队 "
      type           = submarine
      model          = 1
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 46 }
      name           = "第27潜艇支队 "
      type           = submarine
      model          = 1
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 47 }
      name           = "第28潜艇支队 "
      type           = submarine
      model          = 1
      experience     = 25
    }
  }
  navalunit = {
    id       = { type = 30152 id = 9 }
    name     = "第6潜艇分队 "
    location = 1372
    base     = 1372
    division = {
      id             = { type = 30155 id = 48 }
      name           = "第29潜艇支队 "
      type           = submarine
      model          = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 49 }
      name           = "第30潜艇支队 "
      type           = submarine
      model          = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 50 }
      name           = "第31潜艇支队 "
      type           = submarine
      model          = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 51 }
      name           = "第32潜艇支队 "
      type           = submarine
      model          = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 52 }
      name           = "第33潜艇支队 "
      type           = submarine
      model          = 2
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 53 }
      name           = "第34潜艇支队 "
      type           = submarine
      model          = 2
      experience     = 25
    }
  }
  navalunit = {
    id       = { type = 30152 id = 10 }
    name     = "第1潜艇分队 "
    location = 133
    base     = 133
    division = {
      id             = { type = 30155 id = 54 }
      name           = "第1潜艇支队 "
      type           = submarine
      model          = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 55 }
      name           = "第2潜艇支队 "
      type           = submarine
      model          = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 56 }
      name           = "第3潜艇支队 "
      type           = submarine
      model          = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 57 }
      name           = "第4潜艇支队 "
      type           = submarine
      model          = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 58 }
      name           = "第5潜艇支队 "
      type           = submarine
      model          = 0
      experience     = 25
    }
    division = {
      id             = { type = 30155 id = 59 }
      name           = "第6潜艇支队 "
      type           = submarine
      model          = 1
      experience     = 25
    }
  }
  navalunit = {
    id       = { type = 30152 id = 11 }
    name     = "第7潜艇分队 "
    location = 187
    base     = 187
    division = {
      id             = { type = 30155 id = 60 }
      name           = "第35潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 61 }
      name           = "第36潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 62 }
      name           = "第37潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 63 }
      name           = "第38潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 64 }
      name           = "第39潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 65 }
      name           = "第40潜艇支队 "
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 30152 id = 12 }
    name     = "第8潜艇分队 "
    location = 253
    base     = 253
    division = {
      id             = { type = 30155 id = 66 }
      name           = "第41潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 67 }
      name           = "第42潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 68 }
      name           = "第43潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 69 }
      name           = "第44潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 70 }
      name           = "第45潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 71 }
      name           = "第46潜艇支队 "
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 30152 id = 13 }
    name     = "第9潜艇分队 "
    location = 133
    base     = 133
    division = {
      id             = { type = 30155 id = 72 }
      name           = "第47潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 73 }
      name           = "第48潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 74 }
      name           = "第49潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 75 }
      name           = "第50潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 76 }
      name           = "第51潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 77 }
      name           = "第52潜艇支队 "
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 30152 id = 14 }
    name     = "第10潜艇分队 "
    location = 1372
    base     = 1372
    division = {
      id             = { type = 30155 id = 78 }
      name           = "第53潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 79 }
      name           = "第54潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 80 }
      name           = "第55潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 81 }
      name           = "第56潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 82 }
      name           = "第57潜艇支队 "
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 30155 id = 83 }
      name           = "第58潜艇支队 "
      type           = submarine
      model          = 3
    }
  }

  airunit = { 
    id       = { type = 30153 id = 1 }
    name     = "第4轰炸航空联队 "
    location = 253
    base     = 253
    division = {
      id             = { type = 30156 id = 1 }
      name           = "第202轰炸航空师 "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 2 }
      name           = "第219轰炸航空师 "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 2 }
    name     = "第5强击航空联队 "
    location = 463
    base     = 463
    division = {
      id             = { type = 30156 id = 3 }
      name           = "第4近卫强击航空师 "
      type           = cas
      model          = 2
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 4 }
      name           = "第264强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 5 }
      name           = "第2近卫强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 3 }
    name     = "第8强击航空联队 "
    location = 300
    base     = 300
    division = {
      id             = { type = 30156 id = 6 }
      name           = "第224强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 7 }
      name           = "第226强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 8 }
      name           = "第299强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 4 }
    name     = "第5歼击航空联队 "
    location = 501
    base     = 501
    division = {
      id             = { type = 30156 id = 9 }
      name           = "第5近卫歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 10 }
      name           = "第256歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 5 }
    name     = "第10歼击航空联队 "
    location = 296
    base     = 296
    division = {
      id             = { type = 30156 id = 11 }
      name           = "第10近卫歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 12 }
      name           = "第235歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 6 }
    name     = "苏联空军第2军夜间轰炸联队 "
    location = 510
    base     = 510
    division = {
      id             = { type = 30156 id = 13 }
      name           = "第208夜间轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 14 }
      name           = "第326夜间轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 7 }
    name     = "第2近卫轰炸联队 "
    location = 132
    base     = 132
    division = {
      id             = { type = 30156 id = 15 }
      name           = "第1近卫轰炸航空师  "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 16 }
      name           = "第8近卫轰炸航空师 "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 8 }
    name     = "第1近卫强击联队 "
    location = 305
    base     = 305
    division = {
      id             = { type = 30156 id = 17 }
      name           = "第8轰炸航空师 "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 18 }
      name           = "第9近卫轰炸航空师 "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 19 }
      name           = "第12近卫歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 20 }
      name           = "第312夜间轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 9 }
    name     = "第2强击航空联队 "
    location = 303
    base     = 303
    division = {
      id             = { type = 30156 id = 21 }
      name           = "第7近卫强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 22 }
      name           = "第231强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 10 }
    name     = "第4歼击航空联队 "
    location = 307
    base     = 307
    division = {
      id             = { type = 30156 id = 23 }
      name           = "第294歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 24 }
      name           = "第302歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 11 }
    name     = "第7歼击航空联队 "
    location = 163
    base     = 163
    division = {
      id             = { type = 30156 id = 25 }
      name           = "第9近卫歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 26 }
      name           = "第205歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 27 }
      name           = "第304歼击航空师 "
      type           = interceptor
      model          = 2
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 12 }
    name     = "第1近卫混合空军联队 "
    location = 466
    base     = 466
    division = {
      id             = { type = 30156 id = 28 }
      name           = "第5近卫强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 29 }
      name           = "第6近卫强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 30 }
      name           = "第11近卫歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 13 }
    name     = "第9混合空军联队 "
    location = 466
    base     = 466
    division = {
      id             = { type = 30156 id = 31 }
      name           = "第305强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 32 }
      name           = "第306强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 33 }
      name           = "第295歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 14 }
    name     = "苏联空军第17军预备队 "
    location = 381
    base     = 381
    division = {
      id             = { type = 30156 id = 34 }
      name           = "第236歼击航空师 "
      type           = multi_role
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 35 }
      name           = "第238歼击航空师 "
      type           = multi_role
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 36 }
      name           = "第262夜间轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 37 }
      name           = "第218轰炸航空师   "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 15 }
    name     = "第11混合空军联队 "
    location = 457
    base     = 457
    division = {
      id             = { type = 30156 id = 38 }
      name           = "第4/148/293歼击航空师 "
      type           = multi_role
      model          = 2
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 39 }
      name           = "第658/724强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 40 }
      name           = "第284夜间轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 41 }
      name           = "第313夜间轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 16 }
    name     = "苏联空军第14军 "
    location = 479
    base     = 479
    division = {
      id             = { type = 30156 id = 42 }
      name           = "第281强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 43 }
      name           = "第269歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 44 }
      name           = "第225强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 17 }
    name     = "苏联空军第13军 "
    location = 300
    base     = 300
    division = {
      id             = { type = 30156 id = 45 }
      name           = "第276战略轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 46 }
      name           = "第277强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 47 }
      name           = "第275歼击航空师 "
      type           = multi_role
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 48 }
      name           = "第246歼击航空师 "
      type           = multi_role
      model          = 1
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 18 }
    name     = "苏联空军第12军 "
    location = 1202
    base     = 1202
    division = {
      id             = { type = 30156 id = 49 }
      name           = "第30战略轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 50 }
      name           = "第247轰炸航空师   "
      type           = tactical_bomber
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 51 }
      name           = "第248强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 52 }
      name           = "第246歼击航空师 "
      type           = multi_role
      model          = 1
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 19 }
    name     = "第11歼击航空联队 "
    location = 485
    base     = 485
    division = {
      id             = { type = 30156 id = 53 }
      name           = "第5近卫歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 54 }
      name           = "第190歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 20 }
    name     = "第1近卫轰炸联队 "
    location = 476
    base     = 476
    division = {
      id             = { type = 30156 id = 55 }
      name           = "第4近卫轰炸航空师 "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 56 }
      name           = "第5近卫轰炸航空师 "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 21 }
    name     = "第1海军轰炸联队 "
    location = 187
    base     = 187
    division = {
      id             = { type = 30156 id = 57 }
      name           = "第1海军轰炸航空师 "
      type           = naval_bomber
      model          = 2
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 58 }
      name           = "第2海军轰炸航空师 "
      type           = naval_bomber
      model          = 2
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 59 }
      name           = "第3海军轰炸航空师 "
      type           = naval_bomber
      model          = 2
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 22 }
    name     = "第3强击航空联队 "
    location = 463
    base     = 463
    division = {
      id             = { type = 30156 id = 60 }
      name           = "第307强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 61 }
      name           = "第308强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 23 }
    name     = "第3近卫轰炸联队 "
    location = 463
    base     = 463
    division = {
      id             = { type = 30156 id = 62 }
      name           = "第113战略轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 63 }
      name           = "第311强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 64 }
      name           = "第303歼击航空师 "
      type           = multi_role
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 65 }
      name           = "第213夜间轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 24 }
    name     = "第1近卫歼击联队 "
    location = 469
    base     = 469
    division = {
      id             = { type = 30156 id = 66 }
      name           = "第3近卫歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 67 }
      name           = "第4近卫歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 25 }
    name     = "第2歼击航空联队 "
    location = 469
    base     = 469
    division = {
      id             = { type = 30156 id = 68 }
      name           = "第240歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 69 }
      name           = "第303歼击航空师 "
      type           = interceptor
      model          = 1
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 26 }
    name     = "第3歼击航空联队 "
    location = 163
    base     = 163
    division = {
      id             = { type = 30156 id = 70 }
      name           = "第265歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 71 }
      name           = "第278歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 72 }
      name           = "第240歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 27 }
    name     = "苏联空军第1军预备队 "
    location = 296
    base     = 296
    division = {
      id             = { type = 30156 id = 73 }
      name           = "第6近卫轰炸航空师 "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 74 }
      name           = "第1近卫强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 75 }
      name           = "第334轰炸航空师   "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 76 }
      name           = "第311强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 28 }
    name     = "苏联空军第9军 "
    location = 1201
    base     = 1201
    division = {
      id             = { type = 30156 id = 77 }
      name           = "第229歼击航空师 "
      type           = interceptor
      model          = 4
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 78 }
      name           = "第325夜间轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 79 }
      name           = "第233强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 80 }
      name           = "第309歼击航空师 "
      type           = interceptor
      model          = 4
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 29 }
    name     = "苏联空军第6军 "
    location = 485
    base     = 485
    division = {
      id             = { type = 30156 id = 81 }
      name           = "第3近卫强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 82 }
      name           = "第336歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 83 }
      name           = "第242夜间轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 84 }
      name           = "第230强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 30 }
    name     = "第3轰炸航空联队 "
    location = 469
    base     = 469
    division = {
      id             = { type = 30156 id = 85 }
      name           = "第241轰炸航空师   "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 86 }
      name           = "第301轰炸航空师   "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 31 }
    name     = "第6混合空军联队 "
    location = 417
    base     = 417
    division = {
      id             = { type = 30156 id = 87 }
      name           = "第132轰炸航空师   "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 88 }
      name           = "第221轰炸航空师   "
      type           = tactical_bomber
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 89 }
      name           = "第283歼击航空师 "
      type           = interceptor
      model          = 2
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 32 }
    name     = "第6歼击航空联队 "
    location = 390
    base     = 390
    division = {
      id             = { type = 30156 id = 90 }
      name           = "第279歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 33 }
    name     = "苏联空军第16军混合联队 "
    location = 453
    base     = 453
    division = {
      id             = { type = 30156 id = 91 }
      name           = "第1近卫歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 92 }
      name           = "第234歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 93 }
      name           = "第286歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 94 }
      name           = "第271夜间轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 34 }
    name     = "苏联空军第10军 "
    location = 1372
    base     = 1372
    division = {
      id             = { type = 30156 id = 95 }
      name           = "第115歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 96 }
      name           = "第107强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 97 }
      name           = "第100歼击航空师 "
      type           = interceptor
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 98 }
      name           = "第95轰炸航空师   "
      type           = tactical_bomber
      model          = 1
      strength       = 100
      experience     = 25
    }
  }
  airunit = { 
    id       = { type = 30153 id = 35 }
    name     = "苏联空军第3军预备队 "
    location = 296
    base     = 296
    division = {
      id             = { type = 30156 id = 99 }
      name           = "第211强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 100 }
      name           = "第335强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 101 }
      name           = "第314夜间轰炸航空师 "
      type           = strategic_bomber
      model          = 0
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 30156 id = 102 }
      name           = "第316强击航空师 "
      type           = cas
      model          = 1
      strength       = 100
      experience     = 25
    }
  }

  division_development = {
    id             = { type = 30155 id = 84 }
    name           = "巴库 "
    type           = light_cruiser
    model          = 2
    cost           = 2.5
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 220
  }
  division_development = {
    id             = { type = 30155 id = 85 }
    name           = "高尔基 "
    type           = light_cruiser
    model          = 2
    cost           = 2.5
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 220
  }
  division_development = {
    id             = { type = 30155 id = 86 }
    name           = "里加 "
    type           = light_cruiser
    model          = 2
    cost           = 2.5
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 220
  }
  division_development = {
    id             = { type = 30155 id = 87 }
    name           = "塔林 "
    type           = light_cruiser
    model          = 2
    cost           = 2.5
    date           = { year = 1945 month = december day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 220
  }
  division_development = {
    id             = { type = 30155 id = 88 }
    name           = "维尔纽斯 "
    type           = light_cruiser
    model          = 2
    cost           = 2.5
    date           = { year = 1945 month = december day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 220
  }
  division_development = {
    id             = { type = 30155 id = 89 }
    name           = "斯摩棱斯克 "
    type           = light_cruiser
    model          = 2
    cost           = 2.5
    date           = { year = 1945 month = december day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 220
  }
  division_development = {
    id             = { type = 30155 id = 90 }
    name           = "阿尔汉格尔斯克 "
    type           = light_cruiser
    model          = 2
    cost           = 2.5
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 220
  }
  division_development = {
    id             = { type = 30155 id = 91 }
    name           = "符拉迪沃斯托克 "
    type           = light_cruiser
    model          = 2
    cost           = 2.5
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 220
  }
  division_development = {
    id             = { type = 30155 id = 92 }
    name           = "新西伯利亚 "
    type           = heavy_cruiser
    model          = 2
    cost           = 3.0
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 310
  }
  division_development = {
    id             = { type = 30155 id = 93 }
    name           = "伊尔库茨克 "
    type           = heavy_cruiser
    model          = 2
    cost           = 3.0
    date           = { year = 1945 month = december day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 310
  }
  division_development = {
    id             = { type = 30155 id = 94 }
    name           = "库尔斯克 "
    type           = heavy_cruiser
    model          = 2
    cost           = 3.0
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 310
  }
  division_development = {
    id             = { type = 30155 id = 95 }
    name           = "斯维尔德洛夫斯克 "
    type           = heavy_cruiser
    model          = 2
    cost           = 3.0
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 310
  }
  division_development = {
    id             = { type = 30155 id = 96 }
    name           = "基辅 "
    type           = battlecruiser
    model          = 2
    cost           = 4.0
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 615
  }
  division_development = {
    id             = { type = 30155 id = 97 }
    name           = "明斯克 "
    type           = battlecruiser
    model          = 2
    cost           = 4.0
    date           = { year = 1945 month = december day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 615
  }
  division_development = {
    id             = { type = 30155 id = 98 }
    name           = "列宁格勒 "
    type           = battlecruiser
    model          = 2
    cost           = 4.0
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 615
  }
  division_development = {
    id             = { type = 30155 id = 99 }
    name           = "莫斯科 "
    type           = battleship
    model          = 2
    cost           = 4.5
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 730
  }
  division_development = {
    id             = { type = 30155 id = 100 }
    name           = "斯大林格勒 "
    type           = battleship
    model          = 2
    cost           = 4.5
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 730
  }
  division_development = {
    id             = { type = 30155 id = 101 }
    name           = "约瑟夫·斯大林 "
    type           = carrier
    model          = 1
    cost           = 5.7
    date           = { year = 1946 month = january day = 1 }
    close_when_finished = no
    waitingforclosure = no
    days           = 650
    extra1         = cag
    brigade_model1 = 1
  }
  division_development = {
    id             = { type = 30155 id = 102 }
    name           = "第30驱逐舰支队 "
    type           = destroyer
    model          = 2
    cost           = 1.0
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 140
  }
  division_development = {
    id             = { type = 30155 id = 103 }
    name           = "第31驱逐舰支队 "
    type           = destroyer
    model          = 2
    cost           = 1.0
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 140
  }
  division_development = {
    id             = { type = 30155 id = 104 }
    name           = "第32驱逐舰支队 "
    type           = destroyer
    model          = 2
    cost           = 1.0
    date           = { year = 1945 month = december day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 140
  }
  division_development = {
    id             = { type = 30155 id = 105 }
    name           = "第33驱逐舰支队 "
    type           = destroyer
    model          = 2
    cost           = 1.0
    date           = { year = 1945 month = december day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 140
  }
  division_development = {
    id             = { type = 30155 id = 106 }
    name           = "第34驱逐舰支队 "
    type           = destroyer
    model          = 2
    cost           = 1.0
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 140
  }
  division_development = {
    id             = { type = 30155 id = 107 }
    name           = "第35驱逐舰支队 "
    type           = destroyer
    model          = 2
    cost           = 1.0
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 140
  }
  division_development = {
    id             = { type = 30155 id = 108 }
    name           = "第50潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 109 }
    name           = "第51潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 110 }
    name           = "第52潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 111 }
    name           = "第53潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 112 }
    name           = "第54潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 113 }
    name           = "第55潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1945 month = november day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 114 }
    name           = "第56潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1945 month = december day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 115 }
    name           = "第57潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1945 month = december day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 116 }
    name           = "第58潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1945 month = december day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 117 }
    name           = "第59潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1945 month = december day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 118 }
    name           = "第60潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1945 month = december day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 119 }
    name           = "第61潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1945 month = december day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 120 }
    name           = "第62潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 121 }
    name           = "第63潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 122 }
    name           = "第64潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 123 }
    name           = "第65潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 124 }
    name           = "第66潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30155 id = 125 }
    name           = "第67潜艇支队 "
    type           = submarine
    model          = 3
    cost           = 1.5
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 160
  }
  division_development = {
    id             = { type = 30156 id = 103 }
    name           = "第4海军轰炸航空师 "
    type           = naval_bomber
    model          = 1
    cost           = 5.0
    date           = { year = 1945 month = october day = 24 }
    close_when_finished = no
    waitingforclosure = no
    days           = 180
  }
  division_development = {
    id             = { type = 30156 id = 104 }
    name           = "第5海军轰炸航空师 "
    type           = naval_bomber
    model          = 1
    cost           = 5.0
    date           = { year = 1945 month = october day = 24 }
    close_when_finished = no
    waitingforclosure = no
    days           = 180
  }
  division_development = {
    id             = { type = 30156 id = 105 }
    name           = "第6海军轰炸航空师 "
    type           = naval_bomber
    model          = 1
    cost           = 5.0
    date           = { year = 1945 month = november day = 14 }
    close_when_finished = no
    waitingforclosure = no
    days           = 180
  }
  division_development = {
    id             = { type = 30156 id = 106 }
    name           = "第7海军轰炸航空师 "
    type           = naval_bomber
    model          = 1
    cost           = 5.0
    date           = { year = 1945 month = november day = 14 }
    close_when_finished = no
    waitingforclosure = no
    days           = 180
  }
  division_development = {
    id             = { type = 30156 id = 107 }
    name           = "第8海军轰炸航空师 "
    type           = naval_bomber
    model          = 1
    cost           = 5.0
    date           = { year = 1945 month = december day = 4 }
    close_when_finished = no
    waitingforclosure = no
    days           = 180
  }
  division_development = {
    id             = { type = 30156 id = 108 }
    name           = "第9海军轰炸航空师 "
    type           = naval_bomber
    model          = 1
    cost           = 5.0
    date           = { year = 1945 month = december day = 4 }
    close_when_finished = no
    waitingforclosure = no
    days           = 180
  }
  division_development = {
    id             = { type = 30156 id = 109 }
    name           = "第10海军轰炸航空师 "
    type           = naval_bomber
    model          = 1
    cost           = 5.0
    date           = { year = 1946 month = january day = 0 }
    close_when_finished = no
    waitingforclosure = no
    days           = 180
  }

  province_development = {
    id             = { type = 4712 id = -2147483648 }
    name           = ""
    location       = 1552
    cost           = 15.0000
    date           = { year = 1946 month = march day = 14 }
    close_when_finished = no
    waitingforclosure = no
    size           = 2
    days           = 351
    days_for_first = 180
    type           = nuclear_reactor
  }
}
