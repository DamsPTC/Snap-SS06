/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b23051c; end: 10b23058f;  */

void FUN_10b23051c(long *param_1,long *param_2)

{
  if (*(char *)(*param_1 + 0x30) == '\x01') {
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x90))(param_2,*param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010b230584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x88))(param_2,*param_1 + 0x10);
    return;
  }
  return;
}



/* Entry: 10b230590; end: 10b2305e7;  */

void FUN_10b230590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  auStack_50[0] = 0;
  uStack_38 = 0;
  FUN_10b2305e8(param_1,&uStack_30,param_2,auStack_50,param_3);
  func_0x00010b23b16c();
  func_0x0001052b243c(&uStack_30);
  return;
}



/* Entry: 10b2305e8; end: 10b2306cb;  */

void FUN_10b2305e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [56];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_00 != 0);
  }
  uStack_88 = param_4[1];
  uStack_90 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b23649c(auStack_78,&uStack_b0);
  FUN_10b2303fc(&uStack_40,param_5,param_6,auStack_78);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c2be8c(&uStack_40);
  FUN_10b209a38(auStack_78);
  FUN_10b209a58(&uStack_b0);
  return;
}



/* Entry: 10b2306cc; end: 10b230707;  */

void FUN_10b2306cc(void)

{
  FUN_10b2305e8();
  func_0x00010b23b16c();
  return;
}



/* Entry: 10b230708; end: 10b2307b7;  */

void FUN_10b230708(long param_1)

{
  undefined1 in_ZR;
  
  func_0x00010b23b348(param_1,param_1 + 0x80);
  if (!(bool)in_ZR) {
    func_0x00010b23afd8();
    func_0x00010b23b4d4();
  }
  return;
}



/* Entry: 10b2307b8; end: 10b2307bf;  */

void FUN_10b2307b8(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x78) = param_2;
  return;
}



/* Entry: 10b2307c0; end: 10b231697;  */

void FUN_10b2307c0(ulong param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 param_6,long param_7,undefined8 param_8)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  undefined8 *unaff_x19;
  ulong in_register_00005008;
  ulong uVar10;
  undefined8 in_stack_00000050;
  undefined1 auStack_7a8 [24];
  ulong *puStack_790;
  undefined8 *puStack_788;
  undefined8 *puStack_780;
  code *pcStack_778;
  undefined8 *puStack_770;
  ulong *puStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 *puStack_750;
  undefined1 *puStack_748;
  undefined1 *puStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined4 uStack_71c;
  undefined1 auStack_718 [104];
  undefined1 auStack_6b0 [16];
  undefined8 uStack_6a0;
  long lStack_698;
  undefined8 uStack_690;
  long lStack_688;
  ulong uStack_680;
  long lStack_678;
  undefined8 uStack_670;
  long lStack_668;
  undefined8 uStack_660;
  long lStack_658;
  undefined8 uStack_650;
  long lStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  long lStack_628;
  undefined8 uStack_620;
  long lStack_618;
  undefined1 auStack_608 [40];
  undefined1 auStack_5e0 [24];
  undefined1 uStack_5c8;
  undefined1 auStack_5c0 [24];
  undefined1 uStack_5a8;
  undefined8 auStack_5a0 [8];
  undefined1 uStack_560;
  undefined8 auStack_558 [29];
  undefined1 uStack_470;
  undefined1 auStack_468 [24];
  undefined1 uStack_450;
  undefined1 auStack_448 [56];
  undefined1 uStack_410;
  undefined1 auStack_408 [24];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  ulong *puStack_3d0;
  undefined1 uStack_3c8;
  ulong *puStack_3c0;
  long lStack_3b8;
  ulong *puStack_3b0;
  long lStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  long lStack_390;
  ulong uStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulong *puStack_348;
  undefined8 uStack_340;
  ulong *puStack_338;
  undefined1 uStack_330;
  ulong uStack_328;
  long lStack_320;
  undefined4 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  code *pcStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong auStack_268 [5];
  undefined1 uStack_240;
  undefined8 uStack_23c;
  ulong *puStack_178;
  char *pcStack_40;
  long lStack_38;
  char *pcStack_30;
  long lStack_28;
  undefined8 uStack_18;
  
  func_0x00010b23b3c4();
  func_0x00010b23ab6c();
  uStack_3d8 = 0;
  uStack_18 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_3c8 = 1;
  puStack_3d0 = param_2;
  func_0x00010bd3f3bc();
  (**(code **)(*(long *)*param_4 + 0x60))(&uStack_3f0);
  func_0x00010b23af18();
  func_0x000107c278b8(auStack_408);
  auStack_448[0] = 0;
  uStack_410 = 0;
  auStack_468[0] = 0;
  uStack_450 = 0;
  auStack_558[0]._0_1_ = 0;
  uStack_470 = 0;
  auStack_5a0[0]._0_1_ = 0;
  uStack_560 = 0;
  auStack_5c0[0] = 0;
  uStack_5a8 = 0;
  auStack_5e0[0] = 0;
  uStack_5c8 = 0;
  uStack_738 = 0;
  uStack_730 = 0;
  puStack_740 = auStack_5e0;
  puStack_748 = auStack_5c0;
  puStack_750 = auStack_5a0;
  puStack_758 = auStack_558;
  puStack_760 = (undefined8 *)0x1;
  puStack_770 = (undefined8 *)((ulong)puStack_770 & 0xffffffffffffff00);
  puStack_768 = param_2;
  func_0x00010b23abf8(auStack_268,auStack_408,auStack_448,auStack_468);
  FUN_10b1220e4(param_7,auStack_268);
  func_0x0001052b5d04(auStack_268);
  func_0x000107c279a4(auStack_5e0);
  func_0x0001052b4f4c(auStack_5c0);
  func_0x0001052b4f6c(auStack_5a0);
  func_0x0001052b4218(auStack_558);
  func_0x0001052b4fb8(auStack_468);
  func_0x0001052b41f8(auStack_448);
  uVar1 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b23b5ac();
  if ((((uVar1 & 1) == 0) && (func_0x00010b23b59c(), (uVar1 & 1) == 0)) &&
     (func_0x00010b23b5a4(), (uVar1 & 1) == 0)) {
    uStack_3a0 = uStack_3a0 & 0xffffffffffffff00;
    uStack_380 = uStack_380 & 0xffffffffffffff00;
    puVar4 = param_4;
    FUN_10b23b8fc();
    if ((int)puVar4 != 0) {
      FUN_10b23e068(&uStack_280,param_4);
      if (uStack_280 != 0) {
        func_0x00010b1800dc(auStack_268);
        FUN_10b122234(&uStack_3a0,auStack_268);
        func_0x0001052ac664(auStack_268);
      }
      FUN_10b23a4b8(&uStack_280);
    }
    func_0x00010b23ace0();
    func_0x00010b23acd4();
    func_0x00010b23ad34();
    func_0x00010b23b3a0();
    *(undefined4 *)(param_7 + 0x7c) = 2;
    if ((char)uStack_380 == '\x01') {
      func_0x00010b1800dc(auStack_608,&uStack_3a0);
      func_0x0001052ac5d8(auStack_268,auStack_608);
      uStack_240 = 0;
      uStack_23c = 0;
      FUN_10b2316e0(param_7 + 0x18,auStack_268);
      func_0x0001052ac664(auStack_268);
      func_0x0001052ac664(auStack_608);
    }
    in_ZR = *(char *)(param_7 + 0x98) == '\x01';
    if ((bool)in_ZR) {
      *(undefined1 *)(param_7 + 0x98) = 0;
    }
    func_0x00010b23b0e0();
    func_0x00010b23b0e8();
    param_2 = &uStack_3a0;
    func_0x00010b23ad34();
    func_0x00010b23b388();
    uStack_280 = param_1;
    uStack_278 = in_register_00005008;
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b23ae3c(auStack_268,&uStack_280);
    puVar2 = auStack_268;
    func_0x00010b23af38();
    func_0x00010b23afc0();
    func_0x0001052ac684(&uStack_280);
    func_0x0001052ac664(&uStack_3a0);
    goto LAB_10b2312cc;
  }
  FUN_10b2317e0(&uStack_620);
  puVar2 = &uStack_630;
  uVar9 = param_3;
  FUN_10b23182c();
  uVar7 = (undefined1)uVar9;
  if (uStack_630 == 0) {
    func_0x00010b23b5a4();
    if ((int)puVar2 != 0) {
      func_0x00010b23b410();
      func_0x00010b23b600(*param_4);
      func_0x00010b23b1c8();
      func_0x00010b23b210();
      func_0x0001052bb09c(&uStack_3a0);
      func_0x00010b23af74();
      func_0x00010b23b43c();
      func_0x00010b23b468();
      func_0x00010b23ae44();
      *(undefined1 *)(param_7 + 0x80) = 1;
      *(undefined4 *)(param_7 + 0x84) = 2;
      func_0x000107c278b8(&uStack_3a0,&UNK_10f73ad6b);
      FUN_10b231a1c(&uStack_3a0);
      func_0x00010b23ae44();
      func_0x00010b23b0d0();
      func_0x00010b23abb8();
      FUN_10b231a98();
      lStack_38 = lStack_28;
      pcStack_40 = pcStack_30;
      if (lStack_28 != 0) {
        do {
          func_0x000107c351e4();
        } while (extraout_w10 != 0);
      }
      func_0x00010b23ae3c(&uStack_3a0,&pcStack_40);
      puVar2 = &uStack_3a0;
      func_0x00010b23af38();
      func_0x00010b23b1c0();
      func_0x00010b23b1b8();
      func_0x00010b23ae70();
      func_0x0001052bb09c(auStack_268);
      func_0x00010b23af8c();
      goto LAB_10b2312bc;
    }
    uStack_278 = 0;
    uStack_280 = 0;
    func_0x00010b23b5ac();
    if ((int)puVar2 == 0) {
      func_0x00010b23b59c();
      if ((int)puVar2 != 0) {
        func_0x00010b23b394();
        FUN_10b23df18();
        goto LAB_10b230d38;
      }
    }
    else {
      func_0x00010b23b394();
      FUN_10b23deb8();
LAB_10b230d38:
      puVar2 = &uStack_280;
      uVar7 = SUB81(auStack_268,0);
      FUN_10b15211c();
      func_0x00010b23b220();
    }
    if (uStack_280 == 0) {
      pcStack_30 = "false";
    }
    else {
      func_0x00010b23b3e8();
      *(ulong **)(param_7 + 0x218) = puVar2;
      *(undefined1 *)(param_7 + 0x220) = uVar7;
      pcStack_30 = "true";
    }
    FUN_10b227e90(auStack_268,&PTR_s_success_110cc9a38,&pcStack_30);
    func_0x000108992a94(&uStack_3a0,auStack_268,1,&pcStack_40);
    func_0x000107c278c0(auStack_268);
    FUN_10b23eda4(0x77,&uStack_3a0);
    func_0x00010b23ace0();
    func_0x00010b23acd4();
    func_0x00010b23ad34();
    func_0x00010b23b3a0();
    *(undefined4 *)(param_7 + 0x7c) = 3;
    func_0x00010b23b0e0();
    func_0x00010b23b0e8();
    func_0x00010b23ad34();
    func_0x00010b23b0d0();
    func_0x00010b23abb8();
    FUN_10b231a98();
    func_0x00010b23ad68();
    func_0x00010b23ae3c(auStack_268,&pcStack_30);
    puVar2 = auStack_268;
    func_0x00010b23af38();
    func_0x00010b23afc0();
    func_0x00010b23ae70();
    func_0x000108992e04(&uStack_3a0);
    puVar3 = &uStack_280;
LAB_10b2312b8:
    FUN_10b152714(puVar3);
  }
  else {
    func_0x00010b23ae4c();
    (*extraout_x9)(auStack_268);
    puVar2 = auStack_268;
    cVar8 = (char)uStack_630 + '\x10';
    uStack_71c = param_6;
    FUN_10b23ba20();
    puVar3 = puVar2;
    func_0x00010b23ad34();
    if (((ulong)puVar2 & 1) != 0) {
      uStack_640 = 0;
      uStack_638 = 0;
      func_0x00010b23b5ac();
      if ((int)puVar3 == 0) {
        func_0x00010b23b59c();
        if ((int)puVar3 == 0) {
          func_0x00010b23b5a4();
          if (((ulong)puVar3 & 1) != 0) {
            func_0x00010b23b394();
            FUN_10b23df78();
            func_0x00010b23afa0();
            func_0x00010b23b220();
            if (uStack_640 == 0) {
              func_0x00010b23b410();
              func_0x00010b23b600(*param_4);
              func_0x00010b23b1c8();
              func_0x00010b23b210();
              func_0x0001052bb09c(&uStack_3a0);
              func_0x00010b23af74();
              func_0x00010b23b43c();
              func_0x00010b23b468();
              func_0x00010b23ae44();
              *(undefined1 *)(param_7 + 0x80) = 1;
              *(undefined4 *)(param_7 + 0x84) = 1;
              func_0x000107c278b8(&uStack_3a0,&UNK_10f73ae3a);
              FUN_10b231a1c(&uStack_3a0);
              func_0x00010b23ae44();
              func_0x00010b23b0d0();
              func_0x00010b23abb8();
              func_0x00010b23b488();
              lStack_38 = lStack_28;
              pcStack_40 = pcStack_30;
              if (lStack_28 != 0) {
                do {
                  func_0x000107c351e4();
                } while (extraout_w10_02 != 0);
              }
              func_0x00010b23ae3c(&uStack_3a0,&pcStack_40);
              puVar2 = &uStack_3a0;
              func_0x00010b23af38();
              func_0x00010b23b1c0();
              func_0x00010b23b1b8();
              func_0x00010b23ae70();
              func_0x0001052bb09c(auStack_268);
              func_0x00010b23af8c();
              goto LAB_10b2312b4;
            }
          }
        }
        else {
          func_0x00010b23b394();
          FUN_10b23df18();
          func_0x00010b23afa0();
          func_0x00010b23b220();
          if (uStack_640 == 0) {
            func_0x00010b23ace0();
            func_0x00010b23acd4();
            func_0x00010b23ad34();
            func_0x00010b23b3a0();
            *(undefined4 *)(param_7 + 0x7c) = extraout_w8_00;
            func_0x00010b23b0e0();
            func_0x00010b23b0e8();
            func_0x00010b23ad34();
            func_0x00010b23b0d0();
            func_0x00010b23abb8();
            func_0x00010b23b488();
            func_0x00010b23b47c();
            func_0x00010b23b474();
            func_0x00010b23ae4c();
            func_0x00010b23b1c8();
            func_0x00010b23b45c();
            func_0x00010b23b450();
            func_0x00010b23b448();
            func_0x00010b23ae44();
            func_0x00010b23b434(&uStack_3a0);
            func_0x00010b23ad68();
            func_0x00010b23ae3c(&uStack_280,&pcStack_30);
            puVar2 = &uStack_280;
            func_0x00010b23af38();
            goto LAB_10b230bf0;
          }
        }
LAB_10b230ef0:
        func_0x00010b23b3e8(uStack_640);
        *(ulong **)(param_7 + 0x218) = puVar3;
        *(char *)(param_7 + 0x220) = cVar8;
        FUN_10b231cdc(&uStack_650);
        func_0x00010b231d14(&uStack_660);
        func_0x00010b231d48(&uStack_670);
        FUN_10b231d7c(&uStack_680);
        FUN_10b231ddc(&uStack_690);
        auStack_268[1] = 0;
        auStack_268[0] = 0;
        auStack_268[2] = 0;
        func_0x00010b23b5c4(&uStack_6a0);
        func_0x000107c27a18(auStack_268);
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_288 = 0;
        uStack_290 = 0;
        pcStack_2b0 = FUN_10b23a680;
        ppuStack_2a8 = &PTR_DAT_110873830;
        FUN_10b22ac1c(auStack_718,param_8);
        puStack_750 = &uStack_6a0;
        puStack_758 = &uStack_670;
        puStack_760 = &uStack_690;
        puStack_768 = &uStack_680;
        puStack_770 = &uStack_660;
        puStack_748 = auStack_718;
        FUN_10b231eac(auStack_6b0,param_3,&uStack_640,&uStack_3f0,&pcStack_2b0,param_5,&uStack_620,
                      &uStack_650);
        uStack_398 = uStack_638;
        uStack_3a0 = uStack_640;
        uVar1 = uStack_640;
        uVar10 = uStack_638;
        if (uStack_638 != 0) {
          do {
            func_0x000107c351e4();
          } while (extraout_w10_03 != 0);
        }
        lStack_390 = param_7;
        func_0x00010b23b388();
        uStack_388 = uVar1;
        uStack_380 = uVar10;
        if (extraout_x8_02 != 0) {
          do {
            func_0x000107c351e4();
          } while (extraout_w10_04 != 0);
        }
        lStack_368 = lStack_618;
        uStack_370 = uStack_620;
        uStack_378 = param_3;
        if (lStack_618 != 0) {
          do {
            func_0x000107c351e4();
          } while (extraout_w10_05 != 0);
        }
        uStack_350 = uStack_3e0;
        uStack_358 = uStack_3e8;
        uStack_360 = uStack_3f0;
        uStack_3e0 = 0;
        uStack_3f0 = 0;
        uStack_3e8 = 0;
        puStack_338 = puStack_3d0;
        uStack_340 = uStack_3d8;
        uStack_330 = uStack_3c8;
        uStack_328 = uStack_630;
        lStack_320 = lStack_628;
        puStack_348 = param_2;
        if (lStack_628 != 0) {
          do {
            func_0x000107c351e4();
          } while (extraout_w10_06 != 0);
        }
        uStack_318 = uStack_71c;
        lStack_308 = lStack_648;
        uStack_310 = uStack_650;
        if (lStack_648 != 0) {
          do {
            func_0x000107c351e4();
          } while (extraout_w10_07 != 0);
        }
        lStack_2f8 = lStack_658;
        uStack_300 = uStack_660;
        if (lStack_658 != 0) {
          do {
            func_0x000107c351e4();
          } while (extraout_w10_08 != 0);
        }
        lStack_2e8 = lStack_668;
        uStack_2f0 = uStack_670;
        if (lStack_668 != 0) {
          do {
            func_0x000107c351e4();
          } while (extraout_w10_09 != 0);
        }
        lStack_2d8 = lStack_678;
        uStack_2e0 = uStack_680;
        if (lStack_678 != 0) {
          do {
            func_0x000107c351e4();
          } while (extraout_w10_10 != 0);
        }
        lStack_2c8 = lStack_688;
        uStack_2d0 = uStack_690;
        if (lStack_688 != 0) {
          do {
            func_0x000107c351e4();
          } while (extraout_w10_11 != 0);
        }
        lStack_2b8 = lStack_698;
        uStack_2c0 = uStack_6a0;
        if (lStack_698 != 0) {
          do {
            func_0x000107c351e4();
          } while (extraout_w10_12 != 0);
        }
        uStack_278 = 0;
        uStack_280 = 0;
        pcStack_30 = (char *)0x0;
        lStack_28 = 0;
        FUN_10b22baac(auStack_268,auStack_6b0,&pcStack_30);
        FUN_10b22bad4(&uStack_280,auStack_268);
        FUN_10b22b928(auStack_268);
        FUN_10b22b928(&pcStack_30);
        func_0x00010b23b300();
        func_0x00010b23b618();
        func_0x00010b236cec();
        *param_2 = (ulong)&PTR_FUN_110cc9b10;
        FUN_10b2364e0(&pcStack_40,param_2[3],param_2[4]);
        FUN_10b236518(auStack_268,&uStack_3a0);
        lStack_3a8 = 0;
        puStack_3b0 = (ulong *)0x0;
        puStack_3c0 = (ulong *)(uStack_280 + 0x48);
        lStack_3b8 = CONCAT71(lStack_3b8._1_7_,1);
        puStack_178 = param_2;
        __ZNSt3__15mutex4lockEv();
        uVar1 = uStack_280;
        FUN_10b2365d4();
        if ((int)uVar1 == 0) {
          param_2 = (ulong *)0x100;
          __Znwm();
          *param_2 = (ulong)&PTR_SUB_110cc9bc8;
          FUN_10b236518(param_2 + 1,auStack_268);
          puVar2 = puStack_178;
          puStack_178 = (ulong *)0x0;
          param_2[0x1f] = (ulong)puVar2;
          lVar5 = *(long *)(uStack_280 + 0x90);
          *(ulong **)(uStack_280 + 0x90) = param_2;
          if (lVar5 != 0) {
            func_0x00010b23abe0();
          }
        }
        else {
          FUN_10b22bad4(&puStack_3b0,&uStack_280);
        }
        func_0x000107c2798c(&puStack_3c0);
        puVar2 = puStack_3b0;
        if (puStack_3b0 != (ulong *)0x0) {
          puStack_3c0 = puStack_3b0;
          lStack_3b8 = lStack_3a8;
          if (lStack_3a8 != 0) {
            do {
              func_0x000107c351e4();
            } while (extraout_w10_13 != 0);
          }
          FUN_10b23660c(auStack_268);
          FUN_10b22b928(&puStack_3c0);
        }
        unaff_x19[1] = lStack_38;
        *unaff_x19 = pcStack_40;
        pcStack_40 = (char *)0x0;
        lStack_38 = 0;
        FUN_10b22b928(&puStack_3b0);
        func_0x00010b236cbc(auStack_268);
        FUN_10b236de8(&pcStack_40);
        FUN_10b22b928(&uStack_280);
        FUN_10b232698(&uStack_3a0);
        FUN_10b22b928(auStack_6b0);
        func_0x00010b121ac0(auStack_718);
        func_0x00010b23b150();
        FUN_10b23a65c(&uStack_6a0);
        func_0x00010b23a608(&uStack_690);
        func_0x0001078a52b0(&uStack_680);
        func_0x00010b23a5e4(&uStack_670);
        FUN_10b23a590(&uStack_660);
        FUN_10b23a53c(&uStack_650);
      }
      else {
        func_0x00010b23b394();
        FUN_10b23deb8();
        func_0x00010b23afa0();
        func_0x00010b23b220();
        if (uStack_640 != 0) goto LAB_10b230ef0;
        func_0x00010b23ace0();
        func_0x00010b23acd4();
        func_0x00010b23ad34();
        func_0x00010b23b3a0();
        *(undefined4 *)(param_7 + 0x7c) = extraout_w8;
        func_0x00010b23b0e0();
        func_0x00010b23b0e8();
        func_0x00010b23ad34();
        func_0x00010b23b0d0();
        func_0x00010b23abb8();
        func_0x00010b23b488();
        func_0x00010b23b47c();
        func_0x00010b23b474();
        func_0x00010b23ae4c();
        func_0x00010b23b1c8();
        func_0x00010b23b45c();
        func_0x00010b23b450();
        func_0x00010b23b448();
        func_0x00010b23ae44();
        func_0x00010b23b434(&uStack_3a0);
        func_0x00010b23ad68();
        func_0x00010b23ae3c(&uStack_280,&pcStack_30);
        puVar2 = &uStack_280;
        func_0x00010b23af38();
LAB_10b230bf0:
        FUN_10b125534(&uStack_280);
        func_0x00010b23ae70();
        func_0x00010b23ae44();
        func_0x000105673d7c(auStack_268);
      }
LAB_10b2312b4:
      puVar3 = &uStack_640;
      goto LAB_10b2312b8;
    }
    func_0x00010b23ace0();
    func_0x00010b23acd4();
    func_0x00010b23ad34();
    func_0x00010b23b3a0();
    *(undefined4 *)(param_7 + 0x7c) = 2;
    in_ZR = *(char *)(param_7 + 0x98) == '\x01';
    if ((bool)in_ZR) {
      *(undefined1 *)(param_7 + 0x98) = 0;
    }
    func_0x00010b23b0e0();
    func_0x00010b23b0e8();
    func_0x00010b23ad34();
    func_0x00010b23b388();
    uStack_3a0 = param_1;
    uStack_398 = in_register_00005008;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b23ae3c(auStack_268,&uStack_3a0);
    puVar2 = auStack_268;
    func_0x00010b23af38();
    func_0x00010b23afc0();
    func_0x0001052ac684(&uStack_3a0);
  }
LAB_10b2312bc:
  func_0x00010b239d68(&uStack_630);
  FUN_10b22e7d4(&uStack_620);
LAB_10b2312cc:
  puVar4 = &uStack_3f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000107c351d4(uStack_18);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b23b1c0();
    func_0x00010b23b1b8();
    func_0x00010b23ae70();
    func_0x0001052bb09c(auStack_268);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_280);
    FUN_10b152714(&uStack_640);
    func_0x00010b239d68(&uStack_630);
    FUN_10b22e7d4(&uStack_620);
    puVar6 = &uStack_3f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6);
    func_0x00010b23acc0();
    pcStack_778 = FUN_10b231698;
    puStack_790 = param_2;
    puStack_788 = puVar4;
    puStack_780 = &stack0x00000050;
    FUN_10b23e27c(auStack_7a8,puVar2);
    FUN_10b235d88(puVar6,auStack_7a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_7a8);
    return;
  }
  return;
}



/* Entry: 10b231698; end: 10b2316df;  */

void FUN_10b231698(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  FUN_10b23e27c(auStack_38,param_2);
  FUN_10b235d88(param_1,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10b2316e0; end: 10b231713;  */

long FUN_10b2316e0(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10b1221e0();
  }
  else {
    func_0x0001052b4c50();
  }
  return param_1;
}



/* Entry: 10b231714; end: 10b23178f;  */

void FUN_10b231714(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  
  func_0x00010b23ab80(param_1,param_2,param_1);
  uStack_28 = extraout_x8;
  func_0x00010b23b298();
  func_0x00010b23aff8(auStack_70,auStack_58);
  func_0x00010b23b290();
  uVar1 = 0x6c;
  FUN_10b23eda4(0x6c,auStack_70);
  func_0x00010b23b280();
  func_0x000107c351d4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b23b280();
  func_0x00010b23acc0();
  func_0x00010b23ae64();
  func_0x00010b236cec(auStack_c8);
  FUN_10b236fe8(auStack_c8);
  FUN_10b2364e0(uVar1,uStack_b0,uStack_a8);
  FUN_10b236e0c(auStack_c8);
  return;
}



/* Entry: 10b231790; end: 10b2317df;  */

void FUN_10b231790(void)

{
  undefined1 auStack_48 [40];
  
  func_0x00010b23ae64();
  func_0x00010b236cec(auStack_48);
  FUN_10b236fe8(auStack_48);
  FUN_10b2364e0();
  FUN_10b236e0c(auStack_48);
  return;
}



/* Entry: 10b2317e0; end: 10b23182b;  */

void FUN_10b2317e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110cca090;
  func_0x00010b563e70(puVar2,0);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b23182c; end: 10b23193b;  */

void FUN_10b23182c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  long lStack_a0;
  long lStack_98;
  long lStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b23ab54();
  uStack_40 = 0;
  lVar1 = param_2 + 0x98;
  uStack_60 = 1;
  lStack_68 = lVar1;
  uStack_38 = extraout_x8;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv(lVar1);
  lVar3 = *(long *)(unaff_x20 + 0x158);
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x168);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x160);
    unaff_x19[1] = *(undefined8 *)(unaff_x20 + 0x168);
    *unaff_x19 = uVar4;
    if (lVar2 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10 != 0);
    }
  }
  else {
    func_0x000107282d64(auStack_58,unaff_x20 + 0x140);
  }
  func_0x000107c283c4(&lStack_68);
  if (lVar3 != 0) {
    func_0x000104c003e8(auStack_58);
    uStack_60 = 1;
    lStack_68 = lVar1;
    __ZNSt3__119__shared_mutex_base4lockEv(lVar1);
    func_0x000107c283cc(unaff_x20 + 0x140,0);
    lVar2 = *(long *)(unaff_x20 + 0x168);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x160);
    unaff_x19[1] = *(undefined8 *)(unaff_x20 + 0x168);
    *unaff_x19 = uVar4;
    if (lVar2 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000104c305a0(&lStack_68);
  }
  func_0x000107c27938();
  func_0x000107c351d4(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27938(auStack_58);
    func_0x00010b23acc0();
    lStack_a0 = lVar3;
    lStack_98 = lVar1;
    func_0x00010b23acc8();
    func_0x000107c279a0(auStack_c0);
    func_0x000107c279a0(auStack_e0,param_2 + 0xb8);
    func_0x000107c279a0(auStack_100,param_2 + 0xd8);
    func_0x0001052b933c();
    func_0x00010b23b16c();
    func_0x000107c279a4(auStack_e0);
    func_0x00010b23b4cc();
    return;
  }
  return;
}



/* Entry: 10b23193c; end: 10b2319c7;  */

void FUN_10b23193c(void)

{
  long unaff_x21;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  func_0x00010b23acc8();
  func_0x000107c279a0(auStack_50);
  func_0x000107c279a0(auStack_70,unaff_x21 + 0x20);
  func_0x000107c279a0(auStack_90,unaff_x21 + 0x40);
  func_0x0001052b933c();
  func_0x00010b23b16c();
  func_0x000107c279a4(auStack_70);
  func_0x00010b23b4cc();
  return;
}



/* Entry: 10b2319c8; end: 10b231a1b;  */

void FUN_10b2319c8(void)

{
  undefined1 auStack_a0 [112];
  
  func_0x00010b23b3ac();
  FUN_10b235ccc();
  func_0x00010b23b098();
  func_0x00010b23ae78();
  func_0x00010b23b0f0();
  func_0x000107c278e0(auStack_a0);
  func_0x00010b23b238();
  func_0x00010b23b104();
  return;
}



/* Entry: 10b231a1c; end: 10b231a97;  */

void FUN_10b231a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,int param_7)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long *plVar6;
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  long alStack_70 [3];
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  
  func_0x00010b23ab80(param_1,param_2,param_1);
  uStack_28 = extraout_x8;
  func_0x00010b23b298();
  func_0x00010b23aff8(alStack_70,auStack_58);
  func_0x00010b23b290();
  plVar4 = alStack_70;
  lVar1 = 0x6b;
  FUN_10b23eda4();
  func_0x00010b23b280();
  func_0x000107c351d4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b23b280();
  func_0x00010b23acc0();
  uVar5 = *(ulong *)(*plVar4 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  lVar2 = *plVar4 + 0x50;
  func_0x000107c30248(lVar2,param_1,uVar5);
  *(undefined8 *)(*plVar4 + 0x68) = param_4;
  *(undefined8 *)(*plVar4 + 0xa0) = param_5;
  *(undefined4 *)(*plVar4 + 0x70) = param_6;
  if (param_7 != 0) {
    *(int *)(*plVar4 + 0x74) = param_7;
  }
  if ((*(char *)(lVar1 + 0x78) == '\x01') && (*(long *)(lVar1 + 0x18) != 0)) {
    uStack_d8 = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_c8 = 1;
    plVar6 = *(long **)(lVar1 + 0x18);
    lStack_d0 = lVar2;
    func_0x00010bcd54ac(auStack_f0,*plVar4);
    (**(code **)(*plVar6 + 0x10))(plVar6,0,auStack_f0);
    func_0x000107c27914(auStack_f0);
    puVar3 = &uStack_d8;
    func_0x000107c28148(puVar3);
    func_0x00010b23b4a0(0x35,puVar3);
  }
  return;
}



/* Entry: 10b231a98; end: 10b231b9b;  */

void FUN_10b231a98(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,int param_7)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uVar3 = *(ulong *)(*param_2 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  lVar1 = *param_2 + 0x50;
  func_0x000107c30248(lVar1,param_3,uVar3);
  *(undefined8 *)(*param_2 + 0x68) = param_4;
  *(undefined8 *)(*param_2 + 0xa0) = param_5;
  *(undefined4 *)(*param_2 + 0x70) = param_6;
  if (param_7 != 0) {
    *(int *)(*param_2 + 0x74) = param_7;
  }
  if ((*(char *)(param_1 + 0x78) == '\x01') && (*(long *)(param_1 + 0x18) != 0)) {
    uStack_58 = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_48 = 1;
    plVar4 = *(long **)(param_1 + 0x18);
    lStack_50 = lVar1;
    func_0x00010bcd54ac(auStack_70,*param_2);
    (**(code **)(*plVar4 + 0x10))(plVar4,0,auStack_70);
    func_0x000107c27914(auStack_70);
    puVar2 = &uStack_58;
    func_0x000107c28148(puVar2);
    func_0x00010b23b4a0(0x35,puVar2);
  }
  return;
}



/* Entry: 10b231b9c; end: 10b231be7;  */

undefined1  [16] FUN_10b231b9c(uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  
  bVar4 = (param_1 & 0x80000000) == 0;
  uVar1 = 0xff;
  if (bVar4) {
    uVar1 = 0;
  }
  uVar2 = 0xffffffffffffff00;
  if (bVar4) {
    uVar2 = (ulong)(param_1 + 0x4ae6) * 86400000;
  }
  bVar4 = param_1 != 0;
  uVar3 = 0;
  if (bVar4) {
    uVar3 = uVar1;
  }
  uVar1 = 0;
  if (bVar4) {
    uVar1 = uVar2;
  }
  auVar5._0_8_ = uVar1 | uVar3;
  auVar5[8] = bVar4;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 10b231be8; end: 10b231cdb;  */

void FUN_10b231be8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x9;
  long *unaff_x19;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [120];
  undefined1 auStack_b0 [16];
  undefined8 *puStack_a0;
  undefined8 uStack_38;
  
  func_0x00010b23ab54();
  uStack_38 = extraout_x8;
  func_0x00010b23b600(*param_2);
  (*extraout_x9)(auStack_b0);
  FUN_10b23193c(auStack_128,auStack_b0,param_3);
  func_0x0001052bb09c(auStack_b0);
  func_0x00010b23b0d8(auStack_b0);
  puVar1 = puStack_a0;
  puStack_a0[2] = 0;
  func_0x00010b23b328();
  *puVar1 = extraout_x8_00;
  puVar1[1] = 0;
  FUN_10b21f664(puVar1 + 3,auStack_128);
  puVar1 = puStack_a0;
  puStack_a0 = (undefined8 *)0x0;
  func_0x00010b198324(auStack_b0);
  *unaff_x19 = (long)(puVar1 + 3);
  unaff_x19[1] = (long)puVar1;
  uStack_138 = 0;
  uStack_130 = 0;
  FUN_10b198334(&uStack_138);
  func_0x0001052bb09c(auStack_128);
  func_0x000107c351d4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b23acb4();
  func_0x00010b198324(auStack_b0);
  func_0x0001052bb09c(auStack_128);
  func_0x00010b23acc0();
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110cca0e0;
  *(undefined1 *)(puVar1 + 10) = 0;
  func_0x00010b23acfc();
  return;
}



/* Entry: 10b231cdc; end: 10b231d7b;  */

void FUN_10b231cdc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110cca0e0;
  *(undefined1 *)(puVar1 + 10) = 0;
  func_0x00010b23acfc();
  return;
}



/* Entry: 10b231d7c; end: 10b231ddb;  */

void FUN_10b231d7c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x00010b23ab6c();
  func_0x000107c351fc();
  func_0x0001078a4f38();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_1109e6c08;
  puStack_30[1] = 0;
  *(undefined1 *)(puStack_30 + 3) = 0;
  func_0x000107c351d8();
  func_0x0001078a4fac();
  func_0x000107c351d4(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010b23ae30();
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b3f0e8;
  param_1[1] = 0;
  func_0x00010b23b318();
  return;
}



/* Entry: 10b231ddc; end: 10b231e0b;  */

void FUN_10b231ddc(undefined8 *param_1)

{
  func_0x00010b23ae30();
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b3f0e8;
  param_1[1] = 0;
  func_0x00010b23b318();
  return;
}



/* Entry: 10b231e0c; end: 10b231eab;  */

void FUN_10b231e0c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_80 [24];
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cca1d0;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  auStack_80[0] = 0;
  uStack_68 = 0;
  func_0x0001052b1dac(puVar1 + 3,param_2,&uStack_60,auStack_80);
  func_0x000107c279c4(auStack_80);
  func_0x000107c27a18(&uStack_60);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10b231eac; end: 10b232697;  */

undefined8 *
FUN_10b231eac(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 *param_5,
             long *param_6,long *param_7,undefined8 *param_8)

{
  undefined **ppuVar1;
  int iVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long lVar7;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_220;
  long lStack_218;
  undefined1 auStack_210 [24];
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [104];
  undefined1 auStack_160 [16];
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined **ppuStack_a0;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [40];
  undefined8 uStack_18;
  
  func_0x00010b23b3c4();
  func_0x00010b23ab80();
  uStack_18 = extraout_x8;
  FUN_10b122210(*param_8);
  FUN_10b122318(*in_stack_00000060);
  *(undefined1 *)*in_stack_00000068 = 0;
  *(undefined4 *)*in_stack_00000070 = 0;
  func_0x000104bffddc(*in_stack_00000078);
  lVar7 = *param_3;
  iVar2 = *(int *)(lVar7 + 0x2c);
  if (iVar2 == 4) {
    FUN_10b235c7c(&uStack_c0,*(undefined8 *)(lVar7 + 0x20));
    func_0x000107c27f70(&lStack_220,uStack_a8 & 0xfffffffffffffffc);
    func_0x000107c27c54(*in_stack_00000078,&lStack_220);
    func_0x00010b23b4cc();
    ppuVar1 = &PTR_PTR_113373148;
    if (ppuStack_a0 != (undefined **)0x0) {
      ppuVar1 = ppuStack_a0;
    }
    FUN_10b23cefc(&lStack_220,(ulong)ppuVar1[0xc] & 0xfffffffffffffffc,
                  uStack_a8 & 0xfffffffffffffffc);
    puVar5 = &uStack_c0;
    func_0x00010b235c88();
    uVar6 = puVar5[1];
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(puVar5 + 0xc,&lStack_220,uVar6);
    uVar3 = ppuStack_a0 == (undefined **)0x0;
    ppuVar1 = &PTR_PTR_113373148;
    if (!(bool)uVar3) {
      ppuVar1 = ppuStack_a0;
    }
    FUN_10b22f364(&uStack_110,ppuVar1);
    func_0x00010b23b308(&uStack_110);
    FUN_10b22dd70(&uStack_110);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_220);
    puVar5 = &uStack_c0;
    FUN_10b484900();
    goto LAB_10b2324c4;
  }
  uVar3 = iVar2 == 3;
  if (!(bool)uVar3) {
    uVar3 = iVar2 == 2;
    if ((bool)uVar3) {
      FUN_10b22f364(&uStack_c0,*(undefined8 *)(lVar7 + 0x20));
      func_0x00010b23b308(&uStack_c0);
    }
    else {
      *(undefined4 *)(*param_7 + 0x74) = 2;
      func_0x00010b23b5e4(99);
      func_0x000107c278b8(&uStack_110,&UNK_10f73aef7);
      func_0x00010b23af18();
      func_0x000107c278b8(&lStack_140);
      func_0x000107c278b8(&uStack_238,"unknown");
      uStack_b8 = uStack_b8 & 0xffffffffffff0000;
      uStack_a8 = 0;
      ppuStack_a0 = (undefined **)0x0;
      lStack_b0 = 0;
      func_0x000107c2ad68(&lStack_220,&uStack_110);
      func_0x00010b23b1a8();
      func_0x00010b23b260();
      func_0x00010b23b10c();
      func_0x000107c2ad68(&lStack_220,param_4);
      func_0x00010b23b1a8();
      func_0x00010b23b260();
      func_0x00010b23b10c();
      func_0x000107c2ad68(&lStack_220,&lStack_140);
      func_0x00010b23b1a8();
      func_0x00010b23b260();
      func_0x00010b23b10c();
      func_0x000107c2ad68(&lStack_220,&uStack_238);
      func_0x00010b23b1a8();
      func_0x00010b23b260();
      func_0x00010b23b10c();
      func_0x000107c2ad70(&uStack_c0);
      func_0x00010b23b288();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_140);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010b23b308(&uStack_c0);
    }
    puVar5 = &uStack_c0;
    FUN_10b22dd70();
    goto LAB_10b2324c4;
  }
  *(undefined1 *)*in_stack_00000068 = 1;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0x3f800000;
  if (param_6 == (long *)0x0) {
LAB_10b232228:
    puVar5 = (undefined8 *)0x50;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_110cca400;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puStack_150 = puVar5 + 3;
    *puStack_150 = &PTR_FUN_110ceb970;
    *(undefined4 *)(puVar5 + 9) = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    uVar9 = *(undefined8 *)(param_2 + 0x48);
    uStack_48 = *param_5;
    puStack_148 = puVar5;
    (**(code **)(param_5[1] + 0x10))(auStack_40,param_5 + 1);
    FUN_10b22ac1c(auStack_1c8,in_stack_00000088);
    FUN_10b228f30(auStack_160,uVar9,param_3,param_7,&uStack_48,&puStack_150,in_stack_00000070,
                  &uStack_110,param_4,in_stack_00000080,auStack_1c8);
    lStack_218 = param_3[1];
    lStack_220 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10 != 0);
    }
    func_0x00010b23b164(auStack_210);
    puStack_1f0 = puStack_148;
    puStack_1f8 = puStack_150;
    puVar5 = puStack_150;
    puVar10 = puStack_148;
    if (puStack_148 != (undefined8 *)0x0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b23b388();
    puStack_1e8 = puVar5;
    puStack_1e0 = puVar10;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10_01 != 0);
    }
    uStack_1d0 = in_stack_00000060[1];
    uStack_1d8 = *in_stack_00000060;
    if (in_stack_00000060[1] != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10_02 != 0);
    }
    lStack_140 = 0;
    uStack_138 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    FUN_10b22baac(&uStack_c0,auStack_160,&uStack_238);
    FUN_10b22bad4(&lStack_140,&uStack_c0);
    FUN_10b22b928(&uStack_c0);
    FUN_10b22b928(&uStack_238);
    FUN_10b22b2c0(&lStack_50);
    FUN_10b22b2f8(&uStack_60,lStack_50);
    FUN_10b238700(&uStack_c0,&lStack_220);
    lStack_68 = lStack_50;
    lStack_50 = 0;
    lStack_d0 = 0;
    lStack_c8 = 0;
    lStack_e0 = lStack_140 + 0x48;
    lStack_d8 = CONCAT71(lStack_d8._1_7_,1);
    __ZNSt3__15mutex4lockEv();
    lVar7 = lStack_140;
    FUN_10b2365d4();
    if ((int)lVar7 == 0) {
      puVar5 = (undefined8 *)0x68;
      __Znwm();
      *puVar5 = &PTR_SUB_110cc9e68;
      FUN_10b238700(puVar5 + 1,&uStack_c0);
      lVar7 = lStack_68;
      lStack_68 = 0;
      puVar5[0xc] = lVar7;
      lVar7 = *(long *)(lStack_140 + 0x90);
      *(undefined8 **)(lStack_140 + 0x90) = puVar5;
      if (lVar7 != 0) {
        func_0x00010b23abe0();
      }
    }
    else {
      FUN_10b22bad4(&lStack_d0,&lStack_140);
    }
    func_0x000107c2798c(&lStack_e0);
    if (lStack_d0 != 0) {
      lStack_e0 = lStack_d0;
      lStack_d8 = lStack_c8;
      if (lStack_c8 != 0) {
        do {
          func_0x000107c351e4();
        } while (extraout_w10_03 != 0);
      }
      FUN_10b238794(&uStack_c0);
      FUN_10b22b928(&lStack_e0);
    }
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b23b1f0();
    FUN_10b238b10(&uStack_c0);
    FUN_10b22b928(&uStack_60);
    lVar7 = lStack_50;
    lStack_50 = 0;
    if (lVar7 != 0) {
      func_0x00010b23abe0();
    }
    FUN_10b22b928(&lStack_140);
    func_0x00010b235c3c(&lStack_220);
    FUN_10b22b928(auStack_160);
    func_0x00010b121ac0(auStack_1c8);
    func_0x00010b23b2d8();
    FUN_10b22e658(&puStack_150);
  }
  else {
    FUN_10b22f3dc(&uStack_c0,param_3,param_2 + 0x28);
    uVar6 = uStack_a8;
    if (uStack_a8 == 0) {
      func_0x00010b23b5e4(0x67);
      *(undefined4 *)(*param_7 + 0x74) = 4;
      lStack_220 = 0;
      lStack_218 = 0;
      func_0x00010b23b308(&lStack_220);
      func_0x00010b23afc8();
    }
    else {
      uStack_138 = 0;
      lStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_120 = 0x3f800000;
      func_0x00010730c744(&lStack_140,uStack_a8);
      plVar8 = &lStack_b0;
      while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
        func_0x000107c28274(&lStack_140,*(ulong *)(plVar8[3] + 0x60) & 0xfffffffffffffffc);
      }
      (**(code **)(*param_6 + 0x10))(&lStack_220,param_6,&lStack_140);
      func_0x000107c2826c(&lStack_140);
      for (plVar8 = (long *)lStack_b0; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        plVar4 = &lStack_220;
        func_0x00010596ff94(plVar4,*(ulong *)(plVar8[3] + 0x60) & 0xfffffffffffffffc);
        if (plVar4 != (long *)0x0) {
          FUN_10b22e384(&uStack_110,plVar8 + 2);
        }
      }
      func_0x000107c2826c(&lStack_220);
    }
    func_0x00010b22dd94(&uStack_c0);
    if (uVar6 != 0) goto LAB_10b232228;
  }
  puVar5 = &uStack_110;
  func_0x00010b22dd94();
LAB_10b2324c4:
  func_0x000107c351d4(uStack_18);
  if ((bool)uVar3) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010b23afc8();
  func_0x00010b22dd94(&uStack_c0);
  puVar5 = &uStack_110;
  func_0x00010b22dd94();
  func_0x00010b23acc0();
  FUN_10b23a65c(puVar5 + 0x1c);
  func_0x00010b23a608(puVar5 + 0x1a);
  func_0x0001078a52b0(puVar5 + 0x18);
  func_0x00010b23a5e4(puVar5 + 0x16);
  FUN_10b23a590(puVar5 + 0x14);
  FUN_10b23a53c(puVar5 + 0x12);
  func_0x00010b239d68(puVar5 + 0xf);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5 + 8);
  FUN_10b22e7d4(puVar5 + 6);
  func_0x0001052ac684(puVar5 + 3);
  if (puVar5[1] != 0) {
    func_0x000107c278a0();
  }
  return puVar5;
}



/* Entry: 10b232698; end: 10b232707;  */

long FUN_10b232698(long param_1)

{
  FUN_10b23a65c(param_1 + 0xe0);
  func_0x00010b23a608(param_1 + 0xd0);
  func_0x0001078a52b0(param_1 + 0xc0);
  func_0x00010b23a5e4(param_1 + 0xb0);
  FUN_10b23a590(param_1 + 0xa0);
  FUN_10b23a53c(param_1 + 0x90);
  func_0x00010b239d68(param_1 + 0x78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x40);
  FUN_10b22e7d4(param_1 + 0x30);
  func_0x0001052ac684(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b232708; end: 10b2327b7;  */

void FUN_10b232708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_b8 [104];
  undefined1 auStack_50 [16];
  
  FUN_10b22ac1c(auStack_b8,param_7);
  FUN_10b2307c0(auStack_50,param_2,param_3,param_4,param_5,param_6,auStack_b8);
  FUN_10b2327b8(param_1,auStack_50);
  FUN_10b236de8(auStack_50);
  func_0x00010b121ac0(auStack_b8);
  return;
}



/* Entry: 10b2327b8; end: 10b232887;  */

void FUN_10b2327b8(void)

{
  code *pcVar1;
  ulong uVar2;
  int extraout_w10;
  undefined1 auStack_40 [16];
  ulong uStack_30;
  long lStack_28;
  
  func_0x00010b23b378();
  FUN_10b236ef8(auStack_40);
  FUN_10b236f2c(&uStack_30,auStack_40);
  FUN_10b236de8(auStack_40);
  func_0x00010b23b024();
  func_0x00010b23b358(uStack_30 + 0x50);
  __ZNSt3__15mutex4lockEv();
  if (lStack_28 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  while (uVar2 = uStack_30, FUN_10b2370a8(), (uVar2 & 1) == 0) {
    func_0x00010b23b518();
  }
  func_0x00010b23b4f8();
  if (*(long *)(uStack_30 + 0x90) != 0) {
    func_0x00010b23b540();
    func_0x00010b23b548();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b23285c);
    (*pcVar1)();
  }
  func_0x00010b23aea0();
  FUN_10b236de8(&uStack_30);
  return;
}



/* Entry: 10b232888; end: 10b2330eb;  */

void FUN_10b232888(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long lVar8;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_690;
  long lStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined4 uStack_670;
  undefined1 auStack_660 [104];
  int *apiStack_5f8 [2];
  long lStack_5e8;
  long lStack_5e0;
  undefined8 uStack_5d8;
  undefined8 *apuStack_5d0 [2];
  undefined8 *apuStack_5c0 [2];
  undefined4 *puStack_5b0;
  undefined8 uStack_5a8;
  undefined4 *puStack_5a0;
  undefined8 uStack_598;
  undefined8 auStack_590 [2];
  long lStack_580;
  undefined8 uStack_578;
  undefined1 auStack_570 [16];
  undefined1 auStack_560 [16];
  undefined4 *puStack_550;
  undefined8 uStack_548;
  undefined8 auStack_540 [2];
  undefined8 auStack_530 [2];
  undefined8 auStack_520 [2];
  undefined1 auStack_510 [16];
  undefined1 auStack_500 [24];
  undefined1 uStack_4e8;
  undefined1 auStack_4e0 [24];
  undefined1 uStack_4c8;
  undefined1 auStack_4c0 [64];
  undefined1 uStack_480;
  undefined1 auStack_478 [232];
  undefined1 uStack_390;
  undefined1 auStack_388 [24];
  undefined1 uStack_370;
  undefined1 auStack_368 [56];
  undefined1 uStack_330;
  undefined1 auStack_328 [24];
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 auStack_300 [15];
  undefined8 uStack_288;
  long lStack_280;
  undefined1 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined1 auStack_28 [16];
  undefined8 *puStack_18;
  undefined8 uStack_10;
  
  func_0x00010b23b3c4();
  lVar5 = param_1;
  func_0x000107c351dc();
  uStack_288 = 0;
  uStack_10 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_278 = 1;
  lStack_280 = lVar5;
  func_0x00010bd3f3bc();
  FUN_10b23193c(auStack_300,param_4);
  puVar6 = (undefined8 *)0x30;
  __Znwm();
  puVar7 = puVar6;
  func_0x00010b23b62c();
  *puVar7 = extraout_x8_00;
  puVar7[1] = 0;
  puVar7 = puVar7 + 3;
  func_0x000107c27994(puVar7,param_2);
  puStack_310 = puVar7;
  puStack_308 = puVar6;
  func_0x00010b23af18();
  func_0x000107c278b8(auStack_328);
  auStack_368[0] = 0;
  uStack_330 = 0;
  auStack_388[0] = 0;
  uStack_370 = 0;
  auStack_478[0] = 0;
  uStack_390 = 0;
  auStack_4c0[0] = 0;
  uStack_480 = 0;
  auStack_4e0[0] = 0;
  uStack_4c8 = 0;
  auStack_500[0] = 0;
  uStack_4e8 = 0;
  func_0x00010b23abf8(&uStack_250,auStack_328,auStack_368,auStack_388);
  FUN_10b1220e4(param_6,&uStack_250);
  func_0x0001052b5d04(&uStack_250);
  func_0x000107c279a4(auStack_500);
  func_0x0001052b4f4c(auStack_4e0);
  func_0x0001052b4f6c(auStack_4c0);
  func_0x0001052b4218(auStack_478);
  func_0x0001052b4fb8(auStack_388);
  func_0x0001052b41f8(auStack_368);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_328);
  FUN_10b2317e0(auStack_510);
  FUN_10b231cdc(auStack_520);
  func_0x00010b231d14(auStack_530);
  func_0x0001075215b8(auStack_540);
  FUN_10b2330ec(&puStack_550);
  FUN_10b231d7c(auStack_560);
  FUN_10b231ddc(auStack_570);
  func_0x00010b233118(&lStack_580);
  func_0x00010b231d48(auStack_590);
  func_0x00010b233150(&puStack_5a0);
  func_0x00010b233150(&puStack_5b0);
  func_0x00010b23317c(apuStack_5c0);
  func_0x00010b2331b0(apuStack_5d0);
  lStack_5e8 = 0;
  lStack_5e0 = 0;
  uStack_5d8 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_240 = 0;
  func_0x00010b23b5c4(apiStack_5f8);
  func_0x000107c27a18(&uStack_250);
  FUN_10b22ac1c(auStack_660,param_7);
  FUN_10b2331e0(&uStack_690,param_1,&puStack_310,param_3,param_5,auStack_510,auStack_520,auStack_530
                ,auStack_540,puStack_550,uStack_548,auStack_560,auStack_570,lStack_580,uStack_578,
                auStack_590,puStack_5a0,uStack_598,puStack_5b0,uStack_5a8,apuStack_5c0,apuStack_5d0,
                apiStack_5f8,auStack_660);
  FUN_10b2337c0(&uStack_250,&uStack_690);
  func_0x000107c2797c(&lStack_5e8,&uStack_250);
  func_0x000107c278a8(&uStack_250);
  func_0x00010b23714c(&uStack_690);
  func_0x00010b121ac0(auStack_660);
  if (0 < *apiStack_5f8[0]) {
    FUN_10b233890(param_6 + 400);
  }
  uVar4 = *(undefined1 *)(apuStack_5c0[0] + 1);
  *(undefined8 *)(param_6 + 0x218) = *apuStack_5c0[0];
  *(undefined1 *)(param_6 + 0x220) = uVar4;
  uVar4 = lStack_5e8 == lStack_5e0;
  if ((bool)uVar4) {
    FUN_10b2338cc(&uStack_690,puVar7,param_3,auStack_300,lStack_580,param_1 + 0x58);
    FUN_10b231698(&uStack_250,&uStack_690);
    func_0x000107c27b9c(param_6,&uStack_250);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_250);
    *(undefined1 *)(param_6 + 0x80) = 1;
    *(undefined4 *)(param_6 + 0x84) = *puStack_550;
    puVar7 = &uStack_288;
    func_0x00010563be04(puVar7);
    func_0x00010b23ad78(param_1,auStack_510,param_3,lVar5,puVar7);
    lStack_248 = lStack_688;
    uStack_250 = uStack_690;
    if (lStack_688 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10 != 0);
    }
    func_0x00010b23ae3c();
    func_0x0001052ac684(&uStack_250);
    func_0x0001052ac684(&uStack_690);
  }
  else {
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_230 = 0x3f800000;
    lStack_688 = 0;
    uStack_690 = 0;
    uStack_678 = 0;
    uStack_680 = 0;
    uStack_670 = 0x3f800000;
    uVar1 = *(undefined4 *)(lStack_580 + 0x94);
    func_0x00010b23adb0();
    FUN_10b23c1ec(&uStack_690,uVar1,&uStack_270);
    func_0x00010b23af8c();
    uVar1 = *(undefined4 *)(lStack_580 + 0x9c);
    func_0x00010b23adb0();
    FUN_10b23c284(&uStack_690,uVar1,&uStack_270);
    func_0x00010b23af8c();
    uVar1 = *puStack_5a0;
    uVar2 = *puStack_5b0;
    func_0x00010b23adb0();
    FUN_10b23c328(&uStack_690,uVar1,uVar2,&uStack_270);
    func_0x00010b23af8c();
    FUN_10b122194(param_6 + 0x18,auStack_520[0]);
    FUN_10b1222cc(param_6 + 0x58,auStack_530[0]);
    func_0x000107c27b9c(param_6,auStack_540[0]);
    func_0x00010b23afac(lStack_5e0 - lStack_5e8);
    *(undefined1 *)(param_6 + 0x88) = extraout_w8;
    func_0x000107c27c54(param_6 + 0x1f8,auStack_590[0]);
    *(long *)(param_6 + 0x90) = lVar5;
    *(undefined1 *)(param_6 + 0x98) = 1;
    FUN_10b233924(auStack_510,param_6 + 0xa0,param_6 + 0x1d8,*apuStack_5d0[0]);
    func_0x00010b23b184();
    func_0x00010b23b338(lStack_5e0);
    FUN_10b233e04();
    lVar3 = lStack_5e0;
    for (lVar8 = lStack_5e8; uVar4 = lVar8 == lVar3, !(bool)uVar4; lVar8 = lVar8 + 0x18) {
      func_0x000107c2795c(&uStack_6b0,&lStack_5e8);
      FUN_10b233e78(&uStack_6b0,lVar8);
      func_0x00010b23b0d8(auStack_28);
      puStack_18[1] = 0;
      puStack_18[2] = 0;
      *puStack_18 = &PTR_FUN_110cc2518;
      uStack_268 = uStack_6a8;
      uStack_270 = uStack_6b0;
      uStack_260 = uStack_6a0;
      uStack_6a8 = 0;
      uStack_6a0 = 0;
      uStack_6b0 = 0;
      func_0x00010b23b4a8(puStack_18 + 3,lVar8,&uStack_690,&uStack_250,param_3,0,auStack_300);
      func_0x000107c278a8(&uStack_270);
      puStack_6c8 = puStack_18;
      puStack_18 = (undefined8 *)0x0;
      puStack_6d0 = puStack_6c8 + 3;
      func_0x00010b198324(auStack_28);
      puStack_6b8 = puStack_6c8;
      puStack_6c0 = puStack_6d0;
      puStack_6d0 = (undefined8 *)0x0;
      puStack_6c8 = (undefined8 *)0x0;
      FUN_10b196388();
      func_0x0001052ac684(&puStack_6c0);
      FUN_10b198334(&puStack_6d0);
      func_0x000107c278a8(&uStack_6b0);
    }
    func_0x0001053a4504(&uStack_288);
    func_0x000107c28148(&uStack_288);
    func_0x00010b23b404();
    puVar7 = &uStack_288;
    func_0x00010563be04(puVar7);
    func_0x00010b23ad78(param_1,auStack_510,param_3,lVar5,puVar7);
    func_0x000107c278e0(&uStack_690);
    func_0x000107c278e0(&uStack_250);
  }
  FUN_10b23a65c(apiStack_5f8);
  func_0x000107c278a8(&lStack_5e8);
  FUN_10b23a824(apuStack_5d0);
  FUN_10b23a7d4(apuStack_5c0);
  FUN_10b23a784(&puStack_5b0);
  FUN_10b23a784(&puStack_5a0);
  FUN_10b23a5e4(auStack_590);
  FUN_10b23a734(&lStack_580);
  func_0x00010b23a608(auStack_570);
  func_0x0001078a52b0(auStack_560);
  FUN_10b23a6e0(&puStack_550);
  func_0x00010724c894(auStack_540);
  FUN_10b23a590(auStack_530);
  FUN_10b23a53c(auStack_520);
  FUN_10b22e7d4(auStack_510);
  FUN_10b23a690(&puStack_310);
  func_0x0001052bb09c();
  func_0x000107c351d4(uStack_10);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x0001052ac684(&uStack_250);
    func_0x0001052ac684(&uStack_690);
    FUN_10b23a65c(apiStack_5f8);
    func_0x000107c278a8(&lStack_5e8);
    FUN_10b23a824(apuStack_5d0);
    FUN_10b23a7d4(apuStack_5c0);
    FUN_10b23a784(&puStack_5b0);
    FUN_10b23a784(&puStack_5a0);
    FUN_10b23a5e4(auStack_590);
    FUN_10b23a734(&lStack_580);
    func_0x00010b23a608(auStack_570);
    func_0x0001078a52b0(auStack_560);
    FUN_10b23a6e0(&puStack_550);
    func_0x00010724c894(auStack_540);
    FUN_10b23a590(auStack_530);
    FUN_10b23a53c(auStack_520);
    FUN_10b22e7d4(auStack_510);
    FUN_10b23a690(&puStack_310);
    puVar7 = auStack_300;
    func_0x0001052bb09c();
    func_0x00010b23acec();
    func_0x00010b23ae30();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_FUN_110cca220;
    func_0x00010b23b318();
    return;
  }
  return;
}



/* Entry: 10b2330ec; end: 10b2331df;  */

void FUN_10b2330ec(undefined8 *param_1)

{
  func_0x00010b23ae30();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cca220;
  func_0x00010b23b318();
  return;
}



/* Entry: 10b2331e0; end: 10b2337bf;  */

void FUN_10b2331e0(undefined8 *param_1,undefined **param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,undefined8 *param_7,undefined8 *param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  undefined8 *puVar10;
  ulong uVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined **ppuVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w11;
  int extraout_w11_00;
  long lVar13;
  undefined8 *in_stack_00000060;
  undefined4 *in_stack_00000068;
  long in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000b8;
  long *in_stack_000000c0;
  undefined ***in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  undefined **ppuStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 *puStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined1 auStack_1f8 [104];
  undefined1 auStack_190 [16];
  long lStack_180;
  long lStack_178;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_a0;
  undefined ***pppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long alStack_58 [2];
  undefined1 auStack_48 [48];
  undefined8 uStack_18;
  
  func_0x00010b23b3c4();
  ppuVar12 = param_2;
  func_0x00010b23ab80();
  uVar8 = SUB81(ppuVar12,0);
  uStack_18 = extraout_x8;
  FUN_10b122210(*param_7);
  FUN_10b122318(*param_8);
  func_0x00010b23af18(*in_stack_00000060);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
  *(undefined4 *)*in_stack_00000080 = 0;
  *in_stack_00000068 = 0;
  *(undefined1 *)*in_stack_00000078 = 0;
  auStack_148[0] = 0;
  uStack_a0 = 0;
  if (*(char *)(in_stack_00000088 + 0xa8) != '\0') {
    FUN_10b4855b8(in_stack_00000088);
    *(undefined1 *)(in_stack_00000088 + 0xa8) = 0;
  }
  FUN_10b1b58a8(auStack_148);
  func_0x000104bffddc(*in_stack_00000098);
  if (*(char *)(*in_stack_000000c0 + 8) == '\x01') {
    *(undefined1 *)(*in_stack_000000c0 + 8) = 0;
  }
  uVar5 = *(char *)((long)*in_stack_000000c8 + 4) == '\x01';
  if ((bool)uVar5) {
    *(undefined1 *)((long)*in_stack_000000c8 + 4) = 0;
  }
  uVar6 = *param_3;
  FUN_10b23597c(&lStack_180);
  if (lStack_180 == 0) {
    func_0x000107c278b8(auStack_148,&UNK_10f73aed0);
    FUN_10b231a1c(auStack_148);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
    *in_stack_00000068 = 1;
    *(undefined4 *)(*param_6 + 0x74) = 1;
    ppuStack_2b8 = (undefined **)0x0;
    lStack_2b0 = 0;
    lStack_2a8 = 0;
    func_0x00010b2383e0(auStack_148);
    FUN_10b238638(auStack_148,&ppuStack_2b8);
    FUN_10b237f64(param_1,uStack_130,uStack_128);
    FUN_10b2384c8(auStack_148);
    func_0x000107c278a8(&ppuStack_2b8);
  }
  else {
    func_0x00010b23b3e8();
    puVar10 = (undefined8 *)*in_stack_000000c0;
    *puVar10 = uVar6;
    *(undefined1 *)(puVar10 + 1) = uVar8;
    if (*(int *)(lStack_180 + 0x2c) == 3) {
      uVar11 = (ulong)*(uint *)(*(long *)(lStack_180 + 0x20) + 0x54) | 0x100000000;
    }
    else {
      uVar11 = 0;
    }
    ppuVar12 = *in_stack_000000c8;
    *(int *)ppuVar12 = (int)uVar11;
    *(char *)((long)ppuVar12 + 4) = (char)(uVar11 >> 0x20);
    uVar5 = *(char *)(in_stack_000000d8 + 0x60) == '\x01';
    if ((bool)uVar5) {
      uVar6 = *(undefined8 *)(in_stack_000000d8 + 8);
      uVar9 = *(undefined8 *)(in_stack_000000d8 + 0x10);
    }
    else {
      uVar6 = 0;
      uVar9 = 0;
    }
    FUN_10b2359e4(auStack_48,lStack_180,uVar6,uVar9);
    FUN_10b22ac1c(auStack_1f8,in_stack_000000d8);
    FUN_10b231eac(auStack_190,param_2,&lStack_180,param_4,auStack_48,param_5,param_6,param_7,param_8
                  ,in_stack_00000078,in_stack_00000080,in_stack_00000098,in_stack_000000d0,
                  auStack_1f8);
    in_stack_000000c8 = &ppuStack_2b8;
    lStack_2a8 = lStack_178;
    lStack_2b0 = lStack_180;
    ppuStack_2b8 = param_2;
    if (lStack_178 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10 != 0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_2a0,param_4);
    uStack_280 = param_8[1];
    uStack_288 = *param_8;
    if (param_8[1] != 0) {
      plVar1 = (long *)(param_8[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_278 = in_stack_00000068;
    lStack_270 = in_stack_00000070;
    if (in_stack_00000070 != 0) {
      do {
        func_0x00010b23b058();
        in_stack_00000090 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    lStack_268 = in_stack_00000088;
    lStack_260 = in_stack_00000090;
    if (in_stack_00000090 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10_00 != 0);
    }
    lVar13 = param_6[1];
    lVar7 = *param_6;
    lStack_258 = lVar7;
    lStack_250 = lVar13;
    if (param_6[1] != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b23b388();
    lStack_248 = lVar7;
    lStack_240 = lVar13;
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10_02 != 0);
    }
    uStack_230 = in_stack_00000060[1];
    uStack_238 = *in_stack_00000060;
    if (in_stack_00000060[1] != 0) {
      do {
        func_0x00010b23b058();
        in_stack_000000a8 = extraout_x8_02;
      } while (extraout_w11_00 != 0);
    }
    uStack_220 = in_stack_00000098[1];
    uStack_228 = *in_stack_00000098;
    if (in_stack_00000098[1] != 0) {
      plVar1 = (long *)(in_stack_00000098[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_218 = in_stack_000000a0;
    if (in_stack_000000a8 != 0) {
      plVar1 = (long *)(in_stack_000000a8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_208 = in_stack_000000b0;
    lStack_200 = in_stack_000000b8;
    lStack_210 = in_stack_000000a8;
    if (in_stack_000000b8 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10_03 != 0);
    }
    alStack_58[0] = 0;
    alStack_58[1] = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    FUN_10b22baac(auStack_148,auStack_190,&uStack_68);
    FUN_10b22bad4(alStack_58,auStack_148);
    FUN_10b22b928(auStack_148);
    FUN_10b22b928(&uStack_68);
    func_0x00010b23b300();
    func_0x00010b23b618();
    func_0x00010b2383e0();
    ppuStack_2b8 = &PTR_FUN_110cc9d70;
    FUN_10b237f64(&uStack_80,uStack_2a0,uStack_298);
    FUN_10b237f9c(auStack_148,&ppuStack_2b8);
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_168 = alStack_58[0] + 0x48;
    lStack_160 = CONCAT71(lStack_160._1_7_,1);
    pppuStack_88 = in_stack_000000c8;
    __ZNSt3__15mutex4lockEv();
    lVar7 = alStack_58[0];
    FUN_10b2365d4();
    if ((int)lVar7 == 0) {
      in_stack_000000c8 = (undefined ***)0xd0;
      __Znwm();
      *in_stack_000000c8 = &PTR_FUN_110cc9e28;
      FUN_10b237f9c(in_stack_000000c8 + 1,auStack_148);
      pppuVar4 = pppuStack_88;
      pppuStack_88 = (undefined ***)0x0;
      in_stack_000000c8[0x19] = (undefined **)pppuVar4;
      lVar7 = *(long *)(alStack_58[0] + 0x90);
      *(undefined ****)(alStack_58[0] + 0x90) = in_stack_000000c8;
      if (lVar7 != 0) {
        func_0x00010b23abe0();
      }
    }
    else {
      FUN_10b22bad4(&lStack_158,alStack_58);
    }
    func_0x000107c2798c(&lStack_168);
    if (lStack_158 != 0) {
      lStack_168 = lStack_158;
      lStack_160 = lStack_150;
      if (lStack_150 != 0) {
        do {
          func_0x000107c351e4();
        } while (extraout_w10_04 != 0);
      }
      FUN_10b238110(auStack_148);
      FUN_10b22b928(&lStack_168);
    }
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    FUN_10b22b928(&lStack_158);
    func_0x00010b2383b0(auStack_148);
    func_0x00010b23714c(&uStack_80);
    FUN_10b22b928(alStack_58);
    FUN_10b235bc8(&ppuStack_2b8);
    func_0x00010b23b1f0();
    func_0x00010b121ac0(auStack_1f8);
    func_0x00010b23ac98(auStack_48);
  }
  FUN_10b152714(&lStack_180);
  func_0x000107c351d4(uStack_18);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x000107c2798c(&lStack_168);
    FUN_10b22b928(&lStack_158);
    func_0x00010b2383b0(auStack_148);
    func_0x00010b23714c(&uStack_80);
    FUN_10b22b928(alStack_58);
    FUN_10b235bc8(&ppuStack_2b8);
    do {
      func_0x00010b23b1f0();
      func_0x00010b121ac0(auStack_1f8);
      func_0x00010b23ac98(auStack_48);
      FUN_10b152714(&lStack_180);
      func_0x00010b23acc0();
      FUN_10b152714(in_stack_000000c8 + 1);
    } while( true );
  }
  return;
}



/* Entry: 10b2337c0; end: 10b23388f;  */

void FUN_10b2337c0(void)

{
  code *pcVar1;
  ulong uVar2;
  int extraout_w10;
  undefined1 auStack_40 [16];
  ulong uStack_30;
  long lStack_28;
  
  func_0x00010b23b378();
  FUN_10b2370e0(auStack_40);
  FUN_10b237114(&uStack_30,auStack_40);
  func_0x00010b23714c(auStack_40);
  func_0x00010b23b01c();
  func_0x00010b23b358(uStack_30 + 0x50);
  __ZNSt3__15mutex4lockEv();
  if (lStack_28 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  while (uVar2 = uStack_30, func_0x00010b237170(), (uVar2 & 1) == 0) {
    func_0x00010b23b518();
  }
  func_0x00010b23b4f0();
  if (*(long *)(uStack_30 + 0x90) != 0) {
    func_0x00010b23b540();
    func_0x00010b23b548();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b233864);
    (*pcVar1)();
  }
  func_0x00010b23aea0();
  func_0x00010b23714c(&uStack_30);
  return;
}



/* Entry: 10b233890; end: 10b2338cb;  */

long FUN_10b233890(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10b12e950();
  }
  else {
    FUN_10b1244f0();
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return param_1;
}



/* Entry: 10b2338cc; end: 10b233923;  */

void FUN_10b2338cc(void)

{
  undefined1 auStack_a0 [112];
  
  func_0x00010b23b3ac();
  FUN_10b2355d0();
  func_0x00010b23b098();
  func_0x00010b23ae78();
  func_0x00010b23b0f0();
  func_0x000107c278e0(auStack_a0);
  func_0x00010b23b238();
  func_0x00010b23b104();
  return;
}



/* Entry: 10b233924; end: 10b233e03;  */

void FUN_10b233924(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  ulong uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  char cStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  char cStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  char cStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  char cStack_188;
  uint uStack_180;
  undefined8 uStack_17c;
  int iStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulong uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  
  if ((*(byte *)(*param_1 + 0x10) & 1) == 0) {
    uStack_180 = uStack_180 & 0xffffff00;
    uStack_98 = 0;
    FUN_10b122388(param_2,&uStack_180);
    func_0x0001052b4218(&uStack_180);
    uStack_180 = uStack_180 & 0xffffff00;
    uStack_168 = uStack_168 & 0xffffffffffffff00;
    FUN_10b1224ec(param_3,&uStack_180);
    func_0x0001052b4f4c(&uStack_180);
    return;
  }
  lVar9 = *(long *)(*param_1 + 0x60);
  FUN_10b207b98(&uStack_180,*(long *)(lVar9 + 0x18),
                *(long *)(lVar9 + 0x18) + (long)*(int *)(lVar9 + 0x10) * 4);
  FUN_10b230100(param_3,&uStack_180);
  func_0x00010b23b310();
  uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
  cStack_188 = '\0';
  uVar7 = *(ulong *)(lVar9 + 0x98) & 0xfffffffffffffffc;
  cVar5 = *(char *)(uVar7 + 0x17);
  if (cVar5 < '\0') {
    if (*(long *)(uVar7 + 8) != 0) goto LAB_10b2339f4;
  }
  else if (cVar5 != '\0') {
LAB_10b2339f4:
    if (0 < (int)*(uint *)(lVar9 + 0x58)) {
      FUN_10b207b98(&uStack_180,*(long *)(lVar9 + 0x60),
                    *(long *)(lVar9 + 0x60) + (ulong)*(uint *)(lVar9 + 0x58) * 4);
      FUN_10b24a6f0(&uStack_1c0,*(ulong *)(lVar9 + 0x98) & 0xfffffffffffffffc,&uStack_180);
      func_0x000107c27b94(&uStack_1a0,&uStack_1c0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1c0);
      func_0x00010b23b310();
    }
  }
  uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
  cStack_1a8 = '\0';
  uVar7 = *(ulong *)(lVar9 + 0xb0) & 0xfffffffffffffffc;
  cVar5 = *(char *)(uVar7 + 0x17);
  if (cVar5 < '\0') {
    if (*(long *)(uVar7 + 8) != 0) goto LAB_10b233a64;
  }
  else if (cVar5 != '\0') {
LAB_10b233a64:
    func_0x000107c27b98(&uStack_1c0);
  }
  uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
  cStack_1c8 = '\0';
  uVar7 = *(ulong *)(lVar9 + 0xc0) & 0xfffffffffffffffc;
  cVar5 = *(char *)(uVar7 + 0x17);
  if (cVar5 < '\0') {
    if (*(long *)(uVar7 + 8) == 0) goto LAB_10b233a9c;
  }
  else if (cVar5 == '\0') goto LAB_10b233a9c;
  func_0x000107c27b98(&uStack_1e0);
LAB_10b233a9c:
  uVar1 = *(uint *)(lVar9 + 0xcc);
  uVar11 = *(undefined8 *)(lVar9 + 0xe4);
  iVar2 = *(int *)(lVar9 + 0xec);
  if (3 < iVar2 - 1U) {
    iVar2 = 0;
  }
  uVar12 = *(undefined4 *)(lVar9 + 0xf0);
  uVar3 = *(undefined4 *)(lVar9 + 0xd8);
  uVar10 = *(undefined8 *)(lVar9 + 0xd0);
  uVar13 = *(undefined4 *)(lVar9 + 0xf8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&uStack_1f8,*(ulong *)(lVar9 + 0x88) & 0xfffffffffffffffc);
  uVar4 = *(undefined4 *)(*param_1 + 0x94);
  uVar8 = 0;
  if ((param_4 & 0x100000000) != 0) {
    uVar8 = (undefined4)param_4;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&uStack_210,*(ulong *)(lVar9 + 0xa8) & 0xfffffffffffffffc);
  cVar6 = cStack_188;
  cVar5 = cStack_1a8;
  uStack_120 = *(undefined4 *)(lVar9 + 0xe0);
  uStack_230 = uStack_230 & 0xffffffffffffff00;
  uStack_218 = cStack_188 == '\x01';
  if ((bool)uStack_218) {
    uStack_228 = uStack_198;
    uStack_230 = uStack_1a0;
    uStack_220 = uStack_190;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a0 = 0;
  }
  uStack_250 = uStack_250 & 0xffffffffffffff00;
  uStack_238 = cStack_1a8 == '\x01';
  if ((bool)uStack_238) {
    uStack_248 = uStack_1b8;
    uStack_250 = uStack_1c0;
    uStack_240 = uStack_1b0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c0 = 0;
  }
  func_0x000107c27f70(&uStack_270,*(ulong *)(lVar9 + 0xb8) & 0xfffffffffffffffc);
  uStack_290 = uStack_290 & 0xffffffffffffff00;
  uStack_278 = cStack_1c8 == '\x01';
  if ((bool)uStack_278) {
    uStack_288 = uStack_1d8;
    uStack_290 = uStack_1e0;
    uStack_280 = uStack_1d0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e0 = 0;
  }
  uStack_150 = uStack_1f0;
  uStack_158 = uStack_1f8;
  uStack_148 = uStack_1e8;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_128 = uStack_200;
  uStack_130 = uStack_208;
  uStack_138 = uStack_210;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_118 = uStack_118 & 0xffffffffffffff00;
  uStack_100 = cVar6 != '\0';
  if ((bool)uStack_100) {
    uStack_110 = uStack_228;
    uStack_118 = uStack_230;
    uStack_108 = uStack_220;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_230 = 0;
  }
  uStack_f8 = uStack_f8 & 0xffffffffffffff00;
  uStack_e0 = cVar5 != '\0';
  if ((bool)uStack_e0) {
    uStack_f0 = uStack_248;
    uStack_f8 = uStack_250;
    uStack_e8 = uStack_240;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_250 = 0;
  }
  uStack_d8 = uStack_d8 & 0xffffffffffffff00;
  uStack_c0 = cStack_258 == '\x01';
  if ((bool)uStack_c0) {
    uStack_d0 = uStack_268;
    uStack_d8 = uStack_270;
    uStack_c8 = uStack_260;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_270 = 0;
  }
  uStack_b8 = uStack_b8 & 0xffffffffffffff00;
  uStack_a0 = cStack_1c8 != '\0';
  if ((bool)uStack_a0) {
    uStack_b0 = uStack_288;
    uStack_b8 = uStack_290;
    uStack_a8 = uStack_280;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_290 = 0;
  }
  uStack_180 = uVar1;
  uStack_17c = uVar11;
  iStack_174 = iVar2;
  uStack_170 = uVar12;
  uStack_16c = uVar3;
  uStack_168 = uVar10;
  uStack_160 = uVar13;
  uStack_140 = uVar4;
  uStack_13c = uVar8;
  func_0x000107c279a4(&uStack_290);
  func_0x000107c279a4(&uStack_270);
  func_0x000107c279a4(&uStack_250);
  func_0x000107c279a4(&uStack_230);
  func_0x00010b23b498();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1f8);
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_10b12e8d0(param_2,&uStack_180);
  }
  else {
    FUN_10b1243d4(param_2,&uStack_180);
    *(undefined1 *)(param_2 + 0xe8) = 1;
  }
  func_0x0001052b4238(&uStack_180);
  func_0x000107c279a4(&uStack_1e0);
  func_0x000107c279a4(&uStack_1c0);
  func_0x000107c279a4(&uStack_1a0);
  return;
}



/* Entry: 10b233e04; end: 10b233e77;  */

ulong * FUN_10b233e04(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong auStack_48 [5];
  
  if ((ulong)((long)(param_1[2] - *param_1) >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_10b195cec();
      func_0x00010b23af24();
      func_0x00010b196488();
      func_0x00010b23acc0();
      puVar2 = (ulong *)*param_1;
      puVar1 = (ulong *)param_1[1];
      func_0x000105275210(puVar2,puVar1,param_2);
      puVar3 = puVar1;
      puVar4 = puVar2;
      if (puVar1 != puVar2) {
        while (puVar4 = puVar4 + 3, puVar3 = puVar2, puVar4 != puVar1) {
          puVar3 = puVar4;
          func_0x000107c278d0(puVar4,param_2);
          if (((ulong)puVar3 & 1) == 0) {
            func_0x000107c27b9c(puVar2,puVar4);
            puVar2 = puVar2 + 3;
          }
        }
      }
      if (puVar3 != (ulong *)param_1[1]) {
        func_0x000107276f04((ulong *)param_1[1],param_1[1],puVar3);
        func_0x00010016436c(param_1);
      }
      return puVar3;
    }
    FUN_10b196450(auStack_48,param_2,(long)(param_1[1] - *param_1) >> 4);
    FUN_10b196430(param_1,auStack_48);
    param_1 = auStack_48;
    func_0x00010b196488(param_1);
  }
  return param_1;
}



/* Entry: 10b233e78; end: 10b233f07;  */

ulong FUN_10b233e78(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000105275210(uVar2,uVar1,param_2);
  uVar3 = uVar1;
  uVar4 = uVar2;
  if (uVar1 != uVar2) {
    while (uVar4 = uVar4 + 0x18, uVar3 = uVar2, uVar4 != uVar1) {
      uVar3 = uVar4;
      func_0x000107c278d0(uVar4,param_2);
      if ((uVar3 & 1) == 0) {
        func_0x000107c27b9c(uVar2,uVar4);
        uVar2 = uVar2 + 0x18;
      }
    }
  }
  if (uVar3 != param_1[1]) {
    func_0x000107276f04(param_1[1],param_1[1],uVar3);
    func_0x00010016436c(param_1);
  }
  return uVar3;
}



/* Entry: 10b233f08; end: 10b234087;  */

/* WARNING: Removing unreachable block (ram,0x00010b234064) */

void FUN_10b233f08(undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5
                  )

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar8;
  long lVar9;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [280];
  undefined1 *puStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 uStack_e1;
  undefined1 auStack_e0 [24];
  char *pcStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [48];
  undefined8 uStack_48;
  
  iVar6 = param_4;
  func_0x00010b23ab80();
  pcStack_c8 = "true";
  if (iVar6 == 0) {
    pcStack_c8 = "false";
  }
  uStack_48 = extraout_x8;
  FUN_10b227e90(auStack_a8,&PTR_DAT_110cc9a58,&pcStack_c8);
  if (param_4 == 0) {
    func_0x000107c278b8(auStack_e0,&DAT_10f42074b);
  }
  else {
    __ZNSt3__19to_stringEi(auStack_e0,param_5);
  }
  func_0x00010b227c98(auStack_78,&PTR_DAT_110cc9a60,auStack_e0);
  puVar7 = &uStack_e1;
  func_0x000108992a94(auStack_c0,auStack_a8,2,puVar7);
  lVar9 = 0x30;
  do {
    func_0x000107c278c0(auStack_a8 + lVar9);
    lVar9 = lVar9 + -0x30;
    uVar2 = lVar9 == -0x30;
  } while (!(bool)uVar2);
  func_0x00010b23b278();
  FUN_10b23eda4(param_1,auStack_c0);
  puVar5 = auStack_c0;
  FUN_10b23eef4(param_2,param_3,puVar5);
  puVar3 = auStack_c0;
  func_0x000108992e04();
  func_0x000107c351d4(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar4 = auStack_78;
    lVar8 = -0x60;
    do {
      func_0x000107c278c0(puVar4);
      puVar4 = puVar4 + -0x30;
      lVar8 = lVar8 + 0x30;
    } while (lVar8 != 0);
    func_0x00010b23b278();
    func_0x00010b23acc0();
    uStack_110 = 1;
    pcStack_f8 = FUN_10b234088;
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
    extraout_x8_00[2] = 0;
    lVar8 = param_3;
    puStack_130 = auStack_a8;
    lStack_128 = lVar9;
    puStack_120 = auStack_a8;
    uStack_118 = param_1;
    puStack_108 = puVar3;
    puStack_100 = &stack0xfffffffffffffff0;
    func_0x000107c28320(param_3,&UNK_10f73ae45,0);
    if (lVar8 == -1) {
      FUN_10b23cf74(auStack_248,param_3,puVar5,puVar7);
    }
    else {
      FUN_10b23ce40(auStack_248,param_3,puVar5);
    }
    func_0x00010b23b3dc();
    func_0x000107c27b9c();
    func_0x00010b23b174();
    uVar1 = extraout_x8_00[1];
    if (-1 < (char)*(byte *)((long)extraout_x8_00 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)extraout_x8_00 + 0x17);
    }
    if (uVar1 == 0) {
      func_0x000105680760(auStack_248);
      func_0x00010b23b474();
      func_0x00010b23b448();
      func_0x00010549023c();
      func_0x000107c28084();
      func_0x00010549023c();
      func_0x000107c28084();
      func_0x00010b23b434(auStack_260);
      func_0x00010b23ad44();
      func_0x000105673d7c(auStack_248);
    }
    return;
  }
  return;
}



/* Entry: 10b234088; end: 10b2341bf;  */

void FUN_10b234088(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [280];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = param_3;
  func_0x000107c28320(param_3,&UNK_10f73ae45,0);
  if (lVar2 == -1) {
    FUN_10b23cf74(auStack_158,param_3,param_4,param_5);
  }
  else {
    FUN_10b23ce40(auStack_158,param_3,param_4);
  }
  func_0x00010b23b3dc();
  func_0x000107c27b9c();
  func_0x00010b23b174();
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x000105680760(auStack_158);
    func_0x00010b23b474();
    func_0x00010b23b448();
    func_0x00010549023c();
    func_0x000107c28084();
    func_0x00010549023c();
    func_0x000107c28084();
    func_0x00010b23b434(auStack_170);
    func_0x00010b23ad44();
    func_0x000105673d7c(auStack_158);
  }
  return;
}



/* Entry: 10b2341c0; end: 10b2346bf;  */

/* WARNING: Removing unreachable block (ram,0x00010b234600) */

void FUN_10b2341c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 in_x7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long *plVar7;
  undefined1 auStack_3c8 [96];
  undefined1 uStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long lStack_348;
  undefined1 uStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined1 auStack_2e0 [24];
  undefined1 uStack_2c8;
  undefined1 auStack_2c0 [24];
  undefined1 uStack_2a8;
  undefined1 auStack_2a0 [24];
  undefined1 uStack_288;
  undefined1 auStack_280 [24];
  undefined1 uStack_268;
  undefined1 uStack_260;
  undefined1 uStack_248;
  undefined1 uStack_240;
  undefined1 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong auStack_1b8 [5];
  long lStack_190;
  undefined1 uStack_d0;
  ulong auStack_c8 [3];
  undefined1 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined1 uStack_10;
  undefined8 uStack_8;
  
  func_0x00010b23b3c4();
  func_0x000107c351dc();
  auStack_2a0[0] = 0;
  uStack_288 = 0;
  auStack_2c0[0] = 0;
  uStack_2a8 = 0;
  auStack_2e0[0] = 0;
  uStack_2c8 = 0;
  auStack_280[0] = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_220 = 0;
  uStack_8 = extraout_x8;
  func_0x000107c279a4(auStack_2e0);
  func_0x000107c279a4(auStack_2c0);
  func_0x000107c279a4(auStack_2a0);
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2f0 = 0x3f800000;
  func_0x00010b23b0d8(auStack_50);
  puVar1 = puStack_40;
  puStack_40[2] = 0;
  func_0x00010b23b328();
  *puVar1 = extraout_x8_00;
  puVar1[1] = 0;
  auStack_1b8[1] = 0;
  auStack_1b8[0] = 0;
  auStack_1b8[2] = 0;
  func_0x00010b23b4a8(puVar1 + 3,param_2,&uStack_310,&uStack_310,param_3,0,auStack_280,in_x7,
                      auStack_1b8);
  func_0x000107c278a8(auStack_1b8);
  puStack_318 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  puStack_320 = puStack_318 + 3;
  func_0x00010b198324(auStack_50);
  puStack_350 = (undefined8 *)((ulong)puStack_350 & 0xffffffffffffff00);
  uStack_338 = 0;
  puVar4 = (undefined8 *)0x240;
  __Znwm();
  plVar7 = puVar4 + 1;
  *plVar7 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110cca3b0;
  func_0x00010b23af18();
  func_0x000107c278b8(auStack_68);
  puVar1 = puVar4 + 3;
  puStack_a8 = (undefined8 *)((ulong)puStack_a8 & 0xffffffffffffff00);
  uStack_70 = 0;
  auStack_c8[0] = auStack_c8[0] & 0xffffffffffffff00;
  uStack_b0 = 0;
  auStack_1b8[0] = auStack_1b8[0] & 0xffffffffffffff00;
  uStack_d0 = 0;
  auStack_50[0] = 0;
  uStack_10 = 0;
  func_0x0001052b4f0c(&uStack_1e0,&puStack_350);
  puStack_200 = (undefined8 *)((ulong)puStack_200 & 0xffffffffffffff00);
  uStack_1e8 = 0;
  func_0x00010b23abf8(puVar1,auStack_68,&puStack_a8,auStack_c8);
  func_0x000107c279a4(&puStack_200);
  func_0x0001052b4f4c(&uStack_1e0);
  func_0x0001052b4f6c(auStack_50);
  func_0x0001052b4218(auStack_1b8);
  func_0x0001052b4fb8(auStack_c8);
  func_0x0001052b41f8(&puStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  puStack_330 = puVar1;
  puStack_328 = puVar4;
  func_0x0001052b4f4c(&puStack_350);
  puStack_358 = puStack_318;
  puStack_360 = puStack_320;
  if (puStack_318 != (undefined8 *)0x0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  auStack_3c8[0] = 0;
  uStack_368 = 0;
  FUN_10b2307c0(auStack_68,param_1,&puStack_360,0,1,puVar1,auStack_3c8);
  func_0x00010b23b164(auStack_50);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  auStack_c8[1] = 0;
  auStack_c8[0] = 0;
  puStack_38 = puVar1;
  puStack_30 = puVar4;
  FUN_10b236ef8(auStack_1b8,auStack_68,auStack_c8);
  FUN_10b236f2c(&puStack_a8,auStack_1b8);
  FUN_10b236de8(auStack_1b8);
  FUN_10b236de8(auStack_c8);
  FUN_10b2371a8(&lStack_208);
  FUN_10b237290(&uStack_1e0,*(undefined8 *)(lStack_208 + 0x18),*(undefined8 *)(lStack_208 + 0x20));
  FUN_10b2372c8(auStack_1b8,auStack_50);
  puVar4 = puStack_a8;
  lStack_190 = lStack_208;
  lStack_1f8 = 0;
  puStack_200 = (undefined8 *)0x0;
  puStack_350 = puStack_a8 + 10;
  lStack_348 = CONCAT71(lStack_348._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  puVar5 = puVar4;
  FUN_10b2370a8();
  if ((int)puVar5 == 0) {
    func_0x00010b23b1d0();
    *puVar5 = &PTR_FUN_110cc9cd0;
    FUN_10b2372c8(puVar5 + 1,auStack_1b8);
    lVar6 = lStack_190;
    lStack_190 = 0;
    puVar5[6] = lVar6;
    lVar6 = puVar4[0x13];
    puVar4[0x13] = puVar5;
    if (lVar6 != 0) {
      func_0x00010b23abe0();
    }
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_10b236f2c(&puStack_200,&puStack_a8);
    puVar4 = puStack_200;
  }
  func_0x000107c2798c(&puStack_350);
  if (puVar4 != (undefined8 *)0x0) {
    lStack_348 = lStack_1f8;
    puStack_350 = puVar4;
    if (lStack_1f8 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10_00 != 0);
    }
    FUN_10b2372f0(auStack_1b8,puVar4);
    FUN_10b236de8(&puStack_350);
  }
  unaff_x19[1] = uStack_1d8;
  *unaff_x19 = uStack_1e0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  FUN_10b236de8(&puStack_200);
  FUN_10b237470(auStack_1b8);
  func_0x0001052b5e30(&uStack_1e0);
  FUN_10b236de8(&puStack_a8);
  FUN_10b2346c0(auStack_50);
  FUN_10b236de8(auStack_68);
  func_0x00010b121ac0(auStack_3c8);
  func_0x0001052ac684(&puStack_360);
  FUN_10b23a878(&puStack_330);
  FUN_10b198334(&puStack_320);
  func_0x000107c278e0(&uStack_310);
  func_0x0001052bb09c(auStack_280);
  func_0x000107c351d4(uStack_8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b23b5d8();
  func_0x000107c2798c(&puStack_350);
  FUN_10b236de8(&puStack_200);
  FUN_10b237470(auStack_1b8);
  func_0x0001052b5e30(&uStack_1e0);
  FUN_10b236de8(&puStack_a8);
  FUN_10b2346c0(auStack_50);
  FUN_10b236de8(auStack_68);
  func_0x00010b121ac0(auStack_3c8);
  func_0x0001052ac684(&puStack_360);
  FUN_10b23a878(&puStack_330);
  FUN_10b198334(&puStack_320);
  do {
    func_0x000107c278e0(&uStack_310);
    func_0x0001052bb09c(auStack_280);
    func_0x00010b23acc0();
    func_0x000107c278a8(auStack_1b8);
    __ZNSt3__119__shared_weak_countD2Ev(puVar1);
    func_0x00010b198324(auStack_50);
  } while( true );
}



/* Entry: 10b2346c0; end: 10b2346e7;  */

void FUN_10b2346c0(long param_1)

{
  FUN_10b23a878(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b2346e8; end: 10b234723;  */

void FUN_10b2346e8(void)

{
  func_0x00010b23b4dc();
  func_0x00010b23b534();
  func_0x00010b23ae5c();
  return;
}



/* Entry: 10b234724; end: 10b234797;  */

void FUN_10b234724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c27994(auStack_48);
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_10b234798(param_1,param_2,auStack_48,param_4,&uStack_60);
  func_0x0001052a92cc(&uStack_60);
  func_0x000107c27914(auStack_48);
  return;
}



/* Entry: 10b234798; end: 10b234ee3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b234798(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  long *param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  undefined8 uStack_488;
  long lStack_480;
  undefined8 uStack_470;
  long lStack_468;
  undefined1 auStack_460 [24];
  undefined8 *puStack_448;
  undefined8 uStack_440;
  undefined8 *puStack_438;
  undefined1 uStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  long lStack_3e0;
  long lStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined1 auStack_378 [96];
  undefined1 uStack_318;
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [4];
  undefined1 uStack_2fc;
  long lStack_2f8;
  long lStack_2f0;
  undefined1 uStack_2e8;
  undefined1 uStack_2e0;
  undefined1 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_38 [7];
  
  func_0x00010b23b3c4();
  func_0x00010b23ae64();
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  plVar8 = puVar4 + 1;
  *plVar8 = 0;
  puVar6 = puVar4;
  func_0x00010b23b62c();
  *puVar6 = extraout_x8;
  uVar10 = *param_3;
  puVar9 = puVar6 + 3;
  puVar6[4] = param_3[1];
  *puVar9 = uVar10;
  puVar6[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  puStack_1b8 = puVar9;
  puStack_1b0 = puVar6;
  FUN_10b2317e0(&uStack_1d0);
  FUN_10b231cdc(&uStack_1e0);
  func_0x00010b231d14(&uStack_1f0);
  func_0x0001075215b8(&uStack_200);
  FUN_10b2330ec(&uStack_210);
  FUN_10b231d7c(&uStack_220);
  FUN_10b231ddc(&uStack_230);
  func_0x00010b233118(&uStack_240);
  func_0x00010b231d48(&uStack_250);
  func_0x00010b233150(&uStack_260);
  func_0x00010b233150(&uStack_270);
  func_0x00010b23317c(&uStack_280);
  func_0x00010b2331b0(&uStack_290);
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_178 = 0;
  func_0x00010b23b5c4(&uStack_2a0);
  puVar6 = &uStack_188;
  func_0x000107c27a18();
  func_0x00010bd3f3bc();
  puVar5 = puVar6;
  __ZNSt3__16chrono12steady_clock3nowEv();
  auStack_300[0] = 0;
  uStack_2fc = 0;
  lStack_2f8 = *param_5;
  lStack_2f0 = param_5[1] - lStack_2f8 >> 2;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_2a8 = 0;
  FUN_10b22ac80(auStack_378,auStack_300);
  uStack_318 = 1;
  FUN_10b2331e0(auStack_310,unaff_x20,&puStack_1b8,param_4,0,&uStack_1d0,&uStack_1e0,&uStack_1f0,
                &uStack_200,uStack_210,lStack_208,&uStack_220,&uStack_230,uStack_240,lStack_238,
                &uStack_250,uStack_260,lStack_258,uStack_270,lStack_268,&uStack_280,&uStack_290,
                &uStack_2a0,auStack_378,uStack_260,uStack_270);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_498 = uStack_240;
  lStack_490 = lStack_238;
  puStack_4a8 = puVar9;
  puStack_4a0 = puVar4;
  if (lStack_238 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  lStack_480 = lStack_1f8;
  uStack_488 = uStack_200;
  if (lStack_1f8 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_00 != 0);
  }
  lStack_468 = lStack_1c8;
  uStack_470 = uStack_1d0;
  if (lStack_1c8 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_01 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_460,param_4);
  uStack_440 = 0;
  uStack_430 = 1;
  lStack_420 = lStack_1e8;
  uStack_428 = uStack_1f0;
  puStack_448 = puVar6;
  puStack_438 = puVar5;
  if (lStack_1e8 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_02 != 0);
  }
  uStack_418 = uStack_210;
  lStack_410 = lStack_208;
  if (lStack_208 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_03 != 0);
  }
  lStack_400 = lStack_1d8;
  uStack_408 = uStack_1e0;
  if (lStack_1d8 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_04 != 0);
  }
  lStack_3f0 = lStack_248;
  uStack_3f8 = uStack_250;
  if (lStack_248 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_05 != 0);
  }
  lStack_3e0 = lStack_258;
  if (lStack_258 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_06 != 0);
  }
  lStack_3d0 = lStack_268;
  if (lStack_268 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_07 != 0);
  }
  lStack_3c0 = lStack_278;
  uStack_3c8 = uStack_280;
  if (lStack_278 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_08 != 0);
  }
  lStack_3b0 = lStack_288;
  uStack_3b8 = uStack_290;
  if (lStack_288 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_09 != 0);
  }
  lStack_3a0 = lStack_218;
  uStack_3a8 = uStack_220;
  if (lStack_218 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_10 != 0);
  }
  lStack_390 = lStack_228;
  uStack_398 = uStack_230;
  if (lStack_228 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_11 != 0);
  }
  lStack_380 = lStack_298;
  uStack_388 = uStack_2a0;
  if (lStack_298 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_12 != 0);
  }
  alStack_38[3] = 0;
  alStack_38[4] = 0;
  alStack_38[1] = 0;
  alStack_38[2] = 0;
  FUN_10b2370e0(&uStack_188,auStack_310,alStack_38 + 1);
  FUN_10b237114(alStack_38 + 3,&uStack_188);
  func_0x00010b23714c(&uStack_188);
  func_0x00010b23714c(alStack_38 + 1);
  FUN_10b2371a8(alStack_38);
  lVar7 = alStack_38[0];
  FUN_10b237290(&uStack_50,*(undefined8 *)(alStack_38[0] + 0x18),
                *(undefined8 *)(alStack_38[0] + 0x20));
  FUN_10b2377ec(&uStack_188,&puStack_4a8);
  lVar3 = alStack_38[3];
  alStack_38[0] = 0;
  lStack_58 = lVar7;
  lStack_190 = 0;
  lStack_198 = 0;
  lStack_1a8 = alStack_38[3] + 0x50;
  lStack_1a0 = CONCAT71(lStack_1a0._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  lVar7 = lVar3;
  func_0x00010b237170();
  if ((int)lVar7 == 0) {
    puVar6 = (undefined8 *)0x140;
    __Znwm();
    *puVar6 = &PTR_SUB_110cc9d20;
    FUN_10b2377ec(puVar6 + 1,&uStack_188);
    lVar7 = lStack_58;
    lStack_58 = 0;
    puVar6[0x27] = lVar7;
    lVar7 = *(long *)(lVar3 + 0x98);
    *(undefined8 **)(lVar3 + 0x98) = puVar6;
    if (lVar7 != 0) {
      func_0x00010b23abe0();
    }
    lVar7 = 0;
  }
  else {
    FUN_10b237114(&lStack_198,alStack_38 + 3);
    lVar7 = lStack_198;
  }
  func_0x000107c2798c(&lStack_1a8);
  if (lVar7 != 0) {
    lStack_1a0 = lStack_190;
    lStack_1a8 = lVar7;
    if (lStack_190 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10_13 != 0);
    }
    FUN_10b237914(&uStack_188,lVar7);
    func_0x00010b23714c(&lStack_1a8);
  }
  unaff_x19[1] = uStack_48;
  *unaff_x19 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010b23714c(&lStack_198);
  FUN_10b237e28(&uStack_188);
  func_0x0001052b5e30(&uStack_50);
  func_0x00010b23714c(alStack_38 + 3);
  FUN_10b234ee4(&puStack_4a8);
  func_0x00010b23714c(auStack_310);
  func_0x00010b121ac0(auStack_378);
  func_0x00010b23b4e4();
  FUN_10b23a65c(&uStack_2a0);
  FUN_10b23a824(&uStack_290);
  FUN_10b23a7d4(&uStack_280);
  FUN_10b23a784(&uStack_270);
  FUN_10b23a784(&uStack_260);
  FUN_10b23a5e4(&uStack_250);
  FUN_10b23a734(&uStack_240);
  func_0x00010b23a608(&uStack_230);
  func_0x0001078a52b0(&uStack_220);
  FUN_10b23a6e0(&uStack_210);
  func_0x00010724c894(&uStack_200);
  FUN_10b23a590(&uStack_1f0);
  FUN_10b23a53c(&uStack_1e0);
  FUN_10b22e7d4(&uStack_1d0);
  FUN_10b23a690(&puStack_1b8);
  return;
}



/* Entry: 10b234ee4; end: 10b234f7b;  */

undefined8 FUN_10b234ee4(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b23a65c(param_1 + 0x120);
  func_0x00010b23a608(param_1 + 0x110);
  func_0x0001078a52b0(param_1 + 0x100);
  FUN_10b23a824(param_1 + 0xf0);
  FUN_10b23a7d4(param_1 + 0xe0);
  FUN_10b23a784(param_1 + 0xd0);
  FUN_10b23a784(param_1 + 0xc0);
  func_0x00010b23a5e4(param_1 + 0xb0);
  FUN_10b23a53c(param_1 + 0xa0);
  FUN_10b23a6e0(param_1 + 0x90);
  FUN_10b23a590(param_1 + 0x80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  FUN_10b22e7d4(param_1 + 0x38);
  func_0x00010724c894(param_1 + 0x20);
  FUN_10b23a734(param_1 + 0x10);
  func_0x00010b23ad4c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b234f7c; end: 10b234fb7;  */

void FUN_10b234f7c(void)

{
  func_0x00010b23b4dc();
  func_0x00010b23b534();
  func_0x00010b23ae5c();
  return;
}



/* Entry: 10b234fb8; end: 10b2355cf;  */

void FUN_10b234fb8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined ***pppuVar5;
  int iVar6;
  undefined8 extraout_x8;
  long lVar7;
  long alStack_228 [2];
  undefined8 *apuStack_218 [3];
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [4];
  undefined1 auStack_1e4 [4];
  undefined8 *apuStack_1e0 [2];
  long alStack_1d0 [2];
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 auStack_1b0 [2];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined4 auStack_170 [4];
  ulong uStack_160;
  ulong uStack_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  long lStack_148;
  undefined8 *puStack_140;
  undefined1 uStack_f0;
  undefined1 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c351dc();
  uStack_58 = extraout_x8;
  FUN_10b155ca4(alStack_228,param_2);
  iVar6 = iRam00000000000000b8;
  if (alStack_228[0] == 0) {
LAB_10b235030:
    uVar4 = iVar6 == 1;
    if (!(bool)uVar4) goto LAB_10b235414;
    FUN_10b23182c(apuStack_218,param_1);
    if (apuStack_218[0] == (undefined8 *)0x0) {
      ppuStack_88 = &PTR_FUN_110ceb6d8;
      ppuStack_80 = (undefined **)0x0;
      puStack_78 = &DAT_11383d918;
      uStack_60 = 0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      FUN_10b237ed4(&ppuStack_88);
      FUN_10b485eb8();
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      pppuVar5 = &ppuStack_88;
      func_0x00010b486500(pppuVar5);
      func_0x000107c2823c(&uStack_200,pppuVar5);
      FUN_10b4d1758(&ppuStack_88,uStack_200,(int)uStack_1f8 - (int)uStack_200);
      func_0x00010b230284(&uStack_150,alStack_228[0] + 8);
      uStack_a8 = 1;
      FUN_10b2355d0(&uStack_a0,&uStack_200,&uStack_150,param_1 + 0xb);
      func_0x00010b23b068();
      func_0x00010b23b1b0();
      FUN_10b1b58a8(&uStack_150);
      func_0x000107c27914(&uStack_200);
      FUN_10b486378(&ppuStack_88);
    }
    else {
      FUN_10b2317e0(&uStack_a0);
      func_0x00010b23b490(&uStack_150,param_1[7],alStack_228[0] + 8,*apuStack_218[0],&uStack_a0,
                          &uStack_160,auStack_170);
      func_0x00010b23b184();
      for (lVar7 = CONCAT71(uStack_14f,uStack_150); uVar4 = lVar7 == lStack_148, !(bool)uVar4;
          lVar7 = lVar7 + 0x18) {
        func_0x00010b23b164(&ppuStack_88);
        FUN_10b23cc60(&uStack_200);
        func_0x00010b23af94();
        func_0x00010b23b4b0();
        FUN_10b23cd2c(&uStack_200,&ppuStack_88,uStack_160 & 0xffffffff,auStack_170[0]);
        func_0x00010b23af94();
        func_0x00010b23b4b0();
        FUN_10b23ccb8(&uStack_200,&ppuStack_88,*(undefined4 *)(alStack_228[0] + 0xa4));
        func_0x00010b23af94();
        func_0x00010b23b4b0();
        func_0x000107c281e8();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_88);
      }
      func_0x000107c278a8(&uStack_150);
      func_0x00010b23b3fc();
    }
    func_0x00010b239d68(apuStack_218);
  }
  else {
    iVar6 = *(int *)(alStack_228[0] + 0xb8);
    uVar4 = iVar6 == 2;
    if ((bool)uVar4) {
      FUN_10b2317e0(&uStack_160);
      FUN_10b231cdc(auStack_170);
      func_0x00010b231d14(auStack_180);
      FUN_10b231d7c(auStack_190);
      FUN_10b231ddc(auStack_1a0);
      func_0x00010b231d48(auStack_1b0);
      FUN_10b2394a8(&uStack_150,1);
      puStack_140[2] = 0;
      *puStack_140 = &PTR_FUN_110cca468;
      puStack_140[1] = 0;
      FUN_10b152160(puStack_140 + 3,alStack_228[0] + 8);
      puStack_1b8 = puStack_140;
      puStack_140 = (undefined8 *)0x0;
      puStack_1c0 = puStack_1b8 + 3;
      func_0x00010b23952c(&uStack_150);
      uStack_70 = 0;
      puStack_78 = (undefined *)0x0;
      uStack_60 = 0;
      uStack_68 = 0;
      ppuStack_88 = (undefined **)FUN_10b23a680;
      ppuStack_80 = &PTR_DAT_110873830;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_150 = 0;
      uStack_f0 = 0;
      FUN_10b231eac(&uStack_200,param_1,&puStack_1c0,param_3,&ppuStack_88,0,&uStack_160,auStack_170,
                    auStack_180,auStack_190,auStack_1a0,auStack_1b0,&uStack_a0,&uStack_150);
      FUN_10b2356cc(alStack_1d0,&uStack_200);
      FUN_10b22b928(&uStack_200);
      func_0x00010b121ac0(&uStack_150);
      FUN_10b23a65c(&uStack_a0);
      func_0x00010b23b1d8();
      if (alStack_1d0[0] == 0) {
        func_0x00010b23b184();
      }
      else {
        FUN_10b23182c(apuStack_1e0,param_1);
        if (apuStack_1e0[0] == (undefined8 *)0x0) {
          func_0x00010b23b184();
        }
        else {
          FUN_10b2317e0(&uStack_a0);
          uVar2 = uStack_98;
          uVar1 = uStack_a0;
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_1f8 = uStack_158;
          uStack_200 = uStack_160;
          uStack_158 = uVar2;
          uStack_160 = uVar1;
          FUN_10b22e7d4(&uStack_200);
          func_0x00010b23b3fc();
          func_0x00010b23b490(&uStack_200,param_1[7],alStack_1d0[0],*apuStack_1e0[0],&uStack_160,
                              auStack_1e4,auStack_1e8);
          uVar1 = uStack_200;
          uVar4 = uStack_200 == uStack_1f8;
          if ((bool)uVar4) {
            func_0x00010b23b184();
          }
          else {
            func_0x00010b23af18(auStack_1b0[0]);
            func_0x000104bff97c(apuStack_218);
            (**(code **)(*param_1 + 0x60))
                      (&uStack_a0,param_1,uVar1,alStack_228[0] + 0x38,apuStack_218);
            func_0x00010b23b068();
            func_0x00010b23b1b0();
            func_0x00010b23b1e8();
          }
          func_0x00010b23b200();
        }
        func_0x00010b239d68(apuStack_1e0);
      }
      FUN_10b22dd70(alStack_1d0);
      FUN_10b152714(&puStack_1c0);
      FUN_10b23a5e4(auStack_1b0);
      func_0x00010b23a608(auStack_1a0);
      func_0x0001078a52b0(auStack_190);
      FUN_10b23a590(auStack_180);
      FUN_10b23a53c(auStack_170);
      FUN_10b22e7d4(&uStack_160);
    }
    else {
      if (iVar6 != 0) goto LAB_10b235030;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_150,alStack_228[0] + 8);
      func_0x00010b23b068();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
    }
  }
  func_0x00010b167f44(alStack_228);
  func_0x000107c351d4(uStack_58);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_10b235414:
  func_0x00010563ab98();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10b23541c);
  (*pcVar3)();
}



/* Entry: 10b2355d0; end: 10b2356cb;  */

void FUN_10b2355d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x00010b23b08c();
  func_0x00010bcd5ac0(auStack_60);
  func_0x00010bcd5c88(auStack_48,auStack_60);
  func_0x00010b23aec0();
  func_0x000107c27c08(auStack_90,param_3,&PTR_DAT_110cc9a40);
  func_0x00010b23b0bc();
  func_0x00010b23b41c();
  func_0x000107c2831c(auStack_60,auStack_48);
  func_0x00010b23aec0();
  func_0x00010b23b174();
  func_0x00010b23ad44();
  if (*(char *)(unaff_x20 + 0xa8) == '\x01') {
    FUN_10b23cc60(auStack_60);
    func_0x000107c27b9c();
    func_0x00010b23aec0();
  }
  func_0x00010b23b104();
  return;
}



/* Entry: 10b2356cc; end: 10b2357b7;  */

void FUN_10b2356cc(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uVar4;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  func_0x00010b23b378();
  FUN_10b22baac(auStack_40,extraout_x9,auStack_50);
  FUN_10b22bad4(&puStack_30,auStack_40);
  func_0x00010b23b524();
  func_0x00010b23b02c();
  func_0x00010b23b358(puStack_30 + 9);
  __ZNSt3__15mutex4lockEv();
  puVar1 = puStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  while (puVar3 = puVar1, FUN_10b2365d4(), ((ulong)puVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar1 + 3,auStack_40);
  }
  func_0x00010b23b500();
  if (puStack_30[0x11] != 0) {
    func_0x00010b23b540();
    func_0x00010b23b548();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b23578c);
    (*pcVar2)();
  }
  uVar4 = *puStack_30;
  unaff_x19[1] = puStack_30[1];
  *unaff_x19 = uVar4;
  *puStack_30 = 0;
  puStack_30[1] = 0;
  func_0x00010b23b034();
  FUN_10b22b928(&puStack_30);
  return;
}



/* Entry: 10b2357b8; end: 10b235923;  */

void FUN_10b2357b8(int param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined1 *puStack_e0;
  undefined1 uStack_d8;
  long alStack_b0 [2];
  undefined1 uStack_99;
  long lStack_98;
  undefined1 uStack_90;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_28;
  
  plVar1 = alStack_b0;
  func_0x00010b23ab54();
  uStack_28 = extraout_x8;
  FUN_10b20e240(alStack_b0);
  func_0x00010b23b5ec();
  func_0x000107c3034c();
  if (param_1 == 0) {
    func_0x00010b23b5e4(0x58);
  }
  else {
    __ZNSt3__19to_stringEy(&uStack_80,*(undefined8 *)(alStack_b0[0] + 0x58));
    func_0x00010739fc34(&uStack_60,&PTR_s_version_110cc9a50,&uStack_80);
    func_0x000108992a94(&lStack_98,&uStack_60,1,&uStack_99);
    func_0x000107c278c0(&uStack_60);
    param_2 = &lStack_98;
    FUN_10b23eda4(0x78,param_2);
    func_0x000108992e04(&lStack_98);
    func_0x00010b23aec0();
    FUN_10b23bb70(&uStack_80,alStack_b0);
    lStack_98 = unaff_x19 + 0x98;
    uStack_90 = 1;
    __ZNSt3__119__shared_mutex_base4lockEv();
    if (lStack_78 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10 != 0);
    }
    uStack_58 = *(undefined8 *)(unaff_x19 + 0x168);
    uStack_60 = *(undefined8 *)(unaff_x19 + 0x160);
    *(long *)(unaff_x19 + 0x168) = lStack_78;
    *(undefined8 *)(unaff_x19 + 0x160) = uStack_80;
    func_0x00010b239d68(&uStack_60);
    func_0x000104c305a0(&lStack_98);
    func_0x00010b239d68(&uStack_80);
  }
  func_0x00010b20e4b4();
  func_0x000107c351d4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b239d68(&uStack_80);
    func_0x00010b20e4b4();
    func_0x00010b23acc0();
    puStack_e0 = (undefined1 *)((long)plVar1 + 0x98);
    uStack_d8 = 1;
    __ZNSt3__119__shared_mutex_base4lockEv();
    if ((*(long *)((long)plVar1 + 0x160) == 0) && (*(long *)((long)plVar1 + 0x158) == 0)) {
      func_0x000107c283c8((undefined1 *)((long)plVar1 + 0x140),param_2);
    }
    func_0x000104c305a0(&puStack_e0);
    return;
  }
  return;
}



/* Entry: 10b235924; end: 10b23597b;  */

void FUN_10b235924(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_1 + 0x98;
  uStack_28 = 1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  if ((*(long *)(param_1 + 0x160) == 0) && (*(long *)(param_1 + 0x158) == 0)) {
    func_0x000107c283c8(param_1 + 0x140,param_2);
  }
  func_0x000104c305a0(&lStack_30);
  return;
}



/* Entry: 10b23597c; end: 10b2359e3;  */

void FUN_10b23597c(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = (uint)param_2;
  if (*param_2 == param_2[1]) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10b235d6c(&uStack_30);
    func_0x00010b23b5ec();
    func_0x000107c3034c();
    if ((uVar1 & 1) != 0) {
      param_1[1] = uStack_28;
      *param_1 = uStack_30;
      param_1 = &uStack_30;
    }
    *param_1 = 0;
    param_1[1] = 0;
    func_0x00010b23b044();
  }
  return;
}



/* Entry: 10b2359e4; end: 10b235bc7;  */

void FUN_10b2359e4(undefined8 *param_1,long param_2,undefined4 *param_3,long param_4)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puStack_60;
  undefined4 *puStack_58;
  ulong uStack_50;
  undefined1 *puStack_40;
  ulong uStack_38;
  
  puStack_40 = (undefined1 *)&puStack_60;
  if (param_4 == 0) {
    if (*(int *)(param_2 + 0x2c) == 3) {
      if ((bRam00000001137f42b8 & 1) == 0) {
        iVar2 = 0x137f42b8;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000107c3018c(&puStack_60,&UNK_10f73af48,0x1a,&UNK_10f73ad60,0);
          uRam00000001137f42d8 = (ulong)puStack_58;
          puRam00000001137f42d0 = puStack_60;
          uRam00000001137f42e0 = uStack_50;
          puStack_58 = (undefined4 *)0x0;
          uStack_50 = 0;
          puStack_60 = (undefined1 *)0x0;
          func_0x00010b23ad44();
          ___cxa_guard_release(0x1137f42b8);
        }
      }
      puStack_40 = puRam00000001137f42d0;
      uStack_38 = uRam00000001137f42d8;
      if (-1 < (long)uRam00000001137f42e0) {
        puStack_40 = (undefined1 *)0x1137f42d0;
        uStack_38 = uRam00000001137f42e0 >> 0x38;
      }
      if (uStack_38 != 0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x20);
        if (*(int *)(param_2 + 0x2c) != 3) {
          ppuVar1 = &PTR_PTR_113373710;
        }
        uVar3 = (ulong)ppuVar1[7] & 0xfffffffffffffffc;
        func_0x000107c283c0(uVar3,&puStack_40,0);
        if (uVar3 != 0xffffffffffffffff) {
          FUN_10b2359e4(param_1,param_2,&UNK_10e56cb28,2);
          return;
        }
      }
    }
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    *param_1 = FUN_10b23a680;
    param_1[1] = &PTR_DAT_110873830;
  }
  else {
    puStack_60 = (undefined1 *)0x0;
    puStack_58 = (undefined4 *)0x0;
    uStack_50 = 0;
    uStack_38 = uStack_38 & 0xffffffffffffff00;
    FUN_10b152434(&puStack_60,(param_4 << 2) >> 2);
    for (param_4 = param_4 << 2; param_4 != 0; param_4 = param_4 + -4) {
      *puStack_58 = *param_3;
      param_3 = param_3 + 1;
      puStack_58 = puStack_58 + 1;
    }
    uStack_38 = CONCAT71(uStack_38._1_7_,1);
    func_0x00010b152470(&puStack_40);
    *param_1 = 0x10b23aa90;
    param_1[1] = &PTR_DAT_110cca440;
    param_1[3] = puStack_58;
    param_1[2] = puStack_60;
    param_1[4] = uStack_50;
    puStack_60 = (undefined1 *)0x0;
    puStack_58 = (undefined4 *)0x0;
    uStack_50 = 0;
    func_0x0001052a92cc(&puStack_60);
  }
  return;
}



/* Entry: 10b235bc8; end: 10b235c7b;  */

long FUN_10b235bc8(long param_1)

{
  FUN_10b23a784(param_1 + 0xb0);
  FUN_10b23a784(param_1 + 0xa0);
  FUN_10b23a5e4(param_1 + 0x90);
  func_0x00010724c894(param_1 + 0x80);
  FUN_10b23a53c(param_1 + 0x70);
  FUN_10b22e7d4(param_1 + 0x60);
  FUN_10b23a734(param_1 + 0x50);
  FUN_10b23a6e0(param_1 + 0x40);
  FUN_10b23a590(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  FUN_10b152714(param_1 + 8);
  return param_1;
}



/* Entry: 10b235c7c; end: 10b235c97;  */

undefined8 * FUN_10b235c7c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110ceb378;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_2 + 0x18;
  func_0x000107c2809c(lVar1,0);
  param_1[3] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10b484ca4(0,*(undefined8 *)(param_2 + 0x20));
  }
  param_1[4] = uVar2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  return param_1;
}



/* Entry: 10b235c98; end: 10b235ccb;  */

void FUN_10b235c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uStack_11;
  
  FUN_10b23a8cc(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10b235ccc; end: 10b235d6b;  */

void FUN_10b235ccc(void)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x00010b23b08c();
  FUN_10b23cec0(auStack_38);
  func_0x00010b23b60c();
  func_0x000107c27c08();
  func_0x00010b23b0bc();
  func_0x00010b23b41c();
  func_0x000107c2831c(auStack_50,auStack_38);
  func_0x00010b23aec0();
  func_0x00010b23b174();
  func_0x00010b23ad44();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10b235d6c; end: 10b235d87;  */

void FUN_10b235d6c(void)

{
  undefined1 uStack_11;
  
  FUN_10b23a9f0(&uStack_11);
  return;
}



/* Entry: 10b235d88; end: 10b235da3;  */

void FUN_10b235d88(undefined8 *param_1)

{
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  long lVar1;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x58);
    func_0x000107c2b43c();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    unaff_x20 = param_1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,0x40);
    for (lVar1 = 0; lVar1 != 0x20; lVar1 = lVar1 + 1) {
      *(ulong *)((long)register0x00000008 + -0x70) = (ulong)(byte)unaff_x21[lVar1];
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      func_0x000107c2793c(&UNK_10f82fc8a);
      func_0x000107c3173c((undefined1 *)((long)register0x00000008 + -0x88));
      func_0x000107c27fc4(param_1,(undefined1 *)((long)register0x00000008 + -0x88));
      unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
    unaff_x30 = &SUB_10bcd2ce8;
    __Unwind_Resume(unaff_x20);
    unaff_x22 = 0x20;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    param_1 = extraout_x8;
    unaff_x19 = param_1;
  }
  return;
}



/* Entry: 10b235da4; end: 10b235e8b;  */

void FUN_10b235da4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b23b08c();
  FUN_10b23b984();
  if ((((param_2 & 1) == 0) && (uVar1 = unaff_x20, FUN_10b23b9b8(), (uVar1 & 1) == 0)) &&
     (FUN_10b23b9ec(), (unaff_x20 & 1) == 0)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 3) = 0;
  }
  else {
    FUN_10b23d4a8(&uStack_38);
    unaff_x19[1] = uStack_30;
    *unaff_x19 = uStack_38;
    unaff_x19[2] = uStack_28;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
    *(undefined1 *)(unaff_x19 + 3) = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  }
  return;
}



/* Entry: 10b235e8c; end: 10b235f63;  */

void FUN_10b235e8c(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 *unaff_x19;
  int unaff_w20;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  func_0x00010b23b08c();
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  FUN_10b23b984();
  if (param_2 == 0) {
    iVar1 = unaff_w20;
    FUN_10b23b9b8();
    if (iVar1 == 0) {
      FUN_10b23b9ec();
      if (unaff_w20 == 0) goto LAB_10b235ef8;
      func_0x00010b23b60c();
      FUN_10b23e18c();
    }
    else {
      func_0x00010b23b60c();
      FUN_10b23e12c();
    }
  }
  else {
    func_0x00010b23b60c();
    FUN_10b23e0cc();
  }
  FUN_10b15211c(alStack_30,auStack_40);
  func_0x00010b23b044();
LAB_10b235ef8:
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  if (alStack_30[0] != 0) {
    func_0x00010b486500();
    func_0x000107c2823c();
    FUN_10b4d1758(alStack_30[0],*unaff_x19,*(int *)(unaff_x19 + 1) - (int)*unaff_x19);
  }
  FUN_10b152714(alStack_30);
  return;
}



/* Entry: 10b235f64; end: 10b235fa3;  */

void FUN_10b235f64(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_10b23597c(auStack_30);
  FUN_10b235fa4(param_1,auStack_30);
  func_0x00010b23b044();
  return;
}



/* Entry: 10b235fa4; end: 10b2361a3;  */

void FUN_10b235fa4(undefined1 *param_1,long *param_2)

{
  int iVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined **ppuVar5;
  ulong *puVar6;
  undefined8 extraout_x8_00;
  ulong uVar7;
  long *aplStack_150 [2];
  long *plStack_140;
  long *plStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  long alStack_e0 [2];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [56];
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 uStack_80;
  long alStack_78 [6];
  undefined8 uStack_48;
  
  plVar2 = param_2;
  func_0x00010b23ab80();
  uStack_90 = 0;
  uStack_48 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_80 = 1;
  lVar4 = *param_2;
  plStack_88 = plVar2;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x2c) == 3) {
      iVar1 = *(int *)(*(long *)(lVar4 + 0x20) + 0x20);
      in_ZR = iVar1 == 1;
      if (0 < iVar1) {
        puVar6 = (ulong *)(*(long *)(lVar4 + 0x20) + 0x18);
        uVar7 = *puVar6;
        in_ZR = (uVar7 & 1) == 0;
        if (!(bool)in_ZR) {
          puVar6 = (ulong *)(uVar7 + 7);
        }
        FUN_10b22ac00(auStack_c8,*puVar6);
        alStack_78[0] = 0;
        alStack_78[1] = 0;
        FUN_10b22ee10(alStack_e0,auStack_c8,param_2,auStack_cc,alStack_78);
        plVar2 = alStack_78;
        func_0x00010b227f1c();
        if (alStack_e0[0] != 0) {
          puVar3 = &uStack_90;
          func_0x000107c28148(puVar3);
          func_0x00010b23b4a0(0x33,puVar3);
          __ZNSt3__19to_stringEi(auStack_110,iVar1);
          func_0x00010b227c98(alStack_78,&PTR_DAT_110cc9a60,auStack_110);
          func_0x00010b23aff8(auStack_f8,alStack_78);
          FUN_10b23eda4(0x33,auStack_f8);
          func_0x000108992e04(auStack_f8);
          plVar2 = alStack_78;
          func_0x000107c278c0();
          func_0x00010b23b278();
          func_0x00010b23b3f0(*(undefined8 *)(alStack_e0[0] + 0x60));
          func_0x00010b23afc8();
          func_0x00010b23b5b4();
          goto LAB_10b236120;
        }
        func_0x00010b23afc8();
        func_0x00010b23b5b4();
      }
    }
    else {
      in_ZR = 0;
      if (*(int *)(lVar4 + 0x2c) == 2) {
        puVar3 = &uStack_90;
        func_0x000107c28148(puVar3);
        plVar2 = (long *)0x33;
        func_0x00010b23b4a0(0x33,puVar3);
        in_ZR = *(int *)(*param_2 + 0x2c) == 2;
        if ((bool)in_ZR) {
          ppuVar5 = *(undefined ***)(*param_2 + 0x20);
        }
        else {
          ppuVar5 = &PTR_PTR_113373148;
        }
        func_0x00010b23b3f0(ppuVar5[0xc]);
        goto LAB_10b236120;
      }
    }
  }
  *param_1 = 0;
  param_1[0x18] = 0;
LAB_10b236120:
  func_0x000107c351d4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b23afc8();
  func_0x00010b23b5b4();
  func_0x00010b23acc0();
  pcStack_128 = FUN_10b2361a4;
  plStack_140 = param_2;
  plStack_138 = plVar2;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010b23b4dc();
  (**(code **)(*aplStack_150[0] + 0x10))(extraout_x8_00);
  func_0x0001052b4284(aplStack_150);
  return;
}



/* Entry: 10b2361a4; end: 10b2361f3;  */

void FUN_10b2361a4(undefined8 param_1)

{
  long *aplStack_30 [2];
  
  func_0x00010b23b4dc();
  (**(code **)(*aplStack_30[0] + 0x10))(param_1);
  func_0x0001052b4284(aplStack_30);
  return;
}



/* Entry: 10b2361f4; end: 10b23628b;  */

void FUN_10b2361f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long alStack_48 [2];
  undefined8 **ppuStack_38;
  
  func_0x00010b23b510(alStack_48);
  puStack_78 = &uStack_58;
  uStack_58 = param_2;
  uStack_50 = param_4;
  func_0x00010b22684c(alStack_48[0]);
  ppuStack_38 = &puStack_78;
  uVar1 = (ulong)*(uint *)(alStack_48[0] + 0x50);
  if (*(uint *)(alStack_48[0] + 0x50) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  (*(code *)(&PTR_FUN_110cc9e98)[uVar1])(&uStack_70,&ppuStack_38,alStack_48[0] + 8);
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  func_0x00010b1440f0(alStack_48);
  return;
}



/* Entry: 10b23628c; end: 10b2363cb;  */

void FUN_10b23628c(void)

{
  undefined8 extraout_x8;
  code *extraout_x9;
  code *extraout_x9_00;
  long *unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  long alStack_40 [2];
  
  func_0x00010b23acc8();
  func_0x00010b23b510(alStack_40);
  if (*(int *)(alStack_40[0] + 0x50) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_58,alStack_40[0] + 8);
  }
  else {
    if (*(int *)(alStack_40[0] + 0x50) == 1) {
      func_0x00010bcd54ac(auStack_58,alStack_40[0] + 8);
      func_0x00010b23ae4c();
      (*extraout_x9)(auStack_80);
      FUN_10b234798(auStack_68);
      func_0x0001052b5e58(extraout_x8,auStack_68);
      func_0x0001052b5e30(auStack_68);
      func_0x00010b23ad44();
      func_0x000107c27914(auStack_58);
      goto LAB_10b236364;
    }
    func_0x00010b23af18();
    func_0x000107c278b8(auStack_58);
  }
  func_0x00010b23ae4c();
  (*extraout_x9_00)(auStack_80);
  (**(code **)(*unaff_x20 + 0x10))(extraout_x8);
  func_0x00010b23ad44();
  func_0x00010b23b288();
LAB_10b236364:
  func_0x00010b1440f0(alStack_40);
  return;
}



/* Entry: 10b2363cc; end: 10b236483;  */

void FUN_10b2363cc(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long alStack_38 [2];
  undefined1 *puStack_28;
  
  func_0x00010b23b510(alStack_38);
  uStack_48 = *(undefined8 *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_40 = lVar2;
    if (lVar2 != 0) {
      puStack_50 = &uStack_48;
      func_0x00010b22684c(alStack_38[0]);
      uVar3 = (ulong)*(uint *)(alStack_38[0] + 0x50);
      if (*(uint *)(alStack_38[0] + 0x50) == 0xffffffff) {
        uVar3 = 0xffffffffffffffff;
      }
      puStack_28 = (undefined1 *)&puStack_50;
      (*(code *)(&PTR_FUN_110cc9f58)[uVar3])(param_1,&puStack_28,alStack_38[0] + 8);
      func_0x000107c2be8c(&uStack_48);
      func_0x00010b1440f0(alStack_38);
      return;
    }
  }
  func_0x00010527822c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b236468);
  (*pcVar1)();
}



/* Entry: 10b236484; end: 10b236487;  */

undefined8 * FUN_10b236484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9980;
  func_0x00010b239d68(param_1 + 0x2c);
  func_0x000107c27938(param_1 + 0x28);
  func_0x000107276ba4(param_1 + 0x13);
  func_0x000107c279a4(param_1 + 0xb);
  func_0x00010b239d44(param_1 + 9);
  FUN_10b239cf0(param_1 + 7);
  func_0x00010b227f1c(param_1 + 5);
  func_0x0001052b61cc(param_1 + 3);
  func_0x000107c2be84(param_1 + 1);
  return param_1;
}



/* Entry: 10b236488; end: 10b2364b7;  */

void FUN_10b236488(void)

{
  FUN_10b239c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2364b8; end: 10b2364df;  */

void FUN_10b2364b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



/* Entry: 10b2364e0; end: 10b236517;  */

void FUN_10b2364e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
    do {
      func_0x000107c351e4();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x00010b23aef8();
  return;
}



/* Entry: 10b236518; end: 10b2365d3;  */

void FUN_10b236518(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  param_2[3] = 0;
  param_2[4] = 0;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  param_1[7] = param_2[7];
  param_2[6] = 0;
  param_2[7] = 0;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[8] = 0;
  uVar2 = param_2[0xc];
  uVar1 = param_2[0xb];
  uVar3 = *(undefined8 *)((long)param_2 + 0x61);
  *(undefined8 *)((long)param_1 + 0x69) = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)((long)param_1 + 0x61) = uVar3;
  param_1[0xc] = uVar2;
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  uVar1 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar1;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  uVar1 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar1;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  uVar1 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar1;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  uVar1 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar1;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  uVar1 = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar1;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  uVar1 = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar1;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  return;
}



/* Entry: 10b2365d4; end: 10b23660b;  */

undefined8 FUN_10b2365d4(long param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    func_0x00010b23ad58(*(undefined8 *)(param_1 + 0x88));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b23660c; end: 10b236cbb;  */

long * FUN_10b23660c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  code *extraout_x9;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long *plVar6;
  long lVar7;
  undefined1 auStack_250 [8];
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long alStack_f8 [2];
  undefined1 auStack_e8 [40];
  char cStack_c0;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x00010b23ab6c();
  plVar6 = *(long **)(param_1 + 0xf0);
  lStack_248 = param_2;
  lStack_240 = param_3;
  uStack_58 = extraout_x8;
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
    do {
      func_0x000107c351e4();
    } while (extraout_w10_00 != 0);
  }
  lVar7 = unaff_x19[5];
  uVar2 = *(int *)unaff_x19[0x1c] == 1;
  lStack_238 = param_2;
  lStack_230 = param_3;
  if (0 < *(int *)unaff_x19[0x1c]) {
    FUN_10b233890(unaff_x19[2] + 400);
  }
  FUN_10b2356cc(alStack_f8,&lStack_238);
  if (alStack_f8[0] == 0) {
    FUN_10b231698(auStack_e8,unaff_x19 + 3);
    func_0x00010b23b4b8();
    func_0x00010b23afd0();
    lVar5 = unaff_x19[2];
    *(undefined1 *)(lVar5 + 0x78) = 1;
    *(undefined4 *)(lVar5 + 0x7c) = 4;
    func_0x000107c278b8();
    FUN_10b231714();
    func_0x00010b23afd0();
    func_0x00010b23b5bc();
    func_0x00010b23ac1c();
    FUN_10b231be8(auStack_e8,unaff_x19 + 3,unaff_x19[0xb]);
    func_0x00010b23ae3c(&uStack_228,auStack_e8);
    func_0x00010b23b268();
  }
  else {
    FUN_10b226d08(&lStack_118,*(undefined8 *)(lVar7 + 0x38),alStack_f8[0],
                  *(undefined8 *)unaff_x19[0xf],unaff_x19 + 6,&uStack_fc,&uStack_100,
                  (int)unaff_x19[0x11]);
    uVar2 = lStack_118 == lStack_110;
    if ((bool)uVar2) {
      FUN_10b23c834(&uStack_1c0,unaff_x19 + 3,*(undefined4 *)(alStack_f8[0] + 0x94),&uStack_140);
      FUN_10b231698(auStack_e8,&uStack_1c0);
      func_0x00010b23b4b8();
      func_0x00010b23afd0();
      lVar5 = unaff_x19[2];
      *(byte *)(lVar5 + 0x78) = (byte)uStack_140 ^ 1;
      *(undefined4 *)(lVar5 + 0x7c) = 5;
      func_0x000107c278b8();
      FUN_10b231714();
      func_0x00010b23afd0();
      func_0x00010b23b5bc();
      func_0x00010b23ac1c();
      FUN_10b231be8(auStack_e8,&uStack_1c0,unaff_x19[0xb]);
      func_0x00010b23ae3c(&uStack_228,auStack_e8);
      func_0x00010b23b268();
      func_0x0001052ac684(&uStack_1c0);
    }
    else {
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_120 = 0x3f800000;
      (**(code **)(*(long *)unaff_x19[3] + 0x58))(auStack_e8);
      func_0x000107c27bb0(auStack_e8);
      if (cStack_c0 == '\x01') {
        (**(code **)(*(long *)unaff_x19[3] + 0x58))(auStack_e8);
        func_0x000107c27c58(&uStack_140,auStack_e8);
        func_0x000107c27bb0(auStack_e8);
        FUN_10b23c46c(&uStack_140);
      }
      func_0x00010b23b600(unaff_x19[3]);
      (*extraout_x9)(&uStack_1c0);
      FUN_10b23193c(auStack_e8,&uStack_1c0,unaff_x19[0xb]);
      func_0x0001052bb09c(&uStack_1c0);
      lStack_1d8 = 0;
      lStack_1d0 = 0;
      uStack_1c8 = 0;
      func_0x00010b23b338(lStack_110);
      func_0x000107c31930(&lStack_1d8);
      lVar1 = lStack_110;
      for (lVar5 = lStack_118; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
        (**(code **)(*(long *)unaff_x19[3] + 0x10))(auStack_70);
        FUN_10b23c6b4(&uStack_1c0,auStack_70,lVar5);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
        FUN_10b23c1ec(&uStack_140,*(undefined4 *)(alStack_f8[0] + 0x94),&uStack_1c0);
        FUN_10b23c284(&uStack_140,*(undefined4 *)(alStack_f8[0] + 0x9c),&uStack_1c0);
        FUN_10b23c328(&uStack_140,uStack_fc,uStack_100,&uStack_1c0);
        func_0x000107c27940(&lStack_1d8,&uStack_1c0);
        func_0x00010b23b498();
      }
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_218 = 0;
      func_0x00010b23b338(lStack_1d0);
      FUN_10b233e04(&uStack_228);
      lVar1 = lStack_1d0;
      for (lVar5 = lStack_1d8; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
        func_0x000107c2795c(&uStack_1f0,&lStack_1d8);
        FUN_10b233e78(&uStack_1f0,lVar5);
        func_0x00010b23b0d8(auStack_70);
        puStack_60[1] = 0;
        puStack_60[2] = 0;
        *puStack_60 = &PTR_FUN_110cc2518;
        uStack_1b8 = uStack_1e8;
        uStack_1c0 = uStack_1f0;
        uStack_1b0 = uStack_1e0;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1f0 = 0;
        FUN_10b21f7c0(puStack_60 + 3,lVar5,&uStack_140,auStack_e8,unaff_x19 + 3,&uStack_1c0);
        func_0x000107c278a8(&uStack_1c0);
        puStack_208 = puStack_60;
        puStack_60 = (undefined8 *)0x0;
        puStack_210 = puStack_208 + 3;
        func_0x00010b198324(auStack_70);
        puStack_1f8 = puStack_208;
        puStack_200 = puStack_210;
        puStack_210 = (undefined8 *)0x0;
        puStack_208 = (undefined8 *)0x0;
        FUN_10b196388(&uStack_228,&puStack_200);
        func_0x0001052ac684(&puStack_200);
        FUN_10b198334(&puStack_210);
        func_0x00010b23b200();
      }
      FUN_10b122194(unaff_x19[2] + 0x18,unaff_x19[0x12]);
      FUN_10b1222cc(unaff_x19[2] + 0x58,unaff_x19[0x14]);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (unaff_x19[2],*(ulong *)(alStack_f8[0] + 0x60) & 0xfffffffffffffffc);
      func_0x00010b23afac(lStack_110 - lStack_118);
      lVar5 = unaff_x19[2];
      *(undefined1 *)(lVar5 + 0x88) = extraout_w8;
      func_0x000107c27c5c(lVar5 + 0x1f8,unaff_x19[0x16]);
      lVar5 = unaff_x19[2];
      *(long *)(lVar5 + 0x90) = unaff_x19[0xb];
      *(undefined1 *)(lVar5 + 0x98) = 1;
      uVar2 = *(int *)(*unaff_x19 + 0x2c) == 3;
      if ((bool)uVar2) {
        uVar4 = (ulong)*(uint *)(*(long *)(*unaff_x19 + 0x20) + 0x54) | 0x100000000;
      }
      else {
        uVar4 = 0;
      }
      FUN_10b233924(unaff_x19 + 6,unaff_x19[2] + 0xa0,unaff_x19[2] + 0x1d8,uVar4);
      func_0x0001053a4504(unaff_x19 + 0xc);
      plVar3 = unaff_x19 + 0xc;
      func_0x000107c28148(plVar3);
      FUN_10b233f08(0x6d,0x6e,plVar3,*(undefined1 *)unaff_x19[0x18],*(undefined4 *)unaff_x19[0x1a]);
      func_0x00010b23b5bc();
      func_0x00010b23ac1c();
      func_0x000107c278a8(&lStack_1d8);
      func_0x0001052bb09c(auStack_e8);
      func_0x000107c278e0(&uStack_140);
    }
    func_0x000107c278a8(&lStack_118);
  }
  FUN_10b22dd70(alStack_f8);
  FUN_10b236fe8(plVar6,&uStack_228);
  func_0x00010b23b508();
  FUN_10b22b928(&lStack_238);
  plVar3 = &lStack_248;
  FUN_10b22b928(plVar3);
  while( true ) {
    func_0x000107c351d4(uStack_58);
    if ((bool)uVar2) {
      return plVar3;
    }
    ___stack_chk_fail();
    func_0x00010b23acc8();
    func_0x000107c278e0(&uStack_140);
    func_0x000107c278a8(&lStack_118);
    FUN_10b22dd70(alStack_f8);
    FUN_10b22b928(&lStack_238);
    FUN_10b22b928(&lStack_248);
    uVar2 = (int)lVar7 == 1;
    if (!(bool)uVar2) break;
    func_0x00010b23b17c();
    unaff_x19 = (long *)unaff_x19[0x1e];
    __ZSt17current_exceptionv(auStack_250);
    plVar3 = unaff_x19;
    FUN_10b236e74(unaff_x19,auStack_250);
    func_0x00010b23b2f8();
    ___cxa_end_catch();
  }
  func_0x00010b23acec();
  func_0x000104bd46a0();
  lVar7 = plVar6[0x1e];
  plVar6[0x1e] = 0;
  if (lVar7 != 0) {
    func_0x00010b23abe0();
  }
  FUN_10b23a65c(plVar6 + 0x1c);
  func_0x00010b23a608(plVar6 + 0x1a);
  func_0x0001078a52b0(plVar6 + 0x18);
  func_0x00010b23a5e4(plVar6 + 0x16);
  FUN_10b23a590(plVar6 + 0x14);
  FUN_10b23a53c(plVar6 + 0x12);
  func_0x00010b239d68(plVar6 + 0xf);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar6 + 8);
  FUN_10b22e7d4(plVar6 + 6);
  func_0x0001052ac684(plVar6 + 3);
  if (plVar6[1] != 0) {
    func_0x000107c278a0();
  }
  return plVar6;
}



/* Entry: 10b236cbc; end: 10b236d33;  */

long FUN_10b236cbc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (lVar1 != 0) {
    func_0x00010b23abe0();
  }
  FUN_10b23a65c(param_1 + 0xe0);
  func_0x00010b23a608(param_1 + 0xd0);
  func_0x0001078a52b0(param_1 + 0xc0);
  func_0x00010b23a5e4(param_1 + 0xb0);
  FUN_10b23a590(param_1 + 0xa0);
  FUN_10b23a53c(param_1 + 0x90);
  func_0x00010b239d68(param_1 + 0x78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x40);
  FUN_10b22e7d4(param_1 + 0x30);
  func_0x0001052ac684(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b236d34; end: 10b236d37;  */

long FUN_10b236d34(long param_1)

{
  long extraout_x8;
  
  func_0x00010b23b368(&PTR_FUN_110cc9b58);
  if (extraout_x8 != 0) {
    func_0x00010b23ac3c();
    func_0x00010b23b3dc();
    FUN_10b236e74();
    func_0x00010b23af10();
    func_0x00010b23b014();
    func_0x00010b23b550();
  }
  FUN_10b236de8(param_1 + 0x18);
  FUN_10b236de8();
  return param_1;
}



/* Entry: 10b236d38; end: 10b236d4b;  */

void FUN_10b236d38(void)

{
  FUN_10b236e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b236d4c; end: 10b236d4f;  */

long FUN_10b236d4c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b23b368(&PTR_FUN_110cc9b58);
  if (extraout_x8 != 0) {
    func_0x00010b23ac3c();
    func_0x00010b23b3dc();
    FUN_10b236e74();
    func_0x00010b23af10();
    func_0x00010b23b014();
    func_0x00010b23b550();
  }
  FUN_10b236de8(param_1 + 0x18);
  FUN_10b236de8();
  return param_1;
}



/* Entry: 10b236d50; end: 10b236d63;  */

void FUN_10b236d50(void)

{
  FUN_10b236e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b236d64; end: 10b236d67;  */

void FUN_10b236d64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9b78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b236d68; end: 10b236d7b;  */

void FUN_10b236d68(void)

{
  FUN_10b236dd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b236d7c; end: 10b236dd7;  */

long FUN_10b236d7c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    func_0x00010b23abe0();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  lVar1 = param_1 + 0x38;
  __ZNSt3__118condition_variableD1Ev(lVar1);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010b134374(param_1 + 0x18);
    func_0x00010b125558();
    return unaff_x19;
  }
  return lVar1;
}



/* Entry: 10b236dd8; end: 10b236de7;  */

void FUN_10b236dd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b236de8; end: 10b236e0b;  */

void FUN_10b236de8(long param_1)

{
  func_0x00010b23ad4c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b236e0c; end: 10b236e73;  */

long FUN_10b236e0c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b23b368(&PTR_FUN_110cc9b58);
  if (extraout_x8 != 0) {
    func_0x00010b23ac3c();
    func_0x00010b23b3dc();
    FUN_10b236e74();
    func_0x00010b23af10();
    func_0x00010b23b014();
    func_0x00010b23b550();
  }
  FUN_10b236de8(param_1 + 0x18);
  FUN_10b236de8();
  return param_1;
}



/* Entry: 10b236e74; end: 10b236ef7;  */

void FUN_10b236e74(void)

{
  long unaff_x19;
  
  func_0x00010b23ad0c();
  func_0x00010b23b004();
  FUN_10b236ef8();
  func_0x00010b23b2b8();
  FUN_10b236f2c();
  func_0x00010b23b4f8();
  func_0x00010b23aef8();
  func_0x00010b23b2c4();
  func_0x00010b23b428();
  func_0x00010b23ac6c();
  if (unaff_x19 == 0) {
    func_0x00010b23b2a8();
  }
  else {
    func_0x00010b23b2cc();
    func_0x00010b23ac7c();
    func_0x00010b23ab44();
  }
  func_0x00010b23b024();
  return;
}



/* Entry: 10b236ef8; end: 10b236f2b;  */

void FUN_10b236ef8(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  
  func_0x00010b23b114();
  __ZNSt3__18__sp_mut4lockEv();
  func_0x00010b23af5c();
  uVar1 = *unaff_x19;
  unaff_x21[1] = unaff_x19[1];
  *unaff_x21 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10b236f2c; end: 10b236f8f;  */

undefined8 * FUN_10b236f2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b23aef8();
  return param_1;
}



/* Entry: 10b236f90; end: 10b236fa3;  */

void FUN_10b236f90(void)

{
  func_0x00010b236f64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b236fa4; end: 10b236fe7;  */

void FUN_10b236fa4(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b23ac58();
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  FUN_10b23660c(param_1 + 8);
  func_0x00010b23b03c();
  return;
}



/* Entry: 10b236fe8; end: 10b2370a7;  */

void FUN_10b236fe8(void)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 *puStack_30;
  
  func_0x00010b23ad0c();
  func_0x00010b23b004();
  FUN_10b236ef8();
  func_0x00010b23b2b8();
  FUN_10b236f2c();
  func_0x00010b23b4f8();
  func_0x00010b23aef8();
  func_0x00010b23b2c4();
  if (*(char *)(puStack_30 + 3) == '\x01') {
    func_0x00010b12540c(puStack_30);
  }
  else {
    *puStack_30 = 0;
    puStack_30[1] = 0;
    puStack_30[2] = 0;
    uVar1 = *unaff_x19;
    puStack_30[1] = unaff_x19[1];
    *puStack_30 = uVar1;
    puStack_30[2] = unaff_x19[2];
    func_0x00010b23b184();
    *(undefined1 *)(puStack_30 + 3) = 1;
  }
  func_0x00010b23ac6c();
  if (unaff_x19 == (undefined8 *)0x0) {
    func_0x00010b23b2a8();
  }
  else {
    func_0x00010b23b2cc();
    func_0x00010b23ac7c();
    func_0x00010b23ab44();
  }
  func_0x00010b23b024();
  return;
}



/* Entry: 10b2370a8; end: 10b2370df;  */

undefined8 FUN_10b2370a8(long param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x00010b23ad58(*(undefined8 *)(param_1 + 0x90));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b2370e0; end: 10b237113;  */

void FUN_10b2370e0(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  
  func_0x00010b23b114();
  __ZNSt3__18__sp_mut4lockEv();
  func_0x00010b23af5c();
  uVar1 = *unaff_x19;
  unaff_x21[1] = unaff_x19[1];
  *unaff_x21 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10b237114; end: 10b2371a7;  */

undefined8 * FUN_10b237114(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b23aef0();
  return param_1;
}



/* Entry: 10b2371a8; end: 10b23728f;  */

void FUN_10b2371a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar4 = param_1;
  func_0x00010b23b300();
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[4] = 0;
  *puVar4 = &PTR_FUN_110cc9c60;
  puVar5 = (undefined8 *)0x2e0;
  __Znwm();
  plVar6 = puVar5 + 1;
  *plVar6 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110cc9c80;
  puVar1 = puVar5 + 3;
  _bzero(puVar1,0x248);
  puVar5[0x4c] = 0x3cb0b1bb;
  puVar5[0x4e] = 0;
  puVar5[0x4d] = 0;
  puVar5[0x50] = 0;
  puVar5[0x4f] = 0;
  puVar5[0x51] = 0;
  puVar5[0x52] = 0x32aaaba7;
  puVar5[0x54] = 0;
  puVar5[0x53] = 0;
  puVar5[0x56] = 0;
  puVar5[0x55] = 0;
  puVar5[0x58] = 0;
  puVar5[0x57] = 0;
  puVar5[0x5a] = 0;
  puVar5[0x59] = 0;
  puVar5[0x5b] = 0;
  puVar4[1] = puVar1;
  puVar4[2] = puVar5;
  puVar4[3] = puVar1;
  puVar4[4] = puVar5;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *puVar4 = &PTR_FUN_110cc9c18;
  *param_1 = puVar4;
  return;
}



/* Entry: 10b237290; end: 10b2372c7;  */

void FUN_10b237290(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
    do {
      func_0x000107c351e4();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x00010b23ae5c();
  return;
}



/* Entry: 10b2372c8; end: 10b2372ef;  */

void FUN_10b2372c8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10b2372f0; end: 10b23746f;  */

void FUN_10b2372f0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined8 uStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  undefined1 auStack_4d8 [576];
  undefined1 auStack_298 [552];
  undefined1 auStack_70 [24];
  long lStack_58;
  long lStack_50;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_4f8 = param_2;
  lStack_4f0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
    do {
      func_0x000107c351e4();
    } while (extraout_w10_00 != 0);
  }
  uStack_4e8 = param_2;
  lStack_4e0 = param_3;
  FUN_10b2327b8(&lStack_58,&uStack_4e8);
  if (lStack_58 == lStack_50) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_70,param_1);
    FUN_10b12402c(auStack_298,*(undefined8 *)(param_1 + 0x18));
  }
  else {
    FUN_10b23e27c(auStack_70);
    FUN_10b12402c(auStack_298,*(undefined8 *)(param_1 + 0x18));
  }
  func_0x0001052b6588(auStack_4d8,auStack_70,auStack_298);
  func_0x0001052b5d04(auStack_298);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  FUN_10b125534(&lStack_58);
  FUN_10b2376e4(uVar1,auStack_4d8);
  func_0x0001052b5cdc(auStack_4d8);
  FUN_10b236de8(&uStack_4e8);
  FUN_10b236de8(&uStack_4f8);
  return;
}



/* Entry: 10b237470; end: 10b237497;  */

void FUN_10b237470(long param_1)

{
  FUN_10b2377c0(param_1 + 0x28);
  FUN_10b23a878(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b237498; end: 10b23749b;  */

long FUN_10b237498(long param_1)

{
  long extraout_x8;
  
  func_0x00010b23b368(&PTR_FUN_110cc9c60);
  if (extraout_x8 != 0) {
    func_0x00010b23ac3c();
    func_0x00010b23b3dc();
    FUN_10b2375b4();
    func_0x00010b23af10();
    func_0x00010b23b014();
    func_0x00010b23b550();
  }
  func_0x0001052b5e30(param_1 + 0x18);
  func_0x0001052b5e30();
  return param_1;
}



/* Entry: 10b23749c; end: 10b2374af;  */

void FUN_10b23749c(void)

{
  FUN_10b23754c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


