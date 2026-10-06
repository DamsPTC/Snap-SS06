/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b17c40c; end: 10b17c49f;  */

void FUN_10b17c40c(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x19;
  
  func_0x00010b17edac();
  puVar3 = (undefined8 *)0xe8;
  __Znwm();
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110cc11b0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  puVar5 = puVar3 + 3;
  puVar3[4] = 0;
  *puVar5 = 0;
  puVar3[0xd] = 0x3cb0b1bb;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0x32aaaba7;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  puVar3[0x17] = 0;
  puVar3[0x16] = 0;
  puVar3[0x19] = 0;
  puVar3[0x18] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1c] = 0;
  *(undefined8 **)(unaff_x19 + 8) = puVar5;
  *(undefined8 **)(unaff_x19 + 0x10) = puVar3;
  *(undefined8 **)(unaff_x19 + 0x18) = puVar5;
  *(undefined8 **)(unaff_x19 + 0x20) = puVar3;
  plVar4 = puVar3 + 1;
  *plVar4 = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 10b17c4a0; end: 10b17c4b3;  */

void FUN_10b17c4a0(void)

{
  FUN_10b17c53c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17c4b4; end: 10b17c4b7;  */

void FUN_10b17c4b4(long param_1)

{
  long unaff_x19;
  long *plVar1;
  long *unaff_x21;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b17edac();
  plVar1 = (long *)(param_1 + 8);
  if (*plVar1 != 0) {
    ppuStack_78 = &PTR_DAT_1107e6938;
    ppuStack_70 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_68,&ppuStack_70);
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b0fda14(auStack_50,plVar1,&uStack_60);
    FUN_10b0fda70(alStack_40,auStack_50);
    func_0x00010b17ed68();
    func_0x00010b0fd928(&uStack_60);
    __ZNSt3__15mutex4lockEv(alStack_40[0] + 0x80);
    __ZNSt13exception_ptraSERKS_(alStack_40[0] + 0xc0,auStack_68);
    func_0x00010b17ebd8(alStack_40[0]);
    if (unaff_x21 == (long *)0x0) {
      func_0x00010b17ece4(alStack_40[0]);
    }
    else {
      (**(code **)(*unaff_x21 + 0x10))();
      func_0x00010b17e95c();
    }
    func_0x00010b17ed54();
    __ZNSt13exception_ptrD1Ev(auStack_68);
    __ZNSt9exceptionD2Ev(&ppuStack_70);
    __ZNSt9exceptionD2Ev(&ppuStack_78);
  }
  func_0x00010b0fd928(unaff_x19 + 0x18);
  func_0x00010b0fd928(plVar1);
  return;
}



/* Entry: 10b17c4b8; end: 10b17c4cb;  */

void FUN_10b17c4b8(void)

{
  FUN_10b17c53c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17c4cc; end: 10b17c4cf;  */

void FUN_10b17c4cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc11b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b17c4d0; end: 10b17c4e3;  */

void FUN_10b17c4d0(void)

{
  FUN_10b17c52c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17c4e4; end: 10b17c52b;  */

void FUN_10b17c4e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (lVar1 != 0) {
    func_0x00010b17ea5c();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xd8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x68);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10b0fd950();
  }
  return;
}



/* Entry: 10b17c52c; end: 10b17c53b;  */

void FUN_10b17c52c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17c53c; end: 10b17c677;  */

void FUN_10b17c53c(long param_1)

{
  long unaff_x19;
  long *plVar1;
  long *unaff_x21;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b17edac();
  plVar1 = (long *)(param_1 + 8);
  if (*plVar1 != 0) {
    ppuStack_78 = &PTR_DAT_1107e6938;
    ppuStack_70 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_68,&ppuStack_70);
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b0fda14(auStack_50,plVar1,&uStack_60);
    FUN_10b0fda70(alStack_40,auStack_50);
    func_0x00010b17ed68();
    func_0x00010b0fd928(&uStack_60);
    __ZNSt3__15mutex4lockEv(alStack_40[0] + 0x80);
    __ZNSt13exception_ptraSERKS_(alStack_40[0] + 0xc0,auStack_68);
    func_0x00010b17ebd8(alStack_40[0]);
    if (unaff_x21 == (long *)0x0) {
      func_0x00010b17ece4(alStack_40[0]);
    }
    else {
      (**(code **)(*unaff_x21 + 0x10))();
      func_0x00010b17e95c();
    }
    func_0x00010b17ed54();
    __ZNSt13exception_ptrD1Ev(auStack_68);
    __ZNSt9exceptionD2Ev(&ppuStack_70);
    __ZNSt9exceptionD2Ev(&ppuStack_78);
  }
  func_0x00010b0fd928(unaff_x19 + 0x18);
  func_0x00010b0fd928(plVar1);
  return;
}



/* Entry: 10b17c678; end: 10b17c697;  */

void FUN_10b17c678(void)

{
  func_0x00010b17edcc();
  FUN_10b17c53c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b17c698; end: 10b17d333;  */

void FUN_10b17c698(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  ulong *puVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  undefined *puVar11;
  undefined1 extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined *puVar12;
  int extraout_w11;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined1 auStack_6b0 [8];
  undefined8 uStack_6a8;
  long lStack_6a0;
  undefined8 uStack_698;
  long lStack_690;
  long alStack_688 [8];
  byte bStack_648;
  undefined **ppuStack_640;
  undefined *puStack_638;
  byte bStack_600;
  ulong uStack_5f0;
  ulong uStack_5e8;
  undefined8 uStack_5e0;
  char cStack_5d8;
  undefined **ppuStack_5c8;
  undefined *puStack_5c0;
  undefined8 uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  undefined8 uStack_580;
  undefined1 uStack_578;
  undefined **ppuStack_570;
  undefined *puStack_568;
  long lStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined4 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  undefined1 uStack_4f0;
  undefined1 uStack_450;
  undefined1 uStack_448;
  undefined1 uStack_408;
  undefined1 uStack_400;
  undefined1 uStack_3fc;
  undefined1 uStack_3f8;
  undefined1 uStack_3f4;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b8;
  byte bStack_398;
  byte bStack_368;
  undefined8 auStack_170 [3];
  undefined **ppuStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  long *plStack_e8;
  long lStack_e0;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [16];
  long lStack_88;
  byte bStack_70;
  undefined8 uStack_68;
  
  func_0x00010b17ea4c();
  uStack_6a8 = param_2;
  lStack_6a0 = param_3;
  uStack_68 = extraout_x8;
  if (param_3 != 0) {
    do {
      func_0x00010b17e94c();
    } while (extraout_w10_00 != 0);
    do {
      func_0x00010b17e94c();
    } while (extraout_w10_01 != 0);
  }
  lVar20 = *param_1;
  lVar21 = param_1[7];
  uStack_698 = param_2;
  lStack_690 = param_3;
  func_0x0001052a460c(alStack_688,&uStack_698);
  if ((bStack_648 & 1) == 0) {
    func_0x0001052a0760(&ppuStack_3f0,alStack_688);
    func_0x00010b17e96c();
    func_0x00010b17eac4();
  }
  else {
    plVar22 = alStack_688;
    func_0x000105c40364();
    plVar6 = (long *)*plVar22;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
LAB_10b17c758:
      lVar7 = 0;
    }
    else {
      (**(code **)(*plVar6 + 0x10))();
      lVar7 = *plVar22;
      if (lVar7 == 0) goto LAB_10b17c758;
      func_0x00010b17edf8();
      (*extraout_x8_00)();
    }
    func_0x00010b2056c4(plVar6,lVar7);
    uVar5 = (int)plVar6 == 6;
    if ((bool)uVar5) {
      lVar7 = *(long *)(lVar20 + 0x28);
      lVar1 = *(long *)(lVar20 + 0x30);
      ___dynamic_cast(lVar7,&PTR_DAT_110874720,&PTR_DAT_110cbe108,0);
      lStack_a8 = lVar7;
      lStack_a0 = lVar1;
      if (lVar1 != 0) {
        do {
          func_0x00010b17ea00();
          lVar7 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      lStack_b8 = *(long *)(lVar7 + 0x38);
      if (lStack_b8 == 0) {
        lStack_b8 = 0;
        lStack_b0 = 0;
      }
      else {
        lStack_b0 = *(long *)(lVar7 + 0x40);
        if (lStack_b0 != 0) {
          do {
            func_0x00010b17e94c();
          } while (extraout_w10_02 != 0);
        }
      }
      FUN_10b155d60();
      uVar19 = *(ulong *)(lVar20 + 0x18);
      FUN_10b202630(&ppuStack_3f0,param_1 + 4);
      func_0x00010b1f72a0(uVar19,&ppuStack_3f0,9);
      func_0x00010b121e00(&ppuStack_3f0);
      if ((uVar19 & 1) == 0) {
        func_0x00010b17ea98();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_98);
        func_0x000105c3d6a8(&uStack_5b0,&UNK_10f730cb4);
        func_0x00010b17ec38();
        uStack_558 = 4;
        lStack_560 = extraout_x8_04;
        func_0x00010b17e9b0();
        if ((bool)uVar5) {
          func_0x00010b17ea68();
        }
        func_0x00010b17ec08();
        func_0x00010b17e9ec();
        if (extraout_w9_00 != 0) {
          func_0x00010b17e92c();
          uStack_3b8 = extraout_w8_00;
        }
        func_0x00010b17e96c();
        func_0x00010b17eac4();
        func_0x00010b17ec9c();
        func_0x00010b17ecc8();
        func_0x00010b17eb90();
      }
      else {
        plVar6 = (long *)*plVar22;
        if (plVar6 == (long *)0x0) {
          plVar6 = (long *)0x0;
          lStack_e0 = 0;
        }
        else {
          (**(code **)(*plVar6 + 0x10))();
          lStack_e0 = *plVar22;
          if (lStack_e0 != 0) {
            func_0x00010b17edf8();
            (*extraout_x8_03)();
          }
        }
        uStack_d0 = 1;
        uStack_c0 = *(undefined8 *)(lVar20 + 0x50);
        uStack_c8 = *(undefined8 *)(lVar20 + 0x48);
        plStack_e8 = plVar6;
        FUN_10b2119b0(auStack_98,&plStack_e8);
        FUN_10b17d480(&plStack_e8);
        if ((bStack_70 & 1) == 0) {
          func_0x00010b17ea98();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&ppuStack_158);
          func_0x000107313018(&uStack_5b0,&DAT_10f451fd5);
          lStack_560 = lStack_148;
          puStack_568 = puStack_150;
          ppuStack_570 = ppuStack_158;
          lStack_148 = 0;
          ppuStack_158 = (undefined **)0x0;
          puStack_150 = (undefined *)0x0;
          uStack_558 = 1;
          func_0x00010b17e9b0();
          lStack_3e0 = lStack_560;
          if ((bool)uVar5) {
            *(ulong *)(extraout_x8_05 + 0x28) = uStack_5a8;
            *(ulong *)(extraout_x8_05 + 0x20) = uStack_5b0;
            *(undefined8 *)(extraout_x8_05 + 0x30) = uStack_5a0;
            uStack_5a8 = 0;
            uStack_5a0 = 0;
            uStack_5b0 = 0;
            uStack_538 = CONCAT71(uStack_538._1_7_,extraout_w10);
          }
          ppuStack_3e8 = (undefined **)puStack_568;
          ppuStack_3f0 = ppuStack_570;
          puStack_568 = (undefined *)0x0;
          lStack_560 = 0;
          ppuStack_570 = (undefined **)0x0;
          uStack_3d8 = 1;
          uStack_3d0 = uStack_3d0 & 0xffffffffffffff00;
          uStack_3b8 = extraout_w9_01 != 0;
          if ((bool)uStack_3b8) {
            uStack_3c8 = *(undefined8 *)(extraout_x8_05 + 0x28);
            uStack_3d0 = *(ulong *)(extraout_x8_05 + 0x20);
            uStack_3c0 = *(undefined8 *)(extraout_x8_05 + 0x30);
            *(undefined8 *)(extraout_x8_05 + 0x28) = 0;
            *(undefined8 *)(extraout_x8_05 + 0x30) = 0;
            *(undefined8 *)(extraout_x8_05 + 0x20) = 0;
          }
          func_0x00010b17e96c();
          func_0x00010b17eac4();
          func_0x00010b17ec9c();
          func_0x00010b17ecc8();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_158);
        }
        else {
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_f0 = 0x3f800000;
          uStack_120 = 0;
          lStack_128 = 0;
          uStack_118 = 0;
          puStack_150 = (undefined *)0x0;
          ppuStack_158 = &PTR_FUN_110cfd9c8;
          uStack_138 = 0;
          lStack_148 = 0;
          uStack_140 = 0;
          uStack_130 = 0;
          for (plVar22 = (long *)lStack_88; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
            func_0x000107c303b4(&lStack_148);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
            FUN_10b17befc(&ppuStack_570,param_1 + 4,plVar22 + 2);
            func_0x0001056412e8(&uStack_5b0,plVar22 + 5);
            uVar19 = uStack_120;
            if (uStack_120 < uStack_118) {
              FUN_10b17d4d8(uStack_120,&ppuStack_570,&uStack_5b0);
              uVar19 = uVar19 + 0x98;
            }
            else {
              func_0x00010b17ed48((long)(uStack_120 - lStack_128) / 0x98);
              func_0x00010b17ecf4();
              FUN_10b17d4d8(lStack_3e0,&ppuStack_570,&uStack_5b0);
              lStack_3e0 = lStack_3e0 + 0x98;
              func_0x00010b17ed3c();
              uVar19 = uStack_120;
              func_0x00010b17eba8();
            }
            uStack_120 = uVar19;
            func_0x000107c27d78(&uStack_5b0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (&ppuStack_3f0,&ppuStack_570);
            FUN_10b152240(&uStack_5f0,&ppuStack_3f0);
            puVar8 = &uStack_110;
            FUN_10b17bf98(puVar8,plVar22 + 2);
            uVar2 = uStack_5e8;
            uVar19 = uStack_5f0;
            uStack_5f0 = 0;
            uStack_5e8 = 0;
            uStack_5a8 = puVar8[1];
            uStack_5b0 = *puVar8;
            puVar8[1] = uVar2;
            *puVar8 = uVar19;
            func_0x00010529fde0(&uStack_5b0);
            func_0x00010b1440f0(&uStack_5f0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_3f0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_570);
          }
          pppuVar9 = &ppuStack_158;
          FUN_10b525b9c(pppuVar9);
          func_0x000107c27fdc(auStack_170,pppuVar9);
          pppuVar9 = &ppuStack_158;
          FUN_10b525b9c(pppuVar9);
          FUN_10b4d1758(&ppuStack_158,auStack_170[0],pppuVar9);
          func_0x000107c3171c(&ppuStack_570,auStack_170);
          uVar19 = uStack_120;
          if (uStack_120 < uStack_118) {
            FUN_10b17de7c(uStack_120,param_1 + 4,&ppuStack_570);
            uVar19 = uVar19 + 0x98;
          }
          else {
            func_0x00010b17ed48((long)(uStack_120 - lStack_128) / 0x98);
            func_0x00010b17ecf4();
            FUN_10b17de7c(lStack_3e0,param_1 + 4,&ppuStack_570);
            lStack_3e0 = lStack_3e0 + 0x98;
            func_0x00010b17ed3c();
            uVar19 = uStack_120;
            func_0x00010b17eba8();
          }
          uStack_120 = uVar19;
          func_0x000107c27d78(&ppuStack_570);
          uVar18 = *(undefined8 *)(lVar20 + 0x18);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&ppuStack_570,param_1 + 4);
          uStack_558 = 0x300000001;
          uStack_548 = 0;
          uStack_550 = 0;
          uStack_538 = 0;
          uStack_540 = 0;
          uStack_4f0 = 0;
          uStack_450 = 0;
          uStack_448 = 0;
          uStack_408 = 0;
          uStack_400 = 0;
          uStack_3fc = 0;
          uStack_3f8 = 0;
          uStack_3f4 = 0;
          uStack_520 = 0;
          uStack_518 = 0;
          uStack_528 = 0;
          uStack_510 = 0;
          uStack_508 = 0;
          uStack_500 = 0;
          uStack_4f8 = 0;
          uStack_530 = (int)lVar21;
          FUN_10b1f6c00(&ppuStack_3f0,uVar18,&ppuStack_570,&lStack_128);
          func_0x00010b121af0(&ppuStack_3f0);
          FUN_10b1213b8(&ppuStack_570);
          if (((bStack_398 & 1) == 0) && ((bStack_368 & 1) == 0)) {
            func_0x00010b17ea98();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&ppuStack_5c8);
            func_0x00010564c150(&uStack_5f0,&UNK_10f730ccf);
            ppuStack_3e8 = (undefined **)puStack_5c0;
            ppuStack_3f0 = ppuStack_5c8;
            puStack_5c0 = (undefined *)0x0;
            uStack_5b8 = 0;
            ppuStack_5c8 = (undefined **)0x0;
            uStack_598 = 5;
            uStack_590 = uStack_590 & 0xffffffffffffff00;
            uStack_578 = cStack_5d8 == '\x01';
            if ((bool)uStack_578) {
              uStack_588 = uStack_5e8;
              uStack_590 = uStack_5f0;
              uStack_580 = uStack_5e0;
              uStack_5e8 = 0;
              uStack_5e0 = 0;
              uStack_5f0 = 0;
            }
            uStack_5a8 = 0;
            uStack_5a0 = 0;
            uStack_5b0 = 0;
            func_0x00010b17e9ec();
            if (extraout_w9_02 != 0) {
              func_0x00010b17e92c();
              uStack_3b8 = extraout_w8_01;
            }
            func_0x00010b17e96c();
            func_0x00010b17eac4();
            func_0x0001052a03ac(&uStack_5b0);
            func_0x000107c279a4(&uStack_5f0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_5c8);
          }
          else {
            FUN_10b17c30c(&ppuStack_3f0,&uStack_110);
            puStack_638 = (undefined *)ppuStack_3e8;
            ppuStack_640 = ppuStack_3f0;
            ppuStack_3e8 = (undefined **)0x0;
            ppuStack_3f0 = (undefined **)0x0;
            bStack_600 = 1;
            func_0x00010b17c3b0(&ppuStack_3f0);
          }
          func_0x000107c27914(auStack_170);
          FUN_10b5259a4(&ppuStack_158);
          FUN_10b17dec8(&lStack_128);
          func_0x00010b17e0d4(&uStack_110);
        }
        FUN_10b17df6c(auStack_98);
      }
      FUN_10b12878c(&lStack_b8);
      func_0x00010b144138(&lStack_a8);
    }
    else {
      func_0x00010b17ea98();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_98);
      func_0x00010b141bf8(&uStack_5b0,&UNK_10f730c8d);
      func_0x00010b17ec38();
      uStack_558 = 6;
      lStack_560 = extraout_x8_02;
      func_0x00010b17e9b0();
      if ((bool)uVar5) {
        func_0x00010b17ea68();
      }
      func_0x00010b17ec08();
      func_0x00010b17e9ec();
      if (extraout_w9 != 0) {
        func_0x00010b17e92c();
        uStack_3b8 = extraout_w8;
      }
      func_0x00010b17e96c();
      func_0x00010b17eac4();
      func_0x00010b17ec9c();
      func_0x00010b17ecc8();
      func_0x00010b17eb90();
    }
  }
  func_0x0001052a4808(alStack_688);
  lVar21 = *param_1;
  __ZNSt3__15mutex4lockEv(lVar21 + 0x58);
  ppuVar10 = (undefined **)(*param_1 + 0x98);
  FUN_10b17e390(ppuVar10,param_1 + 4);
  ppuStack_3e8 = (undefined **)0x0;
  ppuStack_3f0 = (undefined **)0x0;
  uStack_5b0 = 0;
  uStack_5a8 = 0;
  FUN_10b0fda14(&ppuStack_570,ppuVar10 + 6,&uStack_5b0);
  FUN_10b0fda70(&ppuStack_3f0,&ppuStack_570);
  func_0x00010b0fd928(&ppuStack_570);
  func_0x00010b0fd928(&uStack_5b0);
  __ZNSt3__15mutex4lockEv(ppuStack_3f0 + 0x10);
  ppuVar3 = ppuStack_3f0;
  if (*(char *)(ppuStack_3f0 + 9) == '\x01') {
    if (((*(byte *)(ppuStack_3f0 + 8) & 1) == 0) && (bStack_600 != 0)) {
      func_0x0001052a03ac(ppuStack_3f0);
      ppuVar3[1] = puStack_638;
      *ppuVar3 = (undefined *)ppuStack_640;
      if (puStack_638 != (undefined *)0x0) {
        do {
          func_0x00010b17e94c();
        } while (extraout_w10_03 != 0);
      }
      *(undefined1 *)(ppuVar3 + 8) = 1;
    }
    else if (*(byte *)(ppuStack_3f0 + 8) == 0) {
      if ((bStack_600 & 1) == 0) {
        FUN_10b12e9a4(ppuStack_3f0,&ppuStack_640);
      }
    }
    else if (bStack_600 == 0) {
      func_0x00010b0fd0b8(ppuStack_3f0);
      FUN_10b17d3f0();
    }
    else {
      func_0x00010b0fd0e4(ppuStack_3f0,&ppuStack_640);
    }
  }
  else {
    *(undefined1 *)ppuStack_3f0 = 0;
    *(undefined1 *)(ppuStack_3f0 + 8) = 0;
    if (bStack_600 == 1) {
      ppuStack_3f0[1] = puStack_638;
      *ppuStack_3f0 = (undefined *)ppuStack_640;
      if (puStack_638 != (undefined *)0x0) {
        do {
          func_0x00010b17e94c();
        } while (extraout_w10_04 != 0);
      }
      *(undefined1 *)(ppuVar3 + 8) = 1;
    }
    else {
      FUN_10b17d3f0(ppuStack_3f0,&ppuStack_640);
    }
    *(undefined1 *)(ppuVar3 + 9) = 1;
  }
  func_0x00010b17ebd8(ppuStack_3f0);
  if (ppuVar3 == (undefined **)0x0) {
    func_0x00010b17ece4(ppuStack_3f0);
  }
  else {
    (**(code **)(*ppuVar3 + 0x10))(ppuVar3,&ppuStack_3f0);
    func_0x00010b17e95c();
  }
  func_0x00010b0fd928(&ppuStack_3f0);
  lVar20 = *param_1;
  puVar13 = *(undefined **)(lVar20 + 0xa0);
  puVar11 = *ppuVar10;
  puVar12 = ppuVar10[1];
  puVar15 = puVar13 + -1;
  if (((ulong)puVar13 & (ulong)puVar15) == 0) {
    puVar12 = (undefined *)((ulong)puVar15 & (ulong)puVar12);
  }
  else if (puVar13 <= puVar12) {
    uVar19 = 0;
    if (puVar13 != (undefined *)0x0) {
      uVar19 = (ulong)puVar12 / (ulong)puVar13;
    }
    puVar12 = puVar12 + -(uVar19 * (long)puVar13);
  }
  lVar7 = *(long *)(lVar20 + 0x98);
  ppuVar4 = *(undefined ***)(lVar7 + (long)puVar12 * 8);
  do {
    ppuVar14 = ppuVar4;
    ppuVar4 = (undefined **)*ppuVar14;
  } while ((undefined **)*ppuVar14 != ppuVar10);
  ppuStack_3e8 = (undefined **)(lVar20 + 0xa8);
  uVar5 = true;
  if (ppuVar14 == ppuStack_3e8) {
LAB_10b17cfb8:
    if (puVar11 == (undefined *)0x0) {
LAB_10b17cfec:
      *(undefined8 *)(lVar7 + (long)puVar12 * 8) = 0;
      puVar11 = *ppuVar10;
      goto LAB_10b17cff4;
    }
    puVar16 = *(undefined **)(puVar11 + 8);
    if (((ulong)puVar13 & (ulong)puVar15) == 0) {
      puVar17 = (undefined *)((ulong)puVar16 & (ulong)puVar15);
    }
    else {
      puVar17 = puVar16;
      if (puVar13 <= puVar16) {
        uVar19 = 0;
        if (puVar13 != (undefined *)0x0) {
          uVar19 = (ulong)puVar16 / (ulong)puVar13;
        }
        puVar17 = puVar16 + -(uVar19 * (long)puVar13);
      }
    }
    uVar5 = puVar17 == puVar12;
    if (!(bool)uVar5) goto LAB_10b17cfec;
  }
  else {
    puVar16 = ppuVar14[1];
    if (((ulong)puVar13 & (ulong)puVar15) == 0) {
      puVar16 = (undefined *)((ulong)puVar16 & (ulong)puVar15);
    }
    else if (puVar13 <= puVar16) {
      uVar19 = 0;
      if (puVar13 != (undefined *)0x0) {
        uVar19 = (ulong)puVar16 / (ulong)puVar13;
      }
      puVar16 = puVar16 + -(uVar19 * (long)puVar13);
    }
    uVar5 = puVar16 == puVar12;
    if (!(bool)uVar5) goto LAB_10b17cfb8;
LAB_10b17cff4:
    if (puVar11 == (undefined *)0x0) goto LAB_10b17d02c;
    puVar16 = *(undefined **)(puVar11 + 8);
  }
  if (((ulong)puVar13 & (ulong)puVar15) == 0) {
    puVar16 = (undefined *)((ulong)puVar16 & (ulong)puVar15);
  }
  else if (puVar13 <= puVar16) {
    uVar19 = 0;
    if (puVar13 != (undefined *)0x0) {
      uVar19 = (ulong)puVar16 / (ulong)puVar13;
    }
    puVar16 = puVar16 + -(uVar19 * (long)puVar13);
  }
  uVar5 = puVar16 == puVar12;
  if (!(bool)uVar5) {
    *(undefined ***)(lVar7 + (long)puVar16 * 8) = ppuVar14;
    puVar11 = *ppuVar10;
  }
LAB_10b17d02c:
  *ppuVar14 = puVar11;
  *ppuVar10 = (undefined *)0x0;
  *(long *)(lVar20 + 0xb0) = *(long *)(lVar20 + 0xb0) + -1;
  lStack_3e0 = 1;
  ppuStack_3f0 = ppuVar10;
  FUN_10b17d40c(&ppuStack_3f0);
  __ZNSt3__15mutex6unlockEv(lVar21 + 0x58);
  FUN_10b0fd950(&ppuStack_640);
  func_0x0001052a4560(&uStack_698);
  func_0x0001052a4560(&uStack_6a8);
  func_0x000107c27b68(param_1[8]);
  while (func_0x00010b17e980(uStack_68), !(bool)uVar5) {
    ___stack_chk_fail();
    func_0x00010b17e9a4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_5c8);
    func_0x000107c27914(auStack_170);
    FUN_10b5259a4(&ppuStack_158);
    FUN_10b17dec8(&lStack_128);
    func_0x00010b17e0d4(&uStack_110);
    while( true ) {
      FUN_10b17df6c(auStack_98);
      FUN_10b12878c(&lStack_b8);
      func_0x00010b144138(&lStack_a8);
      func_0x0001052a4808(alStack_688);
      func_0x0001052a4560(&uStack_698);
      func_0x0001052a4560(&uStack_6a8);
      uVar5 = (int)ppuVar3 == 1;
      if ((bool)uVar5) break;
      func_0x00010b17e9c8();
      func_0x000104bd46a0(ppuVar10);
      func_0x00010b17e9a4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_158);
    }
    ___cxa_begin_catch(ppuVar10);
    param_1 = (long *)param_1[8];
    __ZSt17current_exceptionv(auStack_6b0);
    func_0x000104bf33cc(param_1,auStack_6b0);
    __ZNSt13exception_ptrD1Ev(auStack_6b0);
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10b17d334; end: 10b17d387;  */

undefined8 FUN_10b17d334(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27b70(param_1 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  func_0x0001052b41d0(param_1 + 0x10);
  func_0x00010b17edc0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b17d388; end: 10b17d39b;  */

void FUN_10b17d388(void)

{
  func_0x00010b17d35c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17d39c; end: 10b17d3ef;  */

void FUN_10b17d39c(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = *param_2;
  lStack_28 = param_2[1];
  if (lStack_28 != 0) {
    do {
      func_0x00010b17e94c();
    } while (extraout_w10 != 0);
  }
  FUN_10b17c698(param_1 + 8);
  func_0x0001052a4560(&uStack_30);
  return;
}



/* Entry: 10b17d3f0; end: 10b17d40b;  */

void FUN_10b17d3f0(long param_1)

{
  func_0x0001052a0760();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b17d40c; end: 10b17d44b;  */

long * FUN_10b17d40c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10b17c678(lVar1 + 0x10);
    }
    func_0x00010b17eb2c();
  }
  return param_1;
}



/* Entry: 10b17d44c; end: 10b17d47f;  */

void FUN_10b17d44c(long param_1)

{
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b17d480; end: 10b17d4cb;  */

void FUN_10b17d480(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110cc1230)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10b17d4cc; end: 10b17d4d7;  */

void FUN_10b17d4cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2);
  return;
}



/* Entry: 10b17d4d8; end: 10b17d523;  */

void FUN_10b17d4d8(void)

{
  undefined1 auStack_b0 [144];
  
  func_0x00010b17eb78();
  func_0x00010b17ec50();
  func_0x00010b17eab0();
  FUN_10b17d950(auStack_b0);
  func_0x00010b17ebd0();
  func_0x00010b17ebc0();
  return;
}



/* Entry: 10b17d524; end: 10b17d5c3;  */

long FUN_10b17d524(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010b17ea4c();
  uStack_38 = extraout_x8;
  FUN_10b17d5c4();
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10b17d61c(lVar1 + 0x50,&uStack_50,1);
  func_0x000107c27d78(&uStack_50);
  FUN_10b17d8dc(param_1 + 0x68,param_4);
  func_0x00010b17e980(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b17ecd8();
  lVar1 = param_1;
  func_0x00010b121e00(param_1);
  func_0x00010b17e9c8();
  func_0x00010b17edec();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000107c279a0(lVar1 + 0x18,param_4 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x38,param_4 + 0x38);
  return param_1;
}



/* Entry: 10b17d5c4; end: 10b17d61b;  */

void FUN_10b17d5c4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b17edec();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000107c279a0(param_1 + 0x18,unaff_x20 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x38,unaff_x20 + 0x38);
  return;
}



/* Entry: 10b17d61c; end: 10b17d64b;  */

undefined8 * FUN_10b17d61c(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10b17d64c(param_1,param_2,param_2 + param_3 * 0x10,param_3);
  return param_1;
}



/* Entry: 10b17d64c; end: 10b17d68f;  */

void FUN_10b17d64c(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x00010b17ea10();
    func_0x00010b17ed70();
    FUN_10b17d6c8();
  }
  func_0x00010b17ebe8();
  return;
}



/* Entry: 10b17d690; end: 10b17d6c7;  */

void FUN_10b17d690(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1 + 2;
    FUN_10b17d708();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
  }
  else {
    FUN_10b17d6fc();
    plVar1 = param_1 + 2;
    func_0x00010b17d748();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10b17d6c8; end: 10b17d6fb;  */

void FUN_10b17d6c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x00010b17d748();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b17d6fc; end: 10b17d707;  */

void FUN_10b17d6fc(void)

{
  func_0x00010b17ecb4();
  FUN_10b17d72c();
  return;
}



/* Entry: 10b17d708; end: 10b17d72b;  */

void FUN_10b17d708(void)

{
  FUN_10b17d72c();
  return;
}



/* Entry: 10b17d72c; end: 10b17d75b;  */

void FUN_10b17d72c(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  FUN_10b17d75c();
  return;
}



/* Entry: 10b17d75c; end: 10b17d7b7;  */

undefined8 * FUN_10b17d75c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  func_0x00010b17eaec();
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar1 = param_2[1];
    uVar2 = *param_2;
    unaff_x19[1] = param_2[1];
    *unaff_x19 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x00010b17e94c();
      } while (extraout_w10 != 0);
    }
    unaff_x19 = unaff_x19 + 2;
  }
  func_0x00010b17ebf8();
  return unaff_x19;
}



/* Entry: 10b17d7b8; end: 10b17d7e7;  */

long FUN_10b17d7b8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10b17d7e8(param_1);
  }
  return param_1;
}



/* Entry: 10b17d7e8; end: 10b17d807;  */

void FUN_10b17d7e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x000107c27d78();
  }
  return;
}



/* Entry: 10b17d808; end: 10b17d89f;  */

void FUN_10b17d808(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x10;
    func_0x000107c27d78();
  }
  return;
}



/* Entry: 10b17d8a0; end: 10b17d8a7;  */

void FUN_10b17d8a0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b17ec68(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107c27d78();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b17d8a8; end: 10b17d8db;  */

void FUN_10b17d8a8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b17ec68();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107c27d78();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b17d8dc; end: 10b17d913;  */

undefined1 * FUN_10b17d8dc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_10b17d914();
  return param_1;
}



/* Entry: 10b17d914; end: 10b17d927;  */

void FUN_10b17d914(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_10b17d944();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 10b17d928; end: 10b17d943;  */

void FUN_10b17d928(long param_1)

{
  FUN_10b17d944();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10b17d944; end: 10b17d94f;  */

undefined8 * FUN_10b17d944(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110ccaac8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b24de24();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_2 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  if (iVar1 == 3) {
    lVar2 = param_2 + 0x18;
    func_0x000107c2809c(lVar2,0);
  }
  else {
    if (iVar1 != 2) {
      return param_1;
    }
    lVar2 = 0;
    FUN_10b24dc08(0,*(undefined8 *)(param_2 + 0x18));
  }
  param_1[3] = lVar2;
  return param_1;
}



/* Entry: 10b17d950; end: 10b17d96f;  */

void FUN_10b17d950(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10b24d1ec();
  }
  return;
}



/* Entry: 10b17d970; end: 10b17d99b;  */

undefined8 FUN_10b17d970(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b17d864(&uStack_28);
  return param_1;
}



/* Entry: 10b17d99c; end: 10b17d9fb;  */

long * FUN_10b17d99c(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x1af286bca1af287) {
    uVar1 = (param_1[2] - *param_1) / 0x98;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0xd79435e50d7942 < uVar1) {
      plVar3 = (long *)0x1af286bca1af286;
    }
    return plVar3;
  }
  FUN_10b17da7c();
  func_0x00010b17ec68();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x98) * 0x98;
  FUN_10b17db28(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 10b17d9fc; end: 10b17da7b;  */

void FUN_10b17d9fc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010b17ec68();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x98) * 0x98;
  FUN_10b17db28(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b17da7c; end: 10b17da87;  */

long * FUN_10b17da7c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010b17ecb4();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b17dad4();
  }
  lVar1 = param_4 + param_3 * 0x98;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x98;
  return param_1;
}



/* Entry: 10b17da88; end: 10b17daf7;  */

long * FUN_10b17da88(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b17dad4();
  }
  lVar1 = param_4 + param_3 * 0x98;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x98;
  return param_1;
}



/* Entry: 10b17daf8; end: 10b17db27;  */

void FUN_10b17daf8(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x1af286bca1af287) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x98);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x98) {
    FUN_10b17dbf4(param_4,uVar1);
    param_4 = lStack_48 + 0x98;
  }
  uStack_58 = 1;
  FUN_10b17dbc4(param_1,param_2,param_3);
  FUN_10b17dd94(&uStack_70);
  return;
}



/* Entry: 10b17db28; end: 10b17dbc3;  */

void FUN_10b17db28(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x98) {
    FUN_10b17dbf4(param_4,lVar1);
    param_4 = lStack_38 + 0x98;
  }
  uStack_48 = 1;
  FUN_10b17dbc4(param_1,param_2,param_3);
  FUN_10b17dd94(&uStack_60);
  return;
}



/* Entry: 10b17dbc4; end: 10b17dbf3;  */

void FUN_10b17dbc4(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    func_0x00010b17dd64();
  }
  return;
}



/* Entry: 10b17dbf4; end: 10b17dc43;  */

void FUN_10b17dbf4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b17edec();
  FUN_10b17d5c4();
  FUN_10b17dc44(param_1 + 0x50,unaff_x20 + 0x50);
  FUN_10b17d8dc(unaff_x19 + 0x68,unaff_x20 + 0x68);
  return;
}



/* Entry: 10b17dc44; end: 10b17dc7b;  */

undefined8 * FUN_10b17dc44(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10b17dc7c(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 4);
  return param_1;
}



/* Entry: 10b17dc7c; end: 10b17dcbf;  */

void FUN_10b17dc7c(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x00010b17ea10();
    func_0x00010b17ed70();
    FUN_10b17dcc0();
  }
  func_0x00010b17ebe8();
  return;
}



/* Entry: 10b17dcc0; end: 10b17dcf3;  */

void FUN_10b17dcc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10b17dcf4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b17dcf4; end: 10b17dd07;  */

void FUN_10b17dcf4(void)

{
  FUN_10b17dd08();
  return;
}



/* Entry: 10b17dd08; end: 10b17dd93;  */

undefined8 * FUN_10b17dd08(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  func_0x00010b17eaec();
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar1 = param_2[1];
    uVar2 = *param_2;
    unaff_x19[1] = param_2[1];
    *unaff_x19 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x00010b17e94c();
      } while (extraout_w10 != 0);
    }
    unaff_x19 = unaff_x19 + 2;
  }
  func_0x00010b17ebf8();
  return unaff_x19;
}



/* Entry: 10b17dd94; end: 10b17ddc3;  */

long FUN_10b17dd94(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10b17ddc4(param_1);
  }
  return param_1;
}



/* Entry: 10b17ddc4; end: 10b17dde3;  */

void FUN_10b17ddc4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x98;
    func_0x00010b17dd64();
  }
  return;
}



/* Entry: 10b17dde4; end: 10b17de3f;  */

void FUN_10b17dde4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x98;
    func_0x00010b17dd64();
  }
  return;
}



/* Entry: 10b17de40; end: 10b17de47;  */

void FUN_10b17de40(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b17ec68(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x98;
    func_0x00010b17dd64();
  }
  return;
}



/* Entry: 10b17de48; end: 10b17de7b;  */

void FUN_10b17de48(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b17ec68();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x98;
    func_0x00010b17dd64();
  }
  return;
}



/* Entry: 10b17de7c; end: 10b17dec7;  */

void FUN_10b17de7c(void)

{
  undefined1 auStack_b0 [144];
  
  func_0x00010b17eb78();
  func_0x00010b17ec50();
  func_0x00010b17eab0();
  FUN_10b17d950(auStack_b0);
  func_0x00010b17ebd0();
  func_0x00010b17ebc0();
  return;
}



/* Entry: 10b17dec8; end: 10b17df2f;  */

undefined8 FUN_10b17dec8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b17def4(&uStack_28);
  return param_1;
}



/* Entry: 10b17df30; end: 10b17df37;  */

void FUN_10b17df30(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b17ec68(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x98;
    func_0x00010b17dd64();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b17df38; end: 10b17df6b;  */

void FUN_10b17df38(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b17ec68();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x98;
    func_0x00010b17dd64();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b17df6c; end: 10b17df93;  */

void FUN_10b17df6c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10b17df94();
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b17df94; end: 10b17e037;  */

long FUN_10b17df94(long param_1)

{
  func_0x00010b17dfbc(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10b17e038(param_1,0);
  return param_1;
}



/* Entry: 10b17e038; end: 10b17e04f;  */

void FUN_10b17e038(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b17e050; end: 10b17e123;  */

undefined8 * FUN_10b17e050(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110cc10c0;
  plVar2 = (long *)param_1[0x15];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_10b17c678(lVar1);
    func_0x00010b17eb2c();
  }
  lVar1 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  func_0x0001052a1398(param_1 + 7);
  func_0x000107c27f08(param_1 + 5);
  func_0x00010b1257f8(param_1 + 3);
  FUN_10b17e338(param_1 + 1);
  return param_1;
}



/* Entry: 10b17e124; end: 10b17e143;  */

void FUN_10b17e124(void)

{
  func_0x00010b17edcc();
  func_0x00010529fde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b17e144; end: 10b17e1e3;  */

void FUN_10b17e144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar4;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x00010b17ea4c();
  uStack_38 = extraout_x8;
  FUN_10b17e200(auStack_50,1);
  FUN_10b17e258(lStack_40,param_3,param_4,param_5);
  lVar2 = lStack_40;
  lStack_40 = 0;
  FUN_10b17e1e4(param_1,lVar2 + 0x18);
  FUN_10b17e35c();
  func_0x00010b17e980(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b17eaa4();
  FUN_10b17e35c();
  func_0x00010b17e994();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = (undefined8 *)(puVar1 + 8);
  }
  if ((puVar3 != (undefined8 *)0x0) && ((puVar3[1] == 0 || (*(long *)(puVar3[1] + 8) == -1)))) {
    pcStack_58 = FUN_10b17e1e4;
    lStack_78 = extraout_x8_00[1];
    uVar4 = 0;
    puStack_80 = puVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    if (lStack_78 != 0) {
      do {
        func_0x00010b17ea00();
      } while (extraout_w11 != 0);
      do {
        func_0x00010b17ea00();
        uVar4 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    uStack_68 = puVar3[1];
    uStack_70 = *puVar3;
    *puVar3 = puVar1;
    puVar3[1] = uVar4;
    FUN_10b17e338(&uStack_70);
    FUN_10b17e36c(&puStack_80);
    return;
  }
  return;
}



/* Entry: 10b17e1e4; end: 10b17e1ff;  */

void FUN_10b17e1e4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 8);
  }
  if ((plVar1 != (long *)0x0) && ((plVar1[1] == 0 || (*(long *)(plVar1[1] + 8) == -1)))) {
    lStack_28 = param_1[1];
    lVar2 = 0;
    lStack_30 = param_2;
    if (lStack_28 != 0) {
      do {
        func_0x00010b17ea00();
      } while (extraout_w11 != 0);
      do {
        func_0x00010b17ea00();
        lVar2 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    lStack_18 = plVar1[1];
    lStack_20 = *plVar1;
    *plVar1 = param_2;
    plVar1[1] = lVar2;
    FUN_10b17e338(&lStack_20);
    FUN_10b17e36c(&lStack_30);
    return;
  }
  return;
}



/* Entry: 10b17e200; end: 10b17e227;  */

long FUN_10b17e200(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b17e228();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b17e228; end: 10b17e257;  */

undefined8 * FUN_10b17e228(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x12f684bda12f685) {
    puVar1 = (undefined8 *)(param_2 * 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc1250;
  FUN_10b17acac(param_1 + 3);
  return param_1;
}



/* Entry: 10b17e258; end: 10b17e297;  */

undefined8 * FUN_10b17e258(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc1250;
  FUN_10b17acac(param_1 + 3);
  return param_1;
}



/* Entry: 10b17e298; end: 10b17e29b;  */

void FUN_10b17e298(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1250;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b17e29c; end: 10b17e2af;  */

void FUN_10b17e29c(void)

{
  func_0x00010b17e2b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17e2b0; end: 10b17e2c3;  */

void FUN_10b17e2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b17ea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b17e2c4; end: 10b17e337;  */

void FUN_10b17e2c4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    uVar1 = 0;
    uStack_30 = param_3;
    if (lStack_28 != 0) {
      do {
        func_0x00010b17ea00();
      } while (extraout_w11 != 0);
      do {
        func_0x00010b17ea00();
        uVar1 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = uVar1;
    FUN_10b17e338(&uStack_20);
    FUN_10b17e36c(&uStack_30);
    return;
  }
  return;
}



/* Entry: 10b17e338; end: 10b17e35b;  */

void FUN_10b17e338(long param_1)

{
  func_0x00010b17edc0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b17e35c; end: 10b17e36b;  */

void FUN_10b17e35c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b17e36c; end: 10b17e38f;  */

void FUN_10b17e36c(long param_1)

{
  func_0x00010b17edc0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b17e390; end: 10b17e457;  */

long FUN_10b17e390(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000107c278d0(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b17e458; end: 10b17e47b;  */

void FUN_10b17e458(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b17e47c; end: 10b17e48f;  */

void FUN_10b17e47c(void)

{
  func_0x00010b17e470();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17e490; end: 10b17e497;  */

void FUN_10b17e490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b17ea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b17e498; end: 10b17e4c3;  */

undefined8 * FUN_10b17e498(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc12f0;
  FUN_10b486378(param_1 + 1);
  return param_1;
}



/* Entry: 10b17e4c4; end: 10b17e4d7;  */

void FUN_10b17e4c4(void)

{
  FUN_10b17e498();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17e4d8; end: 10b17e64f;  */

void FUN_10b17e4d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long extraout_x9;
  long alStack_a8 [6];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010b17ea4c();
  uStack_38 = extraout_x8;
  FUN_10b152160(alStack_a8,extraout_x9 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_78,param_3);
  FUN_10b15251c(auStack_50,1);
  puVar1 = puStack_40;
  *puStack_40 = &PTR_FUN_110cbf228;
  puStack_40[1] = 0;
  puStack_40[2] = 0;
  puStack_40[3] = &PTR_FUN_110cbf1c0;
  FUN_10b152160(puStack_40 + 4,alStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar1 + 10,auStack_78);
  puVar4 = puStack_40;
  *(undefined4 *)(puVar1 + 0xd) = 2;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[3] = &PTR_FUN_110cc9038;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 0;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  puStack_40 = (undefined8 *)0x0;
  FUN_10b152500(&uStack_60,puVar4 + 3);
  FUN_10b152704(auStack_50);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  func_0x00010b1440f0(&uStack_60);
  func_0x00010b151d18(alStack_a8);
  func_0x00010b17e980(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b486378(puVar1 + 4);
  __ZNSt3__119__shared_weak_countD2Ev(puVar1);
  FUN_10b152704(auStack_50);
  plVar2 = alStack_a8;
  func_0x00010b151d18();
  func_0x00010b17e994();
  lVar3 = *plVar2;
  *plVar2 = (long)puVar4;
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b17e650; end: 10b17e667;  */

void FUN_10b17e650(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b17e668; end: 10b17e6a7;  */

long * FUN_10b17e668(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10b17e124(lVar1 + 0x10);
    }
    func_0x00010b17eb2c();
  }
  return param_1;
}



/* Entry: 10b17e6a8; end: 10b17e6b3;  */

void FUN_10b17e6a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1340;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b17e6b4; end: 10b17e6c7;  */

void FUN_10b17e6b4(void)

{
  FUN_10b17e6a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17e6c8; end: 10b17e6cf;  */

void FUN_10b17e6c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b17ea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b17e6d0; end: 10b17e6fb;  */

undefined8 * FUN_10b17e6d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1390;
  func_0x00010b17e0d4(param_1 + 1);
  return param_1;
}



/* Entry: 10b17e6fc; end: 10b17e70f;  */

void FUN_10b17e6fc(void)

{
  FUN_10b17e6d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b17e710; end: 10b17e8fb;  */

void FUN_10b17e710(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int extraout_w10;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  plVar6 = *(long **)(param_2 + 0x10);
  if ((plVar6 != (long *)0x0) && (plVar2 = (long *)(param_2 + 0x20), *plVar2 != 0)) {
    func_0x000107c278c4(plVar2,param_3);
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*(long *)(param_2 + 8) + (long)plVar8 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10b17e7d8;
          plVar3 = (long *)plVar5[1];
          if (plVar2 != plVar3) break;
          lVar4 = (long)(plVar5 + 2);
          func_0x000107c278d0(lVar4,param_3);
          if ((int)lVar4 != 0) {
            lVar4 = plVar5[6];
            uVar9 = plVar5[5];
            param_1[1] = plVar5[6];
            *param_1 = uVar9;
            if (lVar4 != 0) {
              do {
                func_0x00010b17e94c();
              } while (extraout_w10 != 0);
            }
            *(undefined1 *)(param_1 + 8) = 1;
            return;
          }
        }
        if (((ulong)plVar6 & uVar7) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar7);
        }
        else if (plVar6 <= plVar3) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar6;
          }
          plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar6);
        }
      } while (plVar3 == plVar8);
    }
  }
LAB_10b17e7d8:
  func_0x00010b17ea98();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_e8);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_128,&UNK_10f730d28,param_3);
  uStack_80 = uStack_d8;
  uStack_88 = uStack_e0;
  uStack_90 = uStack_e8;
  uStack_60 = uStack_118;
  uStack_68 = uStack_120;
  uStack_70 = uStack_128;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_128 = 0;
  uStack_f8 = 1;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_b8 = 7;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_110 = 0;
  uStack_98 = 1;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_78 = 7;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_58 = 1;
  FUN_10b17e8fc(param_1,&uStack_90);
  func_0x0001052a03ac(&uStack_90);
  func_0x0001052a03ac(&uStack_d0);
  func_0x000107c279a4(&uStack_110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_128);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e8);
  return;
}



/* Entry: 10b17e8fc; end: 10b17e913;  */

void FUN_10b17e8fc(void)

{
  FUN_10b17e914();
  return;
}



/* Entry: 10b17e914; end: 10b17e92b;  */

void FUN_10b17e914(long param_1)

{
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b17e92c; end: 10b17ee03;  */

void FUN_10b17e92c(long param_1)

{
  long in_x9;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(in_x9 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(in_x9 + 0x20) = uVar1;
  *(undefined8 *)(in_x9 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10b17ee04; end: 10b17f05f;  */

long * FUN_10b17ee04(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  int extraout_w10;
  undefined1 auStack_160 [56];
  undefined1 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [56];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (*(int *)(param_2 + 0x20) < 1) {
    if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
      return (long *)0x0;
    }
    puVar3 = (ulong *)(param_2 + 0x58);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 0x18);
    puVar3 = (ulong *)(param_2 + 0x18);
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)(uVar5 + 7);
    }
  }
  uVar5 = *(ulong *)(*puVar3 + 0x48) & 0xfffffffffffffffc;
  if (uVar5 == 0) {
    return (long *)0x0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_160,uVar5);
  FUN_10b15c694(&uStack_50,auStack_160);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
  ppuVar1 = &PTR_PTR_11336dcb0;
  if (*(undefined ***)(param_2 + 0x50) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x50);
  }
  FUN_10b163e04(&uStack_90,ppuVar1[3],ppuVar1[3] + (long)*(int *)(ppuVar1 + 2) * 4);
  uStack_58 = *(undefined4 *)((long)ppuVar1 + 0x24);
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_60 = uStack_80;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  func_0x000107c27a18();
  func_0x00010b1800dc(auStack_f0,&uStack_70);
  func_0x0001052b70b0(auStack_c8,auStack_f0,*(int *)(param_1 + 100) == 2,0);
  func_0x0001052ac664(auStack_f0);
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  if ((*(byte *)(param_2 + 0x10) >> 4 & 1) != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&uStack_108,*(ulong *)(*(long *)(param_2 + 0x70) + 0x30) & 0xfffffffffffffffc);
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x18);
  lStack_118 = lStack_48;
  uStack_120 = uStack_50;
  if (lStack_48 != 0) {
    do {
      func_0x00010b181530();
    } while (extraout_w10 != 0);
  }
  FUN_10b124174(auStack_160,auStack_c8);
  uStack_128 = 1;
  (**(code **)(*param_3 + 0x10))(param_3,uVar5,&uStack_108,&uStack_120,auStack_160,param_4);
  func_0x0001052b41f8(auStack_160);
  func_0x0001052b41d0(&uStack_120);
  plVar4 = *(long **)(param_1 + 0x78);
  plVar2 = param_3;
  if (plVar4 <= param_3) {
    plVar2 = plVar4;
  }
  if (plVar4 != (long *)0x0) {
    param_3 = plVar2;
  }
  if ((uVar5 & 1) == 0) {
    param_3 = (long *)0x0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_108);
  func_0x0001052ac664(auStack_c8);
  func_0x000107c27a18(&uStack_70);
  func_0x00010b167f44(&uStack_50);
  return param_3;
}



/* Entry: 10b17f060; end: 10b17f4c7;  */

undefined4 * FUN_10b17f060(long param_1,long param_2,long *param_3,undefined8 param_4,long *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 **ppuVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  long extraout_x9;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar10;
  long *extraout_x12;
  undefined4 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long lVar18;
  double dVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined4 *puStack_110;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  byte bStack_c8;
  long lStack_b8;
  char cStack_b0;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar16 = *(undefined4 **)(param_1 + 0x78);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  puStack_a8 = (undefined4 *)0x0;
  puStack_a0 = (undefined4 *)0x0;
  lStack_98 = 0;
  plVar6 = param_3;
  if ((*(byte *)(param_2 + 0x10) >> 4 & 1) == 0) {
    puStack_110 = (undefined4 *)0x0;
    puVar11 = (undefined4 *)0x0;
    uVar13 = 0;
    plVar12 = (long *)0x0;
    auStack_d8[0] = 0;
    cStack_b0 = '\0';
    puVar17 = puVar16;
  }
  else {
    lVar14 = *(long *)(param_2 + 0x70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&uStack_90,*(ulong *)(lVar14 + 0x30) & 0xfffffffffffffffc);
    puVar17 = puStack_a8;
    uVar10 = *(uint *)(lVar14 + 0x74);
    plVar12 = (long *)(ulong)(0 < (int)uVar10);
    bVar1 = (*(byte *)(lVar14 + 0x10) >> 1 & 1) != 0;
    if (bVar1) {
      puStack_110 = (undefined4 *)(long)*(int *)(*(long *)(lVar14 + 0x60) + 0x10);
    }
    else {
      puStack_110 = (undefined4 *)0x0;
    }
    puVar11 = (undefined4 *)(ulong)bVar1;
    puVar15 = *(undefined4 **)(lVar14 + 0x20);
    lVar18 = (long)*(int *)(lVar14 + 0x18);
    uVar13 = lVar18 * 4;
    if (uVar13 < (ulong)(lStack_98 - (long)puStack_a8) ||
        uVar13 - (lStack_98 - (long)puStack_a8) == 0) {
      uVar9 = (long)puStack_a0 - (long)puStack_a8;
      puVar11 = puVar16;
      plVar6 = param_5;
      plVar12 = param_3;
      puStack_110 = puVar15;
      if (uVar13 < uVar9 || uVar13 - uVar9 == 0) {
        if (*(int *)(lVar14 + 0x18) != 0) {
          _memmove(puStack_a8,puVar15,uVar13);
        }
        puStack_a0 = puVar17 + lVar18;
        func_0x00010b18155c();
        uVar10 = extraout_w11;
      }
      else {
        if (puStack_a0 != puStack_a8) {
          _memmove(puStack_a8,puVar15);
        }
        func_0x00010b18155c(puStack_a0);
        puVar16 = (undefined4 *)((long)puVar15 + uVar9);
        puStack_a0 = extraout_x8;
        for (lVar14 = extraout_x9; param_5 = extraout_x12, uVar10 = extraout_w11_00, lVar14 != 0;
            lVar14 = lVar14 + -4) {
          *puStack_a0 = *puVar16;
          puVar16 = puVar16 + 1;
          puStack_a0 = puStack_a0 + 1;
        }
      }
    }
    else {
      func_0x000107426f80(&puStack_a8);
      ppuVar4 = &puStack_a8;
      func_0x000107c27eb0(ppuVar4,lVar18);
      func_0x000107c27e00(&puStack_a8,ppuVar4);
      for (; puVar17 = puVar16, uVar13 != 0; uVar13 = uVar13 - 4) {
        *puStack_a0 = *puVar15;
        puVar15 = puVar15 + 1;
        puStack_a0 = puStack_a0 + 1;
      }
    }
    uVar13 = (ulong)(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU));
    auStack_d8[0] = 0;
    cStack_b0 = '\0';
    if (((*(uint *)(param_2 + 0x10) >> 4 & 1) != 0) &&
       ((*(byte *)(*(long *)(param_2 + 0x70) + 0x10) >> 2 & 1) != 0)) {
      ppuStack_100 = &PTR_FUN_110d0fb20;
      uStack_f8 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_f0 = 0;
      puVar7 = (undefined8 *)
               (*(ulong *)(*(long *)(*(long *)(param_2 + 0x70) + 0x68) + 0x10) & 0xfffffffffffffffc)
      ;
      lVar14 = (long)*(char *)((long)puVar7 + 0x17);
      puVar8 = puVar7;
      if (lVar14 < 0) {
        puVar8 = (undefined8 *)*puVar7;
        lVar14 = puVar7[1];
      }
      pppuVar5 = &ppuStack_100;
      func_0x000107c30344(pppuVar5,puVar8,lVar14);
      if ((int)pppuVar5 != 0) {
        if (cStack_b0 == '\x01') {
          FUN_10b180118(auStack_d8,&ppuStack_100);
        }
        else {
          FUN_10b18017c(auStack_d8,&ppuStack_100);
        }
      }
      FUN_10b58d930(&ppuStack_100);
      if ((cStack_b0 == '\x01') && ((bStack_c8 >> 1 & 1) != 0)) {
        plVar22 = (long *)0x0;
        if (*(int *)(lStack_b8 + 0x24) == 2) {
          if ((puVar11 != (undefined4 *)0x0) && (0 < (long)puStack_110 && 0 < (int)uVar10)) {
            plVar22 = (long *)(1.0 - (double)puStack_110 / (double)uVar13);
            bVar1 = false;
            bVar2 = true;
            bVar3 = false;
            if ((double)plVar22 <= 1.0) {
              bVar1 = false;
              bVar2 = false;
              bVar3 = true;
              if (!NAN((double)plVar22)) {
                bVar1 = (double)plVar22 < 0.0;
                bVar2 = (double)plVar22 == 0.0;
                bVar3 = false;
              }
            }
            if (bVar2 || bVar1 != bVar3) {
              plVar22 = (long *)0x0;
            }
            plVar12 = (long *)0x1;
          }
        }
        else if ((*(int *)(lStack_b8 + 0x24) == 1) &&
                (dVar19 = *(double *)(*(long *)(lStack_b8 + 0x18) + 0x10), 0.0 < dVar19)) {
          plVar20 = (long *)(1.0 - dVar19);
          plVar21 = (long *)0x3ff0000000000000;
          if ((double)plVar20 <= 1.0) {
            plVar21 = plVar20;
          }
          plVar22 = (long *)0x0;
          if (0.0 <= (double)plVar20) {
            plVar22 = plVar21;
          }
        }
        goto LAB_10b17f348;
      }
    }
  }
  puVar16 = puStack_a0;
  plVar22 = (long *)0x0;
  if (puStack_a8 != puStack_a0) {
    puVar15 = puStack_a8;
    _wmemchr(puStack_a8,*(undefined4 *)(param_2 + 0x98),(long)puStack_a0 - (long)puStack_a8 >> 2);
    if (puVar15 != (undefined4 *)0x0) {
      puVar16 = puVar15;
    }
    if (puStack_a0 != puVar16) {
      puVar8 = &uStack_90;
      plVar22 = plVar6;
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar8,uVar13,plVar12,puStack_110,puVar11);
      if (((ulong)puVar8 & 1) == 0) {
        plVar22 = (long *)0x0;
      }
    }
  }
LAB_10b17f348:
  puVar16 = (undefined4 *)(long)((1.0 - (double)plVar22) * (double)puVar17);
  bVar1 = false;
  bVar2 = true;
  if (0.0 < (double)plVar22) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN((double)plVar22)) {
      bVar1 = (double)plVar22 == 1.0;
      bVar2 = 1.0 <= (double)plVar22;
    }
  }
  puVar15 = puVar16;
  if ((!bVar2 || bVar1) && (int)plVar12 != 0) {
    if (((cStack_b0 != '\x01') || ((bStack_c8 >> 1 & 1) == 0)) ||
       (plVar12 = *(long **)(lStack_b8 + 0x10), (long)*(long **)(lStack_b8 + 0x10) < 1)) {
      (**(code **)(*plVar6 + 0x20))(plVar6,param_5,&uStack_90);
      plVar12 = plVar6;
    }
    puVar15 = (undefined4 *)((long)((long)plVar12 * uVar13) / 8);
    if ((long)puVar15 <= (long)puVar17) {
      puVar17 = puVar15;
    }
    puVar15 = puVar17;
    if ((long)puVar17 <= (long)puVar16) {
      puVar15 = puVar16;
    }
  }
  FUN_10b1801e0(auStack_d8);
  func_0x000107c27a18(&puStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
  return puVar15;
}


