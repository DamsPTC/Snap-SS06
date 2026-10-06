/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b201c58; end: 10b201c8b;  */

void FUN_10b201c58(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b202378();
  if (unaff_x20 != 0) {
    func_0x00010b2024f8();
    if ((bool)in_ZR) {
      func_0x00010b1803a8(unaff_x20 + 0x18);
    }
    func_0x00010b202418();
  }
  return;
}



/* Entry: 10b201c8c; end: 10b201ce3;  */

undefined8 FUN_10b201c8c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_10b201ce4(auStack_38);
  func_0x00010b20245c();
  func_0x000107c30180();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return param_1;
}



/* Entry: 10b201ce4; end: 10b201cff;  */

void FUN_10b201ce4(void)

{
  func_0x00010b2023d4();
  return;
}



/* Entry: 10b201d00; end: 10b201d5f;  */

void FUN_10b201d00(undefined8 param_1)

{
  func_0x00010b20b440();
  func_0x000107c2793c(&UNK_10f7389ed);
  func_0x000107c3173c(param_1);
  return;
}



/* Entry: 10b201d60; end: 10b201d93;  */

void FUN_10b201d60(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  
  func_0x00010b202388();
  if (param_1 != 0) {
    do {
      func_0x00010b20233c();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b2022f4();
    }
  }
  return;
}



/* Entry: 10b201d94; end: 10b201d97;  */

void FUN_10b201d94(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b201d98; end: 10b201dab;  */

void FUN_10b201d98(void)

{
  func_0x000107c28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b201dac; end: 10b201e03;  */

void FUN_10b201dac(long param_1)

{
  FUN_10b201c8c(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x90));
  func_0x00010b202474();
  return;
}



/* Entry: 10b201e04; end: 10b201e0b;  */

void FUN_10b201e04(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010b202298(param_1,*param_2);
  return;
}



/* Entry: 10b201e0c; end: 10b201e23;  */

void FUN_10b201e0c(void)

{
  func_0x00010b202298();
  return;
}



/* Entry: 10b201e24; end: 10b201e3b;  */

void FUN_10b201e24(long *param_1,long param_2)

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



/* Entry: 10b201e3c; end: 10b201e6f;  */

void FUN_10b201e3c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b202378();
  if (unaff_x20 != 0) {
    func_0x00010b2024f8();
    if ((bool)in_ZR) {
      func_0x00010b1802b4(unaff_x20 + 0x18);
    }
    func_0x00010b202418();
  }
  return;
}



/* Entry: 10b201e70; end: 10b201ebf;  */

undefined8 FUN_10b201e70(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_10b201ec0(auStack_38);
  func_0x00010b20245c();
  func_0x000107c30184();
  func_0x00010b20236c();
  return param_1;
}



/* Entry: 10b201ec0; end: 10b201edb;  */

void FUN_10b201ec0(void)

{
  func_0x00010b2023d4();
  return;
}



/* Entry: 10b201edc; end: 10b201f0f;  */

void FUN_10b201edc(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  
  func_0x00010b202388();
  if (param_1 != 0) {
    do {
      func_0x00010b20233c();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b2022f4();
    }
  }
  return;
}



/* Entry: 10b201f10; end: 10b201f13;  */

void FUN_10b201f10(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b201f14; end: 10b201f27;  */

void FUN_10b201f14(void)

{
  func_0x000107c28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b201f28; end: 10b201f7f;  */

void FUN_10b201f28(long param_1)

{
  FUN_10b201e70(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x98));
  func_0x00010b20248c();
  return;
}



/* Entry: 10b201f80; end: 10b2020bf;  */

long * FUN_10b201f80(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 in_CY;
  long extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar2;
  ulong extraout_x9;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar3;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    func_0x00010b2024c4();
    if (extraout_x8 == 0) {
      return (long *)0x0;
    }
    FUN_10b201a08();
    func_0x00010b2023b0();
    if ((!(bool)in_ZR) && (func_0x00010b202564(), (bool)in_CY)) {
      func_0x00010b202558();
    }
    func_0x00010b20254c();
    plVar2 = extraout_x8_00;
    if (extraout_x8_00 == (long *)0x0) {
      return (long *)0x0;
    }
    do {
      while( true ) {
        uVar1 = in_ZR;
        if (*plVar2 == 0) {
          return (long *)0x0;
        }
        func_0x00010b202540();
        if (!(bool)uVar1) break;
        func_0x00010b202534();
        in_ZR = 0;
        plVar2 = extraout_x8_02;
        if ((bool)uVar1) {
          return extraout_x8_02;
        }
      }
      plVar2 = extraout_x8_01;
      uVar3 = extraout_x10;
      if ((uVar5 & extraout_x9) == 0) {
        uVar4 = extraout_x12 & extraout_x9;
      }
      else {
        uVar4 = extraout_x12;
        if (uVar5 <= extraout_x12) {
          func_0x00010b202528();
          plVar2 = extraout_x8_03;
          uVar3 = extraout_x10_00;
          uVar4 = extraout_x12_00;
        }
      }
      in_ZR = 1;
    } while (uVar4 == uVar3);
  }
  return (long *)0x0;
}



/* Entry: 10b2020c0; end: 10b2020db;  */

long * FUN_10b2020c0(long param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar3;
  ulong extraout_x9;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar4;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = 0x2c < param_2;
  uVar2 = param_2 == 0x2d;
  if (!(bool)uVar1) {
    return (long *)(param_1 + param_2 * 8);
  }
  func_0x00010b2024a0();
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 != 0) {
    func_0x00010b2024c4();
    if (extraout_x8 == 0) {
      return (long *)0x0;
    }
    FUN_10b201c20();
    func_0x00010b2023b0();
    if ((!(bool)uVar2) && (func_0x00010b202564(), (bool)uVar1)) {
      func_0x00010b202558();
    }
    func_0x00010b20254c();
    plVar3 = extraout_x8_00;
    if (extraout_x8_00 == (long *)0x0) {
      return (long *)0x0;
    }
    do {
      while( true ) {
        uVar1 = uVar2;
        if (*plVar3 == 0) {
          return (long *)0x0;
        }
        func_0x00010b202540();
        if (!(bool)uVar1) break;
        func_0x00010b202534();
        uVar2 = 0;
        plVar3 = extraout_x8_02;
        if ((bool)uVar1) {
          return extraout_x8_02;
        }
      }
      plVar3 = extraout_x8_01;
      uVar4 = extraout_x10;
      if ((uVar6 & extraout_x9) == 0) {
        uVar5 = extraout_x12 & extraout_x9;
      }
      else {
        uVar5 = extraout_x12;
        if (uVar6 <= extraout_x12) {
          func_0x00010b202528();
          plVar3 = extraout_x8_03;
          uVar4 = extraout_x10_00;
          uVar5 = extraout_x12_00;
        }
      }
      uVar2 = 1;
    } while (uVar5 == uVar4);
  }
  return (long *)0x0;
}



/* Entry: 10b2020dc; end: 10b20217b;  */

long * FUN_10b2020dc(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 in_CY;
  long extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar2;
  ulong extraout_x9;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar3;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    func_0x00010b2024c4();
    if (extraout_x8 == 0) {
      return (long *)0x0;
    }
    FUN_10b201c20();
    func_0x00010b2023b0();
    if ((!(bool)in_ZR) && (func_0x00010b202564(), (bool)in_CY)) {
      func_0x00010b202558();
    }
    func_0x00010b20254c();
    plVar2 = extraout_x8_00;
    if (extraout_x8_00 == (long *)0x0) {
      return (long *)0x0;
    }
    do {
      while( true ) {
        uVar1 = in_ZR;
        if (*plVar2 == 0) {
          return (long *)0x0;
        }
        func_0x00010b202540();
        if (!(bool)uVar1) break;
        func_0x00010b202534();
        in_ZR = 0;
        plVar2 = extraout_x8_02;
        if ((bool)uVar1) {
          return extraout_x8_02;
        }
      }
      plVar2 = extraout_x8_01;
      uVar3 = extraout_x10;
      if ((uVar5 & extraout_x9) == 0) {
        uVar4 = extraout_x12 & extraout_x9;
      }
      else {
        uVar4 = extraout_x12;
        if (uVar5 <= extraout_x12) {
          func_0x00010b202528();
          plVar2 = extraout_x8_03;
          uVar3 = extraout_x10_00;
          uVar4 = extraout_x12_00;
        }
      }
      in_ZR = 1;
    } while (uVar4 == uVar3);
  }
  return (long *)0x0;
}



/* Entry: 10b20217c; end: 10b202197;  */

long * FUN_10b20217c(long param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar3;
  ulong extraout_x9;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar4;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = 0x2c < param_2;
  uVar2 = param_2 == 0x2d;
  if (!(bool)uVar1) {
    return (long *)(param_1 + param_2 * 8);
  }
  func_0x00010b2024a0();
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 != 0) {
    func_0x00010b2024c4();
    if (extraout_x8 == 0) {
      return (long *)0x0;
    }
    FUN_10b201e04();
    func_0x00010b2023b0();
    if ((!(bool)uVar2) && (func_0x00010b202564(), (bool)uVar1)) {
      func_0x00010b202558();
    }
    func_0x00010b20254c();
    plVar3 = extraout_x8_00;
    if (extraout_x8_00 == (long *)0x0) {
      return (long *)0x0;
    }
    do {
      while( true ) {
        uVar1 = uVar2;
        if (*plVar3 == 0) {
          return (long *)0x0;
        }
        func_0x00010b202540();
        if (!(bool)uVar1) break;
        func_0x00010b202534();
        uVar2 = 0;
        plVar3 = extraout_x8_02;
        if ((bool)uVar1) {
          return extraout_x8_02;
        }
      }
      plVar3 = extraout_x8_01;
      uVar4 = extraout_x10;
      if ((uVar6 & extraout_x9) == 0) {
        uVar5 = extraout_x12 & extraout_x9;
      }
      else {
        uVar5 = extraout_x12;
        if (uVar6 <= extraout_x12) {
          func_0x00010b202528();
          plVar3 = extraout_x8_03;
          uVar4 = extraout_x10_00;
          uVar5 = extraout_x12_00;
        }
      }
      uVar2 = 1;
    } while (uVar5 == uVar4);
  }
  return (long *)0x0;
}



/* Entry: 10b202198; end: 10b202237;  */

long * FUN_10b202198(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 in_CY;
  long extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar2;
  ulong extraout_x9;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar3;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    func_0x00010b2024c4();
    if (extraout_x8 == 0) {
      return (long *)0x0;
    }
    FUN_10b201e04();
    func_0x00010b2023b0();
    if ((!(bool)in_ZR) && (func_0x00010b202564(), (bool)in_CY)) {
      func_0x00010b202558();
    }
    func_0x00010b20254c();
    plVar2 = extraout_x8_00;
    if (extraout_x8_00 == (long *)0x0) {
      return (long *)0x0;
    }
    do {
      while( true ) {
        uVar1 = in_ZR;
        if (*plVar2 == 0) {
          return (long *)0x0;
        }
        func_0x00010b202540();
        if (!(bool)uVar1) break;
        func_0x00010b202534();
        in_ZR = 0;
        plVar2 = extraout_x8_02;
        if ((bool)uVar1) {
          return extraout_x8_02;
        }
      }
      plVar2 = extraout_x8_01;
      uVar3 = extraout_x10;
      if ((uVar5 & extraout_x9) == 0) {
        uVar4 = extraout_x12 & extraout_x9;
      }
      else {
        uVar4 = extraout_x12;
        if (uVar5 <= extraout_x12) {
          func_0x00010b202528();
          plVar2 = extraout_x8_03;
          uVar3 = extraout_x10_00;
          uVar4 = extraout_x12_00;
        }
      }
      in_ZR = 1;
    } while (uVar4 == uVar3);
  }
  return (long *)0x0;
}



/* Entry: 10b202238; end: 10b20256f;  */

void FUN_10b202238(long param_1)

{
  undefined8 *in_x10;
  undefined8 *in_x12;
  long in_x13;
  
  *in_x10 = *in_x12;
  *in_x12 = **(undefined8 **)(param_1 + in_x13 * 8);
  **(undefined8 **)(param_1 + in_x13 * 8) = in_x12;
  return;
}



/* Entry: 10b202570; end: 10b20262f;  */

void FUN_10b202570(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = param_2;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_2,0x5f,0);
  if (lVar1 != -1) {
    func_0x000107c27fb4(auStack_48,param_2,0,lVar1);
    func_0x000107c27b9c(param_1,auStack_48);
    FUN_10b20276c();
    func_0x000107c27fb4(auStack_48,param_2,lVar1 + 1,0xffffffffffffffff);
    func_0x000107c27b94(param_1 + 0x18,auStack_48);
    FUN_10b20276c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1,param_2);
  return;
}



/* Entry: 10b202630; end: 10b20269f;  */

undefined8 * FUN_10b202630(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 7);
  FUN_10b202570(param_1,param_1 + 7);
  return param_1;
}



/* Entry: 10b2026a0; end: 10b20276b;  */

long FUN_10b2026a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000107c27f70(lVar1 + 0x18,param_3);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  func_0x000107c28498(auStack_60,param_2,0x5f);
  func_0x000107c2831c(auStack_48,auStack_60,param_3);
  func_0x000107c27b9c((undefined8 *)(param_1 + 0x38),auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  return param_1;
}



/* Entry: 10b20276c; end: 10b202773;  */

void FUN_10b20276c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10b202774; end: 10b2028fb;  */

void FUN_10b202774(float param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  int extraout_w8;
  int extraout_w8_00;
  ulong uVar5;
  ulong *extraout_x10;
  ulong *extraout_x10_00;
  undefined8 *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar12 = param_1;
  func_0x00010b203e2c();
  bVar2 = false;
  bVar3 = false;
  if (0.0 < fVar12) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1)) {
      bVar2 = param_1 < 1.0;
      bVar3 = false;
    }
  }
  if ((bVar2 == bVar3) || (iVar1 = (int)param_4[1], iVar1 == 0)) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    FUN_10b2035cc();
    return;
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  uVar5 = *unaff_x20;
  puVar6 = unaff_x20;
  if ((uVar5 & 1) != 0) {
    puVar6 = (ulong *)(uVar5 + 7);
  }
  puVar8 = param_4;
  if ((*param_4 & 1) != 0) {
    puVar8 = (ulong *)(*param_4 + 7);
  }
  fVar12 = 0.0;
  fVar13 = 0.0;
  do {
    puVar7 = unaff_x20;
    if ((uVar5 & 1) != 0) {
      puVar7 = (ulong *)(uVar5 + 7);
    }
    bVar2 = puVar6 == puVar7 + (int)unaff_x20[1];
    if (bVar2) {
      func_0x00010b203e88(iVar1);
      puVar7 = param_4;
      if (!bVar2) {
        puVar7 = extraout_x10_00;
      }
      if (puVar8 == puVar7 + extraout_w8_00) {
        return;
      }
      fVar11 = 3.4028235e+38;
LAB_10b20284c:
      fVar10 = *(float *)(*puVar8 + 0x14);
    }
    else {
      func_0x00010b203e88(iVar1);
      puVar7 = param_4;
      if (!bVar2) {
        puVar7 = extraout_x10;
      }
      fVar11 = *(float *)(*puVar6 + 0x14);
      if (puVar8 != puVar7 + extraout_w8) goto LAB_10b20284c;
      fVar10 = 3.4028235e+38;
    }
    fVar14 = fVar10;
    if (fVar11 <= fVar10) {
      fVar14 = fVar11;
    }
    puVar7 = puVar6;
    if (fVar11 == fVar14) {
      puVar7 = puVar6 + 1;
      fVar13 = *(float *)(*puVar6 + 0x10);
    }
    puVar9 = puVar8;
    if (fVar10 == fVar14) {
      puVar9 = puVar8 + 1;
      fVar12 = *(float *)(*puVar8 + 0x10);
    }
    puVar4 = unaff_x19;
    FUN_10b1f32b4();
    *(float *)(puVar4 + 2) = param_1 * fVar12 + (1.0 - param_1) * fVar13;
    *(float *)((long)puVar4 + 0x14) = fVar14;
    uVar5 = *unaff_x20;
    iVar1 = (int)param_4[1];
    puVar6 = puVar7;
    puVar8 = puVar9;
  } while( true );
}



/* Entry: 10b2028fc; end: 10b20293f;  */

void FUN_10b2028fc(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    FUN_10b2035dc();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 10b202940; end: 10b20299f;  */

long FUN_10b202940(long param_1,long param_2)

{
  if (param_1 != param_2) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      func_0x00010b203e94();
      func_0x000107c303a4();
    }
    else {
      FUN_10b203ae0(param_1);
      if (*(int *)(param_2 + 8) != 0) {
        func_0x00010b203e94();
        func_0x000107c303c4();
      }
    }
  }
  return param_1;
}



/* Entry: 10b2029a0; end: 10b203277;  */

undefined8 * FUN_10b2029a0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 ******ppppppuVar4;
  uint *puVar5;
  undefined1 in_ZR;
  char cVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  long lVar16;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  long *extraout_x10_02;
  ulong extraout_x10_03;
  long *extraout_x10_04;
  ulong extraout_x10_05;
  undefined8 extraout_x11;
  uint *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined **ppuVar21;
  uint *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [48];
  undefined8 uStack_1e0;
  long lStack_1b0;
  undefined1 auStack_1a8 [8];
  long lStack_1a0;
  char cStack_158;
  undefined8 *****pppppuStack_150;
  int iStack_148;
  undefined4 uStack_144;
  byte bStack_139;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char cStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001137f41b8 & 1) == 0) {
    iVar9 = 0x137f41b8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      puVar14 = (undefined8 *)0x40;
      __Znwm();
      *puVar14 = 0x32aaaba7;
      puVar14[2] = 0;
      puVar14[1] = 0;
      puVar14[4] = 0;
      puVar14[3] = 0;
      puVar14[6] = 0;
      puVar14[5] = 0;
      puVar14[7] = 0;
      func_0x00010b203ea0(0x1137f41b0);
    }
  }
  puVar14 = puRam00000001137f41b0;
  __ZNSt3__15mutex4lockEv(puRam00000001137f41b0);
  if ((bRam00000001137f41c8 & 1) == 0) {
    iVar9 = 0x137f41c8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      puVar19 = (undefined8 *)0x8;
      __Znwm();
      *puVar19 = 0;
      func_0x00010b203ea0(0x1137f41c0);
    }
  }
  puVar5 = puRam00000001137f41c0;
  puVar19 = *(undefined8 **)puRam00000001137f41c0;
  if (puVar19 == (undefined8 *)0x0) {
    func_0x000107c30194(&lStack_138,&UNK_10f7389fd,0x13,&UNK_10e568534,0x1a6);
    if (lStack_138 == lStack_130) {
      auStack_1a8[0] = 0;
      cStack_158 = '\0';
    }
    else {
      uStack_d8 = &PTR_FUN_110cfc520;
      ppuStack_d0 = (undefined **)0x0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      puVar19 = &uStack_d8;
      func_0x000107c3034c(puVar19,lStack_138,(int)lStack_130 - (int)lStack_138);
      bVar8 = ((ulong)puVar19 & 1) == 0;
      if (bVar8) {
        auStack_1a8[0] = 0;
      }
      else {
        FUN_10b2039c4(auStack_1a8,&uStack_d8);
      }
      cStack_158 = !bVar8;
      FUN_10b521368(&uStack_d8);
    }
    func_0x000107c27914(&lStack_138);
    in_ZR = cStack_158 == '\x01';
    if ((bool)in_ZR) {
      lVar10 = 0x50;
      __Znwm();
      lVar16 = lVar10;
      FUN_10b2039c4();
      *(uint *)(lVar16 + 0x10) = *(uint *)(lVar16 + 0x10) | 1;
      lStack_1b0 = lVar16;
      if (*(long *)(lVar16 + 0x48) == 0) {
        uVar11 = *(ulong *)(lVar10 + 8);
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        FUN_10b203a2c();
        *(ulong *)(lVar10 + 0x48) = uVar11;
      }
      FUN_10b2034d0(auStack_210);
      puStack_230 = &UNK_10e52b660;
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_218 = 0;
      plVar18 = (long *)(lVar10 + 0x18);
      func_0x00010b203e88();
      plVar13 = plVar18;
      if (!(bool)in_ZR) {
        plVar13 = extraout_x10;
      }
      plVar1 = plVar13 + *(int *)(lVar10 + 0x20);
      puVar17 = puVar5;
      for (; in_ZR = plVar13 == plVar1, !(bool)in_ZR; plVar13 = plVar13 + 1) {
        puVar22 = *(uint **)(*plVar13 + 0x20);
        puVar17 = puVar22 + *(int *)(*plVar13 + 0x18);
        for (; puVar22 != puVar17; puVar22 = puVar22 + 1) {
          uVar3 = *puVar22;
          func_0x00010b203df4();
          plVar18 = (long *)&UNK_10e568530;
          if (extraout_w8 != 0) {
            plVar18 = extraout_x9;
          }
          for (uVar11 = -(extraout_x10_00 >> 0x1f & 1) & 0xfffffffc00000000 |
                        (extraout_x10_00 & 0xffffffff) << 2; uVar11 != 0; uVar11 = uVar11 - 4) {
            uStack_d8 = (undefined **)CONCAT44((int)*plVar18,uVar3);
            func_0x00010b203de8();
            FUN_10b520b68();
            plVar18 = (long *)((long)plVar18 + 4);
          }
        }
      }
      uStack_248 = 0;
      uStack_250 = 0;
      lStack_238 = 0;
      uStack_240 = 0;
      lStack_258 = 0;
      uStack_260 = 0;
      func_0x00010b203e70(*(undefined8 *)(lVar10 + 0x30));
      for (; plVar18 != (long *)0x0; plVar18 = plVar18 + -1) {
        func_0x00010b203b64(&uStack_260,*(undefined8 *)puVar17);
        puVar17 = puVar17 + 2;
      }
      while (lStack_238 != 0) {
        lVar16 = *(long *)(lStack_258 + (uStack_240 / 0xaa) * 8);
        uVar11 = uStack_240 % 0xaa;
        ppuVar21 = &PTR_PTR_110cc6358;
        lVar10 = 0x30;
        do {
          iVar9 = *(int *)(ppuVar21 + 1);
          cVar6 = SBORROW4(iVar9,1);
          cVar7 = iVar9 + -1 < 0;
          if (iVar9 == 1) {
            puVar17 = (uint *)*ppuVar21;
            uVar15 = *(undefined8 *)puVar17;
            func_0x00010b203e08(uVar15,*(undefined8 *)(puVar17 + 2));
            iVar9 = (int)uVar15;
            func_0x000107c27944();
            if (iVar9 != 0) {
              FUN_10b203ce8(&lStack_138);
              func_0x000107c27958(&pppppuStack_150,puVar17 + 8);
              uVar11 = CONCAT44(uStack_144,iStack_148);
              ppppppuVar4 = (undefined8 ******)pppppuStack_150;
              if (-1 < (char)bStack_139) {
                uVar11 = (ulong)bStack_139;
                ppppppuVar4 = &pppppuStack_150;
              }
              plVar13 = &lStack_138;
              func_0x000107c30344(plVar13,ppppppuVar4,uVar11);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_150)
              ;
              if (((ulong)plVar13 & 1) == 0) {
                uStack_d8 = (undefined **)((ulong)uStack_d8 & 0xffffffffffffff00);
                cStack_78 = '\0';
              }
              else {
                func_0x00010b203ec8();
              }
              func_0x00010b203e1c();
              in_ZR = cStack_78 == '\x01';
              if ((bool)in_ZR) {
                func_0x00010b203eb4();
              }
              else {
LAB_10b202db8:
                uStack_268 = 0;
              }
LAB_10b202dbc:
              FUN_10b203d78(&uStack_d8);
              goto LAB_10b202dc4;
            }
          }
          else if (iVar9 == 0) {
            puVar17 = (uint *)*ppuVar21;
            uVar15 = *(undefined8 *)puVar17;
            func_0x00010b203e08(uVar15,*(undefined8 *)(puVar17 + 2));
            iVar9 = (int)uVar15;
            func_0x000107c27944();
            if (iVar9 != 0) {
              func_0x000107c30194(&pppppuStack_150,*(undefined8 *)puVar17,
                                  *(undefined8 *)(puVar17 + 2),*(undefined8 *)(puVar17 + 8),
                                  *(undefined8 *)(puVar17 + 10));
              if ((undefined8 ******)pppppuStack_150 ==
                  (undefined8 ******)CONCAT44(uStack_144,iStack_148)) {
                uStack_d8 = (undefined **)((ulong)uStack_d8 & 0xffffffffffffff00);
                cStack_78 = '\0';
              }
              else {
                FUN_10b203ce8(&lStack_138);
                plVar13 = &lStack_138;
                func_0x000107c3034c(plVar13,pppppuStack_150,iStack_148 - (int)pppppuStack_150);
                if (((ulong)plVar13 & 1) == 0) {
                  uStack_d8 = (undefined **)((ulong)uStack_d8 & 0xffffffffffffff00);
                  cStack_78 = '\0';
                }
                else {
                  func_0x00010b203ec8();
                }
                func_0x00010b203e1c();
              }
              func_0x000107c27914(&pppppuStack_150);
              in_ZR = cStack_78 == '\x01';
              if (!(bool)in_ZR) goto LAB_10b202db8;
              func_0x00010b203eb4();
              goto LAB_10b202dbc;
            }
          }
          lVar10 = lVar10 + -0x10;
          ppuVar21 = ppuVar21 + 2;
        } while (lVar10 != 0);
        func_0x00010b203e08();
        uVar15 = extraout_x11;
        uVar20 = extraout_x10_01;
        if (cVar7 == cVar6) {
          uVar15 = extraout_x8;
          uVar20 = lVar16 + uVar11 * 0x18;
        }
        func_0x000107c30194(&uStack_d8,uVar20,uVar15,0,0);
        in_ZR = ppuStack_d0 == uStack_d8;
        if ((bool)in_ZR) {
LAB_10b202cc0:
          uStack_268 = 0;
        }
        else {
          func_0x00010b203edc();
          FUN_10b203ce8();
          uStack_268 = uVar20;
          func_0x000107c3034c();
          if ((uVar20 & 1) == 0) {
            func_0x00010b203e24();
            goto LAB_10b202cc0;
          }
        }
        func_0x000107c27914(&uStack_d8);
LAB_10b202dc4:
        func_0x00010a5c9344(&uStack_260);
        uVar11 = uStack_268;
        if (uStack_268 != 0) {
          func_0x00010b203e88();
          plVar13 = extraout_x8_00;
          if (!(bool)in_ZR) {
            plVar13 = extraout_x10_02;
          }
          plVar1 = plVar13 + (int)extraout_x8_00[1];
          for (; bVar8 = plVar13 == plVar1, !bVar8; plVar13 = plVar13 + 1) {
            iVar9 = *(int *)(*plVar13 + 0x18);
            if (iVar9 == 0) {
              func_0x00010b203e60();
              FUN_10b520b68(auStack_210);
            }
            else {
              puVar17 = *(uint **)(*plVar13 + 0x20);
              puVar22 = puVar17 + iVar9;
              for (; puVar17 != puVar22; puVar17 = puVar17 + 1) {
                uVar3 = *puVar17;
                plVar18 = (long *)(ulong)uVar3;
                func_0x00010b203df4();
                plVar2 = (long *)&UNK_10e568530;
                if (extraout_w8_00 != 0) {
                  plVar2 = extraout_x9_00;
                }
                for (uVar20 = -(extraout_x10_03 >> 0x1f & 1) & 0xfffffffc00000000 |
                              (extraout_x10_03 & 0xffffffff) << 2; uVar20 != 0; uVar20 = uVar20 - 4)
                {
                  uStack_d8 = (undefined **)CONCAT44((int)*plVar2,uVar3);
                  func_0x00010b203de8();
                  FUN_10b520b68();
                  plVar2 = (long *)((long)plVar2 + 4);
                }
              }
            }
          }
          func_0x00010b203e88();
          plVar13 = extraout_x8_01;
          if (!bVar8) {
            plVar13 = extraout_x10_04;
          }
          plVar1 = plVar13 + (int)extraout_x8_01[1];
          for (; in_ZR = plVar13 == plVar1, !(bool)in_ZR; plVar13 = plVar13 + 1) {
            iVar9 = *(int *)(*plVar13 + 0x18);
            if (iVar9 == 0) {
              func_0x00010b203e60();
              FUN_10b5209e0(auStack_210);
            }
            else {
              puVar17 = *(uint **)(*plVar13 + 0x20);
              puVar22 = puVar17 + iVar9;
              for (; puVar17 != puVar22; puVar17 = puVar17 + 1) {
                uVar3 = *puVar17;
                plVar18 = (long *)(ulong)uVar3;
                func_0x00010b203df4();
                plVar2 = (long *)&UNK_10e568530;
                if (extraout_w8_01 != 0) {
                  plVar2 = extraout_x9_01;
                }
                for (uVar20 = -(extraout_x10_05 >> 0x1f & 1) & 0xfffffffc00000000 |
                              (extraout_x10_05 & 0xffffffff) << 2; uVar20 != 0; uVar20 = uVar20 - 4)
                {
                  uStack_d8 = (undefined **)CONCAT44((int)*plVar2,uVar3);
                  func_0x00010b203de8();
                  func_0x00010b203e60();
                  FUN_10b5209e0();
                  plVar2 = (long *)((long)plVar2 + 4);
                }
              }
            }
          }
          func_0x00010b203e70(*(undefined8 *)(uVar11 + 0x40));
          for (; plVar18 != (long *)0x0; plVar18 = plVar18 + -1) {
            func_0x00010b203b64(&uStack_260,*(undefined8 *)puVar17);
            puVar17 = puVar17 + 2;
          }
        }
        func_0x00010b203e24();
      }
      FUN_10b203284(&lStack_270,auStack_210,&puStack_230);
      func_0x000104c394e8(&uStack_260);
      FUN_10b203678(&puStack_230);
      func_0x00010b203e38();
      func_0x00010b203b34(&lStack_1b0);
      param_2 = lStack_270;
    }
    else {
      param_2 = 0;
    }
    FUN_10b203ac0(auStack_1a8);
    lStack_270 = 0;
    FUN_10b203420(puVar5);
    FUN_10b203af4(&lStack_270);
    puVar19 = *(undefined8 **)puVar5;
    if (puVar19 == (undefined8 *)0x0) {
      func_0x00010b203e40();
      lStack_130 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_e4 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      FUN_10b203278(auStack_210,&lStack_138);
      uStack_1e0 = 0xe1000093a80;
      uStack_d8 = (undefined **)0xf;
      FUN_10b203278(&ppuStack_d0,auStack_210);
      func_0x00010b203630(auStack_1a8,1);
      puVar12 = auStack_1a8;
      uVar11 = 0;
      FUN_10b2036dc();
      if ((uVar11 & 1) != 0) {
        plVar13 = (long *)(lStack_1a0 + (long)puVar12 * 0x68);
        *plVar13 = (long)uStack_d8;
        FUN_10b203278(plVar13 + 1,&ppuStack_d0);
      }
      FUN_10b5204bc(&ppuStack_d0);
      FUN_10b203284(&uStack_d8,&lStack_138,auStack_1a8);
      param_2 = (long)uStack_d8;
      uStack_d8 = (undefined **)0x0;
      FUN_10b203420(puVar5);
      FUN_10b203af4(&uStack_d8);
      puVar19 = *(undefined8 **)puVar5;
      func_0x00010b203eac();
      func_0x00010b203e38();
      FUN_10b5204bc(&lStack_138);
    }
  }
  __ZNSt3__15mutex6unlockEv();
  func_0x00010b203eec(uStack_70);
  if ((bool)in_ZR) {
    return puVar19;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1137f41c8);
  __ZNSt3__15mutex6unlockEv();
  func_0x00010b203ee4();
  puVar14[1] = 0;
  *puVar14 = &PTR_FUN_110cfc430;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b521c34();
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar14 + 2) = uVar3;
  *(undefined4 *)((long)puVar14 + 0x14) = 0;
  if ((uVar3 & 1) == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    FUN_10b521970(0,*(undefined8 *)(param_2 + 0x18));
  }
  puVar14[3] = uVar15;
  if ((uVar3 >> 1 & 1) == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    FUN_10b521a0c(0,*(undefined8 *)(param_2 + 0x20));
  }
  puVar14[4] = uVar15;
  uVar23 = *(undefined8 *)(param_2 + 0x30);
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  uVar25 = *(undefined8 *)(param_2 + 0x40);
  uVar24 = *(undefined8 *)(param_2 + 0x38);
  uVar27 = *(undefined8 *)(param_2 + 0x50);
  uVar26 = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(puVar14 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  puVar14[10] = uVar27;
  puVar14[9] = uVar26;
  puVar14[8] = uVar25;
  puVar14[7] = uVar24;
  puVar14[6] = uVar23;
  puVar14[5] = uVar15;
  return puVar14;
}



/* Entry: 10b203278; end: 10b203283;  */

undefined8 * FUN_10b203278(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110cfc430;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b521c34();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10b521970(0,*(undefined8 *)(param_2 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10b521a0c(0,*(undefined8 *)(param_2 + 0x20));
  }
  param_1[4] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  param_1[10] = uVar7;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 10b203284; end: 10b20341f;  */

void FUN_10b203284(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [96];
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined1 *puStack_48;
  
  lVar4 = 0x80;
  __Znwm();
  FUN_10b2034d0(auStack_c8,param_2);
  FUN_10b203b18(auStack_e8,param_3);
  FUN_10b2034d0(lVar4,auStack_c8);
  puVar7 = auStack_e8;
  FUN_10b203b18(lVar4 + 0x60);
  if ((*(byte *)(lVar4 + 0x10) >> 1 & 1) != 0) {
    lVar5 = lVar4 + 0x60;
    FUN_10b1e72c8();
    lStack_50 = lVar5;
    while (puStack_48 = puVar7, lStack_50 != 0) {
      if (((byte)puVar7[0x18] >> 1 & 1) != 0) {
        fVar8 = *(float *)(*(long *)(puVar7 + 0x28) + 0x40);
        bVar2 = false;
        bVar3 = false;
        if (0.0 < fVar8) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar8)) {
            bVar2 = fVar8 < 1.0;
            bVar3 = false;
          }
        }
        if (bVar2 != bVar3) {
          ppuVar1 = &PTR_PTR_113386a68;
          if (*(undefined ***)(lVar4 + 0x20) != (undefined **)0x0) {
            ppuVar1 = *(undefined ***)(lVar4 + 0x20);
          }
          FUN_10b202774(auStack_68,ppuVar1 + 5,*(long *)(puVar7 + 0x28) + 0x28);
          puVar6 = puVar7 + 8;
          FUN_10b2028fc(puVar6);
          FUN_10b202940(puVar6 + 0x28,auStack_68);
          func_0x00010b203ed4();
          ppuVar1 = &PTR_PTR_113386a68;
          if (*(undefined ***)(puVar7 + 0x28) != (undefined **)0x0) {
            ppuVar1 = *(undefined ***)(puVar7 + 0x28);
          }
          FUN_10b202774(*(undefined4 *)(ppuVar1 + 8));
          puVar7 = puVar7 + 8;
          FUN_10b2028fc(puVar7);
          FUN_10b202940(puVar7 + 0x10,auStack_68);
          func_0x00010b203ed4();
        }
      }
      FUN_10b1e734c(&lStack_50);
      puVar7 = puStack_48;
    }
  }
  *param_1 = lVar4;
  FUN_10b203678(auStack_e8);
  FUN_10b5204bc(auStack_c8);
  return;
}



/* Entry: 10b203420; end: 10b20345b;  */

void FUN_10b203420(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10b203678(lVar1 + 0x60);
    FUN_10b5204bc(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b20345c; end: 10b2034cf;  */

undefined4 * FUN_10b20345c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uStack_38;
  int iStack_34;
  
  puVar1 = param_1 + 0x18;
  puVar2 = &uStack_38;
  uStack_38 = param_2;
  iStack_34 = param_3;
  FUN_10b1cd0e4(puVar1,puVar2);
  if (puVar1 == (undefined4 *)0x0) {
    if (param_3 != 0) {
      iStack_34 = 0;
      puVar1 = param_1 + 0x18;
      puVar2 = &uStack_38;
      uStack_38 = param_2;
      FUN_10b1cd0e4(puVar1,puVar2);
      if (puVar1 != (undefined4 *)0x0) {
        param_1 = puVar2 + 2;
      }
    }
  }
  else {
    param_1 = puVar2 + 2;
  }
  return param_1;
}



/* Entry: 10b2034d0; end: 10b203533;  */

undefined8 * FUN_10b2034d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  ulong uVar2;
  undefined8 in_register_00005008;
  
  puVar1 = param_2;
  func_0x00010b203e40();
  *puVar1 = extraout_x8;
  puVar1[1] = 0;
  func_0x00010b203e50();
  *(undefined8 *)((long)puVar1 + 0x54) = in_register_00005008;
  *(undefined8 *)((long)puVar1 + 0x4c) = param_1;
  if (puVar1 != param_3) {
    uVar2 = param_3[1];
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 == 0) {
      FUN_10b520b9c(param_2);
    }
    else {
      FUN_10b520b68(param_2);
    }
  }
  return param_2;
}



/* Entry: 10b203534; end: 10b2035cb;  */

long FUN_10b203534(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b203e2c();
  FUN_10b2036dc();
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(unaff_x19 + 8) + param_1 * 0x68);
    uVar2 = *unaff_x20;
    puVar1[2] = 0;
    *puVar1 = uVar2;
    puVar1[1] = &PTR_FUN_110cfc430;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    *(undefined8 *)((long)puVar1 + 0x5c) = 0;
    *(undefined8 *)((long)puVar1 + 0x54) = 0;
  }
  return *(long *)(unaff_x19 + 8) + param_1 * 0x68 + 8;
}



/* Entry: 10b2035cc; end: 10b2035db;  */

void FUN_10b2035cc(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b2035dc; end: 10b203677;  */

void FUN_10b2035dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x50);
  }
  *puVar1 = &PTR_FUN_110cfc3e0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_1;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



/* Entry: 10b203678; end: 10b2036db;  */

long * FUN_10b203678(long *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1] + 8;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        FUN_10b5204bc(lVar2);
      }
      lVar2 = lVar2 + 0x68;
      pcVar1 = pcVar1 + 1;
    }
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10b2036dc; end: 10b2038ab;  */

void FUN_10b2036dc(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  ulong *unaff_x19;
  int *unaff_x20;
  byte bVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar8;
  byte bVar14;
  
  func_0x00010b203e2c();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x00010b1e741c(*param_1);
  lVar2 = 0;
  uVar4 = *unaff_x19 >> 0xc ^ param_2 >> 7;
  bVar3 = (byte)param_2 & 0x7f;
  while( true ) {
    uVar4 = uVar4 & unaff_x19[2];
    uVar8 = *(undefined8 *)(*unaff_x19 + uVar4);
    bVar7 = (byte)((ulong)uVar8 >> 8);
    bVar9 = (byte)((ulong)uVar8 >> 0x10);
    bVar10 = (byte)((ulong)uVar8 >> 0x18);
    bVar11 = (byte)((ulong)uVar8 >> 0x20);
    bVar12 = (byte)((ulong)uVar8 >> 0x28);
    bVar13 = (byte)((ulong)uVar8 >> 0x30);
    bVar14 = (byte)((ulong)uVar8 >> 0x38);
    for (uVar5 = CONCAT17(-(bVar14 == bVar3),
                          CONCAT16(-(bVar13 == bVar3),
                                   CONCAT15(-(bVar12 == bVar3),
                                            CONCAT14(-(bVar11 == bVar3),
                                                     CONCAT13(-(bVar10 == bVar3),
                                                              CONCAT12(-(bVar9 == bVar3),
                                                                       CONCAT11(-(bVar7 == bVar3),
                                                                                -((byte)uVar8 ==
                                                                                 bVar3)))))))) &
                 0x8080808080808080; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar1 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      piVar6 = (int *)(unaff_x19[1] +
                      (uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x19[2])
                      * 0x68);
      if (*piVar6 == *unaff_x20 && piVar6[1] == unaff_x20[1]) {
        return;
      }
    }
    bVar7 = NEON_umaxv(CONCAT17(-(bVar14 == 0x80),
                                CONCAT16(-(bVar13 == 0x80),
                                         CONCAT15(-(bVar12 == 0x80),
                                                  CONCAT14(-(bVar11 == 0x80),
                                                           CONCAT13(-(bVar10 == 0x80),
                                                                    CONCAT12(-(bVar9 == 0x80),
                                                                             CONCAT11(-(bVar7 == 
                                                  0x80),-((byte)uVar8 == 0x80)))))))),1);
    if ((bVar7 & 1) != 0) break;
    lVar2 = lVar2 + 8;
    uVar4 = lVar2 + uVar4;
  }
  func_0x00010b2037b0();
  return;
}



/* Entry: 10b2038ac; end: 10b20397f;  */

void FUN_10b2038ac(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  func_0x00010750a888();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      func_0x00010b1e741c();
      plVar3 = param_1;
      func_0x000107c2b954(param_1,lVar5);
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar3) = bVar2;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      FUN_10b203980(lVar9 + (long)plVar3 * 0x68,lVar6);
    }
    lVar6 = lVar6 + 0x68;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10b203980; end: 10b2039af;  */

undefined8 * FUN_10b203980(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 1;
  *param_1 = *param_2;
  FUN_10b2034d0(param_1 + 1,puVar1);
  func_0x00010b521c20();
  FUN_10b5204e8(puVar1);
  return puVar1;
}



/* Entry: 10b2039b0; end: 10b2039c3;  */

ulong FUN_10b2039b0(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297) + (ulong)param_2[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10b2039c4; end: 10b203a2b;  */

undefined8 * FUN_10b2039c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_110cfc520;
  param_1[1] = 0;
  puVar1 = param_1;
  func_0x00010b203e50();
  if (puVar1 != param_2) {
    uVar2 = param_2[1];
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar2 == 0) {
      func_0x00010b5216c8(param_1);
    }
    else {
      FUN_10b521694(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b203a2c; end: 10b203a6b;  */

void FUN_10b203a2c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 in_register_00005008;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b203edc();
  }
  else {
    FUN_10b4d80e0(param_2,0x60);
  }
  func_0x00010b203e40();
  *puVar1 = extraout_x8;
  puVar1[1] = param_2;
  func_0x00010b203e50();
  *(undefined8 *)((long)puVar1 + 0x54) = in_register_00005008;
  *(undefined8 *)((long)puVar1 + 0x4c) = param_1;
  return;
}



/* Entry: 10b203a6c; end: 10b203abf;  */

void FUN_10b203a6c(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10b203ac0; end: 10b203adf;  */

void FUN_10b203ac0(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_10b521368();
  }
  return;
}



/* Entry: 10b203ae0; end: 10b203af3;  */

void FUN_10b203ae0(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b203af4; end: 10b203b17;  */

undefined8 FUN_10b203af4(undefined8 param_1)

{
  FUN_10b203420(param_1,0);
  return param_1;
}



/* Entry: 10b203b18; end: 10b203b33;  */

void FUN_10b203b18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10b203b34; end: 10b203bd3;  */

long * FUN_10b203b34(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10b521368();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b203bd4; end: 10b203c2b;  */

long FUN_10b203bd4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0xaa + -1;
  }
  return lVar1;
}



/* Entry: 10b203c2c; end: 10b203c4f;  */

void FUN_10b203c2c(void)

{
  FUN_10b203c50();
  return;
}



/* Entry: 10b203c50; end: 10b203c6b;  */

long * FUN_10b203c50(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10b203c98();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b203c6c; end: 10b203c97;  */

long * FUN_10b203c6c(long *param_1)

{
  FUN_10b203c98();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b203c98; end: 10b203cbb;  */

void FUN_10b203c98(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b203cbc; end: 10b203ce7;  */

void FUN_10b203cbc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010b203edc();
  FUN_10b203d0c();
  *param_1 = puVar1;
  return;
}



/* Entry: 10b203ce8; end: 10b203cef;  */

void FUN_10b203ce8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cfc4d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 10b203cf0; end: 10b203d0b;  */

void FUN_10b203cf0(long param_1)

{
  FUN_10b203d0c();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 10b203d0c; end: 10b203d77;  */

void FUN_10b203d0c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b203e2c();
  FUN_10b520fd0();
  if (param_1 != unaff_x20) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(unaff_x20 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b203e94();
      func_0x00010b52131c();
    }
    else {
      func_0x00010b203e94();
      FUN_10b5212e8();
    }
  }
  return;
}



/* Entry: 10b203d78; end: 10b203d97;  */

void FUN_10b203d78(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10b520ff8();
  }
  return;
}



/* Entry: 10b203d98; end: 10b203dc7;  */

long * FUN_10b203d98(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10b520ff8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b203dc8; end: 10b203eff;  */

void FUN_10b203dc8(void)

{
  return;
}



/* Entry: 10b203f00; end: 10b203ff7;  */

void FUN_10b203f00(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,byte param_5,
                  byte param_6)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  byte bVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 **ppuVar8;
  ulong *puVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  int *piVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  byte bVar21;
  uint6 uVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  byte bVar28;
  undefined8 *apuStack_188 [3];
  undefined8 uStack_170;
  undefined8 uStack_168;
  int iStack_15c;
  undefined4 uStack_158;
  uint uStack_154;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  code *pcStack_80;
  long lStack_78;
  undefined8 uStack_28;
  
  func_0x00010b20501c();
  uStack_28 = extraout_x8;
  FUN_10b204988(&pcStack_90,param_1);
  lStack_78 = (long)ppuStack_88;
  pcStack_80 = pcStack_90;
  if (ppuStack_88 != (undefined **)0x0) {
    plVar1 = (long *)((long)ppuStack_88 + 0x10);
    do {
      cVar23 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar23 = ExclusiveMonitorsStatus();
      }
    } while (cVar23 != '\0');
  }
  FUN_10b133118(&pcStack_90);
  uStack_a0 = 0;
  uStack_98 = 0;
  uVar12 = *(undefined8 *)(param_1 + 0x80);
  pcStack_90 = FUN_10b2049c4;
  ppuStack_88 = &PTR_FUN_110cc6418;
  uStack_c0 = 0;
  uStack_b8 = 0;
  iVar11 = (int)&pcStack_90;
  func_0x00010bcce9b8(auStack_b0,*(undefined8 *)(param_1 + 0x68));
  func_0x00010b205010(ppuStack_88);
  func_0x000107c27f44(auStack_b0);
  FUN_10b1e66e4(&uStack_c0);
  FUN_10b1e66e4();
  func_0x00010b204ffc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b205010(ppuStack_88);
  FUN_10b1e66e4(&uStack_c0);
  puVar6 = &uStack_a0;
  FUN_10b1e66e4();
  func_0x00010b205060();
  uStack_158 = (undefined4)uVar12;
  uStack_154 = (uint)((ulong)uVar12 >> 0x20);
  puVar9 = puVar6 + 9;
  Hint_Prefetch(*puVar9,0,2,0);
  piVar7 = &iStack_15c;
  iStack_15c = iVar11;
  func_0x00010b204b58(*puVar9);
  lVar18 = 0;
  uVar20 = *puVar9;
  uVar17 = puVar6[0xb];
  bVar5 = (byte)piVar7;
  uVar22 = CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(bVar5,CONCAT12(bVar5,CONCAT11(bVar5,bVar5))))) &
           0x7f7f7f7f7f7f;
  uVar13 = uVar20 >> 0xc ^ (ulong)piVar7 >> 7;
  while( true ) {
    uVar13 = uVar13 & uVar17;
    uVar12 = *(undefined8 *)(uVar20 + uVar13);
    cVar23 = (char)((ulong)uVar12 >> 8);
    cVar24 = (char)((ulong)uVar12 >> 0x10);
    cVar25 = (char)((ulong)uVar12 >> 0x18);
    cVar26 = (char)((ulong)uVar12 >> 0x20);
    cVar27 = (char)((ulong)uVar12 >> 0x28);
    bVar21 = (byte)((ulong)uVar12 >> 0x30);
    bVar28 = (byte)((ulong)uVar12 >> 0x38);
    puVar15 = apuStack_188[0];
    for (uVar16 = CONCAT17(-(bVar28 == (bVar5 & 0x7f)),
                           CONCAT16(-(bVar21 == (bVar5 & 0x7f)),
                                    CONCAT15(-(cVar27 == (char)(uVar22 >> 0x28)),
                                             CONCAT14(-(cVar26 == (char)(uVar22 >> 0x20)),
                                                      CONCAT13(-(cVar25 == (char)(uVar22 >> 0x18)),
                                                               CONCAT12(-(cVar24 ==
                                                                         (char)(uVar22 >> 0x10)),
                                                                        CONCAT11(-(cVar23 ==
                                                                                  (char)(uVar22 >> 8
                                                                                        )),
                                                                                 -((char)uVar12 ==
                                                                                  (char)uVar22))))))
                                   )) & 0x8080808080808080; apuStack_188[0] = puVar15, uVar16 != 0;
        uVar16 = uVar16 - 1 & uVar16) {
      apuStack_188[0] = &uStack_170;
      uVar3 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar19 = (ulong *)(uVar13 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar17);
      piVar14 = (int *)(puVar6[10] + (long)puVar19 * 0x30);
      if (*piVar14 == iStack_15c) {
        uVar2 = piVar14[2];
        if (uVar2 == 0xffffffff || uStack_154 != uVar2) {
          apuStack_188[0] = puVar15;
          if (uStack_154 == uVar2) goto LAB_10b204168;
        }
        else {
          ppuVar8 = apuStack_188;
          (*(code *)(&PTR_DAT_110cc6440)[uVar2])(ppuVar8,piVar14 + 1,&uStack_158);
          puVar15 = apuStack_188[0];
          if (((ulong)ppuVar8 & 1) != 0) goto LAB_10b204168;
        }
      }
      apuStack_188[0] = puVar15;
      puVar15 = apuStack_188[0];
    }
    bVar21 = NEON_umaxv(CONCAT17(-(bVar28 == 0x80),
                                 CONCAT16(-(bVar21 == 0x80),
                                          CONCAT15(-(cVar27 == -0x80),
                                                   CONCAT14(-(cVar26 == -0x80),
                                                            CONCAT13(-(cVar25 == -0x80),
                                                                     CONCAT12(-(cVar24 == -0x80),
                                                                              CONCAT11(-(cVar23 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar21 & 1) != 0) break;
    lVar18 = lVar18 + 8;
    uVar13 = lVar18 + uVar13;
  }
  func_0x00010b204a5c(puVar9,piVar7);
  puVar15 = (undefined8 *)(puVar6[10] + (long)puVar9 * 0x30);
  *puVar15 = CONCAT44(uStack_158,iStack_15c);
  *(uint *)(puVar15 + 1) = uStack_154;
  *(undefined1 *)(puVar15 + 2) = 0;
  *(undefined1 *)(puVar15 + 4) = 0;
  *(undefined2 *)(puVar15 + 5) = 0;
  puVar19 = puVar9;
LAB_10b204168:
  lVar18 = puVar6[10] + (long)puVar19 * 0x30;
  *(byte *)(lVar18 + 0x28) = *(byte *)(lVar18 + 0x28) | param_5;
  *(byte *)(lVar18 + 0x29) = *(byte *)(lVar18 + 0x29) | param_6;
  if (uVar16 == 0) {
    if ((*(byte *)(param_4 + 2) & 1) == 0) {
      if (*(char *)(lVar18 + 0x20) == '\x01') goto LAB_10b204248;
      goto LAB_10b20424c;
    }
    lVar10 = *param_4;
    param_4 = (long *)param_4[1];
  }
  else {
    if ((*(byte *)(lVar18 + 0x20) & 1) == 0) {
      return;
    }
    if ((*(byte *)(param_4 + 2) & 1) == 0) {
LAB_10b204248:
      *(undefined1 *)(lVar18 + 0x20) = 0;
LAB_10b20424c:
      func_0x00010b205070();
      FUN_10b2042a0(puVar6[7],uStack_170,uStack_168);
      goto LAB_10b20425c;
    }
    lVar10 = lVar18 + 0x10;
    func_0x00010b20a898();
  }
  *(long *)(lVar18 + 0x10) = lVar10;
  *(long **)(lVar18 + 0x18) = param_4;
  *(undefined1 *)(lVar18 + 0x20) = 1;
  if ((((long)puVar6[5] < 1) || (lVar10 != 0)) || (param_4 != (long *)puVar6[5])) {
    if (puVar6[0xf] == 0) {
      return;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    puVar6[0x10] = lVar10 + puVar6[0xf] * 1000000;
    if ((*(byte *)(puVar6 + 0x11) & 1) != 0) {
      return;
    }
    *(undefined1 *)(puVar6 + 0x11) = 1;
    FUN_10b203f00(puVar6);
    return;
  }
  *(undefined1 *)(lVar18 + 0x20) = 0;
  func_0x00010b205070();
  FUN_10b2042a0(puVar6[7],uStack_170,uStack_168);
LAB_10b20425c:
  FUN_10b204d2c(&uStack_170);
  return;
}



/* Entry: 10b203ff8; end: 10b20429f;  */

void FUN_10b203ff8(long param_1,int param_2,undefined8 param_3,long *param_4,byte param_5,
                  byte param_6)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  int *piVar4;
  undefined8 **ppuVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  byte bVar16;
  uint6 uVar17;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  undefined8 uVar18;
  byte bVar24;
  undefined8 *apuStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  
  uStack_88 = (undefined4)param_3;
  uStack_84 = (uint)((ulong)param_3 >> 0x20);
  puVar13 = (ulong *)(param_1 + 0x48);
  Hint_Prefetch(*puVar13,0,2,0);
  piVar4 = &iStack_8c;
  iStack_8c = param_2;
  func_0x00010b204b58(*puVar13);
  lVar12 = 0;
  uVar15 = *puVar13;
  uVar11 = *(ulong *)(param_1 + 0x58);
  bVar3 = (byte)piVar4;
  uVar17 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  uVar7 = uVar15 >> 0xc ^ (ulong)piVar4 >> 7;
  while( true ) {
    uVar7 = uVar7 & uVar11;
    uVar18 = *(undefined8 *)(uVar15 + uVar7);
    cVar19 = (char)((ulong)uVar18 >> 8);
    cVar20 = (char)((ulong)uVar18 >> 0x10);
    cVar21 = (char)((ulong)uVar18 >> 0x18);
    cVar22 = (char)((ulong)uVar18 >> 0x20);
    cVar23 = (char)((ulong)uVar18 >> 0x28);
    bVar16 = (byte)((ulong)uVar18 >> 0x30);
    bVar24 = (byte)((ulong)uVar18 >> 0x38);
    puVar9 = apuStack_b8[0];
    for (uVar10 = CONCAT17(-(bVar24 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar16 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                             CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                      CONCAT13(-(cVar21 == (char)(uVar17 >> 0x18)),
                                                               CONCAT12(-(cVar20 ==
                                                                         (char)(uVar17 >> 0x10)),
                                                                        CONCAT11(-(cVar19 ==
                                                                                  (char)(uVar17 >> 8
                                                                                        )),
                                                                                 -((char)uVar18 ==
                                                                                  (char)uVar17))))))
                                   )) & 0x8080808080808080; apuStack_b8[0] = puVar9, uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      apuStack_b8[0] = &uStack_a0;
      uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar14 = (ulong *)(uVar7 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar11);
      piVar8 = (int *)(*(long *)(param_1 + 0x50) + (long)puVar14 * 0x30);
      if (*piVar8 == iStack_8c) {
        uVar1 = piVar8[2];
        if (uVar1 == 0xffffffff || uStack_84 != uVar1) {
          apuStack_b8[0] = puVar9;
          if (uStack_84 == uVar1) goto LAB_10b204168;
        }
        else {
          ppuVar5 = apuStack_b8;
          (*(code *)(&PTR_DAT_110cc6440)[uVar1])(ppuVar5,piVar8 + 1,&uStack_88);
          puVar9 = apuStack_b8[0];
          if (((ulong)ppuVar5 & 1) != 0) goto LAB_10b204168;
        }
      }
      apuStack_b8[0] = puVar9;
      puVar9 = apuStack_b8[0];
    }
    bVar16 = NEON_umaxv(CONCAT17(-(bVar24 == 0x80),
                                 CONCAT16(-(bVar16 == 0x80),
                                          CONCAT15(-(cVar23 == -0x80),
                                                   CONCAT14(-(cVar22 == -0x80),
                                                            CONCAT13(-(cVar21 == -0x80),
                                                                     CONCAT12(-(cVar20 == -0x80),
                                                                              CONCAT11(-(cVar19 ==
                                                                                        -0x80),-((
                                                  char)uVar18 == -0x80)))))))),1);
    if ((bVar16 & 1) != 0) break;
    lVar12 = lVar12 + 8;
    uVar7 = lVar12 + uVar7;
  }
  func_0x00010b204a5c(puVar13,piVar4);
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x50) + (long)puVar13 * 0x30);
  *puVar9 = CONCAT44(uStack_88,iStack_8c);
  *(uint *)(puVar9 + 1) = uStack_84;
  *(undefined1 *)(puVar9 + 2) = 0;
  *(undefined1 *)(puVar9 + 4) = 0;
  *(undefined2 *)(puVar9 + 5) = 0;
  puVar14 = puVar13;
LAB_10b204168:
  lVar12 = *(long *)(param_1 + 0x50) + (long)puVar14 * 0x30;
  *(byte *)(lVar12 + 0x28) = *(byte *)(lVar12 + 0x28) | param_5;
  *(byte *)(lVar12 + 0x29) = *(byte *)(lVar12 + 0x29) | param_6;
  if (uVar10 == 0) {
    if ((*(byte *)(param_4 + 2) & 1) == 0) {
      if (*(char *)(lVar12 + 0x20) == '\x01') goto LAB_10b204248;
      goto LAB_10b20424c;
    }
    lVar6 = *param_4;
    param_4 = (long *)param_4[1];
  }
  else {
    if ((*(byte *)(lVar12 + 0x20) & 1) == 0) {
      return;
    }
    if ((*(byte *)(param_4 + 2) & 1) == 0) {
LAB_10b204248:
      *(undefined1 *)(lVar12 + 0x20) = 0;
LAB_10b20424c:
      func_0x00010b205070();
      FUN_10b2042a0(*(undefined8 *)(param_1 + 0x38),uStack_a0,uStack_98);
      goto LAB_10b20425c;
    }
    lVar6 = lVar12 + 0x10;
    func_0x00010b20a898();
  }
  *(long *)(lVar12 + 0x10) = lVar6;
  *(long **)(lVar12 + 0x18) = param_4;
  *(undefined1 *)(lVar12 + 0x20) = 1;
  if ((((long)*(long **)(param_1 + 0x28) < 1) || (lVar6 != 0)) ||
     (param_4 != *(long **)(param_1 + 0x28))) {
    if (*(long *)(param_1 + 0x78) == 0) {
      return;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(long *)(param_1 + 0x80) = lVar6 + *(long *)(param_1 + 0x78) * 1000000;
    if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x88) = 1;
    FUN_10b203f00(param_1);
    return;
  }
  *(undefined1 *)(lVar12 + 0x20) = 0;
  func_0x00010b205070();
  FUN_10b2042a0(*(undefined8 *)(param_1 + 0x38),uStack_a0,uStack_98);
LAB_10b20425c:
  FUN_10b204d2c(&uStack_a0);
  return;
}



/* Entry: 10b2042a0; end: 10b2042ff;  */

void FUN_10b2042a0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = param_2;
  lStack_28 = param_3;
  (**(code **)(*param_1 + 0x10))(param_1,&uStack_30);
  func_0x000105979594(&uStack_30);
  return;
}



/* Entry: 10b204300; end: 10b2045c3;  */

void FUN_10b204300(long *param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 *param_5,
                  int param_6,int param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  
  if (param_4 >> 0x20 == 0) {
    lVar7 = *(long *)(param_2 + 0x28);
    uVar2 = *param_5;
    uVar3 = param_5[1];
    bVar4 = *(byte *)(param_5 + 2);
    puVar6 = (undefined8 *)0xb0;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_110cc6480;
    puVar1 = puVar6 + 3;
    _bzero(puVar6 + 5,0x88);
    func_0x00010b204d74(puVar1);
    puVar6[3] = &PTR_FUN_110cee2e0;
    puVar6[4] = &PTR_FUN_110cee348;
    *(undefined1 *)(puVar6 + 0x13) = 0;
    *(undefined1 *)(puVar6 + 0x14) = 0;
    *(undefined1 *)(puVar6 + 0x15) = 0;
    puStack_88 = puVar1;
    puStack_80 = puVar6;
    func_0x00010b20b440(param_3);
    func_0x000107c278b8(auStack_78,param_3);
    func_0x000107c27b98(puVar6 + 9,auStack_78);
    func_0x00010b2050dc();
    if (0 < lVar7) {
      puVar6[0x11] = lVar7;
      *(undefined1 *)(puVar6 + 0x12) = 1;
    }
    if ((bVar4 & 1) != 0) {
      puVar6[0xf] = uVar3;
      *(undefined1 *)(puVar6 + 0x10) = 1;
      puVar6[0xd] = uVar2;
      *(undefined1 *)(puVar6 + 0xe) = 1;
    }
    func_0x00010b2050ec();
    if (extraout_x8 != 0) {
      func_0x000107c27b98(puVar6 + 5,param_2 + 0x10);
    }
    puVar6[0x14] = (long)(int)param_4;
    *(undefined1 *)(puVar6 + 0x15) = 1;
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar6;
    puStack_88 = (undefined8 *)0x0;
    puStack_80 = (undefined8 *)0x0;
    FUN_10b204de8(&puStack_88);
  }
  else {
    lVar7 = *(long *)(param_2 + 0x28);
    uVar2 = *param_5;
    uVar3 = param_5[1];
    bVar4 = *(byte *)(param_5 + 2);
    puVar6 = (undefined8 *)0xc8;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_110cc64d0;
    puVar1 = puVar6 + 3;
    _bzero(puVar6 + 5,0xa0);
    func_0x00010b204d74(puVar1);
    puVar6[3] = &PTR_FUN_110cee378;
    puVar6[4] = &PTR_FUN_110cee3e0;
    *(undefined2 *)(puVar6 + 0x13) = 0;
    *(undefined1 *)(puVar6 + 0x14) = 0;
    *(undefined1 *)(puVar6 + 0x15) = 0;
    *(undefined1 *)(puVar6 + 0x16) = 0;
    *(undefined1 *)(puVar6 + 0x17) = 0;
    *(undefined4 *)(puVar6 + 0x18) = 0;
    puStack_88 = puVar1;
    puStack_80 = puVar6;
    func_0x00010b20b440(param_3);
    func_0x000107c278b8(auStack_78,param_3);
    func_0x000107c27b98(puVar6 + 9,auStack_78);
    func_0x00010b2050dc();
    if (0 < lVar7) {
      puVar6[0x11] = lVar7;
      *(undefined1 *)(puVar6 + 0x12) = 1;
    }
    if ((bVar4 & 1) != 0) {
      puVar6[0xf] = uVar3;
      *(undefined1 *)(puVar6 + 0x10) = 1;
      puVar6[0xd] = uVar2;
      *(undefined1 *)(puVar6 + 0xe) = 1;
    }
    func_0x00010b2050ec();
    if (extraout_x8_00 != 0) {
      func_0x000107c27b98(puVar6 + 5,param_2 + 0x10);
    }
    if (param_4 >> 0x20 != 1) {
      func_0x00010563ab98();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10b204580);
      (*pcVar5)();
    }
    puVar6[0x16] = (long)(int)param_4;
    *(undefined1 *)(puVar6 + 0x17) = 1;
    puVar6[0x14] = (long)*(int *)(param_2 + 0x30);
    *(undefined1 *)(puVar6 + 0x15) = 1;
    if (param_6 != 0) {
      *(undefined2 *)(puVar6 + 0x18) = 0x101;
    }
    if (param_7 != 0) {
      *(undefined2 *)((long)puVar6 + 0xc2) = 0x101;
    }
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar6;
    puStack_88 = (undefined8 *)0x0;
    puStack_80 = (undefined8 *)0x0;
    FUN_10b204e40(&puStack_88);
  }
  return;
}



/* Entry: 10b2045c4; end: 10b2046a3;  */

void FUN_10b2045c4(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lStack_70;
  undefined4 *puStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined4 *puStack_38;
  
  puStack_68 = *(undefined4 **)(param_1 + 0x50);
  lStack_70 = *(long *)(param_1 + 0x48);
  FUN_10b204e68(&lStack_70);
  puVar1 = puStack_68;
  lVar2 = lStack_70;
  while (lVar2 != 0) {
    if (*(char *)(puVar1 + 8) == '\x01') {
      puStack_68 = *(undefined4 **)(puVar1 + 6);
      lStack_70 = *(long *)(puVar1 + 4);
      uStack_60 = 1;
      lStack_40 = lVar2;
      puStack_38 = puVar1;
      FUN_10b204300(&uStack_50,param_1,*puVar1,*(undefined8 *)(puVar1 + 1),&lStack_70,
                    *(undefined1 *)(puVar1 + 10),*(undefined1 *)((long)puVar1 + 0x29));
      FUN_10b2042a0(*(undefined8 *)(param_1 + 0x38),uStack_50,uStack_48);
      FUN_10b204d2c(&uStack_50);
      if (*(char *)(puVar1 + 8) == '\x01') {
        *(undefined1 *)(puVar1 + 8) = 0;
      }
    }
    lStack_40 = lVar2 + 1;
    puStack_38 = puVar1 + 0xc;
    FUN_10b204e68(&lStack_40);
    puVar1 = puStack_38;
    lVar2 = lStack_40;
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  return;
}



/* Entry: 10b2046a4; end: 10b204763;  */

undefined8 *
FUN_10b2046a4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *puVar7;
  undefined8 uStack_2e8;
  undefined **ppuStack_2e0;
  undefined8 *puStack_2c8;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined2 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined2 uStack_138;
  undefined8 uStack_118;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_6f;
  undefined8 uStack_67;
  undefined8 uStack_38;
  
  puVar4 = param_4;
  uVar6 = param_3;
  func_0x00010b20501c(param_1,param_1);
  uStack_38 = extraout_x8;
  func_0x00010b2050c4();
  uStack_b0 = (undefined1)param_4[1];
  uStack_af = (undefined7)((ulong)param_4[1] >> 8);
  uStack_b8 = (undefined1)*param_4;
  uStack_b7 = (undefined7)((ulong)*param_4 >> 8);
  uStack_a8 = *(undefined1 *)(param_4 + 2);
  uStack_c0 = param_2;
  uStack_bc = param_3;
  func_0x00010b205104(FUN_10b204ec0);
  uStack_67 = CONCAT17(uStack_a8,uStack_af);
  uStack_6f = CONCAT17(uStack_b0,uStack_b7);
  func_0x00010b205130();
  uVar5 = SUB84(auStack_98,0);
  func_0x00010b2050ac();
  func_0x00010b205010(uStack_90);
  func_0x00010b205068();
  func_0x00010b204ffc(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b205010(uStack_90);
  func_0x00010b205068();
  func_0x00010b205060();
  pcStack_d8 = FUN_10b204764;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010b20501c();
  uStack_118 = extraout_x8_00;
  func_0x00010b2050c4();
  uStack_190 = puVar4[1];
  uStack_198 = *puVar4;
  uStack_188 = *(undefined1 *)(puVar4 + 2);
  uStack_180 = CONCAT11(param_6,(char)param_5);
  uStack_1a0 = uVar5;
  uStack_19c = uVar6;
  func_0x00010b205104(FUN_10b204f30);
  uStack_140 = CONCAT71(uStack_187,uStack_188);
  uStack_148 = uStack_190;
  uStack_138 = uStack_180;
  func_0x00010b205130();
  func_0x00010b2050ac();
  func_0x00010b205010(uStack_170);
  func_0x00010b205068();
  func_0x00010b204ffc(uStack_118);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar1 = param_1;
  func_0x00010b205010(uStack_170);
  func_0x00010b205068();
  func_0x00010b205060();
  pcStack_1b8 = FUN_10b204844;
  puStack_1d0 = auStack_178;
  puStack_1c8 = param_1;
  ppuStack_1c0 = &puStack_e0;
  func_0x00010b20501c();
  uStack_1d8 = extraout_x8_01;
  func_0x00010b2050c4();
  uStack_238 = 0x10b204fac;
  ppuStack_230 = &PTR_DAT_110cc6540;
  uStack_220 = uStack_248;
  uStack_228 = uStack_250;
  uStack_250 = 0;
  uStack_248 = 0;
  func_0x00010b205130();
  puVar7 = &uStack_238;
  func_0x00010b2050ac();
  func_0x00010b205010(ppuStack_230);
  func_0x00010b205068();
  func_0x00010b204ffc(uStack_1d8);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x00010b205010(ppuStack_230);
  func_0x00010b205068();
  func_0x00010b205060();
  pcStack_258 = FUN_10b2048e0;
  puStack_280 = puVar4;
  uStack_278 = param_5;
  puStack_270 = &uStack_238;
  puStack_268 = puVar1;
  ppuStack_260 = &ppuStack_1c0;
  func_0x00010b20501c();
  uStack_288 = extraout_x8_02;
  func_0x00010b2050c4();
  uStack_2e8 = 0x10b204fc4;
  ppuStack_2e0 = &PTR_DAT_110cc6558;
  puStack_2c8 = puVar7;
  func_0x00010b205130();
  puVar4 = &uStack_2e8;
  func_0x00010b2050ac();
  func_0x00010b2050cc();
  func_0x00010b205068();
  func_0x00010b204ffc(uStack_288);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b2050cc();
  func_0x00010b205068();
  func_0x00010b205060();
  lVar3 = puVar4[1];
  *puVar2 = *puVar4;
  if (lVar3 == 0) {
    puVar2[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    puVar2[1] = lVar3;
    if (lVar3 != 0) {
      return puVar2;
    }
  }
  lVar3 = 0;
  func_0x00010527822c();
  puVar4 = *(undefined8 **)(lVar3 + 0x18);
  if (puVar4 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (puVar4 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(lVar3 + 0x10);
      if ((puVar7 != (undefined8 *)0x0) && (*(char *)(puVar7 + 0x11) == '\x01')) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        if ((long)puVar4 < (long)puVar7[0x10]) {
          FUN_10b203f00(puVar7);
          puVar4 = puVar7;
        }
        else {
          FUN_10b2045c4(puVar7);
          puVar4 = puVar7;
        }
      }
    }
  }
  func_0x00010b205068();
  return puVar4;
}



/* Entry: 10b204764; end: 10b204843;  */

undefined8 *
FUN_10b204764(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *puVar4;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  undefined8 *puStack_1f8;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined2 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined8 uStack_48;
  
  func_0x00010b20501c(param_1,param_1);
  uStack_48 = extraout_x8;
  func_0x00010b2050c4();
  uStack_c0 = param_4[1];
  uStack_c8 = *param_4;
  uStack_b8 = *(undefined1 *)(param_4 + 2);
  uStack_b0 = CONCAT11(param_6,(char)param_5);
  uStack_d0 = param_2;
  uStack_cc = param_3;
  func_0x00010b205104(FUN_10b204f30);
  uStack_70 = CONCAT71(uStack_b7,uStack_b8);
  uStack_78 = uStack_c0;
  uStack_68 = uStack_b0;
  func_0x00010b205130();
  func_0x00010b2050ac();
  func_0x00010b205010(uStack_a0);
  func_0x00010b205068();
  func_0x00010b204ffc(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar4 = param_1;
  func_0x00010b205010(uStack_a0);
  func_0x00010b205068();
  func_0x00010b205060();
  pcStack_e8 = FUN_10b204844;
  puStack_100 = auStack_a8;
  puStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010b20501c();
  uStack_108 = extraout_x8_00;
  func_0x00010b2050c4();
  uStack_168 = 0x10b204fac;
  ppuStack_160 = &PTR_DAT_110cc6540;
  uStack_150 = uStack_178;
  uStack_158 = uStack_180;
  uStack_180 = 0;
  uStack_178 = 0;
  func_0x00010b205130();
  puVar3 = &uStack_168;
  func_0x00010b2050ac();
  func_0x00010b205010(ppuStack_160);
  func_0x00010b205068();
  func_0x00010b204ffc(uStack_108);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar1 = puVar4;
  func_0x00010b205010(ppuStack_160);
  func_0x00010b205068();
  func_0x00010b205060();
  pcStack_188 = FUN_10b2048e0;
  puStack_1b0 = param_4;
  uStack_1a8 = param_5;
  puStack_1a0 = &uStack_168;
  puStack_198 = puVar4;
  ppuStack_190 = &puStack_f0;
  func_0x00010b20501c();
  uStack_1b8 = extraout_x8_01;
  func_0x00010b2050c4();
  uStack_218 = 0x10b204fc4;
  ppuStack_210 = &PTR_DAT_110cc6558;
  puStack_1f8 = puVar3;
  func_0x00010b205130();
  puVar3 = &uStack_218;
  func_0x00010b2050ac();
  func_0x00010b2050cc();
  func_0x00010b205068();
  func_0x00010b204ffc(uStack_1b8);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b2050cc();
  func_0x00010b205068();
  func_0x00010b205060();
  lVar2 = puVar3[1];
  *puVar1 = *puVar3;
  if (lVar2 == 0) {
    puVar1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    puVar1[1] = lVar2;
    if (lVar2 != 0) {
      return puVar1;
    }
  }
  lVar2 = 0;
  func_0x00010527822c();
  puVar3 = *(undefined8 **)(lVar2 + 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(lVar2 + 0x10);
      if ((puVar4 != (undefined8 *)0x0) && (*(char *)(puVar4 + 0x11) == '\x01')) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        if ((long)puVar3 < (long)puVar4[0x10]) {
          FUN_10b203f00(puVar4);
          puVar3 = puVar4;
        }
        else {
          FUN_10b2045c4(puVar4);
          puVar3 = puVar4;
        }
      }
    }
  }
  func_0x00010b205068();
  return puVar3;
}



/* Entry: 10b204844; end: 10b2048df;  */

undefined8 * FUN_10b204844(undefined8 *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar3;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined8 *puStack_118;
  undefined8 uStack_d8;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_28;
  
  func_0x00010b20501c(param_1,param_1);
  uStack_28 = extraout_x8;
  func_0x00010b2050c4();
  uStack_88 = 0x10b204fac;
  ppuStack_80 = &PTR_DAT_110cc6540;
  func_0x00010b205130();
  puVar2 = &uStack_88;
  func_0x00010b2050ac();
  func_0x00010b205010(ppuStack_80);
  func_0x00010b205068();
  func_0x00010b204ffc(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b205010(ppuStack_80);
  func_0x00010b205068();
  func_0x00010b205060();
  func_0x00010b20501c();
  uStack_d8 = extraout_x8_00;
  func_0x00010b2050c4();
  uStack_138 = 0x10b204fc4;
  ppuStack_130 = &PTR_DAT_110cc6558;
  puStack_118 = puVar2;
  func_0x00010b205130();
  puVar2 = &uStack_138;
  func_0x00010b2050ac();
  func_0x00010b2050cc();
  func_0x00010b205068();
  func_0x00010b204ffc(uStack_d8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b2050cc();
  func_0x00010b205068();
  func_0x00010b205060();
  lVar1 = puVar2[1];
  *param_1 = *puVar2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  lVar1 = 0;
  func_0x00010527822c();
  puVar2 = *(undefined8 **)(lVar1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(lVar1 + 0x10);
      if ((puVar3 != (undefined8 *)0x0) && (*(char *)(puVar3 + 0x11) == '\x01')) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        if ((long)puVar2 < (long)puVar3[0x10]) {
          FUN_10b203f00(puVar3);
          puVar2 = puVar3;
        }
        else {
          FUN_10b2045c4(puVar3);
          puVar2 = puVar3;
        }
      }
    }
  }
  func_0x00010b205068();
  return puVar2;
}



/* Entry: 10b2048e0; end: 10b204987;  */

undefined8 * FUN_10b2048e0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *puVar3;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_78;
  undefined8 uStack_38;
  
  func_0x00010b20501c(param_1,param_1);
  uStack_38 = extraout_x8;
  func_0x00010b2050c4();
  uStack_98 = 0x10b204fc4;
  ppuStack_90 = &PTR_DAT_110cc6558;
  uStack_78 = param_2;
  func_0x00010b205130();
  puVar2 = &uStack_98;
  func_0x00010b2050ac();
  func_0x00010b2050cc();
  func_0x00010b205068();
  func_0x00010b204ffc(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b2050cc();
  func_0x00010b205068();
  func_0x00010b205060();
  lVar1 = puVar2[1];
  *param_1 = *puVar2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  lVar1 = 0;
  func_0x00010527822c();
  puVar2 = *(undefined8 **)(lVar1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(lVar1 + 0x10);
      if ((puVar3 != (undefined8 *)0x0) && (*(char *)(puVar3 + 0x11) == '\x01')) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        if ((long)puVar2 < (long)puVar3[0x10]) {
          FUN_10b203f00(puVar3);
          puVar2 = puVar3;
        }
        else {
          FUN_10b2045c4(puVar3);
          puVar2 = puVar3;
        }
      }
    }
  }
  func_0x00010b205068();
  return puVar2;
}



/* Entry: 10b204988; end: 10b2049c3;  */

undefined8 * FUN_10b204988(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  lVar1 = 0;
  func_0x00010527822c();
  puVar2 = *(undefined8 **)(lVar1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(lVar1 + 0x10);
      if ((puVar3 != (undefined8 *)0x0) && (*(char *)(puVar3 + 0x11) == '\x01')) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        if ((long)puVar2 < (long)puVar3[0x10]) {
          FUN_10b203f00(puVar3);
          puVar2 = puVar3;
        }
        else {
          FUN_10b2045c4(puVar3);
          puVar2 = puVar3;
        }
      }
    }
  }
  func_0x00010b205068();
  return puVar2;
}



/* Entry: 10b2049c4; end: 10b204a47;  */

void FUN_10b2049c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x88) == '\x01')) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        if (lVar1 < *(long *)(lVar2 + 0x80)) {
          FUN_10b203f00(lVar2);
        }
        else {
          FUN_10b2045c4(lVar2);
        }
      }
    }
  }
  func_0x00010b205068();
  return;
}



/* Entry: 10b204a48; end: 10b204a5b;  */

void FUN_10b204a48(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010b1eb954();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b204a5c; end: 10b204c03;  */

uint * FUN_10b204a5c(uint *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  uint *puVar5;
  undefined8 ****ppppuVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  
  puVar5 = param_1;
  func_0x00010b20501c();
  uStack_28 = extraout_x8;
  func_0x000107c2b954();
  lVar7 = *(long *)param_1;
  if ((*(long *)(lVar7 + -8) == 0) && (*(char *)(lVar7 + (long)puVar5) != -2)) {
    uVar8 = *(ulong *)(param_1 + 4);
    if ((uVar8 < 9) || (uVar8 * 0x19 < (ulong)(*(long *)(param_1 + 6) << 5))) {
      FUN_10b204c34(param_1,uVar8 << 1 | 1);
    }
    else {
      func_0x00010ae6c914(param_1,&UNK_110cc6450,auStack_58);
    }
    puVar5 = param_1;
    func_0x000107c2b954(param_1,param_2);
    lVar7 = *(long *)param_1;
  }
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  bVar4 = *(char *)(lVar7 + (long)puVar5) == -0x80;
  *(ulong *)(lVar7 + -8) = *(long *)(lVar7 + -8) - (ulong)bVar4;
  bVar1 = (byte)param_2 & 0x7f;
  uVar8 = *(ulong *)(param_1 + 4);
  *(byte *)(lVar7 + (long)puVar5) = bVar1;
  *(byte *)(lVar7 + (uVar8 & (long)puVar5 - 7U) + (uVar8 & 7)) = bVar1;
  func_0x00010b204ffc(uStack_28);
  if (!bVar4) {
    ___stack_chk_fail();
    uStack_68 = 0x10b204b58;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*puVar5;
    pppuStack_90 = (undefined8 ***)
                   (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
                   ((long)&PTR_LOOP_110c8acd8 + (ulong)*puVar5) * -0x622015f714c7d297);
    if (puVar5[2] == 0xffffffff) {
      uVar8 = 0xffffffffffffffff;
      ppppuVar6 = (undefined8 ****)pppuStack_90;
    }
    else {
      pppuStack_98 = &pppuStack_90;
      pppuStack_88 = &pppuStack_98;
      ppppuVar6 = &pppuStack_88;
      uStack_80 = param_2;
      puStack_78 = param_1;
      puStack_70 = &stack0xfffffffffffffff0;
      (*(code *)(&PTR_FUN_110cc6430)[puVar5[2]])(ppppuVar6,puVar5 + 1);
      uVar8 = (ulong)puVar5[2];
      if (puVar5[2] == 0xffffffff) {
        uVar8 = 0xffffffffffffffff;
      }
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar8 + (long)ppppuVar6;
    return (uint *)(SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
                   (uVar8 + (long)ppppuVar6) * -0x622015f714c7d297);
  }
  return puVar5;
}



/* Entry: 10b204c04; end: 10b204c33;  */

ulong FUN_10b204c04(undefined8 *param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = **(long **)*param_1 + (ulong)*param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         (**(long **)*param_1 + (ulong)*param_2) * -0x622015f714c7d297;
}



/* Entry: 10b204c34; end: 10b204d0f;  */

void FUN_10b204c34(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar1 = *param_1;
  puVar7 = (undefined8 *)param_1[1];
  lVar8 = param_1[2];
  param_1[2] = param_2;
  func_0x000107c2b154();
  lVar10 = param_1[1];
  for (lVar9 = 0; lVar8 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar1 + lVar9)) {
      puVar4 = puVar7;
      func_0x00010b204b58();
      plVar3 = param_1;
      func_0x000107c2b954(param_1,puVar4);
      bVar2 = (byte)puVar4 & 0x7f;
      uVar5 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + (long)plVar3) = bVar2;
      *(byte *)(lVar6 + ((long)plVar3 - 7U & uVar5) + (uVar5 & 7)) = bVar2;
      puVar4 = (undefined8 *)(lVar10 + (long)plVar3 * 0x30);
      uVar14 = puVar7[3];
      uVar13 = puVar7[2];
      uVar12 = puVar7[5];
      uVar11 = puVar7[4];
      uVar15 = *puVar7;
      puVar4[1] = puVar7[1];
      *puVar4 = uVar15;
      puVar4[3] = uVar14;
      puVar4[2] = uVar13;
      puVar4[5] = uVar12;
      puVar4[4] = uVar11;
    }
    puVar7 = puVar7 + 6;
  }
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10b204d10; end: 10b204d2b;  */

ulong FUN_10b204d10(undefined8 param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 ***pppuVar3;
  ulong uVar4;
  undefined8 **ppuStack_38;
  undefined8 **ppuStack_30;
  undefined8 **ppuStack_28;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  ppuStack_30 = (undefined8 **)
                (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
                ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297);
  if (param_2[2] == 0xffffffff) {
    uVar4 = 0xffffffffffffffff;
    pppuVar3 = (undefined8 ***)ppuStack_30;
  }
  else {
    ppuStack_38 = &ppuStack_30;
    ppuStack_28 = &ppuStack_38;
    pppuVar3 = &ppuStack_28;
    (*(code *)(&PTR_FUN_110cc6430)[param_2[2]])(pppuVar3,param_2 + 1);
    uVar4 = (ulong)param_2[2];
    if (param_2[2] == 0xffffffff) {
      uVar4 = 0xffffffffffffffff;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4 + (long)pppuVar3;
  return SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
         (uVar4 + (long)pppuVar3) * -0x622015f714c7d297;
}



/* Entry: 10b204d2c; end: 10b204d53;  */

long FUN_10b204d2c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b204d54; end: 10b204d57;  */

void FUN_10b204d54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6480;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b204d58; end: 10b204d6b;  */

void FUN_10b204d58(void)

{
  func_0x00010b204dd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b204d6c; end: 10b204de7;  */

void FUN_10b204d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b20512c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10b204de8; end: 10b204e0f;  */

long FUN_10b204de8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b204e10; end: 10b204e13;  */

void FUN_10b204e10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc64d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b204e14; end: 10b204e27;  */

void FUN_10b204e14(void)

{
  func_0x00010b204e30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b204e28; end: 10b204e3f;  */

void FUN_10b204e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b20512c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10b204e40; end: 10b204e67;  */

long FUN_10b204e40(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b204e68; end: 10b204ebf;  */

void FUN_10b204e68(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x30;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10b204ec0; end: 10b204eff;  */

void FUN_10b204ec0(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x38);
  FUN_10b203ff8(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),
                *(undefined4 *)(param_1 + 0x24),&uStack_30,0,0);
  return;
}



/* Entry: 10b204f00; end: 10b204f2f;  */

void FUN_10b204f00(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b204f30; end: 10b204f73;  */

void FUN_10b204f30(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x38);
  FUN_10b203ff8(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),
                (ulong)*(uint *)(param_1 + 0x24) | 0x100000000,&uStack_30,
                *(undefined1 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x41));
  return;
}



/* Entry: 10b204f74; end: 10b20513b;  */

void FUN_10b204f74(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b20513c; end: 10b20549b;  */

void FUN_10b20513c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar5;
  long extraout_x8_05;
  long extraout_x8_06;
  long *plVar6;
  ulong uVar7;
  long *aplStack_118 [2];
  char cStack_108;
  char cStack_100;
  undefined1 auStack_f8 [24];
  char cStack_e0;
  undefined1 auStack_d8 [24];
  char cStack_c0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  long *plStack_90;
  char cStack_78;
  undefined1 auStack_70 [16];
  long *plStack_60;
  char cStack_48;
  
  plVar6 = (long *)*param_2;
  if ((plVar6 != (long *)0x0) &&
     (plVar4 = plVar6, ___dynamic_cast(plVar6,&PTR_DAT_110874d60,&PTR_DAT_110cc7800,0),
     plVar4 != (long *)0x0)) {
    if (plVar4 + 1 == param_1) {
      return;
    }
    FUN_10b25154c();
    uVar7 = param_1[1];
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    FUN_10b251ac4(param_1 + 3,plVar4 + 4);
    plVar6 = plVar4 + 7;
    FUN_10b251ac4(param_1 + 6);
    func_0x00010b251f84(plVar4[10]);
    lVar5 = extraout_x8_04;
    if (extraout_x8_04 < 0) {
      lVar5 = plVar6[1];
    }
    if (lVar5 != 0) {
      if ((param_1[1] & 1U) != 0) {
        func_0x00010b251f78();
      }
      func_0x000107c30248(param_1 + 9);
    }
    func_0x00010b251f84(plVar4[0xb]);
    lVar5 = extraout_x8_05;
    if (extraout_x8_05 < 0) {
      lVar5 = plVar6[1];
    }
    if (lVar5 != 0) {
      if ((param_1[1] & 1U) != 0) {
        func_0x00010b251f78();
      }
      func_0x000107c30248(param_1 + 10);
    }
    func_0x00010b251f84(plVar4[0xc]);
    lVar5 = extraout_x8_06;
    if (extraout_x8_06 < 0) {
      lVar5 = plVar6[1];
    }
    if (lVar5 != 0) {
      if ((param_1[1] & 1U) != 0) {
        func_0x00010b251f78();
      }
      func_0x000107c30248(param_1 + 0xb);
    }
    uVar1 = *(uint *)(plVar4 + 3);
    if ((uVar1 & 1) != 0) {
      if (param_1[0xc] == 0) {
        FUN_10b251e4c(uVar7,plVar4[0xd]);
        param_1[0xc] = uVar7;
      }
      else {
        FUN_10b2512e8();
      }
    }
    if ((int)plVar4[0xe] != 0) {
      *(int *)(param_1 + 0xd) = (int)plVar4[0xe];
    }
    if (*(int *)((long)plVar4 + 0x74) != 0) {
      *(int *)((long)param_1 + 0x6c) = *(int *)((long)plVar4 + 0x74);
    }
    if ((char)plVar4[0xf] == '\x01') {
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    if (*(char *)((long)plVar4 + 0x79) == '\x01') {
      *(undefined1 *)((long)param_1 + 0x71) = 1;
    }
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | uVar1;
    if ((plVar4[2] & 1U) == 0) {
      return;
    }
    if ((param_1[1] & 1U) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  (**(code **)(*plVar6 + 0x10))(aplStack_118,plVar6);
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b206d1c();
  }
  plVar6 = param_1 + 9;
  func_0x000107c3024c(plVar6,aplStack_118);
  uVar3 = SUB84(plVar6,0);
  func_0x00010b206d14();
  func_0x00010b206d40();
  (**(code **)(extraout_x8 + 0x18))();
  *(char *)(param_1 + 0xe) = (char)uVar3;
  func_0x00010b206d40();
  (**(code **)(extraout_x8_00 + 0x20))();
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  func_0x00010b206d40();
  (**(code **)(extraout_x8_01 + 0x30))(auStack_70);
  plVar6 = plStack_60;
  if (cStack_48 == '\x01') {
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      plVar4 = param_1 + 3;
      FUN_10b205fc0();
      if ((plVar4[1] & 1U) != 0) {
        func_0x00010b206d1c();
      }
      func_0x00010b206e10();
      if ((plVar4[1] & 1U) != 0) {
        func_0x00010b206d1c();
      }
      func_0x00010b206e04();
    }
  }
  func_0x00010b206d40();
  func_0x00010b206dd4();
  if (((cStack_108 != '\x01') || (aplStack_118[0] == (long *)0x0)) ||
     (plVar6 = aplStack_118[0], (**(code **)(*aplStack_118[0] + 0x18))(), plVar6 == (long *)0x0))
  goto LAB_10b2052d4;
  if (aplStack_118[0] == (long *)0x0) {
    plVar6 = (long *)0x0;
LAB_10b2052b4:
    aplStack_118[0] = (long *)0x0;
  }
  else {
    plVar6 = aplStack_118[0];
    (**(code **)(*aplStack_118[0] + 0x10))();
    if (aplStack_118[0] == (long *)0x0) goto LAB_10b2052b4;
    (**(code **)(*aplStack_118[0] + 0x18))();
  }
  uVar7 = param_1[1];
  if ((uVar7 & 1) != 0) {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
  }
  func_0x00010b206ad0(param_1 + 0xb,plVar6,aplStack_118[0],uVar7);
LAB_10b2052d4:
  func_0x000107c27f18(aplStack_118);
  func_0x00010b206d40();
  (**(code **)(extraout_x8_02 + 0x58))(auStack_a0);
  plVar6 = plStack_90;
  if (cStack_78 == '\x01') {
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      plVar4 = param_1 + 6;
      FUN_10b205fc0();
      if ((plVar4[1] & 1U) != 0) {
        func_0x00010b206d1c();
      }
      func_0x00010b206e10();
      if ((plVar4[1] & 1U) != 0) {
        func_0x00010b206d1c();
      }
      func_0x00010b206e04();
    }
  }
  func_0x00010b206d40();
  func_0x00010b206dd4();
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b206d1c();
  }
  plVar6 = param_1 + 10;
  func_0x000107c3024c(plVar6,aplStack_118);
  uVar2 = SUB81(plVar6,0);
  func_0x00010b206d14();
  func_0x00010b206d40();
  (**(code **)(extraout_x8_03 + 0x68))();
  *(undefined1 *)((long)param_1 + 0x71) = uVar2;
  func_0x00010b206d40();
  func_0x00010b206dd4();
  func_0x00010b1185d0();
  if (cStack_100 == '\x01') {
    if ((param_1[1] & 1U) != 0) {
      func_0x00010b206d1c();
    }
    func_0x000107c30248(param_1 + 2,aplStack_118);
  }
  if (cStack_e0 == '\x01') {
    if ((param_1[1] & 1U) != 0) {
      func_0x00010b206d1c();
    }
    func_0x000107c30248(param_1 + 3,auStack_f8);
  }
  if (cStack_c0 == '\x01') {
    if ((param_1[1] & 1U) != 0) {
      func_0x00010b206d1c();
    }
    func_0x000107c30248(param_1 + 4,auStack_d8);
  }
  param_1[5] = lStack_a8;
  func_0x0001052bb09c(aplStack_118);
  func_0x000107c27bb0(auStack_a0);
  func_0x000107c27bb0(auStack_70);
  return;
}



/* Entry: 10b20549c; end: 10b20559f;  */

byte FUN_10b20549c(void)

{
  long extraout_x8;
  
  func_0x00010b206d0c();
  func_0x00010b206d38();
  func_0x00010b206cec();
  return *(byte *)(extraout_x8 + 0x3c) ^ 1;
}



/* Entry: 10b2055a0; end: 10b20565f;  */

void FUN_10b2055a0(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [260];
  undefined4 uStack_54;
  undefined1 *puStack_50;
  long lStack_48;
  
  FUN_10b205660(&UNK_10e565f1d,param_2);
  func_0x000105680760(auStack_170);
  puStack_50 = auStack_160;
  lStack_48 = *param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lStack_48 = (long)param_3;
  }
  puVar1 = (undefined4 *)param_2[1];
  for (puVar2 = (undefined4 *)*param_2; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    uStack_54 = *puVar2;
    FUN_10b206898(&puStack_50,&uStack_54);
  }
  func_0x000105491b64(param_1,auStack_158);
  func_0x000105673d7c(auStack_170);
  return;
}



/* Entry: 10b205660; end: 10b205813;  */

undefined8 FUN_10b205660(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uVar1 = param_2[1];
  FUN_10b206020(*param_2,uVar1,&uStack_21);
  return uVar1;
}



/* Entry: 10b205814; end: 10b20588f;  */

bool FUN_10b205814(short *param_1,ulong param_2)

{
  if (param_2 < 2) {
    return true;
  }
  return *param_1 == 0x4b50;
}


