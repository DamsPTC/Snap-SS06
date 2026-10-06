/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1e3c3c; end: 10b1e3c53;  */

void FUN_10b1e3c3c(long *param_1,long param_2)

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



/* Entry: 10b1e3c54; end: 10b1e3d3f;  */

void FUN_10b1e3c54(long *param_1,undefined *param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x19;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar6 = param_2;
  func_0x00010b1eae28();
  func_0x000107c2b954();
  lVar7 = *unaff_x19;
  if ((*(long *)(lVar7 + -8) == 0) && (*(char *)(lVar7 + (long)param_1) != -2)) {
    uVar8 = unaff_x19[2];
    param_1 = unaff_x19;
    if ((uVar8 < 9) || (uVar8 * 0x19 < (ulong)(unaff_x19[3] << 5))) {
      puVar6 = (undefined *)(uVar8 << 1 | 1);
      FUN_10b1e3d40();
    }
    else {
      puVar6 = &UNK_110cc4050;
      func_0x00010ae6c914();
    }
    func_0x00010b1ec2e0();
    func_0x000107c2b954();
    lVar7 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  bVar3 = *(char *)(lVar7 + (long)param_1) == -0x80;
  *(ulong *)(lVar7 + -8) = *(long *)(lVar7 + -8) - (ulong)bVar3;
  bVar2 = (byte)param_2 & 0x7f;
  uVar8 = unaff_x19[2];
  *(byte *)(lVar7 + (long)param_1) = bVar2;
  *(byte *)(lVar7 + (uVar8 & (long)param_1 - 7U) + (uVar8 & 7)) = bVar2;
  func_0x00010b1eaddc(extraout_x8);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1ee670();
  lVar1 = *param_1;
  puVar10 = (undefined8 *)param_1[1];
  lVar11 = param_1[2];
  param_1[2] = (long)puVar6;
  func_0x000107c284a8();
  lVar12 = param_1[1];
  for (lVar7 = 0; lVar11 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      puVar4 = puVar10;
      FUN_10b129684();
      puVar5 = puVar4;
      func_0x00010b1ec7a0();
      func_0x000107c2b954();
      bVar2 = (byte)puVar4 & 0x7f;
      uVar8 = param_1[2];
      lVar9 = *param_1;
      *(byte *)(lVar9 + (long)puVar5) = bVar2;
      *(byte *)(lVar9 + ((long)puVar5 - 7U & uVar8) + (uVar8 & 7)) = bVar2;
      puVar4 = (undefined8 *)(lVar12 + (long)puVar5 * 0x20);
      uVar13 = *puVar10;
      uVar15 = puVar10[3];
      uVar14 = puVar10[2];
      puVar4[1] = puVar10[1];
      *puVar4 = uVar13;
      puVar4[3] = uVar15;
      puVar4[2] = uVar14;
    }
    puVar10 = puVar10 + 4;
  }
  if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10b1e3d40; end: 10b1e3df7;  */

void FUN_10b1e3d40(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
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
  
  func_0x00010b1ee670();
  lVar1 = *param_1;
  puVar7 = (undefined8 *)param_1[1];
  lVar8 = param_1[2];
  param_1[2] = param_2;
  func_0x000107c284a8();
  lVar10 = param_1[1];
  for (lVar9 = 0; lVar8 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar1 + lVar9)) {
      puVar3 = puVar7;
      FUN_10b129684();
      puVar4 = puVar3;
      func_0x00010b1ec7a0();
      func_0x000107c2b954();
      bVar2 = (byte)puVar3 & 0x7f;
      uVar5 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + (long)puVar4) = bVar2;
      *(byte *)(lVar6 + ((long)puVar4 - 7U & uVar5) + (uVar5 & 7)) = bVar2;
      puVar3 = (undefined8 *)(lVar10 + (long)puVar4 * 0x20);
      uVar11 = *puVar7;
      uVar13 = puVar7[3];
      uVar12 = puVar7[2];
      puVar3[1] = puVar7[1];
      *puVar3 = uVar11;
      puVar3[3] = uVar13;
      puVar3[2] = uVar12;
    }
    puVar7 = puVar7 + 4;
  }
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10b1e3df8; end: 10b1e3e5f;  */

ulong FUN_10b1e3df8(undefined8 param_1,uint *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong extraout_x8;
  ulong extraout_x10;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  uVar3 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297;
  lVar1 = *(long *)(param_2 + 4);
  func_0x000100062d4c(uVar3,*(undefined8 *)(param_2 + 2));
  func_0x000100061c28(uVar3 + lVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 10b1e3e60; end: 10b1e3ed3;  */

undefined8 FUN_10b1e3e60(undefined8 param_1,ulong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  uVar1 = param_2[1] <= *param_2;
  uVar2 = *param_2 == param_2[1];
  if ((bool)uVar2) {
    uVar3 = 1;
  }
  else {
    func_0x00010b1eb648();
    FUN_10b1371b0();
    func_0x00010b1eb784();
    if (!(bool)uVar1 || (bool)uVar2) {
      func_0x000100063660();
      return unaff_x19;
    }
    func_0x00010b1edbbc();
    uStack_28 = param_1;
    func_0x00010b1ecbf8();
    func_0x00010b1eb5b4(auStack_30,0xd4,auStack_48);
    func_0x00010b1eb750();
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10b1e3ed4; end: 10b1e3f1b;  */

void FUN_10b1e3ed4(void)

{
  long unaff_x19;
  
  func_0x00010b1ecc74();
  func_0x00010b1d5dec();
  func_0x000107c29c20(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b1e3f1c; end: 10b1e3f67;  */

void FUN_10b1e3f1c(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  long extraout_x10;
  uint extraout_w11;
  int extraout_w12;
  
  func_0x00010b1eb388();
  if (extraout_x10 != 0) {
    do {
      func_0x00010b1eb0ac();
    } while (extraout_w12 != 0);
  }
  func_0x00010b1eb02c();
  lVar1 = extraout_x8;
  pcVar2 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    func_0x00010b1ec364();
    lVar1 = extraout_x8_00;
    pcVar2 = extraout_x9_00;
  }
  (*pcVar2)(param_1,*(undefined8 *)(lVar1 + 8));
  func_0x00010b1eb728();
  return;
}



/* Entry: 10b1e3f68; end: 10b1e3f77;  */

void FUN_10b1e3f68(void)

{
  return;
}



/* Entry: 10b1e3f78; end: 10b1e3fd7;  */

void FUN_10b1e3f78(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  
  func_0x00010b1eb114();
  if (param_1 != 0) {
    do {
      func_0x00010b1eb104();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b1eb134();
    }
  }
  return;
}



/* Entry: 10b1e3fd8; end: 10b1e3feb;  */

void FUN_10b1e3fd8(void)

{
  func_0x00010b1e3fac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e3fec; end: 10b1e418f;  */

void FUN_10b1e3fec(long param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  byte *pbVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_128 [15];
  byte bStack_119;
  byte abStack_118 [88];
  undefined4 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 uStack_48;
  
  func_0x00010b1eae28();
  uStack_48 = extraout_x8;
  if (*(long *)(param_1 + 0xa8) != 0) {
    __ZNSt3__117__assoc_sub_state4waitEv();
  }
  lStack_80 = unaff_x19 + 0xb0;
  uStack_98 = *(undefined8 *)(unaff_x19 + 0xa0);
  uStack_a0 = *(undefined8 *)(unaff_x19 + 0x98);
  auStack_b8[0] = 0;
  uStack_a8 = 0;
  puStack_88 = &uStack_a0;
  pcStack_78 = FUN_10b1e3f1c;
  ppuStack_70 = &PTR_FUN_110cc4070;
  ppuStack_68 = &puStack_88;
  func_0x00010b1ec284(*(undefined8 *)(unaff_x19 + 0x90));
  func_0x00010b1ebe34();
  func_0x00010b1eb08c(ppuStack_70);
  func_0x00010b1ebed4();
  uStack_c0 = 0;
  pbVar2 = abStack_118;
  func_0x00010b1dd05c();
  bVar1 = *pbVar2;
  FUN_10b1dd074(abStack_118);
  FUN_10b1b78d0(auStack_b8);
  bStack_119 = bVar1 & 1;
  pbVar2 = &bStack_119;
  func_0x000108820be4();
  while( true ) {
    func_0x00010b1eaddc(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)pbVar2 == 0) break;
    FUN_10b1dd074(abStack_118);
    FUN_10b1b78d0();
    func_0x00010b1eb748();
    __ZSt17current_exceptionv(auStack_128);
    func_0x00010b1eb918();
    __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr();
    func_0x00010b1ebf94();
    ___cxa_end_catch();
  }
  func_0x00010b1eb598();
  func_0x00010b1ebbe8();
  func_0x00010b1ecc74();
  func_0x00010b1d5e1c();
  func_0x000107c29c20(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b1e4190; end: 10b1e41d7;  */

void FUN_10b1e4190(void)

{
  long unaff_x19;
  
  func_0x00010b1ecc74();
  func_0x00010b1d5e1c();
  func_0x000107c29c20(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b1e41d8; end: 10b1e42c7;  */

byte * FUN_10b1e41d8(byte *param_1)

{
  undefined1 in_ZR;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar1;
  long extraout_x10;
  uint extraout_w11;
  int extraout_w12;
  uint uVar2;
  int unaff_w20;
  undefined1 auStack_78 [16];
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined1 *puStack_58;
  undefined8 uStack_38;
  
  func_0x00010b1eaf00();
  func_0x00010b1ed62c();
  pcStack_68 = FUN_10b1e42c8;
  ppuStack_60 = &PTR_FUN_110cc40d0;
  puStack_58 = auStack_78;
  func_0x00010b1ec284();
  func_0x00010b1ebe34();
  func_0x00010b1eafb4(ppuStack_60);
  func_0x00010b1ec6fc();
  do {
    func_0x00010b1ed360();
    uVar2 = (uint)*param_1;
    while( true ) {
      func_0x00010b1ebffc();
      func_0x00010b1ebcc4();
      func_0x00010b1eaddc(uStack_38);
      if ((bool)in_ZR) {
        return (byte *)(ulong)(uVar2 & 1);
      }
      ___stack_chk_fail();
      func_0x00010b1eb5a0();
      FUN_10b1dd074();
      func_0x00010b1ebcc4();
      do {
        func_0x00010b1eb590();
        func_0x00010b1eb648();
      } while (unaff_w20 == 0);
      func_0x00010b1eafb4(ppuStack_60);
      in_ZR = unaff_w20 == 2;
      if (!(bool)in_ZR) {
        func_0x00010b1eb8dc();
        func_0x00010b1eb388();
        if (extraout_x10 != 0) {
          do {
            func_0x00010b1eb0ac();
          } while (extraout_w12 != 0);
        }
        func_0x00010b1eb02c();
        pcVar1 = extraout_x9;
        if ((extraout_w11 & 1) != 0) {
          func_0x00010b1ec364();
          pcVar1 = extraout_x9_00;
        }
        (*pcVar1)();
        func_0x00010b1eb728();
        return param_1;
      }
      func_0x00010b1ebea4();
      func_0x00010b1ed340();
      ___cxa_end_catch();
      func_0x00010b1ec868();
      if (!(bool)in_ZR) break;
      func_0x00010b1ed330();
      func_0x00010b1ec868();
      if (!(bool)in_ZR) break;
      uVar2 = 0;
    }
  } while( true );
}



/* Entry: 10b1e42c8; end: 10b1e4313;  */

void FUN_10b1e42c8(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  long extraout_x10;
  uint extraout_w11;
  int extraout_w12;
  
  func_0x00010b1eb388();
  if (extraout_x10 != 0) {
    do {
      func_0x00010b1eb0ac();
    } while (extraout_w12 != 0);
  }
  func_0x00010b1eb02c();
  lVar1 = extraout_x8;
  pcVar2 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    func_0x00010b1ec364();
    lVar1 = extraout_x8_00;
    pcVar2 = extraout_x9_00;
  }
  (*pcVar2)(param_1,*(undefined8 *)(lVar1 + 8));
  func_0x00010b1eb728();
  return;
}



/* Entry: 10b1e4314; end: 10b1e4323;  */

void FUN_10b1e4314(void)

{
  return;
}



/* Entry: 10b1e4324; end: 10b1e4383;  */

void FUN_10b1e4324(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  
  func_0x00010b1eb114();
  if (param_1 != 0) {
    do {
      func_0x00010b1eb104();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b1eb134();
    }
  }
  return;
}



/* Entry: 10b1e4384; end: 10b1e4397;  */

void FUN_10b1e4384(void)

{
  func_0x00010b1e4358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e4398; end: 10b1e43ff;  */

void FUN_10b1e4398(long param_1)

{
  if (*(long *)(param_1 + 0xa8) != 0) {
    __ZNSt3__117__assoc_sub_state4waitEv();
  }
  FUN_10b1e41d8(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                *(undefined8 *)(param_1 + 0xa0),param_1 + 0xb0);
  func_0x00010b1ec788();
  return;
}



/* Entry: 10b1e4400; end: 10b1e441b;  */

byte * FUN_10b1e4400(long param_1)

{
  undefined1 in_ZR;
  byte *pbVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  long extraout_x10;
  uint extraout_w11;
  int extraout_w12;
  uint uVar3;
  int unaff_w20;
  undefined1 auStack_78 [16];
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined1 *puStack_58;
  undefined8 uStack_38;
  
  pbVar1 = (byte *)(**(long **)(param_1 + 0x10) + 0x80);
  func_0x00010b1eaf00(pbVar1,FUN_10b1fcde4,0,*(long **)(param_1 + 0x10) + 2);
  func_0x00010b1ed62c();
  pcStack_68 = FUN_10b1e42c8;
  ppuStack_60 = &PTR_FUN_110cc40d0;
  puStack_58 = auStack_78;
  func_0x00010b1ec284();
  func_0x00010b1ebe34();
  func_0x00010b1eafb4(ppuStack_60);
  func_0x00010b1ec6fc();
  do {
    func_0x00010b1ed360();
    uVar3 = (uint)*pbVar1;
    while( true ) {
      func_0x00010b1ebffc();
      func_0x00010b1ebcc4();
      func_0x00010b1eaddc(uStack_38);
      if ((bool)in_ZR) {
        return (byte *)(ulong)(uVar3 & 1);
      }
      ___stack_chk_fail();
      func_0x00010b1eb5a0();
      FUN_10b1dd074();
      func_0x00010b1ebcc4();
      do {
        func_0x00010b1eb590();
        func_0x00010b1eb648();
      } while (unaff_w20 == 0);
      func_0x00010b1eafb4(ppuStack_60);
      in_ZR = unaff_w20 == 2;
      if (!(bool)in_ZR) {
        func_0x00010b1eb8dc();
        func_0x00010b1eb388();
        if (extraout_x10 != 0) {
          do {
            func_0x00010b1eb0ac();
          } while (extraout_w12 != 0);
        }
        func_0x00010b1eb02c();
        pcVar2 = extraout_x9;
        if ((extraout_w11 & 1) != 0) {
          func_0x00010b1ec364();
          pcVar2 = extraout_x9_00;
        }
        (*pcVar2)();
        func_0x00010b1eb728();
        return pbVar1;
      }
      func_0x00010b1ebea4();
      func_0x00010b1ed340();
      ___cxa_end_catch();
      func_0x00010b1ec868();
      if (!(bool)in_ZR) break;
      func_0x00010b1ed330();
      func_0x00010b1ec868();
      if (!(bool)in_ZR) break;
      uVar3 = 0;
    }
  } while( true );
}



/* Entry: 10b1e441c; end: 10b1e443b;  */

void FUN_10b1e441c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1be508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e443c; end: 10b1e443f;  */

void FUN_10b1e443c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1e4440; end: 10b1e4507;  */

long FUN_10b1e4440(long *param_1,undefined8 param_2)

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



/* Entry: 10b1e4508; end: 10b1e455f;  */

void FUN_10b1e4508(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x00010b1eaeac();
  func_0x00010b1ecc3c();
  FUN_10b1e4560();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110cc4158;
  func_0x00010b1eb0bc();
  func_0x00010b1e45c8();
  func_0x00010b1eaddc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010b1ed37c();
  FUN_10b1e4580();
  func_0x00010b1ed010();
  return;
}



/* Entry: 10b1e4560; end: 10b1e457f;  */

void FUN_10b1e4560(void)

{
  func_0x00010b1ed37c();
  FUN_10b1e4580();
  func_0x00010b1ed010();
  return;
}



/* Entry: 10b1e4580; end: 10b1e459b;  */

void FUN_10b1e4580(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc4158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1e459c; end: 10b1e459f;  */

void FUN_10b1e459c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc4158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1e45a0; end: 10b1e45b3;  */

void FUN_10b1e45a0(void)

{
  func_0x00010b1e45bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e45b4; end: 10b1e45d7;  */

void FUN_10b1e45b4(void)

{
  return;
}



/* Entry: 10b1e45d8; end: 10b1e4613;  */

undefined8 FUN_10b1e45d8(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  func_0x00010b1eb63c();
  FUN_10b24fab4();
  func_0x000107c2823c();
  uVar3 = *unaff_x19;
  iVar1 = *(int *)(unaff_x19 + 1);
  uVar2 = unaff_x20;
  func_0x000107c39c74();
  func_0x000107c39c7c();
  if (uVar2 >> 0x1f == 0) {
    if ((long)uVar2 <= (long)(iVar1 - (int)uVar3)) {
      func_0x000107c30354(unaff_x20);
      return 1;
    }
  }
  else {
    func_0x00010b4d1d28();
    func_0x00010bdb2988(auStack_40);
    func_0x00010b4d1d00(auStack_58);
    func_0x00010b4d1d08();
    func_0x00010b4d1cd8();
    func_0x00010b4d1cf8();
    func_0x00010b4d1cf0();
    func_0x00010b4d1ce8();
  }
  return 0;
}



/* Entry: 10b1e4614; end: 10b1e46af;  */

long FUN_10b1e4614(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10b1e46b0; end: 10b1e46db;  */

void FUN_10b1e46b0(long param_1)

{
  long unaff_x19;
  
  func_0x00010b1eb808();
  if (param_1 != 0) {
    func_0x00010b1ec7f8();
    *(long *)(unaff_x19 + 8) = param_1;
    if (param_1 != 0) {
      func_0x00010b1ecc80();
    }
  }
  return;
}



/* Entry: 10b1e46dc; end: 10b1e472f;  */

void FUN_10b1e46dc(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  ulong uStack_30;
  ulong uStack_28;
  
  func_0x00010b1ebe28();
  FUN_10b1e4730(&uStack_30);
  uVar1 = uStack_30;
  FUN_10b1d0ad0();
  if ((uVar1 & 1) != 0) {
    unaff_x19[1] = uStack_28;
    *unaff_x19 = uStack_30;
    unaff_x19 = &uStack_30;
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x00010b1ebfe4();
  return;
}



/* Entry: 10b1e4730; end: 10b1e474b;  */

void FUN_10b1e4730(void)

{
  undefined1 uStack_11;
  
  FUN_10b1e474c(&uStack_11);
  return;
}



/* Entry: 10b1e474c; end: 10b1e47a7;  */

void FUN_10b1e474c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x00010b1eaeac();
  func_0x00010b1ecc3c();
  FUN_10b1e47a8();
  FUN_10b1e47f0(uStack_30);
  func_0x00010b1eb0bc();
  func_0x00010b1e4858();
  func_0x00010b1eaddc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eb5a0();
  func_0x00010b1e4858();
  func_0x00010b1eb590();
  func_0x00010b1ed37c();
  FUN_10b1e47c8();
  func_0x00010b1ed010();
  return;
}



/* Entry: 10b1e47a8; end: 10b1e47c7;  */

void FUN_10b1e47a8(void)

{
  func_0x00010b1ed37c();
  FUN_10b1e47c8();
  func_0x00010b1ed010();
  return;
}



/* Entry: 10b1e47c8; end: 10b1e47ef;  */

undefined8 * FUN_10b1e47c8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x333333333333334) {
    puVar1 = (undefined8 *)(param_2 * 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc41a8;
  func_0x00010b1246a0(param_1 + 3);
  return param_1;
}



/* Entry: 10b1e47f0; end: 10b1e4827;  */

undefined8 * FUN_10b1e47f0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc41a8;
  func_0x00010b1246a0(param_1 + 3);
  return param_1;
}



/* Entry: 10b1e4828; end: 10b1e482b;  */

void FUN_10b1e4828(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc41a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1e482c; end: 10b1e483f;  */

void FUN_10b1e482c(void)

{
  func_0x00010b1e484c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e4840; end: 10b1e4867;  */

long FUN_10b1e4840(long param_1)

{
  func_0x00010b24de1c();
  FUN_10b24db40(param_1 + 0x28);
  return param_1 + 0x18;
}



/* Entry: 10b1e4868; end: 10b1e48c3;  */

void FUN_10b1e4868(long param_1)

{
  func_0x00010b1eb954();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1e48c4; end: 10b1e4913;  */

void FUN_10b1e48c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_00 != 0);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10b1e4914; end: 10b1e496f;  */

void FUN_10b1e4914(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x00010b1eb65c();
    FUN_10b1e4914();
    FUN_10b1e4914(*(undefined8 *)(unaff_x19 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e4970; end: 10b1e49c3;  */

void FUN_10b1e4970(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  ulong uStack_30;
  ulong uStack_28;
  
  func_0x00010b1ebe28();
  FUN_10b1e4a20(&uStack_30);
  uVar1 = uStack_30;
  FUN_10b1e3e60();
  if ((uVar1 & 1) != 0) {
    unaff_x19[1] = uStack_28;
    *unaff_x19 = uStack_30;
    unaff_x19 = &uStack_30;
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x00010b1ebfec();
  return;
}



/* Entry: 10b1e49c4; end: 10b1e4a1f;  */

void FUN_10b1e49c4(void)

{
  func_0x00010b1eae08();
  FUN_10b1e4d20();
  return;
}



/* Entry: 10b1e4a20; end: 10b1e4a3b;  */

void FUN_10b1e4a20(void)

{
  undefined1 uStack_11;
  
  FUN_10b1e4a3c(&uStack_11);
  return;
}



/* Entry: 10b1e4a3c; end: 10b1e4a97;  */

void FUN_10b1e4a3c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x00010b1eaeac();
  func_0x00010b1ecc3c();
  FUN_10b1e4a98();
  FUN_10b1e4ae8(uStack_30);
  func_0x00010b1eb0bc();
  func_0x00010b1e4b50();
  func_0x00010b1eaddc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eb5a0();
  func_0x00010b1e4b50();
  func_0x00010b1eb590();
  func_0x00010b1ed37c();
  FUN_10b1e4ab8();
  func_0x00010b1ed010();
  return;
}



/* Entry: 10b1e4a98; end: 10b1e4ab7;  */

void FUN_10b1e4a98(void)

{
  func_0x00010b1ed37c();
  FUN_10b1e4ab8();
  func_0x00010b1ed010();
  return;
}



/* Entry: 10b1e4ab8; end: 10b1e4ae7;  */

undefined8 * FUN_10b1e4ab8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1642c8590b21643) {
    puVar1 = (undefined8 *)(param_2 * 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc41f8;
  FUN_10b118220(param_1 + 3);
  return param_1;
}



/* Entry: 10b1e4ae8; end: 10b1e4b1f;  */

undefined8 * FUN_10b1e4ae8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc41f8;
  FUN_10b118220(param_1 + 3);
  return param_1;
}



/* Entry: 10b1e4b20; end: 10b1e4b23;  */

void FUN_10b1e4b20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc41f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1e4b24; end: 10b1e4b37;  */

void FUN_10b1e4b24(void)

{
  func_0x00010b1e4b44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e4b38; end: 10b1e4bb3;  */

long FUN_10b1e4b38(long param_1)

{
  func_0x00010b2508d4();
  FUN_10b24f5f8(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 10b1e4bb4; end: 10b1e4bc7;  */

void FUN_10b1e4bb4(void)

{
  func_0x00010b1e4bd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e4bc8; end: 10b1e4bdb;  */

void FUN_10b1e4bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1eb6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b1e4bdc; end: 10b1e4c23;  */

void FUN_10b1e4bdc(long param_1)

{
  func_0x00010b1eb954();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b1e4c24; end: 10b1e4c37;  */

void FUN_10b1e4c24(void)

{
  return;
}



/* Entry: 10b1e4c38; end: 10b1e4cbf;  */

void FUN_10b1e4c38(long param_1)

{
  long lVar1;
  undefined8 uStack_70;
  undefined1 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010b1eb3bc(&uStack_48,*(undefined8 *)(lVar1 + 0x18),lVar1,lVar1 + 0x28);
  if (lStack_38 != 0) {
    uStack_70 = uStack_48;
    uStack_68 = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    lStack_60 = lStack_38;
    uStack_50 = uStack_28;
    uStack_58 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_10b1c9824(*(undefined8 *)(lVar1 + 0x18),lVar1,&uStack_70);
    func_0x00010b1eb910();
  }
  func_0x00010b1ebe9c();
  return;
}



/* Entry: 10b1e4cc0; end: 10b1e4cdf;  */

void FUN_10b1e4cc0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1c3be8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e4ce0; end: 10b1e4d1f;  */

void FUN_10b1e4ce0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1e4d20; end: 10b1e4d43;  */

void FUN_10b1e4d20(long param_1)

{
  func_0x00010b1eb954();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1e4d44; end: 10b1e4d77;  */

void FUN_10b1e4d44(void)

{
  undefined8 uStack_28;
  
  func_0x00010b1ec70c();
  __ZNSt3__117__assoc_sub_state4waitEv(uStack_28);
  func_0x00010b1eca70();
  return;
}



/* Entry: 10b1e4d78; end: 10b1e4d97;  */

void FUN_10b1e4d78(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b1c499c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e4d98; end: 10b1e4d9b;  */

void FUN_10b1e4d98(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1e4d9c; end: 10b1e4de3;  */

undefined8 FUN_10b1e4d9c(void)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x00010b1ed564();
  if (extraout_x8 == 0) {
    func_0x00010b1ec488();
    func_0x00010b1eb6b8();
    func_0x00010b1ebeac();
    if (unaff_x19[4] == 0) {
      FUN_10b1e4de4();
      return 0;
    }
  }
  return *unaff_x19;
}



/* Entry: 10b1e4de4; end: 10b1e4dff;  */

void FUN_10b1e4de4(void)

{
  func_0x00010b1eb184();
  func_0x00010b1219bc();
  return;
}



/* Entry: 10b1e4e00; end: 10b1e4e47;  */

undefined8 FUN_10b1e4e00(void)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x00010b1ed564();
  if (extraout_x8 == 0) {
    func_0x00010b1ec488();
    func_0x00010b1eb6b8();
    func_0x00010b1ebeac();
    if (unaff_x19[4] == 0) {
      FUN_10b1e4e48();
      return 0;
    }
  }
  return *unaff_x19;
}



/* Entry: 10b1e4e48; end: 10b1e4e63;  */

void FUN_10b1e4e48(void)

{
  func_0x00010b1eb184();
  func_0x00010b121a70();
  return;
}



/* Entry: 10b1e4e64; end: 10b1e4ea7;  */

undefined8 * FUN_10b1e4e64(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_10b1e4ea8(param_1,param_2,param_2 + param_3 * 0x88);
  return param_1;
}



/* Entry: 10b1e4ea8; end: 10b1e4edb;  */

void FUN_10b1e4ea8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb5dc();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x88) {
    func_0x00010b1eb6f8();
    FUN_10b1e4edc();
  }
  return;
}



/* Entry: 10b1e4edc; end: 10b1e4f0f;  */

void FUN_10b1e4edc(void)

{
  func_0x00010b1e4ef4();
  return;
}



/* Entry: 10b1e4f10; end: 10b1e50cb;  */

undefined1  [16] FUN_10b1e4f10(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar7;
  undefined8 extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x10;
  long *unaff_x20;
  long *plVar8;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  func_0x00010b1ed2f4();
  func_0x00010b1ee598();
  FUN_10b1e50cc(param_2);
  func_0x00010b1ed2dc();
  if (unaff_x24 != 0) {
    uVar9 = unaff_x24 - 1;
    if ((unaff_x24 & uVar9) == 0) {
      unaff_x25 = uVar9 & unaff_x21;
      in_ZR = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)(unaff_x21 - unaff_x24) < 0;
      in_ZR = unaff_x21 == unaff_x24;
      unaff_x25 = unaff_x21;
      if (unaff_x24 <= unaff_x21) {
        func_0x00010b1ed1c8();
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    unaff_x20 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*plVar8;
          if (unaff_x20 == (long *)0x0) goto LAB_10b1e4fc0;
          uVar6 = unaff_x20[1];
          in_NG = (long)(uVar6 - unaff_x21) < 0;
          in_ZR = uVar6 == unaff_x21;
          plVar8 = unaff_x20;
          if (!(bool)in_ZR) break;
          plVar4 = unaff_x20 + 9;
          func_0x000107c278d0(plVar4,unaff_x23 + 0x38);
          if (((ulong)plVar4 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10b1e509c;
          }
        }
        if ((unaff_x24 & uVar9) == 0) {
          uVar6 = uVar6 & uVar9;
        }
        else if (unaff_x24 <= uVar6) {
          uVar1 = 0;
          if (unaff_x24 != 0) {
            uVar1 = uVar6 / unaff_x24;
          }
          uVar6 = uVar6 - uVar1 * unaff_x24;
        }
        in_NG = (long)(uVar6 - unaff_x25) < 0;
        in_ZR = uVar6 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_10b1e4fc0:
  __Znwm(0x98);
  func_0x00010b1ec80c();
  FUN_10b17d5c4();
  unaff_x20[0xc] = *(long *)(unaff_x22 + 0x50);
  FUN_10b17d8dc(unaff_x20 + 0xd,unaff_x22 + 0x58);
  func_0x00010b1ebed4();
  func_0x00010b1eb0f0();
  if ((unaff_x24 == 0) || (func_0x00010b1eb5ec(), uVar9 = unaff_x25, (bool)in_NG)) {
    func_0x00010b1eaff0();
    bVar2 = 2 < unaff_x24;
    uVar3 = unaff_x24 == 3;
    func_0x00010b1eaeec();
    uVar5 = extraout_x8;
    if (!bVar2 || (bool)uVar3) {
      uVar5 = extraout_x9;
    }
    FUN_10b1e50f0(param_1,uVar5);
    unaff_x24 = param_1[1];
    func_0x00010b1ec098();
    if ((bool)uVar3) {
      in_ZR = 1;
      uVar9 = extraout_x8_00 & unaff_x21;
    }
    else {
      in_ZR = unaff_x21 == unaff_x24;
      uVar9 = unaff_x21;
      if (unaff_x24 <= unaff_x21) {
        func_0x00010b1ed1c8();
        uVar9 = unaff_x25;
      }
    }
  }
  if (*(long *)(*param_1 + uVar9 * 8) == 0) {
    func_0x00010b1eb7b8();
    *(long **)(extraout_x8_01 + uVar9 * 8) = param_1 + 2;
    if (*unaff_x20 != 0) {
      func_0x00010b1eb5bc();
      lVar7 = extraout_x8_02;
      if ((bool)in_ZR) {
        uVar9 = extraout_x9_00 & extraout_x10;
      }
      else {
        uVar9 = extraout_x9_00;
        if (unaff_x24 <= extraout_x9_00) {
          func_0x00010b1ec08c();
          lVar7 = extraout_x8_03;
          uVar9 = extraout_x9_01;
        }
      }
      *(long **)(lVar7 + uVar9 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010b1eb5cc();
  }
  func_0x00010b1eb1cc();
  FUN_10b1e525c();
  uVar5 = 1;
LAB_10b1e509c:
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = unaff_x20;
  return auVar10;
}



/* Entry: 10b1e50cc; end: 10b1e50ef;  */

void FUN_10b1e50cc(long param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c278c4(&uStack_11,param_1 + 0x38);
  return;
}



/* Entry: 10b1e50f0; end: 10b1e5243;  */

void FUN_10b1e50f0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    func_0x00010b1ebdb0((float)(ulong)param_1[3],(int)param_1[4]);
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b1ead68();
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10b1e5244(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    func_0x00010b1ee5f4();
    FUN_10b1e5244();
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    while (param_2 != plVar4) {
      func_0x00010b1ebda4();
      plVar4 = extraout_x9;
    }
    if (param_1[2] != 0) {
      func_0x00010b1ee534();
      func_0x00010b1ee520();
      lVar2 = extraout_x8;
      plVar4 = extraout_x9_00;
      uVar5 = extraout_x10;
      plVar3 = extraout_x11;
      while (plVar7 = plVar4, plVar4 = (long *)*plVar7, plVar4 != (long *)0x0) {
        plVar6 = (long *)plVar4[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar3) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar7;
            plVar3 = plVar6;
          }
          else {
            *plVar7 = *plVar4;
            func_0x00010b1eadf0();
            lVar2 = extraout_x8_00;
            plVar4 = extraout_x9_01;
            uVar5 = extraout_x10_00;
            plVar3 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar4;
  *plVar4 = (long)plVar3;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e5244; end: 10b1e525b;  */

void FUN_10b1e5244(long *param_1,long param_2)

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



/* Entry: 10b1e525c; end: 10b1e530b;  */

void FUN_10b1e525c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b1eb558();
  if (unaff_x20 != 0) {
    func_0x00010b1ec8c8();
    if ((bool)in_ZR) {
      func_0x00010b1d73e8(unaff_x20 + 0x10);
    }
    func_0x00010b1eb70c();
  }
  return;
}



/* Entry: 10b1e530c; end: 10b1e5323;  */

void FUN_10b1e530c(long *param_1)

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



/* Entry: 10b1e5324; end: 10b1e546f;  */

void FUN_10b1e5324(int *param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_24;
  
  uStack_38 = 0;
  uStack_30 = 0xffffffff;
  piVar1 = param_1;
  uStack_24 = param_2;
  func_0x00010b1e53dc(param_1,&uStack_24,param_3,&uStack_38);
  if ((int)piVar1 == 0) {
    FUN_10b4cf510(param_1,uStack_24,uStack_38,CONCAT44(uStack_2c,uStack_30));
  }
  else {
    func_0x00010958a940(param_3,*(undefined8 *)(*(long *)(param_1 + 4) + (ulong)uStack_24 * 8));
    *(undefined8 *)(*(long *)(param_1 + 4) + (ulong)uStack_24 * 8) = param_3;
  }
  *param_1 = *param_1 + -1;
  if (uStack_24 == param_1[3]) {
    uVar2 = (ulong)uStack_24;
    while ((uVar2 < (uint)param_1[1] && (*(long *)(*(long *)(param_1 + 4) + uVar2 * 8) == 0))) {
      uVar2 = uVar2 + 1;
      param_1[3] = (int)uVar2;
    }
  }
  return;
}



/* Entry: 10b1e5470; end: 10b1e5483;  */

void FUN_10b1e5470(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b1e5484; end: 10b1e5647;  */

void FUN_10b1e5484(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  byte bVar9;
  long lVar10;
  uint uVar11;
  uint extraout_w11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar17 = *(long *)(param_1 + 0x10);
  lVar18 = *(long *)(lVar17 + 0x40);
  uVar3 = *(undefined4 *)(lVar17 + 0x18);
  uVar1 = *(undefined4 *)(lVar17 + 0x38);
  uVar2 = *(undefined4 *)(lVar17 + 0x3c);
  func_0x00010b1ebdbc(&uStack_68,param_1,param_2,lVar17 + 0x20);
  func_0x00010b1eb3bc();
  if (uStack_58 == 0) goto LAB_10b1e5614;
  if (*(char *)(uStack_58 + 0x148) == '\x01') {
    pbVar5 = (byte *)(uStack_58 + 0x138);
    FUN_10b1d0a88();
    iVar7 = *(int *)(pbVar5 + 4);
    uVar8 = *(undefined8 *)(pbVar5 + 8);
    lVar10 = *(long *)(pbVar5 + 0x10);
    uVar14 = *(uint *)(pbVar5 + 0x18) & 0xffffff00;
    uVar11 = (uint)pbVar5[0x20];
    uVar12 = (uint)*(uint3 *)(pbVar5 + 0x21);
    bVar13 = pbVar5[0x24];
    bVar9 = *pbVar5;
    bVar16 = pbVar5[0x1c];
    uVar15 = *(uint *)(pbVar5 + 0x18) & 0xff;
    uVar4 = (uint)*(uint3 *)(pbVar5 + 0x21);
    if (lVar10 == 0) goto LAB_10b1e5538;
  }
  else {
    iVar7 = 0;
    bVar9 = 0;
    uVar8 = 0;
    lVar10 = 0;
    bVar16 = 0;
    uVar11 = 0;
    bVar13 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar4 = extraout_w11;
LAB_10b1e5538:
    uVar12 = uVar4;
    if (iVar7 == 0) goto LAB_10b1e5614;
  }
  if ((bVar16 & (bVar13 ^ 0xff) & 1) != 0) {
    uVar14 = uVar14 | uVar15;
    if (uVar14 == 0) {
      uVar12 = 0;
      bVar13 = 1;
      uVar11 = 4;
    }
    else {
      if (uVar14 == 2) {
        uVar11 = 1;
      }
      else {
        if (uVar14 == 1) {
          uVar12 = 0;
          bVar13 = 1;
          uVar11 = 2;
          goto LAB_10b1e5594;
        }
        uVar11 = 0;
      }
      uVar12 = 0;
      bVar13 = 1;
    }
  }
LAB_10b1e5594:
  uStack_90._0_5_ = CONCAT14(bVar13,uVar11 | uVar12 << 8);
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  uVar6 = lVar18 + 600;
  uStack_88 = uVar3;
  uStack_84 = uVar2;
  FUN_10b1f0278(uVar6,uStack_58 + 0x68,lVar17 + 0x20,bVar9 & 1,iVar7,uVar1,lVar10 * 1000,uVar8,
                &uStack_90);
  if ((uVar6 & 1) != 0) {
    uStack_90 = uStack_68;
    uStack_88 = CONCAT31(uStack_88._1_3_,uStack_60);
    uStack_60 = 0;
    uStack_78 = uStack_50;
    uStack_80 = uStack_58;
    uStack_70 = uStack_48;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010b1ebdbc();
    FUN_10b1bdc50();
    func_0x00010b1d3e60(&uStack_90);
  }
LAB_10b1e5614:
  func_0x00010b1ed268();
  return;
}



/* Entry: 10b1e5648; end: 10b1e5667;  */

void FUN_10b1e5648(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b1c76e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e5668; end: 10b1e5687;  */

void FUN_10b1e5668(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1e5688; end: 10b1e56a7;  */

void FUN_10b1e5688(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b1c7714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e56a8; end: 10b1e56ab;  */

void FUN_10b1e56a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1e56ac; end: 10b1e5707;  */

long FUN_10b1e56ac(long param_1)

{
  func_0x00010b1e56d0(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10b1e5708; end: 10b1e5757;  */

long * FUN_10b1e5708(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, *(int *)((long)plVar3 + 0x1c) <= *param_3) {
        if (*param_3 <= *(int *)((long)plVar3 + 0x1c)) goto LAB_10b1e5750;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10b1e5750;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_10b1e5750:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 10b1e5758; end: 10b1e57c3;  */

void FUN_10b1e5758(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10b1e57c4; end: 10b1e57df;  */

void FUN_10b1e57c4(long *param_1,long param_2)

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



/* Entry: 10b1e57e0; end: 10b1e57f3;  */

void FUN_10b1e57e0(void)

{
  func_0x00010b1e5800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e57f4; end: 10b1e580b;  */

long FUN_10b1e57f4(long param_1)

{
  func_0x00010b2508d4();
  FUN_10b250024(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 10b1e580c; end: 10b1e582f;  */

void FUN_10b1e580c(long param_1)

{
  func_0x00010b1eb954();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1e5830; end: 10b1e584b;  */

void FUN_10b1e5830(void)

{
  func_0x00010b1eb184();
  func_0x00010b121a28();
  return;
}



/* Entry: 10b1e584c; end: 10b1e5b3f;  */

undefined1  [16] FUN_10b1e584c(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x9_04;
  long *extraout_x9_05;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  long *extraout_x11;
  long *plVar10;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x12;
  long *plVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar12;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  func_0x00010b1ed2f4();
  func_0x00010b1ebd60();
  func_0x000107c278c4();
  func_0x00010b1ed2dc();
  if (unaff_x24 != (long *)0x0) {
    uVar13 = (long)unaff_x24 - 1;
    if (((ulong)unaff_x24 & uVar13) == 0) {
      unaff_x25 = (long *)(uVar13 & (ulong)unaff_x21);
      in_ZR = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)unaff_x21 - (long)unaff_x24 < 0;
      in_ZR = unaff_x21 == unaff_x24;
      unaff_x25 = unaff_x21;
      if (unaff_x24 <= unaff_x21) {
        func_0x00010b1ed1c8();
      }
    }
    plVar12 = *(long **)(*unaff_x19 + (long)unaff_x25 * 8);
    unaff_x20 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*plVar12;
          if (unaff_x20 == (long *)0x0) goto LAB_10b1e58f8;
          plVar8 = (long *)unaff_x20[1];
          in_NG = (long)plVar8 - (long)unaff_x21 < 0;
          in_ZR = plVar8 == unaff_x21;
          plVar12 = unaff_x20;
          if (!(bool)in_ZR) break;
          plVar8 = unaff_x20 + 2;
          func_0x00010b1ebe54();
          if (((ulong)plVar8 & 1) != 0) {
            uVar7 = 0;
            goto LAB_10b1e5b1c;
          }
        }
        if (((ulong)unaff_x24 & uVar13) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar13);
        }
        else if (unaff_x24 <= plVar8) {
          uVar1 = 0;
          if (unaff_x24 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)unaff_x24;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)unaff_x24);
        }
        in_NG = (long)plVar8 - (long)unaff_x25 < 0;
        in_ZR = plVar8 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_10b1e58f8:
  __Znwm(0x158);
  func_0x00010b1ec80c();
  func_0x00010b1ecae0();
  plVar12 = unaff_x20 + 5;
  _bzero(plVar12,0x130);
  *(undefined4 *)(unaff_x20 + 9) = 0x3f800000;
  unaff_x20[0xb] = 0;
  unaff_x20[10] = 0;
  unaff_x20[0xd] = 0;
  unaff_x20[0xc] = 0;
  *(undefined4 *)(unaff_x20 + 0xe) = 0x3f800000;
  unaff_x20[0x11] = 0;
  unaff_x20[0x10] = 0;
  unaff_x20[0x13] = 0;
  unaff_x20[0x12] = 0;
  *(undefined4 *)(unaff_x20 + 0x14) = 0x3f800000;
  unaff_x20[0x16] = 0;
  unaff_x20[0x15] = 0;
  unaff_x20[0x18] = 0;
  unaff_x20[0x17] = 0;
  unaff_x20[0x1a] = 0;
  unaff_x20[0x19] = 0;
  unaff_x20[0x1c] = 0;
  unaff_x20[0x1b] = 0;
  unaff_x20[0x1e] = 0;
  unaff_x20[0x1d] = 0;
  *(undefined4 *)(unaff_x20 + 0x1f) = 0x3f800000;
  unaff_x20[0x21] = 0;
  unaff_x20[0x20] = 0;
  unaff_x20[0x23] = 0;
  unaff_x20[0x22] = 0;
  *(undefined4 *)(unaff_x20 + 0x24) = 0x3f800000;
  unaff_x20[0x27] = 0;
  unaff_x20[0x26] = 0;
  unaff_x20[0x29] = 0;
  unaff_x20[0x28] = 0;
  *(undefined4 *)(unaff_x20 + 0x2a) = 0x3f800000;
  func_0x00010b1ebed4();
  func_0x00010b1eb0f0();
  if ((unaff_x24 != (long *)0x0) && (func_0x00010b1eb5ec(), plVar8 = unaff_x25, !(bool)in_NG))
  goto LAB_10b1e5acc;
  func_0x00010b1eaff0();
  bVar3 = (long *)0x2 < unaff_x24;
  bVar5 = unaff_x24 == (long *)0x3;
  func_0x00010b1eaeec();
  plVar8 = extraout_x8;
  if (!bVar3 || bVar5) {
    plVar8 = extraout_x9;
  }
  if ((long)plVar8 - 1U == 0) {
    plVar8 = (long *)0x2;
  }
  else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
    func_0x00010b1edefc();
    plVar8 = plVar12;
  }
  unaff_x24 = (long *)unaff_x19[1];
  uVar6 = plVar8 == unaff_x24;
  if (unaff_x24 < plVar8) {
LAB_10b1e59b4:
    if ((ulong)plVar8 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1e5b30);
      (*pcVar2)();
    }
    __Znwm((long)plVar8 << 3);
    FUN_10b1e5b40();
    plVar12 = (long *)0x0;
    unaff_x19[1] = (long)plVar8;
    while (uVar6 = plVar8 == plVar12, !(bool)uVar6) {
      func_0x00010b1ebda4();
      plVar12 = extraout_x9_00;
    }
    unaff_x24 = plVar8;
    if (unaff_x19[2] != 0) {
      func_0x00010b1ec568();
      func_0x00010b1ec554();
      lVar9 = extraout_x8_00;
      uVar13 = extraout_x9_01;
      plVar12 = extraout_x10;
      plVar10 = extraout_x11;
      while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
        plVar11 = (long *)plVar12[1];
        if (((ulong)plVar8 & uVar13) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar13);
        }
        else if (plVar8 <= plVar11) {
          uVar1 = 0;
          if (plVar8 != (long *)0x0) {
            uVar1 = (ulong)plVar11 / (ulong)plVar8;
          }
          plVar11 = (long *)((long)plVar11 - uVar1 * (long)plVar8);
        }
        uVar6 = plVar11 == plVar10;
        if (!(bool)uVar6) {
          if (*(long *)(lVar9 + (long)plVar11 * 8) == 0) {
            func_0x00010b1ebf54();
            lVar9 = extraout_x8_02;
            uVar13 = extraout_x9_03;
            plVar12 = extraout_x12;
            plVar10 = extraout_x11_01;
          }
          else {
            func_0x00010b1ead88();
            lVar9 = extraout_x8_01;
            uVar13 = extraout_x9_02;
            plVar12 = extraout_x10_00;
            plVar10 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (plVar8 < unaff_x24) {
    func_0x00010b1eafd8();
    uVar4 = (long *)0x2 < unaff_x24;
    uVar6 = unaff_x24 == (long *)0x3;
    if (((bool)uVar4) && (func_0x00010b1ed1a0(), extraout_x8_03 == 0)) {
      func_0x00010b1ead68();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010b1ed524();
    if ((bool)uVar4) {
      unaff_x24 = (long *)unaff_x19[1];
    }
    else {
      if (plVar8 != (long *)0x0) goto LAB_10b1e59b4;
      func_0x00010b1ed31c();
      FUN_10b1e5b40();
      func_0x00010b1ed5e4();
    }
  }
  func_0x00010b1ec098();
  if ((bool)uVar6) {
    in_ZR = 1;
    plVar8 = (long *)(extraout_x8_04 & (ulong)unaff_x21);
  }
  else {
    in_ZR = unaff_x21 == unaff_x24;
    plVar8 = unaff_x21;
    if (unaff_x24 <= unaff_x21) {
      func_0x00010b1ed1c8();
      plVar8 = unaff_x25;
    }
  }
LAB_10b1e5acc:
  if (*(long *)(*unaff_x19 + (long)plVar8 * 8) == 0) {
    func_0x00010b1eb7b8();
    *(long **)(extraout_x8_05 + (long)plVar8 * 8) = unaff_x19 + 2;
    if (*unaff_x20 != 0) {
      func_0x00010b1eb5bc();
      lVar9 = extraout_x8_06;
      if ((bool)in_ZR) {
        plVar12 = (long *)((ulong)extraout_x9_04 & extraout_x10_01);
      }
      else {
        plVar12 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x00010b1ec08c();
          lVar9 = extraout_x8_07;
          plVar12 = extraout_x9_05;
        }
      }
      *(long **)(lVar9 + (long)plVar12 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010b1eb5cc();
  }
  func_0x00010b1ed6ec();
  FUN_10b1e5b58();
  uVar7 = 1;
LAB_10b1e5b1c:
  auVar14._8_8_ = uVar7;
  auVar14._0_8_ = unaff_x20;
  return auVar14;
}



/* Entry: 10b1e5b40; end: 10b1e5b57;  */

void FUN_10b1e5b40(long *param_1,long param_2)

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



/* Entry: 10b1e5b58; end: 10b1e5b8b;  */

void FUN_10b1e5b58(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b1eb558();
  if (unaff_x20 != 0) {
    func_0x00010b1ec8c8();
    if ((bool)in_ZR) {
      func_0x00010b1d3804(unaff_x20 + 0x10);
    }
    func_0x00010b1eb70c();
  }
  return;
}



/* Entry: 10b1e5b8c; end: 10b1e5e07;  */

undefined1  [16] FUN_10b1e5b8c(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar6;
  long extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  ulong uVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong uVar8;
  long *extraout_x10;
  long *plVar9;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x24;
  undefined1 auVar10 [16];
  
  func_0x00010b1ed2f4();
  func_0x00010b1ed594();
  if (unaff_x24 != 0) {
    func_0x00010b1ec098();
    if ((bool)in_ZR) {
      unaff_x21 = extraout_x8 & unaff_x22;
      in_ZR = true;
    }
    else {
      in_NG = (long)(unaff_x24 - unaff_x22) < 0;
      in_ZR = unaff_x24 == unaff_x22;
      unaff_x21 = unaff_x22;
      if (unaff_x24 <= unaff_x22) {
        uVar8 = 0;
        if (unaff_x24 != 0) {
          uVar8 = unaff_x22 / unaff_x24;
        }
        unaff_x21 = unaff_x22 - uVar8 * unaff_x24;
      }
    }
    func_0x00010b1ee190();
    uVar8 = extraout_x8_00;
    if (unaff_x20 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*unaff_x20;
          if (unaff_x20 == (long *)0x0) goto LAB_10b1e5c20;
          uVar7 = unaff_x20[1];
          if (uVar7 != unaff_x22) break;
          in_NG = (int)unaff_x20[2] - (int)unaff_x22 < 0;
          in_ZR = 0;
          if ((int)unaff_x20[2] == (int)unaff_x22) {
            uVar5 = 0;
            goto LAB_10b1e5de8;
          }
        }
        if ((unaff_x24 & uVar8) == 0) {
          uVar7 = uVar7 & uVar8;
        }
        else if (unaff_x24 <= uVar7) {
          func_0x00010b1ec08c();
          uVar8 = extraout_x8_01;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x21) < 0;
        in_ZR = uVar7 == unaff_x21;
      } while ((bool)in_ZR);
    }
  }
LAB_10b1e5c20:
  plVar1 = (long *)(unaff_x19 + 0x10);
  func_0x00010b1ed008();
  func_0x00010b1eb61c();
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x00010b1eb0f0();
  if ((unaff_x24 != 0) && (func_0x00010b1eb5ec(), !(bool)in_NG)) goto LAB_10b1e5d9c;
  func_0x00010b1eaff0();
  uVar4 = unaff_x24 == 3;
  func_0x00010b1eaeec();
  func_0x00010b1ee224();
  if ((bool)uVar4) {
    unaff_x21 = 2;
  }
  else if ((unaff_x21 & extraout_x8_02) != 0) {
    func_0x00010b1ecfa4();
    func_0x00010b1ed2dc();
  }
  uVar4 = unaff_x21 == unaff_x24;
  if (unaff_x24 < unaff_x21) {
LAB_10b1e5c8c:
    if (unaff_x21 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1e5dfc);
      (*pcVar2)();
    }
    __Znwm(unaff_x21 << 3);
    FUN_10b1e5e08();
    func_0x00010b1ec590();
    uVar8 = extraout_x9_00;
    while (uVar4 = unaff_x21 == uVar8, !(bool)uVar4) {
      func_0x00010b1ebda4();
      uVar8 = extraout_x9_01;
    }
    unaff_x24 = unaff_x21;
    if (*plVar1 != 0) {
      func_0x00010b1eb8ac();
      func_0x00010b1ec544();
      *(long **)(extraout_x8_03 + extraout_x11 * 8) = plVar1;
      plVar9 = extraout_x10;
      while (*plVar9 != 0) {
        func_0x00010b1ee368();
        lVar6 = extraout_x8_04;
        plVar9 = extraout_x12;
        uVar8 = extraout_x11_00;
        if ((bool)uVar4) {
          uVar7 = extraout_x13 & extraout_x9_02;
        }
        else {
          uVar7 = extraout_x13;
          if (unaff_x21 <= extraout_x13) {
            func_0x00010b1ee20c();
            lVar6 = extraout_x8_05;
            uVar8 = extraout_x11_01;
            plVar9 = extraout_x12_00;
            uVar7 = extraout_x13_00;
          }
        }
        uVar4 = uVar7 == uVar8;
        if (!(bool)uVar4) {
          if (*(long *)(lVar6 + uVar7 * 8) == 0) {
            func_0x00010b1ebf54();
            plVar9 = extraout_x12_01;
          }
          else {
            func_0x00010b1ead88();
            plVar9 = extraout_x10_00;
          }
        }
      }
    }
  }
  else if (unaff_x21 < unaff_x24) {
    func_0x00010b1eafd8();
    uVar3 = 2 < unaff_x24;
    uVar4 = unaff_x24 == 3;
    if (((bool)uVar3) && (func_0x00010b1ed1a0(), extraout_x8_06 == 0)) {
      func_0x00010b1ead68();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010b1ed3f4();
    if ((bool)uVar3) {
      unaff_x24 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      if (unaff_x21 != 0) goto LAB_10b1e5c8c;
      func_0x00010b1ed31c();
      FUN_10b1e5e08();
      func_0x00010b1ed5e4();
    }
  }
  func_0x00010b1ec098();
  if ((bool)uVar4) {
    in_ZR = 1;
    unaff_x21 = extraout_x8_07 & unaff_x22;
  }
  else {
    in_ZR = unaff_x24 == unaff_x22;
    unaff_x21 = unaff_x22;
    if (unaff_x24 <= unaff_x22) {
      uVar8 = 0;
      if (unaff_x24 != 0) {
        uVar8 = unaff_x22 / unaff_x24;
      }
      unaff_x21 = unaff_x22 - uVar8 * unaff_x24;
    }
  }
LAB_10b1e5d9c:
  func_0x00010b1ee578();
  if (extraout_x9_03 == 0) {
    func_0x00010b1eb7b8();
    *(long **)(extraout_x8_08 + unaff_x21 * 8) = plVar1;
    if (*unaff_x20 != 0) {
      func_0x00010b1eb5bc();
      lVar6 = extraout_x8_09;
      if ((bool)in_ZR) {
        uVar8 = extraout_x9_04 & extraout_x10_01;
      }
      else {
        uVar8 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x00010b1ec08c();
          lVar6 = extraout_x8_10;
          uVar8 = extraout_x9_05;
        }
      }
      *(long **)(lVar6 + uVar8 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010b1eb5cc();
  }
  func_0x00010b1eb1cc();
  FUN_10b1e5e20();
  uVar5 = 1;
LAB_10b1e5de8:
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = unaff_x20;
  return auVar10;
}



/* Entry: 10b1e5e08; end: 10b1e5e1f;  */

void FUN_10b1e5e08(long *param_1,long param_2)

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



/* Entry: 10b1e5e20; end: 10b1e5e43;  */

void FUN_10b1e5e20(long param_1)

{
  func_0x00010b1eb114();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1e5e44; end: 10b1e5e6f;  */

double * FUN_10b1e5e44(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  
  pdVar1 = param_4;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *pdVar1 = *param_1 + *param_3;
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
    pdVar1 = pdVar1 + 1;
  }
  return param_4;
}



/* Entry: 10b1e5e70; end: 10b1e63c3;  */

/* WARNING: Removing unreachable block (ram,0x00010b1e6200) */

void FUN_10b1e5e70(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  undefined8 extraout_x8_01;
  int extraout_w11;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 in_d3;
  ulong uStack_450;
  ulong uStack_448;
  long lStack_440;
  undefined1 uStack_438;
  undefined1 auStack_428 [16];
  undefined1 uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  long lStack_400;
  char cStack_3f8;
  long alStack_3e8 [10];
  long lStack_398;
  long lStack_390;
  undefined1 auStack_388 [8];
  undefined8 uStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  char cStack_338;
  ulong uStack_330;
  ulong uStack_328;
  long lStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [80];
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined1 auStack_220 [80];
  long alStack_1d0 [9];
  byte bStack_188;
  long lStack_180;
  undefined1 auStack_178 [64];
  byte bStack_138;
  ulong *puStack_130;
  undefined1 uStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  int iStack_90;
  undefined8 uStack_88;
  
  func_0x00010b1eaf40();
  lVar7 = *(long *)(param_1 + 0x10);
  auStack_428[0] = 0;
  uStack_418 = 0;
  uStack_88 = extraout_x8;
  func_0x00010bccbc98(alStack_3e8,*(long *)(lVar7 + 0x18) + 0x80,&UNK_10f7388d1,0x36);
  lVar4 = *(long *)(alStack_3e8[0] + 8);
  lStack_390 = *(long *)(alStack_3e8[0] + 0x10);
  lStack_398 = lVar4;
  if (lStack_390 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar4 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  FUN_10b1fc7c8(auStack_388,*(undefined8 *)(lVar4 + 0x10),lVar7);
  uStack_268 = uStack_268 & 0xffffffffffffff00;
  uStack_228 = 0;
  if (cStack_338 != '\0') {
    uStack_258 = uStack_368;
    uStack_260 = uStack_370;
    uStack_268 = uStack_378;
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_378 = 0;
    uStack_248 = uStack_358;
    uStack_250 = uStack_360;
    uStack_238 = uStack_348;
    uStack_240 = uStack_350;
    uStack_230 = uStack_340;
    uStack_228 = 1;
    func_0x00010b1d7730(&uStack_378);
  }
  uStack_270 = uStack_380;
  uStack_380 = 0;
  func_0x00010b1d76b0(auStack_220,&uStack_270);
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  func_0x00010b1d76b0(auStack_2c0,&uStack_310);
  func_0x00010b1ecdf4();
  FUN_10b1d7adc(&lStack_180,auStack_220);
  FUN_10b1d7adc(alStack_1d0,auStack_2c0);
  puStack_130 = &uStack_330;
  uStack_128 = 0;
  while ((((bStack_138 & 1) != 0 || ((bStack_188 & 1) != 0)) && (lStack_180 != alStack_1d0[0]))) {
    if ((bStack_138 & 1) == 0) {
      func_0x00010b1eb9a4(auStack_120);
      func_0x000107c27f54(auStack_108,&UNK_10f2e0451,auStack_120);
      func_0x00010b1eb3c8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
    }
    FUN_10b1d7788(&uStack_330,auStack_178);
    FUN_10b1d7974(&lStack_180);
  }
  uStack_128 = 1;
  FUN_10b1d7a70(&puStack_130);
  func_0x00010b1ebfac(alStack_1d0);
  FUN_10b1d7b48(auStack_178);
  func_0x00010b1ebfac(auStack_2c0);
  func_0x00010b1eda24();
  func_0x00010b1ebfac(auStack_220);
  FUN_10b1d7b48(&uStack_268);
  uStack_408 = uStack_328;
  uStack_410 = uStack_330;
  lStack_400 = lStack_320;
  uStack_330 = 0;
  uStack_328 = 0;
  lStack_320 = 0;
  cStack_3f8 = '\x01';
  FUN_10b1d7c60(&uStack_330);
  FUN_10b1d7b68(auStack_388);
  func_0x00010b1ece74();
  func_0x00010bccbe4c(alStack_3e8);
  func_0x00010b1ed214();
  uStack_e8 = uStack_e8 & 0xffffffffffffff00;
  uVar6 = uStack_d0 >> 8;
  uStack_d0 = uStack_d0 & 0xffffffffffffff00;
  if (cStack_3f8 == '\x01') {
    uStack_e0 = uStack_408;
    uStack_e8 = uStack_410;
    lStack_d8 = lStack_400;
    uStack_408 = 0;
    lStack_400 = 0;
    uStack_410 = 0;
    uStack_d0 = CONCAT71((int7)uVar6,1);
  }
  iStack_90 = 0;
  func_0x00010b1ecf04();
  func_0x00010b1ed710();
  if (iStack_90 == 0) {
    func_0x00010b1ed454();
    if ((char)uStack_d0 == '\x01') {
      uStack_448 = uStack_e0;
      uStack_450 = uStack_e8;
      lStack_440 = lStack_d8;
      uStack_e0 = 0;
      lStack_d8 = 0;
      uStack_e8 = 0;
      uStack_438 = 1;
    }
  }
  else {
    if (iStack_90 != 1) goto LAB_10b1e626c;
    func_0x00010b1ed454();
  }
  func_0x00010b1ecf04();
  func_0x00010b1edfc0();
  FUN_10b1b78d0(auStack_428);
  func_0x00010b1ecf3c(&uStack_410);
  lVar4 = lStack_400;
  func_0x00010b1edca0();
  uVar1 = uStack_448;
  for (uVar6 = uStack_450; uVar3 = uVar6 == uVar1, !(bool)uVar3; uVar6 = uVar6 + 0x40) {
    puVar5 = (undefined8 *)(lVar4 + 0xd8);
    FUN_10b1c8738(puVar5,uVar6 + 0x18);
    lVar7 = *(long *)(uVar6 + 0x38) * 1000;
    uVar10 = *(ulong *)(uVar6 + 0x20);
    lVar9 = *(long *)(uVar6 + 0x28);
    uVar8 = *(ulong *)(uVar6 + 0x30);
    if ((*(byte *)(puVar5 + 6) & 1) == 0) {
      func_0x00010b1ed118(lVar7);
      *puVar5 = in_d3;
      puVar5[1] = 0x7fffffffffffffff;
      puVar5[2] = uVar10;
      puVar5[3] = lVar9;
      puVar5[4] = uVar8;
      puVar5[5] = extraout_x8_01;
      *(undefined1 *)(puVar5 + 6) = 1;
    }
    else {
      func_0x00010b1ed118(lVar7);
      uStack_e8 = 0x7fffffffffffffff;
      uStack_f0 = in_d3;
      uStack_e0 = uVar10;
      lStack_d8 = lVar9;
      uStack_d0 = uVar8;
      FUN_10b1c8758(&uStack_f0,puVar5[5]);
      func_0x00010b1c87c8(puVar5,&uStack_e0,puVar5[5]);
    }
  }
  *(undefined1 *)(lVar4 + 0x101) = 1;
  func_0x000107c2798c(&uStack_410);
  FUN_10b1d7bbc(&uStack_450);
  func_0x00010b1eaddc(uStack_88);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1e626c:
  func_0x00010563ab98();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1e6274);
  (*pcVar2)();
}


