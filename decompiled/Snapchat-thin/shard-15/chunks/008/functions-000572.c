/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcee4b0; end: 10bcee5b3;  */

void FUN_10bcee4b0(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar4;
  ulong extraout_x14;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  Hint_Prefetch(*param_1,0,2,0);
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_4;
  func_0x00010bcfed58(*param_1,&uStack_98);
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  func_0x00010bd0a4e0(*param_1 >> 0xc);
  func_0x00010bd0c58c();
  uVar5 = extraout_x8;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    func_0x00010bd0addc();
    uVar4 = extraout_x8_00 & 0x8080808080808080;
    while (uVar4 != 0) {
      func_0x00010bd0c580();
      puVar3 = &uStack_98;
      FUN_10bcfec74(puVar3,uVar1 + (uVar5 + (extraout_x8_01 >> 3) & uVar2) * 8);
      func_0x00010bd0bf58();
      if (((ulong)puVar3 & 1) != 0) {
        return;
      }
      func_0x00010bd0c58c(uVar4 - 1);
      uVar4 = extraout_x14;
    }
    func_0x00010bd0a514();
    if ((extraout_x8_02 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return;
}



/* Entry: 10bcee5b4; end: 10bcee5e3;  */

char * FUN_10bcee5b4(char *param_1)

{
  char *pcVar1;
  
  func_0x00010bd0a8d4();
  FUN_10bcee4b0();
  pcVar1 = (char *)0x0;
  if (*param_1 == '\x06') {
    pcVar1 = param_1 + -1;
  }
  if (*param_1 != '\x05') {
    param_1 = pcVar1;
  }
  return param_1;
}



/* Entry: 10bcee5e4; end: 10bcee5f7;  */

void FUN_10bcee5e4(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 4);
  if ((param_2 < iVar1) || ((long)*(short *)(param_1 + 2) + (long)iVar1 < (long)param_2)) {
    func_0x00010bd0c2e8(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x98) + 0x58));
    func_0x00010bd0af1c();
    func_0x00010bcfed5c();
  }
  return;
}



/* Entry: 10bcee5f8; end: 10bcee667;  */

void FUN_10bcee5f8(long param_1,long param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_2 + 0x38) + 4);
  if ((param_3 < iVar1) || ((long)*(short *)(param_2 + 2) + (long)iVar1 < (long)param_3)) {
    func_0x00010bd0c2e8(*(undefined8 *)(param_1 + 0x58));
    func_0x00010bd0af1c();
    func_0x00010bcfed5c();
  }
  return;
}



/* Entry: 10bcee668; end: 10bcee67b;  */

long ** FUN_10bcee668(undefined8 *param_1,uint param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long **pplVar5;
  int iVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined1 *extraout_x10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [24];
  long *plStack_218;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [24];
  undefined1 *apuStack_1c8 [6];
  long **pplStack_198;
  undefined8 uStack_190;
  undefined1 auStack_168 [48];
  long *plStack_138;
  undefined *puStack_130;
  ulong uStack_128;
  undefined *puStack_120;
  undefined8 uStack_58;
  
  pplVar1 = *(long ***)(param_1[2] + 0x98);
  func_0x00010bd0a0a0();
  uStack_58 = extraout_x8;
  FUN_10bcee5f8();
  if (pplVar1 == (long **)0x0) {
    plVar3 = (long *)(unaff_x19 + 0xc0);
    plVar2 = plVar3;
    plStack_138 = plVar3;
    func_0x00010ae7ccdc();
    func_0x00010bd0c238();
    if (plVar2 == (long *)0x0) {
      pplVar1 = (long **)0x0;
    }
    else {
      pplVar1 = (long **)*param_1;
    }
    FUN_10bcfe50c(&plStack_138);
    if (plVar2 == (long *)0x0) {
      plStack_218 = plVar3;
      func_0x000107c2b9f0();
      func_0x00010bd0c238();
      if (plVar3 == (long *)0x0) {
        plStack_138 = (long *)unaff_x20[1];
        if (*(char *)((long)plStack_138 + 0x17) < '\0') {
          plStack_138 = (long *)*plStack_138;
        }
        puStack_130 = &UNK_1005616c4;
        uStack_128 = (ulong)param_2;
        puStack_120 = &UNK_1004d50a8;
        puVar4 = (undefined8 *)&UNK_10f833088;
        func_0x000107c2b99c(auStack_230,&UNK_10f833088,0x18,&plStack_138,2);
        FUN_10bcedc88();
        uVar8 = puVar4[5];
        func_0x00010bd0b940(&plStack_138);
        func_0x00010bcf65a8(&plStack_138,1);
        func_0x00010bd0b1d0(&plStack_138);
        func_0x000107c315a4(auStack_168,*puVar4);
        FUN_10bcf6f18(&plStack_138,uVar8);
        func_0x000107c315a8(auStack_168);
        pplVar1 = &plStack_138;
        uVar8 = 1;
        FUN_10bcf6838();
        pplVar5 = pplVar1;
        func_0x00010bd09fa8(unaff_x20[1]);
        func_0x00010bd0a408();
        pplStack_198 = pplVar5;
        uStack_190 = uVar8;
        func_0x00010bd0abbc();
        apuStack_1c8[0] = extraout_x10;
        if (in_NG == in_OV) {
          apuStack_1c8[0] = auStack_230;
        }
        func_0x000107c2ba44(&uStack_248,auStack_168,&pplStack_198,apuStack_1c8);
        pplVar5 = &plStack_138;
        func_0x00010bd0b5c0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_1e0,auStack_230);
        func_0x000107c27b9c(pplVar5,auStack_1e0);
        uStack_1f8 = uStack_240;
        uStack_200 = uStack_248;
        uStack_1f0 = uStack_238;
        func_0x00010bd0c598();
        func_0x000107c27b9c(pplVar5 + 3,&uStack_200);
        func_0x00010bd0b6a4();
        func_0x00010bd0b904();
        pplVar1[1] = (long *)pplVar5;
        func_0x00010bd0aab8();
        *(uint *)((long)pplVar1 + 4) = param_2;
        pplVar1[2] = unaff_x20;
        pplVar1[3] = (long *)&PTR_PTR_1134063b0;
        param_1 = (undefined8 *)(unaff_x19 + 0x78);
        func_0x00010bced3ac(auStack_168,param_1,pplVar1);
        func_0x00010bd0aad4();
      }
      else {
        pplVar1 = (long **)*param_1;
      }
      FUN_10bcfee98(&plStack_218);
    }
  }
  iVar6 = (int)param_1;
  func_0x000107c3a64c(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0aad4();
    pplVar1 = &plStack_218;
    FUN_10bcfee98();
    func_0x00010bd0a974();
    lVar7 = 0;
    while( true ) {
      if ((ulong)(*(uint *)(pplVar1 + 0x11) & ((int)*(uint *)(pplVar1 + 0x11) >> 0x1f ^ 0xffffffffU)
                 ) * 0x28 - lVar7 == 0) {
        return (long **)0x0;
      }
      if ((*(int *)((long)pplVar1[0xb] + lVar7) <= iVar6) &&
         (pplVar5 = (long **)((long)pplVar1[0xb] + lVar7), iVar6 < *(int *)((long)pplVar5 + 4)))
      break;
      lVar7 = lVar7 + 0x28;
    }
    return pplVar5;
  }
  return pplVar1;
}



/* Entry: 10bcee67c; end: 10bcee8ff;  */

long ** FUN_10bcee67c(long **param_1,undefined8 *param_2,uint param_3)

{
  long **pplVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long **pplVar5;
  int iVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined1 *extraout_x10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [24];
  long *plStack_218;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [24];
  undefined1 *apuStack_1c8 [6];
  long **pplStack_198;
  undefined8 uStack_190;
  undefined1 auStack_168 [48];
  long *plStack_138;
  undefined *puStack_130;
  ulong uStack_128;
  undefined *puStack_120;
  undefined8 uStack_58;
  
  func_0x00010bd0a0a0();
  uStack_58 = extraout_x8;
  FUN_10bcee5f8();
  if (param_1 == (long **)0x0) {
    plVar3 = (long *)(unaff_x19 + 0xc0);
    plVar2 = plVar3;
    plStack_138 = plVar3;
    func_0x00010ae7ccdc();
    func_0x00010bd0c238();
    if (plVar2 == (long *)0x0) {
      param_1 = (long **)0x0;
    }
    else {
      param_1 = (long **)*param_2;
    }
    FUN_10bcfe50c(&plStack_138);
    if (plVar2 == (long *)0x0) {
      plStack_218 = plVar3;
      func_0x000107c2b9f0();
      func_0x00010bd0c238();
      if (plVar3 == (long *)0x0) {
        plStack_138 = (long *)unaff_x20[1];
        if (*(char *)((long)plStack_138 + 0x17) < '\0') {
          plStack_138 = (long *)*plStack_138;
        }
        puStack_130 = &UNK_1005616c4;
        uStack_128 = (ulong)param_3;
        puStack_120 = &UNK_1004d50a8;
        puVar4 = (undefined8 *)&UNK_10f833088;
        func_0x000107c2b99c(auStack_230,&UNK_10f833088,0x18,&plStack_138,2);
        FUN_10bcedc88();
        uVar8 = puVar4[5];
        func_0x00010bd0b940(&plStack_138);
        func_0x00010bcf65a8(&plStack_138,1);
        func_0x00010bd0b1d0(&plStack_138);
        func_0x000107c315a4(auStack_168,*puVar4);
        FUN_10bcf6f18(&plStack_138,uVar8);
        func_0x000107c315a8(auStack_168);
        param_1 = &plStack_138;
        uVar8 = 1;
        FUN_10bcf6838();
        pplVar5 = param_1;
        func_0x00010bd09fa8(unaff_x20[1]);
        func_0x00010bd0a408();
        pplStack_198 = pplVar5;
        uStack_190 = uVar8;
        func_0x00010bd0abbc();
        apuStack_1c8[0] = extraout_x10;
        if (in_NG == in_OV) {
          apuStack_1c8[0] = auStack_230;
        }
        func_0x000107c2ba44(&uStack_248,auStack_168,&pplStack_198,apuStack_1c8);
        pplVar5 = &plStack_138;
        func_0x00010bd0b5c0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_1e0,auStack_230);
        func_0x000107c27b9c(pplVar5,auStack_1e0);
        uStack_1f8 = uStack_240;
        uStack_200 = uStack_248;
        uStack_1f0 = uStack_238;
        func_0x00010bd0c598();
        func_0x000107c27b9c(pplVar5 + 3,&uStack_200);
        func_0x00010bd0b6a4();
        func_0x00010bd0b904();
        param_1[1] = (long *)pplVar5;
        func_0x00010bd0aab8();
        *(uint *)((long)param_1 + 4) = param_3;
        param_1[2] = unaff_x20;
        param_1[3] = (long *)&PTR_PTR_1134063b0;
        param_2 = (undefined8 *)(unaff_x19 + 0x78);
        func_0x00010bced3ac(auStack_168,param_2,param_1);
        func_0x00010bd0aad4();
      }
      else {
        param_1 = (long **)*param_2;
      }
      FUN_10bcfee98(&plStack_218);
    }
  }
  iVar6 = (int)param_2;
  func_0x000107c3a64c(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0aad4();
    pplVar5 = &plStack_218;
    FUN_10bcfee98();
    func_0x00010bd0a974();
    lVar7 = 0;
    while( true ) {
      if ((ulong)(*(uint *)(pplVar5 + 0x11) & ((int)*(uint *)(pplVar5 + 0x11) >> 0x1f ^ 0xffffffffU)
                 ) * 0x28 - lVar7 == 0) {
        return (long **)0x0;
      }
      if ((*(int *)((long)pplVar5[0xb] + lVar7) <= iVar6) &&
         (pplVar1 = (long **)((long)pplVar5[0xb] + lVar7), iVar6 < *(int *)((long)pplVar1 + 4)))
      break;
      lVar7 = lVar7 + 0x28;
    }
    return pplVar1;
  }
  return param_1;
}



/* Entry: 10bcee900; end: 10bcee993;  */

long FUN_10bcee900(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  while( true ) {
    if ((ulong)(*(uint *)(param_1 + 0x88) & ((int)*(uint *)(param_1 + 0x88) >> 0x1f ^ 0xffffffffU))
        * 0x28 - lVar2 == 0) {
      return 0;
    }
    if ((*(int *)(*(long *)(param_1 + 0x58) + lVar2) <= param_2) &&
       (lVar1 = *(long *)(param_1 + 0x58) + lVar2, param_2 < *(int *)(lVar1 + 4))) break;
    lVar2 = lVar2 + 0x28;
  }
  return lVar1;
}



/* Entry: 10bcee994; end: 10bcee9cb;  */

undefined8 FUN_10bcee994(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010bcff018();
  lStack_28 = lVar1;
  FUN_10bcfeebc(param_1 + 0xc0,&lStack_28);
  return *(undefined8 *)(*(long *)(param_1 + 200) + -8);
}



/* Entry: 10bcee9cc; end: 10bceea2b;  */

long * FUN_10bcee9cc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  func_0x000107c27958(auStack_48,&uStack_30);
  (**(code **)(*param_1 + 0x10))(param_1,auStack_48,param_4);
  func_0x00010bd0aab8();
  return param_1;
}



/* Entry: 10bceea2c; end: 10bceeae7;  */

long FUN_10bceea2c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_70;
  code *pcStack_68;
  long *plStack_58;
  long lStack_38;
  
  func_0x00010bd0a9cc();
  func_0x00010ae7d914(*param_1);
  *(undefined1 *)(unaff_x20 + 0x37) = 1;
  lVar1 = *(long *)(unaff_x20 + 0x28) + 0x18;
  FUN_10bcdb86c(lVar1,*(ulong *)(unaff_x19 + 0xb0) & 0xfffffffffffffffc);
  if (lVar1 == 0) {
    plStack_58 = &lStack_38;
    lVar1 = *(long *)(unaff_x20 + 0x20);
    if (lVar1 == 0) {
      FUN_10bcf546c(&plStack_58);
    }
    else {
      ppuStack_70 = &plStack_58;
      pcStack_68 = FUN_10bd04a5c;
      (**(code **)(lVar1 + 0x18))(lVar1,&ppuStack_70);
    }
    if (lStack_38 == 0) {
      FUN_10bcdb4e8(&ppuStack_70,*(long *)(unaff_x20 + 0x28) + 0x18,
                    *(ulong *)(unaff_x19 + 0xb0) & 0xfffffffffffffffc);
    }
  }
  else {
    lStack_38 = 0;
  }
  return lStack_38;
}



/* Entry: 10bceeae8; end: 10bceeb03;  */

void FUN_10bceeae8(void)

{
  func_0x000107c3a6d4();
  FUN_10bd046d8();
  return;
}



/* Entry: 10bceeb04; end: 10bceeba7;  */

void FUN_10bceeb04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = (undefined1 *)0x0;
  uStack_30 = param_2;
  uStack_28 = param_3;
  while (puVar1 = &uStack_30, func_0x0001057fa6dc(&uStack_30,0x2e,puVar3),
        puVar1 != (undefined8 *)0xffffffffffffffff) {
    func_0x000107c2810c(&uStack_30,0,puVar1);
    pbVar2 = *(byte **)(param_1 + 0x28);
    func_0x00010bd0c5bc();
    FUN_10bceca2c();
    if (*pbVar2 == 0) break;
    if (1 < *pbVar2 - 9) {
      return;
    }
    puVar3 = (undefined1 *)((long)puVar1 + 1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10bceeb04(*(long *)(param_1 + 0x18),uStack_30,uStack_28);
  }
  return;
}



/* Entry: 10bceeba8; end: 10bceee2f;  */

/* WARNING: Possible PIC construction at 0x00010bceed24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bceec64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd3d25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd3d134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd3d260) */
/* WARNING: Removing unreachable block (ram,0x00010bd3d304) */
/* WARNING: Removing unreachable block (ram,0x00010bd3d26c) */
/* WARNING: Removing unreachable block (ram,0x00010bceec68) */
/* WARNING: Removing unreachable block (ram,0x00010bceec74) */
/* WARNING: Removing unreachable block (ram,0x00010bceed28) */
/* WARNING: Removing unreachable block (ram,0x00010bceed2c) */
/* WARNING: Removing unreachable block (ram,0x00010bceed30) */
/* WARNING: Removing unreachable block (ram,0x00010bd3d138) */
/* WARNING: Removing unreachable block (ram,0x00010bd3d1d0) */
/* WARNING: Removing unreachable block (ram,0x00010bd3d144) */

char ** FUN_10bceeba8(undefined8 param_1,char *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char **ppcVar5;
  undefined1 uVar7;
  bool bVar8;
  byte *pbVar9;
  char **ppcVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  char **ppcVar15;
  char **ppcVar16;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  byte *extraout_x9;
  long extraout_x10;
  long extraout_x10_00;
  uint uVar17;
  char **unaff_x19;
  char **unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar18;
  char *pcVar19;
  char *apcStack_e0 [14];
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  char *pcStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  char *apcStack_48 [2];
  undefined8 uStack_38;
  char **ppcVar6;
  
  ppcVar5 = apcStack_e0;
  ppcVar6 = apcStack_e0;
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010bd0a30c();
  if ((param_2[1] & 1U) == 0) {
    func_0x00010bd0a968();
    FUN_10bdb2a08(&pcStack_68);
    func_0x00010b4c31d4();
    goto LAB_10bceee20;
  }
  uStack_38 = extraout_x8;
  func_0x00010bd0a9fc();
  pcVar19 = param_2;
  func_0x00010b91adc8();
  iVar4 = (int)param_2 + -1;
  uVar7 = iVar4 == 8;
  switch(iVar4) {
  case 0:
    ppcVar16 = &pcStack_68;
    func_0x0001089ac660(ppcVar16,*(undefined4 *)(unaff_x20 + 10));
    func_0x00010bd0b8e4();
    goto code_r0x00010bceed58;
  case 1:
    ppcVar16 = &pcStack_68;
    func_0x0001089ed984(ppcVar16,unaff_x20[10]);
    func_0x00010bd0b8e4();
    goto code_r0x00010bceed58;
  case 2:
    ppcVar16 = &pcStack_68;
    func_0x0001089ac7ac(ppcVar16,*(undefined4 *)(unaff_x20 + 10));
    func_0x00010bd0b8e4();
    goto code_r0x00010bceed58;
  case 3:
    ppcVar16 = &pcStack_68;
    func_0x0001089b4628(ppcVar16,unaff_x20[10]);
    func_0x00010bd0b8e4();
code_r0x00010bceed58:
    func_0x00010bd09ff8();
    if ((bool)uVar7) {
      return ppcVar16;
    }
    break;
  case 4:
    pcVar19 = unaff_x20[10];
    func_0x00010bd09ff8();
    if ((bool)uVar7) {
      unaff_x29 = &stack0xfffffffffffffff0;
      func_0x00010bd3d4e8();
      pcStack_50 = pcVar19;
      if ((double)pcVar19 == INFINITY) {
        pcStack_60 = "inf";
LAB_10bd3d0f4:
        uStack_58 = 3;
LAB_10bd3d118:
        FUN_10bd3d314(apcStack_48,0x20,&pcStack_60);
      }
      else {
        if ((double)pcVar19 == -INFINITY) {
          pcStack_60 = "-inf";
          uStack_58 = 4;
          goto LAB_10bd3d118;
        }
        if (NAN((double)pcVar19)) {
          pcStack_60 = "nan";
          goto LAB_10bd3d0f4;
        }
        unaff_x20 = (char **)&UNK_10f8368ae;
        pcStack_60 = "%.*g";
        uStack_58 = 4;
        pcStack_68 = (char *)CONCAT44(pcStack_68._4_4_,0xf);
        func_0x00010bd3d52c(apcStack_48);
        FUN_10bd3d034(apcStack_48,0);
        pcStack_68 = pcVar19;
        if ((double)pcVar19 != (double)pcStack_50) {
          pcStack_60 = "%.*g";
          uStack_58 = 4;
          uStack_6c = 0x11;
          func_0x00010bd3d52c(apcStack_48);
        }
        FUN_10bd3d368(apcStack_48);
      }
      ppcVar16 = apcStack_48;
      unaff_x30 = 0x10bd3d138;
      register0x00000008 = (BADSPACEBASE *)auStack_70;
code_r0x00010002b838:
      *(char ***)((long)register0x00000008 + -0x20) = unaff_x20;
      *(char ***)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      func_0x00010002b82c();
      func_0x000107c613d0(ppcVar16);
      func_0x000107c60c50(unaff_x20,unaff_x19,ppcVar16);
      return unaff_x20;
    }
    break;
  case 5:
    fVar18 = *(float *)(unaff_x20 + 10);
    func_0x00010bd09ff8();
    if ((bool)uVar7) {
      unaff_x29 = &stack0xfffffffffffffff0;
      func_0x00010bd3d4e8();
      uStack_58 = CONCAT44(fVar18,(undefined4)uStack_58);
      if (fVar18 == INFINITY) {
        pcStack_68 = "inf";
LAB_10bd3d21c:
        pcStack_60 = (char *)0x3;
LAB_10bd3d240:
        FUN_10bd3d314(&pcStack_50,0x18,&pcStack_68);
      }
      else {
        if (fVar18 == -INFINITY) {
          pcStack_68 = "-inf";
          pcStack_60 = (char *)0x4;
          goto LAB_10bd3d240;
        }
        if (NAN(fVar18)) {
          pcStack_68 = "nan";
          goto LAB_10bd3d21c;
        }
        unaff_x20 = (char **)&UNK_10f8368ae;
        pcStack_68 = "%.*g";
        pcStack_60 = (char *)0x4;
        func_0x00010bd3d4cc(6);
        ___error();
        param_2[0] = '\0';
        param_2[1] = '\0';
        param_2[2] = '\0';
        param_2[3] = '\0';
        ppcVar16 = &pcStack_50;
        _strtof(ppcVar16,&pcStack_68);
        if (((((char)pcStack_50 == '\0') || (*pcStack_68 != '\0')) ||
            (___error(), *(int *)ppcVar16 != 0)) || (fVar18 != uStack_58._4_4_)) {
          pcStack_68 = "%.*g";
          pcStack_60 = (char *)0x4;
          func_0x00010bd3d4cc(9);
        }
        FUN_10bd3d368(&pcStack_50);
      }
      ppcVar16 = &pcStack_50;
      unaff_x30 = 0x10bd3d260;
      register0x00000008 = (BADSPACEBASE *)auStack_70;
      goto code_r0x00010002b838;
    }
    break;
  case 6:
    bVar8 = *(char *)(unaff_x20 + 10) == '\0';
    ppcVar16 = (char **)"true";
    if (bVar8) {
      ppcVar16 = (char **)&DAT_10f6842c6;
    }
    func_0x00010bd09ff8();
    if (bVar8) goto code_r0x00010002b838;
    break;
  case 7:
    goto FUN_10bceee30;
  case 8:
    if ((int)param_3 != 0) {
      func_0x00010bd0a3e4();
      pbVar11 = (byte *)unaff_x20[10];
      lVar13 = (long)(char)pbVar11[0x17];
      pbVar9 = pbVar11;
      if (lVar13 < 0) {
        pbVar9 = *(byte **)pbVar11;
        lVar13 = *(long *)(pbVar11 + 8);
      }
      unaff_x30 = 0x10bceed28;
      register0x00000008 = (BADSPACEBASE *)apcStack_e0;
      ppcVar16 = ppcVar5;
      unaff_x20 = ppcVar6;
      unaff_x21 = param_3;
      unaff_x29 = puVar1;
      pcStack_68 = param_2;
      pcStack_60 = pcVar19;
code_r0x00010ae897f0:
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(char ***)((long)register0x00000008 + -0x20) = unaff_x20;
      *(char ***)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      *ppcVar16 = (char *)0x0;
      ppcVar16[1] = (char *)0x0;
      ppcVar16[2] = (char *)0x0;
      lVar12 = 0;
      if (lVar13 != 0) {
        lVar12 = 0;
        lVar14 = lVar13;
        pbVar11 = pbVar9;
        do {
          lVar12 = lVar12 + (ulong)(byte)(&UNK_10e52f6e8)[*pbVar11];
          lVar14 = lVar14 + -1;
          pbVar11 = pbVar11 + 1;
        } while (lVar14 != 0);
      }
      if (lVar12 == lVar13) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppcVar16,pbVar9,lVar13);
        ppcVar10 = ppcVar16;
      }
      else {
        ppcVar10 = ppcVar16;
        func_0x000107c34fec(ppcVar16);
        if (lVar13 != 0) {
          ppcVar15 = (char **)*ppcVar16;
          if (-1 < (char)*(byte *)((long)ppcVar16 + 0x17)) {
            ppcVar15 = ppcVar16;
          }
          do {
            bVar2 = *pbVar9;
            bVar3 = (&UNK_10e52f6e8)[bVar2];
            ppcVar10 = (char **)(ulong)bVar3;
            uVar17 = (uint)bVar2;
            if (bVar3 == 2) {
              ppcVar16 = ppcVar15;
              if (bVar2 < 0x22) {
                if (uVar17 == 9) {
                  *(undefined2 *)ppcVar15 = 0x745c;
                  ppcVar16 = (char **)((long)ppcVar15 + 2);
                }
                else if (uVar17 == 10) {
                  *(undefined2 *)ppcVar15 = 0x6e5c;
                  ppcVar16 = (char **)((long)ppcVar15 + 2);
                }
                else if (uVar17 == 0xd) {
                  *(undefined2 *)ppcVar15 = 0x725c;
                  ppcVar16 = (char **)((long)ppcVar15 + 2);
                }
              }
              else if (bVar2 == 0x22) {
                ppcVar16 = (char **)((long)ppcVar15 + 2);
                *(undefined2 *)ppcVar15 = 0x225c;
              }
              else if (bVar2 == 0x27) {
                ppcVar16 = (char **)((long)ppcVar15 + 2);
                *(undefined2 *)ppcVar15 = 0x275c;
              }
              else if (uVar17 == 0x5c) {
                ppcVar16 = (char **)((long)ppcVar15 + 2);
                *(undefined2 *)ppcVar15 = 0x5c5c;
              }
            }
            else if (bVar3 == 1) {
              *(byte *)ppcVar15 = bVar2;
              ppcVar16 = (char **)((long)ppcVar15 + 1);
            }
            else {
              *(byte *)ppcVar15 = 0x5c;
              *(byte *)((long)ppcVar15 + 1) = bVar2 >> 6 | 0x30;
              *(byte *)((long)ppcVar15 + 2) = bVar2 >> 3 & 7 | 0x30;
              uVar17 = uVar17 & 7 | 0x30;
              ppcVar10 = (char **)(ulong)uVar17;
              *(byte *)((long)ppcVar15 + 3) = (byte)uVar17;
              ppcVar16 = (char **)((long)ppcVar15 + 4);
            }
            pbVar9 = pbVar9 + 1;
            lVar13 = lVar13 + -1;
            ppcVar15 = ppcVar16;
          } while (lVar13 != 0);
        }
      }
      return ppcVar10;
    }
    func_0x00010bd0ba50();
    if ((int)param_2 == 0xc) {
      lVar13 = (long)unaff_x20[10][0x17];
      if (lVar13 < 0) {
        lVar13 = *(long *)(unaff_x20[10] + 8);
      }
      func_0x00010bd0bbe4(uStack_38);
      pbVar9 = extraout_x9;
      ppcVar16 = unaff_x19;
      if (extraout_x10 == extraout_x8_00) goto code_r0x00010ae897f0;
    }
    else {
      func_0x00010bd0bbe4(uStack_38);
      if (extraout_x10_00 == extraout_x8_01) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)();
        return unaff_x19;
      }
    }
    break;
  default:
    goto LAB_10bceedfc;
  }
  ___stack_chk_fail();
LAB_10bceedfc:
  func_0x00010bd0a968();
  FUN_10bdb2a00(&pcStack_68);
  func_0x00010bceee5c();
  func_0x00010ae6c700();
LAB_10bceee20:
  unaff_x20 = &pcStack_68;
  func_0x00010ae6c700();
  func_0x00010bd0a974();
FUN_10bceee30:
  if (unaff_x20[3] != (char *)0x0) {
    func_0x00010bd0aa3c();
  }
  return (char **)unaff_x20[10];
}



/* Entry: 10bceee30; end: 10bceee87;  */

undefined8 FUN_10bceee30(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bd0aa3c();
  }
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10bceee88; end: 10bcef2d3;  */

void FUN_10bceee88(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  func_0x00010bd0c370();
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  uVar3 = *(ulong *)(param_2 + 8);
  if ((uVar3 & 1) != 0) {
    func_0x00010bd0ac7c();
  }
  func_0x000107c30248(param_2 + 0xb0);
  lVar4 = (long)*(char *)(*(long *)(param_1 + 0x10) + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  if (lVar4 != 0) {
    func_0x00010bd0c3ec();
    if ((uVar3 & 1) != 0) {
      func_0x00010bd0ac7c();
    }
    func_0x000107c30248(param_2 + 0xb8);
  }
  if (*(int *)(param_1 + 0x20) == 999) {
    func_0x00010bd0b2d8();
    if ((uVar3 & 1) != 0) {
      func_0x00010bd0ac7c();
    }
    func_0x0001056439e0(param_2 + 0xc0,&UNK_10f82ffa0);
  }
  else if (999 < *(int *)(param_1 + 0x20)) {
    func_0x00010bd0b2d8();
    if ((uVar3 & 1) != 0) {
      func_0x00010bd0ac7c();
    }
    func_0x0001056439e0(param_2 + 0xc0,&UNK_10f82fe78);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0x20);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x20;
  }
  if (*(undefined ***)(param_1 + 0x80) != &PTR_PTR_1134061c0) {
    FUN_10bcd8af8(param_2);
    FUN_10bd10038();
  }
  lVar4 = *(long *)(param_1 + 0x88);
  func_0x00010bd0ac34();
  if (lVar4 != extraout_x8) {
    FUN_10bcd8af8(param_2);
    FUN_10bd04750();
    func_0x00010bd12914();
  }
  iVar5 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x30) <= iVar5) break;
    FUN_10bcef2d4(param_1,iVar5);
    func_0x000107c303b4(param_2 + 0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    iVar5 = iVar5 + 1;
  }
  for (lVar4 = 0; lVar4 < *(int *)(param_1 + 0x34); lVar4 = lVar4 + 1) {
    func_0x000107c2845c(param_2 + 0x90,*(undefined4 *)(*(long *)(param_1 + 0x50) + lVar4 * 4));
  }
  for (lVar4 = 0; lVar4 < *(int *)(param_1 + 0x38); lVar4 = lVar4 + 1) {
    func_0x000107c2845c(param_2 + 0xa0,*(undefined4 *)(*(long *)(param_1 + 0x58) + lVar4 * 4));
  }
  func_0x00010bd0ac50();
  for (; unaff_x20 < *(int *)(param_1 + 0x3c); unaff_x20 = unaff_x20 + 1) {
    lVar6 = *(long *)(param_1 + 0x60);
    lVar7 = param_2 + 0x30;
    func_0x00010bcdc378(lVar7);
    FUN_10bcef320(lVar6 + lVar4,lVar7);
    lVar4 = lVar4 + 0x98;
  }
  func_0x00010bd0ac50();
  while (unaff_x20 < *(int *)(param_1 + 0x40)) {
    lVar6 = *(long *)(param_1 + 0x68);
    lVar7 = param_2 + 0x48;
    FUN_10bcdb45c(lVar7);
    func_0x00010bcef5e4(lVar6 + lVar4,lVar7);
    func_0x00010bd0c3a4();
  }
  for (lVar4 = 0; lVar4 < *(int *)(param_1 + 0x44); lVar4 = lVar4 + 1) {
    lVar6 = *(long *)(param_1 + 0x70) + lVar4 * 0x40;
    lVar7 = param_2 + 0x60;
    func_0x00010bcdb468();
    func_0x00010bd0ac20();
    if ((uVar3 & 1) != 0) {
      func_0x00010bd0ac7c();
    }
    func_0x000107c30248(lVar7 + 0x30);
    unaff_x20 = 0;
    for (lVar9 = 0; lVar9 < *(int *)(lVar6 + 0x38); lVar9 = lVar9 + 1) {
      lVar10 = *(long *)(lVar6 + 0x30);
      lVar8 = lVar10 + unaff_x20;
      lVar1 = lVar7 + 0x18;
      FUN_10bcdbf98();
      func_0x00010bd0ac20();
      if ((uVar3 & 1) != 0) {
        func_0x00010bd0ac7c();
      }
      func_0x000107c30248(lVar1 + 0x18);
      lVar2 = lVar8;
      FUN_10bcefa9c();
      if ((*(byte *)(lVar2 + 1) >> 1 & 1) == 0) {
        func_0x00010bd0c3ec();
        if ((uVar3 & 1) != 0) {
          func_0x00010bd0ac7c();
        }
        func_0x0001056439e0(lVar1 + 0x20,&DAT_10f62a9de);
      }
      FUN_10bcdbfe8(lVar1);
      FUN_10bcefa9c(lVar8);
      func_0x00010bd0ba70();
      lVar2 = lVar8;
      func_0x00010bcefaa8();
      if ((*(byte *)(lVar2 + 1) >> 1 & 1) == 0) {
        func_0x00010bd0b2d8();
        if ((uVar3 & 1) != 0) {
          func_0x00010bd0ac7c();
        }
        func_0x0001056439e0(lVar1 + 0x28,&DAT_10f62a9de);
      }
      func_0x00010bcdc010(lVar1);
      func_0x00010bcefaa8(lVar8);
      func_0x00010bd0ba70();
      if (*(undefined ***)(lVar10 + unaff_x20 + 0x38) != &PTR_PTR_113406110) {
        func_0x00010bcdaf30(lVar1);
        FUN_10bd11f40();
      }
      if (*(char *)(lVar10 + unaff_x20 + 1) == '\x01') {
        *(undefined1 *)(lVar1 + 0x38) = 1;
        *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 0x10;
      }
      if (*(char *)(lVar10 + unaff_x20 + 2) == '\x01') {
        *(undefined1 *)(lVar1 + 0x39) = 1;
        *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 0x20;
      }
      lVar8 = *(long *)(lVar10 + unaff_x20 + 0x40);
      func_0x00010bd0ac34();
      if (lVar8 != extraout_x8_00) {
        func_0x00010bcdaf30(lVar1);
        func_0x00010bd048b4();
        func_0x00010bd12914();
      }
      unaff_x20 = unaff_x20 + 0x50;
    }
    if (*(undefined ***)(lVar6 + 0x18) != &PTR_PTR_113406068) {
      func_0x00010bcdaf20(lVar7);
      FUN_10bd11c34();
    }
    lVar6 = *(long *)(lVar6 + 0x20);
    func_0x00010bd0ac34();
    if (lVar6 != extraout_x8_01) {
      func_0x00010bcdaf20(lVar7);
      func_0x00010bd04884();
      func_0x00010bd0c0a8();
    }
  }
  func_0x00010bd0ac50();
  while (unaff_x20 < *(int *)(param_1 + 4)) {
    lVar7 = *(long *)(param_1 + 0x78);
    lVar4 = param_2 + 0x78;
    func_0x00010bcdc384(lVar4);
    FUN_10bcef768(lVar7 + 1,lVar4);
    func_0x00010bd0c3a4();
  }
  return;
}



/* Entry: 10bcef2d4; end: 10bcef31f;  */

undefined8 FUN_10bcef2d4(long param_1,int param_2)

{
  int *piVar1;
  long lStack_28;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0xdd) {
      lStack_28 = param_1;
      FUN_10bd09e34(piVar1,&lStack_28);
    }
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)param_2 * 8);
}



/* Entry: 10bcef320; end: 10bcef767;  */

void FUN_10bcef320(void)

{
  undefined4 *puVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined **ppuVar3;
  long unaff_x22;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x30;
  
  func_0x00010bd0bbbc();
  func_0x00010bd0a97c();
  if ((unaff_x30 & 1) != 0) {
    func_0x00010bd0ac7c();
  }
  func_0x000107c30248(unaff_x19 + 0xd8);
  func_0x00010bd0b13c();
  while (unaff_x22 < *(int *)(unaff_x20 + 0x90)) {
    FUN_10bcdbd38(unaff_x19 + 0xa8);
    func_0x00010bd0be68(*(undefined8 *)(unaff_x20 + 0x68));
    func_0x00010bd0b790();
  }
  for (ppuVar4 = (undefined **)0x0; (long)ppuVar4 < (long)*(int *)(unaff_x20 + 0x94);
      ppuVar4 = (undefined **)((long)ppuVar4 + 1)) {
    func_0x000107c303b4(unaff_x19 + 0xc0);
    func_0x00010bd0c0f0();
  }
  if (*(undefined ***)(unaff_x20 + 0x20) != &PTR_PTR_113406168) {
    FUN_10bcd9a58();
    FUN_10bd103f0();
  }
  ppuVar3 = *(undefined ***)(unaff_x20 + 0x28);
  if (ppuVar3 != &PTR_PTR_113405ec0) {
    FUN_10bcd9a58();
    func_0x00010bd04790();
    func_0x00010bd12914();
  }
  func_0x00010bd0b13c();
  for (; (long)ppuVar4 < (long)*(int *)(unaff_x20 + 4); ppuVar4 = (undefined **)((long)ppuVar4 + 1))
  {
    unaff_x24 = *(long *)(unaff_x20 + 0x38);
    lVar5 = unaff_x19 + 0x18;
    func_0x00010bcdc384(lVar5);
    FUN_10bcef768(unaff_x24 + (long)ppuVar3,lVar5);
    ppuVar3 = ppuVar3 + 0xb;
  }
  func_0x00010bd0c48c();
  for (; unaff_x25 < *(int *)(unaff_x20 + 0x78); unaff_x25 = unaff_x25 + 1) {
    lVar5 = *(long *)(unaff_x20 + 0x40);
    ppuVar3 = (undefined **)(unaff_x19 + 0x90);
    FUN_10bcdbb08();
    func_0x00010bd0ac20();
    if ((unaff_x30 & 1) != 0) {
      func_0x00010bd0ac7c();
    }
    func_0x000107c30248(ppuVar3 + 3);
    lVar5 = lVar5 + unaff_x24;
    if (*(undefined ***)(lVar5 + 0x18) != &PTR_PTR_1134060c0) {
      FUN_10bcdaef0(ppuVar3);
      FUN_10bd112b8();
    }
    ppuVar4 = *(undefined ***)(lVar5 + 0x20);
    if (ppuVar4 != &PTR_PTR_113405ec0) {
      FUN_10bcdaef0(ppuVar3);
      func_0x00010bd047f4();
      func_0x00010bd0c1d4();
    }
    unaff_x24 = unaff_x24 + 0x38;
  }
  func_0x00010bd0b13c();
  for (; (long)ppuVar4 < (long)*(int *)(unaff_x20 + 0x80);
      ppuVar4 = (undefined **)((long)ppuVar4 + 1)) {
    unaff_x24 = *(long *)(unaff_x20 + 0x48);
    lVar5 = unaff_x19 + 0x30;
    func_0x00010bcdc378(lVar5);
    FUN_10bcef320(unaff_x24 + (long)ppuVar3,lVar5);
    ppuVar3 = ppuVar3 + 0x13;
  }
  func_0x00010bd0b13c();
  for (; (long)ppuVar4 < (long)*(int *)(unaff_x20 + 0x84);
      ppuVar4 = (undefined **)((long)ppuVar4 + 1)) {
    unaff_x24 = *(long *)(unaff_x20 + 0x50);
    lVar5 = unaff_x19 + 0x48;
    FUN_10bcdb45c(lVar5);
    func_0x00010bcef5e4(unaff_x24 + (long)ppuVar3,lVar5);
    ppuVar3 = ppuVar3 + 0xb;
  }
  func_0x00010bd0c48c();
  for (; unaff_x25 < *(int *)(unaff_x20 + 0x88); unaff_x25 = unaff_x25 + 1) {
    puVar1 = (undefined4 *)(*(long *)(unaff_x20 + 0x58) + unaff_x24);
    ppuVar3 = (undefined **)(unaff_x19 + 0x60);
    func_0x00010bcdbc8c();
    *(undefined4 *)(ppuVar3 + 4) = *puVar1;
    uVar2 = *(uint *)(ppuVar3 + 2);
    *(uint *)(ppuVar3 + 2) = uVar2 | 2;
    *(undefined4 *)((long)ppuVar3 + 0x24) = puVar1[1];
    *(uint *)(ppuVar3 + 2) = uVar2 | 6;
    if (*(undefined ***)(puVar1 + 2) != &PTR_PTR_113406340) {
      FUN_10bcdad64(ppuVar3);
      FUN_10bd0e2c8();
    }
    ppuVar4 = *(undefined ***)(puVar1 + 6);
    if (ppuVar4 != &PTR_PTR_113405ec0) {
      FUN_10bcdad64(ppuVar3);
      FUN_10bd04658();
      func_0x00010bd0c1d4();
    }
    unaff_x24 = unaff_x24 + 0x28;
  }
  func_0x00010bd0b13c();
  for (; (long)ppuVar4 < (long)*(int *)(unaff_x20 + 0x8c);
      ppuVar4 = (undefined **)((long)ppuVar4 + 1)) {
    lVar6 = *(long *)(unaff_x20 + 0x60);
    lVar5 = unaff_x19 + 0x78;
    func_0x00010bcdc384(lVar5);
    FUN_10bcef768(lVar6 + (long)ppuVar3,lVar5);
    ppuVar3 = ppuVar3 + 0xb;
  }
  return;
}



/* Entry: 10bcef768; end: 10bcefa5b;  */

void FUN_10bcef768(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x00010bd0a97c();
  if ((param_3 & 1) != 0) {
    func_0x00010bd0ac7c();
  }
  iVar2 = (int)unaff_x19 + 0x18;
  func_0x000107c30248();
  *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x20 + 4);
  uVar4 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar4 | 0x40;
  bVar1 = *(byte *)(unaff_x20 + 1);
  if ((bVar1 >> 2 & 1) != 0) {
    func_0x00010bd0b5ac(uVar4 | 0x50);
    if ((param_3 & 1) != 0) {
      func_0x00010bd0ac7c();
    }
    iVar2 = (int)unaff_x19 + 0x38;
    func_0x000107c30248();
    bVar1 = *(byte *)(unaff_x20 + 1);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    *(undefined1 *)(unaff_x19 + 0x50) = 1;
    *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | 0x100;
  }
  func_0x00010bd0c814(*(undefined8 *)(unaff_x20 + 0x48));
  if (((bool)in_ZR) && (999 < *(int *)(*(long *)(unaff_x20 + 0x10) + 0x20))) {
    uVar4 = 1;
  }
  else {
    uVar4 = (uint)(*(byte *)(unaff_x20 + 1) >> 6);
  }
  *(uint *)(unaff_x19 + 0x54) = uVar4;
  *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | 0x200;
  func_0x00010bd0ba50();
  if ((iVar2 == 10) && (999 < *(int *)(*(long *)(unaff_x20 + 0x10) + 0x20))) {
    iVar2 = 0xb;
  }
  else {
    func_0x00010bd0ba50();
  }
  *(int *)(unaff_x19 + 0x58) = iVar2;
  uVar4 = *(uint *)(unaff_x19 + 0x10);
  uVar5 = uVar4 | 0x400;
  *(uint *)(unaff_x19 + 0x10) = uVar5;
  if ((*(byte *)(unaff_x20 + 1) >> 3 & 1) != 0) {
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 1) >> 1 & 1) == 0) {
      func_0x00010bd0b5ac(uVar4 | 0x402);
      if ((param_3 & 1) != 0) {
        func_0x00010bd0ac7c();
      }
      func_0x0001056439e0(unaff_x19 + 0x20,&DAT_10f62a9de);
      uVar5 = *(uint *)(unaff_x19 + 0x10);
    }
    *(uint *)(unaff_x19 + 0x10) = uVar5 | 2;
    uVar3 = *(ulong *)(unaff_x19 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30250(unaff_x19 + 0x20,uVar3);
    func_0x000107c27fc4();
  }
  lVar6 = unaff_x20;
  func_0x00010b91adc8();
  if ((int)lVar6 == 10) {
    func_0x00010bd0b40c();
    if ((*(byte *)(lVar6 + 1) & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x58) = 1;
      *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) & 0xfffffbff;
    }
    func_0x00010bd0b40c();
    if ((*(byte *)(lVar6 + 1) >> 1 & 1) == 0) {
      func_0x00010bd0b5ac(*(uint *)(unaff_x19 + 0x10) | 4);
      if ((param_3 & 1) != 0) {
        func_0x00010bd0ac7c();
      }
      func_0x00010bd0bb18();
    }
    FUN_10bcff054();
    func_0x00010bd0b40c();
  }
  else {
    lVar6 = unaff_x20;
    func_0x00010b91adc8();
    if ((int)lVar6 != 8) goto LAB_10bcef990;
    func_0x00010bd0c144();
    if ((*(byte *)(lVar6 + 1) >> 1 & 1) == 0) {
      func_0x00010bd0b5ac(*(uint *)(unaff_x19 + 0x10) | 4);
      if ((param_3 & 1) != 0) {
        func_0x00010bd0ac7c();
      }
      func_0x00010bd0bb18();
    }
    FUN_10bcff054();
    func_0x00010bd0c144();
  }
  func_0x00010bd0c26c();
LAB_10bcef990:
  bVar1 = *(byte *)(unaff_x20 + 1);
  if ((bVar1 & 1) != 0) {
    uVar3 = 0;
    FUN_10bceeba8(auStack_48);
    func_0x00010bd0b5ac(*(uint *)(unaff_x19 + 0x10) | 8);
    if ((uVar3 & 1) != 0) {
      func_0x00010bd0ac7c();
    }
    func_0x000107c3024c(unaff_x19 + 0x30,auStack_48);
    func_0x00010bd0aab8();
    bVar1 = *(byte *)(unaff_x20 + 1);
  }
  if ((((bVar1 >> 4 & 1) != 0) && ((bVar1 >> 3 & 1) == 0)) &&
     (lVar6 = *(long *)(unaff_x20 + 0x28), lVar6 != 0)) {
    *(int *)(unaff_x19 + 0x4c) = (int)((lVar6 - *(long *)(*(long *)(lVar6 + 0x10) + 0x40)) / 0x38);
    *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | 0x80;
  }
  if (*(undefined ***)(unaff_x20 + 0x38) != &PTR_PTR_113406270) {
    FUN_10bcdab50();
    FUN_10bd11004();
  }
  lVar6 = *(long *)(unaff_x20 + 0x40);
  func_0x00010bd0ac34();
  if (lVar6 != extraout_x8) {
    FUN_10bcdab50();
    func_0x00010bd047c0();
    func_0x00010bd12914();
  }
  return;
}



/* Entry: 10bcefa5c; end: 10bcefa9b;  */

undefined8 FUN_10bcefa5c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bd0aa3c();
  }
  if (*(char *)(param_1 + 2) == '\x0e') {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10bcefa9c; end: 10bcefab3;  */

undefined8 FUN_10bcefa9c(long param_1)

{
  int *piVar1;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    puStack_38 = &uStack_28;
    if (*piVar1 != 0xdd) {
      puStack_30 = (undefined8 *)(param_1 + 0x18);
      FUN_10bd09e88(piVar1,&puStack_38);
    }
  }
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bcefab4; end: 10bcefbcb;  */

undefined ** FUN_10bcefab4(undefined **param_1)

{
  undefined *puVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined **extraout_x10;
  undefined **extraout_x10_00;
  undefined1 *extraout_x10_01;
  undefined **unaff_x19;
  long unaff_x20;
  undefined *puVar5;
  undefined *apuStack_160 [3];
  undefined1 *puStack_148;
  undefined *apuStack_c0 [3];
  undefined *apuStack_a8 [6];
  undefined **ppuStack_78;
  undefined8 uStack_48;
  
  func_0x00010bd0a30c();
  uStack_48 = extraout_x8;
  func_0x00010bd0adc4();
  uVar2 = 0;
  if ((bool)in_ZR) {
    func_0x00010bd0aa10();
    puVar5 = param_1[9];
    puVar1 = param_1[10];
    while( true ) {
      in_OV = SBORROW8((long)puVar5,(long)puVar1);
      in_NG = (long)puVar5 - (long)puVar1 < 0;
      uVar2 = puVar5 == puVar1;
      if ((bool)uVar2) break;
      FUN_10bcff0ac(apuStack_c0);
      func_0x00010bd0a58c();
      ppuStack_78 = extraout_x10;
      if (in_NG == in_OV) {
        ppuStack_78 = apuStack_c0;
      }
      puVar3 = &DAT_10f68f57e;
      func_0x000107c284bc();
      param_1 = unaff_x19;
      apuStack_a8[0] = puVar3;
      func_0x00010ae8c94c();
      func_0x00010bd0aaa4();
      puVar5 = puVar5 + 0x18;
    }
    if (*(char *)(unaff_x20 + 0x2f) < '\0') {
      if (*(long *)(unaff_x20 + 0x20) != 0) goto LAB_10bcefb58;
    }
    else if (*(char *)(unaff_x20 + 0x2f) != '\0') {
LAB_10bcefb58:
      param_1 = apuStack_a8;
      FUN_10bcff0ac();
      func_0x00010bd0abf8();
      ppuStack_78 = extraout_x10_00;
      if (in_NG == in_OV) {
        ppuStack_78 = apuStack_a8;
      }
      func_0x00010bd0c2b4();
      func_0x00010bd0aacc();
    }
  }
  func_0x000107c3a64c(uStack_48);
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bd0b150();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bd0a974();
  func_0x00010bd0a30c();
  func_0x00010ae8cb8c();
  func_0x000107c3a64c(extraout_x8_00);
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar4 = apuStack_160;
  func_0x00010bd0a0d0();
  func_0x00010bd0adc4();
  if ((bool)uVar2) {
    if (*(char *)((long)param_1 + 0x47) < '\0') {
      if (param_1[7] == (undefined *)0x0) goto LAB_10bcefc70;
    }
    else if (*(char *)((long)param_1 + 0x47) == '\0') goto LAB_10bcefc70;
    FUN_10bcff0ac(apuStack_160,param_1,param_1 + 6);
    func_0x00010bd0a58c();
    puStack_148 = extraout_x10_01;
    if (in_NG == in_OV) {
      puStack_148 = (undefined1 *)apuStack_160;
    }
    func_0x00010bd0c2b4();
    func_0x00010bd0aaa4();
    param_1 = ppuVar4;
  }
LAB_10bcefc70:
  func_0x000107c3a63c();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bd0a774();
  func_0x00010bd0a974();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd);
  FUN_10bcff078(param_1 + 1);
  return param_1;
}



/* Entry: 10bcefbcc; end: 10bcefc07;  */

undefined1 * FUN_10bcefbcc(undefined1 *param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined1 auStack_a0 [24];
  undefined1 *puStack_88;
  
  func_0x00010bd0a30c();
  func_0x00010ae8cb8c();
  func_0x000107c3a64c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar1 = auStack_a0;
  func_0x00010bd0a0d0();
  func_0x00010bd0adc4();
  if ((bool)in_ZR) {
    if ((char)param_1[0x47] < '\0') {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_10bcefc70;
    }
    else if (param_1[0x47] == '\0') goto LAB_10bcefc70;
    FUN_10bcff0ac(auStack_a0,param_1,param_1 + 0x30);
    func_0x00010bd0a58c();
    puStack_88 = extraout_x10;
    if (in_NG == in_OV) {
      puStack_88 = auStack_a0;
    }
    func_0x00010bd0c2b4();
    func_0x00010bd0aaa4();
    param_1 = puVar1;
  }
LAB_10bcefc70:
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bd0a774();
  func_0x00010bd0a974();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x68);
  FUN_10bcff078(param_1 + 8);
  return param_1;
}



/* Entry: 10bcefc08; end: 10bcefc97;  */

undefined1 * FUN_10bcefc08(undefined1 *param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 *puVar1;
  undefined1 *extraout_x10;
  undefined1 auStack_70 [24];
  undefined1 *puStack_58;
  
  puVar1 = auStack_70;
  func_0x00010bd0a0d0();
  func_0x00010bd0adc4();
  if ((bool)in_ZR) {
    if ((char)param_1[0x47] < '\0') {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_10bcefc70;
    }
    else if (param_1[0x47] == '\0') goto LAB_10bcefc70;
    FUN_10bcff0ac(auStack_70,param_1,param_1 + 0x30);
    func_0x00010bd0a58c();
    puStack_58 = extraout_x10;
    if (in_NG == in_OV) {
      puStack_58 = auStack_70;
    }
    func_0x00010bd0c2b4();
    func_0x00010bd0aaa4();
    param_1 = puVar1;
  }
LAB_10bcefc70:
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bd0a774();
  func_0x00010bd0a974();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x68);
  FUN_10bcff078(param_1 + 8);
  return param_1;
}



/* Entry: 10bcefc98; end: 10bcefcc3;  */

long FUN_10bcefc98(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x68);
  FUN_10bcff078(param_1 + 8);
  return param_1;
}



/* Entry: 10bcefcc4; end: 10bcefd8f;  */

void FUN_10bcefcc4(int param_1)

{
  long lVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x00010bd0b07c();
  func_0x00010bd0b474(auStack_58,(long)(param_1 << 1));
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  FUN_10bcff240();
  lVar1 = lStack_68;
  lVar2 = lStack_70;
  if (param_1 != 0) {
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
      func_0x00010bd0abf8();
      func_0x00010bd0c628();
      func_0x000107c3a68c();
      FUN_10bcf1384();
    }
  }
  func_0x000107c278a8(&lStack_70);
  func_0x00010bd0aacc();
  return;
}



/* Entry: 10bcefd90; end: 10bcefdbb;  */

bool FUN_10bcefd90(int param_1,undefined8 param_2)

{
  if (param_1 < 1000) {
    func_0x00010787827c(param_2);
    return (int)param_2 == 10;
  }
  return false;
}



/* Entry: 10bcefdbc; end: 10bcf0dbf;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10bcefdbc(byte *param_1,int param_2,undefined8 *******param_3,byte *param_4,int param_5,
                    undefined8 param_6,undefined8 *******param_7)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 *****pppppuVar17;
  undefined8 ****ppppuVar18;
  char *pcVar19;
  byte *pbVar20;
  byte *pbVar21;
  int iVar22;
  undefined8 ******ppppppuVar23;
  code *pcVar24;
  uint uVar25;
  undefined8 extraout_x8;
  undefined8 *******extraout_x8_00;
  long extraout_x8_01;
  undefined8 *******extraout_x8_02;
  long extraout_x8_03;
  undefined8 *******extraout_x8_04;
  undefined8 *******extraout_x8_05;
  long extraout_x8_06;
  undefined8 *******extraout_x8_07;
  long extraout_x8_08;
  undefined8 extraout_x8_09;
  long extraout_x8_10;
  undefined8 *******extraout_x8_11;
  undefined8 *******extraout_x8_12;
  undefined8 extraout_x8_13;
  undefined8 extraout_x8_14;
  undefined8 extraout_x8_15;
  long extraout_x8_16;
  undefined8 extraout_x8_17;
  undefined8 *******extraout_x9;
  undefined8 *******extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 *******extraout_x9_02;
  undefined8 *******extraout_x9_03;
  undefined8 *******extraout_x9_04;
  long lVar26;
  undefined8 *******extraout_x9_05;
  undefined8 extraout_x10;
  byte *extraout_x10_00;
  undefined8 *******extraout_x10_01;
  undefined8 *******extraout_x10_02;
  byte *extraout_x10_03;
  undefined8 *****extraout_x10_04;
  undefined8 *****extraout_x10_05;
  int extraout_w11;
  undefined8 *******extraout_x11;
  undefined8 *******extraout_x11_00;
  undefined8 *******extraout_x11_01;
  undefined8 *******extraout_x11_02;
  undefined8 *******extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 *******extraout_x11_05;
  undefined8 extraout_x11_06;
  undefined8 extraout_x11_07;
  undefined8 *******extraout_x12;
  undefined8 *******extraout_x12_00;
  undefined8 *******extraout_x12_01;
  undefined8 *******extraout_x12_02;
  long lVar27;
  undefined1 *puVar28;
  long unaff_x21;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 *******unaff_x30;
  undefined8 in_stack_00000050;
  undefined1 auStack_5c0 [24];
  long lStack_5a8;
  long lStack_5a0;
  undefined8 uStack_598;
  byte *pbStack_590;
  byte *pbStack_588;
  undefined8 ***pppuStack_580;
  code *pcStack_578;
  byte *pbStack_568;
  undefined8 uStack_560;
  undefined8 *******pppppppuStack_558;
  undefined8 *******pppppppuStack_550;
  undefined8 uStack_548;
  undefined8 **ppuStack_540;
  code *pcStack_538;
  byte *pbStack_530;
  int iStack_524;
  byte bStack_520;
  undefined7 uStack_51f;
  ulong uStack_518;
  byte bStack_509;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 auStack_4f0 [24];
  undefined8 *****pppppuStack_4d8;
  undefined8 ******ppppppuStack_4d0;
  byte *pbStack_4c8;
  ulong uStack_4c0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 *******pppppppuStack_408;
  undefined8 *******pppppppuStack_400;
  byte bStack_3f1;
  undefined8 uStack_3b0;
  undefined2 uStack_3a8;
  byte bStack_3a6;
  undefined1 auStack_3a0 [24];
  undefined8 uStack_388;
  undefined8 *******pppppppuStack_370;
  long lStack_360;
  int iStack_354;
  long lStack_350;
  byte *pbStack_348;
  long lStack_340;
  byte *pbStack_338;
  int iStack_32c;
  undefined8 *******pppppppuStack_328;
  undefined8 *puStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [88];
  undefined1 auStack_2a8 [88];
  undefined8 uStack_250;
  undefined2 uStack_248;
  byte bStack_246;
  undefined1 auStack_240 [24];
  byte abStack_228 [24];
  undefined1 auStack_210 [24];
  undefined8 *******pppppppuStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *******pppppppuStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  undefined8 *******pppppppuStack_170;
  undefined8 *******pppppppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  byte bStack_10e;
  undefined1 auStack_108 [24];
  undefined8 *******pppppppuStack_f0;
  undefined8 *******pppppppuStack_e8;
  undefined8 uStack_e0;
  undefined8 *******pppppppuStack_90;
  undefined8 *******apppppppuStack_88 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 uStack_30;
  byte bStack_2e;
  undefined1 auStack_28 [24];
  undefined8 uStack_10;
  
  func_0x00010bd0bbbc();
  pppppppuStack_328 = param_3;
  func_0x00010bd0a30c();
  pbStack_348 = param_1;
  uStack_10 = extraout_x8;
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x53) & 1) == 0) {
    func_0x00010bd0b474(abStack_228,(long)(param_2 << 1));
    puVar28 = auStack_2a8;
    uStack_250 = 0;
    func_0x00010bd0be80(auStack_2a8);
    uStack_248 = *(undefined2 *)param_4;
    bStack_246 = param_4[2];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_240,abStack_228);
    uVar25 = (uint)*param_4;
    cVar4 = SBORROW4(uVar25,1);
    cVar5 = (int)(uVar25 - 1) < 0;
    if (uVar25 == 1) {
      func_0x00010bd0c5f8();
      pbVar15 = pbStack_348;
      FUN_10bcf1918(pbStack_348,&pppppppuStack_90);
      uVar8 = *(undefined8 *)(pbVar15 + 0x10);
      func_0x00010bd0c1f4(uVar8,&pppppppuStack_90);
      func_0x00010bd0b458();
      auStack_2a8[0] = (char)uVar8;
    }
    else {
      auStack_2a8[0] = 0;
    }
    FUN_10bcefab4(auStack_2a8,pppppppuStack_328);
    if (param_5 != 0) {
      func_0x00010bd0a4cc();
      func_0x00010bd0a0f8(*(undefined8 *)(pbStack_348 + 8));
      param_7 = extraout_x12;
      unaff_x30 = extraout_x11;
      if (cVar5 == cVar4) {
        param_7 = extraout_x9;
        unaff_x30 = extraout_x8_00;
      }
      func_0x00010bd0c1cc(pppppppuStack_328,&UNK_10f831ba0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (pppppppuStack_328," {\n");
    pbVar15 = pbStack_348;
    param_3 = *(undefined8 ********)(pbStack_348 + 0x20);
    FUN_10bd10068(auStack_300,0);
    lVar30 = *(long *)(pbVar15 + 0x28);
    func_0x00010bd0ac34();
    if (lVar30 != extraout_x8_01) {
      func_0x00010bd04790(auStack_300);
      func_0x00010bd0c0a8();
    }
    iStack_354 = param_2 + 1;
    func_0x00010bd0c610(pbStack_348);
    FUN_10bcefcc4();
    func_0x00010bd0b0d4();
    func_0x000107c3a6bc();
    pbVar15 = pbStack_348;
    pcStack_318 = (code *)0x0;
    uStack_310 = 0;
    uStack_308 = 0;
    for (; unaff_x21 < *(int *)(pbVar15 + 4); unaff_x21 = unaff_x21 + 1) {
      iVar22 = *(int *)(*(long *)(pbVar15 + 0x10) + 0x20);
      FUN_10bcefd90(iVar22,puVar28 + *(long *)(pbVar15 + 0x38));
      if (iVar22 != 0) {
        pppppppuVar9 = (undefined8 *******)(puVar28 + *(long *)(pbVar15 + 0x38));
        FUN_10bcee28c();
        pppppppuStack_170 = pppppppuVar9;
        func_0x00010bd0bab8();
      }
      puVar28 = puVar28 + 0x58;
    }
    func_0x00010bd0b0d4();
    for (; unaff_x21 < *(int *)(pbVar15 + 0x8c); unaff_x21 = unaff_x21 + 1) {
      iVar22 = *(int *)(*(long *)(pbVar15 + 0x10) + 0x20);
      FUN_10bcefd90(iVar22,puVar28 + *(long *)(pbVar15 + 0x60));
      if (iVar22 != 0) {
        pppppppuVar9 = (undefined8 *******)(puVar28 + *(long *)(pbVar15 + 0x60));
        FUN_10bcee28c();
        pppppppuStack_170 = pppppppuVar9;
        func_0x00010bd0bab8();
      }
      puVar28 = puVar28 + 0x58;
    }
    func_0x00010bd0b0d4();
    for (; unaff_x21 < *(int *)(pbVar15 + 0x80); unaff_x21 = unaff_x21 + 1) {
      pppppppuStack_90 = (undefined8 *******)(puVar28 + *(long *)(pbVar15 + 0x48));
      ppuVar10 = &puStack_320;
      FUN_10bd0440c(ppuVar10,&pppppppuStack_90);
      if (ppuVar10 == (undefined8 **)0x0) {
        param_3 = pppppppuStack_328;
        FUN_10bcefdbc(puVar28 + *(long *)(pbVar15 + 0x48),iStack_354,pppppppuStack_328,param_4,1);
      }
      puVar28 = puVar28 + 0x98;
    }
    lStack_360 = (long)(iStack_354 << 1);
    iStack_32c = param_2 + 2;
    lStack_340 = (long)(iStack_32c * 2);
    pppppppuVar9 = pppppppuStack_328;
    pbStack_338 = param_4;
    for (lVar30 = 0; lVar30 < *(int *)(pbVar15 + 0x84); lVar30 = lVar30 + 1) {
      lVar27 = *(long *)(pbVar15 + 0x50);
      func_0x00010bd0b474(auStack_210,lStack_360);
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_110 = *(undefined2 *)param_4;
      bStack_10e = param_4[2];
      pppppppuVar14 = &pppppppuStack_170;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_108,auStack_210);
      lVar27 = lVar27 + lVar30 * 0x58;
      uVar25 = (uint)*param_4;
      cVar4 = SBORROW4(uVar25,1);
      cVar5 = (int)(uVar25 - 1) < 0;
      if (uVar25 == 1) {
        func_0x00010bd0c5f8();
        func_0x00010bcf1a28(lVar27,&pppppppuStack_90);
        uVar8 = *(undefined8 *)(lVar27 + 0x10);
        func_0x00010bd0c1f4(uVar8,&pppppppuStack_90);
        uVar6 = (undefined1)uVar8;
        func_0x00010bd0b458();
      }
      else {
        uVar6 = 0;
      }
      pppppppuStack_170 = (undefined8 *******)CONCAT71(pppppppuStack_170._1_7_,uVar6);
      FUN_10bcefab4(&pppppppuStack_170,pppppppuVar9);
      func_0x00010bd0a894();
      func_0x00010bd0a0f8(*(undefined8 *)(lVar27 + 8));
      param_7 = extraout_x12_00;
      unaff_x30 = extraout_x11_00;
      if (cVar5 == cVar4) {
        param_7 = extraout_x9_00;
        unaff_x30 = extraout_x8_02;
      }
      func_0x00010bd0c1cc(pppppppuVar9,&UNK_10f831c6d);
      FUN_10bd112e8(&pppppppuStack_1c8,0,*(undefined8 *)(lVar27 + 0x20));
      lVar32 = *(long *)(lVar27 + 0x28);
      func_0x00010bd0ac34();
      if (lVar32 != extraout_x8_03) {
        func_0x00010bd04824(&pppppppuStack_1c8);
        func_0x00010bd0bb10();
      }
      param_3 = *(undefined8 ********)(*(long *)(lVar27 + 0x10) + 0x18);
      FUN_10bcefcc4(iStack_32c,&pppppppuStack_1c8,param_3,pppppppuVar9);
      lVar31 = 0;
      lStack_350 = lVar30;
      for (lVar32 = 0; pbVar15 = pbStack_348, lVar30 = lStack_350, lVar32 < *(int *)(lVar27 + 4);
          lVar32 = lVar32 + 1) {
        unaff_x21 = *(long *)(lVar27 + 0x38);
        func_0x00010bd0b474(&uStack_1e0,lStack_340);
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_78 = 0;
        uStack_30 = *(undefined2 *)param_4;
        bStack_2e = param_4[2];
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_28,&uStack_1e0);
        uVar25 = (uint)*param_4;
        cVar4 = SBORROW4(uVar25,1);
        cVar5 = (int)(uVar25 - 1) < 0;
        if (uVar25 == 1) {
          pppppppuStack_e8 = (undefined8 *******)0x0;
          pppppppuStack_f0 = (undefined8 *******)0x0;
          uStack_e0 = 0;
          func_0x00010bcf1ac8(unaff_x21 + lVar31,&pppppppuStack_f0);
          uVar8 = *(undefined8 *)(*(long *)(unaff_x21 + lVar31 + 0x10) + 0x10);
          FUN_10bcf16b8(uVar8,&pppppppuStack_f0,apppppppuStack_88);
          uVar6 = (undefined1)uVar8;
          func_0x000107c27a18(&pppppppuStack_f0);
        }
        else {
          uVar6 = 0;
        }
        pppppppuStack_90 = (undefined8 *******)CONCAT71(pppppppuStack_90._1_7_,uVar6);
        FUN_10bcefab4(&pppppppuStack_90,pppppppuVar9);
        func_0x00010bd0bd78();
        pppppppuVar14 = extraout_x11_01;
        uVar8 = extraout_x10;
        if (cVar5 == cVar4) {
          pppppppuVar14 = extraout_x8_04;
          uVar8 = extraout_x9_01;
        }
        func_0x00010bd0a0f8(*(undefined8 *)(unaff_x21 + lVar31 + 8));
        param_7 = extraout_x12_01;
        unaff_x30 = extraout_x11_02;
        if (cVar5 == cVar4) {
          param_7 = extraout_x9_02;
          unaff_x30 = extraout_x8_05;
        }
        func_0x00010bd0c128();
        pppppppuStack_370 = pppppppuStack_e8;
        FUN_10bcf1514(pppppppuVar9,&UNK_10f831c7a,9,uVar8,pppppppuVar14,unaff_x30,param_7,
                      pppppppuStack_f0);
        param_3 = *(undefined8 ********)(unaff_x21 + lVar31 + 0x18);
        FUN_10bd11620(&pppppppuStack_f0,0);
        lVar30 = *(long *)(unaff_x21 + lVar31 + 0x20);
        func_0x00010bd0ac34();
        if (lVar30 != extraout_x8_06) {
          func_0x00010bd04854(&pppppppuStack_f0);
          func_0x00010bd0bb10();
        }
        pppppppuStack_1f8 = (undefined8 *******)0x0;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        func_0x00010bd0c610(*(undefined8 *)(unaff_x21 + lVar31 + 0x10));
        iVar22 = iStack_32c;
        FUN_10bcf13c4(iStack_32c,&pppppppuStack_f0);
        pppppppuVar9 = pppppppuStack_328;
        param_4 = pbStack_338;
        if (iVar22 != 0) {
          uVar2 = uStack_1f0;
          pppppppuVar13 = pppppppuStack_1f8;
          if (-1 < (long)uStack_1e8) {
            uVar2 = uStack_1e8 >> 0x38;
            pppppppuVar13 = &pppppppuStack_1f8;
          }
          param_3 = (undefined8 *******)0x5;
          FUN_10bcefbcc(pppppppuStack_328,&UNK_10f831c84,5,pppppppuVar13,uVar2);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (pppppppuVar9,&UNK_10f480bab);
        FUN_10bcefc08(&pppppppuStack_90,pppppppuVar9);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_1f8);
        FUN_10bd116a4(&pppppppuStack_f0);
        func_0x00010bd0bab0();
        func_0x00010bd0c158();
        lVar31 = lVar31 + 0x30;
      }
      if (0 < *(int *)(lVar27 + 0x40)) {
        func_0x00010bd0a894();
        func_0x00010bd0b6c0();
        func_0x00010bd0b0d4();
        for (; unaff_x21 < *(int *)(lVar27 + 0x40); unaff_x21 = unaff_x21 + 1) {
          piVar1 = (int *)(*(long *)(lVar27 + 0x48) + (long)pppppppuVar14);
          iVar22 = piVar1[1];
          if (iVar22 == *piVar1) {
            func_0x00010bcff8a4(&pppppppuStack_90,iVar22);
            func_0x00010bd0b65c(pppppppuVar9,&UNK_10f831bed);
          }
          else if (iVar22 == 0x7fffffff) {
            func_0x00010bcff8a4(&pppppppuStack_90);
            param_3 = (undefined8 *******)0xb;
            FUN_10bcefbcc(pppppppuVar9,&UNK_10f831bf2,0xb,pppppppuStack_90,apppppppuStack_88[0]);
          }
          else {
            func_0x00010bcff8a4(&pppppppuStack_90);
            func_0x00010bd0c128();
            param_3 = (undefined8 *******)0xa;
            unaff_x30 = pppppppuStack_f0;
            param_7 = pppppppuStack_e8;
            FUN_10bcf1384(pppppppuVar9,&UNK_10f831bfe,10,pppppppuStack_90,apppppppuStack_88[0]);
          }
          pppppppuVar14 = pppppppuVar14 + 1;
        }
        func_0x00010bd0b6ac();
      }
      if (0 < *(int *)(lVar27 + 0x44)) {
        func_0x00010bd0a894();
        func_0x00010bd0b6c0();
        for (lVar32 = 0; lVar32 < *(int *)(lVar27 + 0x44); lVar32 = lVar32 + 1) {
          puVar11 = *(undefined8 **)(*(long *)(lVar27 + 0x50) + lVar32 * 8);
          lVar31 = (long)*(char *)((long)puVar11 + 0x17);
          puVar12 = puVar11;
          if (lVar31 < 0) {
            puVar12 = (undefined8 *)*puVar11;
            lVar31 = puVar11[1];
          }
          func_0x00010ae897f0(&pppppppuStack_90,puVar12,lVar31);
          func_0x00010bd0c538();
          func_0x00010bd0b638(pppppppuVar9,&UNK_10f831c09);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_90);
        }
        func_0x00010bd0b6ac();
      }
      func_0x00010bd0a894();
      func_0x00010bd0b65c(pppppppuVar9,&UNK_10f831c10);
      FUN_10bcefc08(&pppppppuStack_170,pppppppuVar9);
      FUN_10bd11358(&pppppppuStack_1c8);
      FUN_10bcefc98(&pppppppuStack_170);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_210);
    }
    for (lVar30 = 0; lVar30 < *(int *)(pbVar15 + 4); lVar30 = lVar30 + 1) {
      lVar27 = *(long *)(pbVar15 + 0x38) + lVar30 * 0x58;
      FUN_10bcddbd4();
      lVar32 = *(long *)(pbVar15 + 0x38) + lVar30 * 0x58;
      if (lVar27 == 0) {
        func_0x00010bd0c198(lVar32,iStack_354);
      }
      else if ((*(byte *)(lVar32 + 1) >> 4 & 1) == 0) {
        if (lRam0000000000000030 == lVar32) {
          lVar27 = 0;
LAB_10bcf0560:
          func_0x00010bd0b474(&pppppppuStack_f0,lStack_360);
          pbVar16 = pbStack_338;
          uStack_38 = 0;
          uStack_40 = 0;
          uStack_48 = 0;
          uStack_50 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_78 = 0;
          uStack_30 = *(undefined2 *)pbStack_338;
          bStack_2e = pbStack_338[2];
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_28,&pppppppuStack_f0);
          uVar25 = (uint)*pbVar16;
          cVar4 = SBORROW4(uVar25,1);
          cVar5 = (int)(uVar25 - 1) < 0;
          if (uVar25 == 1) {
            pppppppuStack_168 = (undefined8 *******)0x0;
            pppppppuStack_170 = (undefined8 *******)0x0;
            uStack_160 = 0;
            func_0x00010bcf19e4(lVar27,&pppppppuStack_170);
            uVar8 = *(undefined8 *)(*(long *)(lVar27 + 0x10) + 0x10);
            func_0x00010bd0c1f4(uVar8,&pppppppuStack_170);
            uVar6 = (undefined1)uVar8;
            func_0x000107c27a18(&pppppppuStack_170);
          }
          else {
            uVar6 = 0;
          }
          pppppppuVar9 = pppppppuStack_328;
          pppppppuStack_90 = (undefined8 *******)CONCAT71(pppppppuStack_90._1_7_,uVar6);
          FUN_10bcefab4(&pppppppuStack_90,pppppppuStack_328);
          func_0x00010bd0b9a8();
          func_0x00010bd0a0f8(*(undefined8 *)(lVar27 + 8));
          param_7 = extraout_x12_02;
          unaff_x30 = extraout_x11_03;
          if (cVar5 == cVar4) {
            param_7 = extraout_x9_03;
            unaff_x30 = extraout_x8_07;
          }
          func_0x00010bd0ac5c();
          func_0x00010bd0c1cc();
          param_3 = *(undefined8 ********)(lVar27 + 0x18);
          FUN_10bd11034(&pppppppuStack_170,0);
          lVar32 = *(long *)(lVar27 + 0x20);
          func_0x00010bd0ac34();
          if (lVar32 != extraout_x8_08) {
            func_0x00010bd047f4(&pppppppuStack_170);
            func_0x00010bd0bb10();
          }
          func_0x00010bd0c610(*(undefined8 *)(lVar27 + 0x10));
          FUN_10bcefcc4(iStack_32c,&pppppppuStack_170);
          if (pbStack_338[2] == 1) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                      (pppppppuStack_328,&UNK_10f831c65);
          }
          else {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                      (pppppppuStack_328,&DAT_10f68f57e);
            func_0x00010bd0be08();
            for (puVar29 = &UNK_10f831c58; (long)puVar29 < (long)*(int *)(lVar27 + 4);
                puVar29 = puVar29 + 1) {
              func_0x00010bd0c198(*(long *)(lVar27 + 0x30) + (long)pppppppuVar9,iStack_32c);
              pppppppuVar9 = pppppppuVar9 + 0xb;
            }
            func_0x00010bd0b9a8();
            func_0x00010bd0b65c(pppppppuStack_328,&UNK_10f831c10);
          }
          FUN_10bcefc08(&pppppppuStack_90,pppppppuStack_328);
          FUN_10bd110cc(&pppppppuStack_170);
          func_0x00010bd0bab0();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_f0);
        }
      }
      else {
        lVar27 = *(long *)(lVar32 + 0x28);
        if (*(long *)(lVar27 + 0x30) == lVar32) goto LAB_10bcf0560;
      }
    }
    func_0x00010bd0b588();
    while( true ) {
      pbVar20 = pbStack_338;
      pbVar16 = pbStack_348;
      lVar27 = (long)*(int *)(pbStack_348 + 0x88);
      cVar4 = SBORROW8(lVar30,lVar27);
      cVar5 = lVar30 - lVar27 < 0;
      if (lVar27 <= lVar30) break;
      func_0x00010bd0a4cc();
      uVar8 = extraout_x11_04;
      pbVar20 = extraout_x10_00;
      if (cVar5 == cVar4) {
        uVar8 = extraout_x8_09;
        pbVar20 = abStack_228;
      }
      func_0x00010bcff8a4(&pppppppuStack_90,*(undefined4 *)(pbVar15 + *(long *)(pbVar16 + 0x58)));
      unaff_x30 = pppppppuStack_90;
      param_7 = apppppppuStack_88[0];
      FUN_10bcf1384(pppppppuStack_328,&UNK_10f831bad,0x11,pbVar20,uVar8);
      lVar27 = *(long *)(pbVar16 + 0x58);
      iVar22 = *(int *)(pbVar15 + lVar27 + 4);
      if (*(int *)(pbVar15 + lVar27) + 1 < iVar22) {
        func_0x00010bcff8a4(&pppppppuStack_90,iVar22 + -1);
        func_0x00010bd0b638(pppppppuStack_328,&UNK_10f831bbf);
        lVar27 = *(long *)(pbStack_348 + 0x58);
      }
      param_3 = *(undefined8 ********)(pbVar15 + lVar27 + 8);
      FUN_10bd0dec0(&pppppppuStack_90,0);
      lVar27 = *(long *)(pbVar15 + *(long *)(pbStack_348 + 0x58) + 0x18);
      func_0x00010bd0ac34();
      cVar4 = SBORROW8(lVar27,extraout_x8_10);
      cVar5 = lVar27 - extraout_x8_10 < 0;
      if (lVar27 != extraout_x8_10) {
        FUN_10bd04658();
        func_0x00010bd0bb10();
      }
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      func_0x00010bd0c610(pbStack_348);
      pppppppuVar14 = &pppppppuStack_90;
      iVar22 = iStack_354;
      FUN_10bcf13c4();
      pppppppuVar9 = pppppppuVar14;
      if (iVar22 != 0) {
        pppppppuVar13 = (undefined8 *******)&UNK_10f47a8fa;
        func_0x000107c284bc();
        pppppppuStack_170 = pppppppuVar13;
        pppppppuStack_168 = pppppppuVar14;
        func_0x00010bd0bd78();
        pppppppuStack_e8 = extraout_x11_05;
        pppppppuStack_f0 = extraout_x10_01;
        if (cVar5 == cVar4) {
          pppppppuStack_e8 = extraout_x8_11;
          pppppppuStack_f0 = extraout_x9_04;
        }
        func_0x00010bd0bff4();
        pppppppuVar9 = &pppppppuStack_170;
        param_3 = &pppppppuStack_f0;
        pppppppuStack_1c8 = pppppppuVar13;
        pppppppuStack_1c0 = pppppppuVar14;
        func_0x00010ae8c9e4(pppppppuStack_328,pppppppuVar9,param_3,&pppppppuStack_1c8);
      }
      pppppppuVar14 = (undefined8 *******)&UNK_10f480bab;
      func_0x000107c284bc();
      pppppppuStack_170 = pppppppuVar14;
      pppppppuStack_168 = pppppppuVar9;
      func_0x000107c2ba50(pppppppuStack_328,&pppppppuStack_170);
      func_0x00010bd0c158();
      FUN_10bd0df5c(&pppppppuStack_90);
      lVar30 = lVar30 + 1;
      pbVar15 = pbVar15 + 0x28;
    }
    lVar32 = 0;
    lVar27 = 0x20;
    for (lVar30 = 0; pppppppuVar9 = pppppppuStack_328, lVar30 < *(int *)(pbStack_348 + 0x8c);
        lVar30 = lVar30 + 1) {
      lVar31 = *(long *)(pbStack_348 + 0x60);
      lVar26 = *(long *)(lVar31 + lVar27);
      if (lVar26 != lVar32) {
        if (lVar27 != 0x20) {
          func_0x00010bd0a4cc();
          func_0x00010bd0b638(pppppppuStack_328,&UNK_10f831bc6);
          lVar26 = *(long *)(*(long *)(pbStack_348 + 0x60) + lVar27);
        }
        func_0x00010bd0a4cc();
        func_0x00010bd0aaac();
        param_7 = (undefined8 *******)extraout_x8_12[1];
        unaff_x30 = extraout_x9_05;
        if (-1 < extraout_w11) {
          param_7 = extraout_x10_02;
          unaff_x30 = extraout_x8_12;
        }
        FUN_10bcf1384(pppppppuStack_328,&UNK_10f831bcd,0x11);
        lVar31 = *(long *)(pbStack_348 + 0x60);
        lVar32 = lVar26;
      }
      param_3 = pppppppuStack_328;
      FUN_10bcf0dc0(lVar31 + lVar27 + -0x20,iStack_32c,pppppppuStack_328,pbVar20);
      lVar27 = lVar27 + 0x58;
    }
    if (0 < *(int *)(pbStack_348 + 0x8c)) {
      func_0x00010bd0a4cc();
      func_0x00010bd0b638(pppppppuVar9,&UNK_10f831bc6);
    }
    pbVar15 = pbStack_348;
    if (0 < *(int *)(pbStack_348 + 0x90)) {
      func_0x00010bd0a4cc();
      func_0x00010bd0b664();
      lVar27 = 0;
      for (lVar30 = 0; pppppppuVar9 = pppppppuStack_328, pbVar15 = pbStack_348,
          lVar30 < *(int *)(pbStack_348 + 0x90); lVar30 = lVar30 + 1) {
        piVar1 = (int *)(*(long *)(pbStack_348 + 0x68) + lVar27);
        if (piVar1[1] == *piVar1 + 1) {
          func_0x00010bcff8a4(&pppppppuStack_90);
          func_0x00010bd0b65c(pppppppuStack_328,&UNK_10f831bed);
        }
        else if (piVar1[1] < 0x20000000) {
          func_0x00010bcff8a4(&pppppppuStack_90);
          func_0x00010bcff8a4(&pppppppuStack_170,piVar1[1] + -1);
          param_3 = (undefined8 *******)0xa;
          unaff_x30 = pppppppuStack_170;
          param_7 = pppppppuStack_168;
          FUN_10bcf1384(pppppppuStack_328,&UNK_10f831bfe,10,pppppppuStack_90,apppppppuStack_88[0]);
        }
        else {
          func_0x00010bcff8a4(&pppppppuStack_90);
          param_3 = (undefined8 *******)0xb;
          FUN_10bcefbcc(pppppppuStack_328,&UNK_10f831bf2,0xb,pppppppuStack_90,apppppppuStack_88[0]);
        }
        lVar27 = lVar27 + 8;
      }
      func_0x00010bd0b640();
    }
    iVar22 = *(int *)(pbVar15 + 0x94);
    in_OV = SBORROW4(iVar22,1);
    in_NG = iVar22 + -1 < 0;
    in_ZR = iVar22 == 1;
    if (0 < iVar22) {
      func_0x00010bd0a4cc();
      func_0x00010bd0b664();
      lVar30 = 0;
      while( true ) {
        pppppppuVar9 = pppppppuStack_328;
        lVar27 = (long)*(int *)(pbVar15 + 0x94);
        in_OV = SBORROW8(lVar30,lVar27);
        in_NG = lVar30 - lVar27 < 0;
        in_ZR = lVar30 == lVar27;
        if (lVar27 <= lVar30) break;
        puVar11 = *(undefined8 **)(*(long *)(pbVar15 + 0x70) + lVar30 * 8);
        lVar27 = (long)*(char *)((long)puVar11 + 0x17);
        puVar12 = puVar11;
        if (lVar27 < 0) {
          puVar12 = (undefined8 *)*puVar11;
          lVar27 = puVar11[1];
        }
        func_0x00010ae897f0(&pppppppuStack_90,puVar12,lVar27);
        func_0x00010bd0c538();
        func_0x00010bd0b638(pppppppuStack_328,&UNK_10f831c09);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_90);
        lVar30 = lVar30 + 1;
      }
      func_0x00010bd0b640();
    }
    func_0x00010bd0a4cc();
    param_4 = extraout_x10_03;
    if (in_NG == in_OV) {
      param_4 = abStack_228;
    }
    func_0x00010bd0b65c(pppppppuVar9,&UNK_10f831c10);
    FUN_10bcefc08(auStack_2a8);
    param_2 = (int)pppppppuVar9;
    FUN_10bcfdf94(&puStack_320);
    FUN_10bd100d8(auStack_300);
    FUN_10bcefc98(auStack_2a8);
    param_1 = abStack_228;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
  }
  func_0x000107c3a64c(uStack_10);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10bcefc98(auStack_2a8);
  pbVar15 = abStack_228;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bd0a974();
  pcVar24 = FUN_10bcf0dc0;
  func_0x00010bd0bbbc();
  iVar22 = param_2;
  puStack_320 = &stack0x00000050;
  pcStack_318 = pcVar24;
  func_0x00010bd0a30c();
  uStack_388 = extraout_x8_13;
  func_0x00010bd0b474(auStack_4f0,(long)(iVar22 << 1));
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  pbVar16 = pbVar15;
  func_0x00010b91c030();
  if ((int)pbVar16 == 0) {
    FUN_10bcf1450(&pppppuStack_4d8,pbVar15);
    ppppppuVar23 = &pppppuStack_4d8;
    func_0x000107c27b9c(&uStack_508);
  }
  else {
    func_0x00010bd0ba88();
    pppppuVar17 = &pppppuStack_4d8;
    FUN_10bcf1450(pppppuVar17,*(undefined8 *)(pbVar16 + 0x38));
    func_0x00010bd0c46c();
    uVar8 = extraout_x11_06;
    pppppuVar3 = extraout_x10_04;
    if (in_NG == in_OV) {
      uVar8 = extraout_x8_14;
      pppppuVar3 = &pppppuStack_4d8;
    }
    func_0x00010bd0ba88();
    FUN_10bcf1450(&pppppppuStack_408,pppppuVar17[7] + 0xb);
    param_7 = pppppppuStack_400;
    unaff_x30 = pppppppuStack_408;
    if (-1 < (char)bStack_3f1) {
      param_7 = (undefined8 *******)(ulong)bStack_3f1;
      unaff_x30 = &pppppppuStack_408;
    }
    ppppppuVar23 = (undefined8 ******)&UNK_10f831c15;
    FUN_10bcf1384(&uStack_508,&UNK_10f831c15,0xb,pppppuVar3,uVar8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_408);
  }
  func_0x00010bd0b8fc();
  ppppuVar18 = (undefined8 ****)(&PTR_DAT_110d9b900)[pbVar15[1] >> 6];
  func_0x000107c284bc();
  pcVar19 = " ";
  pppppuStack_4d8 = (undefined8 *****)ppppuVar18;
  ppppppuStack_4d0 = ppppppuVar23;
  func_0x000107c284bc();
  pppppppuStack_408 = (undefined8 *******)pcVar19;
  pppppppuStack_400 = (undefined8 *******)ppppppuVar23;
  func_0x000107c2ba40(&bStack_520,&pppppuStack_4d8,&pppppppuStack_408);
  pbVar16 = pbVar15;
  func_0x00010b91c030();
  if (((((ulong)pbVar16 & 1) != 0) || (pbVar16 = pbVar15, FUN_10bcddbd4(), pbVar16 != (byte *)0x0))
     || (((pbVar15[1] & 0xc2) == 0x40 &&
         ((*(int *)(*(long *)(pbVar15 + 0x10) + 0x20) != 0x3e6 ||
          (((pbVar15[1] >> 4 & 1) != 0 && (*(long *)(pbVar15 + 0x28) != 0)))))))) {
    if ((char)bStack_509 < '\0') {
      *(undefined1 *)CONCAT71(uStack_51f,bStack_520) = 0;
      uStack_518 = 0;
    }
    else {
      bStack_520 = 0;
      bStack_509 = 0;
    }
  }
  if ((((pbVar15[1] & 0xc0) == 0x40) || (*(int *)(*(long *)(pbVar15 + 0x48) + 0x30) == 3)) &&
     (999 < *(int *)(*(long *)(pbVar15 + 0x10) + 0x20))) {
    if ((char)bStack_509 < '\0') {
      *(undefined1 *)CONCAT71(uStack_51f,bStack_520) = 0;
      uStack_518 = 0;
    }
    else {
      bStack_520 = 0;
      bStack_509 = 0;
    }
  }
  uStack_3b0 = 0;
  func_0x00010bd0be80(&pppppppuStack_408);
  uStack_3a8 = *(undefined2 *)param_4;
  bStack_3a6 = param_4[2];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_3a0,auStack_4f0);
  if (*param_4 == 1) {
    func_0x00010bd0c42c();
    func_0x00010bcf1980(pbVar15,&pppppuStack_4d8);
    uVar8 = *(undefined8 *)(pbVar15 + 0x10);
    FUN_10bcf16b8(uVar8,&pppppuStack_4d8,&pppppppuStack_400);
    uVar6 = (undefined1)uVar8;
    func_0x00010bd0b368();
  }
  else {
    uVar6 = 0;
  }
  pppppppuStack_408 = (undefined8 *******)CONCAT71(pppppppuStack_408._1_7_,uVar6);
  FUN_10bcefab4(&pppppppuStack_408,param_3);
  func_0x00010bd0bd24();
  cVar5 = (char)bStack_509 < '\0';
  cVar4 = '\0';
  uVar2 = uStack_518;
  pbVar16 = (byte *)CONCAT71(uStack_51f,bStack_520);
  if (!(bool)cVar5) {
    uVar2 = (ulong)bStack_509;
    pbVar16 = &bStack_520;
  }
  func_0x00010bd0a844();
  iVar22 = *(int *)(*(long *)(pbVar15 + 0x10) + 0x20);
  FUN_10bcefd90(iVar22,pbVar15);
  pbVar20 = pbVar15;
  if (iVar22 != 0) {
    func_0x00010bd0ba88();
  }
  pbStack_530 = param_4;
  iStack_524 = param_2;
  func_0x00010bd0a0f8(*(undefined8 *)(pbVar20 + 8));
  func_0x00010bcff8a4(&uStack_440,*(undefined4 *)(pbVar15 + 4));
  uStack_490 = uStack_438;
  uStack_498 = uStack_440;
  uVar8 = 5;
  pbStack_4c8 = pbVar16;
  uStack_4c0 = uVar2;
  func_0x00010ae8cb8c(param_3,&UNK_10f831c21,0xe,&pppppuStack_4d8);
  iVar22 = iStack_524;
  if ((pbVar15[1] & 1) == 0) {
    pbVar16 = pbStack_530;
    if ((pbVar15[1] >> 2 & 1) != 0) goto LAB_10bcf1144;
    bVar7 = false;
  }
  else {
    FUN_10bceeba8(&pppppuStack_4d8,pbVar15,1);
    func_0x00010bd0c46c();
    uVar8 = extraout_x11_07;
    pppppuVar17 = extraout_x10_05;
    if (cVar5 == cVar4) {
      uVar8 = extraout_x8_15;
      pppppuVar17 = &pppppuStack_4d8;
    }
    FUN_10bcefbcc(param_3,&UNK_10f831c30,0xe,pppppuVar17);
    pbVar16 = pbStack_530;
    func_0x00010bd0b8fc();
    if ((pbVar15[1] >> 2 & 1) != 0) {
LAB_10bcf1144:
      func_0x00010bd0b484();
      func_0x00010bd0b484();
      func_0x00010bd0c400(*(undefined8 *)(pbVar15 + 8));
      func_0x00010ae897f0(&pppppuStack_4d8);
      func_0x00010bd0c26c();
      func_0x00010bd0b8fc();
      func_0x00010bd0b484();
    }
    bVar7 = true;
  }
  FUN_10bd108b4(&pppppuStack_4d8,0,*(undefined8 *)(pbVar15 + 0x38));
  lVar30 = *(long *)(pbVar15 + 0x40);
  func_0x00010bd0ac34();
  uVar6 = lVar30 == extraout_x8_16;
  if (!(bool)uVar6) {
    func_0x00010bd047c0(&pppppuStack_4d8);
    func_0x00010bd0c0a8();
  }
  uStack_440 = 0;
  uStack_438 = 0;
  uStack_430 = 0;
  pbVar20 = (byte *)&uStack_440;
  FUN_10bcf13c4(iVar22,&pppppuStack_4d8,*(undefined8 *)(*(long *)(pbVar15 + 0x10) + 0x18));
  if (iVar22 == 0) {
    if (!bVar7) goto LAB_10bcf1214;
  }
  else {
    uVar6 = !bVar7;
    func_0x00010bd0b484();
    func_0x00010bd0c26c();
  }
  func_0x00010bd0b484();
LAB_10bcf1214:
  iVar22 = *(int *)(*(long *)(pbVar15 + 0x10) + 0x20);
  FUN_10bcefd90(iVar22,pbVar15);
  if ((iVar22 == 0) || ((pbVar16[1] & 1) != 0)) {
    func_0x00010bd0b484();
  }
  else {
    func_0x00010bd0ba88();
    uVar8 = 0;
    pbVar20 = pbVar16;
    FUN_10bcefdbc();
  }
  FUN_10bcefc08(&pppppppuStack_408,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_440);
  FUN_10bd1099c(&pppppuStack_4d8);
  FUN_10bcefc98(&pppppppuStack_408);
  pbVar15 = &bStack_520;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bd0b1ac();
  func_0x00010bd0bb6c();
  func_0x000107c3a64c(uStack_388);
  if ((bool)uVar6) {
    return pbVar15;
  }
  ___stack_chk_fail();
  func_0x00010bd0b8fc();
  FUN_10bcefc98(&pppppppuStack_408);
  pbVar21 = &bStack_520;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bd0b1ac();
  func_0x00010bd0bb6c();
  func_0x00010bd0a974();
  pcStack_538 = FUN_10bcf1384;
  ppuStack_540 = &puStack_320;
  func_0x00010bd0a30c();
  pbStack_568 = pbVar20;
  uStack_560 = uVar8;
  pppppppuStack_558 = unaff_x30;
  pppppppuStack_550 = param_7;
  uStack_548 = extraout_x8_17;
  func_0x00010ae8cb8c();
  func_0x000107c3a64c(uStack_548);
  if ((bool)uVar6) {
    return pbVar21;
  }
  ___stack_chk_fail();
  iVar22 = (int)pbVar21;
  pcStack_578 = FUN_10bcf13c4;
  lStack_5a8 = 0;
  lStack_5a0 = 0;
  uStack_598 = 0;
  pbStack_590 = pbVar16;
  pbStack_588 = pbVar15;
  pppuStack_580 = &ppuStack_540;
  FUN_10bcff240();
  if (iVar22 != 0) {
    FUN_10bcff8d8(auStack_5c0,&lStack_5a8,&DAT_10f68f19e,2);
    func_0x00010bd0af1c();
    func_0x000107c27fc4();
    func_0x00010bd0aaa4();
  }
  bVar7 = lStack_5a8 != lStack_5a0;
  func_0x000107c278a8(&lStack_5a8);
  return (byte *)(ulong)bVar7;
}



/* Entry: 10bcf0dc0; end: 10bcf1383;  */

undefined1 *
FUN_10bcf0dc0(ulong param_1,int param_2,undefined8 param_3,char *param_4,undefined8 param_5,
             undefined8 *****param_6,undefined **param_7)

{
  undefined **ppuVar1;
  char in_NG;
  char in_OV;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  char *pcVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined **extraout_x10;
  undefined **extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long lVar16;
  undefined8 in_stack_00000050;
  undefined1 auStack_250 [24];
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  char *pcStack_220;
  undefined1 *puStack_218;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  char *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 ****ppppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  code *pcStack_1c8;
  char *pcStack_1c0;
  int iStack_1b4;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  ulong uStack_1a8;
  byte bStack_199;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [24];
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined1 *puStack_158;
  ulong uStack_150;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 ****ppppuStack_98;
  undefined **ppuStack_90;
  byte bStack_81;
  undefined8 uStack_40;
  undefined2 uStack_38;
  char cStack_36;
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  func_0x00010bd0bbbc();
  iVar14 = param_2;
  func_0x00010bd0a30c();
  uStack_18 = extraout_x8;
  func_0x00010bd0b474(auStack_180,(long)(iVar14 << 1));
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uVar6 = param_1;
  func_0x00010b91c030();
  if ((int)uVar6 == 0) {
    FUN_10bcf1450(&puStack_168,param_1);
    ppuVar7 = &puStack_168;
    func_0x000107c27b9c(&uStack_198);
  }
  else {
    func_0x00010bd0ba88();
    ppuVar7 = &puStack_168;
    FUN_10bcf1450(ppuVar7,*(undefined8 *)(uVar6 + 0x38));
    func_0x00010bd0c46c();
    uVar10 = extraout_x11;
    ppuVar1 = extraout_x10;
    if (in_NG == in_OV) {
      uVar10 = extraout_x8_00;
      ppuVar1 = &puStack_168;
    }
    func_0x00010bd0ba88();
    FUN_10bcf1450(&ppppuStack_98,ppuVar7[7] + 0x58);
    param_7 = ppuStack_90;
    param_6 = (undefined8 *****)ppppuStack_98;
    if (-1 < (char)bStack_81) {
      param_7 = (undefined **)(ulong)bStack_81;
      param_6 = &ppppuStack_98;
    }
    ppuVar7 = (undefined **)&UNK_10f831c15;
    FUN_10bcf1384(&uStack_198,&UNK_10f831c15,0xb,ppuVar1,uVar10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_98);
  }
  func_0x00010bd0b8fc();
  puVar8 = (&PTR_DAT_110d9b900)[*(byte *)(param_1 + 1) >> 6];
  func_0x000107c284bc();
  pcVar9 = " ";
  puStack_168 = puVar8;
  ppuStack_160 = ppuVar7;
  func_0x000107c284bc();
  ppppuStack_98 = (undefined8 ****)pcVar9;
  ppuStack_90 = ppuVar7;
  func_0x000107c2ba40(&uStack_1b0,&puStack_168,&ppppuStack_98);
  uVar6 = param_1;
  func_0x00010b91c030();
  if ((((uVar6 & 1) != 0) || (uVar6 = param_1, FUN_10bcddbd4(), uVar6 != 0)) ||
     (((*(byte *)(param_1 + 1) & 0xc2) == 0x40 &&
      ((*(int *)(*(long *)(param_1 + 0x10) + 0x20) != 0x3e6 ||
       (((*(byte *)(param_1 + 1) >> 4 & 1) != 0 && (*(long *)(param_1 + 0x28) != 0)))))))) {
    if ((char)bStack_199 < '\0') {
      *(undefined1 *)CONCAT71(uStack_1af,uStack_1b0) = 0;
      uStack_1a8 = 0;
    }
    else {
      uStack_1b0 = 0;
      bStack_199 = 0;
    }
  }
  if ((((*(byte *)(param_1 + 1) & 0xc0) == 0x40) ||
      (*(int *)(*(long *)(param_1 + 0x48) + 0x30) == 3)) &&
     (999 < *(int *)(*(long *)(param_1 + 0x10) + 0x20))) {
    if ((char)bStack_199 < '\0') {
      *(undefined1 *)CONCAT71(uStack_1af,uStack_1b0) = 0;
      uStack_1a8 = 0;
    }
    else {
      uStack_1b0 = 0;
      bStack_199 = 0;
    }
  }
  uStack_40 = 0;
  func_0x00010bd0be80(&ppppuStack_98);
  uStack_38 = *(undefined2 *)param_4;
  cStack_36 = param_4[2];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_30,auStack_180);
  if (*param_4 == '\x01') {
    func_0x00010bd0c42c();
    func_0x00010bcf1980(param_1,&puStack_168);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    FUN_10bcf16b8(uVar10,&puStack_168,&ppuStack_90);
    uVar4 = (undefined1)uVar10;
    func_0x00010bd0b368();
  }
  else {
    uVar4 = 0;
  }
  ppppuStack_98 = (undefined8 ****)CONCAT71(ppppuStack_98._1_7_,uVar4);
  FUN_10bcefab4(&ppppuStack_98,param_3);
  func_0x00010bd0bd24();
  cVar3 = (char)bStack_199 < '\0';
  cVar2 = '\0';
  uVar6 = uStack_1a8;
  puVar12 = (undefined1 *)CONCAT71(uStack_1af,uStack_1b0);
  if (!(bool)cVar3) {
    uVar6 = (ulong)bStack_199;
    puVar12 = &uStack_1b0;
  }
  func_0x00010bd0a844();
  iVar14 = *(int *)(*(long *)(param_1 + 0x10) + 0x20);
  FUN_10bcefd90(iVar14,param_1);
  uVar11 = param_1;
  if (iVar14 != 0) {
    func_0x00010bd0ba88();
  }
  pcStack_1c0 = param_4;
  iStack_1b4 = param_2;
  func_0x00010bd0a0f8(*(undefined8 *)(uVar11 + 8));
  func_0x00010bcff8a4(&uStack_d0,*(undefined4 *)(param_1 + 4));
  uStack_120 = uStack_c8;
  uStack_128 = uStack_d0;
  uVar10 = 5;
  puStack_158 = puVar12;
  uStack_150 = uVar6;
  func_0x00010ae8cb8c(param_3,&UNK_10f831c21,0xe,&puStack_168);
  iVar14 = iStack_1b4;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    pcVar9 = pcStack_1c0;
    if ((*(byte *)(param_1 + 1) >> 2 & 1) != 0) goto LAB_10bcf1144;
    bVar5 = false;
  }
  else {
    FUN_10bceeba8(&puStack_168,param_1,1);
    func_0x00010bd0c46c();
    uVar10 = extraout_x11_00;
    ppuVar7 = extraout_x10_00;
    if (cVar3 == cVar2) {
      uVar10 = extraout_x8_01;
      ppuVar7 = &puStack_168;
    }
    FUN_10bcefbcc(param_3,&UNK_10f831c30,0xe,ppuVar7);
    pcVar9 = pcStack_1c0;
    func_0x00010bd0b8fc();
    if ((*(byte *)(param_1 + 1) >> 2 & 1) != 0) {
LAB_10bcf1144:
      func_0x00010bd0b484();
      func_0x00010bd0b484();
      func_0x00010bd0c400(*(undefined8 *)(param_1 + 8));
      func_0x00010ae897f0(&puStack_168);
      func_0x00010bd0c26c();
      func_0x00010bd0b8fc();
      func_0x00010bd0b484();
    }
    bVar5 = true;
  }
  FUN_10bd108b4(&puStack_168,0,*(undefined8 *)(param_1 + 0x38));
  lVar16 = *(long *)(param_1 + 0x40);
  func_0x00010bd0ac34();
  uVar4 = lVar16 == extraout_x8_02;
  if (!(bool)uVar4) {
    func_0x00010bd047c0(&puStack_168);
    func_0x00010bd0c0a8();
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  pcVar15 = (char *)&uStack_d0;
  FUN_10bcf13c4(iVar14,&puStack_168,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18));
  if (iVar14 == 0) {
    if (!bVar5) goto LAB_10bcf1214;
  }
  else {
    uVar4 = !bVar5;
    func_0x00010bd0b484();
    func_0x00010bd0c26c();
  }
  func_0x00010bd0b484();
LAB_10bcf1214:
  iVar14 = *(int *)(*(long *)(param_1 + 0x10) + 0x20);
  FUN_10bcefd90(iVar14,param_1);
  if ((iVar14 == 0) || ((pcVar9[1] & 1U) != 0)) {
    func_0x00010bd0b484();
  }
  else {
    func_0x00010bd0ba88();
    uVar10 = 0;
    pcVar15 = pcVar9;
    FUN_10bcefdbc();
  }
  FUN_10bcefc08(&ppppuStack_98,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
  FUN_10bd1099c(&puStack_168);
  FUN_10bcefc98(&ppppuStack_98);
  puVar12 = &uStack_1b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bd0b1ac();
  func_0x00010bd0bb6c();
  func_0x000107c3a64c(uStack_18);
  if ((bool)uVar4) {
    return puVar12;
  }
  ___stack_chk_fail();
  func_0x00010bd0b8fc();
  FUN_10bcefc98(&ppppuStack_98);
  puVar13 = &uStack_1b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bd0b1ac();
  func_0x00010bd0bb6c();
  func_0x00010bd0a974();
  pcStack_1c8 = FUN_10bcf1384;
  puStack_1d0 = &stack0x00000050;
  func_0x00010bd0a30c();
  pcStack_1f8 = pcVar15;
  uStack_1f0 = uVar10;
  ppppuStack_1e8 = param_6;
  ppuStack_1e0 = param_7;
  uStack_1d8 = extraout_x8_03;
  func_0x00010ae8cb8c();
  func_0x000107c3a64c(uStack_1d8);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    iVar14 = (int)puVar13;
    pcStack_208 = FUN_10bcf13c4;
    lStack_238 = 0;
    lStack_230 = 0;
    uStack_228 = 0;
    pcStack_220 = pcVar9;
    puStack_218 = puVar12;
    ppuStack_210 = &puStack_1d0;
    FUN_10bcff240();
    if (iVar14 != 0) {
      FUN_10bcff8d8(auStack_250,&lStack_238,&DAT_10f68f19e,2);
      func_0x00010bd0af1c();
      func_0x000107c27fc4();
      func_0x00010bd0aaa4();
    }
    bVar5 = lStack_238 != lStack_230;
    func_0x000107c278a8(&lStack_238);
    return (undefined1 *)(ulong)bVar5;
  }
  return puVar13;
}



/* Entry: 10bcf1384; end: 10bcf13c3;  */

ulong FUN_10bcf1384(ulong param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  int iVar2;
  undefined8 extraout_x8;
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x00010bd0a30c();
  func_0x00010ae8cb8c();
  func_0x000107c3a64c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  iVar2 = (int)param_1;
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  FUN_10bcff240();
  if (iVar2 != 0) {
    FUN_10bcff8d8(auStack_90,&lStack_78,&DAT_10f68f19e,2);
    func_0x00010bd0af1c();
    func_0x000107c27fc4();
    func_0x00010bd0aaa4();
  }
  bVar1 = lStack_78 != lStack_70;
  func_0x000107c278a8(&lStack_78);
  return (ulong)bVar1;
}



/* Entry: 10bcf13c4; end: 10bcf144f;  */

bool FUN_10bcf13c4(int param_1)

{
  bool bVar1;
  undefined1 auStack_50 [24];
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  FUN_10bcff240();
  if (param_1 != 0) {
    FUN_10bcff8d8(auStack_50,&lStack_38,&DAT_10f68f19e,2);
    func_0x00010bd0af1c();
    func_0x000107c27fc4();
    func_0x00010bd0aaa4();
  }
  bVar1 = lStack_38 != lStack_30;
  func_0x000107c278a8(&lStack_38);
  return bVar1;
}



/* Entry: 10bcf1450; end: 10bcf1513;  */

undefined8 ***** FUN_10bcf1450(undefined8 param_1,undefined8 *****param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 *****pppppuVar3;
  undefined *puVar4;
  undefined8 extraout_x9;
  undefined8 unaff_x19;
  undefined8 *****unaff_x20;
  undefined8 uStack_90;
  undefined1 auStack_88 [48];
  undefined8 ****ppppuStack_58;
  undefined8 ****ppppuStack_50;
  
  func_0x00010bd0a0a0();
  pppppuVar3 = param_2;
  func_0x00010787827c();
  uVar1 = (int)param_2 - 10;
  uVar2 = uVar1 == 2;
  if (uVar1 < 2) {
    param_2 = (undefined8 *****)(ulong)*(uint *)(unaff_x20[2] + 4);
    pppppuVar3 = unaff_x20;
    FUN_10bcefd90();
    if ((int)param_2 != 0) {
LAB_10bcf14e4:
      func_0x00010bd0ba50();
      puVar4 = (&PTR_DAT_110d9b868)[(ulong)param_2 & 0xffffffff];
      func_0x000107c3a63c();
      if ((bool)uVar2) {
        func_0x00010002b82c();
        func_0x000107c613d0(puVar4);
        func_0x000107c60c50(unaff_x20,unaff_x19,puVar4);
        return unaff_x20;
      }
      goto LAB_10bcf1510;
    }
    func_0x00010bd0a408();
    ppppuStack_58 = param_2;
    ppppuStack_50 = pppppuVar3;
    func_0x00010bd0b40c();
  }
  else {
    uVar2 = (int)param_2 == 0xe;
    if (!(bool)uVar2) goto LAB_10bcf14e4;
    func_0x00010bd0a408();
    ppppuStack_58 = param_2;
    ppppuStack_50 = pppppuVar3;
    func_0x00010bd0c144();
  }
  func_0x00010bd09fa8(param_2[1]);
  param_2 = &ppppuStack_58;
  func_0x000107c2ba40(param_2,auStack_88);
  func_0x000107c3a63c();
  if ((bool)uVar2) {
    return param_2;
  }
LAB_10bcf1510:
  uVar2 = 0;
  ___stack_chk_fail();
  func_0x00010bd0a2e8(uStack_90);
  func_0x00010ae8cb8c();
  func_0x000107c3a64c(extraout_x9);
  if ((bool)uVar2) {
    return param_2;
  }
  ___stack_chk_fail();
  pppppuVar3 = param_2;
  FUN_10bcf1590();
  if ((int)pppppuVar3 != 0) {
    pppppuVar3 = (undefined8 *****)(ulong)(*(int *)(param_2[9] + 7) == 1);
  }
  return pppppuVar3;
}



/* Entry: 10bcf1514; end: 10bcf155f;  */

void FUN_10bcf1514(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x9;
  undefined8 in_stack_00000000;
  
  func_0x00010bd0a2e8(in_stack_00000000);
  func_0x00010ae8cb8c();
  func_0x000107c3a64c(extraout_x9);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10bcf1590();
  return;
}



/* Entry: 10bcf1560; end: 10bcf158f;  */

void FUN_10bcf1560(void)

{
  FUN_10bcf1590();
  return;
}



/* Entry: 10bcf1590; end: 10bcf15bb;  */

bool FUN_10bcf1590(long param_1)

{
  if ((*(byte *)(param_1 + 1) >> 5 & 1) == 0) {
    return false;
  }
  func_0x00010787827c();
  return (int)param_1 - 0xdU < 0xfffffffc;
}



/* Entry: 10bcf15bc; end: 10bcf16a3;  */

bool FUN_10bcf15bc(int param_1)

{
  bool bVar1;
  long unaff_x19;
  
  func_0x00010bd0c35c();
  if (param_1 == 9) {
    bVar1 = *(int *)(*(long *)(unaff_x19 + 0x48) + 0x3c) == 2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10bcf16a4; end: 10bcf16b7;  */

long * FUN_10bcf16a4(long param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  long *unaff_x19;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  func_0x00010b4c58c0(puVar1,*param_2,*(undefined8 *)(param_2 + 2));
  func_0x00010b4bf3a0();
  if ((puVar1 != (undefined8 *)0x0) &&
     (unaff_x19 = (long *)*puVar1, (*(byte *)((long)puVar1 + 10) >> 4 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b4c00bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x18))();
    return unaff_x19;
  }
  return unaff_x19;
}



/* Entry: 10bcf16b8; end: 10bcf1917;  */

undefined8 FUN_10bcf16b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  undefined4 *puVar12;
  undefined8 *extraout_x9;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong unaff_x27;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  func_0x00010bd0b914();
  if (*(long *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  func_0x00010bd0b108();
  lVar14 = *(long *)(param_1 + 0x98);
  in_stack_00000008 = &stack0x00000020;
  in_stack_00000020 = lVar14;
  if (*(int *)(lVar14 + 0x98) != 0xdd) {
    FUN_10bd04220((int *)(lVar14 + 0x98),&stack0x00000008);
  }
  puVar12 = (undefined4 *)*unaff_x20;
  puVar10 = (undefined4 *)unaff_x20[1];
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  func_0x00010bd0b5a0();
  in_stack_00000008 = (undefined8 *)0x0;
  while( true ) {
    cVar7 = SBORROW8((long)puVar12,(long)puVar10);
    cVar8 = (long)puVar12 - (long)puVar10 < 0;
    if (puVar12 == puVar10) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&stack0x00000008);
    FUN_10bd040b4(&stack0x00000008,*puVar12);
    puVar12 = puVar12 + 1;
  }
  Hint_Prefetch(*(undefined8 *)(lVar14 + 0xa0),0,2,0);
  func_0x00010bd0ac0c(*(undefined8 *)(lVar14 + 0xa0));
  uVar2 = extraout_x11;
  puVar15 = extraout_x10;
  if (cVar8 == cVar7) {
    uVar2 = extraout_x8;
    puVar15 = &stack0x00000008;
  }
  func_0x000107c284ac(lVar14 + 0xa0,puVar15,uVar2);
  lVar13 = 0;
  lVar3 = *(long *)(lVar14 + 0xa8);
  uVar4 = *(ulong *)(lVar14 + 0xb0);
  func_0x00010bd0a4e0(*(ulong *)(lVar14 + 0xa0) >> 0xc);
  uVar16 = extraout_x8_00;
  while( true ) {
    uVar16 = uVar16 & uVar4;
    func_0x00010bd0addc();
    while ((extraout_x8_01 & 0x8080808080808080) != 0) {
      func_0x000107c3a6e4();
      unaff_x27 = uVar16 + (extraout_x8_02 >> 3) & uVar4;
      puVar15 = &stack0x00000008;
      FUN_10bd04160(puVar15,lVar3 + unaff_x27 * 0x20);
      if ((int)puVar15 != 0) {
        unaff_x27 = *(long *)(lVar14 + 0xa8) + unaff_x27 * 0x20;
        goto LAB_10bcf17cc;
      }
      func_0x000107c3a6dc();
    }
    func_0x00010bd0a514();
    if ((extraout_x8_03 & 1) != 0) break;
    lVar13 = lVar13 + 8;
    uVar16 = lVar13 + uVar16;
  }
LAB_10bcf17cc:
  func_0x00010bd0aab8();
  if ((extraout_x8_01 & 0x8080808080808080) == 0) {
    return 0;
  }
  lVar14 = *(long *)(unaff_x27 + 0x18);
  if (lVar14 != 0) {
    uVar5 = *(uint *)(lVar14 + 0x30);
    if (1 < uVar5 - 3) {
      return 0;
    }
    puVar12 = *(undefined4 **)(lVar14 + 0x38);
    *unaff_x19 = *puVar12;
    unaff_x19[2] = puVar12[1];
    uVar6 = 2 < uVar5;
    uVar9 = uVar5 == 3;
    lVar13 = 0;
    if (!(bool)uVar9) {
      lVar13 = 8;
    }
    unaff_x19[1] = *(undefined4 *)((long)puVar12 + lVar13);
    unaff_x19[3] = puVar12[(ulong)uVar5 - 1];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (unaff_x19 + 4,*(ulong *)(lVar14 + 0x60) & 0xfffffffffffffffc);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (unaff_x19 + 10,*(ulong *)(lVar14 + 0x68) & 0xfffffffffffffffc);
    puVar12 = unaff_x19 + 0x10;
    puVar15 = (undefined8 *)(lVar14 + 0x48);
    func_0x00010bd0b15c(*puVar15);
    if (!(bool)uVar9) {
      puVar15 = extraout_x9;
    }
    lVar14 = (long)*(int *)(lVar14 + 0x50);
    puVar1 = puVar15 + lVar14;
    func_0x00010bd0c7d0(*(undefined8 *)(unaff_x19 + 0x14));
    if ((bool)uVar6) {
      func_0x00010bd0c7d0(*(undefined8 *)(unaff_x19 + 0x12));
      if ((bool)uVar6) {
        FUN_10bcff8ec(puVar15,puVar1);
        func_0x000107c278b4(puVar12,puVar15);
        return 1;
      }
      puVar11 = puVar15 + extraout_x8_04;
      FUN_10bcff8ec(puVar15,puVar11);
      lVar14 = (*(long *)(unaff_x19 + 0x12) - *(long *)(unaff_x19 + 0x10)) / -0x18 + lVar14;
    }
    else {
      func_0x000107c3193c(puVar12);
      puVar10 = puVar12;
      func_0x000107c2794c(puVar12,lVar14);
      func_0x000107c27964(puVar12,puVar10);
      puVar11 = puVar15;
    }
    func_0x0001072eac08(puVar12,puVar11,puVar1,lVar14);
    return 1;
  }
  return 0;
}



/* Entry: 10bcf1918; end: 10bcf1b0b;  */

void FUN_10bcf1918(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bd0aa10();
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = 4;
  }
  else {
    func_0x00010bd0bb64();
    uVar1 = 3;
  }
  func_0x00010bd0a55c(uVar1);
  func_0x00010bd0a694();
  return;
}



/* Entry: 10bcf1b0c; end: 10bcf1b13;  */

undefined8 FUN_10bcf1b0c(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 unaff_x19;
  long *plVar5;
  int aiStack_130 [4];
  undefined1 auStack_120 [216];
  undefined8 uStack_48;
  
  func_0x00010bd0a30c(param_1,param_2,0);
  if (param_1[1] == 0) {
    if (*param_1 == 0) {
      uStack_48 = extraout_x8;
      func_0x00010bd0c5d4();
      plVar5 = param_1 + 5;
      func_0x00010bd0b694(*plVar5);
      func_0x00010bd0b5d0(*plVar5);
      *(undefined1 *)((long)param_1 + 0x37) = 1;
      FUN_10bcff930(auStack_120,param_1);
      FUN_10bcf1c4c(aiStack_130,param_1,*plVar5,auStack_120);
      iVar2 = aiStack_130[0];
      FUN_10bcf1cac();
      func_0x00010bd0b09c();
      FUN_10bd04a08();
      func_0x00010bd0b6dc();
      uVar1 = iVar2 == 0;
      if ((bool)uVar1) {
        unaff_x19 = 0;
      }
      func_0x00010bd0af04();
      func_0x000107c3a64c(uStack_48);
      if ((bool)uVar1) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      func_0x00010bd0af04();
      goto LAB_10bcf1c48;
    }
    func_0x00010bd0aa88();
    func_0x00010bd0a968();
    FUN_10bdb2a88();
  }
  else {
    func_0x00010bd0a968();
    FUN_10bdb2a08(auStack_120);
    func_0x00010b4d4210(auStack_120,&UNK_10f831ca8);
  }
  func_0x00010bd0aa9c();
LAB_10bcf1c48:
  func_0x00010bd0a974();
  uVar3 = 0x158;
  __Znwm();
  uVar4 = uVar3;
  FUN_10bcf54c8();
  *extraout_x8_00 = uVar3;
  return uVar4;
}



/* Entry: 10bcf1b14; end: 10bcf1c4b;  */

undefined8 FUN_10bcf1b14(long *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 unaff_x19;
  long *plVar5;
  int aiStack_130 [4];
  undefined1 auStack_120 [216];
  undefined8 uStack_48;
  
  func_0x00010bd0a30c();
  if (param_1[1] == 0) {
    if (*param_1 == 0) {
      uStack_48 = extraout_x8;
      func_0x00010bd0c5d4();
      plVar5 = param_1 + 5;
      func_0x00010bd0b694(*plVar5);
      func_0x00010bd0b5d0(*plVar5);
      *(undefined1 *)((long)param_1 + 0x37) = 1;
      FUN_10bcff930(auStack_120,param_1);
      FUN_10bcf1c4c(aiStack_130,param_1,*plVar5,auStack_120);
      iVar2 = aiStack_130[0];
      FUN_10bcf1cac();
      func_0x00010bd0b09c();
      FUN_10bd04a08();
      func_0x00010bd0b6dc();
      uVar1 = iVar2 == 0;
      if ((bool)uVar1) {
        unaff_x19 = 0;
      }
      func_0x00010bd0af04();
      func_0x000107c3a64c(uStack_48);
      if ((bool)uVar1) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      func_0x00010bd0af04();
      goto LAB_10bcf1c48;
    }
    func_0x00010bd0aa88();
    func_0x00010bd0a968();
    FUN_10bdb2a88();
  }
  else {
    func_0x00010bd0a968();
    FUN_10bdb2a08(auStack_120);
    func_0x00010b4d4210(auStack_120,&UNK_10f831ca8);
  }
  func_0x00010bd0aa9c();
LAB_10bcf1c48:
  func_0x00010bd0a974();
  uVar3 = 0x158;
  __Znwm();
  uVar4 = uVar3;
  FUN_10bcf54c8();
  *extraout_x8_00 = uVar3;
  return uVar4;
}



/* Entry: 10bcf1c4c; end: 10bcf1cab;  */

void FUN_10bcf1c4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x158;
  __Znwm();
  FUN_10bcf54c8();
  *param_1 = uVar1;
  return;
}



/* Entry: 10bcf1cac; end: 10bcf546b;  */

uint ****** FUN_10bcf1cac(undefined8 param_1,uint ******param_2,uint ******param_3)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  uint ******ppppppuVar7;
  ulong uVar8;
  undefined *puVar9;
  uint *****pppppuVar10;
  uint *****pppppuVar11;
  uint ******ppppppuVar12;
  char *pcVar13;
  uint ******ppppppuVar14;
  undefined4 uVar15;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  uint uVar16;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  uint *****extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong uVar17;
  undefined8 *extraout_x8_14;
  long extraout_x8_15;
  uint ******extraout_x8_16;
  uint ******extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  undefined8 *extraout_x8_23;
  undefined8 *extraout_x8_24;
  undefined8 extraout_x8_25;
  uint ****extraout_x8_26;
  undefined8 extraout_x8_27;
  uint *****extraout_x8_28;
  uint ******extraout_x8_29;
  uint ******extraout_x8_30;
  uint *****extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long *extraout_x8_34;
  long lVar18;
  uint ******extraout_x8_35;
  uint ******extraout_x8_36;
  uint ******extraout_x8_37;
  uint *****extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  undefined8 *extraout_x8_42;
  long extraout_x8_43;
  ulong extraout_x8_44;
  ulong extraout_x8_45;
  ulong extraout_x8_46;
  ulong extraout_x8_47;
  long extraout_x8_48;
  long extraout_x8_49;
  long extraout_x8_50;
  long extraout_x8_51;
  long extraout_x8_52;
  long extraout_x8_53;
  long extraout_x8_54;
  uint ******extraout_x8_55;
  uint ******extraout_x8_56;
  undefined8 *extraout_x8_57;
  uint ******extraout_x8_58;
  uint ******extraout_x8_59;
  long extraout_x8_60;
  uint ******extraout_x8_61;
  int extraout_w9;
  uint ******extraout_x9;
  uint ******extraout_x9_00;
  ulong extraout_x9_01;
  uint ******extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  uint *****extraout_x9_05;
  uint *****extraout_x9_06;
  uint ******extraout_x9_07;
  uint ******extraout_x9_08;
  uint *****extraout_x9_09;
  uint ******extraout_x9_10;
  uint *****extraout_x9_11;
  uint *****extraout_x9_12;
  uint ******extraout_x9_13;
  uint ******extraout_x9_14;
  uint ******extraout_x9_15;
  uint ******extraout_x9_16;
  uint ******extraout_x9_17;
  long extraout_x9_18;
  undefined8 extraout_x9_19;
  uint ******extraout_x9_20;
  uint ******extraout_x9_21;
  uint ******extraout_x9_22;
  uint ******extraout_x9_23;
  undefined8 *extraout_x9_24;
  long extraout_x9_25;
  long extraout_x9_26;
  undefined8 *extraout_x9_27;
  uint ******extraout_x9_28;
  uint *****extraout_x9_29;
  uint *****extraout_x9_30;
  uint ******extraout_x9_31;
  uint *****extraout_x9_32;
  int extraout_w10;
  uint ******extraout_x10;
  ulong extraout_x10_00;
  uint ******extraout_x10_01;
  long extraout_x10_02;
  long lVar19;
  long extraout_x10_03;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long extraout_x10_07;
  long extraout_x10_08;
  long extraout_x10_09;
  uint ******extraout_x10_10;
  uint ******extraout_x10_11;
  uint ******extraout_x10_12;
  long extraout_x10_13;
  long extraout_x10_14;
  undefined8 *extraout_x10_15;
  undefined8 *extraout_x10_16;
  undefined **ppuVar20;
  ulong extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  uint ******extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  undefined8 *extraout_x11_05;
  uint ******extraout_x11_06;
  uint extraout_w12;
  uint ******extraout_x12;
  long extraout_x12_00;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong extraout_x14;
  ulong extraout_x15;
  int iVar21;
  long unaff_x19;
  ulong uVar22;
  uint ******ppppppuVar23;
  uint ****ppppuVar24;
  uint *****pppppuVar25;
  undefined **ppuVar26;
  ulong uVar27;
  long lVar28;
  uint ******ppppppuVar29;
  uint ******ppppppuVar30;
  uint *puVar31;
  undefined **ppuVar32;
  uint ******ppppppuVar33;
  uint uVar34;
  uint ******unaff_x25;
  uint ****ppppuVar35;
  uint ******ppppppuVar36;
  undefined **unaff_x27;
  byte bVar37;
  undefined8 uVar38;
  uint *****pppppuStack_2f0;
  uint *****pppppuStack_2e8;
  uint uStack_2d8;
  uint *****pppppuStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  uint ****ppppuStack_288;
  uint ****appppuStack_280 [9];
  uint *****pppppuStack_238;
  uint *****pppppuStack_230;
  uint *****pppppuStack_228;
  byte bStack_219;
  uint ****ppppuStack_218;
  uint *****pppppuStack_210;
  undefined8 uStack_208;
  undefined4 auStack_200 [6];
  uint *****pppppuStack_1e8;
  uint *****pppppuStack_1e0;
  uint *****pppppuStack_1d8;
  uint *****pppppuStack_1d0;
  uint *****pppppuStack_1c8;
  uint ****ppppuStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  uint *****pppppuStack_108;
  uint *****pppppuStack_100;
  uint ****ppppuStack_f8;
  uint *****pppppuStack_b8;
  uint *****pppppuStack_b0;
  undefined8 uStack_a8;
  uint *****pppppuStack_70;
  uint *****pppppuStack_68;
  uint *****pppppuStack_40;
  uint *****pppppuStack_38;
  undefined8 uStack_10;
  
  func_0x000107c3a6a4();
  ppppppuVar23 = param_2;
  ppppppuVar14 = param_3;
  func_0x00010bd0a30c();
  ppppppuVar23 = ppppppuVar23 + 0x12;
  uStack_10 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppppppuVar23,(ulong)ppppppuVar14[0x16] & 0xfffffffffffffffc);
  ppppppuVar7 = (uint ******)param_2[1];
  ppppppuVar14 = (uint ******)(long)*(char *)((long)param_2 + 0xa7);
  if ((long)ppppppuVar14 < 0) {
    ppppppuVar23 = (uint ******)param_2[0x12];
    ppppppuVar14 = (uint ******)param_2[0x13];
  }
  FUN_10bcedbdc(ppppppuVar7,ppppppuVar23);
  ppuVar32 = (undefined **)param_2;
  if (ppppppuVar7 != (uint ******)0x0) {
    uVar8 = (ulong)*(uint *)(ppppppuVar7 + 4);
    pcVar13 = (char *)ppppppuVar7;
    ppppppuVar14 = param_3;
    FUN_10bcf6e38();
    unaff_x27 = (undefined **)ppppppuVar7;
    if ((uVar8 & 1) != 0) goto LAB_10bcf2dec;
  }
  func_0x00010bd0ac50();
  while( true ) {
    ppppppuVar29 = (uint ******)param_2[1];
    ppppppuVar7 = (uint ******)(((long)ppppppuVar29[1] - (long)*ppppppuVar29) / 0x18);
    in_ZR = ppppppuVar23 == ppppppuVar7;
    if (ppppppuVar7 <= ppppppuVar23) break;
    puVar9 = (undefined *)((long)*ppppppuVar29 + unaff_x19);
    func_0x000107c278d0(puVar9,(ulong)param_3[0x16] & 0xfffffffffffffffc);
    if ((int)puVar9 != 0) {
      FUN_10bcf6dc8(param_2,param_3,ppppppuVar23);
      pcVar13 = (char *)param_3;
      goto LAB_10bcf1da0;
    }
    ppppppuVar23 = (uint ******)((long)ppppppuVar23 + 1);
    unaff_x19 = unaff_x19 + 0x18;
  }
  pcVar13 = (char *)((ulong)param_3[0x17] & 0xfffffffffffffffc);
  if ((*(char *)((long)pcVar13 + 0x17) < '\0') &&
     (in_ZR = *(uint ******)((long)pcVar13 + 8) == (uint *****)0x200,
     (uint *****)0x1ff < *(uint ******)((long)pcVar13 + 8))) {
    func_0x00010bd0aadc(param_2,pcVar13,param_3);
LAB_10bcf1da0:
    unaff_x27 = (undefined **)(uint ******)0x0;
LAB_10bcf2dec:
    while (func_0x000107c3a64c(uStack_10), !(bool)in_ZR) {
      ___stack_chk_fail();
LAB_10bcf4fa4:
      func_0x00010bd0a030();
LAB_10bcf29fc:
      ppppppuVar7 = &pppppuStack_1e8;
      func_0x00010ae6c700();
      pppppuVar10 = extraout_x9_05;
      ppppppuVar14 = (uint ******)unaff_x27;
LAB_10bcf2a04:
      if (pcVar13 < ppppppuVar23) {
        ppuVar32[0x2c] = (undefined *)(pppppuVar10 + (long)pcVar13);
      }
LAB_10bcf2acc:
      uVar8 = (ulong)*(int *)(pppppuStack_2f0 + -1);
      pppppuVar10 = (uint *****)ppuVar32[0x2f];
      uVar22 = (long)pppppuVar10 - (long)ppuVar32[0x2e] >> 3;
      if (uVar22 < uVar8) {
        uVar27 = uVar8 - uVar22;
        if ((ulong)((long)ppuVar32[0x30] - (long)pppppuVar10 >> 3) < uVar27) {
          ppppppuVar23 = (uint ******)(ppuVar32 + 0x2e);
          FUN_10bcfe0ec();
          pppppuStack_1c8 = (uint *****)(ppuVar32 + 0x30);
          pppppuVar10 = (uint *****)ppuVar32[0x2e];
          pppppuVar11 = (uint *****)ppuVar32[0x2f];
          if (ppppppuVar23 != (uint ******)0x0) {
            FUN_10bcfe140();
          }
          func_0x00010bd0c438((long)pppppuVar11 - (long)pppppuVar10);
          ppppppuVar23 = (uint ******)(extraout_x8_15 + uVar27 * 8);
          lVar19 = uVar8 * 8 + uVar22 * -8;
          while (lVar19 != 0) {
            func_0x00010bd0b9e8();
            ppppppuVar23 = extraout_x9_07;
            lVar19 = extraout_x10_03;
          }
          pppppuStack_1d8 = (uint *****)ppppppuVar23;
          FUN_10bcfe114(ppuVar32 + 0x2e,&pppppuStack_1e8);
          ppppppuVar7 = &pppppuStack_1e8;
          func_0x00010bcfe168();
        }
        else {
          pppppuVar10 = pppppuVar10 + uVar27;
          lVar19 = uVar8 * 8 + uVar22 * -8;
          while (lVar19 != 0) {
            func_0x00010bd0b9e8();
            pppppuVar10 = extraout_x9_06;
            lVar19 = extraout_x10_02;
          }
          ppuVar32[0x2f] = (undefined *)pppppuVar10;
        }
      }
      else if (uVar8 < uVar22) {
        ppuVar32[0x2f] = (undefined *)((long)ppuVar32[0x2e] + uVar8 * 8);
      }
      pcVar13 = (char *)(long)*(int *)((long)pppppuStack_2f0 + -4);
      pppppuVar10 = (uint *****)ppuVar32[0x32];
      ppppppuVar23 = (uint ******)((long)pppppuVar10 - (long)ppuVar32[0x31] >> 4);
      if (ppppppuVar23 < pcVar13) {
        uVar8 = (long)pcVar13 - (long)ppppppuVar23;
        if ((ulong)((long)ppuVar32[0x33] - (long)pppppuVar10 >> 4) < uVar8) {
          ppppppuVar7 = (uint ******)(ppuVar32 + 0x31);
          FUN_10bcfe1a4(ppppppuVar7);
          FUN_10bcfe210(&pppppuStack_1e8,ppppppuVar7,
                        (long)ppuVar32[0x32] - (long)ppuVar32[0x31] >> 4,ppuVar32 + 0x33);
          ppppppuVar7 = (uint ******)(pppppuStack_1d8 + uVar8 * 2);
          lVar19 = (long)pcVar13 * 0x10 + (long)ppppppuVar23 * -0x10;
          while (lVar19 != 0) {
            func_0x00010bd0c50c();
            ppppppuVar7 = extraout_x9_08;
            lVar19 = extraout_x10_04;
          }
          pcVar13 = (char *)&pppppuStack_1e8;
          pppppuStack_1d8 = (uint *****)ppppppuVar7;
          FUN_10bcfe1e4(ppuVar32 + 0x31);
          ppppppuVar7 = &pppppuStack_1e8;
          FUN_10bcfe268();
        }
        else {
          pppppuVar10 = pppppuVar10 + uVar8 * 2;
          lVar19 = (long)pcVar13 * 0x10 + (long)ppppppuVar23 * -0x10;
          while (lVar19 != 0) {
            func_0x00010bd0c50c();
            pppppuVar10 = extraout_x9_09;
            lVar19 = extraout_x10_05;
          }
          ppuVar32[0x32] = (undefined *)pppppuVar10;
        }
      }
      else if (pcVar13 < ppppppuVar23) {
        ppuVar32[0x32] = (undefined *)((long)ppuVar32[0x31] + (long)pcVar13 * 2 * 8);
      }
      uVar8 = (ulong)*(int *)((long)pppppuStack_2f0 + -0x14);
      ppppppuVar23 = (uint ******)(ppuVar32 + 0x16);
      pppppuVar10 = (uint *****)ppuVar32[0x17];
      uVar22 = (long)pppppuVar10 - (long)*ppppppuVar23 >> 3;
      if (uVar22 < uVar8) {
        uVar27 = uVar8 - uVar22;
        if ((ulong)((long)ppuVar32[0x18] - (long)pppppuVar10 >> 3) < uVar27) {
          func_0x000107c3a68c();
          FUN_10bcfe2a4();
          FUN_10bcfe2cc(&pppppuStack_1e8,ppppppuVar7,
                        (long)ppuVar32[0x17] - (long)ppuVar32[0x16] >> 3,ppuVar32 + 0x18);
          ppppppuVar7 = (uint ******)(pppppuStack_1d8 + uVar27);
          lVar19 = uVar8 * 8 + uVar22 * -8;
          while (lVar19 != 0) {
            func_0x00010bd0b9e8();
            ppppppuVar7 = extraout_x9_10;
            lVar19 = extraout_x10_06;
          }
          pcVar13 = (char *)&pppppuStack_1e8;
          pppppuStack_1d8 = (uint *****)ppppppuVar7;
          func_0x00010bcfe324(ppppppuVar23);
          ppppppuVar7 = &pppppuStack_1e8;
          FUN_10bcfe344();
        }
        else {
          pppppuVar10 = pppppuVar10 + uVar27;
          lVar19 = uVar8 * 8 + uVar22 * -8;
          while (lVar19 != 0) {
            func_0x00010bd0b9e8();
            pppppuVar10 = extraout_x9_11;
            lVar19 = extraout_x10_07;
          }
          ppuVar32[0x17] = (undefined *)pppppuVar10;
        }
      }
      else if (uVar8 < uVar22) {
        pcVar13 = (char *)(*ppppppuVar23 + uVar8);
        FUN_10bcfdc84();
        ppppppuVar7 = ppppppuVar23;
      }
      ppppppuVar23 = (uint ******)(long)*(int *)(pppppuStack_2f0 + -2);
      ppppppuVar29 = (uint ******)(ppuVar32 + 0x13);
      pppppuVar10 = (uint *****)ppuVar32[0x14];
      ppppppuVar30 = (uint ******)((long)pppppuVar10 - (long)*ppppppuVar29 >> 3);
      if (ppppppuVar30 < ppppppuVar23) {
        uVar22 = (long)ppppppuVar23 - (long)ppppppuVar30;
        ppppppuVar12 = (uint ******)(ppuVar32 + 0x15);
        uVar8 = (long)*ppppppuVar12 - (long)pppppuVar10 >> 3;
        in_ZR = uVar22 == uVar8;
        if (uVar8 < uVar22) {
          func_0x000107c3a68c();
          func_0x00010bcfe398();
          pppppuVar10 = (uint *****)ppuVar32[0x13];
          pppppuVar11 = (uint *****)ppuVar32[0x14];
          pppppuStack_1c8 = (uint *****)ppppppuVar12;
          if (ppppppuVar7 != (uint ******)0x0) {
            FUN_10bcfe3ec();
          }
          func_0x00010bd0c44c((long)pppppuVar11 - (long)pppppuVar10);
          ppppppuVar7 = extraout_x8_16 + uVar22;
          lVar19 = (long)ppppppuVar23 * 8 + (long)ppppppuVar30 * -8;
          pppppuStack_1e0 = (uint *****)extraout_x8_16;
          pppppuStack_1d0 = (uint *****)extraout_x9_13;
          while (lVar19 != 0) {
            func_0x00010bd0b9e8();
            ppppppuVar7 = extraout_x9_14;
            lVar19 = extraout_x10_09;
          }
          pcVar13 = (char *)&pppppuStack_1e8;
          pppppuStack_1d8 = (uint *****)ppppppuVar7;
          FUN_10bcfe3c0(ppppppuVar29);
          func_0x00010bcfe414(&pppppuStack_1e8);
        }
        else {
          pppppuVar10 = pppppuVar10 + uVar22;
          lVar19 = (long)ppppppuVar23 * 8 + (long)ppppppuVar30 * -8;
          while (lVar19 != 0) {
            func_0x00010bd0b9e8();
            pppppuVar10 = extraout_x9_12;
            lVar19 = extraout_x10_08;
          }
          ppuVar32[0x14] = (undefined *)pppppuVar10;
        }
      }
      else {
        in_ZR = ppppppuVar23 == ppppppuVar30;
        if (ppppppuVar23 < ppppppuVar30) {
          pcVar13 = (char *)(*ppppppuVar29 + (long)ppppppuVar23);
          func_0x00010bcfdef4(ppppppuVar29);
        }
      }
      ppuVar32[0x29] = (undefined *)((long)ppuVar32[0x29] + -0x14);
LAB_10bcf2de4:
      func_0x00010bd056c4(&pppppuStack_2d0);
      unaff_x27 = (undefined **)ppppppuVar14;
    }
    return (uint ******)unaff_x27;
  }
  if (((*(byte *)((long)*param_2 + 0x31) & 1) == 0) && ((*param_2)[1] != (uint ****)0x0)) {
    pcVar13 = (char *)((ulong)param_3[0x16] & 0xfffffffffffffffc);
    func_0x000107c281e8(ppppppuVar29);
    ppppppuVar23 = (uint ******)0x0;
    ppppppuVar7 = param_3 + 3;
    while( true ) {
      pppppuVar10 = param_2[1];
      uVar4 = ppppppuVar23 == (uint ******)(long)*(int *)(param_3 + 4);
      if ((long)*(int *)(param_3 + 4) <= (long)ppppppuVar23) break;
      func_0x00010bd0ae30(*ppppppuVar7);
      ppppppuVar29 = ppppppuVar7;
      if (!(bool)uVar4) {
        ppppppuVar29 = extraout_x9;
      }
      ppppppuVar29 = (uint ******)*ppppppuVar29;
      ppppppuVar14 = (uint ******)(long)*(char *)((long)ppppppuVar29 + 0x17);
      pcVar13 = (char *)ppppppuVar29;
      if ((long)ppppppuVar14 < 0) {
        pcVar13 = (char *)*ppppppuVar29;
        ppppppuVar14 = (uint ******)ppppppuVar29[1];
      }
      FUN_10bcedbdc();
      if (pppppuVar10 == (uint *****)0x0) {
        pppppuVar10 = *param_2;
        if (pppppuVar10[3] != (uint ****)0x0) {
          func_0x00010bd0aa7c();
          ppppppuVar29 = ppppppuVar7;
          if (!(bool)uVar4) {
            ppppppuVar29 = extraout_x10;
          }
          ppppppuVar29 = (uint ******)*ppppppuVar29;
          ppppppuVar14 = (uint ******)(long)*(char *)((long)ppppppuVar29 + 0x17);
          pcVar13 = (char *)ppppppuVar29;
          if ((long)ppppppuVar14 < 0) {
            pcVar13 = (char *)*ppppppuVar29;
            ppppppuVar14 = (uint ******)ppppppuVar29[1];
          }
          lVar19 = extraout_x8_00;
          FUN_10bcedcb0();
          if (lVar19 != 0) goto LAB_10bcf1e74;
          pppppuVar10 = *param_2;
        }
        func_0x00010bd0ae30(*ppppppuVar7,pppppuVar10);
        ppppppuVar29 = ppppppuVar7;
        if (!(bool)uVar4) {
          ppppppuVar29 = extraout_x9_00;
        }
        ppppppuVar29 = (uint ******)*ppppppuVar29;
        ppppppuVar14 = (uint ******)(long)*(char *)((long)ppppppuVar29 + 0x17);
        pcVar13 = (char *)ppppppuVar29;
        if ((long)ppppppuVar14 < 0) {
          pcVar13 = (char *)*ppppppuVar29;
          ppppppuVar14 = (uint ******)ppppppuVar29[1];
        }
        FUN_10bceddac();
      }
LAB_10bcf1e74:
      ppppppuVar23 = (uint ******)((long)ppppppuVar23 + 1);
    }
    func_0x000107c30408();
    ppppppuVar29 = (uint ******)param_2[1];
  }
  pppppuVar10 = ppppppuVar29[0x29];
  uVar4 = pppppuVar10 == ppppppuVar29[0x2a];
  if (pppppuVar10 < ppppppuVar29[0x2a]) {
    pcVar13 = (char *)ppppppuVar29;
    FUN_10bcfdfdc();
    pppppuVar10 = (uint *****)((long)pppppuVar10 + 0x14);
LAB_10bcf1f44:
    ppppppuVar29[0x29] = pppppuVar10;
    unaff_x25 = (uint ******)0xe0;
    __Znwm();
    func_0x00010bd0b940();
    pppppuStack_2d0 = (uint *****)unaff_x25;
    FUN_10bcf6524(unaff_x25);
    if (*unaff_x25 != (uint *****)0x0) goto LAB_10bcf4954;
    *(int *)((long)unaff_x25 + 0x7c) = *(int *)((long)unaff_x25 + 0x7c) + 1;
    func_0x00010bd0b1d0(unaff_x25);
    uVar16 = *(uint *)(param_3 + 2);
    pppppuVar10 = *unaff_x25;
    if ((uVar16 >> 3 & 1) == 0) {
      if ((uVar16 >> 4 & 1) == 0) {
        if (pppppuVar10 != (uint *****)0x0) {
          func_0x00010bd0a010();
          goto LAB_10bcf29fc;
        }
      }
      else {
        if (pppppuVar10 != (uint *****)0x0) {
          func_0x00010bd0a010();
          goto LAB_10bcf29fc;
        }
LAB_10bcf1fb8:
        *(int *)(unaff_x25 + 0xf) = *(int *)(unaff_x25 + 0xf) + 1;
      }
    }
    else {
      if (pppppuVar10 != (uint *****)0x0) {
        func_0x00010bd0a010();
        goto LAB_10bcf29fc;
      }
      *(int *)((long)unaff_x25 + 0xa4) = *(int *)((long)unaff_x25 + 0xa4) + 1;
      if ((uVar16 >> 4 & 1) != 0) goto LAB_10bcf1fb8;
    }
    iVar6 = *(int *)(param_3 + 0xd);
    *(int *)(unaff_x25 + 0xe) = *(int *)(unaff_x25 + 0xe) + iVar6 * 0x40;
    pcVar13 = (char *)(ulong)(uint)(iVar6 << 1);
    func_0x00010bcf6550(unaff_x25);
    func_0x00010bd0b15c(param_3[0xc]);
    ppppppuVar23 = extraout_x10_01;
    if (!(bool)uVar4) {
      ppppppuVar23 = extraout_x9_02;
    }
    ppppppuVar7 = ppppppuVar23 + *(int *)(extraout_x10_01 + 1);
    for (; ppppppuVar23 != ppppppuVar7; ppppppuVar23 = ppppppuVar23 + 1) {
      pppppuVar10 = *ppppppuVar23;
      if ((*(byte *)(pppppuVar10 + 2) >> 1 & 1) == 0) {
        if (*unaff_x25 != (uint *****)0x0) {
          func_0x00010bd0a010();
          goto LAB_10bcf29fc;
        }
      }
      else {
        if (*unaff_x25 != (uint *****)0x0) {
          func_0x00010bd0a010();
          goto LAB_10bcf29fc;
        }
        *(int *)((long)unaff_x25 + 0x9c) = *(int *)((long)unaff_x25 + 0x9c) + 1;
      }
      *(uint *)(unaff_x25 + 0xe) = *(int *)(unaff_x25 + 0xe) + *(uint *)(pppppuVar10 + 4) * 0x50;
      pcVar13 = (char *)(ulong)(*(uint *)(pppppuVar10 + 4) << 1);
      func_0x00010bcf6550(unaff_x25);
      func_0x00010bd0b15c(pppppuVar10[3]);
      uVar8 = (long)(int)*(uint *)(pppppuVar10 + 4) & 0x1fffffffffffffff;
      while (uVar8 != 0) {
        func_0x00010bd0c694();
        if ((extraout_w12 >> 3 & 1) != 0) {
          if (extraout_x9_03 != 0) {
            func_0x00010bd0a010();
            goto LAB_10bcf29fc;
          }
          *(int *)(unaff_x25 + 0x14) = extraout_w10 + 1;
        }
        func_0x00010bd0c414();
        uVar8 = extraout_x11;
      }
    }
    FUN_10bcff9e8(param_3 + 6,unaff_x25);
    FUN_10bcffb7c(param_3 + 9,unaff_x25);
    FUN_10bcffc78(param_3 + 0xf,unaff_x25);
    FUN_10bcfff64(unaff_x25,*(undefined4 *)(param_3 + 0x14));
    pcVar13 = (char *)(ulong)*(uint *)(param_3 + 0x12);
    FUN_10bcfff64(unaff_x25);
    if (*unaff_x25 != (uint *****)0x0) {
      func_0x00010bd0a010();
      goto LAB_10bcf29fc;
    }
    *(int *)(unaff_x25 + 0xe) = *(int *)(unaff_x25 + 0xe) + *(int *)(param_3 + 4) * 8;
    FUN_10bcf6f18(unaff_x25,param_2[1]);
    ppppppuVar7 = unaff_x25;
    func_0x00010bcf6940();
    param_2[0x15] = (uint *****)ppppppuVar7;
    pppppuStack_238 = (uint *****)ppppppuVar7;
    if ((*(byte *)(param_3 + 2) >> 5 & 1) == 0) {
      func_0x00010bd0b244(param_3[0x18]);
      lVar19 = extraout_x9_04;
      if (extraout_x9_04 < 0) {
        lVar19 = *(long *)(extraout_x8_02 + 8);
      }
      if (lVar19 == 0) {
LAB_10bcf2150:
        uVar15 = 0x3e6;
        goto LAB_10bcf215c;
      }
      lVar19 = extraout_x8_02;
      func_0x000107c27cf4(extraout_x8_02,&UNK_10f82ff21);
      iVar6 = (int)lVar19;
      if (iVar6 != 0) {
        ppppppuVar7 = (uint ******)param_2[0x15];
        goto LAB_10bcf2150;
      }
      func_0x00010bd0aef4(param_3[0x18]);
      if (iVar6 == 0) {
        *(undefined4 *)(param_2[0x15] + 4) = 0;
        ppppppuVar14 = param_3;
        pppppuStack_1e8 = (uint *****)param_3;
        FUN_10bcf56d0(param_2,(ulong)param_3[0x16] & 0xfffffffffffffffc,param_3,0xb,&pppppuStack_1e8
                      ,0x10bd056ec);
      }
      else {
        *(undefined4 *)(param_2[0x15] + 4) = 999;
      }
    }
    else {
      uVar15 = *(undefined4 *)(param_3 + 0x1b);
LAB_10bcf215c:
      *(undefined4 *)(ppppppuVar7 + 4) = uVar15;
    }
    ppppppuVar7 = (uint ******)(*param_2)[0xb];
    pppppuStack_2e8 = (uint *****)param_3;
    if (((uint ******)(*param_2)[0xb] == (uint ******)0x0) &&
       (ppppppuVar7 = ppppppuRam00000001137fe1a0, (bRam00000001137fe1a8 & 1) == 0))
    goto LAB_10bcf5110;
  }
  else {
    ppppppuVar23 = (uint ******)ppppppuVar29[0x28];
    lVar19 = (long)pppppuVar10 - (long)ppppppuVar23;
    if (0xccccccccccccccc < lVar19 / 0x14 + 1U) {
      func_0x00010bcfe028();
      goto LAB_10bcf4fe8;
    }
    func_0x00010bd0c6cc();
    uVar4 = extraout_x9_01 == 0x666666666666666;
    uVar8 = extraout_x10_00;
    if (0x666666666666665 < extraout_x9_01) {
      uVar8 = extraout_x8_01;
    }
    if (uVar8 == 0) {
      lVar28 = 0;
LAB_10bcf1f08:
      lVar18 = lVar28 + lVar19;
      pcVar13 = (char *)ppppppuVar29;
      FUN_10bcfdfdc(lVar18);
      pppppuVar10 = (uint *****)(lVar18 + 0x14);
      ppuVar32 = (undefined **)(lVar18 + (lVar19 / -0x14) * 0x14);
      func_0x00010bd0bb48();
      ppppppuVar29[0x28] = (uint *****)ppuVar32;
      ppppppuVar29[0x29] = pppppuVar10;
      ppppppuVar29[0x2a] = (uint *****)(lVar28 + uVar8 * 0x14);
      if (ppppppuVar23 != (uint ******)0x0) {
        func_0x00010bd0b404();
      }
      goto LAB_10bcf1f44;
    }
    uVar4 = uVar8 == extraout_x8_01;
    if (uVar8 <= extraout_x8_01) {
      lVar28 = uVar8 * 0x14;
      __Znwm();
      goto LAB_10bcf1f08;
    }
    func_0x000104bd35f4();
LAB_10bcf5110:
    iVar6 = 0x137fe1a8;
    ___cxa_guard_acquire();
    ppppppuVar7 = ppppppuRam00000001137fe1a0;
    if (iVar6 != 0) {
      ppppppuVar23 = (uint ******)0x38;
      __Znwm();
      func_0x00010bd0c384();
      ppppppuVar14 = ppppppuVar23;
      func_0x00010bcfd620(&UNK_10e607c28,0x82);
      func_0x000107c30378(FUN_10bd00058,ppppppuVar23);
      ppppppuRam00000001137fe1a0 = ppppppuVar23;
      ___cxa_guard_release(0x1137fe1a8);
      ppppppuVar7 = ppppppuRam00000001137fe1a0;
      param_3 = (uint ******)pppppuStack_2e8;
    }
  }
  FUN_10bd1a8f8(&ppppuStack_288,*(undefined4 *)(param_2[0x15] + 4),ppppppuVar7);
  if ((uint *****)ppppuStack_288 == (uint *****)0x0) {
    if (*(char *)(param_2 + 0xd) == '\x01') {
      FUN_10bd12650(param_2 + 4);
      *(undefined1 *)(param_2 + 0xd) = 0;
    }
    pcVar13 = (char *)appppuStack_280;
    FUN_10bd00070(param_2 + 4);
    *(undefined1 *)(param_2 + 0xd) = 1;
    ppppppuVar23 = param_2;
  }
  else {
    pppppuStack_1e8 = &ppppuStack_288;
    pcVar13 = (char *)((ulong)param_3[0x16] & 0xfffffffffffffffc);
    func_0x00010bd0baf4();
    ppppppuVar14 = param_3;
    FUN_10bcf56d0();
  }
  ppppppuVar7 = (uint ******)pppppuStack_238;
  *(undefined2 *)((long)pppppuStack_238 + 1) = 0;
  if ((*(byte *)(param_3 + 2) >> 4 & 1) == 0) {
    ppppppuVar23 = (uint ******)&PTR_PTR_113405fd8;
    ppppppuVar29 = (uint ******)0x0;
  }
  else {
    if (*unaff_x25 == (uint *****)0x0) {
      func_0x00010bd0a030();
      goto LAB_10bcf29fc;
    }
    ppppppuVar23 = (uint ******)unaff_x25[2];
    iVar6 = *(int *)(unaff_x25 + 0x16);
    uVar16 = iVar6 + 1;
    uVar8 = (ulong)uVar16;
    *(uint *)(unaff_x25 + 0x16) = uVar16;
    pcVar13 = (char *)(ulong)*(uint *)(unaff_x25 + 0xf);
    func_0x00010bd0a424();
    if (uVar8 != 0) {
      func_0x00010bd0a2b0();
      goto LAB_10bcf29fc;
    }
    ppppppuVar23 = ppppppuVar23 + (long)iVar6 * 6;
    pcVar13 = (char *)&PTR_PTR_113405fd8;
    if ((uint ******)param_3[0x1a] != (uint ******)0x0) {
      pcVar13 = (char *)param_3[0x1a];
    }
    FUN_10bd134ac(ppppppuVar23);
    ppppppuVar29 = ppppppuVar23;
  }
  ppppppuVar7[0x14] = (uint *****)ppppppuVar23;
  ppuVar32 = (undefined **)ppppppuVar29;
  if (*unaff_x25 == (uint *****)0x0) {
    func_0x00010bd0a030();
    goto LAB_10bcf29fc;
  }
  pppppuVar10 = unaff_x25[3];
  iVar6 = *(int *)((long)unaff_x25 + 0xb4);
  ppppppuVar23 = (uint ******)(long)iVar6;
  uVar8 = (ulong)(iVar6 + 1U);
  *(uint *)((long)unaff_x25 + 0xb4) = iVar6 + 1U;
  pcVar13 = (char *)(ulong)*(uint *)((long)unaff_x25 + 0x7c);
  func_0x00010bd0a424();
  if (uVar8 != 0) {
    func_0x00010bd0a2b0();
    goto LAB_10bcf29fc;
  }
  param_2[0x16] = pppppuVar10 + (long)iVar6 * 0x19;
  param_2[0x15][0x13] = (uint ****)(pppppuVar10 + (long)iVar6 * 0x19);
  ppppppuVar30 = (uint ******)0x0;
  if (((ulong)param_3[2] & 1) == 0) {
    func_0x00010bd0b5a0();
    func_0x000107c278b8(&pppppuStack_1e8);
    ppppppuVar30 = param_2;
    ppppppuVar14 = param_3;
    FUN_10bcf5820(param_2,&pppppuStack_1e8,param_3,0xb,&UNK_10f831dda);
    func_0x00010bd0b738();
  }
  func_0x00010bd0c100(param_3[0x16]);
  ppppppuVar7[1] = (uint *****)ppppppuVar30;
  if ((*(byte *)(param_3 + 2) >> 1 & 1) == 0) {
    ppppppuVar30 = unaff_x25;
    FUN_10bcf6620();
  }
  else {
    func_0x00010bd0c100(param_3[0x17]);
  }
  ppppppuVar7[2] = (uint *****)ppppppuVar30;
  func_0x00010bd0bb34();
  ppppppuVar7[3] = extraout_x8_03;
  pppppuVar11 = ppppppuVar7[1];
  pcVar13 = (char *)(long)*(char *)((long)pppppuVar11 + 0x17);
  pppppuVar10 = pppppuVar11;
  if ((long)pcVar13 < 0) {
    pppppuVar10 = (uint *****)*pppppuVar11;
    pcVar13 = (char *)pppppuVar11[1];
  }
  iVar6 = (int)pppppuVar10;
  FUN_10bcf6a90();
  if (iVar6 == 0) {
    pppppuVar10 = param_2[1];
    ppppppuVar23 = (uint ******)(pppppuVar10 + 0x1d);
    Hint_Prefetch(*ppppppuVar23,0,2,0);
    ppppppuVar30 = (uint ******)ppppppuVar7[1];
    func_0x00010bd0273c(*ppppppuVar23);
    lVar19 = 0;
    ppuVar32 = (undefined **)pppppuVar10[0x1d];
    ppppuVar35 = pppppuVar10[0x1f];
    func_0x00010bd0abe4((ulong)ppuVar32 >> 0xc);
    uVar8 = extraout_x8_04;
    while( true ) {
      unaff_x27 = (undefined **)(uVar8 & (ulong)ppppuVar35);
      func_0x00010bd0addc();
      while ((extraout_x8_05 & 0x8080808080808080) != 0) {
        func_0x00010bd0c77c();
        pcVar13 = (char *)pppppuVar10[0x1e]
                          [(long)unaff_x27 + (extraout_x8_06 >> 3) & (ulong)ppppuVar35];
        ppppppuVar30 = ppppppuVar7;
        func_0x00010bd0271c();
        if (((ulong)ppppppuVar30 & 1) != 0) goto LAB_10bcf2408;
        func_0x00010bd0c758();
      }
      func_0x00010bd0a514();
      if ((extraout_x8_07 & 1) != 0) break;
      lVar19 = lVar19 + 8;
      uVar8 = lVar19 + (long)unaff_x27;
    }
    func_0x00010bd0b808();
    FUN_10bd038e4();
    pppppuVar10[0x1e][(long)ppppppuVar30] = (uint ***)ppppppuVar7;
    ppppuVar35 = pppppuVar10[0x2f];
    if (ppppuVar35 < pppppuVar10[0x30]) {
      ppppuVar24 = ppppuVar35 + 1;
      *ppppuVar35 = (uint ***)ppppppuVar7;
    }
    else {
      pppppuVar11 = pppppuVar10 + 0x2e;
      FUN_10bcfe0ec(pppppuVar11,((long)ppppuVar35 - (long)pppppuVar10[0x2e] >> 3) + 1);
      pppppuStack_1c8 = pppppuVar10 + 0x30;
      ppppppuVar23 = (uint ******)pppppuVar10[0x2e];
      ppppuVar35 = pppppuVar10[0x2f];
      if (pppppuVar11 != (uint *****)0x0) {
        FUN_10bcfe140();
      }
      func_0x00010bd0c44c((long)ppppuVar35 - (long)ppppppuVar23);
      pppppuStack_1d8 = (uint *****)(extraout_x8_17 + 1);
      *extraout_x8_17 = (uint *****)ppppppuVar7;
      pcVar13 = (char *)&pppppuStack_1e8;
      pppppuStack_1e0 = (uint *****)extraout_x8_17;
      pppppuStack_1d0 = (uint *****)extraout_x9_15;
      FUN_10bcfe114(pppppuVar10 + 0x2e);
      ppppuVar24 = pppppuVar10[0x2f];
      func_0x00010bcfe168(&pppppuStack_1e8);
    }
    pppppuVar11 = pppppuStack_238;
    pppppuVar10[0x2f] = ppppuVar24;
    pppppuVar10 = ppppppuVar7[2];
    ppppuVar35 = (uint ****)(long)*(char *)((long)pppppuVar10 + 0x17);
    if ((long)ppppuVar35 < 0) {
      ppppuVar35 = pppppuVar10[1];
      if (ppppuVar35 != (uint ****)0x0) {
        pppppuVar10 = (uint *****)*pppppuVar10;
        goto LAB_10bcf2ec8;
      }
    }
    else if (*(char *)((long)pppppuVar10 + 0x17) != '\0') {
LAB_10bcf2ec8:
      uVar8 = 0;
      for (; ppppuVar35 != (uint ****)0x0; ppppuVar35 = (uint ****)((long)ppppuVar35 + -1)) {
        if (*(char *)pppppuVar10 == '.') {
          uVar8 = uVar8 + 1;
        }
        pppppuVar10 = (uint *****)((long)pppppuVar10 + 1);
      }
      pcVar13 = (char *)pppppuStack_238[2];
      if (100 < uVar8) {
LAB_10bcf2408:
        func_0x00010bd0bae8();
        FUN_10bcf5820();
        ppppppuVar14 = (uint ******)0x0;
        goto LAB_10bcf2418;
      }
      func_0x00010bd0bae8();
      FUN_10bcf6ac4();
      ppppppuVar7 = (uint ******)pppppuVar11;
    }
    puStack_2a8 = &UNK_10e52b660;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    iVar6 = *(int *)(pppppuStack_2e8 + 4);
    *(int *)(ppppppuVar7 + 6) = iVar6;
    pppppuVar10 = *unaff_x25;
    if (pppppuVar10 == (uint *****)0x0) {
      func_0x00010bd0a030();
      goto LAB_10bcf29fc;
    }
    ppppppuVar23 = (uint ******)(long)*(int *)(unaff_x25 + 0x15);
    uVar16 = *(int *)(unaff_x25 + 0x15) + iVar6 * 8;
    uVar8 = (ulong)uVar16;
    *(uint *)(unaff_x25 + 0x15) = uVar16;
    pcVar13 = (char *)(ulong)*(uint *)(unaff_x25 + 0xe);
    func_0x00010bd0a424();
    if (uVar8 != 0) {
      func_0x00010bd0a2b0();
      goto LAB_10bcf29fc;
    }
    ppppppuVar7[9] = (uint *****)((long)pppppuVar10 + (long)ppppppuVar23);
    ppppppuVar7[5] = (uint *****)0x0;
    FUN_10bcf6ff4(param_2 + 0x1f);
    puStack_2c8 = &UNK_10e52b660;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    for (lVar19 = 0; lVar19 < *(int *)(pppppuStack_2e8 + 0x14); lVar19 = lVar19 + 1) {
      pppppuStack_108 =
           (uint *****)
           CONCAT44(pppppuStack_108._4_4_,*(uint *)((long)pppppuStack_2e8[0x15] + lVar19 * 4));
      FUN_10bcdc448(&pppppuStack_1e8,&puStack_2c8,&pppppuStack_108);
    }
    iVar6 = 0;
    bVar37 = 0;
    ppppppuVar30 = (uint ******)(pppppuStack_2e8 + 3);
    unaff_x27 = (undefined **)&pppppuStack_108;
    while( true ) {
      pppppuStack_b8 = (uint *****)CONCAT44(pppppuStack_b8._4_4_,iVar6);
      uVar16 = *(uint *)(pppppuStack_2e8 + 4);
      if ((int)uVar16 <= iVar6) break;
      ppppppuVar14 = ppppppuVar30;
      if (((ulong)*ppppppuVar30 & 1) != 0) {
        ppppppuVar14 = (uint ******)((long)*ppppppuVar30 + (long)iVar6 * 8 + 7);
      }
      ppppppuVar23 = &pppppuStack_1e8;
      ppuVar32 = &puStack_2a8;
      FUN_10bd0579c(ppppppuVar23,ppuVar32,*ppppppuVar14);
      if (((ulong)pppppuStack_1d8 & 1) == 0) {
        pppppuStack_108 = (uint *****)CONCAT44(pppppuStack_108._4_4_,(int)pppppuStack_b8);
        func_0x00010bd0a640();
        pppppuStack_1e8 = pppppuStack_2e8;
        pppppuStack_1e0 = (uint *****)unaff_x27;
        func_0x00010bd0bae8();
        func_0x00010bd0b938();
      }
      func_0x00010bd0a640((long)(int)pppppuStack_b8);
      ppppppuVar14 = (uint ******)(long)*(char *)((long)ppuVar32 + 0x17);
      ppuVar26 = ppuVar32;
      if ((long)ppppppuVar14 < 0) {
        ppuVar26 = (undefined **)*ppuVar32;
        ppppppuVar14 = (uint ******)ppuVar32[1];
      }
      func_0x00010bd0c688();
      FUN_10bcedbdc();
      ppppppuVar12 = ppppppuVar23;
      if (ppppppuVar23 == (uint ******)0x0) {
        func_0x00010bd0bb34();
        ppppppuVar12 = *(uint *******)(extraout_x8_18 + 0x18);
        if (ppppppuVar12 != (uint ******)0x0) {
          func_0x00010bd0a640((long)(int)pppppuStack_b8);
          ppppppuVar14 = (uint ******)(long)*(char *)((long)ppuVar26 + 0x17);
          if ((long)ppppppuVar14 < 0) {
            ppppppuVar14 = (uint ******)ppuVar26[1];
          }
          FUN_10bcedcb0();
          goto LAB_10bcf3074;
        }
        lVar19 = extraout_x8_18;
        if (ppppppuVar7 != (uint ******)0x0) goto LAB_10bcf30c0;
LAB_10bcf31fc:
        ppppppuVar14 = (uint ******)0x0;
        goto LAB_10bcf4f70;
      }
LAB_10bcf3074:
      ppppppuVar23 = ppppppuVar12;
      if (ppppppuVar12 == ppppppuVar7) goto LAB_10bcf31fc;
      func_0x00010bd0bb34();
      lVar19 = extraout_x8_19;
      if (ppppppuVar12 == (uint ******)0x0) {
LAB_10bcf30c0:
        if ((*(byte *)(lVar19 + 0x31) & 1) == 0) {
          if ((*(byte *)(lVar19 + 0x32) & 1) != 0) {
LAB_10bcf30d0:
            func_0x00010bd0b940(&pppppuStack_1e8);
            FUN_10bcf6524(&pppppuStack_1e8);
            func_0x00010bcf6550(&pppppuStack_1e8,1);
            pppppuVar10 = param_2[1];
            FUN_10bcf6f18(&pppppuStack_1e8);
            func_0x00010bd0a640((long)(int)pppppuStack_b8);
            ppppppuVar14 = (uint ******)(long)*(char *)((long)pppppuVar10 + 0x17);
            if ((long)ppppppuVar14 < 0) {
              ppppppuVar14 = (uint ******)pppppuVar10[1];
            }
            ppppppuVar12 = (uint ******)*param_2;
            FUN_10bcf6660();
            goto LAB_10bcf3174;
          }
          if ((*(byte *)(lVar19 + 0x33) & 1) == 0) {
            ppuVar32 = &puStack_2c8;
            func_0x00010bcddfa8(ppuVar32,&pppppuStack_b8);
            if ((int)ppuVar32 != 0) goto LAB_10bcf30d0;
          }
          pppppuStack_108 = (uint *****)CONCAT44(pppppuStack_108._4_4_,(int)pppppuStack_b8);
          pppppuStack_1e0 = pppppuStack_2e8;
          pppppuStack_1e8 = (uint *****)param_2;
          pppppuStack_1d8 = (uint *****)unaff_x27;
          func_0x00010bd0a640();
          ppppppuVar14 = (uint ******)pppppuStack_2e8;
          func_0x00010bd0aed4();
        }
        ppppppuVar12 = (uint ******)0x0;
      }
      else if (((*(char *)(extraout_x8_19 + 0x30) == '\x01') &&
               (func_0x00010bd0c14c(), ppppppuVar23 != (uint ******)0x0)) &&
              (*(int *)((long)ppppppuVar12 + 0x34) == 0)) {
        ppppppuVar14 = ppppppuVar12;
        FUN_10bd04cb4(&pppppuStack_1e8,param_2 + 0x1f);
      }
LAB_10bcf3174:
      ppppppuVar7[9][(int)pppppuStack_b8] = (uint ****)ppppppuVar12;
      func_0x00010bd0bb34();
      bVar37 = ppppppuVar12 == (uint ******)0x0 & *(byte *)(extraout_x8_20 + 0x31) | bVar37;
      iVar6 = extraout_w9 + 1;
    }
    if (bVar37 != 0) {
      iVar6 = 0;
      ppppppuVar23 = (uint ******)((long)*ppppppuVar30 + 7);
      for (lVar19 = 0; (ulong)(uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU)) << 3 != lVar19;
          lVar19 = lVar19 + 8) {
        if (*(long *)((long)ppppppuVar7[9] + lVar19) == 0) {
          ppppppuVar12 = ppppppuVar30;
          if (((ulong)*ppppppuVar30 & 1) != 0) {
            ppppppuVar12 = ppppppuVar23;
          }
          ppppuVar35 = (uint ****)(long)*(char *)((long)*ppppppuVar12 + 0x17);
          if ((long)ppppuVar35 < 0) {
            ppppuVar35 = (*ppppppuVar12)[1];
          }
          iVar6 = iVar6 + (int)ppppuVar35;
        }
        iVar6 = iVar6 + 1;
        ppppppuVar23 = ppppppuVar23 + 1;
      }
      pppppuVar10 = param_2[1];
      FUN_10bced8a4(pppppuVar10,iVar6 + 4);
      lVar28 = 0;
      *(uint *)pppppuVar10 = 0;
      ppppppuVar7[5] = pppppuVar10;
      puVar31 = (uint *)((long)pppppuVar10 + 4);
      for (lVar19 = 0; uVar4 = lVar19 == *(int *)(pppppuStack_2e8 + 4),
          lVar19 < *(int *)(pppppuStack_2e8 + 4); lVar19 = lVar19 + 1) {
        if (*(long *)((long)pppppuStack_238[9] + lVar28) == 0) {
          func_0x00010bd0aec8(*ppppppuVar30);
          ppppppuVar23 = ppppppuVar30;
          if (!(bool)uVar4) {
            ppppppuVar23 = extraout_x9_16;
          }
          pppppuVar11 = *ppppppuVar23;
          ppppppuVar14 = (uint ******)(long)*(char *)((long)pppppuVar11 + 0x17);
          pppppuVar10 = pppppuVar11;
          if ((long)ppppppuVar14 < 0) {
            pppppuVar10 = (uint *****)*pppppuVar11;
            ppppppuVar14 = (uint ******)pppppuVar11[1];
          }
          _memcpy(puVar31,pppppuVar10);
          func_0x00010bd0aec8(*ppppppuVar30);
          ppppppuVar23 = ppppppuVar30;
          if (!(bool)uVar4) {
            ppppppuVar23 = extraout_x9_17;
          }
          ppppuVar35 = (uint ****)(long)*(char *)((long)*ppppppuVar23 + 0x17);
          if ((long)ppppuVar35 < 0) {
            ppppuVar35 = (*ppppppuVar23)[1];
          }
          puVar31 = (uint *)((long)puVar31 + (long)ppppuVar35);
        }
        *(undefined1 *)puVar31 = 0;
        lVar28 = lVar28 + 8;
        puVar31 = (uint *)((long)puVar31 + 1);
      }
    }
    ppppppuVar23 = unaff_x25;
    FUN_10bcf70e4(unaff_x25,*(undefined4 *)(pppppuStack_2e8 + 0x12));
    ppuVar32 = (undefined **)pppppuStack_238;
    pppppuStack_238[10] = (uint ****)ppppppuVar23;
    iVar6 = 0;
    for (lVar19 = 0; lVar19 < *(int *)(pppppuStack_2e8 + 0x12); lVar19 = lVar19 + 1) {
      uVar16 = *(uint *)((long)pppppuStack_2e8[0x13] + lVar19 * 4);
      if (((int)uVar16 < 0) || (*(int *)(pppppuStack_2e8 + 4) <= (int)uVar16)) {
        func_0x00010bd0b3e0(pppppuStack_2e8[0x16]);
        iVar21 = iVar6;
      }
      else {
        iVar21 = iVar6 + 1;
        *(uint *)((long)ppuVar32[10] + (long)iVar6 * 4) = uVar16;
        func_0x00010bd0bb34();
        if ((*(byte *)(extraout_x8_21 + 0x31) & 1) == 0) {
          ppppppuVar23 = (uint ******)ppuVar32;
          FUN_10bcef2d4();
          pppppuStack_1e8 = (uint *****)ppppppuVar23;
          func_0x00010bd0a920();
        }
      }
      iVar6 = iVar21;
    }
    *(int *)((long)ppuVar32 + 0x34) = iVar6;
    FUN_10bcf6ff4(param_2 + 0x17);
    func_0x00010bd0bb34();
    if ((*(byte *)(extraout_x8_22 + 0x31) & 1) == 0) {
      for (iVar6 = 0; iVar6 < *(int *)(ppuVar32 + 6); iVar6 = iVar6 + 1) {
        ppppppuVar23 = (uint ******)ppuVar32;
        FUN_10bcef2d4(ppuVar32,iVar6);
        FUN_10bcf5a50(param_2,ppppppuVar23);
      }
    }
    ppppppuVar23 = unaff_x25;
    FUN_10bcf70e4(unaff_x25,*(undefined4 *)(pppppuStack_2e8 + 0x14));
    iVar6 = 0;
    ppuVar32[0xb] = (undefined *)ppppppuVar23;
    ppppppuVar23 = (uint ******)&UNK_10f831e70;
    for (lVar19 = 0; lVar19 < *(int *)(pppppuStack_2e8 + 0x14); lVar19 = lVar19 + 1) {
      uVar16 = *(uint *)((long)pppppuStack_2e8[0x15] + lVar19 * 4);
      if (((int)uVar16 < 0) || (*(int *)(pppppuStack_2e8 + 4) <= (int)uVar16)) {
        func_0x00010bd0b3e0(pppppuStack_2e8[0x16]);
      }
      else {
        *(uint *)((long)pppppuStack_238[0xb] + (long)iVar6 * 4) = uVar16;
        iVar6 = iVar6 + 1;
        ppuVar32 = (undefined **)pppppuStack_238;
      }
    }
    *(int *)(ppuVar32 + 7) = iVar6;
    *(undefined4 *)((long)ppuVar32 + 0x3c) = *(undefined4 *)(pppppuStack_2e8 + 7);
    ppppppuVar7 = unaff_x25;
    func_0x00010bcf6890();
    func_0x00010bd0ac50();
    ppuVar32[0xc] = (undefined *)ppppppuVar7;
    for (; (long)ppppppuVar23 < (long)*(int *)(pppppuStack_2e8 + 7);
        ppppppuVar23 = (uint ******)((long)ppppppuVar23 + 1)) {
      func_0x00010bd0ab04();
      ppuVar32 = (undefined **)pppppuStack_238;
      func_0x00010bd0b348(pppppuStack_238[0xc]);
      FUN_10bcf7144();
    }
    pcVar13 = (char *)(ulong)*(uint *)(pppppuStack_2e8 + 10);
    *(uint *)(ppuVar32 + 8) = *(uint *)(pppppuStack_2e8 + 10);
    ppppppuVar7 = unaff_x25;
    FUN_10bcf677c();
    func_0x00010bd0ac50();
    ppuVar32[0xd] = (undefined *)ppppppuVar7;
    while ((long)ppppppuVar23 < (long)*(int *)(pppppuStack_2e8 + 10)) {
      func_0x00010bd0ab04();
      ppuVar32 = (undefined **)pppppuStack_238;
      func_0x00010bd0b348(pppppuStack_238[0xd]);
      FUN_10bcf83d0();
      func_0x00010bd0c3a4();
    }
    iVar6 = *(int *)(pppppuStack_2e8 + 0xd);
    *(int *)((long)ppuVar32 + 0x44) = iVar6;
    pppppuVar10 = *unaff_x25;
    if (pppppuVar10 == (uint *****)0x0) goto LAB_10bcf4fa4;
    ppppppuVar23 = (uint ******)(long)*(int *)(unaff_x25 + 0x15);
    uVar16 = *(int *)(unaff_x25 + 0x15) + iVar6 * 0x40;
    uVar8 = (ulong)uVar16;
    *(uint *)(unaff_x25 + 0x15) = uVar16;
    pcVar13 = (char *)(ulong)*(uint *)(unaff_x25 + 0xe);
    func_0x00010bd0a424();
    if (uVar8 != 0) {
      func_0x00010bd0a2b0();
      goto LAB_10bcf29fc;
    }
    ppuVar32[0xe] = (undefined *)((long)pppppuVar10 + (long)ppppppuVar23);
    lVar19 = 0;
    while (lVar19 < *(int *)(pppppuStack_2e8 + 0xd)) {
      func_0x00010bd0c420();
      func_0x00010bd0ab20();
      pppppuVar10 = pppppuStack_238;
      ppppppuVar14 = (uint ******)*extraout_x8_23;
      pppppuVar25 = (uint *****)pppppuStack_238[0xe];
      pppppuVar11 = (uint *****)param_2[0x15][2];
      pcVar13 = (char *)((ulong)ppppppuVar14[6] & 0xfffffffffffffffc);
      FUN_10bcf9384(pppppuVar11,pcVar13,unaff_x25);
      ppppppuVar7 = (uint ******)(pppppuVar25 + extraout_x9_18 * 8);
      ppppppuVar7[1] = pppppuVar11;
      ppppppuVar7[2] = param_2[0x15];
      func_0x00010bd0ba04(ppppppuVar14[6]);
      FUN_10bcf6c84(extraout_x9_19);
      iVar6 = *(int *)(ppppppuVar14 + 4);
      *(int *)(ppppppuVar7 + 7) = iVar6;
      pppppuVar11 = *unaff_x25;
      if (pppppuVar11 == (uint *****)0x0) {
        func_0x00010bd0a030();
        goto LAB_10bcf29fc;
      }
      iVar21 = *(int *)(unaff_x25 + 0x15);
      uVar16 = iVar21 + iVar6 * 0x50;
      uVar8 = (ulong)uVar16;
      *(uint *)(unaff_x25 + 0x15) = uVar16;
      pcVar13 = (char *)(ulong)*(uint *)(unaff_x25 + 0xe);
      func_0x00010bd0a424();
      if (uVar8 != 0) {
        func_0x00010bd0a2b0();
        ppppppuVar23 = (uint ******)(long)iVar21;
        goto LAB_10bcf29fc;
      }
      lVar19 = 0;
      ppppppuVar7[6] = (uint *****)((long)pppppuVar11 + (long)iVar21);
      pppppuStack_2f0 = (uint *****)(ppppppuVar14 + 3);
      while( true ) {
        lVar28 = (long)*(int *)(ppppppuVar14 + 4);
        cVar2 = SBORROW8(lVar19,lVar28);
        cVar3 = lVar19 - lVar28 < 0;
        if (lVar28 <= lVar19) break;
        func_0x00010bd0ab20(*pppppuStack_2f0);
        ppuVar32 = (undefined **)*extraout_x8_24;
        pppppuVar25 = ppppppuVar7[6] + lVar19 * 10;
        pppppuVar25[2] = (uint ****)ppppppuVar7;
        pppppuVar11 = ppppppuVar7[1] + 3;
        FUN_10bcf9384(pppppuVar11,(ulong)ppuVar32[3] & 0xfffffffffffffffc,unaff_x25);
        pppppuVar25[1] = (uint ****)pppppuVar11;
        func_0x00010bd0ba04(ppuVar32[3]);
        FUN_10bcf6c84(param_2);
        param_1 = 0;
        pppppuVar25[6] = (uint ****)0x0;
        pppppuVar25[5] = (uint ****)0x0;
        pppppuVar25[4] = (uint ****)0x0;
        pppppuVar25[3] = (uint ****)0x0;
        auStack_200[0] = 4;
        func_0x00010bd0c5f8();
        pcVar13 = (char *)&pppppuStack_70;
        func_0x00010bcf1a90(pppppuVar25[2]);
        pppppuStack_1e8._0_4_ = 2;
        func_0x00010bd0c1dc();
        pppppuStack_1e8 =
             (uint *****)
             CONCAT44(pppppuStack_1e8._4_4_,
                      (int)(((long)pppppuVar25 - (long)pppppuVar25[2][6]) / 0x50));
        func_0x00010bd0c1dc();
        func_0x00010bd0c1e8();
        pppppuVar11 = pppppuStack_68;
        ppppppuVar23 = (uint ******)pppppuStack_70;
        ppppuVar35 = pppppuVar25[1];
        ppppppuVar30 = (uint ******)(long)*(char *)((long)ppppuVar35 + 0x2f);
        if ((long)ppppppuVar30 < 0) {
          ppppppuVar12 = (uint ******)ppppuVar35[3];
          ppppppuVar30 = (uint ******)ppppuVar35[4];
        }
        else {
          ppppppuVar12 = (uint ******)(ppppuVar35 + 3);
        }
        unaff_x27 = &PTR_PTR_113406110;
        if ((*(byte *)(ppuVar32 + 2) >> 3 & 1) != 0) {
          if (*unaff_x25 == (uint *****)0x0) {
            func_0x00010bd0a030();
            ppppppuVar23 = ppppppuVar7;
            goto LAB_10bcf29fc;
          }
          ppppppuVar36 = (uint ******)ppuVar32[6];
          unaff_x27 = (undefined **)unaff_x25[0xc];
          iVar6 = *(int *)(unaff_x25 + 0x1b);
          uVar16 = iVar6 + 1;
          uVar8 = (ulong)uVar16;
          *(uint *)(unaff_x25 + 0x1b) = uVar16;
          pcVar13 = (char *)(ulong)*(uint *)(unaff_x25 + 0x14);
          func_0x00010bd0a424();
          if (uVar8 != 0) {
            func_0x00010bd0a2b0();
            goto LAB_10bcf29fc;
          }
          ppppppuVar33 = ppppppuVar36;
          FUN_10bd11d48();
          if (((ulong)ppppppuVar33 & 1) == 0) {
            pppppuStack_1e8 = (uint *****)ppppppuVar12;
            pppppuStack_1e0 = (uint *****)ppppppuVar30;
            func_0x00010bd0a408();
            pppppuStack_108 = (uint *****)ppppppuVar33;
            pppppuStack_100 = (uint *****)pcVar13;
            pppppuStack_b8 = (uint *****)ppppppuVar12;
            pppppuStack_b0 = (uint *****)ppppppuVar30;
            func_0x00010bd0ada8(&pppppuStack_40);
            func_0x00010bd0a6a0(param_2,&pppppuStack_40,ppppppuVar36);
            func_0x00010bd0b18c();
            unaff_x27 = &PTR_PTR_113406110;
          }
          else {
            func_0x00010b4d1804(&pppppuStack_1e8,ppppppuVar36);
            unaff_x27 = unaff_x27 + (long)iVar6 * 0xb;
            func_0x00010bd0ae54();
            uVar38 = extraout_x11_00;
            ppppppuVar33 = extraout_x10_10;
            if (cVar3 == cVar2) {
              uVar38 = extraout_x8_25;
              ppppppuVar33 = extraout_x9_20;
            }
            func_0x00010bcfd620(ppppppuVar33,uVar38,unaff_x27);
            func_0x00010bd0b738();
            if (0 < *(int *)(unaff_x27 + 7)) {
              ppppppuVar33 = &pppppuStack_1e8;
              FUN_10bd05380(ppppppuVar33,ppppppuVar12,ppppppuVar30,ppppppuVar12,ppppppuVar30,
                            ppppppuVar23,(long)pppppuVar11 - (long)ppppppuVar23 >> 2,ppppppuVar36,
                            unaff_x27);
              func_0x00010bd0ad8c();
              func_0x00010bd0b730();
            }
            if (((ulong)ppppppuVar36[1] & 1) == 0) {
              FUN_10bd36610();
            }
            else {
              ppppppuVar33 = (uint ******)(((ulong)ppppppuVar36[1] & 0xfffffffffffffffe) + 8);
            }
            uVar4 = *ppppppuVar33 == ppppppuVar33[1];
            if (!(bool)uVar4) {
              func_0x00010bd0c688();
              FUN_10bceca2c();
              func_0x00010bd0adc4();
              if ((bool)uVar4) {
                func_0x00010bd0c604();
                for (; func_0x00010bd0bbd4(), (long)ppppppuVar30 < (long)extraout_w8;
                    ppppppuVar30 = (uint ******)((long)ppppppuVar30 + 1)) {
                  FUN_10bd025c0(**param_2);
                  pppppuVar11 = *param_2;
                  func_0x00010bd0aeb0();
                  FUN_10bcee158();
                  if (pppppuVar11 != (uint *****)0x0) {
                    pppppuStack_1e8 = (uint *****)pppppuVar11[2];
                    func_0x00010bd0a920();
                  }
                }
              }
            }
          }
        }
        pppppuVar25[7] = (uint ****)unaff_x27;
        func_0x00010bd0ac34();
        pppppuVar25[8] = extraout_x8_26;
        pppppuVar25[9] = extraout_x8_26;
        func_0x00010bd0b458();
        *(undefined1 *)((long)pppppuVar25 + 1) = *(undefined1 *)(ppuVar32 + 7);
        *(undefined1 *)((long)pppppuVar25 + 2) = *(undefined1 *)((long)ppuVar32 + 0x39);
        *(undefined1 *)pppppuVar25 = 8;
        FUN_10bcf6994(param_2,pppppuVar25[1] + 3,ppuVar32,pppppuVar25);
        lVar19 = lVar19 + 1;
      }
      auStack_200[0] = 3;
      func_0x00010bd0c5f8();
      pcVar13 = (char *)&pppppuStack_70;
      func_0x00010bcf1a90(ppppppuVar7);
      func_0x00010bd0c1e8();
      ppppppuVar23 = (uint ******)pppppuStack_68;
      pppppuVar11 = pppppuStack_70;
      pppppuVar25 = ppppppuVar7[1];
      ppppppuVar30 = (uint ******)(long)*(char *)((long)pppppuVar25 + 0x2f);
      if ((long)ppppppuVar30 < 0) {
        ppppppuVar12 = (uint ******)pppppuVar25[3];
        ppppppuVar30 = (uint ******)pppppuVar25[4];
      }
      else {
        ppppppuVar12 = (uint ******)(pppppuVar25 + 3);
      }
      ppuVar32 = &PTR_PTR_113406068;
      if ((*(byte *)(ppppppuVar14 + 2) >> 1 & 1) != 0) {
        if (*unaff_x25 == (uint *****)0x0) {
          func_0x00010bd0a030();
          ppppppuVar23 = ppppppuVar7;
          goto LAB_10bcf29fc;
        }
        unaff_x27 = (undefined **)ppppppuVar14[7];
        pppppuVar25 = unaff_x25[0xb];
        iVar6 = *(int *)((long)unaff_x25 + 0xd4);
        lVar19 = (long)iVar6;
        uVar8 = (ulong)(iVar6 + 1U);
        *(uint *)((long)unaff_x25 + 0xd4) = iVar6 + 1U;
        pcVar13 = (char *)(ulong)*(uint *)((long)unaff_x25 + 0x9c);
        func_0x00010bd0a424();
        if (uVar8 != 0) {
          func_0x00010bd0a2b0();
          goto LAB_10bcf29fc;
        }
        ppppppuVar36 = (uint ******)unaff_x27;
        FUN_10bd11a94();
        if (((ulong)ppppppuVar36 & 1) == 0) {
          pppppuStack_1e8 = (uint *****)ppppppuVar12;
          pppppuStack_1e0 = (uint *****)ppppppuVar30;
          func_0x00010bd0a408();
          pppppuStack_108 = (uint *****)ppppppuVar36;
          pppppuStack_100 = (uint *****)pcVar13;
          pppppuStack_b8 = (uint *****)ppppppuVar12;
          pppppuStack_b0 = (uint *****)ppppppuVar30;
          func_0x00010bd0ada8(&pppppuStack_40);
          func_0x00010bd0a6a0(param_2,&pppppuStack_40,unaff_x27);
          func_0x00010bd0b18c();
        }
        else {
          func_0x00010b4d1804(&pppppuStack_1e8,unaff_x27);
          ppuVar32 = (undefined **)(pppppuVar25 + (long)iVar6 * 0xb);
          func_0x00010bd0ae54();
          uVar38 = extraout_x11_01;
          ppppppuVar36 = extraout_x10_11;
          if (cVar3 == cVar2) {
            uVar38 = extraout_x8_27;
            ppppppuVar36 = extraout_x9_21;
          }
          func_0x00010bcfd620(ppppppuVar36,uVar38,ppuVar32);
          func_0x00010bd0b738();
          if (0 < *(int *)(ppuVar32 + 7)) {
            ppppppuVar36 = &pppppuStack_1e8;
            FUN_10bd05380(ppppppuVar36,ppppppuVar12,ppppppuVar30,ppppppuVar12,ppppppuVar30,
                          pppppuVar11,(long)ppppppuVar23 - (long)pppppuVar11 >> 2,unaff_x27,ppuVar32
                         );
            func_0x00010bd0ad8c();
            func_0x00010bd0b730();
          }
          if (((ulong)unaff_x27[1] & 1) == 0) {
            FUN_10bd36610();
          }
          else {
            ppppppuVar36 = (uint ******)(((ulong)unaff_x27[1] & 0xfffffffffffffffe) + 8);
          }
          uVar4 = *ppppppuVar36 == ppppppuVar36[1];
          if (!(bool)uVar4) {
            func_0x00010bd0c688();
            FUN_10bceca2c();
            func_0x00010bd0adc4();
            if ((bool)uVar4) {
              func_0x00010bd0be08();
              for (; func_0x00010bd0bbd4(), lVar19 < extraout_w8_00; lVar19 = lVar19 + 1) {
                FUN_10bd025c0(**param_2);
                pppppuVar11 = *param_2;
                func_0x00010bd0aeb0();
                FUN_10bcee158();
                if (pppppuVar11 != (uint *****)0x0) {
                  pppppuStack_1e8 = (uint *****)pppppuVar11[2];
                  func_0x00010bd0a920();
                }
              }
            }
          }
        }
      }
      ppppppuVar7[3] = (uint *****)ppuVar32;
      func_0x00010bd0ac34();
      ppppppuVar7[4] = extraout_x8_28;
      ppppppuVar7[5] = extraout_x8_28;
      func_0x00010bd0b458();
      *(undefined1 *)ppppppuVar7 = 7;
      FUN_10bcf6994(param_2,ppppppuVar7[1] + 3,ppppppuVar14,ppppppuVar7);
      ppppppuVar23 = ppppppuVar7;
      ppuVar32 = (undefined **)pppppuVar10;
      lVar19 = extraout_x9_18 + 1;
    }
    *(undefined4 *)((long)ppuVar32 + 4) = *(undefined4 *)(pppppuStack_2e8 + 0x10);
    ppppppuVar7 = unaff_x25;
    FUN_10bcf8fe8();
    func_0x00010bd0ac50();
    unaff_x27 = (undefined **)pppppuStack_238;
    pppppuStack_238[0xf] = (uint ****)ppppppuVar7;
    while( true ) {
      lVar19 = (long)*(int *)(pppppuStack_2e8 + 0x10);
      cVar2 = SBORROW8((long)ppppppuVar23,lVar19);
      cVar3 = (long)ppppppuVar23 - lVar19 < 0;
      if (lVar19 <= (long)ppppppuVar23) break;
      func_0x00010bd0ab04();
      func_0x00010bd0b348(unaff_x27[0xf]);
      FUN_10bcf9040();
      func_0x00010bd0c3a4();
    }
    ppppuStack_218 = (uint ****)0x0;
    pppppuStack_210 = (uint *****)0x0;
    uStack_208 = 0;
    pppppuStack_1e8 = (uint *****)CONCAT44(pppppuStack_1e8._4_4_,8);
    ppppppuVar7 = &pppppuStack_1e8;
    func_0x000107c27eac(&ppppuStack_218);
    func_0x00010bd09fc4(unaff_x27[2]);
    pppppuStack_38 = (uint *****)extraout_x12;
    if (cVar3 == cVar2) {
      pppppuStack_38 = (uint *****)extraout_x9_22;
    }
    ppppppuVar30 = (uint ******)&UNK_10f831dba;
    pppppuStack_40 = (uint *****)extraout_x8_29;
    func_0x000107c284bc();
    ppppppuVar12 = &pppppuStack_230;
    pcVar13 = (char *)&pppppuStack_70;
    pppppuStack_70 = (uint *****)ppppppuVar30;
    pppppuStack_68 = (uint *****)ppppppuVar7;
    func_0x000107c2ba40(&pppppuStack_230,&pppppuStack_40);
    pppppuVar10 = pppppuStack_210;
    cVar3 = (char)bStack_219 < '\0';
    cVar2 = '\0';
    ppppppuVar7 = (uint ******)pppppuStack_228;
    ppppppuVar30 = (uint ******)pppppuStack_230;
    if (!(bool)cVar3) {
      ppppppuVar7 = (uint ******)(ulong)bStack_219;
      ppppppuVar30 = ppppppuVar12;
    }
    ppppppuVar33 = (uint ******)unaff_x27[1];
    ppppppuVar36 = (uint ******)(long)*(char *)((long)ppppppuVar33 + 0x17);
    ppuVar32 = (undefined **)ppppppuVar33;
    if ((long)ppppppuVar36 < 0) {
      ppuVar32 = (undefined **)*ppppppuVar33;
      ppppppuVar36 = (uint ******)ppppppuVar33[1];
    }
    ppuVar26 = &PTR_PTR_1134061c0;
    if ((*(byte *)(pppppuStack_2e8 + 2) >> 3 & 1) != 0) {
      if (*unaff_x25 == (uint *****)0x0) {
        func_0x00010bd0a030();
        unaff_x27 = (undefined **)ppppppuVar7;
        goto LAB_10bcf29fc;
      }
      ppppppuVar14 = (uint ******)pppppuStack_2e8[0x19];
      ppppppuVar12 = (uint ******)unaff_x25[0xd];
      iVar6 = *(int *)((long)unaff_x25 + 0xdc);
      uVar16 = iVar6 + 1;
      uVar8 = (ulong)uVar16;
      *(uint *)((long)unaff_x25 + 0xdc) = uVar16;
      pcVar13 = (char *)(ulong)*(uint *)((long)unaff_x25 + 0xa4);
      func_0x00010bd0a424();
      ppppppuVar23 = (uint ******)pppppuVar10;
      if (uVar8 != 0) {
        func_0x00010bd0a2b0();
        unaff_x27 = (undefined **)ppppppuVar7;
        goto LAB_10bcf29fc;
      }
      ppppppuVar33 = ppppppuVar14;
      func_0x000107c315f4();
      if (((ulong)ppppppuVar33 & 1) == 0) {
        pppppuStack_1e8 = (uint *****)ppppppuVar30;
        pppppuStack_1e0 = (uint *****)ppppppuVar7;
        func_0x00010bd0a408();
        pppppuStack_108 = (uint *****)ppppppuVar33;
        pppppuStack_100 = (uint *****)pcVar13;
        pppppuStack_b8 = (uint *****)ppuVar32;
        pppppuStack_b0 = (uint *****)ppppppuVar36;
        func_0x00010bd0ada8(auStack_200);
        func_0x00010bd0b274();
        pcVar13 = (char *)auStack_200;
        func_0x00010bd0b280(param_2);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_200);
        ppuVar26 = &PTR_PTR_1134061c0;
      }
      else {
        func_0x00010b4d1804(&pppppuStack_1e8,ppppppuVar14);
        ppuVar26 = (undefined **)(ppppppuVar12 + (long)iVar6 * 0x16);
        func_0x00010bd0ae54();
        pcVar13 = (char *)extraout_x11_02;
        ppppppuVar36 = extraout_x10_12;
        if (cVar3 == cVar2) {
          pcVar13 = (char *)extraout_x8_30;
          ppppppuVar36 = extraout_x9_23;
        }
        ppppppuVar33 = (uint ******)ppuVar26;
        func_0x00010bcfd620();
        func_0x00010bd0b738();
        if (0 < *(int *)(ppuVar26 + 7)) {
          ppppppuVar36 = &pppppuStack_1e8;
          FUN_10bd05380();
          func_0x00010bd0ad8c();
          func_0x00010bd0b730();
          pcVar13 = (char *)ppppppuVar30;
          ppppppuVar33 = ppppppuVar7;
        }
        if (((ulong)ppppppuVar14[1] & 1) == 0) {
          FUN_10bd36610();
          ppppppuVar14 = ppppppuVar33;
          ppppppuVar7 = ppppppuVar36;
        }
        else {
          ppppppuVar7 = (uint ******)(((ulong)ppppppuVar14[1] & 0xfffffffffffffffe) + 8);
          ppppppuVar14 = ppppppuVar33;
        }
        uVar4 = *ppppppuVar7 == ppppppuVar7[1];
        if (!(bool)uVar4) {
          func_0x00010bd0c688();
          pcVar13 = "google.protobuf.FileOptions";
          ppppppuVar14 = (uint ******)0x1b;
          FUN_10bceca2c();
          func_0x00010bd0adc4();
          ppppppuVar23 = ppppppuVar36;
          if ((bool)uVar4) {
            ppppppuVar12 = (uint ******)0x0;
            for (ppuVar32 = (undefined **)0x0; func_0x00010bd0bbd4(),
                (long)ppuVar32 < (long)extraout_w8_01; ppuVar32 = (undefined **)((long)ppuVar32 + 1)
                ) {
              FUN_10bd025c0(**param_2);
              pppppuVar10 = *param_2;
              func_0x00010bd0aeb0();
              FUN_10bcee158();
              if (pppppuVar10 != (uint *****)0x0) {
                pppppuStack_1e8 = (uint *****)pppppuVar10[2];
                func_0x00010bd0a920();
              }
              ppppppuVar12 = ppppppuVar12 + 2;
            }
          }
        }
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_230);
    unaff_x27[0x10] = (undefined *)ppuVar26;
    func_0x00010bd0ac34();
    unaff_x27[0x11] = (undefined *)extraout_x8_31;
    unaff_x27[0x12] = (undefined *)extraout_x8_31;
    ppppppuVar7 = (uint ******)&ppppuStack_218;
    func_0x000107c27a18();
    func_0x00010bd0a618();
    while ((long)ppppppuVar23 < (long)*(int *)((long)unaff_x27 + 0x3c)) {
      func_0x00010bd0a050(unaff_x27[0xc]);
      pcVar13 = (char *)(extraout_x8_32 + (long)ppppppuVar12);
      ppppppuVar7 = param_2;
      FUN_10bcfa754();
      func_0x00010bd0aae4();
    }
    func_0x00010bd0a618();
    while ((long)ppppppuVar23 < (long)*(int *)((long)unaff_x27 + 4)) {
      func_0x00010bd0a050(unaff_x27[0xf]);
      pcVar13 = (char *)(extraout_x8_33 + (long)ppppppuVar12);
      ppppppuVar7 = param_2;
      FUN_10bcfabc8();
      func_0x00010bd0a804();
    }
    for (ppuVar26 = (undefined **)0x0; (long)ppuVar26 < (long)*(int *)((long)unaff_x27 + 0x44);
        ppuVar26 = (undefined **)((long)ppuVar26 + 1)) {
      lVar28 = 0;
      ppppppuVar23 = (uint ******)((long)unaff_x27[0xe] + (long)ppuVar26 * 8 * 8);
      func_0x00010bd0c420();
      func_0x00010bd0ab20();
      lVar18 = *extraout_x8_34;
      for (lVar19 = 0; bVar5 = lVar19 == *(int *)(ppppppuVar23 + 7),
          lVar19 < *(int *)(ppppppuVar23 + 7); lVar19 = lVar19 + 1) {
        pppppuVar10 = ppppppuVar23[6];
        func_0x00010bd0ae30(*(undefined8 *)(lVar18 + 0x18));
        puVar1 = (undefined8 *)(lVar18 + 0x18);
        if (!bVar5) {
          puVar1 = extraout_x9_24;
        }
        ppuVar32 = (undefined **)*puVar1;
        func_0x00010bd0c72c(ppuVar32[4]);
        func_0x00010bd0b1e8();
        if (*(char *)ppppppuVar7 == '\x01') {
          ppppppuVar7 = (uint ******)((long)pppppuVar10 + lVar28 + 0x18);
          FUN_10bcfb4a8();
        }
        else if (*(char *)ppppppuVar7 == '\0') {
          if ((*(byte *)((long)*param_2 + 0x31) & 1) == 0) {
            ppppppuVar7 = param_2;
            func_0x00010bd0c5c8(*(undefined8 *)((long)pppppuVar10 + lVar28 + 8));
            ppppppuVar14 = (uint ******)ppuVar32;
            FUN_10bcf5848();
          }
          else {
            func_0x00010bd0b7fc(ppuVar32[4]);
            if ((long)ppppppuVar14 < 0) {
              ppppppuVar14 = (uint ******)ppppppuVar7[1];
            }
            ppppppuVar7 = (uint ******)((long)pppppuVar10 + lVar28 + 0x18);
            FUN_10bcfb3b0();
          }
        }
        else {
          pppppuStack_1e8 = (uint *****)ppuVar32;
          func_0x00010bd0baf4();
          ppppppuVar14 = (uint ******)ppuVar32;
          FUN_10bcf56d0();
        }
        func_0x00010bd0c72c(ppuVar32[5]);
        func_0x00010bd0b1e8();
        if (*(char *)ppppppuVar7 == '\x01') {
          ppppppuVar30 = (uint ******)((long)pppppuVar10 + lVar28 + 0x28);
          FUN_10bcfb4a8();
          pcVar13 = (char *)ppppppuVar7;
        }
        else if (*(char *)ppppppuVar7 == '\0') {
          if ((*(byte *)((long)*param_2 + 0x31) & 1) == 0) {
            ppppppuVar30 = param_2;
            func_0x00010bd0c5c8(*(undefined8 *)((long)pppppuVar10 + lVar28 + 8));
            ppppppuVar14 = (uint ******)ppuVar32;
            FUN_10bcf5848();
            pcVar13 = (char *)ppppppuVar7;
          }
          else {
            func_0x00010bd0b7fc(ppuVar32[5]);
            pcVar13 = (char *)ppppppuVar7;
            if ((long)ppppppuVar14 < 0) {
              pcVar13 = (char *)*ppppppuVar7;
              ppppppuVar14 = (uint ******)ppppppuVar7[1];
            }
            ppppppuVar30 = (uint ******)((long)pppppuVar10 + lVar28 + 0x28);
            FUN_10bcfb3b0();
          }
        }
        else {
          pcVar13 = (char *)(*(long *)((long)pppppuVar10 + lVar28 + 8) + 0x18);
          pppppuStack_1e8 = (uint *****)ppuVar32;
          func_0x00010bd0baf4();
          ppppppuVar14 = (uint ******)ppuVar32;
          FUN_10bcf56d0();
          ppppppuVar30 = ppppppuVar7;
        }
        lVar28 = lVar28 + 0x50;
        ppppppuVar7 = ppppppuVar30;
      }
    }
    if (param_2[0x1e] != (uint *****)0x0) {
      for (ppppppuVar23 = (uint ******)0x0;
          (long)ppppppuVar23 < (long)*(int *)((long)unaff_x27 + 0x3c);
          ppppppuVar23 = (uint ******)((long)ppppppuVar23 + 1)) {
        pppppuStack_b8 = (uint *****)((long)unaff_x27[0xc] + (long)ppppppuVar23 * 0x13 * 8);
        Hint_Prefetch(param_2[0x1b],0,2,0);
        ppppppuVar7 = param_2 + 0x1b;
        pcVar13 = (char *)&pppppuStack_b8;
        FUN_10bd044a0(param_2[0x1b]);
        func_0x00010bd0c6b8(pppppuStack_b8);
        lVar19 = extraout_x9_25;
        lVar28 = extraout_x10_13;
        uVar22 = extraout_x11_03;
        uVar8 = extraout_x13;
        while( true ) {
          uVar8 = uVar8 & uVar22;
          uVar38 = *(undefined8 *)(lVar28 + uVar8);
          uVar27 = CONCAT17(-((char)((ulong)uVar38 >> 0x38) == (char)((ulong)param_1 >> 0x38)),
                            CONCAT16(-((char)((ulong)uVar38 >> 0x30) ==
                                      (char)((ulong)param_1 >> 0x30)),
                                     CONCAT15(-((char)((ulong)uVar38 >> 0x28) ==
                                               (char)((ulong)param_1 >> 0x28)),
                                              CONCAT14(-((char)((ulong)uVar38 >> 0x20) ==
                                                        (char)((ulong)param_1 >> 0x20)),
                                                       CONCAT13(-((char)((ulong)uVar38 >> 0x18) ==
                                                                 (char)((ulong)param_1 >> 0x18)),
                                                                CONCAT12(-((char)((ulong)uVar38 >>
                                                                                 0x10) ==
                                                                          (char)((ulong)param_1 >>
                                                                                0x10)),
                                                                         CONCAT11(-((char)((ulong)
                                                  uVar38 >> 8) == (char)((ulong)param_1 >> 8)),
                                                  -((char)uVar38 == (char)param_1)))))))) &
                   0x8080808080808080;
          while (ppuVar26 = (undefined **)param_2, uVar27 != 0) {
            func_0x00010bd0bc44();
            if (*(uint *******)(extraout_x12_00 + (extraout_x15 & extraout_x11_04) * 0x20) ==
                extraout_x8_35) {
              if (extraout_x10_14 != 0) {
                ppuVar32 = (undefined **)(extraout_x12_00 + (extraout_x15 & extraout_x11_04) * 0x20)
                ;
                iVar21 = *(int *)(ppuVar32 + 1);
                iVar6 = iVar21;
                if (2 < iVar21) {
                  iVar6 = 3;
                }
                pppppuStack_40 = (uint *****)CONCAT44(pppppuStack_40._4_4_,iVar6);
                if (0 < iVar21) {
                  pppppuStack_100 = (uint *****)0x0;
                  pppppuStack_108 = (uint *****)0x0;
                  lVar28 = 4;
                  ppppuStack_f8 = (uint ****)0x0;
                  ppppppuVar14 = extraout_x8_35;
                  for (lVar19 = 0; lVar19 < *(int *)((long)ppppppuVar14 + 4); lVar19 = lVar19 + 1) {
                    FUN_10bcfb4e0(&pppppuStack_108,*(undefined4 *)((long)ppppppuVar14[7] + lVar28));
                    lVar28 = lVar28 + 0x58;
                    ppppppuVar14 = (uint ******)pppppuStack_b8;
                  }
                  lVar19 = 4;
                  for (ppuVar26 = (undefined **)0x0;
                      (long)ppuVar26 < (long)*(int *)((long)ppppppuVar14 + 0x8c);
                      ppuVar26 = (undefined **)((long)ppuVar26 + 1)) {
                    FUN_10bcfb4e0(&pppppuStack_108,*(undefined4 *)((long)ppppppuVar14[0xc] + lVar19)
                                 );
                    lVar19 = lVar19 + 0x58;
                    ppppppuVar14 = (uint ******)pppppuStack_b8;
                  }
                  func_0x00010bd0c604();
                  ppppppuVar14 = extraout_x8_36;
                  for (; lVar19 < *(int *)(ppppppuVar14 + 0x12); lVar19 = lVar19 + 1) {
                    func_0x00010bcfb528(&pppppuStack_108,
                                        *(undefined4 *)((long)ppppppuVar14[0xd] + (long)ppuVar26),
                                        ((undefined4 *)((long)ppppppuVar14[0xd] + (long)ppuVar26))
                                        [1]);
                    ppuVar26 = ppuVar26 + 1;
                    ppppppuVar14 = (uint ******)pppppuStack_b8;
                  }
                  func_0x00010bd0c604();
                  ppppppuVar14 = extraout_x8_37;
                  for (; lVar19 < *(int *)(ppppppuVar14 + 0x11); lVar19 = lVar19 + 1) {
                    func_0x00010bcfb528(&pppppuStack_108,
                                        *(undefined4 *)((long)ppppppuVar14[0xb] + (long)ppuVar26),
                                        ((undefined4 *)((long)ppppppuVar14[0xb] + (long)ppuVar26))
                                        [1]);
                    ppuVar26 = ppuVar26 + 5;
                    ppppppuVar14 = (uint ******)pppppuStack_b8;
                  }
                  FUN_10bcfb550(&pppppuStack_108,0x200000001fffffff);
                  FUN_10bcfb550(&pppppuStack_108,0x4e1f00004a38);
                  pcVar13 = (char *)pppppuStack_100;
                  if (pppppuStack_108 != pppppuStack_100) {
                    FUN_10bd00344(pppppuStack_108,pppppuStack_100,
                                  LZCOUNT((long)pppppuStack_100 - (long)pppppuStack_108 >> 3) << 1 ^
                                  0x7e,1);
                  }
                  pppppuStack_70 = (uint *****)CONCAT44(pppppuStack_70._4_4_,1);
                  if ((uint *****)ppuVar32[2] != (uint *****)0x0) {
                    pppppuStack_1e8 = (uint *****)&pppppuStack_b8;
                    pppppuStack_1e0 = (uint *****)&pppppuStack_108;
                    pppppuStack_1d8 = (uint *****)&pppppuStack_70;
                    pcVar13 = (char *)(pppppuStack_b8[1] + 3);
                    pppppuStack_1d0 = (uint *****)&pppppuStack_40;
                    func_0x00010bd0baf4();
                    func_0x00010bd0b938();
                  }
                  ppppppuVar7 = &pppppuStack_108;
                  FUN_10bcfb5fc();
                }
              }
              goto LAB_10bcf4148;
            }
            uVar8 = extraout_x13_00;
            lVar19 = extraout_x9_26;
            lVar28 = extraout_x10_14;
            uVar22 = extraout_x11_04;
            uVar27 = extraout_x14 - 1 & extraout_x14;
          }
          bVar37 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar38 >> 0x38) == -0x80),
                                       CONCAT16(-((char)((ulong)uVar38 >> 0x30) == -0x80),
                                                CONCAT15(-((char)((ulong)uVar38 >> 0x28) == -0x80),
                                                         CONCAT14(-((char)((ulong)uVar38 >> 0x20) ==
                                                                   -0x80),CONCAT13(-((char)((ulong)
                                                  uVar38 >> 0x18) == -0x80),
                                                  CONCAT12(-((char)((ulong)uVar38 >> 0x10) == -0x80)
                                                           ,CONCAT11(-((char)((ulong)uVar38 >> 8) ==
                                                                      -0x80),-((char)uVar38 == -0x80
                                                                              )))))))),1);
          if ((bVar37 & 1) != 0) break;
          lVar19 = lVar19 + 8;
          uVar8 = lVar19 + uVar8;
        }
LAB_10bcf4148:
      }
    }
    if (((ulong)param_2[0x11] & 1) == 0) {
      pppppuStack_1d0 = (uint *****)&UNK_10e52b660;
      pppppuStack_1c8 = (uint *****)0x0;
      ppppuStack_1c0 = (uint ****)0x0;
      lStack_1b8 = 0;
      puStack_1b0 = &UNK_10e52b660;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      ppuStack_190 = &PTR_FUN_110d9cda0;
      uStack_188 = 0;
      uStack_180 = 0;
      puStack_178 = &UNK_10e52b660;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      pppppuStack_1e8 = (uint *****)param_2;
      for (ppppppuVar23 = (uint ******)param_2[0xe]; ppppppuVar23 != (uint ******)param_2[0xf];
          ppppppuVar23 = ppppppuVar23 + 0xb) {
        pcVar13 = (char *)ppppppuVar23;
        FUN_10bd00f44(&pppppuStack_1e8,ppppppuVar23,1);
      }
      ppppppuVar23 = (uint ******)unaff_x27[0x10];
      uVar16 = *(uint *)(unaff_x27 + 4);
      ppuVar26 = (undefined **)(ulong)uVar16;
      pppppuStack_40 = (uint *****)param_2;
      pppppuStack_38 = (uint *****)unaff_x25;
      func_0x00010bd0ac34();
      unaff_x27[0x11] = (undefined *)extraout_x8_38;
      unaff_x27[0x12] = (undefined *)extraout_x8_38;
      if (((ulong)param_2[0xd] & 1) == 0) {
        func_0x00010bd0a738();
LAB_10bcf494c:
        func_0x00010ae6c700(&pppppuStack_108);
LAB_10bcf4954:
        func_0x00010bd0a010();
        goto LAB_10bcf29fc;
      }
      if ((*(byte *)((long)ppppppuVar23 + 0x29) >> 2 & 1) != 0) {
        pppppuVar10 = param_2[1];
        ppppppuVar14 = ppppppuVar23;
        FUN_10bd04750(ppppppuVar23,&PTR_PTR_113405ec0);
        FUN_10bced744(pppppuVar10,ppppppuVar14);
        unaff_x27[0x11] = (undefined *)pppppuVar10;
        if (ppppppuVar23[0x13] != (uint *****)0x0) {
          FUN_10bd0e0c0();
        }
        *(uint *)(ppppppuVar23 + 5) = *(uint *)(ppppppuVar23 + 5) & 0xfffffbff;
      }
      func_0x00010bd0c294();
      cVar2 = SBORROW4(uVar16,999);
      cVar3 = (int)(uVar16 - 999) < 0;
      if ((int)uVar16 < 1000) {
        pppppuVar10 = (uint *****)unaff_x27[0x11];
        cVar2 = SBORROW8((long)pppppuVar10,0x113405ec0);
        cVar3 = (long)(pppppuVar10 + -0x22680bd8) < 0;
        if (pppppuVar10 != (uint *****)&PTR_PTR_113405ec0) {
          func_0x00010bd0b48c();
          func_0x00010bd0c28c(param_2);
        }
      }
      func_0x00010bd0c29c();
      func_0x00010bd0c67c();
      ppppppuVar14 = param_2 + 4;
      FUN_10bd1ae94(&pppppuStack_108);
      if ((uint ******)pppppuStack_108 == (uint ******)0x0) {
        ppppppuVar23 = (uint ******)param_2[1];
        ppuVar26 = (undefined **)&pppppuStack_108;
        func_0x00010bd0c10c();
        pcVar13 = (char *)&pppppuStack_100;
        func_0x00010bd0ba58();
        unaff_x27[0x12] = (undefined *)ppppppuVar14;
      }
      else {
        pcVar13 = unaff_x27[1];
        pppppuStack_70 = (uint *****)&pppppuStack_108;
        ppppppuVar14 = param_2;
        FUN_10bcf56d0(param_2,pcVar13,pppppuStack_2e8,10,&pppppuStack_70,FUN_10bd05480);
      }
      func_0x00010bd0ba1c();
      func_0x00010bd0bb00();
      func_0x00010bd0a618();
      while (func_0x00010bd0c65c(), cVar3 != cVar2) {
        func_0x00010bd0a050(unaff_x27[0xc]);
        ppppppuVar14 = &pppppuStack_40;
        pcVar13 = (char *)(extraout_x8_39 + (long)ppuVar26);
        FUN_10bd058c8();
        func_0x00010bd0aae4();
      }
      func_0x00010bd0a618();
      while( true ) {
        lVar19 = (long)*(int *)(unaff_x27 + 8);
        cVar2 = SBORROW8((long)ppppppuVar23,lVar19);
        cVar3 = (long)ppppppuVar23 - lVar19 < 0;
        if (lVar19 <= (long)ppppppuVar23) break;
        func_0x00010bd0a050(unaff_x27[0xd]);
        ppppppuVar14 = &pppppuStack_40;
        pcVar13 = (char *)(extraout_x8_40 + (long)ppuVar26);
        FUN_10bd05dec();
        func_0x00010bd0a804();
      }
      func_0x00010bd0a618();
      while (func_0x00010bd0c4d4(), cVar3 != cVar2) {
        func_0x00010bd0a050(unaff_x27[0xf]);
        pcVar13 = (char *)(extraout_x8_41 + (long)ppuVar26);
        ppppppuVar14 = param_2;
        FUN_10bd060c0();
        func_0x00010bd0a804();
      }
      lVar19 = 0;
      while( true ) {
        lVar28 = (long)*(int *)((long)unaff_x27 + 0x44);
        cVar2 = SBORROW8(lVar19,lVar28);
        cVar3 = lVar19 - lVar28 < 0;
        if (lVar28 <= lVar19) break;
        pppppuVar10 = (uint *****)unaff_x27[0xe];
        func_0x00010bd0c420();
        func_0x00010bd0ab20();
        ppuVar32 = (undefined **)*extraout_x8_42;
        ppppppuVar23 = (uint ******)pppppuVar10[lVar19 * 8 + 3];
        uVar16 = *(uint *)(pppppuVar10[lVar19 * 8 + 2] + 4);
        ppuVar26 = (undefined **)(ulong)uVar16;
        ppppppuVar7 = (uint ******)pppppuVar10[lVar19 * 8 + 2][0x12];
        func_0x00010bd0c67c();
        pppppuVar10[lVar19 * 8 + 4] = (uint ****)pcVar13;
        pppppuVar10[lVar19 * 8 + 5] = (uint ****)pcVar13;
        if (((ulong)param_2[0xd] & 1) == 0) {
          func_0x00010bd0a738();
          unaff_x27 = (undefined **)ppppppuVar7;
          goto LAB_10bcf494c;
        }
        if (((ulong)ppppppuVar23[5] & 1) != 0) {
          pcVar13 = (char *)ppppppuVar23;
          func_0x00010bd04884();
          func_0x00010bd0c318();
          pppppuVar10[lVar19 * 8 + 4] = (uint ****)pcVar13;
          ppppppuVar14 = (uint ******)ppppppuVar23[9];
          if (ppppppuVar14 != (uint ******)0x0) {
            FUN_10bd0e0c0();
            pcVar13 = (char *)pppppuVar10[lVar19 * 8 + 4];
          }
          *(uint *)(ppppppuVar23 + 5) = *(uint *)(ppppppuVar23 + 5) & 0xfffffffe;
        }
        func_0x00010bd0c294();
        bVar5 = uVar16 == 999;
        if (((int)uVar16 < 1000) && (func_0x00010bd0af58(pppppuVar10[lVar19 * 8 + 4]), !bVar5)) {
          pcVar13 = (char *)pppppuVar10[lVar19 * 8 + 1];
          ppppppuVar14 = param_2;
          func_0x00010bd0a6e8(param_2,pcVar13,ppuVar32);
        }
        func_0x00010bd0c29c();
        if (ppppppuVar14 == (uint ******)0x0) {
          pppppuVar10[lVar19 * 8 + 5] = (uint ****)ppppppuVar7;
          ppppppuVar14 = (uint ******)0x0;
        }
        else {
          ppppppuVar14 = param_2 + 4;
          func_0x00010bd0beb8(&pppppuStack_108);
          if ((uint ******)pppppuStack_108 == (uint ******)0x0) {
            func_0x00010bd0c10c();
            pcVar13 = (char *)&pppppuStack_100;
            func_0x00010bd0ba58();
            pppppuVar10[lVar19 * 8 + 5] = (uint ****)ppppppuVar14;
          }
          else {
            pcVar13 = (char *)pppppuVar10[lVar19 * 8 + 1];
            pppppuStack_70 = (uint *****)&pppppuStack_108;
            func_0x00010bd0aaf4();
            FUN_10bcf56d0();
          }
          func_0x00010bd0ba1c();
        }
        func_0x00010bd0bb00();
        func_0x00010bd0c604();
        ppppppuVar7 = (uint ******)(ppuVar32 + 3);
        ppppppuVar12 = (uint ******)0x8;
        for (ppppppuVar30 = param_2;
            bVar5 = ppppppuVar30 == (uint ******)(long)(int)*(uint *)(pppppuVar10 + lVar19 * 8 + 7),
            (long)ppppppuVar30 < (long)(int)*(uint *)(pppppuVar10 + lVar19 * 8 + 7);
            ppppppuVar30 = (uint ******)((long)ppppppuVar30 + 1)) {
          ppppuVar35 = pppppuVar10[lVar19 * 8 + 6];
          func_0x00010bd0ae30(*ppppppuVar7);
          puVar1 = extraout_x10_15;
          if (!bVar5) {
            puVar1 = extraout_x9_27;
          }
          ppuVar32 = (undefined **)*puVar1;
          ppppppuVar23 = *(uint *******)((long)ppuVar26 + (long)(ppppuVar35 + 7));
          iVar6 = *(int *)(*(long *)(*(long *)((long)ppuVar26 + (long)(ppppuVar35 + 2)) + 0x10) +
                          0x20);
          ppppppuVar36 = *(uint *******)(*(long *)((long)ppuVar26 + (long)(ppppuVar35 + 2)) + 0x28);
          func_0x00010bd0c67c();
          *(char **)((long)ppuVar26 + (long)(ppppuVar35 + 8)) = pcVar13;
          *(char **)((long)ppuVar26 + (long)(ppppuVar35 + 9)) = pcVar13;
          pppppuStack_2f0 = (uint *****)ppppppuVar12;
          if (((ulong)param_2[0xd] & 1) == 0) {
            func_0x00010bd0a738();
            unaff_x27 = (undefined **)ppppppuVar36;
            goto LAB_10bcf494c;
          }
          if (((ulong)ppppppuVar23[5] & 1) != 0) {
            pcVar13 = (char *)ppppppuVar23;
            func_0x00010bd048b4();
            func_0x00010bd0c318();
            *(char **)((long)ppuVar26 + (long)(ppppuVar35 + 8)) = pcVar13;
            ppppppuVar14 = (uint ******)ppppppuVar23[9];
            if (ppppppuVar14 != (uint ******)0x0) {
              FUN_10bd0e0c0();
              pcVar13 = *(char **)((long)ppuVar26 + (long)(ppppuVar35 + 8));
            }
            *(uint *)(ppppppuVar23 + 5) = *(uint *)(ppppppuVar23 + 5) & 0xfffffffe;
          }
          func_0x00010bd0c294();
          bVar5 = iVar6 == 999;
          if ((iVar6 < 1000) &&
             (func_0x00010bd0af58(*(undefined8 *)((long)ppuVar26 + (long)(ppppuVar35 + 8))), !bVar5)
             ) {
            pcVar13 = *(char **)((long)ppuVar26 + (long)(ppppuVar35 + 1));
            ppppppuVar14 = param_2;
            func_0x00010bd0a6e8(param_2,pcVar13,ppuVar32);
          }
          func_0x00010bd0c29c();
          if (ppppppuVar14 == (uint ******)0x0) {
            *(uint *******)((long)ppuVar26 + (long)(ppppuVar35 + 9)) = ppppppuVar36;
            ppppppuVar14 = (uint ******)0x0;
          }
          else {
            ppppppuVar14 = param_2 + 4;
            func_0x00010bd0beb8(&pppppuStack_108);
            if ((uint ******)pppppuStack_108 == (uint ******)0x0) {
              func_0x00010bd0c10c();
              pcVar13 = (char *)&pppppuStack_100;
              func_0x00010bd0ba58();
              *(uint *******)((long)ppuVar26 + (long)(ppppuVar35 + 9)) = ppppppuVar14;
            }
            else {
              pcVar13 = *(char **)((long)ppuVar26 + (long)(ppppuVar35 + 1));
              pppppuStack_70 = (uint *****)&pppppuStack_108;
              ppppppuVar14 = param_2;
              func_0x00010bd0b180();
              FUN_10bcf56d0();
            }
            func_0x00010bd0ba1c();
          }
          func_0x00010bd0bb00();
          ppuVar26 = ppuVar26 + 10;
          ppppppuVar12 = ppppppuVar12 + 1;
        }
        lVar19 = lVar19 + 1;
      }
      func_0x00010bd0ac50();
      ppppppuVar14 = (uint ******)0x8;
      pppppuStack_108 = (uint *****)param_2;
      while (func_0x00010bd0c65c(), cVar3 != cVar2) {
        func_0x00010bd0a050(unaff_x27[0xc]);
        func_0x00010bd0c560();
        FUN_10bd06438();
        func_0x00010bd0aae4();
      }
      func_0x00010bd0a618();
      while (func_0x00010bd0c4d4(), cVar3 != cVar2) {
        func_0x00010bd0a050(unaff_x27[0xf]);
        pcVar13 = (char *)(extraout_x8_43 + (long)ppuVar26);
        FUN_10bcf6d24(param_2);
        func_0x00010bd0a804();
      }
      ppppppuVar23 = (uint ******)param_2[0xe];
      while( true ) {
        ppppppuVar7 = (uint ******)param_2[0xf];
        cVar2 = SBORROW8((long)ppppppuVar23,(long)ppppppuVar7);
        cVar3 = (long)ppppppuVar23 - (long)ppppppuVar7 < 0;
        uVar4 = ppppppuVar23 == ppppppuVar7;
        if ((bool)uVar4) break;
        pcVar13 = (char *)ppppppuVar23;
        FUN_10bd00f44(&pppppuStack_1e8,ppppppuVar23,0);
        ppppppuVar23 = ppppppuVar23 + 0xb;
      }
      FUN_10bcf904c(param_2 + 0xe);
      if ((ppppppuVar29 != (uint ******)0x0) && (lStack_1b8 != 0)) {
        bVar5 = false;
        ppppppuVar23 = (uint ******)0x0;
        pppppuStack_100 = (uint *****)0x0;
        pppppuStack_108 = (uint *****)0x0;
        ppppuStack_f8 = (uint ****)0x0;
        uStack_a8 = 0;
        ppppppuVar14 = ppppppuVar29 + 2;
        pppppuVar10 = *ppppppuVar14;
        pppppuStack_b0 = (uint *****)0x0;
        pppppuStack_b8 = (uint *****)0x0;
        ppppppuVar7 = ppppppuVar14;
        if (((ulong)pppppuVar10 & 1) != 0) {
          ppppppuVar7 = (uint ******)((long)pppppuVar10 + 7);
        }
LAB_10bcf46f4:
        ppppppuVar30 = ppppppuVar14;
        if (((ulong)pppppuVar10 & 1) != 0) {
          ppppppuVar30 = (uint ******)((long)pppppuVar10 + 7);
        }
        if (ppppppuVar7 != ppppppuVar30 + *(int *)(ppppppuVar29 + 3)) {
          if (bVar5) {
            lVar19 = (long)pppppuStack_b0 - (long)pppppuStack_b8 >> 2;
            if (lVar19 <= (int)*(uint *)(*ppppppuVar7 + 3)) {
              lVar28 = 0;
              ppppppuVar30 = (uint ******)pppppuStack_b8;
              do {
                if (lVar19 == 0) {
                  bVar5 = true;
                  goto LAB_10bcf48a0;
                }
                lVar18 = lVar28 >> 0x1e;
                iVar6 = *(int *)ppppppuVar30;
                lVar28 = lVar28 + 0x100000000;
                lVar19 = lVar19 + -1;
                ppppppuVar30 = (uint ******)((long)ppppppuVar30 + 4);
              } while (*(int *)((long)(*ppppppuVar7)[4] + lVar18) == iVar6);
            }
          }
          lVar19 = 0;
          pppppuStack_b0 = pppppuStack_b8;
          while( true ) {
            lVar28 = (long)(int)*(uint *)(*ppppppuVar7 + 3);
            uVar4 = lVar19 == lVar28;
            if (lVar28 <= lVar19) break;
            pppppuStack_40 =
                 (uint *****)
                 CONCAT44(pppppuStack_40._4_4_,*(uint *)((long)(*ppppppuVar7)[4] + lVar19 * 4));
            func_0x00010bd0beb0(&pppppuStack_b8);
            lVar19 = lVar19 + 1;
          }
          pppppuStack_2f0 = (uint *****)CONCAT44(pppppuStack_2f0._4_4_,(uint)ppppppuVar23);
          Hint_Prefetch(pppppuStack_1d0,0,2,0);
          func_0x00010bd092dc(pppppuStack_1d0,&pppppuStack_b8);
          ppppuVar35 = ppppuStack_1c0;
          ppuVar26 = (undefined **)pppppuStack_1c8;
          pppppuVar10 = pppppuStack_1d0;
          lVar19 = 0;
          func_0x00010bd0bc84((ulong)pppppuStack_1d0 >> 0xc);
          pppppuVar11 = pppppuStack_b0;
          ppuVar32 = (undefined **)pppppuStack_b8;
          uVar8 = extraout_x8_44;
          do {
            uVar8 = uVar8 & (ulong)ppppuVar35;
            func_0x000107c3a6b8();
            if ((extraout_x8_45 & 0x8080808080808080) != 0) {
LAB_10bcf47dc:
              func_0x00010bd0c77c();
              ppppppuVar12 = (uint ******)
                             (ppuVar26 + (uVar8 + (extraout_x8_46 >> 3) & (ulong)ppppuVar35) * 6);
              ppppppuVar30 = (uint ******)ppuVar32;
              pcVar13 = (char *)pppppuVar11;
              FUN_10bd09470(ppuVar32,pppppuVar11,ppppppuVar12);
              if (((ulong)ppppppuVar30 & 1) == 0) goto code_r0x00010bcf4804;
              if ((uint ******)pppppuVar10 != (uint ******)0x0) {
                if (ppppppuVar23 == (uint ******)0x0) {
                  ppppppuVar30 = &pppppuStack_108;
                  func_0x00010b4d36f0(ppppppuVar30,*(undefined4 *)(ppppppuVar29 + 3));
                  func_0x00010bd0b15c(*ppppppuVar14);
                  ppppppuVar23 = ppppppuVar14;
                  if (!(bool)uVar4) {
                    ppppppuVar23 = extraout_x9_28;
                  }
                  for (; ppppppuVar23 != ppppppuVar7; ppppppuVar23 = ppppppuVar23 + 1) {
                    func_0x00010bd0c114();
                    FUN_10bd1334c();
                  }
                }
                func_0x00010bd0c114();
                pcVar13 = (char *)*ppppppuVar7;
                FUN_10bd1334c();
                *(undefined4 *)(ppppppuVar30 + 3) = 0;
                for (ppuVar26 = (undefined **)ppppppuVar12[3];
                    (uint *****)ppuVar26 != ppppppuVar12[4];
                    ppuVar26 = (undefined **)((long)ppuVar26 + 4)) {
                  pcVar13 = (char *)(ulong)*(uint *)ppuVar26;
                  func_0x000107c2845c(ppppppuVar30 + 3);
                }
                bVar5 = true;
                goto LAB_10bcf4898;
              }
              goto LAB_10bcf4870;
            }
LAB_10bcf480c:
            func_0x000107c3a674();
            if ((extraout_x8_47 & 1) != 0) goto LAB_10bcf4870;
            lVar19 = lVar19 + 8;
            uVar8 = lVar19 + uVar8;
          } while( true );
        }
        cVar2 = SBORROW8((long)ppppppuVar14,(long)&pppppuStack_108);
        cVar3 = (long)ppppppuVar14 - (long)&pppppuStack_108 < 0;
        uVar4 = ppppppuVar14 == &pppppuStack_108;
        if (((uint)!(bool)uVar4 & (uint)ppppppuVar23) != 0) {
          pppppuVar10 = ppppppuVar29[4];
          cVar2 = SBORROW8((long)pppppuVar10,(long)ppppuStack_f8);
          cVar3 = (long)pppppuVar10 - (long)ppppuStack_f8 < 0;
          uVar4 = pppppuVar10 == (uint *****)ppppuStack_f8;
          if ((bool)uVar4) {
            pcVar13 = (char *)&pppppuStack_108;
            func_0x000107c303a4(ppppppuVar14);
          }
          else {
            FUN_10bd0958c(ppppppuVar14);
            if ((int)pppppuStack_100 != 0) {
              pcVar13 = (char *)&pppppuStack_108;
              func_0x00010bd095a0(ppppppuVar14);
            }
          }
        }
        func_0x000107c27a18(&pppppuStack_b8);
        FUN_10bd0955c(&pppppuStack_108);
      }
      ppppppuVar7 = &pppppuStack_1e8;
      func_0x00010bcfce60();
      if (((ulong)param_2[0x11] & 1) != 0) goto LAB_10bcf49b4;
      if ((*(byte *)((long)*param_2 + 0x31) & 1) == 0) {
        bVar5 = *(int *)(unaff_x27 + 4) == 1000;
        pppppuStack_108 = (uint *****)unaff_x27;
        pppppuStack_b8 = (uint *****)param_2;
        if (*(int *)(unaff_x27 + 4) < 1000) {
LAB_10bcf4a5c:
          pppppuVar10 = (uint *****)unaff_x27[0x10];
        }
        else {
          func_0x00010bd0c814(unaff_x27[0x12]);
          if (bVar5) {
            pcVar13 = unaff_x27[1];
            func_0x00010bd0bae8();
            func_0x00010bd0c28c();
          }
          pppppuVar10 = (uint *****)unaff_x27[0x10];
          if (*(char *)((long)pppppuVar10 + 0xa2) == '\x01') {
            pcVar13 = unaff_x27[1];
            ppppppuVar7 = param_2;
            func_0x00010bd0c28c(param_2,pcVar13,pppppuStack_2e8);
            goto LAB_10bcf4a5c;
          }
        }
        ppuVar26 = &PTR_PTR_1134061c0;
        ppppppuVar23 = (uint ******)unaff_x27;
        if ((pppppuVar10 == (uint *****)&PTR_PTR_1134061c0) || (*(int *)(pppppuVar10 + 0x15) != 3))
        {
          for (iVar6 = 0; iVar6 < *(int *)(unaff_x27 + 6); iVar6 = iVar6 + 1) {
            func_0x00010bd0c090();
            if (((ppppppuVar7 != (uint ******)0x0) &&
                (ppppppuVar7[0x10] != (uint *****)&PTR_PTR_1134061c0)) &&
               (*(int *)(ppppppuVar7[0x10] + 0x15) == 3)) {
              pppppuStack_40 = (uint *****)CONCAT44(pppppuStack_40._4_4_,iVar6);
              func_0x00010bd0c090();
              pcVar13 = (char *)ppppppuVar7[1];
              pppppuStack_1e8 = (uint *****)&pppppuStack_108;
              pppppuStack_1e0 = (uint *****)&pppppuStack_40;
              func_0x00010bd0baf4();
              FUN_10bcf56d0();
              ppppppuVar23 = (uint ******)pppppuStack_108;
              break;
            }
          }
        }
        iVar6 = *(int *)(ppppppuVar23 + 4);
        cVar2 = SBORROW4(iVar6,999);
        cVar3 = iVar6 + -999 < 0;
        if (iVar6 == 999) {
          func_0x00010bd0be08();
          for (; (long)ppppppuVar14 < (long)*(int *)((long)ppppppuVar23 + 4);
              ppppppuVar14 = (uint ******)((long)ppppppuVar14 + 1)) {
            func_0x00010bd0a27c(ppppppuVar23[0xf]);
            pcVar13 = (char *)(extraout_x8_49 + (long)ppuVar26);
            ppppppuVar7 = param_2;
            FUN_10bcfb620();
            ppuVar26 = ppuVar26 + 0xb;
          }
          func_0x00010bd0be08();
          while( true ) {
            lVar19 = (long)*(int *)((long)ppppppuVar23 + 0x3c);
            cVar2 = SBORROW8((long)ppppppuVar14,lVar19);
            cVar3 = (long)ppppppuVar14 - lVar19 < 0;
            if (lVar19 <= (long)ppppppuVar14) break;
            func_0x00010bd0a27c(ppppppuVar23[0xc]);
            pcVar13 = (char *)(extraout_x8_50 + (long)ppuVar26);
            ppppppuVar7 = param_2;
            FUN_10bcfb86c();
            ppppppuVar14 = (uint ******)((long)ppppppuVar14 + 1);
            ppuVar26 = ppuVar26 + 0x13;
          }
        }
        func_0x00010bd0a618();
        while (func_0x00010bd0c65c(), cVar3 != cVar2) {
          func_0x00010bd0a050(unaff_x27[0xc]);
          ppppppuVar7 = &pppppuStack_b8;
          pcVar13 = (char *)(extraout_x8_51 + (long)ppuVar26);
          FUN_10bd0650c();
          func_0x00010bd0aae4();
        }
        func_0x00010bd0a618();
        while( true ) {
          lVar19 = (long)*(int *)(unaff_x27 + 8);
          cVar2 = SBORROW8((long)ppppppuVar23,lVar19);
          cVar3 = (long)ppppppuVar23 - lVar19 < 0;
          if (lVar19 <= (long)ppppppuVar23) break;
          func_0x00010bd0a050(unaff_x27[0xd]);
          pcVar13 = (char *)(extraout_x8_52 + (long)ppuVar26);
          ppppppuVar7 = param_2;
          FUN_10bcfc6a4();
          func_0x00010bd0a804();
        }
        func_0x00010bd0a618();
        while (func_0x00010bd0c4d4(), cVar3 != cVar2) {
          func_0x00010bd0a050(unaff_x27[0xf]);
          pcVar13 = (char *)(extraout_x8_53 + (long)ppuVar26);
          ppppppuVar7 = param_2;
          FUN_10bcfb988();
          func_0x00010bd0a804();
        }
        func_0x00010bd0be08();
        ppppppuVar23 = (uint ******)&UNK_10f832b37;
        ppuVar32 = &PTR_PTR_1134061c0;
        for (; bVar5 = ppppppuVar14 == (uint ******)(long)*(int *)((long)unaff_x27 + 0x44),
            (long)ppppppuVar14 < (long)*(int *)((long)unaff_x27 + 0x44);
            ppppppuVar14 = (uint ******)((long)ppppppuVar14 + 1)) {
          func_0x00010bd0b128(unaff_x27[0xe]);
          puVar1 = extraout_x11_05;
          if (!bVar5) {
            puVar1 = extraout_x10_16;
          }
          lVar19 = extraout_x8_54 + (long)ppuVar26 * 8;
          lVar28 = *(long *)(lVar19 + 0x10);
          if (((lVar28 != 0) &&
              (ppuVar20 = *(undefined ***)(lVar28 + 0x80), ppuVar20 != &PTR_PTR_1134061c0)) &&
             ((*(int *)(ppuVar20 + 0x15) == 3 &&
              (((*(byte *)((long)ppuVar20 + 0xa3) & 1) != 0 ||
               (*(char *)((long)ppuVar20 + 0xa4) == '\x01')))))) {
            pcVar13 = (char *)(*(long *)(lVar19 + 8) + 0x18);
            ppppppuVar7 = param_2;
            FUN_10bcf5820(param_2,pcVar13,*puVar1,0,&UNK_10f832b37);
          }
          ppuVar26 = ppuVar26 + 1;
        }
        uVar16 = (uint)*(byte *)(param_2 + 0x11);
        cVar2 = SBORROW4(uVar16,1);
        cVar3 = (int)(uVar16 - 1) < 0;
        uVar4 = 0;
        if (uVar16 == 1) goto LAB_10bcf49b4;
      }
LAB_10bcf4cc8:
      pppppuVar10 = *param_2;
      if ((param_2[0x22] != (uint *****)0x0) && ((*(byte *)((long)pppppuVar10 + 0x31) & 1) == 0)) {
        func_0x00010bd0c14c();
        if (ppppppuVar7 == (uint ******)0x0) {
          bVar37 = 0;
        }
        else {
          bVar37 = *(byte *)((long)pcVar13 + 0x18);
        }
        pppppuVar10 = param_2[0x1f];
        ppppppuVar14 = (uint ******)param_2[0x20];
        FUN_10bcf5dac();
        ppppppuVar23 = (uint ******)0x10bd09d80;
        pppppuStack_1e8 = pppppuVar10;
        pppppuStack_1e0 = (uint *****)ppppppuVar14;
        while (pppppuStack_1e8 != (uint *****)0x0) {
          pppppuStack_108 = (uint *****)*pppppuStack_1e0;
          pppppuStack_b8 = (uint *****)&pppppuStack_108;
          if ((bVar37 & 1) == 0) {
            func_0x00010bd0bd90();
            FUN_10bcf58f4();
          }
          else {
            func_0x00010bd0bd90();
            FUN_10bcf56d0();
          }
          FUN_10bcf5dd4(&pppppuStack_1e8);
        }
        pppppuStack_1e8 = (uint *****)0x0;
        if (((ulong)param_2[0x11] & 1) != 0) goto LAB_10bcf49ec;
        pppppuVar10 = *param_2;
        pppppuStack_1e8 = (uint *****)0x0;
      }
      ppppppuVar14 = (uint ******)unaff_x27;
      if ((*(byte *)((long)pppppuVar10 + 0x31) & 1) == 0) {
        pppppuStack_108 = (uint *****)param_2;
        pppppuStack_100 = pppppuStack_2e8;
        func_0x00010bd0af58(unaff_x27[0x11]);
        if (!(bool)uVar4) {
          ppppppuVar14 = (uint ******)unaff_x27[1];
          pppppuStack_1d0 = (uint *****)(long)*(char *)((long)ppppppuVar14 + 0x17);
          pppppuStack_1d8 = (uint *****)ppppppuVar14;
          if ((long)pppppuStack_1d0 < 0) {
            pppppuStack_1d8 = *ppppppuVar14;
            pppppuStack_1d0 = ppppppuVar14[1];
          }
          pppppuStack_1e8 = (uint *****)extraout_x8_55;
          pppppuStack_1e0 = pppppuStack_2e8;
          func_0x00010bd0b244(pppppuStack_2e8[0x16],param_2[2]);
          pppppuStack_1c8 = (uint *****)extraout_x8_56;
          ppppuStack_1c0 = (uint ****)extraout_x9_29;
          if ((long)extraout_x9_29 < 0) {
            pppppuStack_1c8 = *extraout_x8_56;
            ppppuStack_1c0 = (uint ****)extraout_x8_56[1];
          }
          FUN_10bd06de4();
        }
        func_0x00010bd0a618();
        while (func_0x00010bd0c65c(), cVar3 != cVar2) {
          func_0x00010bd0a050(unaff_x27[0xc]);
          func_0x00010bd0c560();
          FUN_10bd06a80();
          func_0x00010bd0aae4();
        }
        func_0x00010bd0a618();
        while( true ) {
          lVar19 = (long)*(int *)(unaff_x27 + 8);
          cVar2 = SBORROW8((long)ppppppuVar23,lVar19);
          cVar3 = (long)ppppppuVar23 - lVar19 < 0;
          if (lVar19 <= (long)ppppppuVar23) break;
          func_0x00010bd0a050(unaff_x27[0xd]);
          func_0x00010bd0c560();
          func_0x00010bd06ca0();
          func_0x00010bd0a804();
        }
        func_0x00010bd0a618();
        while (func_0x00010bd0c4d4(), cVar3 != cVar2) {
          func_0x00010bd0a050(unaff_x27[0xf]);
          func_0x00010bd0c560();
          FUN_10bd06d6c();
          func_0x00010bd0a804();
        }
        for (ppppppuVar23 = (uint ******)0x0;
            uVar4 = ppppppuVar23 == (uint ******)(long)*(int *)((long)unaff_x27 + 0x44),
            (long)ppppppuVar23 < (long)*(int *)((long)unaff_x27 + 0x44);
            ppppppuVar23 = (uint ******)((long)ppppppuVar23 + 1)) {
          pppppuVar10 = (uint *****)unaff_x27[0xe];
          func_0x00010bd0c420();
          func_0x00010bd0ab20();
          ppppppuVar14 = (uint ******)*extraout_x8_57;
          func_0x00010bd0af58(pppppuVar10[(long)ppppppuVar23 * 8 + 4]);
          if (!(bool)uVar4) {
            ppppuVar35 = pppppuVar10[(long)ppppppuVar23 * 8 + 1];
            pppppuStack_1d0 = (uint *****)(long)*(char *)((long)ppppuVar35 + 0x2f);
            if ((long)pppppuStack_1d0 < 0) {
              pppppuStack_1d8 = (uint *****)ppppuVar35[3];
              pppppuStack_1d0 = (uint *****)ppppuVar35[4];
            }
            else {
              pppppuStack_1d8 = (uint *****)(ppppuVar35 + 3);
            }
            pppppuStack_1e8 = (uint *****)extraout_x8_58;
            pppppuStack_1e0 = (uint *****)ppppppuVar14;
            func_0x00010bd0b244(pppppuStack_2e8[0x16],param_2[2],
                                pppppuVar10[(long)ppppppuVar23 * 8 + 2]);
            pppppuStack_1c8 = (uint *****)extraout_x8_59;
            ppppuStack_1c0 = (uint ****)extraout_x9_30;
            if ((long)extraout_x9_30 < 0) {
              pppppuStack_1c8 = *extraout_x8_59;
              ppppuStack_1c0 = (uint ****)extraout_x8_59[1];
            }
            FUN_10bd06de4();
          }
          func_0x00010bd0b174();
          ppppppuVar7 = param_2;
          for (; (long)ppuVar32 < (long)(int)*(uint *)(pppppuVar10 + (long)ppppppuVar23 * 8 + 7);
              ppuVar32 = (undefined **)((long)ppuVar32 + 1)) {
            bVar5 = *(undefined ***)
                     ((long)ppppppuVar7 + (long)(pppppuVar10[(long)ppppppuVar23 * 8 + 6] + 8)) ==
                    &PTR_PTR_113405ec0;
            if (!bVar5) {
              func_0x00010bd0bc54();
              pppppuStack_1e0 = (uint *****)(ppppppuVar14 + 3);
              if (!bVar5) {
                pppppuStack_1e0 = (uint *****)extraout_x11_06;
              }
              pppppuStack_1e0 = (uint *****)*pppppuStack_1e0;
              lVar19 = *(long *)(extraout_x8_60 + 8);
              pppppuStack_1d0 = (uint *****)(long)*(char *)(lVar19 + 0x2f);
              if ((long)pppppuStack_1d0 < 0) {
                pppppuStack_1d8 = *(uint ******)(lVar19 + 0x18);
                pppppuStack_1d0 = *(uint ******)(lVar19 + 0x20);
              }
              else {
                pppppuStack_1d8 = (uint *****)(lVar19 + 0x18);
              }
              pppppuStack_1e8 = (uint *****)extraout_x9_31;
              func_0x00010bd0b244(pppppuStack_2e8[0x16],param_2[2],
                                  *(undefined8 *)(*(long *)(extraout_x8_60 + 0x10) + 0x10));
              pppppuStack_1c8 = (uint *****)extraout_x8_61;
              ppppuStack_1c0 = (uint ****)extraout_x9_32;
              if ((long)extraout_x9_32 < 0) {
                pppppuStack_1c8 = *extraout_x8_61;
                ppppuStack_1c0 = (uint ****)extraout_x8_61[1];
              }
              FUN_10bd06de4();
            }
            ppppppuVar7 = ppppppuVar7 + 10;
          }
        }
        ppppppuVar14 = (uint ******)0x0;
        if (*(char *)(param_2 + 0x11) == '\0') {
          ppppppuVar14 = (uint ******)unaff_x27;
        }
      }
    }
    else {
LAB_10bcf49b4:
      func_0x00010bd0a618();
      while( true ) {
        ppppppuVar14 = (uint ******)(long)*(int *)(pppppuStack_2e8 + 7);
        cVar2 = SBORROW8((long)ppppppuVar23,(long)ppppppuVar14);
        cVar3 = (long)ppppppuVar23 - (long)ppppppuVar14 < 0;
        uVar4 = ppppppuVar23 == ppppppuVar14;
        if ((long)ppppppuVar14 <= (long)ppppppuVar23) break;
        func_0x00010bd0a050(unaff_x27[0xc]);
        pcVar13 = (char *)(extraout_x8_48 + (long)ppuVar26);
        ppppppuVar7 = param_2;
        FUN_10bcf9084();
        func_0x00010bd0aae4();
      }
      if (((ulong)param_2[0x11] & 1) == 0) goto LAB_10bcf4cc8;
LAB_10bcf49ec:
      ppppppuVar14 = (uint ******)0x0;
    }
LAB_10bcf4f70:
    func_0x00010bcdb384(&puStack_2c8);
    func_0x00010bd0b9fc();
  }
  else {
    pppppuStack_1e8 = (uint *****)&pppppuStack_238;
    func_0x00010bd0b148(param_2,ppppppuVar7[1],param_3);
    ppppppuVar14 = (uint ******)0x0;
  }
LAB_10bcf2418:
  ppppppuVar7 = (uint ******)&ppppuStack_288;
  func_0x00010bd0016c();
  pppppuVar10 = pppppuStack_2d0;
  ppuVar32 = (undefined **)param_2[1];
  if (ppppppuVar14 == (uint ******)0x0) {
    pppppuStack_2f0 = (uint *****)ppuVar32[0x29];
    for (uVar8 = (ulong)*(int *)((long)pppppuStack_2f0 + -0xc);
        uVar8 < (ulong)((long)ppuVar32[0x2c] - (long)ppuVar32[0x2b] >> 3); uVar8 = uVar8 + 1) {
      ppppppuVar23 = (uint ******)((long)ppuVar32[0x2b] + uVar8 * 8);
      Hint_Prefetch(ppuVar32[0x19],0,2,0);
      ppppppuVar7 = (uint ******)*ppppppuVar23;
      FUN_10bd026b4(ppuVar32[0x19]);
      pppppuVar10 = (uint *****)ppuVar32[0x1a];
      pppppuVar11 = (uint *****)ppuVar32[0x1b];
      func_0x00010bd0bc84((ulong)ppuVar32[0x19] >> 0xc);
      do {
        func_0x000107c3a6b8();
        while ((extraout_x8_08 & 0x8080808080808080) != 0) {
          func_0x00010bd0bc14();
          ppppppuVar7 = ppppppuVar23;
          FUN_10bd026d4(ppppppuVar23,pppppuVar10[extraout_x8_09 & (ulong)pppppuVar11]);
          if (((ulong)ppppppuVar7 & 1) != 0) {
            ppppppuVar7 = (uint ******)(ppuVar32 + 0x19);
            func_0x00010bd0c1a4(ppuVar32[0x19]);
            goto LAB_10bcf262c;
          }
          func_0x00010bd0bdc0();
        }
        func_0x000107c3a674();
      } while ((extraout_x8_10 & 1) == 0);
LAB_10bcf262c:
    }
    for (uVar8 = (ulong)*(int *)(pppppuStack_2f0 + -1); pppppuVar10 = (uint *****)ppuVar32[0x2e],
        uVar8 < (ulong)((long)ppuVar32[0x2f] - (long)pppppuVar10 >> 3); uVar8 = uVar8 + 1) {
      Hint_Prefetch(ppuVar32[0x1d],0,2,0);
      ppppppuVar7 = (uint ******)pppppuVar10[uVar8][1];
      func_0x00010bd0273c();
      pppppuVar11 = (uint *****)ppuVar32[0x1e];
      pppppuVar25 = (uint *****)ppuVar32[0x1f];
      func_0x00010bd0bc84((ulong)ppuVar32[0x1d] >> 0xc);
      do {
        func_0x000107c3a6b8();
        while ((extraout_x8_11 & 0x8080808080808080) != 0) {
          func_0x00010bd0bc14();
          ppppppuVar7 = (uint ******)pppppuVar10[uVar8];
          func_0x00010bd0271c(ppppppuVar7,pppppuVar11[extraout_x8_12 & (ulong)pppppuVar25]);
          if (((ulong)ppppppuVar7 & 1) != 0) {
            ppppppuVar7 = (uint ******)(ppuVar32 + 0x1d);
            func_0x00010bd0c1a4(ppuVar32[0x1d]);
            goto LAB_10bcf26d0;
          }
          func_0x00010bd0bdc0();
        }
        func_0x000107c3a674();
      } while ((extraout_x8_13 & 1) == 0);
LAB_10bcf26d0:
    }
    uVar8 = (ulong)*(int *)((long)pppppuStack_2f0 + -4);
    do {
      if ((ulong)((long)ppuVar32[0x32] - (long)ppuVar32[0x31] >> 4) <= uVar8) {
        pcVar13 = (char *)(long)*(int *)((long)pppppuStack_2f0 + -0xc);
        pppppuVar10 = (uint *****)ppuVar32[0x2b];
        pppppuVar11 = (uint *****)ppuVar32[0x2c];
        ppppppuVar23 = (uint ******)((long)pppppuVar11 - (long)pppppuVar10 >> 3);
        if (pcVar13 <= ppppppuVar23) goto LAB_10bcf2a04;
        uVar8 = (long)pcVar13 - (long)ppppppuVar23;
        if ((ulong)((long)ppuVar32[0x2d] - (long)pppppuVar11 >> 3) < uVar8) {
          ppppppuVar7 = (uint ******)(ppuVar32 + 0x2b);
          func_0x00010bcfe034();
          pppppuStack_1c8 = (uint *****)(ppuVar32 + 0x2d);
          pppppuVar10 = (uint *****)ppuVar32[0x2b];
          pppppuVar11 = (uint *****)ppuVar32[0x2c];
          if (ppppppuVar7 != (uint ******)0x0) {
            FUN_10bcfe088();
          }
          func_0x00010bd0c438((long)pppppuVar11 - (long)pppppuVar10);
          pppppuStack_1d8 = (uint *****)(extraout_x8_14 + uVar8);
          puVar1 = extraout_x8_14;
          for (lVar19 = (long)pcVar13 * 8 + (long)ppppppuVar23 * -8; lVar19 != 0;
              lVar19 = lVar19 + -8) {
            *puVar1 = &UNK_10e607c03;
            puVar1 = puVar1 + 1;
          }
          FUN_10bcfe05c(ppuVar32 + 0x2b,&pppppuStack_1e8);
          ppppppuVar7 = &pppppuStack_1e8;
          func_0x00010bcfe0b0();
          goto LAB_10bcf2acc;
        }
        pppppuVar10 = pppppuVar11;
        for (lVar19 = (long)pcVar13 * 8 + (long)ppppppuVar23 * -8; lVar19 != 0; lVar19 = lVar19 + -8
            ) {
          *pppppuVar10 = (uint ****)&UNK_10e607c03;
          pppppuVar10 = pppppuVar10 + 1;
        }
        ppuVar32[0x2c] = (undefined *)(pppppuVar11 + uVar8);
        goto LAB_10bcf2acc;
      }
      ppppppuVar29 = (uint ******)((long)ppuVar32[0x31] + uVar8 * 2 * 8);
      ppppppuVar12 = ppppppuVar29;
      FUN_10bcfea20(ppuVar32 + 0x21);
      ppppppuVar23 = (uint ******)(ppuVar32 + 0x21);
      func_0x00010bd0c160();
      uVar16 = (uint)ppppppuVar12;
      ppppppuVar7 = ppppppuVar23;
      ppppppuVar36 = ppppppuVar23;
      uStack_2d8 = uVar16;
      ppppppuVar30 = ppppppuVar12;
      if ((uint ******)ppuVar32[0x22] == ppppppuVar23 &&
          uVar16 == *(byte *)((long)ppuVar32[0x22] + 10)) {
LAB_10bcf278c:
        uVar34 = (uint)ppppppuVar30;
        if (*(char *)((long)ppppppuVar36 + 0xb) != '\0') {
          lVar19 = (long)(int)(uVar34 - uVar16);
          bVar5 = true;
          goto joined_r0x00010bcf27a0;
        }
        if (((ulong)ppppppuVar30 & 0xffffffff) != ((ulong)ppppppuVar12 & 0xffffffff)) {
          bVar5 = true;
          goto LAB_10bcf27b8;
        }
      }
      else {
        func_0x00010bcfe9e8(ppppppuVar29,ppppppuVar23 + (long)(int)uVar16 * 3 + 2);
        ppppppuVar7 = ppppppuVar29;
        if ((char)ppppppuVar29 < '\0') goto LAB_10bcf278c;
        ppppppuVar7 = &pppppuStack_1e8;
        pppppuStack_1e8 = (uint *****)ppppppuVar23;
        pppppuStack_1e0 = (uint *****)((ulong)ppppppuVar12 & 0xffffffff);
        FUN_10bd0274c();
        uVar34 = (uint)pppppuStack_1e0;
        ppppppuVar36 = (uint ******)pppppuStack_1e8;
        uStack_2d8 = uVar34;
        ppppppuVar30 = (uint ******)pppppuStack_1e0;
        if ((uint ******)pppppuStack_1e8 == ppppppuVar23) goto LAB_10bcf278c;
        bVar5 = false;
LAB_10bcf27b8:
        if (*(char *)((long)ppppppuVar23 + 0xb) == '\0') {
          func_0x00010bd0b718();
          ppppppuVar7 = (uint ******)ppppppuVar7[(ulong)(uVar16 + 1) & 0xff];
          lVar19 = 1;
        }
        else {
          lVar19 = (long)(int)-uVar16;
          ppppppuVar7 = ppppppuVar23;
        }
        while (*(char *)((long)ppppppuVar7 + 0xb) == '\0') {
          func_0x00010bcfdbe8();
        }
        uVar22 = (ulong)*(byte *)(ppppppuVar7 + 1);
        ppppppuVar29 = (uint ******)*ppppppuVar7;
        uVar27 = (ulong)(int)uVar34;
        while( true ) {
          func_0x00010bd0ba90();
          ppppppuVar7 = (uint ******)ppppppuVar7[uVar22 & 0xff];
          cVar3 = '\0';
          if (*(char *)((long)ppppppuVar7 + 0xb) == '\0') {
            while (cVar3 == '\0') {
              func_0x00010bcfdbe8();
              cVar3 = *(char *)((long)ppppppuVar7 + 0xb);
            }
            uVar22 = (ulong)*(byte *)(ppppppuVar7 + 1);
            ppppppuVar29 = (uint ******)*ppppppuVar7;
          }
          uVar17 = uVar27;
          if ((ppppppuVar7 == ppppppuVar36) ||
             (uVar17 = (ulong)*(byte *)((long)ppppppuVar7 + 10),
             ppppppuVar29 == ppppppuVar36 && uVar22 == uVar27)) break;
          if (*(byte *)((long)ppppppuVar29 + 10) <= uVar22) {
            do {
              ppppppuVar30 = ppppppuVar29 + 1;
              uVar22 = (ulong)*(byte *)ppppppuVar30;
              ppppppuVar29 = (uint ******)*ppppppuVar29;
              if (ppppppuVar29 == ppppppuVar36 && uVar27 == uVar22) goto LAB_10bcf2884;
            } while (*(byte *)((long)ppppppuVar29 + 10) <= *(byte *)ppppppuVar30);
          }
          lVar19 = lVar19 + uVar17 + 1;
          uVar22 = uVar22 + 1;
        }
LAB_10bcf2884:
        lVar19 = uVar17 + lVar19;
joined_r0x00010bcf27a0:
        if (lVar19 != 0) {
          pppppuVar11 = (uint *****)ppuVar32[0x23];
          pppppuVar10 = (uint *****)((long)pppppuVar11 - lVar19);
          if (pppppuVar10 == (uint *****)0x0) {
            ppppppuVar7 = (uint ******)(ppuVar32 + 0x21);
            func_0x00010bcfdacc();
          }
          else if (bVar5) {
            FUN_10bd028bc(ppppppuVar23,uVar16 & 0xff,uStack_2d8 - uVar16 & 0xff);
            func_0x00010bd0b680((long)ppuVar32[0x23] - lVar19);
            ppppppuVar7 = ppppppuVar23;
          }
          else {
            while( true ) {
              uVar22 = (long)pppppuVar11 - (long)pppppuVar10;
              if (pppppuVar11 < pppppuVar10 || uVar22 == 0) break;
              uVar16 = (uint)ppppppuVar12;
              if (*(char *)((long)ppppppuVar23 + 0xb) == '\0') {
                pppppuStack_108 = (uint *****)ppppppuVar23;
                pppppuStack_100 = (uint *****)((ulong)ppppppuVar12 & 0xffffffff);
                func_0x00010bd02800(&pppppuStack_108);
                pppppuVar11 = (uint *****)pppppuStack_108[(long)(int)pppppuStack_100 * 3 + 4];
                pppppuVar25 = (uint *****)pppppuStack_108[(long)(int)pppppuStack_100 * 3 + 2];
                ppppppuVar23[(long)(int)uVar16 * 3 + 3] =
                     (uint *****)pppppuStack_108[(long)(int)pppppuStack_100 * 3 + 3];
                ppppppuVar23[(long)(int)uVar16 * 3 + 2] = pppppuVar25;
                ppppppuVar23[(long)(int)uVar16 * 3 + 4] = pppppuVar11;
                *(char *)((long)pppppuStack_108 + 10) = *(char *)((long)pppppuStack_108 + 10) + -1;
                ppuVar32[0x23] = (undefined *)((long)ppuVar32[0x23] + -1);
                ppppppuVar7 = (uint ******)(ppuVar32 + 0x21);
                ppppppuVar23 = (uint ******)pppppuStack_108;
                FUN_10bd02998(ppppppuVar7,pppppuStack_108,pppppuStack_100);
                pppppuStack_1e0 = (uint *****)CONCAT44(pppppuStack_1e0._4_4_,(int)ppppppuVar23);
                ppppppuVar23 = &pppppuStack_1e8;
                pppppuStack_1e8 = (uint *****)ppppppuVar7;
                FUN_10bd0274c();
                ppppppuVar12 = (uint ******)pppppuStack_1e0;
                ppppppuVar29 = (uint ******)pppppuStack_1e8;
              }
              else {
                uVar27 = (ulong)(int)(*(byte *)((long)ppppppuVar23 + 10) - uVar16);
                if (uVar22 <= uVar27) {
                  uVar27 = uVar22;
                }
                ppppppuVar12 = (uint ******)(ulong)(uVar16 & 0xff);
                FUN_10bd028bc(ppppppuVar23,ppppppuVar12,(uint)uVar27 & 0xff);
                func_0x00010bd0b680((long)ppuVar32[0x23] - (uVar27 & 0xff));
                ppppppuVar29 = ppppppuVar23;
              }
              pppppuVar11 = (uint *****)ppuVar32[0x23];
              ppppppuVar7 = ppppppuVar23;
              ppppppuVar23 = ppppppuVar29;
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while( true );
  }
  pppppuVar11 = (uint *****)ppuVar32[0x29];
  ppuVar32[0x29] = (undefined *)((long)pppppuVar11 + -0x14);
  in_ZR = (uint *****)ppuVar32[0x28] == (uint *****)((long)pppppuVar11 + -0x14);
  if ((bool)in_ZR) {
    ppuVar32[0x2c] = ppuVar32[0x2b];
    ppuVar32[0x2f] = ppuVar32[0x2e];
    ppuVar32[0x32] = ppuVar32[0x31];
  }
  *(undefined1 *)((long)ppppppuVar14 + 2) = 1;
  uVar8 = (ulong)*(uint *)(pppppuStack_2d0 + 0xe);
  pcVar13 = (char *)(ulong)*(uint *)(pppppuStack_2d0 + 0x15);
  func_0x00010bd0a4b4();
  param_2 = (uint ******)ppuVar32;
  unaff_x27 = (undefined **)ppppppuVar14;
  if (uVar8 == 0) {
    uVar8 = (ulong)*(uint *)((long)pppppuVar10 + 0x74);
    pcVar13 = (char *)(ulong)*(uint *)((long)pppppuVar10 + 0xac);
    func_0x00010bd0a4b4();
    if (uVar8 != 0) {
      func_0x00010bd0a0e4();
      goto LAB_10bcf29fc;
    }
    uVar8 = (ulong)*(uint *)(pppppuVar10 + 0xf);
    pcVar13 = (char *)(ulong)*(uint *)(pppppuVar10 + 0x16);
    func_0x00010bd0a4b4();
    if (uVar8 != 0) {
      func_0x00010bd0a0e4();
      goto LAB_10bcf29fc;
    }
    uVar8 = (ulong)*(uint *)((long)pppppuVar10 + 0x7c);
    pcVar13 = (char *)(ulong)*(uint *)((long)pppppuVar10 + 0xb4);
    func_0x00010bd0a4b4();
    if (uVar8 != 0) {
      func_0x00010bd0a0e4();
      goto LAB_10bcf29fc;
    }
    uVar8 = (ulong)*(uint *)(pppppuVar10 + 0x10);
    pcVar13 = (char *)(ulong)*(uint *)(pppppuVar10 + 0x17);
    func_0x00010bd0a4b4();
    if (uVar8 != 0) {
      func_0x00010bd0a0e4();
      goto LAB_10bcf29fc;
    }
    uVar8 = (ulong)*(uint *)((long)pppppuVar10 + 0x84);
    pcVar13 = (char *)(ulong)*(uint *)((long)pppppuVar10 + 0xbc);
    func_0x00010bd0a4b4();
    if (uVar8 != 0) {
      func_0x00010bd0a0e4();
      goto LAB_10bcf29fc;
    }
    uVar8 = (ulong)*(uint *)(pppppuVar10 + 0x11);
    pcVar13 = (char *)(ulong)*(uint *)(pppppuVar10 + 0x18);
    func_0x00010bd0a4b4();
    if (uVar8 != 0) {
      func_0x00010bd0a0e4();
      goto LAB_10bcf29fc;
    }
    uVar8 = (ulong)*(uint *)((long)pppppuVar10 + 0x8c);
    pcVar13 = (char *)(ulong)*(uint *)((long)pppppuVar10 + 0xc4);
    func_0x00010bd0a4b4();
    if (uVar8 != 0) {
      func_0x00010bd0a0e4();
      goto LAB_10bcf29fc;
    }
    uVar8 = (ulong)*(uint *)(pppppuVar10 + 0x12);
    pcVar13 = (char *)(ulong)*(uint *)(pppppuVar10 + 0x19);
    func_0x00010bd0a4b4();
    if (uVar8 == 0) {
      uVar8 = (ulong)*(uint *)((long)pppppuVar10 + 0x94);
      pcVar13 = (char *)(ulong)*(uint *)((long)pppppuVar10 + 0xcc);
      func_0x00010bd0a4b4();
      if (uVar8 != 0) {
        func_0x00010bd0a0e4();
        goto LAB_10bcf29fc;
      }
      uVar8 = (ulong)*(uint *)(pppppuVar10 + 0x13);
      pcVar13 = (char *)(ulong)*(uint *)(pppppuVar10 + 0x1a);
      func_0x00010bd0a4b4();
      if (uVar8 != 0) {
        func_0x00010bd0a0e4();
        goto LAB_10bcf29fc;
      }
      uVar8 = (ulong)*(uint *)((long)pppppuVar10 + 0x9c);
      pcVar13 = (char *)(ulong)*(uint *)((long)pppppuVar10 + 0xd4);
      func_0x00010bd0a4b4();
      if (uVar8 != 0) {
        func_0x00010bd0a0e4();
        goto LAB_10bcf29fc;
      }
      uVar8 = (ulong)*(uint *)(pppppuVar10 + 0x14);
      pcVar13 = (char *)(ulong)*(uint *)(pppppuVar10 + 0x1b);
      func_0x00010bd0a4b4();
      if (uVar8 == 0) {
        uVar8 = (ulong)*(uint *)((long)pppppuVar10 + 0xa4);
        pcVar13 = (char *)(ulong)*(uint *)((long)pppppuVar10 + 0xdc);
        func_0x00010bd0a4b4();
        if (uVar8 == 0) goto LAB_10bcf2de4;
        func_0x00010bd0a0e4();
        goto LAB_10bcf29fc;
      }
      func_0x00010bd0a0e4();
      goto LAB_10bcf29fc;
    }
    func_0x00010bd0a0e4();
    goto LAB_10bcf29fc;
  }
LAB_10bcf4fe8:
  func_0x00010bd0a0e4();
  ppuVar32 = (undefined **)param_2;
  goto LAB_10bcf29fc;
code_r0x00010bcf4804:
  func_0x00010bd0c758();
  if ((extraout_x8_45 & 0x8080808080808080) == 0) goto LAB_10bcf480c;
  goto LAB_10bcf47dc;
LAB_10bcf4870:
  if (ppppppuVar23 == (uint ******)0x0) {
    bVar5 = false;
    ppppppuVar23 = (uint ******)0x0;
  }
  else {
    pcVar13 = (char *)*ppppppuVar7;
    func_0x00010bd0c114();
    FUN_10bd1334c();
    bVar5 = false;
LAB_10bcf4898:
    ppppppuVar23 = (uint ******)0x1;
  }
LAB_10bcf48a0:
  pppppuVar10 = *ppppppuVar14;
  ppppppuVar7 = ppppppuVar7 + 1;
  goto LAB_10bcf46f4;
}



/* Entry: 10bcf546c; end: 10bcf54c7;  */

void FUN_10bcf546c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = param_1[1];
  FUN_10bcf1c4c(&uStack_28,lVar1,*(undefined8 *)(lVar1 + 0x28),param_1[2],
                *(undefined8 *)(lVar1 + 0x10));
  FUN_10bcf1cac(uStack_28,param_1[3]);
  *(undefined8 *)*param_1 = uStack_28;
  FUN_10bd04a08(&uStack_28);
  return;
}



/* Entry: 10bcf54c8; end: 10bcf5643;  */

undefined8 *
FUN_10bcf54c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  
  func_0x000107c3a6d8();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  puVar2 = param_1;
  func_0x000107c3a6bc();
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = extraout_x8;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  *(undefined1 *)(puVar2 + 0x11) = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = extraout_x8;
  puVar2[0x18] = 0;
  puVar2[0x1f] = extraout_x8;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x21] = 0;
  puVar2[0x20] = 0;
  puVar2[0x23] = 0;
  puVar2[0x22] = 0;
  puVar2[0x25] = 0;
  puVar2[0x24] = 0;
  puVar2[0x26] = 0;
  func_0x00010bd0b5a0();
  func_0x000107c278b8(puVar2 + 0x27);
  *(undefined4 *)(param_1 + 0x2a) = 0x20;
  if ((bRam00000001137fe178 & 1) == 0) {
    iVar1 = 0x137fe178;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c30274(&PTR_PTR_113405ec0,uRam0000000113405d78,0xb,0,0,&PTR_PTR_113405c28,0,0);
      ___cxa_guard_release(0x1137fe178);
    }
  }
  return param_1;
}



/* Entry: 10bcf5644; end: 10bcf56cf;  */

long * FUN_10bcf5644(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10bcf904c(param_1);
    func_0x00010bd0c250();
  }
  return param_1;
}



/* Entry: 10bcf56d0; end: 10bcf57f3;  */

void FUN_10bcf56d0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined1 auStack_58 [40];
  
  func_0x00010bd0a9fc();
  func_0x00010bd0c084();
  plVar1 = *(long **)(unaff_x19 + 0x18);
  if (plVar1 == (long *)0x0) {
    if ((*(byte *)(unaff_x19 + 0x88) & 1) == 0) {
      func_0x00010bd0a968();
      func_0x00010bdb2988(auStack_58);
      FUN_10bce1854(auStack_58,&UNK_10f831d50);
      func_0x00010ae6c448();
      FUN_10bcf57f4();
      func_0x00010bd0b678();
    }
    func_0x00010bd0a968();
    func_0x00010bdb2988(auStack_58);
    FUN_10bcf57f4(auStack_58,&DAT_10f4944be);
    func_0x00010ae6c448();
    func_0x00010bd0c054();
    func_0x00010ae6c448();
    func_0x00010bd0b678();
  }
  else {
    lVar3 = (long)*(char *)(unaff_x19 + 0xa7);
    if (lVar3 < 0) {
      lVar2 = *(long *)(unaff_x19 + 0x90);
      lVar3 = *(long *)(unaff_x19 + 0x98);
    }
    else {
      lVar2 = unaff_x19 + 0x90;
    }
    func_0x00010bd0a5b4(plVar1,lVar2,lVar3);
    func_0x00010bd0a844();
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined1 *)(unaff_x19 + 0x88) = 1;
  func_0x00010bd0b1ac();
  return;
}



/* Entry: 10bcf57f4; end: 10bcf581f;  */

void FUN_10bcf57f4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bd0aa10();
  _strlen(param_2);
  func_0x00010bd0ab30();
  func_0x00010ae6bd08();
  return;
}



/* Entry: 10bcf5820; end: 10bcf5847;  */

void FUN_10bcf5820(void)

{
  FUN_10bcf56d0();
  return;
}



/* Entry: 10bcf5848; end: 10bcf58f3;  */

void FUN_10bcf5848(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bd0b07c();
  if (*(long *)(param_1 + 0x118) == 0) {
    uVar2 = (ulong)*(char *)(param_1 + 0x14f);
    uVar1 = uVar2;
    if ((long)uVar2 < 0) {
      uVar1 = *(ulong *)(param_1 + 0x140);
    }
    if (uVar1 == 0) goto LAB_10bcf58d8;
  }
  else {
    func_0x00010bd0b3a0();
    uVar2 = (ulong)*(byte *)(param_1 + 0x14f);
  }
  if (((uint)uVar2 >> 7 & 1) == 0) {
    uVar2 = uVar2 & 0xff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x140);
  }
  if (uVar2 == 0) {
    return;
  }
LAB_10bcf58d8:
  func_0x00010bd0b3a0();
  return;
}



/* Entry: 10bcf58f4; end: 10bcf59d7;  */

void FUN_10bcf58f4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [40];
  
  func_0x00010bd0c084();
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 == (long *)0x0) {
    func_0x00010bd0a968();
    FUN_10bdb2980(auStack_58);
    func_0x00010ae6c448(auStack_58,param_1 + 0x90);
    func_0x00010b4c3214(auStack_58," ");
    func_0x00010ae6c448();
    func_0x00010bd0c054();
    func_0x00010ae6c448();
    func_0x00010bd0b678();
  }
  else {
    lVar3 = (long)*(char *)(param_1 + 0xa7);
    if (lVar3 < 0) {
      lVar2 = *(long *)(param_1 + 0x90);
      lVar3 = *(long *)(param_1 + 0x98);
    }
    else {
      lVar2 = param_1 + 0x90;
    }
    func_0x00010bd0a718(plVar1,lVar2,lVar3);
    func_0x00010bd0a844();
    (**(code **)(*plVar1 + 0x18))();
  }
  func_0x00010bd0b1ac();
  return;
}



/* Entry: 10bcf59d8; end: 10bcf5a4f;  */

void FUN_10bcf59d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  lVar3 = (long)*(char *)((long)puVar1 + 0x17);
  puVar2 = puVar1;
  if (lVar3 < 0) {
    puVar2 = (undefined8 *)*puVar1;
    lVar3 = puVar1[1];
  }
  func_0x000107c2a6e4(puVar2,lVar3,param_2,param_3);
  return;
}



/* Entry: 10bcf5a50; end: 10bcf5acf;  */

void FUN_10bcf5a50(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [16];
  char cStack_38;
  
  if (param_2 != 0) {
    func_0x00010bd0aa10();
    FUN_10bd04cb4(auStack_48,unaff_x20 + 0xb8);
    if (cStack_38 == '\x01') {
      for (lVar1 = 0; lVar1 < *(int *)(unaff_x19 + 0x34); lVar1 = lVar1 + 1) {
        FUN_10bcef2d4();
        FUN_10bcf5a50();
      }
    }
  }
  return;
}



/* Entry: 10bcf5ad0; end: 10bcf5bc3;  */

undefined8 FUN_10bcf5ad0(void)

{
  bool bVar1;
  long lVar2;
  int in_w3;
  int extraout_w8;
  int extraout_w8_00;
  long unaff_x20;
  undefined8 unaff_x23;
  
  func_0x00010bd0a9ec();
  func_0x00010bd0b6d4();
  func_0x00010bd0a718(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_10bceca2c();
  func_0x00010bd0b820();
  if (extraout_w8 == 0) {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
      bVar1 = true;
    }
    else {
      FUN_10bcf5ad0();
      func_0x00010bd0b820();
      bVar1 = extraout_w8_00 == 0;
    }
    if ((in_w3 != 0) && (bVar1)) {
      func_0x00010bd0a718();
      lVar2 = unaff_x20;
      FUN_10bcecb20();
      if ((int)lVar2 != 0) {
        unaff_x23 = *(undefined8 *)(unaff_x20 + 0x28);
        func_0x00010bd0a718(unaff_x23);
        FUN_10bceca2c();
      }
    }
  }
  func_0x00010bd0aefc();
  return unaff_x23;
}



/* Entry: 10bcf5bc4; end: 10bcf5cb3;  */

byte * FUN_10bcf5bc4(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbStack_28;
  
  pbVar1 = param_1;
  FUN_10bcf5ad0(param_1,*(undefined8 *)param_1,param_2,param_3);
  pbVar2 = pbVar1;
  FUN_10bcede4c();
  pbStack_28 = pbVar2;
  if (pbVar2 != *(byte **)(param_1 + 0xa8)) {
    pbVar3 = param_1 + 0xb8;
    func_0x00010bcf5c38(pbVar3,pbVar2);
    if ((int)pbVar3 == 0) {
      return pbVar1;
    }
  }
  if (1 < *pbVar1 - 9) {
    func_0x00010bcf5c68(param_1 + 0xf8,&pbStack_28);
  }
  return pbVar1;
}



/* Entry: 10bcf5cb4; end: 10bcf5dab;  */

byte * FUN_10bcf5cb4(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x21;
  long lStack_40;
  long *plStack_38;
  
  func_0x00010bd0b168();
  FUN_10bcf5bc4();
  if (((*param_1 != 0) && (*(char *)(*unaff_x21 + 0x30) == '\x01')) &&
     (pbVar2 = param_1, FUN_10bcede4c(), pbVar2 != (byte *)unaff_x21[0x15])) {
    plVar3 = unaff_x21 + 0x17;
    func_0x00010bcf5c38(plVar3,pbVar2);
    if (((ulong)plVar3 & 1) == 0) {
      if (*param_1 - 9 < 2) {
        uVar4 = unaff_x21[0x15];
        func_0x00010bd0a5b4();
        FUN_10bcf59d8();
        if ((uVar4 & 1) != 0) {
          return param_1;
        }
        lVar5 = unaff_x21[0x17];
        plVar3 = (long *)unaff_x21[0x18];
        FUN_10bcf5dac();
        lStack_40 = lVar5;
        plStack_38 = plVar3;
        while (lStack_40 != 0) {
          lVar5 = *plStack_38;
          if (lVar5 != 0) {
            func_0x00010bd0a5b4();
            iVar1 = (int)lVar5;
            FUN_10bcf59d8();
            if (iVar1 != 0) {
              return param_1;
            }
          }
          FUN_10bcf5dd4(&lStack_40);
        }
      }
      unaff_x21[0x23] = (long)pbVar2;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(unaff_x21 + 0x24);
      param_1 = &UNK_10e607c03;
    }
  }
  return param_1;
}



/* Entry: 10bcf5dac; end: 10bcf5dd3;  */

undefined1  [16] FUN_10bcf5dac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010bd04eb0(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10bcf5dd4; end: 10bcf5e07;  */

long * FUN_10bcf5dd4(long *param_1)

{
  param_1[1] = param_1[1] + 8;
  *param_1 = *param_1 + 1;
  func_0x00010bd04eb0();
  return param_1;
}



/* Entry: 10bcf5e08; end: 10bcf601f;  */

undefined1 * FUN_10bcf5e08(long param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  uint extraout_w8;
  int extraout_w8_00;
  char *pcVar5;
  undefined1 *unaff_x19;
  char *unaff_x21;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  byte bStack_69;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  func_0x00010bd0c370();
  func_0x00010bd0afbc();
  *(undefined8 *)(param_1 + 0x118) = 0;
  func_0x000107c27fa8(param_1 + 0x138);
  if (unaff_x21[0x17] < '\0') {
    if (*(long *)(unaff_x21 + 8) != 0) {
      pcVar5 = *(char **)unaff_x21;
      goto LAB_10bcf5e5c;
    }
  }
  else {
    pcVar5 = unaff_x21;
    if (unaff_x21[0x17] != '\0') {
LAB_10bcf5e5c:
      if (*pcVar5 == '.') {
        func_0x00010bd0b370(&uStack_68);
        func_0x00010bd0b90c();
        goto LAB_10bcf5fe0;
      }
    }
  }
  pcVar5 = unaff_x21;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm();
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (pcVar5 == (char *)0xffffffffffffffff) {
    func_0x00010bd0c0f0(&uStack_68);
  }
  else {
    func_0x00010bd0bf88(auStack_80);
    func_0x00010bd0bac8(&uStack_68);
    func_0x00010bd0aaa4();
  }
  func_0x00010bd0b9e0(auStack_80);
  while (puVar4 = auStack_80, func_0x00010bd0acb8(), puVar4 != (undefined1 *)0xffffffffffffffff) {
    func_0x00010bd0bfc0(auStack_80,puVar4);
    uVar1 = uStack_78;
    if (-1 < (char)bStack_69) {
      uVar1 = (ulong)bStack_69;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(auStack_80,1,0x2e);
    func_0x000107c27fc4(auStack_80,&uStack_68);
    func_0x00010bd0af1c();
    func_0x00010bd0b90c();
    func_0x00010bd0b820();
    if (extraout_w8 != 0) {
      uVar2 = uStack_60;
      if (-1 < (long)uStack_58) {
        uVar2 = uStack_58 >> 0x38;
      }
      uVar3 = *(ulong *)(unaff_x21 + 8);
      if (-1 < unaff_x21[0x17]) {
        uVar3 = (ulong)(byte)unaff_x21[0x17];
      }
      puVar4 = param_3;
      if (uVar2 < uVar3) {
        if ((extraout_w8 < 0xb) && ((1 << (ulong)(extraout_w8 & 0x1f) & 0x692U) != 0)) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendERKS5_mm
                    (auStack_80);
          func_0x00010bd0af1c();
          func_0x00010bd0b90c();
          func_0x00010bd0b820();
          if (extraout_w8_00 == 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (unaff_x19 + 0x138,auStack_80);
          }
          goto LAB_10bcf5fdc;
        }
      }
      else if ((param_4 == 0) || (extraout_w8 == 1 || extraout_w8 == 4)) goto LAB_10bcf5fdc;
    }
    func_0x00010bd0bfc0(auStack_80,uVar1);
  }
  func_0x00010bd0ac5c();
  func_0x00010bd0b90c();
LAB_10bcf5fdc:
  func_0x00010bd0aaa4();
  unaff_x19 = puVar4;
LAB_10bcf5fe0:
  func_0x00010bd0aacc();
  return unaff_x19;
}



/* Entry: 10bcf6020; end: 10bcf64af;  */

char ***** FUN_10bcf6020(char *****param_1,char *****param_2,undefined8 param_3,int param_4)

{
  char *pcVar1;
  byte bVar2;
  undefined1 in_ZR;
  char *****pppppcVar3;
  char *****pppppcVar4;
  char *****pppppcVar5;
  undefined8 *****pppppuVar6;
  byte extraout_w8;
  byte extraout_w8_00;
  char cVar7;
  undefined8 extraout_x8;
  undefined8 *****pppppuVar8;
  char *****pppppcVar9;
  byte extraout_w9;
  byte extraout_w9_00;
  uint uVar10;
  char ****ppppcVar11;
  char ***pppcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  char ***apppcStack_1f0 [14];
  undefined1 auStack_180 [112];
  char ****ppppcStack_110;
  undefined8 ****ppppuStack_108;
  char ****ppppcStack_100;
  undefined8 ****ppppuStack_f8;
  char ****ppppcStack_f0;
  undefined8 ****ppppuStack_e8;
  char ***pppcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 ****ppppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  char ****ppppcStack_b0;
  undefined8 ****ppppuStack_a8;
  char ****ppppcStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 uStack_48;
  
  pppppcVar3 = param_1;
  pppppcVar4 = param_2;
  func_0x00010bd0a30c();
  uStack_48 = extraout_x8;
  FUN_10bcf5e08();
  pppppcVar9 = pppppcVar3;
  if (*(char *)pppppcVar3 == '\0') {
    ppppcVar11 = *param_1;
    in_ZR = 0;
    if (*(char *)((long)ppppcVar11 + 0x32) == '\x01') {
      bVar2 = *(byte *)((long)param_2 + 0x17);
      in_ZR = bVar2 == 0;
      ppppuStack_e8 = (undefined8 ****)param_2[1];
      pppppcVar9 = (char *****)*param_2;
      if (-1 < (char)bVar2) {
        ppppuStack_e8 = (undefined8 *****)(ulong)bVar2;
        pppppcVar9 = param_2;
      }
      pppppcVar3 = (char *****)*ppppcVar11;
      ppppcStack_f0 = (char ****)pppppcVar9;
      if (pppppcVar3 != (char *****)0x0) {
        func_0x00010ae7d914();
      }
      ppppcStack_110 = (char ****)0x0;
      ppppuStack_108 = (undefined8 *****)0x0;
      func_0x00010bd0c650();
      FUN_10bcf64b0();
      if ((int)pppppcVar3 != 0) {
        if (*(char *)pppppcVar9 == '.') {
          pppppcVar4 = &ppppcStack_f0;
          pppppuVar6 = (undefined8 *****)0x1;
          func_0x000107c2810c(pppppcVar4,1,0xffffffffffffffff);
          ppppcStack_100 = (char ****)pppppcVar4;
          ppppuStack_f8 = pppppuVar6;
        }
        else {
          ppppuStack_f8 = ppppuStack_e8;
          ppppcStack_100 = ppppcStack_f0;
        }
        func_0x00010bd0b940(apppcStack_1f0);
        FUN_10bcf6524(apppcStack_1f0);
        func_0x00010bd0ace0();
        if (param_4 == 1) {
          func_0x00010bd0b394();
          func_0x00010bcf6580();
          func_0x00010bd0b394();
          func_0x00010bcf65a8();
          func_0x00010bd0ace0();
          func_0x00010bd0ace0();
        }
        else {
          func_0x00010bd0b394();
          func_0x00010bcf65d0();
          func_0x00010bd0ace0();
          if (param_4 == 2) {
            func_0x00010bd0b394();
            func_0x00010bcf65f8();
          }
        }
        if ((char ****)apppcStack_1f0[0] == (char ****)0x0) {
          pppppcVar4 = (char *****)ppppcVar11[5];
          FUN_10bd03130(pppppcVar4,auStack_180);
          FUN_10bd034e4(apppcStack_1f0);
          if ((char ****)apppcStack_1f0[0] != (char ****)0x0) {
            pppppcVar4 = &ppppcStack_100;
            pppppuVar6 = (undefined8 *****)0x2e;
            func_0x000107885418(pppppcVar4,0x2e,0xffffffffffffffff);
            if (pppppcVar4 == (char *****)0xffffffffffffffff) {
              pppppcVar3 = (char *****)apppcStack_1f0;
              FUN_10bcf6620();
              ppppuStack_108 = ppppuStack_f8;
              ppppcStack_110 = ppppcStack_100;
            }
            else {
              pppppcVar3 = &ppppcStack_100;
              pppppuVar6 = (undefined8 *****)0x0;
              func_0x000107c2810c(pppppcVar3,0,pppppcVar4);
              ppppcStack_b0 = (char ****)pppppcVar3;
              ppppuStack_a8 = pppppuVar6;
              func_0x00010bd0b394();
              func_0x00010bcfee28();
              func_0x000107c27958(&ppppcStack_80,&ppppcStack_b0);
              func_0x000107c27b9c(pppppcVar3,&ppppcStack_80);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppcStack_80);
              pppppcVar9 = &ppppcStack_100;
              pppppuVar6 = (undefined8 *****)((long)pppppcVar4 + 1);
              func_0x000107c2810c(pppppcVar9,pppppuVar6,0xffffffffffffffff);
              ppppcStack_110 = (char ****)pppppcVar9;
              ppppuStack_108 = pppppuVar6;
            }
            ppppuStack_78 = ppppuStack_f8;
            ppppcStack_80 = ppppcStack_100;
            pppppcVar4 = (char *****)&UNK_10f831d74;
            func_0x000107c284bc();
            ppppcStack_b0 = (char ****)pppppcVar4;
            ppppuStack_a8 = pppppuVar6;
            func_0x00010bd0bf64(&ppppuStack_c8);
            pppppuVar6 = (undefined8 *****)ppppuStack_c8;
            if (-1 < (char)bStack_b1) {
              uStack_c0 = (ulong)bStack_b1;
              pppppuVar6 = &ppppuStack_c8;
            }
            FUN_10bcf6660(ppppcVar11,pppppuVar6,uStack_c0,apppcStack_1f0);
            pppppcVar9 = (char *****)&ppppuStack_c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            ppppcVar11[2] = (char ***)pppppcVar3;
            in_ZR = param_4 == 1;
            if ((bool)in_ZR) {
              *(undefined4 *)(ppppcVar11 + 8) = 1;
              func_0x00010bd0b394();
              FUN_10bcf677c();
              ppppcVar11[0xd] = (char ***)pppppcVar9;
              pppppcVar9[10] = (char ****)0x0;
              pppppcVar9[7] = (char ****)0x0;
              pppppcVar9[6] = (char ****)0x0;
              pppppcVar9[9] = (char ****)0x0;
              pppppcVar9[8] = (char ****)0x0;
              pppppcVar9[3] = (char ****)0x0;
              pppppcVar9[2] = (char ****)0x0;
              pppppcVar9[5] = (char ****)0x0;
              pppppcVar9[4] = (char ****)0x0;
              pppppcVar9[1] = (char ****)0x0;
              *pppppcVar9 = (char ****)0x0;
              pppppcVar5 = pppppcVar9;
              func_0x00010bd0b964();
              pppppcVar9[1] = (char ****)pppppcVar5;
              pppppcVar9[2] = ppppcVar11;
              pppppcVar9[4] = (char ****)&PTR_PTR_113406410;
              pppppcVar9[5] = (char ****)&PTR_PTR_113405ec0;
              pppppcVar9[6] = (char ****)&PTR_PTR_113405ec0;
              func_0x00010bd0b7dc();
              bVar2 = 0;
              if (!(bool)in_ZR) {
                bVar2 = extraout_w9;
              }
              *(byte *)((long)pppppcVar9 + 1) = bVar2 | extraout_w8 & 0xfd;
              pcVar1 = (char *)((long)pppppcVar9 + 4);
              pcVar1[0] = '\x01';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
              func_0x00010bd0b394();
              FUN_10bcf6838();
              pppppcVar9[7] = (char ****)pppppcVar5;
              ((char *)((long)pppppcVar9 + 2))[0] = -1;
              ((char *)((long)pppppcVar9 + 2))[1] = -1;
              pppppcVar5[3] = (char ****)0x0;
              pppppcVar5[2] = (char ****)0x0;
              pppppcVar5[5] = (char ****)0x0;
              pppppcVar5[4] = (char ****)0x0;
              pppppcVar5[1] = (char ****)0x0;
              *pppppcVar5 = (char ****)0x0;
              cVar7 = *(char *)((long)pppppcVar3 + 0x17);
              pppppuVar8 = (undefined8 *****)(long)cVar7;
              if ((long)pppppuVar8 < 0) {
                if (pppppcVar3[1] != (char ****)0x0) goto LAB_10bcf62e8;
LAB_10bcf63a8:
                func_0x000107c278b8(&pppcStack_208,&UNK_10f831d87);
              }
              else {
                if (pppppuVar8 == (undefined8 *****)0x0) goto LAB_10bcf63a8;
LAB_10bcf62e8:
                in_ZR = cVar7 == '\0';
                ppppuStack_78 = (undefined8 ****)pppppcVar3[1];
                ppppcStack_80 = *pppppcVar3;
                if (-1 < cVar7) {
                  ppppuStack_78 = pppppuVar8;
                  ppppcStack_80 = (char ****)pppppcVar3;
                }
                pppppcVar4 = (char *****)&UNK_10f831d99;
                func_0x000107c284bc();
                ppppcStack_b0 = (char ****)pppppcVar4;
                ppppuStack_a8 = pppppuVar6;
                func_0x00010bd0bf64(&pppcStack_208);
              }
              ppppcVar11 = apppcStack_1f0;
              func_0x00010bd0b5c0();
              func_0x000107c278b8(&ppppuStack_c8,&UNK_10f831d87);
              func_0x00010bd0c13c();
              uStack_d8 = uStack_200;
              pppcStack_e0 = pppcStack_208;
              uStack_d0 = uStack_1f8;
              func_0x00010bd0c598();
              pppppcVar4 = (char *****)&pppcStack_e0;
              func_0x000107c27b9c(ppppcVar11 + 3);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppcStack_e0);
              pppppcVar3 = (char *****)&ppppuStack_c8;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              pppppcVar5[1] = ppppcVar11;
              func_0x00010bd0aab8();
              pcVar1 = (char *)((long)pppppcVar5 + 4);
              pcVar1[0] = '\0';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
              pppppcVar5[2] = (char ****)pppppcVar9;
              pppppcVar5[3] = (char ****)&PTR_PTR_1134063b0;
              cVar7 = '\x04';
            }
            else {
              *(undefined4 *)((long)ppppcVar11 + 0x3c) = 1;
              func_0x00010bd0b394();
              func_0x00010bcf6890();
              ppppcVar11[0xc] = (char ***)pppppcVar9;
              pppppcVar4 = (char *****)0x98;
              pppppcVar3 = pppppcVar9;
              _bzero();
              func_0x00010bd0b964();
              pppppcVar9[1] = (char ****)pppppcVar3;
              pppppcVar9[2] = ppppcVar11;
              pppppcVar9[4] = (char ****)&PTR_PTR_113406168;
              pppppcVar9[5] = (char ****)&PTR_PTR_113405ec0;
              pppppcVar9[6] = (char ****)&PTR_PTR_113405ec0;
              func_0x00010bd0b7dc();
              bVar2 = 0;
              if (!(bool)in_ZR) {
                bVar2 = extraout_w9_00;
              }
              *(byte *)((long)pppppcVar9 + 1) = bVar2 | extraout_w8_00 & 0xfd;
              in_ZR = param_4 == 2;
              if ((bool)in_ZR) {
                *(undefined4 *)(pppppcVar9 + 0x11) = 1;
                func_0x00010bd0b394();
                func_0x00010bcf68e8();
                pppppcVar9[0xb] = (char ****)pppppcVar3;
                *pppppcVar3 = (char ****)0x2000000000000001;
                pppppcVar3[1] = (char ****)0x0;
                pppppcVar3[3] = (char ****)&PTR_PTR_113405ec0;
                pppppcVar3[4] = (char ****)&PTR_PTR_113405ec0;
              }
              cVar7 = '\x01';
            }
            *(char *)pppppcVar9 = cVar7;
            goto LAB_10bcf642c;
          }
          func_0x00010bd0ae6c();
          func_0x00010bd0befc();
          func_0x00010bd0a968();
          pppppcVar3 = &ppppcStack_80;
          FUN_10bdb2a88();
        }
        else {
          pppppcVar4 = (char *****)&UNK_10f83311a;
          func_0x00010bd0befc();
          func_0x00010bd0a968();
          pppppcVar3 = &ppppcStack_80;
          FUN_10bdb2a88();
        }
        func_0x00010ae6c700();
        goto LAB_10bcf648c;
      }
      pppppcVar9 = (char *****)&UNK_10e607c03;
    }
  }
LAB_10bcf642c:
  func_0x000107c3a64c(uStack_48);
  if ((bool)in_ZR) {
    return pppppcVar9;
  }
LAB_10bcf648c:
  ___stack_chk_fail();
  func_0x00010bd0ac68();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bd0a974();
  pppppcVar9 = (char *****)0x0;
  uVar10 = 0;
  do {
    if (pppppcVar4 == pppppcVar9) {
      return (char *****)(ulong)((uint)(pppppcVar4 != (char *****)0x0) & (uVar10 ^ 1));
    }
    bVar2 = *(byte *)((long)pppppcVar3 + (long)pppppcVar9);
    if (((bVar2 & 0xffffffdf) - 0x41 < 0x1a) || (bVar2 == 0x5f || bVar2 - 0x30 < 10)) {
      uVar10 = 0;
    }
    else {
      if (bVar2 != 0x2e || uVar10 != 0) {
        return (char *****)0x0;
      }
      uVar10 = bVar2 == 0x2e | uVar10;
    }
    pppppcVar9 = (char *****)((long)pppppcVar9 + 1);
  } while( true );
}



/* Entry: 10bcf64b0; end: 10bcf6523;  */

byte FUN_10bcf64b0(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  
  lVar2 = 0;
  bVar3 = 0;
  do {
    if (param_2 == lVar2) {
      return param_2 != 0 & (bVar3 ^ 1);
    }
    bVar1 = *(byte *)(param_1 + lVar2);
    if (((bVar1 & 0xffffffdf) - 0x41 < 0x1a) || (bVar1 == 0x5f || bVar1 - 0x30 < 10)) {
      bVar3 = 0;
    }
    else {
      if (bVar1 != 0x2e || bVar3 != 0) {
        return 0;
      }
      bVar3 = bVar1 == 0x2e | bVar3;
    }
    lVar2 = lVar2 + 1;
  } while( true );
}



/* Entry: 10bcf6524; end: 10bcf661f;  */

long * FUN_10bcf6524(long *param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_158 [24];
  
  if (*param_1 == 0) {
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 0xa8;
    return param_1;
  }
  func_0x00010bd0a31c();
  func_0x00010bd0a0b8();
  func_0x00010bd0aa9c();
  if (*param_1 == 0) {
    *(int *)((long)param_1 + 0x74) = *(int *)((long)param_1 + 0x74) + param_2;
    return param_1;
  }
  func_0x00010bd0a31c();
  func_0x00010bd0a0b8();
  func_0x00010bd0aa9c();
  if (*param_1 == 0) {
    iVar1 = 0x58;
  }
  else {
    func_0x00010bd0a31c();
    func_0x00010bd0a0b8();
    func_0x00010bd0aa9c();
    if (*param_1 == 0) {
      iVar1 = 0x30;
    }
    else {
      func_0x00010bd0a31c();
      func_0x00010bd0a0b8();
      func_0x00010bd0aa9c();
      if (*param_1 == 0) {
        iVar1 = 0x98;
      }
      else {
        func_0x00010bd0a31c();
        func_0x00010bd0a0b8();
        func_0x00010bd0aa9c();
        if (*param_1 != 0) {
          func_0x00010bd0a31c();
          func_0x00010bd0a0b8();
          func_0x00010bd0aa9c();
          func_0x00010bd0b5c8();
          func_0x00010bd0b5a0();
          func_0x000107c278b8(auStack_158);
          func_0x000107c27b9c(param_1,auStack_158);
          func_0x00010bd0aab8();
          return param_1;
        }
        iVar1 = 0x28;
      }
    }
  }
  *(int *)(param_1 + 0xe) = (int)param_1[0xe] + param_2 * iVar1;
  return param_1;
}



/* Entry: 10bcf6620; end: 10bcf665f;  */

undefined8 FUN_10bcf6620(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x00010bd0b5c8();
  func_0x00010bd0b5a0();
  func_0x000107c278b8(auStack_38);
  func_0x000107c27b9c(param_1,auStack_38);
  func_0x00010bd0aab8();
  return param_1;
}



/* Entry: 10bcf6660; end: 10bcf677b;  */

long FUN_10bcf6660(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uStack_58 = param_2;
  uStack_50 = param_3;
  if (*param_1 != 0) {
    func_0x00010ae7d914();
  }
  lVar2 = param_4;
  func_0x00010bcf6940();
  _bzero();
  func_0x00010bd0b5c8();
  func_0x000107c27958(auStack_48,&uStack_58);
  func_0x00010bd0c11c();
  func_0x00010bd0aacc();
  *(long *)(lVar2 + 8) = param_4;
  func_0x000107c280b4();
  *(undefined **)(lVar2 + 0x10) = &DAT_11383d918;
  *(long **)(lVar2 + 0x18) = param_1;
  *(undefined ***)(lVar2 + 0x80) = &PTR_PTR_1134061c0;
  *(undefined ***)(lVar2 + 0x88) = &PTR_PTR_113405ec0;
  *(undefined ***)(lVar2 + 0x90) = &PTR_PTR_113405ec0;
  if ((bRam00000001137fe198 & 1) == 0) {
    iVar1 = 0x137fe198;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar3 = 200;
      __Znwm();
      FUN_10bcec794();
      func_0x000107c30378(0x10bcff9d0,uVar3);
      uRam00000001137fe190 = uVar3;
      ___cxa_guard_release(0x1137fe198);
    }
  }
  *(undefined8 *)(lVar2 + 0x98) = uRam00000001137fe190;
  *(undefined ***)(lVar2 + 0xa0) = &PTR_PTR_113405fd8;
  *(undefined2 *)(lVar2 + 1) = 0x101;
  return lVar2;
}



/* Entry: 10bcf677c; end: 10bcf67d3;  */

long FUN_10bcf677c(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    func_0x00010bd0a350();
    func_0x00010bd0a1c8();
    goto LAB_10bcf67c0;
  }
  lVar1 = param_1[0x15];
  func_0x00010bd0a1b0((int)lVar1 + param_2 * 0x58);
  if (param_1 == (long *)0x0) {
    return lVar2 + (int)lVar1;
  }
  do {
    func_0x00010802bcb8();
    func_0x00010bd0a1dc();
LAB_10bcf67c0:
    FUN_10bdb2a88();
    func_0x00010bd0aa9c();
  } while( true );
}



/* Entry: 10bcf67d4; end: 10bcf6837;  */

void FUN_10bcf67d4(void)

{
  long unaff_x19;
  undefined1 auStack_60 [48];
  
  func_0x00010bd0b07c();
  func_0x00010bd0b5c0();
  func_0x00010bd0b150();
  func_0x000107c27958();
  func_0x000107c27b9c();
  func_0x000107c27958(auStack_60);
  func_0x00010bd0bac8(unaff_x19 + 0x18);
  func_0x00010bd0aaa4();
  func_0x00010bd0aacc();
  return;
}



/* Entry: 10bcf6838; end: 10bcf6993;  */

long FUN_10bcf6838(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    func_0x00010bd0a350();
    func_0x00010bd0a1c8();
    goto LAB_10bcf687c;
  }
  lVar1 = param_1[0x15];
  func_0x00010bd0a1b0((int)lVar1 + param_2 * 0x30);
  if (param_1 == (long *)0x0) {
    return lVar2 + (int)lVar1;
  }
  do {
    func_0x00010802bcb8();
    func_0x00010bd0a1dc();
LAB_10bcf687c:
    FUN_10bdb2a88();
    func_0x00010bd0aa9c();
  } while( true );
}



/* Entry: 10bcf6994; end: 10bcf6a8f;  */

bool FUN_10bcf6994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char in_NG;
  char in_OV;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x10;
  undefined8 extraout_x11;
  undefined8 unaff_x19;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  
  func_0x00010bd0a9ec();
  func_0x000107c3a6b0();
  uVar3 = extraout_x11;
  uVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar3 = extraout_x8_03;
    uVar2 = param_2;
  }
  FUN_10bcf6a90(uVar2,uVar3);
  if ((int)uVar2 == 0) {
    uVar3 = *(undefined8 *)(unaff_x21 + 8);
    FUN_10bced06c(uVar3,param_4);
    if ((int)uVar3 != 0) {
      puVar4 = *(undefined8 **)(unaff_x21 + 0xb0);
      func_0x00010bd0aa10();
      Hint_Prefetch(*puVar4,0,2,0);
      puVar1 = &uStack_a8;
      uStack_a8 = param_4;
      FUN_10bd037c4(*puVar4);
      lVar5 = 0;
      uVar6 = unaff_x20[2];
      func_0x00010bd0abe4(*unaff_x20 >> 0xc);
      uVar7 = extraout_x8;
      while( true ) {
        uVar7 = uVar7 & uVar6;
        func_0x00010bd0addc();
        while ((extraout_x8_00 & 0x8080808080808080) != 0) {
          func_0x000107c3a6e4();
          FUN_10bcfec74(auStack_88,unaff_x20[1] + (uVar7 + (extraout_x8_01 >> 3) & uVar6) * 8);
          puVar1 = auStack_a0;
          FUN_10bcfec74(puVar1,&uStack_a8);
          func_0x00010bd0bf58();
          if (((ulong)puVar1 & 1) != 0) goto LAB_10bced268;
          func_0x000107c3a6dc();
        }
        func_0x00010bd0a514();
        if ((extraout_x8_02 & 1) != 0) break;
        lVar5 = lVar5 + 8;
        uVar7 = lVar5 + uVar7;
      }
      func_0x00010bd0b808();
      FUN_10bd037f0();
      *(undefined8 *)(unaff_x20[1] + (long)puVar1 * 8) = unaff_x19;
LAB_10bced268:
      return (extraout_x8_00 & 0x8080808080808080) == 0;
    }
    lVar5 = *(long *)(unaff_x21 + 8);
    func_0x00010bd0a5b4();
    FUN_10bceca2c();
    FUN_10bcede4c();
    if (lVar5 == *(long *)(unaff_x21 + 0xa8)) {
      func_0x00010bd0acb8();
    }
  }
  func_0x00010bd0a8ec();
  func_0x00010bd0b148();
  return false;
}



/* Entry: 10bcf6a90; end: 10bcf6ac3;  */

bool FUN_10bcf6a90(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = &uStack_20;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x0001057fa6dc(&uStack_20,0,0);
  return puVar1 != (undefined8 *)0xffffffffffffffff;
}



/* Entry: 10bcf6ac4; end: 10bcf6c83;  */

void FUN_10bcf6ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  char in_NG;
  char in_OV;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined8 *puVar8;
  undefined8 extraout_x10;
  undefined8 extraout_x11;
  long *unaff_x20;
  long unaff_x21;
  
  func_0x00010bd0a9ec();
  func_0x000107c3a6b0();
  uVar6 = extraout_x11;
  uVar4 = extraout_x10;
  if (in_NG == in_OV) {
    uVar6 = extraout_x8;
    uVar4 = param_2;
  }
  FUN_10bcf6a90(uVar4,uVar6);
  if ((int)uVar4 == 0) {
    pbVar5 = *(byte **)(unaff_x21 + 8);
    func_0x00010bd0a5b4();
    FUN_10bceca2c();
    if (*pbVar5 == 0) {
      plVar2 = (long *)*unaff_x20;
      if (-1 < *(char *)((long)unaff_x20 + 0x17)) {
        plVar2 = unaff_x20;
      }
      puVar8 = *(undefined8 **)(param_4 + 0x10);
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        puVar8 = (undefined8 *)*puVar8;
      }
      if (plVar2 == puVar8) {
        uVar6 = *(undefined8 *)(unaff_x21 + 8);
        *param_4 = 9;
      }
      else {
        pbVar5 = *(byte **)(unaff_x21 + 8);
        FUN_10bced8a4(pbVar5,0x10);
        *pbVar5 = 0;
        pbVar5[4] = 0;
        pbVar5[5] = 0;
        pbVar5[6] = 0;
        pbVar5[7] = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        uVar1 = (uint)unaff_x20[1];
        if (-1 < (char)*(byte *)((long)unaff_x20 + 0x17)) {
          uVar1 = (uint)*(byte *)((long)unaff_x20 + 0x17);
        }
        *(uint *)(pbVar5 + 4) = uVar1;
        *(byte **)(pbVar5 + 8) = param_4;
        uVar6 = *(undefined8 *)(unaff_x21 + 8);
        *pbVar5 = 10;
        param_4 = pbVar5;
      }
      FUN_10bced06c(uVar6);
      func_0x00010bd0acb8();
      if (unaff_x20 != (long *)0xffffffffffffffff) {
        func_0x000107c27fb4(&stack0xffffffffffffffa8);
        FUN_10bcf6ac4();
        func_0x00010bd0aab8();
        func_0x000107c27fb4(&stack0xffffffffffffffa8);
        func_0x00010bd0c5a4();
        FUN_10bcf6c84();
        func_0x00010bd0aab8();
        return;
      }
      func_0x00010bd0b114();
      func_0x00010bd0c5a4();
      lVar7 = (long)(char)param_4[0x17];
      if (lVar7 < 0) {
        lVar7 = *(long *)(param_4 + 8);
        if (lVar7 == 0) goto LAB_10bcf6ce8;
        param_4 = *(byte **)param_4;
      }
      else if (param_4[0x17] == 0) {
LAB_10bcf6ce8:
        func_0x00010bd0c5bc();
        FUN_10bcf56d0();
        return;
      }
      while( true ) {
        if (lVar7 == 0) {
          return;
        }
        bVar3 = *param_4;
        if (((bVar3 & 0xffffffdf) - 0x5b < 0xffffffe6) &&
           (bVar3 != 0x5f && bVar3 - 0x3a < 0xfffffff6)) break;
        param_4 = param_4 + 1;
        lVar7 = lVar7 + -1;
      }
      func_0x00010bd0c5bc();
      func_0x00010bd0b148();
      return;
    }
    if (*pbVar5 - 9 < 2) {
      return;
    }
    FUN_10bcede4c();
  }
  func_0x00010bd0a8ec();
  func_0x00010bd0b148();
  return;
}



/* Entry: 10bcf6c84; end: 10bcf6d23;  */

void FUN_10bcf6c84(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = (long)(char)param_2[0x17];
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_2 + 8);
    if (lVar2 == 0) goto LAB_10bcf6ce8;
    param_2 = *(byte **)param_2;
  }
  else if (param_2[0x17] == 0) {
LAB_10bcf6ce8:
    func_0x00010bd0c5bc();
    FUN_10bcf56d0();
    return;
  }
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    bVar1 = *param_2;
    if (((bVar1 & 0xffffffdf) - 0x5b < 0xffffffe6) && (bVar1 != 0x5f && bVar1 - 0x3a < 0xfffffff6))
    break;
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  }
  func_0x00010bd0c5bc();
  func_0x00010bd0b148();
  return;
}



/* Entry: 10bcf6d24; end: 10bcf6dc7;  */

void FUN_10bcf6d24(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(*(long *)(param_2 + 0x48) + 0x30) == 3) && ((*(byte *)(param_2 + 1) & 0xc0) == 0x40)
     ) {
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0x3f | 0x80;
  }
  if (((*(char *)(param_2 + 2) == '\v') &&
      ((*(byte *)(*(long *)(*(long *)(param_2 + 0x20) + 0x20) + 0x53) & 1) == 0)) &&
     (uVar1 = *(int *)(*(long *)(param_2 + 0x48) + 0x40) == 2, (bool)uVar1)) {
    func_0x00010bd0ba10(*(undefined8 *)(param_3 + 0x28));
    FUN_10bcf6020();
    func_0x00010bd0adc4();
    if ((!(bool)uVar1) || ((*(byte *)(*(long *)(param_1 + 0x20) + 0x53) & 1) == 0)) {
      *(undefined1 *)(param_2 + 2) = 10;
    }
  }
  return;
}



/* Entry: 10bcf6dc8; end: 10bcf6e37;  */

void FUN_10bcf6dc8(long param_1,long param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  int *piStack_30;
  long lStack_28;
  long lStack_20;
  int iStack_14;
  
  piStack_30 = &iStack_14;
  lVar2 = **(long **)(param_1 + 8);
  uVar1 = lVar2 + (long)param_3 * 0x18 + 0x18;
  if (((*(long **)(param_1 + 8))[1] - lVar2) / 0x18 - 1U <= (ulong)(long)param_3) {
    uVar1 = *(ulong *)(param_2 + 0xb0) & 0xfffffffffffffffc;
  }
  lStack_28 = param_1;
  lStack_20 = param_2;
  iStack_14 = param_3;
  FUN_10bcf56d0(param_1,uVar1,param_2,9,&piStack_30,FUN_10bd054e0);
  return;
}



/* Entry: 10bcf6e38; end: 10bcf6f17;  */

undefined1 * FUN_10bcf6e38(int param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [8];
  ulong uStack_108;
  uint uStack_100;
  undefined1 auStack_50 [32];
  
  func_0x000107c284b8(auStack_110);
  FUN_10bceee88(param_2,auStack_110);
  if ((param_1 == 0x3e6) && ((*(byte *)(param_3 + 0x10) >> 2 & 1) != 0)) {
    uStack_100 = uStack_100 | 4;
    if ((uStack_108 & 1) != 0) {
      uStack_108 = *(ulong *)(uStack_108 & 0xfffffffffffffffe);
    }
    func_0x0001056439e0(auStack_50,&UNK_10f82ff21,uStack_108);
  }
  func_0x00010b4d1804(auStack_128,auStack_110);
  func_0x00010b4d1804(auStack_140,param_3);
  puVar1 = auStack_128;
  func_0x000107c278d0(puVar1,auStack_140);
  func_0x00010bd0aaa4();
  func_0x00010bd0aacc();
  func_0x000107c315bc(auStack_110);
  return puVar1;
}



/* Entry: 10bcf6f18; end: 10bcf6ff3;  */

undefined1 * FUN_10bcf6f18(long *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_d8 [24];
  undefined1 auStack_a0 [112];
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_a0;
  puVar2 = auStack_a0;
  if (*param_1 == 0) {
    FUN_10bd03130(param_2,param_1 + 0xe);
    FUN_10bd034e4(auStack_a0,param_2);
    func_0x00010bd0af1c();
    _memcpy();
    if (*param_1 != 0) {
      return puVar1;
    }
    func_0x00010bd0ae6c();
    func_0x0001088914a0(auStack_30);
    func_0x00010bd0a968();
  }
  else {
    func_0x0001088914a0(auStack_30,&UNK_10f83311a);
    func_0x00010bd0a968();
  }
  FUN_10bdb2a88(auStack_a0);
  func_0x00010ae6c700(auStack_a0);
  func_0x00010bd0b5c8();
  func_0x00010bd0b4d0(auStack_d8);
  func_0x00010bd0c13c();
  func_0x00010bd0aab8();
  return puVar2;
}



/* Entry: 10bcf6ff4; end: 10bcf7013;  */

void FUN_10bcf6ff4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    param_1[3] = 0;
    if ((ulong)param_1[2] < 0x80) {
      lVar3 = param_1[2];
      lVar2 = *param_1;
      _memset(lVar2,0x80,lVar3 + 8);
      *(undefined1 *)(lVar2 + lVar3) = 0xff;
      uVar1 = param_1[2];
      lVar2 = 6;
      if (uVar1 != 7) {
        lVar2 = uVar1 - (uVar1 >> 3);
      }
      *(long *)(*param_1 + -8) = lVar2 - param_1[3];
    }
    else {
      (*(code *)&DAT_104c32e5c)(param_1);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = (long)&UNK_10e52b660;
    }
    return;
  }
  return;
}



/* Entry: 10bcf7014; end: 10bcf70e3;  */

void FUN_10bcf7014(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x9;
  undefined8 extraout_x10;
  long extraout_x11;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107c3a6a4();
  func_0x00010bd0a5a0();
  func_0x000107c3a6b0();
  func_0x000107c284ac();
  uVar2 = unaff_x19[1];
  uVar3 = unaff_x19[2];
  func_0x00010bd0a4e0(*unaff_x19 >> 0xc);
  do {
    func_0x00010bd0addc();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x00010bd0b4e0();
      func_0x00010bd0c770(uVar2 + (extraout_x8_00 & uVar3) * 0x20);
      uVar1 = unaff_x20[1];
      puVar4 = (undefined8 *)*unaff_x20;
      if (-1 < (char)*(byte *)((long)unaff_x20 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)unaff_x20 + 0x17);
        puVar4 = unaff_x20;
      }
      uVar5 = extraout_x10;
      if (-1 < extraout_x9) {
        uVar5 = extraout_x8_01;
      }
      lVar6 = extraout_x11;
      if (-1 < (int)extraout_x9) {
        lVar6 = extraout_x9;
      }
      func_0x000107c27944(uVar5,lVar6,puVar4,uVar1);
      if ((int)uVar5 != 0) {
        lVar6 = *unaff_x19 + (extraout_x8_00 & uVar3);
        goto LAB_10bcf70c8;
      }
      func_0x00010bd0c764();
    }
    func_0x00010bd0a514();
    if ((extraout_x8_02 & 1) != 0) {
      lVar6 = 0;
LAB_10bcf70c8:
      func_0x00010bd0ae04(lVar6);
      return;
    }
    func_0x00010bd0c74c();
  } while( true );
}



/* Entry: 10bcf70e4; end: 10bcf7143;  */

long FUN_10bcf70e4(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    func_0x00010bd0a350();
    func_0x00010bd0a1c8();
    goto LAB_10bcf7130;
  }
  lVar1 = param_1[0x15];
  func_0x00010bd0a1b0((int)lVar1 + (param_2 * 4 + 7U & 0xfffffff8));
  if (param_1 == (long *)0x0) {
    return lVar2 + (int)lVar1;
  }
  do {
    func_0x00010802bcb8();
    func_0x00010bd0a1dc();
LAB_10bcf7130:
    FUN_10bdb2a88();
    func_0x00010bd0aa9c();
  } while( true );
}



/* Entry: 10bcf7144; end: 10bcf83cf;  */

void FUN_10bcf7144(undefined8 param_1,undefined **param_2,long param_3,int *param_4,long *param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long *plVar11;
  int **ppiVar12;
  int **ppiVar13;
  int extraout_w8;
  int iVar14;
  int extraout_w8_00;
  int iVar15;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar16;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined *extraout_x8_07;
  undefined **ppuVar17;
  undefined8 extraout_x8_08;
  undefined8 extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  int *extraout_x8_12;
  int iVar18;
  undefined *puVar19;
  undefined **extraout_x9;
  undefined8 extraout_x9_00;
  undefined **extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined **extraout_x9_03;
  int **extraout_x9_04;
  undefined **extraout_x9_05;
  undefined **extraout_x9_06;
  long extraout_x9_07;
  undefined **extraout_x9_08;
  long extraout_x9_09;
  undefined **extraout_x9_10;
  long extraout_x9_11;
  undefined **ppuVar20;
  int *piVar21;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  int **extraout_x10_01;
  undefined **extraout_x10_02;
  int *extraout_x10_03;
  long extraout_x10_04;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  ulong extraout_x13;
  ulong uVar22;
  ulong extraout_x13_00;
  ulong extraout_x13_01;
  ulong uVar23;
  long *unaff_x19;
  long lVar24;
  undefined **ppuVar25;
  int *piVar26;
  code *pcVar27;
  ulong *puVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined **ppuVar32;
  long lVar33;
  ulong *puVar34;
  int **ppiVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined1 *puVar38;
  int *piStack_1b0;
  int *piStack_188;
  undefined4 uStack_17c;
  undefined *puStack_178;
  int *piStack_170;
  int *apiStack_160 [3];
  int *piStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  int *piStack_f0;
  undefined *puStack_e8;
  int **ppiStack_c0;
  int **ppiStack_b8;
  byte bStack_b0;
  undefined8 uStack_90;
  
  lVar24 = param_3;
  func_0x000107c3a650();
  if (lVar24 == 0) {
    lVar24 = *(long *)(unaff_x19[0x15] + 0x10);
  }
  else {
    lVar24 = *(long *)(param_3 + 8) + 0x18;
  }
  uStack_90 = extraout_x8;
  FUN_10bcf9384(lVar24,(ulong)param_2[0x1b] & 0xfffffffffffffffc,param_5);
  *(long *)(param_4 + 2) = lVar24;
  func_0x00010bd0ba04(param_2[0x1b]);
  FUN_10bcf6c84();
  *(long *)(param_4 + 4) = unaff_x19[0x15];
  *(long *)(param_4 + 6) = param_3;
  *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) & 0x80;
  param_4[8] = 0;
  param_4[9] = 0;
  lVar24 = *(long *)(*unaff_x19 + 0x28);
  lVar33 = *(long *)(param_4 + 2);
  puVar28 = (ulong *)(lVar24 + 0x78);
  Hint_Prefetch(*puVar28,0,2,0);
  puVar34 = (ulong *)(lVar33 + 0x18);
  uVar16 = *(ulong *)(lVar33 + 0x20);
  puVar10 = (ulong *)*puVar34;
  if (-1 < (char)*(byte *)(lVar33 + 0x2f)) {
    uVar16 = (ulong)*(byte *)(lVar33 + 0x2f);
    puVar10 = puVar34;
  }
  puVar9 = puVar28;
  func_0x000107c284ac(puVar28,puVar10,uVar16);
  lVar33 = 0;
  lVar29 = *(long *)(lVar24 + 0x80);
  func_0x00010bd0adb8(*puVar28 >> 0xc ^ (ulong)puVar9 >> 7);
  uVar16 = extraout_x8_00;
  uVar22 = extraout_x13;
  while( true ) {
    func_0x00010bd0addc();
    for (uVar23 = extraout_x8_01 & 0x8080808080808080; uVar23 != 0; uVar23 = uVar23 - 1 & uVar23) {
      func_0x00010bd0c580();
      uVar31 = (uVar16 & uVar22) + (extraout_x8_02 >> 3) & extraout_x13_00;
      puVar10 = puVar34;
      func_0x000107c315ac(puVar34,lVar29 + uVar31 * 0x20);
      if (((ulong)puVar10 & 1) != 0) {
        *(byte *)((long)param_4 + 1) =
             (*(byte *)(*(long *)(lVar24 + 0x80) + uVar31 * 0x20 + 0x18) & 0x1f) << 2 |
             *(byte *)((long)param_4 + 1) & 0x83;
        goto LAB_10bcf72c0;
      }
    }
    func_0x00010bd0a514();
    if ((extraout_x8_03 & 1) != 0) break;
    lVar33 = lVar33 + 8;
    uVar16 = lVar33 + (uVar16 & uVar22);
    uVar22 = extraout_x13_01;
  }
LAB_10bcf72c0:
  uVar16 = 0;
  ppuVar20 = param_2 + 3;
  puVar19 = *ppuVar20;
  ppuVar25 = (undefined **)(puVar19 + 7);
  do {
    *(short *)((long)param_4 + 2) = (short)uVar16;
    if (0xfffe < uVar16 || (long)*(int *)(param_2 + 4) <= (long)uVar16) break;
    ppuVar32 = ppuVar20;
    if (((ulong)puVar19 & 1) != 0) {
      ppuVar32 = ppuVar25;
    }
    uVar16 = uVar16 + 1;
    ppuVar25 = ppuVar25 + 1;
  } while (uVar16 == *(uint *)(*ppuVar32 + 0x48));
  iVar14 = *(int *)(param_2 + 0x13);
  param_4[0x1e] = iVar14;
  lVar24 = *param_5;
  if (lVar24 == 0) goto LAB_10bcf8240;
  lVar33 = param_5[0x15];
  uVar3 = (int)lVar33 + iVar14 * 0x38;
  uVar16 = (ulong)uVar3;
  *(uint *)(param_5 + 0x15) = uVar3;
  func_0x00010bd0a424(uVar16,(int)param_5[0xe]);
  if (uVar16 != 0) {
    func_0x00010802bcb8();
    func_0x00010bd0b070();
    func_0x00010bd0a454();
    goto LAB_10bcf8238;
  }
  lVar29 = 0;
  ppuVar25 = param_2 + 0x12;
  *(long *)(param_4 + 0x10) = lVar24 + (int)lVar33;
  while( true ) {
    piVar26 = (int *)0x38;
    lVar24 = (long)*(int *)(param_2 + 0x13);
    cVar5 = SBORROW8(lVar29,lVar24);
    cVar6 = lVar29 - lVar24 < 0;
    bVar7 = lVar29 == lVar24;
    if (lVar24 <= lVar29) break;
    func_0x00010bd0aec8(*ppuVar25);
    ppuVar32 = ppuVar25;
    if (!bVar7) {
      ppuVar32 = extraout_x9;
    }
    puVar36 = *ppuVar32;
    puVar38 = (undefined1 *)(*(long *)(param_4 + 0x10) + lVar29 * 0x38);
    lVar24 = *(long *)(param_4 + 2) + 0x18;
    FUN_10bcf9384(lVar24,*(ulong *)(puVar36 + 0x18) & 0xfffffffffffffffc,param_5);
    *(long *)(puVar38 + 8) = lVar24;
    func_0x00010bd0ba04(*(undefined8 *)(puVar36 + 0x18));
    FUN_10bcf6c84();
    *(int **)(puVar38 + 0x10) = param_4;
    *(undefined4 *)(puVar38 + 4) = 0;
    *(undefined8 *)(puVar38 + 0x30) = 0;
    piStack_188 = (int *)CONCAT44(piStack_188._4_4_,2);
    func_0x00010bd0c42c();
    func_0x00010bcf19e4(puVar38,&puStack_178);
    func_0x00010bd0bf98();
    piVar26 = piStack_170;
    puVar37 = puStack_178;
    lVar24 = *(long *)(puVar38 + 8);
    puVar19 = (undefined *)(long)*(char *)(lVar24 + 0x2f);
    if ((long)puVar19 < 0) {
      piVar21 = *(int **)(lVar24 + 0x18);
      puVar19 = *(undefined **)(lVar24 + 0x20);
    }
    else {
      piVar21 = (int *)(lVar24 + 0x18);
    }
    ppuVar32 = &PTR_PTR_1134060c0;
    if (((byte)puVar36[0x10] >> 1 & 1) != 0) {
      if (*param_5 == 0) {
        func_0x00010bd0a2c4();
        func_0x00010bd0a4c0(&piStack_148);
        goto LAB_10bcf8238;
      }
      ppiVar35 = *(int ***)(puVar36 + 0x20);
      lVar33 = param_5[10];
      lVar24 = param_5[0x1a];
      uVar3 = (int)lVar24 + 1;
      uVar16 = (ulong)uVar3;
      *(uint *)(param_5 + 0x1a) = uVar3;
      ppiVar13 = (int **)(ulong)*(uint *)(param_5 + 0x13);
      func_0x00010bd0a424();
      if (uVar16 != 0) {
        func_0x00010bd0a454();
        goto LAB_10bcf8238;
      }
      ppiVar12 = ppiVar35;
      FUN_10bd11148();
      if (((ulong)ppiVar12 & 1) == 0) {
        piStack_148 = piVar21;
        puStack_140 = puVar19;
        func_0x00010bd0a408();
        piStack_f0 = piVar21;
        puStack_e8 = puVar19;
        ppiStack_c0 = ppiVar12;
        ppiStack_b8 = ppiVar13;
        func_0x00010bd0aa50();
        func_0x00010bd0a6a0();
        func_0x00010bd0b904();
        ppuVar32 = &PTR_PTR_1134060c0;
      }
      else {
        func_0x00010b4d1804(&piStack_148,ppiVar35);
        ppuVar32 = (undefined **)(lVar33 + (long)(int)lVar24 * 0x50);
        func_0x00010bd0af80();
        uVar2 = extraout_x11;
        uVar4 = extraout_x10;
        if (cVar6 == cVar5) {
          uVar2 = extraout_x8_04;
          uVar4 = extraout_x9_00;
        }
        func_0x00010bcfd620(uVar4,uVar2,ppuVar32);
        func_0x00010bd0c2d8();
        uVar8 = *(int *)(ppuVar32 + 7) == 1;
        if (0 < *(int *)(ppuVar32 + 7)) {
          FUN_10bd05380(&piStack_148,piVar21,puVar19,piVar21,puVar19,puVar37,
                        (long)piVar26 - (long)puVar37 >> 2,ppiVar35,ppuVar32);
          func_0x00010bd0b3c0();
          func_0x00010bd0bb40();
        }
        if (((ulong)ppiVar35[1] & 1) == 0) {
          FUN_10bd36610();
        }
        else {
          func_0x00010bd0bce8();
        }
        func_0x00010bd0be2c();
        if (!(bool)uVar8) {
          FUN_10bceca2c(unaff_x19[1],"google.protobuf.OneofOptions",0x1c);
          func_0x00010bd0adc4();
          if ((bool)uVar8) {
            func_0x00010bd0be44();
            while (func_0x00010bd0af70(), (long)ppiVar35 < (long)extraout_w8) {
              lVar24 = *(long *)*unaff_x19;
              FUN_10bd025c0();
              func_0x00010bd0b460();
              FUN_10bcee158();
              if (lVar24 != 0) {
                piStack_148 = *(int **)(lVar24 + 0x10);
                func_0x00010bd0b3cc();
              }
              func_0x00010bd0c700();
            }
          }
        }
      }
    }
    *(undefined ***)(puVar38 + 0x18) = ppuVar32;
    func_0x00010bd0ac34();
    *(undefined8 *)(puVar38 + 0x20) = extraout_x8_05;
    *(undefined8 *)(puVar38 + 0x28) = extraout_x8_05;
    func_0x00010bd0b368();
    *puVar38 = 3;
    func_0x00010bd0b0fc(*(undefined8 *)(puVar38 + 8));
    FUN_10bcf6994();
    lVar29 = lVar29 + 1;
  }
  param_4[1] = *(int *)(param_2 + 4);
  plVar11 = param_5;
  FUN_10bcf8fe8();
  func_0x00010bd0b13c();
  *(long **)(param_4 + 0xe) = plVar11;
  for (; (long)piVar26 < (long)*(int *)(param_2 + 4); piVar26 = (int *)((long)piVar26 + 1)) {
    func_0x00010bd0ae30(*ppuVar20);
    func_0x00010bd0ae24();
    FUN_10bcf9a74();
    ppuVar25 = ppuVar25 + 0xb;
  }
  param_4[0x21] = *(int *)(param_2 + 10);
  plVar11 = param_5;
  FUN_10bcf677c();
  func_0x00010bd0b13c();
  *(long **)(param_4 + 0x14) = plVar11;
  for (; (long)piVar26 < (long)*(int *)(param_2 + 10); piVar26 = (int *)((long)piVar26 + 1)) {
    func_0x00010bd0ab60();
    func_0x00010bd0ae24();
    FUN_10bcf83d0();
    ppuVar25 = ppuVar25 + 0xb;
  }
  param_4[0x22] = *(int *)(param_2 + 0xd);
  plVar11 = param_5;
  func_0x00010bcf68e8();
  *(long **)(param_4 + 0x16) = plVar11;
  ppuVar20 = param_2 + 0xc;
  ppuVar32 = param_2;
  for (lVar24 = 0; bVar7 = lVar24 == *(int *)(param_2 + 0xd), lVar24 < *(int *)(param_2 + 0xd);
      lVar24 = lVar24 + 1) {
    func_0x00010bd0aec8(*ppuVar20);
    ppuVar25 = ppuVar20;
    if (!bVar7) {
      ppuVar25 = extraout_x9_01;
    }
    puVar19 = *ppuVar25;
    ppuVar25 = (undefined **)(*(long *)(param_4 + 0x16) + lVar24 * 0x28);
    iVar14 = *(int *)(puVar19 + 0x20);
    *(int *)ppuVar25 = iVar14;
    iVar18 = *(int *)(puVar19 + 0x24);
    *(int *)((long)ppuVar25 + 4) = iVar18;
    ppuVar25[2] = (undefined *)param_4;
    piStack_188 = param_4;
    if (iVar14 < 1) {
      FUN_10bcfa6f0(unaff_x19 + 0x1b,&piStack_188);
      piVar26 = (int *)((long)ppuVar25 + 4);
      FUN_10bcf9598();
      func_0x00010bd0b0fc(*(undefined8 *)(piStack_188 + 2));
      FUN_10bcf5820();
      iVar14 = *(int *)ppuVar25;
      iVar18 = *piVar26;
    }
    cVar5 = SBORROW4(iVar14,iVar18);
    cVar6 = iVar14 - iVar18 < 0;
    if (iVar18 <= iVar14) {
      func_0x00010bd0b0fc(*(undefined8 *)(piStack_188 + 2));
      FUN_10bcf5820();
    }
    uStack_17c = 3;
    func_0x00010bd0c42c();
    func_0x00010bcf1918(ppuVar25[2],&puStack_178);
    piStack_148._0_4_ = 5;
    func_0x00010bd0bfa4();
    piStack_148 = (int *)CONCAT44(piStack_148._4_4_,
                                  (int)(((long)ppuVar25 - *(long *)(ppuVar25[2] + 0x58)) / 0x28));
    func_0x00010bd0bfa4();
    func_0x000107c284b4(&puStack_178,&uStack_17c);
    piVar21 = piStack_170;
    puVar36 = puStack_178;
    lVar33 = *(long *)(ppuVar25[2] + 8);
    puVar37 = (undefined *)(long)*(char *)(lVar33 + 0x2f);
    if ((long)puVar37 < 0) {
      piStack_1b0 = *(int **)(lVar33 + 0x18);
      puVar37 = *(undefined **)(lVar33 + 0x20);
    }
    else {
      piStack_1b0 = (int *)(lVar33 + 0x18);
    }
    ppuVar32 = &PTR_PTR_113406340;
    if ((puVar19[0x10] & 1) != 0) {
      if (*param_5 == 0) {
        func_0x00010bd0a2c4();
        func_0x00010bd0a4c0(&piStack_148);
        goto LAB_10bcf8238;
      }
      ppiVar35 = *(int ***)(puVar19 + 0x18);
      lVar33 = param_5[9];
      iVar14 = *(int *)((long)param_5 + 0xcc);
      uVar3 = iVar14 + 1;
      uVar16 = (ulong)uVar3;
      *(uint *)((long)param_5 + 0xcc) = uVar3;
      ppiVar13 = (int **)(ulong)*(uint *)((long)param_5 + 0x94);
      func_0x00010bd0a424();
      if (uVar16 != 0) {
        func_0x00010bd0a454();
        goto LAB_10bcf8238;
      }
      ppiVar12 = ppiVar35;
      FUN_10bd0dfdc();
      piVar26 = piVar21;
      if (((ulong)ppiVar12 & 1) == 0) {
        piStack_148 = piStack_1b0;
        puStack_140 = puVar37;
        func_0x00010bd0a408();
        piStack_f0 = piStack_1b0;
        puStack_e8 = puVar37;
        ppiStack_c0 = ppiVar12;
        ppiStack_b8 = ppiVar13;
        func_0x00010bd0aa50();
        func_0x00010bd0a6a0();
        func_0x00010bd0b904();
        ppuVar32 = &PTR_PTR_113406340;
      }
      else {
        func_0x00010b4d1804(&piStack_148,ppiVar35);
        ppuVar32 = (undefined **)(lVar33 + (long)iVar14 * 0x70);
        func_0x00010bd0af80();
        uVar2 = extraout_x11_00;
        uVar4 = extraout_x10_00;
        if (cVar6 == cVar5) {
          uVar2 = extraout_x8_06;
          uVar4 = extraout_x9_02;
        }
        func_0x00010bcfd620(uVar4,uVar2,ppuVar32);
        func_0x00010bd0c2d8();
        uVar8 = *(int *)(ppuVar32 + 10) == 1;
        if (0 < *(int *)(ppuVar32 + 10)) {
          FUN_10bd05380(&piStack_148,piStack_1b0,puVar37,piStack_1b0,puVar37,puVar36,
                        (long)piVar21 - (long)puVar36 >> 2,ppiVar35,ppuVar32);
          func_0x00010bd0b3c0();
          func_0x00010bd0bb40();
        }
        if (((ulong)ppiVar35[1] & 1) == 0) {
          FUN_10bd36610();
        }
        else {
          func_0x00010bd0bce8();
        }
        func_0x00010bd0be2c();
        if (!(bool)uVar8) {
          piVar26 = (int *)unaff_x19[1];
          FUN_10bceca2c(piVar26,"google.protobuf.ExtensionRangeOptions",0x25);
          func_0x00010bd0adc4();
          if ((bool)uVar8) {
            for (lVar33 = 0; func_0x00010bd0af70(), lVar33 < extraout_w8_00; lVar33 = lVar33 + 1) {
              lVar29 = *(long *)*unaff_x19;
              FUN_10bd025c0();
              func_0x00010bd0b460();
              FUN_10bcee158();
              if (lVar29 != 0) {
                piStack_148 = *(int **)(lVar29 + 0x10);
                func_0x00010bd0b3cc();
              }
            }
          }
        }
      }
    }
    ppuVar25[1] = (undefined *)ppuVar32;
    func_0x00010bd0ac34();
    ppuVar25[3] = extraout_x8_07;
    ppuVar25[4] = extraout_x8_07;
    func_0x00010bd0b368();
  }
  param_4[0x23] = *(int *)(param_2 + 0x10);
  plVar11 = param_5;
  FUN_10bcf8fe8();
  func_0x00010bd0b13c();
  *(long **)(param_4 + 0x18) = plVar11;
  for (; (long)piVar26 < (long)*(int *)(param_2 + 0x10); piVar26 = (int *)((long)piVar26 + 1)) {
    func_0x00010bd0ab60();
    func_0x00010bd0ae24();
    FUN_10bcf9040();
    ppuVar25 = ppuVar25 + 0xb;
  }
  iVar14 = *(int *)(param_2 + 0x16);
  param_4[0x24] = iVar14;
  puVar19 = (undefined *)*param_5;
  if (puVar19 == (undefined *)0x0) {
    func_0x00010bd0ae6c();
    func_0x0001088914a0(&ppiStack_c0);
    func_0x00010bd0a968();
    func_0x00010bd0c284(&piStack_148);
    goto LAB_10bcf8238;
  }
  lVar24 = param_5[0x15];
  uVar3 = (int)lVar24 + iVar14 * 8;
  uVar16 = (ulong)uVar3;
  *(uint *)(param_5 + 0x15) = uVar3;
  func_0x00010bd0a424(uVar16,(int)param_5[0xe]);
  if (uVar16 != 0) {
    func_0x00010802bcb8();
    func_0x00010bd0b070();
    func_0x00010bd0a454();
    goto LAB_10bcf8238;
  }
  func_0x00010bd0be44();
  *(undefined **)(param_4 + 0x1a) = puVar19 + (int)lVar24;
  ppuVar1 = param_2 + 0x15;
  while( true ) {
    ppuVar17 = (undefined **)(long)*(int *)(param_2 + 0x16);
    cVar5 = SBORROW8((long)ppuVar32,(long)ppuVar17);
    cVar6 = (long)ppuVar32 - (long)ppuVar17 < 0;
    bVar7 = ppuVar32 == ppuVar17;
    if ((long)ppuVar17 <= (long)ppuVar32) break;
    func_0x00010bd0aec8(*ppuVar1);
    ppuVar17 = ppuVar1;
    if (!bVar7) {
      ppuVar17 = extraout_x9_03;
    }
    puVar19 = *ppuVar17;
    lVar24 = *(long *)(param_4 + 0x1a);
    piVar26 = (int *)(lVar24 + (long)ppuVar25);
    iVar14 = *(int *)(puVar19 + 0x18);
    *piVar26 = iVar14;
    iVar18 = *(int *)(puVar19 + 0x1c);
    piVar26[1] = iVar18;
    piStack_148 = param_4;
    if (iVar14 < 1) {
      FUN_10bcfa6f0(unaff_x19 + 0x1b,&piStack_148);
      FUN_10bcf9598();
      func_0x00010bd0b0fc(*(undefined8 *)(piStack_148 + 2));
      FUN_10bcf5820();
      iVar14 = *(int *)(lVar24 + (long)ppuVar25);
      iVar18 = piVar26[1];
    }
    if (iVar18 <= iVar14) {
      func_0x00010bd0b0fc(*(undefined8 *)(piStack_148 + 2));
      FUN_10bcf5820();
    }
    ppuVar32 = (undefined **)((long)ppuVar32 + 1);
    ppuVar25 = ppuVar25 + 1;
  }
  piStack_188 = (int *)CONCAT44(piStack_188._4_4_,7);
  func_0x00010bd0c42c();
  func_0x00010bcf1918(param_4,&puStack_178);
  func_0x00010bd0bf98();
  lVar24 = *(long *)(param_4 + 2);
  puVar37 = (undefined *)(long)*(char *)(lVar24 + 0x2f);
  if ((long)puVar37 < 0) {
    piVar26 = *(int **)(lVar24 + 0x18);
    puVar37 = *(undefined **)(lVar24 + 0x20);
  }
  else {
    piVar26 = (int *)(lVar24 + 0x18);
  }
  if ((*(byte *)(param_2 + 2) >> 1 & 1) == 0) {
LAB_10bcf7c7c:
    ppuVar25 = &PTR_PTR_113406168;
LAB_10bcf7c84:
    *(undefined ***)(param_4 + 8) = ppuVar25;
    func_0x00010bd0ac34();
    *(undefined8 *)(param_4 + 10) = extraout_x8_09;
    *(undefined8 *)(param_4 + 0xc) = extraout_x8_09;
    func_0x00010bd0b368();
    iVar14 = (int)unaff_x19[0x2a];
    *(int *)(unaff_x19 + 0x2a) = iVar14 + -1;
    uVar8 = iVar14 == 2;
    if (iVar14 < 2) {
      func_0x00010bd0b0fc(*(undefined8 *)(param_4 + 2));
      FUN_10bcf5820();
      param_4[0x12] = 0;
      param_4[0x13] = 0;
      param_4[0x20] = 0;
    }
    else {
      param_4[0x20] = *(int *)(param_2 + 7);
      plVar11 = param_5;
      func_0x00010bcf6890();
      func_0x00010bd0b13c();
      *(long **)(param_4 + 0x12) = plVar11;
      for (; (long)puVar19 < (long)*(int *)(param_2 + 7); puVar19 = puVar19 + 1) {
        func_0x00010bd0ab60();
        func_0x00010bd0ae24();
        FUN_10bcf7144();
      }
      uVar3 = *(uint *)(param_2 + 0x19);
      param_4[0x25] = uVar3;
      plVar11 = param_5;
      FUN_10bcf94dc(param_5,uVar3);
      *(long **)(param_4 + 0x1c) = plVar11;
      ppuVar25 = param_2 + 0x18;
      for (lVar24 = 0; bVar7 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) << 3 == lVar24,
          !bVar7; lVar24 = lVar24 + 8) {
        func_0x00010bd0aec8(*ppuVar25);
        ppuVar32 = ppuVar25;
        if (!bVar7) {
          ppuVar32 = extraout_x9_05;
        }
        plVar11 = param_5;
        func_0x00010bcf6fb8(param_5,*ppuVar32);
        *(long **)(*(long *)(param_4 + 0x1c) + lVar24) = plVar11;
      }
      *(undefined1 *)param_4 = 1;
      func_0x00010bd0b0fc(*(undefined8 *)(param_4 + 2));
      FUN_10bcf6994();
      lVar24 = 0;
      uVar16 = (ulong)*(uint *)(param_2 + 0x16);
      iVar14 = 1;
      while (uVar8 = lVar24 == (int)uVar16, lVar24 < (int)uVar16) {
        func_0x00010bd0b128();
        ppuVar32 = ppuVar1;
        if (!(bool)uVar8) {
          ppuVar32 = extraout_x10_02;
        }
        puVar19 = *ppuVar32;
        lVar24 = lVar24 + 1;
        uVar16 = extraout_x8_10;
        iVar18 = iVar14;
        while( true ) {
          iVar15 = (int)uVar16;
          cVar5 = SBORROW4(iVar15,iVar18);
          cVar6 = iVar15 - iVar18 < 0;
          uVar8 = iVar15 == iVar18;
          if (iVar15 <= iVar18) break;
          func_0x00010bd0aa7c();
          func_0x00010bd0bdcc();
          uVar16 = extraout_x8_11;
          if ((!(bool)uVar8 && cVar6 == cVar5) && (*(int *)(puVar19 + 0x18) < extraout_x10_03[7])) {
            piStack_148 = extraout_x10_03;
            puStack_140 = puVar19;
            func_0x00010bd0aed4();
            uVar16 = (ulong)*(uint *)(param_2 + 0x16);
          }
          iVar18 = iVar18 + 1;
        }
        iVar14 = iVar14 + 1;
      }
      func_0x000107c3a6bc();
      puStack_140 = (undefined *)0x0;
      uStack_138 = 0;
      uStack_130 = 0;
      piStack_148 = extraout_x8_12;
      func_0x00010bd0b15c(param_2[0x18]);
      if (!(bool)uVar8) {
        ppuVar25 = extraout_x9_06;
      }
      pcVar27 = FUN_10bd07130;
      for (lVar24 = (long)*(int *)(extraout_x10_04 + 200) << 3; lVar24 != 0; lVar24 = lVar24 + -8) {
        ppiVar13 = (int **)*ppuVar25;
        FUN_10bd0579c(&ppiStack_c0,&piStack_148,ppiVar13);
        if ((bStack_b0 & 1) == 0) {
          ppiStack_c0 = ppiVar13;
          func_0x00010bd0a930();
        }
        ppuVar25 = ppuVar25 + 1;
      }
      lVar24 = 0;
      while (lVar24 < param_4[1]) {
        func_0x00010bd0b13c();
        piStack_f0 = (int *)(*(long *)(param_4 + 0xe) + extraout_x9_07 * 0x58);
        for (; (long)pcVar27 < (long)param_4[0x22]; pcVar27 = pcVar27 + 1) {
          apiStack_160[0] = (int *)(*(long *)(param_4 + 0x16) + lVar24);
          iVar14 = piStack_f0[1];
          if ((*(int *)(*(long *)(param_4 + 0x16) + lVar24) <= iVar14) &&
             (uVar8 = iVar14 == apiStack_160[0][1], iVar14 < apiStack_160[0][1])) {
            func_0x00010bd0c320();
            func_0x00010bd0ae30(*ppuVar20);
            ppuVar25 = ppuVar20;
            if (!(bool)uVar8) {
              ppuVar25 = extraout_x9_08;
            }
            func_0x00010bd0b2b0(ppuVar25);
            if (extraout_x9_09 == 0) {
              func_0x00010bd0c56c();
            }
            ppiStack_c0 = apiStack_160;
            ppiStack_b8 = &piStack_f0;
            func_0x00010bd0abd0(*(undefined8 *)(piStack_f0 + 2));
            FUN_10bcf56d0();
          }
          lVar24 = lVar24 + 0x28;
        }
        func_0x00010bd0b13c();
        for (; (long)pcVar27 < (long)param_4[0x24]; pcVar27 = pcVar27 + 1) {
          iVar14 = piStack_f0[1];
          if ((*(int *)(*(long *)(param_4 + 0x1a) + lVar24) <= iVar14) &&
             (iVar18 = *(int *)(*(long *)(param_4 + 0x1a) + lVar24 + 4), uVar8 = iVar14 == iVar18,
             iVar14 < iVar18)) {
            func_0x00010bd0c320();
            func_0x00010bd0aec8(*ppuVar1);
            ppuVar25 = ppuVar1;
            if (!(bool)uVar8) {
              ppuVar25 = extraout_x9_10;
            }
            func_0x00010bd0b2b0(ppuVar25);
            if (extraout_x9_11 == 0) {
              func_0x00010bd0c56c();
            }
            ppiStack_c0 = &piStack_f0;
            func_0x00010bd0abd0(*(undefined8 *)(piStack_f0 + 2));
            FUN_10bcf56d0();
          }
          lVar24 = lVar24 + 8;
        }
        ppiVar13 = &piStack_148;
        FUN_10bcf95f0(ppiVar13,*(undefined8 *)(piStack_f0 + 2));
        if ((int)ppiVar13 != 0) {
          func_0x00010bd0a414(*(undefined8 *)(piStack_f0 + 2));
          ppiStack_c0 = &piStack_f0;
          FUN_10bcf56d0();
        }
        lVar24 = extraout_x9_07 + 1;
      }
      lVar33 = 0;
      lVar24 = 0;
      iVar18 = param_4[0x22];
      iVar14 = 1;
      while (uVar8 = lVar24 == iVar18, lVar24 < iVar18) {
        lVar30 = 0;
        piStack_f0 = (int *)(*(long *)(param_4 + 0x16) + lVar24 * 0x28);
        for (lVar29 = 0; lVar29 < param_4[0x24]; lVar29 = lVar29 + 1) {
          apiStack_160[0] = (int *)(*(long *)(param_4 + 0x1a) + lVar30);
          if ((*(int *)(*(long *)(param_4 + 0x1a) + lVar30) < piStack_f0[1]) &&
             (*piStack_f0 < apiStack_160[0][1])) {
            func_0x00010bd0b128(*(undefined8 *)(param_4 + 2));
            ppiStack_c0 = &piStack_f0;
            ppiStack_b8 = apiStack_160;
            func_0x00010bd0abd0();
            FUN_10bcf56d0();
          }
          lVar30 = lVar30 + 8;
        }
        lVar24 = lVar24 + 1;
        lVar29 = lVar33;
        for (iVar15 = iVar14; iVar18 = param_4[0x22], iVar15 < iVar18; iVar15 = iVar15 + 1) {
          apiStack_160[0] = (int *)(*(long *)(param_4 + 0x16) + lVar29 + 0x28);
          if ((*apiStack_160[0] < piStack_f0[1]) &&
             (*piStack_f0 < *(int *)(*(long *)(param_4 + 0x16) + lVar29 + 0x2c))) {
            func_0x00010bd0b128(*(undefined8 *)(param_4 + 2));
            ppiStack_c0 = apiStack_160;
            ppiStack_b8 = &piStack_f0;
            func_0x00010bd0abd0();
            func_0x00010bd0aed4();
          }
          lVar29 = lVar29 + 0x28;
        }
        lVar33 = lVar33 + 0x28;
        iVar14 = iVar14 + 1;
      }
      func_0x00010bd00148(&piStack_148);
    }
    *(int *)(unaff_x19 + 0x2a) = (int)unaff_x19[0x2a] + 1;
    func_0x000107c3a64c(uStack_90);
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*param_5 == 0) {
      func_0x00010bd0a2c4();
      func_0x00010bd0a4c0(&piStack_148);
      goto LAB_10bcf8238;
    }
    ppiVar35 = (int **)param_2[0x1c];
    lVar24 = param_5[5];
    iVar14 = *(int *)((long)param_5 + 0xbc);
    uVar3 = iVar14 + 1;
    uVar16 = (ulong)uVar3;
    *(uint *)((long)param_5 + 0xbc) = uVar3;
    ppiVar13 = (int **)(ulong)*(uint *)((long)param_5 + 0x84);
    func_0x00010bd0a424();
    if (uVar16 == 0) {
      ppiVar12 = ppiVar35;
      FUN_10bd10154();
      puVar19 = puStack_178;
      if (((ulong)ppiVar12 & 1) == 0) {
        piStack_148 = piVar26;
        puStack_140 = puVar37;
        func_0x00010bd0a408();
        piStack_f0 = piVar26;
        puStack_e8 = puVar37;
        ppiStack_c0 = ppiVar12;
        ppiStack_b8 = ppiVar13;
        func_0x00010bd0aa50();
        func_0x00010bd0b274();
        func_0x00010bd0b280();
        func_0x00010bd0b904();
        goto LAB_10bcf7c7c;
      }
      func_0x00010b4d1804(&piStack_148,ppiVar35);
      ppuVar25 = (undefined **)(lVar24 + (long)iVar14 * 0x58);
      func_0x00010bd0af80();
      uVar2 = extraout_x11_01;
      ppiVar13 = extraout_x10_01;
      if (cVar6 == cVar5) {
        uVar2 = extraout_x8_08;
        ppiVar13 = extraout_x9_04;
      }
      func_0x00010bcfd620(ppiVar13,uVar2,ppuVar25);
      func_0x00010bd0c2d8();
      if (0 < *(int *)(ppuVar25 + 7)) {
        ppiVar13 = &piStack_148;
        FUN_10bd05380(ppiVar13,piVar26,puVar37,piVar26,puVar37,puStack_178,
                      (long)piStack_170 - (long)puStack_178 >> 2,ppiVar35,ppuVar25);
        func_0x00010bd0b3c0();
        func_0x00010bd0bb40();
      }
      if (((ulong)ppiVar35[1] & 1) == 0) {
        FUN_10bd36610();
      }
      else {
        ppiVar13 = (int **)(((ulong)ppiVar35[1] & 0xfffffffffffffffe) + 8);
      }
      uVar8 = *ppiVar13 == ppiVar13[1];
      if (!(bool)uVar8) {
        puVar19 = (undefined *)unaff_x19[1];
        FUN_10bceca2c(puVar19,"google.protobuf.MessageOptions",0x1e);
        func_0x00010bd0adc4();
        if ((bool)uVar8) {
          func_0x00010bd0be44();
          while ((long)puVar37 < (long)(int)((ulong)((long)ppiVar13[1] - (long)*ppiVar13) >> 4)) {
            lVar24 = *(long *)*unaff_x19;
            FUN_10bd025c0();
            func_0x00010bd0b460();
            FUN_10bcee158();
            if (lVar24 != 0) {
              piStack_148 = *(int **)(lVar24 + 0x10);
              func_0x00010bd0b3cc();
            }
            func_0x00010bd0c700();
          }
        }
      }
      goto LAB_10bcf7c84;
    }
  }
  func_0x00010bd0a454();
LAB_10bcf8238:
  do {
    func_0x00010ae6c700(&piStack_148);
LAB_10bcf8240:
    func_0x00010bd0ae6c();
    func_0x0001088914a0(&ppiStack_c0);
    func_0x00010bd0a968();
    func_0x00010bd0c284(&piStack_148);
  } while( true );
}



/* Entry: 10bcf83d0; end: 10bcf8fe7;  */

void FUN_10bcf83d0(undefined8 *param_1,long param_2,long ****param_3,long *****param_4,
                  long *****param_5)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  char *pcVar14;
  char *pcVar15;
  undefined8 *puVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  ulong uVar19;
  long lVar20;
  int extraout_w8;
  int extraout_w8_00;
  int iVar21;
  undefined8 extraout_x8;
  ulong uVar22;
  long lVar23;
  long ***ppplVar24;
  long *****ppppplVar25;
  undefined8 extraout_x8_00;
  long *****extraout_x8_01;
  undefined8 extraout_x8_02;
  long ****extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  long *******extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong uVar26;
  ulong *extraout_x9;
  long ***ppplVar27;
  long *extraout_x9_00;
  long *extraout_x9_01;
  ulong extraout_x9_02;
  long *extraout_x9_03;
  ulong *puVar28;
  long ****pppplVar29;
  long *******extraout_x10;
  long *******extraout_x10_00;
  long *extraout_x10_01;
  long *******extraout_x10_02;
  long *extraout_x10_03;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  ulong *puVar30;
  undefined **ppuVar31;
  long lVar32;
  long *******ppppppplVar33;
  int iVar34;
  long ******pppppplVar35;
  int iVar36;
  long *******ppppppplVar37;
  undefined4 auStack_188 [6];
  long *****ppppplStack_170;
  long ****pppplStack_168;
  undefined4 uStack_15c;
  long lStack_158;
  long lStack_150;
  long ******pppppplStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long ******pppppplStack_128;
  long ******pppppplStack_120;
  long ****pppplStack_118;
  undefined8 uStack_110;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  long ******pppppplStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_70;
  
  pppplVar29 = param_3;
  func_0x00010bd0a30c();
  if (pppplVar29 == (long ****)0x0) {
    pppplVar29 = *(long *****)(param_1[0x15] + 0x10);
  }
  else {
    pppplVar29 = (long ****)(param_3[1] + 3);
  }
  uStack_70 = extraout_x8;
  FUN_10bcf9384(pppplVar29,*(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc,param_5);
  param_4[1] = pppplVar29;
  func_0x00010bd0ba04(*(undefined8 *)(param_2 + 0x60));
  FUN_10bcf6c84(param_1);
  param_4[2] = (long ****)param_1[0x15];
  param_4[3] = param_3;
  *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) & 0xfc;
  if (*(int *)(param_2 + 0x20) == 0) {
    func_0x00010bd0aa90(param_4[1]);
    func_0x00010bd0aadc();
  }
  uVar22 = 0;
  puVar30 = (ulong *)(param_2 + 0x18);
  uVar26 = *puVar30;
  puVar28 = (ulong *)(uVar26 + 7);
  puVar2 = puVar30;
  if ((uVar26 & 1) != 0) {
    puVar2 = puVar28;
  }
  for (; uVar22 < 0xffff && (long)uVar22 < (long)*(int *)(param_2 + 0x20); uVar22 = uVar22 + 1) {
    puVar3 = puVar30;
    if ((uVar26 & 1) != 0) {
      puVar3 = puVar28;
    }
    if (uVar22 + (long)*(int *)(*puVar2 + 0x28) != (long)*(int *)(*puVar3 + 0x28)) break;
    *(short *)((long)param_4 + 2) = (short)uVar22;
    puVar28 = puVar28 + 1;
  }
  *(int *)((long)param_4 + 4) = *(int *)(param_2 + 0x20);
  ppppplVar25 = param_5;
  FUN_10bcf6838();
  lVar32 = 0;
  param_4[7] = (long ****)ppppplVar25;
  while( true ) {
    lVar23 = (long)*(int *)(param_2 + 0x20);
    cVar7 = SBORROW8(lVar32,lVar23);
    cVar8 = lVar32 - lVar23 < 0;
    bVar9 = lVar32 == lVar23;
    if (lVar23 <= lVar32) break;
    func_0x00010bd0aec8(*puVar30);
    puVar28 = puVar30;
    if (!bVar9) {
      puVar28 = extraout_x9;
    }
    uVar22 = *puVar28;
    pppppplVar35 = (long ******)(param_4[7] + lVar32 * 6);
    ppppplStack_170 = (long *****)pppppplVar35;
    pppplStack_168 = (long ****)param_4;
    func_0x00010bd0c520();
    pppplVar29 = param_4[1];
    ppplVar24 = (long ***)(long)*(char *)((long)pppplVar29 + 0x2f);
    if ((long)ppplVar24 < 0) {
      ppplVar24 = pppplVar29[4];
    }
    ppplVar27 = (long ***)(long)*(char *)((long)pppplVar29 + 0x17);
    if ((long)ppplVar27 < 0) {
      ppplVar27 = pppplVar29[1];
    }
    uVar26 = *(ulong *)(uVar22 + 0x18) & 0xfffffffffffffffc;
    lVar23 = (long)*(char *)(uVar26 + 0x17);
    if (lVar23 < 0) {
      lVar23 = *(long *)(uVar26 + 8);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (auStack_188,lVar23 + ((long)ppplVar24 - (long)ppplVar27));
    pppplVar29 = param_4[1] + 3;
    if (*(char *)((long)param_4[1] + 0x2f) < '\0') {
      pppplVar29 = (long ****)*pppplVar29;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_188,pppplVar29,(long)ppplVar24 - (long)ppplVar27);
    func_0x000107c27fc4(auStack_188,*(ulong *)(uVar22 + 0x18) & 0xfffffffffffffffc);
    ppppplVar25 = param_5;
    FUN_10bcf9478(param_5,*(ulong *)(uVar22 + 0x18) & 0xfffffffffffffffc,auStack_188);
    pppppplVar35[1] = ppppplVar25;
    *(undefined4 *)((long)pppppplVar35 + 4) = *(undefined4 *)(uVar22 + 0x28);
    pppppplVar35[2] = param_4;
    func_0x00010bd0ba04(*(undefined8 *)(uVar22 + 0x18));
    FUN_10bcf6c84(param_1);
    uStack_15c = 3;
    func_0x00010bd0c500();
    func_0x00010bcf1ac8(pppppplVar35,&lStack_158);
    plVar13 = &lStack_158;
    func_0x000107c284b4(plVar13,&uStack_15c);
    lVar20 = lStack_150;
    lVar23 = lStack_158;
    uVar11 = (uint)plVar13;
    ppppplVar25 = pppppplVar35[1];
    ppppppplVar37 = (long *******)(long)*(char *)((long)ppppplVar25 + 0x2f);
    if ((long)ppppppplVar37 < 0) {
      ppppppplVar17 = (long *******)ppppplVar25[3];
      ppppppplVar37 = (long *******)ppppplVar25[4];
    }
    else {
      ppppppplVar17 = (long *******)(ppppplVar25 + 3);
    }
    ppuVar31 = &PTR_PTR_1134063b0;
    if ((*(byte *)(uVar22 + 0x10) >> 1 & 1) != 0) {
      if (*param_5 == (long ****)0x0) {
        func_0x00010bd0a2c4();
        func_0x00010bd0a4c0(&pppppplStack_128);
        goto LAB_10bcf8e88;
      }
      ppppppplVar33 = *(long ********)(uVar22 + 0x20);
      pppplVar29 = param_5[8];
      iVar34 = *(int *)(param_5 + 0x19);
      uVar26 = (ulong)(iVar34 + 1U);
      *(uint *)(param_5 + 0x19) = iVar34 + 1U;
      uVar19 = (ulong)*(uint *)(param_5 + 0x12);
      func_0x00010bd0a424();
      if (uVar26 != 0) {
        func_0x00010bd0a968();
        func_0x00010bd0aba0(&pppppplStack_128);
        goto LAB_10bcf8e88;
      }
      ppppppplVar18 = ppppppplVar33;
      FUN_10bd11730();
      if (((ulong)ppppppplVar18 & 1) == 0) {
        pppppplStack_128 = (long ******)ppppppplVar17;
        pppppplStack_120 = (long ******)ppppppplVar37;
        func_0x00010bd0a408();
        pppppplStack_d0 = (long ******)ppppppplVar17;
        pppppplStack_c8 = (long ******)ppppppplVar37;
        pppppplStack_a0 = (long ******)ppppppplVar18;
        uStack_98 = uVar19;
        func_0x00010bd0ad08(&pppppplStack_140);
        puVar16 = param_1;
        func_0x00010bd0a6a0(param_1,&pppppplStack_140,ppppppplVar33);
        uVar11 = (uint)puVar16;
        func_0x00010bd0b3b8();
        ppuVar31 = &PTR_PTR_1134063b0;
      }
      else {
        func_0x00010bd0c078();
        ppuVar31 = (undefined **)(pppplVar29 + (long)iVar34 * 0xc);
        func_0x00010bd0c4e0();
        uVar5 = extraout_x11;
        ppppppplVar18 = extraout_x10;
        if (cVar8 == cVar7) {
          uVar5 = extraout_x8_00;
          ppppppplVar18 = &pppppplStack_128;
        }
        func_0x00010bcfd620(ppppppplVar18,uVar5,ppuVar31);
        ppppppplVar18 = &pppppplStack_128;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        uVar10 = *(int *)(ppuVar31 + 7) == 1;
        if (0 < *(int *)(ppuVar31 + 7)) {
          ppppppplVar18 = &pppppplStack_128;
          FUN_10bd05380(ppppppplVar18,ppppppplVar17,ppppppplVar37,ppppppplVar17,ppppppplVar37,lVar23
                        ,lVar20 - lVar23 >> 2,ppppppplVar33,ppuVar31);
          func_0x00010bd0c06c();
          func_0x00010bd0b9f4();
        }
        if (((ulong)ppppppplVar33[1] & 1) == 0) {
          FUN_10bd36610();
          ppppppplVar33 = ppppppplVar18;
        }
        else {
          func_0x00010bd0bce8();
        }
        uVar11 = (uint)ppppppplVar18;
        func_0x00010bd0be2c();
        if (!(bool)uVar10) {
          pcVar14 = (char *)param_1[1];
          FUN_10bceca2c(pcVar14,"google.protobuf.EnumValueOptions",0x20);
          pcVar15 = pcVar14;
          func_0x00010bd0adc4();
          uVar11 = (uint)pcVar15;
          if ((bool)uVar10) {
            func_0x00010bd0be44();
            while( true ) {
              uVar11 = (uint)pcVar15;
              func_0x00010bd0af70();
              if (extraout_w8 <= iVar34) break;
              FUN_10bd025c0(*(undefined8 *)*param_1);
              pcVar15 = (char *)*param_1;
              pcVar4 = pcVar14;
              if (*pcVar14 != '\x01') {
                pcVar4 = (char *)0x0;
              }
              FUN_10bcee158(pcVar15,pcVar4,*(undefined4 *)((long)*ppppppplVar33 + lVar20));
              if (pcVar15 != (char *)0x0) {
                pppppplStack_128 = *(long *******)(pcVar15 + 0x10);
                func_0x00010bd0c060();
              }
              func_0x00010bd0c700();
            }
          }
        }
      }
    }
    pppppplVar35[3] = (long *****)ppuVar31;
    func_0x00010bd0ac34();
    pppppplVar35[4] = extraout_x8_01;
    pppppplVar35[5] = extraout_x8_01;
    func_0x00010bd0b9d0();
    *(undefined1 *)pppppplVar35 = 5;
    func_0x00010bd0aa90(pppppplVar35[1]);
    FUN_10bcf6994();
    uVar12 = (uint)param_1[0x16];
    *(undefined1 *)((long)pppppplVar35 + 1) = 6;
    FUN_10bced1a4();
    if (((uVar11 | uVar12 ^ 1) & 1) == 0) {
      pppppplStack_140 = (long ******)0x0;
      uStack_138 = 0;
      uStack_130 = 0;
      if (param_4[3] == (long ****)0x0) {
        ppppppplVar37 = *(long ********)(param_1[0x15] + 0x10);
      }
      else {
        ppppppplVar37 = (long *******)(param_4[3][1] + 3);
      }
      ppppppplVar17 = &pppppplStack_140;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      uVar26 = uStack_138;
      if (-1 < (long)uStack_130) {
        uVar26 = uStack_130 >> 0x38;
      }
      if (uVar26 == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                  (&pppppplStack_140,&UNK_10f8320e1);
      }
      else {
        func_0x00010bd0bff4();
        uStack_98 = uStack_138;
        pppppplStack_a0 = pppppplStack_140;
        if (-1 < (long)uStack_130) {
          uStack_98 = uStack_130 >> 0x38;
          pppppplStack_a0 = (long ******)&pppppplStack_140;
        }
        pppppplStack_128 = (long ******)ppppppplVar17;
        pppppplStack_120 = (long ******)ppppppplVar37;
        func_0x00010bd0bff4();
        pppppplStack_d0 = (long ******)ppppppplVar17;
        pppppplStack_c8 = (long ******)ppppppplVar37;
        func_0x00010bd0ad08(&lStack_158);
        func_0x000107c27b9c(&pppppplStack_140,&lStack_158);
        func_0x00010bd0b3d8();
      }
      pppppplStack_128 = &ppppplStack_170;
      pppppplStack_120 = (long ******)&pppppplStack_140;
      pppplStack_118 = (long ****)&pppplStack_168;
      FUN_10bcf56d0(param_1,pppppplVar35[1] + 3,uVar22,0,&pppppplStack_128,FUN_10bd07c24);
      func_0x00010bd0b3b8();
      pppppplVar35 = (long ******)ppppplStack_170;
    }
    iVar34 = *(int *)((long)pppppplVar35[2][7] + 4);
    if ((*(int *)((long)pppppplVar35 + 4) < iVar34) ||
       ((long)*(short *)((long)pppppplVar35[2] + 2) + (long)iVar34 <
        (long)*(int *)((long)pppppplVar35 + 4))) {
      func_0x00010bced3ac(&pppppplStack_128,param_1[0x16] + 0x58,pppppplVar35);
    }
    func_0x00010bd0b0e8();
    lVar32 = lVar32 + 1;
  }
  iVar34 = *(int *)(param_2 + 0x38);
  *(int *)(param_4 + 8) = iVar34;
  pppplVar29 = *param_5;
  if (pppplVar29 == (long ****)0x0) goto LAB_10bcf8e90;
  iVar36 = *(int *)(param_5 + 0x15);
  uVar11 = iVar36 + iVar34 * 8;
  uVar22 = (ulong)uVar11;
  *(uint *)(param_5 + 0x15) = uVar11;
  func_0x00010bd0a424(uVar22,*(undefined4 *)(param_5 + 0xe));
  if (uVar22 != 0) {
    func_0x00010802bcb8();
    func_0x00010bd0b070();
    func_0x00010bd0a968();
    func_0x00010bd0aba0(&pppppplStack_128);
    goto LAB_10bcf8e88;
  }
  lVar23 = 0;
  param_4[9] = (long ****)((long)pppplVar29 + (long)iVar36);
  plVar13 = (long *)(param_2 + 0x30);
  for (lVar32 = 0; bVar9 = lVar32 == *(int *)(param_2 + 0x38), lVar32 < *(int *)(param_2 + 0x38);
      lVar32 = lVar32 + 1) {
    func_0x00010bd0aec8(*plVar13);
    plVar1 = plVar13;
    if (!bVar9) {
      plVar1 = extraout_x9_00;
    }
    lVar20 = *plVar1;
    pppplVar29 = param_4[9];
    iVar34 = *(int *)(lVar20 + 0x18);
    *(int *)((long)pppplVar29 + lVar23) = iVar34;
    iVar36 = *(int *)(lVar20 + 0x1c);
    ((int *)((long)pppplVar29 + lVar23))[1] = iVar36;
    if (iVar36 < iVar34) {
      func_0x00010bd0aa90(param_4[1]);
      FUN_10bcf5820();
    }
    lVar23 = lVar23 + 8;
  }
  uVar11 = *(uint *)(param_2 + 0x50);
  *(uint *)((long)param_4 + 0x44) = uVar11;
  ppppplVar25 = param_5;
  FUN_10bcf94dc(param_5,uVar11);
  param_4[10] = (long ****)ppppplVar25;
  plVar1 = (long *)(param_2 + 0x48);
  lVar32 = (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) * 8;
  lVar23 = 0;
  while( true ) {
    cVar7 = SBORROW8(lVar32,lVar23);
    cVar8 = lVar32 - lVar23 < 0;
    bVar9 = lVar32 == lVar23;
    if (bVar9) break;
    func_0x00010bd0ae30(*plVar1);
    plVar6 = plVar1;
    if (!bVar9) {
      plVar6 = extraout_x9_01;
    }
    ppppplVar25 = param_5;
    func_0x00010bcf6fb8(param_5,*plVar6);
    *(long ******)((long)param_4[10] + lVar23) = ppppplVar25;
    lVar23 = lVar23 + 8;
  }
  auStack_188[0] = 3;
  func_0x00010bd0c500();
  func_0x00010bcf1a28(param_4,&lStack_158);
  func_0x000107c284b4(&lStack_158,auStack_188);
  pppplVar29 = param_4[1];
  ppppppplVar37 = (long *******)(long)*(char *)((long)pppplVar29 + 0x2f);
  if ((long)ppppppplVar37 < 0) {
    ppppppplVar17 = (long *******)pppplVar29[3];
    ppppppplVar37 = (long *******)pppplVar29[4];
  }
  else {
    ppppppplVar17 = (long *******)(pppplVar29 + 3);
  }
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
LAB_10bcf8bec:
    ppuVar31 = &PTR_PTR_113406410;
LAB_10bcf8bf4:
    param_4[4] = (long ****)ppuVar31;
    func_0x00010bd0ac34();
    param_4[5] = extraout_x8_03;
    param_4[6] = extraout_x8_03;
    func_0x00010bd0b9d0();
    *(undefined1 *)param_4 = 4;
    func_0x00010bd0aa90(param_4[1]);
    FUN_10bcf6994();
    uVar22 = (ulong)*(uint *)(param_2 + 0x38);
    iVar34 = 1;
    for (lVar32 = 0; uVar10 = lVar32 == (int)uVar22, lVar32 < (int)uVar22; lVar32 = lVar32 + 1) {
      func_0x00010bd0b128();
      plVar6 = plVar13;
      if (!(bool)uVar10) {
        plVar6 = extraout_x10_01;
      }
      ppppppplVar37 = (long *******)*plVar6;
      uVar22 = extraout_x8_04;
      iVar36 = iVar34;
      while( true ) {
        iVar21 = (int)uVar22;
        cVar7 = SBORROW4(iVar21,iVar36);
        cVar8 = iVar21 - iVar36 < 0;
        if (iVar21 <= iVar36) break;
        func_0x00010bd0aa7c();
        func_0x00010bd0bdcc();
        uVar22 = extraout_x8_05;
        if ((cVar8 == cVar7) &&
           (*(int *)(ppppppplVar37 + 3) <= *(int *)((long)extraout_x10_02 + 0x1c))) {
          plVar6 = plVar13;
          if ((extraout_x9_02 & 1) != 0) {
            plVar6 = (long *)(extraout_x9_02 + 7 + lVar32 * 8);
          }
          pppppplStack_128 = (long ******)extraout_x10_02;
          pppppplStack_120 = (long ******)ppppppplVar37;
          func_0x00010bd0aed4(param_1,param_4[1] + 3,*plVar6,1,&pppppplStack_128);
          uVar22 = (ulong)*(uint *)(param_2 + 0x38);
        }
        iVar36 = iVar36 + 1;
      }
      iVar34 = iVar34 + 1;
    }
    func_0x000107c3a6bc();
    pppppplStack_120 = (long ******)0x0;
    pppplStack_118 = (long ****)0x0;
    uStack_110 = 0;
    pppppplStack_128 = (long ******)extraout_x8_06;
    func_0x00010bd0b15c(*(undefined8 *)(param_2 + 0x48));
    if (!(bool)uVar10) {
      plVar1 = extraout_x9_03;
    }
    for (lVar32 = (long)*(int *)(param_2 + 0x50) << 3; lVar32 != 0; lVar32 = lVar32 + -8) {
      ppppppplVar37 = (long *******)*plVar1;
      FUN_10bd0579c(&pppppplStack_a0,&pppppplStack_128,ppppppplVar37);
      if ((bStack_90 & 1) == 0) {
        pppppplStack_a0 = (long ******)ppppppplVar37;
        func_0x00010bd0a930(param_1,ppppppplVar37,param_2);
      }
      plVar1 = plVar1 + 1;
    }
    for (lVar32 = 0; uVar10 = lVar32 == *(int *)((long)param_4 + 4),
        lVar32 < *(int *)((long)param_4 + 4); lVar32 = lVar32 + 1) {
      lVar20 = 0;
      pppppplStack_a0 = (long ******)(param_4[7] + lVar32 * 6);
      for (lVar23 = 0; lVar23 < *(int *)(param_4 + 8); lVar23 = lVar23 + 1) {
        iVar34 = *(int *)((long)pppppplStack_a0 + 4);
        if ((*(int *)((long)param_4[9] + lVar20) <= iVar34) &&
           (iVar36 = *(int *)((long)param_4[9] + lVar20 + 4), bVar9 = iVar34 == iVar36,
           iVar34 <= iVar36)) {
          func_0x00010bd0b128(pppppplStack_a0[1]);
          plVar1 = plVar13;
          if (!bVar9) {
            plVar1 = extraout_x10_03;
          }
          pppppplStack_d0 = (long ******)&pppppplStack_a0;
          func_0x00010bd0b938(param_1,extraout_x8_07 + 0x18,*plVar1,1,&pppppplStack_d0);
        }
        lVar20 = lVar20 + 8;
      }
      ppppppplVar37 = &pppppplStack_128;
      FUN_10bcf95f0(ppppppplVar37,pppppplStack_a0[1]);
      if ((int)ppppppplVar37 != 0) {
        func_0x00010bd0a414(pppppplStack_a0[1]);
        pppppplStack_d0 = (long ******)&pppppplStack_a0;
        func_0x00010bd0a930(param_1,extraout_x8_08 + 0x18);
      }
    }
    func_0x00010bd0b9fc();
    func_0x000107c3a64c(uStack_70);
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*param_5 == (long ****)0x0) {
      func_0x00010bd0a2c4();
      func_0x00010bd0a4c0(&pppppplStack_128);
      goto LAB_10bcf8e88;
    }
    ppppppplVar33 = *(long ********)(param_2 + 0x68);
    pppplVar29 = param_5[7];
    iVar34 = *(int *)((long)param_5 + 0xc4);
    uVar11 = iVar34 + 1;
    uVar22 = (ulong)uVar11;
    *(uint *)((long)param_5 + 0xc4) = uVar11;
    uVar26 = (ulong)*(uint *)((long)param_5 + 0x8c);
    func_0x00010bd0a424();
    if (uVar22 == 0) {
      ppppppplVar18 = ppppppplVar33;
      FUN_10bd113d4();
      if (((ulong)ppppppplVar18 & 1) == 0) {
        pppppplStack_128 = (long ******)ppppppplVar17;
        pppppplStack_120 = (long ******)ppppppplVar37;
        func_0x00010bd0a408();
        pppppplStack_d0 = (long ******)ppppppplVar17;
        pppppplStack_c8 = (long ******)ppppppplVar37;
        pppppplStack_a0 = (long ******)ppppppplVar18;
        uStack_98 = uVar26;
        func_0x00010bd0ad08(&pppppplStack_140);
        func_0x00010bd0b274();
        func_0x00010bd0b280(param_1,&pppppplStack_140,ppppppplVar33);
        func_0x00010bd0b3b8();
        goto LAB_10bcf8bec;
      }
      func_0x00010bd0c078();
      ppuVar31 = (undefined **)(pppplVar29 + (long)iVar34 * 0xb);
      func_0x00010bd0c4e0();
      uVar5 = extraout_x11_00;
      ppppppplVar37 = extraout_x10_00;
      if (cVar8 == cVar7) {
        uVar5 = extraout_x8_02;
        ppppppplVar37 = &pppppplStack_128;
      }
      func_0x00010bcfd620(ppppppplVar37,uVar5,ppuVar31);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppplStack_128);
      uVar10 = *(int *)(ppuVar31 + 7) == 1;
      if (0 < *(int *)(ppuVar31 + 7)) {
        func_0x00010bd0b21c(&pppppplStack_128);
        func_0x00010bd0c06c();
        func_0x00010bd0b9f4();
      }
      if (((ulong)ppppppplVar33[1] & 1) == 0) {
        FUN_10bd36610();
      }
      else {
        func_0x00010bd0bce8();
      }
      func_0x00010bd0be2c();
      if (!(bool)uVar10) {
        FUN_10bceca2c(param_1[1],"google.protobuf.EnumOptions",0x1b);
        func_0x00010bd0adc4();
        if ((bool)uVar10) {
          func_0x00010bd0be44();
          while (func_0x00010bd0af70(), (long)ppppppplVar17 < (long)extraout_w8_00) {
            lVar32 = *(long *)*param_1;
            FUN_10bd025c0();
            func_0x00010bd0be50();
            FUN_10bcee158();
            if (lVar32 != 0) {
              pppppplStack_128 = *(long *******)(lVar32 + 0x10);
              func_0x00010bd0c060();
            }
            func_0x00010bd0c700();
          }
        }
      }
      goto LAB_10bcf8bf4;
    }
  }
  func_0x00010bd0a968();
  func_0x00010bd0aba0(&pppppplStack_128);
LAB_10bcf8e88:
  do {
    func_0x00010ae6c700(&pppppplStack_128);
LAB_10bcf8e90:
    func_0x00010bd0ae6c();
    func_0x0001088914a0(&pppppplStack_a0);
    func_0x00010bd0a968();
    func_0x00010bd0c284(&pppppplStack_128);
  } while( true );
}



/* Entry: 10bcf8fe8; end: 10bcf903f;  */

long FUN_10bcf8fe8(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    func_0x00010bd0a350();
    func_0x00010bd0a1c8();
    goto LAB_10bcf902c;
  }
  lVar1 = param_1[0x15];
  func_0x00010bd0a1b0((int)lVar1 + param_2 * 0x58);
  if (param_1 == (long *)0x0) {
    return lVar2 + (int)lVar1;
  }
  do {
    func_0x00010802bcb8();
    func_0x00010bd0a1dc();
LAB_10bcf902c:
    FUN_10bdb2a88();
    func_0x00010bd0aa9c();
  } while( true );
}



/* Entry: 10bcf9040; end: 10bcf904b;  */

/* WARNING: Removing unreachable block (ram,0x00010bcf9d80) */
/* WARNING: Removing unreachable block (ram,0x00010bcf9ee0) */
/* WARNING: Removing unreachable block (ram,0x00010bcf9ee8) */
/* WARNING: Removing unreachable block (ram,0x00010bcf9ef4) */
/* WARNING: Removing unreachable block (ram,0x00010bcf9f00) */
/* WARNING: Removing unreachable block (ram,0x00010bcf9fd4) */
/* WARNING: Removing unreachable block (ram,0x00010bcf9fdc) */
/* WARNING: Removing unreachable block (ram,0x00010bcf9ff8) */
/* WARNING: Removing unreachable block (ram,0x00010bcfa004) */
/* WARNING: Removing unreachable block (ram,0x00010bcfa00c) */
/* WARNING: Removing unreachable block (ram,0x00010bcfa018) */
/* WARNING: Removing unreachable block (ram,0x00010bcfa08c) */

void FUN_10bcf9040(long *param_1,long *param_2,ulong param_3,long param_4,long *param_5,
                  long *param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  undefined8 extraout_x8;
  long *plVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar15;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  byte extraout_w9;
  byte extraout_w9_00;
  byte extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  undefined4 uVar16;
  byte bVar17;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  long unaff_x19;
  long *unaff_x20;
  undefined **unaff_x21;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  byte bVar22;
  undefined4 auStack_188 [7];
  undefined1 uStack_169;
  long *plStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  long *in_stack_fffffffffffffec8;
  ulong uStack_130;
  long *plStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long *plStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_78;
  
  plVar18 = (long *)0x1;
  func_0x00010bd0aa10();
  func_0x00010bd0a30c();
  if (param_4 == 0) {
    plVar14 = *(long **)(unaff_x20[0x15] + 0x10);
  }
  else {
    plVar14 = (long *)(*(long *)(param_4 + 8) + 0x18);
  }
  uStack_78 = extraout_x8;
  if (*param_6 == 0) {
    func_0x00010bd0ae6c();
    func_0x00010bd0befc();
    func_0x00010bd0a968();
    FUN_10bdb2a88(&stack0xfffffffffffffec8);
    goto LAB_10bcfa5fc;
  }
  plVar18 = (long *)(*(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc);
  uVar13 = *(uint *)(unaff_x19 + 0x10);
  uVar20 = *(ulong *)(unaff_x19 + 0x38);
  bVar17 = *(byte *)((long)plVar14 + 0x17);
  uVar21 = plVar14[1];
  if (-1 < (char)bVar17) {
    uVar21 = (ulong)bVar17;
  }
  if (uVar21 == 0) {
    func_0x00010bd0b9e0(&plStack_150);
  }
  else {
    in_stack_fffffffffffffec8 = (long *)*plVar14;
    if (-1 < (char)bVar17) {
      in_stack_fffffffffffffec8 = plVar14;
    }
    func_0x00010bd0a408();
    plStack_e0 = (long *)*plVar18;
    uStack_d8 = plVar18[1];
    if (-1 < (char)*(byte *)((long)plVar18 + 0x17)) {
      plStack_e0 = plVar18;
      uStack_d8 = (ulong)*(byte *)((long)plVar18 + 0x17);
    }
    plStack_b0 = param_2;
    uStack_a8 = param_3;
    func_0x00010bd0b754();
    uStack_130 = uVar21;
  }
  uVar20 = uVar20 & 0xfffffffffffffffc;
  bVar6 = (uVar13 & 0x10) != 0;
  plVar14 = param_6;
  if (bVar6 && uVar20 != 0) {
LAB_10bcf9bf4:
    func_0x00010bd0c500();
    func_0x000107c281e8(&stack0xfffffffffffffec8,plVar18);
    func_0x000107c27940(&stack0xfffffffffffffec8,&plStack_150);
    func_0x00010bd0b9e0(&plStack_b0);
    func_0x00010ae87db0();
    param_1 = plStack_b0;
    uStack_d8 = uStack_a8;
    plStack_e0 = plStack_b0;
    uStack_d0 = uStack_a0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_b0 = (long *)0x0;
    puVar7 = &stack0xfffffffffffffec8;
    FUN_10bd077c0(puVar7,&plStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_e0);
    func_0x00010bd0b8ec();
    puVar8 = &stack0xfffffffffffffec8;
    FUN_10bd077c0(puVar8,&plStack_168);
    func_0x00010bd0b0e8();
    if (bVar6 && uVar20 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_188,uVar20);
    }
    else {
      FUN_10bcfc628(auStack_188,plVar18);
    }
    puVar9 = &stack0xfffffffffffffec8;
    FUN_10bd077c0(puVar9,auStack_188);
    func_0x00010bd0aacc();
    func_0x00010bcfee28(param_6,(long)(uStack_130 - (long)in_stack_fffffffffffffec8) / 0x18);
    func_0x000107276f2c(&uStack_169,in_stack_fffffffffffffec8,uStack_130,plVar14);
    func_0x00010bd0b8b4();
    func_0x000107c278a8(&stack0xfffffffffffffec8);
    bVar17 = (byte)puVar7 & 3;
    bVar22 = (byte)(((uint)puVar8 & 3) << 2);
    unaff_x21 = (undefined **)(ulong)(((uint)puVar9 & 7) << 4);
  }
  else {
    plVar19 = plVar18;
    FUN_10bcfffc8();
    if ((int)plVar19 == 0) {
      FUN_10bcf9478(param_6,plVar18,&plStack_150);
      unaff_x21 = (undefined **)0x0;
      bVar22 = 0;
      bVar17 = 0;
    }
    else {
      if ((int)plVar19 != 1) goto LAB_10bcf9bf4;
      func_0x00010bd0b8ec();
      func_0x00010bcfee28(param_6,3);
      func_0x00010bd0b9e0(&stack0xfffffffffffffec8);
      func_0x000107c27b9c(plVar14,&stack0xfffffffffffffec8);
      uStack_a8 = uStack_148;
      plStack_b0 = plStack_150;
      uStack_a0 = uStack_140;
      plStack_150 = (long *)0x0;
      uStack_148 = 0;
      uStack_140 = 0;
      func_0x000107c27b9c(plVar14 + 3,&plStack_b0);
      uStack_d8 = uStack_160;
      plStack_e0 = plStack_168;
      uStack_d0 = uStack_158;
      func_0x00010bd0c520();
      func_0x000107c27b9c(plVar14 + 6,&plStack_e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_e0);
      func_0x00010bd0b8b4();
      func_0x00010bd0b3d8();
      func_0x00010bd0b0e8();
      bVar17 = 0;
      bVar22 = 8;
      unaff_x21 = (undefined **)0x20;
      param_1 = plStack_168;
    }
  }
  func_0x00010bd0b6a4();
  param_5[1] = (long)plVar14;
  *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) & 0xfc | bVar17;
  *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) & 0xf3 | bVar22;
  *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) & 0x8f | (byte)unaff_x21;
  func_0x00010bd0ba10(*(undefined8 *)(unaff_x19 + 0x18));
  plVar18 = unaff_x20;
  FUN_10bcf6c84();
  param_5[2] = unaff_x20[0x15];
  *(undefined4 *)((long)param_5 + 4) = *(undefined4 *)(unaff_x19 + 0x48);
  *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) & 0xf7 | 8;
  func_0x00010bd0be38();
  *(byte *)(extraout_x8_00 + 1) = extraout_w9 & 0xef;
  *(byte *)((long)param_5 + 1) =
       *(byte *)((long)param_5 + 1) & 0xfd | *(char *)(unaff_x19 + 0x50) << 1;
  if ((*(char *)(unaff_x19 + 0x50) == '\x01') && (*(int *)(unaff_x20[0x15] + 0x20) != 999)) {
    func_0x00010bd0bb58();
    func_0x00010bd0a540();
    FUN_10bcf56d0();
  }
  *(byte *)((long)param_5 + 1) =
       *(byte *)((long)param_5 + 1) & 0xfb | *(byte *)(unaff_x19 + 0x10) >> 2 & 4;
  *(char *)((long)param_5 + 2) = (char)*(undefined4 *)(unaff_x19 + 0x58);
  *(byte *)((long)param_5 + 1) =
       *(byte *)((long)param_5 + 1) & 0x3f | *(char *)(unaff_x19 + 0x54) << 6;
  func_0x00010bd0be38();
  bVar17 = 0x20;
  if (extraout_w9_02 < 0xc0) {
    bVar17 = 0;
  }
  *(byte *)(extraout_x8_01 + 1) = bVar17 | (byte)extraout_w9_02 & 0xdf;
  func_0x00010bd0be38();
  bVar17 = (byte)extraout_w9_03;
  lVar15 = extraout_x8_02;
  if ((extraout_w9_03 & 200) == 0x88) {
    func_0x00010bd0a540();
    FUN_10bcf56d0();
    func_0x00010bd0be38();
    lVar15 = extraout_x8_03;
    bVar17 = extraout_w9_00;
  }
  *(undefined8 *)(lVar15 + 0x50) = 0;
  *(undefined8 *)(lVar15 + 0x18) = 0;
  *(undefined8 *)(lVar15 + 0x20) = 0;
  *(byte *)(lVar15 + 1) = bVar17 & 0xfe | (byte)(*(uint *)(unaff_x19 + 0x10) >> 3) & 1;
  uVar13 = *(uint *)(unaff_x19 + 0x10);
  if (((uVar13 >> 3 & 1) != 0) && ((*(byte *)((long)param_5 + 1) >> 5 & 1) != 0)) {
    func_0x00010bd0a3a8(param_5[1]);
    func_0x00010bd0b728();
    uVar13 = *(uint *)(unaff_x19 + 0x10);
  }
  if ((uVar13 >> 10 & 1) == 0) goto LAB_10bcf9ecc;
  plVar18 = param_5;
  if ((uVar13 >> 3 & 1) == 0) {
    func_0x00010b91adc8();
    switch((int)plVar18) {
    case 1:
    case 3:
    case 6:
      *(undefined4 *)(param_5 + 10) = 0;
      break;
    case 2:
    case 4:
    case 5:
    case 8:
      param_5[10] = 0;
      break;
    case 7:
      *(undefined1 *)(param_5 + 10) = 0;
      break;
    case 9:
      func_0x000107c280b4();
      param_5[10] = (long)&DAT_11383d918;
      break;
    case 10:
      param_5[10] = 0;
    }
    goto LAB_10bcf9ecc;
  }
  plStack_e0 = (long *)0x0;
  func_0x00010b91adc8();
  switch((int)plVar18) {
  case 1:
    func_0x00010bd0ab50();
    if (extraout_w8 < 0) {
      plVar18 = (long *)*plVar18;
    }
    func_0x00010bd0c6e0();
    _strtol();
    goto code_r0x00010bcfa330;
  case 2:
    func_0x00010bd0ab50();
    if (extraout_w8_03 < 0) {
      plVar18 = (long *)*plVar18;
    }
    func_0x00010bd0c6e0();
    _strtoll();
    goto code_r0x00010bcfa4b8;
  case 3:
    func_0x00010bd0ab50();
    if (extraout_w8_01 < 0) {
      plVar18 = (long *)*plVar18;
    }
    func_0x00010bd0c6e0();
    _strtoul();
code_r0x00010bcfa330:
    *(int *)(param_5 + 10) = (int)plVar18;
    break;
  case 4:
    func_0x00010bd0ab50();
    if (extraout_w8_02 < 0) {
      plVar18 = (long *)*plVar18;
    }
    func_0x00010bd0c6e0();
    _strtoull();
code_r0x00010bcfa4b8:
    param_5[10] = (long)plVar18;
    break;
  case 5:
    func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
    if ((int)plVar18 == 0) {
      func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
      if ((int)plVar18 == 0) {
        func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
        if ((int)plVar18 == 0) {
          func_0x00010bd0ab50();
          if (extraout_w8_04 < 0) {
            plVar18 = (long *)*plVar18;
          }
          FUN_10bd3d034();
          param_5[10] = (long)param_1;
          break;
        }
        lVar15 = 0x7ff8000000000000;
      }
      else {
        lVar15 = -0x10000000000000;
      }
    }
    else {
      lVar15 = 0x7ff0000000000000;
    }
    param_5[10] = lVar15;
    break;
  case 6:
    func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
    uVar16 = SUB84(param_1,0);
    if ((int)plVar18 == 0) {
      func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
      if ((int)plVar18 == 0) {
        func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
        if ((int)plVar18 == 0) {
          func_0x00010bd0ab50();
          if (extraout_w8_05 < 0) {
            plVar18 = (long *)*plVar18;
          }
          FUN_10bd3d034();
          FUN_10bd3cfc8();
          *(undefined4 *)(param_5 + 10) = uVar16;
          break;
        }
        uVar16 = 0x7fc00000;
      }
      else {
        uVar16 = 0xff800000;
      }
    }
    else {
      uVar16 = 0x7f800000;
    }
    *(undefined4 *)(param_5 + 10) = uVar16;
    break;
  case 7:
    func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
    if ((int)plVar18 == 0) {
      func_0x00010bd0c61c(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x00010bd0aef4();
      if ((int)plVar18 == 0) {
        func_0x00010bd0a3a8(param_5[1]);
        func_0x00010bd0b728();
      }
      else {
        *(undefined1 *)(param_5 + 10) = 0;
      }
    }
    else {
      *(undefined1 *)(param_5 + 10) = 1;
    }
    break;
  case 8:
    param_5[10] = 0;
    break;
  case 9:
    plVar18 = param_5;
    func_0x00010787827c();
    if ((int)plVar18 != 0xc) {
      plVar18 = param_6;
      func_0x00010bcf6fb8(param_6,*(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc);
      goto code_r0x00010bcfa4b8;
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_b0 = (long *)0x0;
    plVar14 = (long *)(*(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc);
    lVar15 = (long)*(char *)((long)plVar14 + 0x17);
    plVar18 = plVar14;
    if (lVar15 < 0) {
      plVar18 = (long *)*plVar14;
      lVar15 = plVar14[1];
    }
    FUN_10bce1b38(plVar18,lVar15,&plStack_b0);
    if ((int)plVar18 == 0) {
      func_0x00010bd0bb58();
      func_0x00010bd0a3a8();
      func_0x00010bd0b728();
    }
    else {
      plVar14 = param_6;
      func_0x00010bd0b5c8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&stack0xfffffffffffffec8,&plStack_b0);
      plVar18 = plVar14;
      func_0x000107c27b9c(plVar14,&stack0xfffffffffffffec8);
      func_0x00010bd0b3d8();
      param_5[10] = (long)plVar14;
    }
    func_0x00010bd0b8b4();
    break;
  case 10:
    func_0x00010bd0bb58();
    func_0x00010bd0a3a8();
    func_0x00010bd0b728();
    func_0x00010bd0be38();
    *(byte *)(extraout_x8_07 + 1) = extraout_w9_01 & 0xfe;
    param_5[10] = 0;
    break;
  default:
    goto LAB_10bcf9ecc;
  }
  if (plStack_e0 == (long *)0x0) goto LAB_10bcf9ecc;
  uVar21 = *(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc;
  cVar5 = *(char *)(uVar21 + 0x17);
  if (cVar5 < '\0') {
    if (*(long *)(uVar21 + 8) != 0) goto code_r0x00010bcfa5a8;
  }
  else if (cVar5 != '\0') {
code_r0x00010bcfa5a8:
    if ((char)*plStack_e0 == '\0') goto LAB_10bcf9ecc;
  }
  func_0x00010bd0bb58();
  func_0x00010bd0a8c0();
  FUN_10bcf56d0();
LAB_10bcf9ecc:
  iVar2 = *(int *)((long)param_5 + 4);
  cVar5 = iVar2 < 0;
  in_ZR = iVar2 == 0;
  cVar4 = '\0';
  if (iVar2 < 1) {
    func_0x00010bd0c2c4();
    func_0x00010bd0b288();
    if (extraout_x8_04 == 0) {
      plVar18[1] = unaff_x19;
      *(undefined4 *)(plVar18 + 2) = 1;
    }
    func_0x00010bd0bb58();
    func_0x00010bd0a3a8();
    func_0x00010bd0c2e0();
  }
  if ((*(byte *)(unaff_x19 + 0x10) >> 1 & 1) == 0) {
    func_0x00010bd0a3a8(param_5[1]);
    func_0x00010bd0bb08();
  }
  param_5[5] = param_4;
  if (*(char *)(unaff_x19 + 0x10) < '\0') {
    func_0x00010bd0a24c(param_5[1]);
  }
  auStack_188[0] = 8;
  func_0x00010bd0c520();
  func_0x00010bcf1980(param_5,&plStack_168);
  func_0x000107c284b4(&plStack_168,auStack_188);
  lVar15 = param_5[1];
  uVar21 = (ulong)*(char *)(lVar15 + 0x2f);
  if ((long)uVar21 < 0) {
    plVar14 = *(long **)(lVar15 + 0x18);
    uVar21 = *(ulong *)(lVar15 + 0x20);
  }
  else {
    plVar14 = (long *)(lVar15 + 0x18);
  }
  plVar18 = param_5;
  if ((*(byte *)(unaff_x19 + 0x10) >> 5 & 1) != 0) {
    if (*param_6 == 0) {
      func_0x00010bd0a2c4();
      func_0x00010bd0a4c0(&stack0xfffffffffffffec8);
      goto LAB_10bcfa5fc;
    }
    plVar19 = *(long **)(unaff_x19 + 0x40);
    lVar15 = param_6[6];
    iVar2 = (int)param_6[0x18];
    unaff_x21 = (undefined **)(long)iVar2;
    uVar20 = (ulong)(iVar2 + 1U);
    *(uint *)(param_6 + 0x18) = iVar2 + 1U;
    uVar12 = (ulong)*(uint *)(param_6 + 0x11);
    func_0x00010bd0a424();
    if (uVar20 != 0) goto LAB_10bcfa610;
    plVar10 = plVar19;
    FUN_10bd10a2c();
    if (((ulong)plVar10 & 1) != 0) {
      func_0x00010b4d1804(&stack0xfffffffffffffec8,plVar19);
      unaff_x21 = (undefined **)(lVar15 + (long)iVar2 * 0x98);
      func_0x00010bd0c668();
      uVar1 = extraout_x11;
      puVar7 = extraout_x10;
      if (cVar5 == cVar4) {
        uVar1 = extraout_x8_05;
        puVar7 = &stack0xfffffffffffffec8;
      }
      func_0x00010bcfd620(puVar7,uVar1,unaff_x21);
      func_0x00010bd0b3d8();
      in_ZR = *(int *)(unaff_x21 + 0xc) == 1;
      if (0 < *(int *)(unaff_x21 + 0xc)) {
        func_0x00010bd0b21c(&stack0xfffffffffffffec8);
        FUN_10bd05240(unaff_x20 + 0xe,&stack0xfffffffffffffec8);
        FUN_10bd0011c(&stack0xfffffffffffffec8);
      }
      if ((plVar19[1] & 1U) != 0) goto LAB_10bcfa604;
      FUN_10bd36610();
      goto LAB_10bcfa1ac;
    }
    func_0x00010bd0a408();
    plStack_e0 = plVar14;
    uStack_d8 = uVar21;
    plStack_b0 = plVar10;
    uStack_a8 = uVar12;
    func_0x00010bd0b754();
    func_0x00010bd0b274();
    func_0x00010bd0b280();
    func_0x00010bd0b6a4();
  }
  unaff_x21 = &PTR_PTR_113406270;
  uVar3 = in_ZR;
  while( true ) {
    in_ZR = uVar3;
    func_0x00010bd0ac34();
    plVar18[7] = (long)unaff_x21;
    plVar18[8] = extraout_x8_06;
    plVar18[9] = extraout_x8_06;
    func_0x000107c27a18(&plStack_168);
    *(undefined1 *)param_5 = 2;
    func_0x00010bd0a3a8(param_5[1]);
    FUN_10bcf6994();
    func_0x000107c3a64c(uStack_78);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10bcfa610:
    func_0x00010bd0a968();
    func_0x00010bd0aba0(&stack0xfffffffffffffec8);
LAB_10bcfa5fc:
    func_0x00010ae6c700(&stack0xfffffffffffffec8);
LAB_10bcfa604:
    func_0x00010bd0bce8();
LAB_10bcfa1ac:
    func_0x00010bd0be2c();
    uVar3 = in_ZR;
    if (!(bool)in_ZR) {
      FUN_10bceca2c(unaff_x20[1],"google.protobuf.FieldOptions",0x1c);
      func_0x00010bd0adc4();
      uVar3 = 0;
      if ((bool)in_ZR) {
        lVar15 = 0;
        while( true ) {
          func_0x00010bd0af70();
          uVar3 = lVar15 == extraout_w8_00;
          if (extraout_w8_00 <= lVar15) break;
          lVar11 = *(long *)*unaff_x20;
          FUN_10bd025c0();
          func_0x00010bd0be50();
          FUN_10bcee158();
          if (lVar11 != 0) {
            func_0x00010bcf5c68(unaff_x20 + 0x1f,&stack0xfffffffffffffec8);
          }
          lVar15 = lVar15 + 1;
        }
      }
    }
  }
  return;
}



/* Entry: 10bcf904c; end: 10bcf9083;  */

void FUN_10bcf904c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x58;
    FUN_10bd0011c();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10bcf9084; end: 10bcf9383;  */

void FUN_10bcf9084(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong extraout_x8;
  ulong uVar7;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long lVar8;
  ulong extraout_x8_02;
  ulong uVar9;
  ulong extraout_x14;
  long lVar10;
  ulong unaff_x24;
  long *unaff_x25;
  long lVar11;
  long lStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  
  lVar10 = 0;
  lVar2 = param_1;
  lVar6 = param_3;
  func_0x000107c3a6bc();
  lStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_88 = 0;
  lVar11 = lVar2;
  uStack_a0 = extraout_x8;
LAB_10bcf90d8:
  if (*(int *)(param_2 + 0x80) <= lVar10) {
LAB_10bcf9234:
    func_0x00010bd0bc24();
    for (; uVar1 = lVar10 == *(int *)(param_2 + 4), lVar10 < *(int *)(param_2 + 4);
        lVar10 = lVar10 + 1) {
      puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x38) + unaff_x24);
      func_0x00010bd0c0dc();
      lStack_b8 = lVar11;
      puStack_b0 = puVar5;
      if ((lVar11 != 0) && (func_0x00010bd0aea0(*puVar5), (bool)uVar1)) {
        plStack_a8 = unaff_x25;
        func_0x00010bd0a7e8(*(undefined8 *)(param_2 + 8));
      }
      unaff_x24 = unaff_x24 + 0x58;
    }
    func_0x00010bd0bc24();
    for (; uVar1 = lVar10 == *(int *)(param_2 + 0x84), lVar10 < *(int *)(param_2 + 0x84);
        lVar10 = lVar10 + 1) {
      puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x50) + unaff_x24);
      func_0x00010bd0c0dc();
      lStack_b8 = lVar11;
      puStack_b0 = puVar5;
      if ((lVar11 != 0) && (func_0x00010bd0aea0(*puVar5), (bool)uVar1)) {
        plStack_a8 = unaff_x25;
        func_0x00010bd0a7e8(*(undefined8 *)(param_2 + 8));
      }
      unaff_x24 = unaff_x24 + 0x58;
    }
    func_0x00010bd0bc24();
    for (; uVar1 = lVar10 == *(int *)(param_2 + 0x78), lVar10 < *(int *)(param_2 + 0x78);
        lVar10 = lVar10 + 1) {
      puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x40) + unaff_x24);
      func_0x00010bd0c0dc();
      lStack_b8 = lVar11;
      puStack_b0 = puVar5;
      if ((lVar11 != 0) && (func_0x00010bd0aea0(*puVar5), (bool)uVar1)) {
        plStack_a8 = unaff_x25;
        func_0x00010bd0a7e8(*(undefined8 *)(param_2 + 8));
      }
      unaff_x24 = unaff_x24 + 0x38;
    }
    FUN_10bcfce3c(&uStack_a0);
    return;
  }
  lStack_b8 = *(long *)(param_2 + 0x48) + lVar10 * 0x98;
  Hint_Prefetch(uStack_a0,0,2,0);
  unaff_x24 = *(ulong *)(lStack_b8 + 8);
  func_0x00010bd0273c();
  unaff_x25 = plStack_90;
  lVar11 = 0;
  uVar7 = uStack_a0 >> 0xc ^ unaff_x24 >> 7;
  do {
    func_0x000107c3a6b8();
    uVar9 = extraout_x8_00 & 0x8080808080808080;
    while (uVar9 != 0) {
      func_0x00010bd0c580();
      uVar9 = (uVar7 & (ulong)unaff_x25) + (extraout_x8_01 >> 3) & (ulong)unaff_x25;
      lVar8 = *(long *)(lStack_98 + uVar9 * 8);
      uVar1 = lVar8 == lStack_b8;
      param_1 = lVar2;
      if ((bool)uVar1) {
LAB_10bcf91a0:
        if (((*(byte *)(*(long *)(lVar8 + 0x20) + 0x53) & 1) == 0) &&
           (func_0x00010bd0aea0(lStack_b8), !(bool)uVar1)) goto LAB_10bcf91c4;
        plStack_a8 = &lStack_b8;
        func_0x00010bd0b148(lVar2,*(long *)(param_2 + 8) + 0x18,param_3,param_4,&plStack_a8,
                            FUN_10bd08dc4);
        lVar11 = lVar2;
        goto LAB_10bcf9234;
      }
      uVar3 = *(undefined8 *)(lVar8 + 8);
      func_0x000107c278d0(uVar3,*(undefined8 *)(lStack_b8 + 8));
      if ((int)uVar3 != 0) {
        lVar8 = *(long *)(lStack_98 + uVar9 * 8);
        goto LAB_10bcf91a0;
      }
      uVar9 = extraout_x14 - 1 & extraout_x14;
    }
    func_0x000107c3a674();
    if ((extraout_x8_02 & 1) != 0) break;
    lVar11 = lVar11 + 8;
    uVar7 = lVar11 + (uVar7 & (ulong)unaff_x25);
  } while( true );
  puVar4 = &uStack_a0;
  FUN_10bd08ce0(puVar4,unaff_x24);
  *(long *)(lStack_98 + (long)puVar4 * 8) = lStack_b8;
LAB_10bcf91c4:
  func_0x00010bd0ab20(*(undefined8 *)(lVar6 + 0x30));
  lVar11 = param_1;
  FUN_10bcf9084();
  lVar10 = lVar10 + 1;
  goto LAB_10bcf90d8;
}



/* Entry: 10bcf9384; end: 10bcf9477;  */

long * FUN_10bcf9384(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *unaff_x20;
  undefined1 auStack_118 [24];
  long alStack_d0 [9];
  long lStack_88;
  undefined8 uStack_80;
  long lStack_58;
  ulong uStack_50;
  
  plVar4 = alStack_d0;
  func_0x00010bd0c5d4();
  func_0x00010bd0a0d0();
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar3 = bVar2 == 0;
  uVar1 = param_1[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 == 0) {
    func_0x00010bd0b5c0();
    func_0x00010bd0b4d0(&lStack_58);
    func_0x00010bd0c13c();
    func_0x00010bd0b4d0(&lStack_88);
    func_0x00010bd0bf04(unaff_x20 + 3);
    func_0x00010bd0b2ec();
    plVar4 = &lStack_58;
  }
  else {
    uVar3 = bVar2 == 0;
    lStack_58 = *param_1;
    if (-1 < (char)bVar2) {
      lStack_58 = (long)param_1;
    }
    uStack_50 = uVar1;
    func_0x00010bd0a408();
    lStack_88 = (long)param_1;
    uStack_80 = param_2;
    func_0x00010bd0a718();
    unaff_x20 = &lStack_58;
    func_0x00010bd0b320(alStack_d0);
    func_0x00010bd0b238();
    FUN_10bcf9478();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000107c3a63c();
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    plVar5 = &lStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar5);
    func_0x00010bd0a974();
    func_0x00010bd0b108();
    func_0x00010bd0b5c0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_118,unaff_x20);
    func_0x00010bd0c11c();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    func_0x00010bd0bac8(plVar5 + 3);
    func_0x00010bd0aaa4();
    func_0x00010bd0aacc();
    return plVar5;
  }
  return unaff_x20;
}



/* Entry: 10bcf9478; end: 10bcf94db;  */

long FUN_10bcf9478(long param_1)

{
  undefined8 *unaff_x19;
  undefined1 auStack_48 [24];
  
  func_0x00010bd0b108();
  func_0x00010bd0b5c0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_48);
  func_0x00010bd0c11c();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  func_0x00010bd0bac8(param_1 + 0x18);
  func_0x00010bd0aaa4();
  func_0x00010bd0aacc();
  return param_1;
}



/* Entry: 10bcf94dc; end: 10bcf9597;  */

long FUN_10bcf94dc(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    func_0x00010bd0a350();
    func_0x00010bd0a1c8();
    goto LAB_10bcf951c;
  }
  lVar1 = param_1[0x15];
  func_0x00010bd0a1b0((int)lVar1 + param_2 * 8);
  if (param_1 == (long *)0x0) {
    return lVar2 + (int)lVar1;
  }
  do {
    func_0x00010802bcb8();
    func_0x00010bd0a1dc();
LAB_10bcf951c:
    FUN_10bdb2a88();
    func_0x00010bd0aa9c();
  } while( true );
}



/* Entry: 10bcf9598; end: 10bcf95ef;  */

void FUN_10bcf9598(uint *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
  if (0x1ffffffe < (int)param_4) {
    param_4 = 0x1fffffff;
  }
  param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  if (0x1ffffffe < (int)param_3) {
    param_3 = 0x1fffffff;
  }
  uVar1 = *param_1 + (param_4 - param_3 & ((int)(param_4 - param_3) >> 0x1f ^ 0xffffffffU));
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if (0x1ffffffe < (int)uVar1) {
    uVar1 = 0x1fffffff;
  }
  *param_1 = uVar1;
  if (*(long *)(param_1 + 2) != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 2) = param_2;
  param_1[4] = 1;
  return;
}



/* Entry: 10bcf95f0; end: 10bcf96af;  */

bool FUN_10bcf95f0(void)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong unaff_x19;
  ulong *unaff_x20;
  
  func_0x00010bd0a704();
  func_0x000107c3a6b0();
  func_0x000107c284ac();
  func_0x00010bd0a4e0(*unaff_x20 >> 0xc);
  do {
    func_0x00010bd0addc();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x000107c3a6e4();
      uVar1 = unaff_x19;
      FUN_10bd058a8();
      if ((uVar1 & 1) != 0) goto LAB_10bcf9688;
      func_0x000107c3a6dc();
    }
    func_0x00010bd0a514();
  } while ((extraout_x8_00 & 1) == 0);
LAB_10bcf9688:
  return (extraout_x8 & 0x8080808080808080) != 0;
}



/* Entry: 10bcf96b0; end: 10bcf9a1f;  */

void FUN_10bcf96b0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined1 in_ZR;
  char cVar4;
  char cVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  byte bVar11;
  uint uVar12;
  ulong extraout_x8;
  long lVar13;
  undefined8 extraout_x8_00;
  ulong uVar14;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  undefined8 *extraout_x9;
  byte *pbVar15;
  long extraout_x9_00;
  undefined8 ****extraout_x10;
  ulong extraout_x10_00;
  undefined8 extraout_x11;
  long extraout_x11_00;
  ulong uVar16;
  ulong uVar17;
  undefined8 ****ppppuVar18;
  undefined8 *puVar19;
  undefined8 unaff_x30;
  byte bStack_100;
  undefined7 uStack_ff;
  long lStack_f8;
  char cStack_e9;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  byte bStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  
  func_0x00010bd0c7e4();
  func_0x000107c3a6bc();
  lStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puVar10 = (undefined8 *)(param_3 + 0x18);
  uStack_c0 = extraout_x8;
  func_0x00010bd0b15c(*puVar10);
  puVar19 = puVar10;
  if (!(bool)in_ZR) {
    puVar19 = extraout_x9;
  }
  puVar10 = puVar19 + *(int *)(puVar10 + 1);
  do {
    if (puVar19 == puVar10) {
      FUN_10bcf9a20(&uStack_c0);
      func_0x00010bd0c7fc(unaff_x30);
      return;
    }
    ppppuVar18 = (undefined8 ****)*puVar19;
    FUN_10bcfc628(&pppuStack_a0,(ulong)ppppuVar18[3] & 0xfffffffffffffffc);
    if ((param_5 == 0) || ((*(byte *)(ppppuVar18 + 2) >> 4 & 1) == 0)) {
LAB_10bcf9754:
      bStack_c8 = 0;
      pppuStack_d8 = pppuStack_98;
      pppuStack_e0 = pppuStack_a0;
      pppuStack_d0 = pppuStack_90;
      pppuStack_a0 = (undefined8 ****)0x0;
      pppuStack_98 = (undefined8 ****)0x0;
      pppuStack_90 = (undefined8 ****)0x0;
      pppuStack_e8 = ppppuVar18;
    }
    else {
      uVar6 = (ulong)ppppuVar18[7] & 0xfffffffffffffffc;
      func_0x000107c278d0(uVar6,&pppuStack_a0);
      if ((uVar6 & 1) != 0) goto LAB_10bcf9754;
      pppuStack_e8 = ppppuVar18;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&pppuStack_e0,(ulong)ppppuVar18[7] & 0xfffffffffffffffc);
      bStack_c8 = 1;
    }
    func_0x00010bd0b868();
    uVar12 = (uint)bStack_c8;
    cVar4 = SBORROW4(uVar12,1);
    cVar5 = (int)(uVar12 - 1) < 0;
    if (uVar12 == 1) {
      func_0x00010bd0b4d0(&bStack_100);
      if ((long)cStack_e9 < 0) {
        if (lStack_f8 != 0) {
          pbVar15 = (byte *)CONCAT71(uStack_ff,bStack_100);
          uVar12 = (uint)*pbVar15;
          cVar4 = SBORROW4(uVar12,0x5b);
          cVar5 = (int)(uVar12 - 0x5b) < 0;
          lVar13 = lStack_f8;
          if (uVar12 == 0x5b) goto LAB_10bcf97c8;
        }
LAB_10bcf97f8:
        func_0x00010bd0afec();
        goto LAB_10bcf97fc;
      }
      if (cStack_e9 == '\0') goto LAB_10bcf97f8;
      uVar12 = (uint)bStack_100;
      cVar4 = SBORROW4(uVar12,0x5b);
      cVar5 = (int)(uVar12 - 0x5b) < 0;
      if (uVar12 != 0x5b) goto LAB_10bcf97f8;
      pbVar15 = &bStack_100;
      lVar13 = (long)cStack_e9;
LAB_10bcf97c8:
      bVar11 = pbVar15[lVar13 + -1];
      func_0x00010bd0afec();
      uVar12 = (uint)bVar11;
      cVar4 = SBORROW4(uVar12,0x5d);
      cVar5 = (int)(uVar12 - 0x5d) < 0;
      if (uVar12 != 0x5d) goto LAB_10bcf97fc;
      pppuStack_98 = &pppuStack_e8;
      pppuStack_a0 = ppppuVar18;
      func_0x00010bd0b50c();
      FUN_10bcf56d0();
    }
    else {
LAB_10bcf97fc:
      Hint_Prefetch(uStack_c0,0,2,0);
      func_0x00010bd0c794(uStack_c0);
      uVar1 = extraout_x11;
      ppppuVar2 = extraout_x10;
      if (cVar5 == cVar4) {
        uVar1 = extraout_x8_00;
        ppppuVar2 = &pppuStack_e0;
      }
      puVar7 = &uStack_c0;
      func_0x000107c284ac(puVar7,ppppuVar2,uVar1);
      uVar6 = uStack_b0;
      uVar14 = uStack_c0 >> 0xc ^ (ulong)puVar7 >> 7;
      while( true ) {
        func_0x000107c3a6b8();
        for (uVar16 = extraout_x8_01 & 0x8080808080808080; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16
            ) {
          uVar17 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = (uVar14 & uVar6) + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar6
          ;
          func_0x00010bd0c770(lStack_b8 + uVar17 * 0x40);
          ppppuVar2 = (undefined8 ****)pppuStack_d8;
          ppppuVar3 = (undefined8 ****)pppuStack_e0;
          if (-1 < (long)pppuStack_d0) {
            ppppuVar2 = (undefined8 ****)((ulong)pppuStack_d0 >> 0x38);
            ppppuVar3 = &pppuStack_e0;
          }
          uVar8 = extraout_x10_00;
          if (-1 < extraout_x9_00) {
            uVar8 = extraout_x8_02;
          }
          lVar13 = extraout_x11_00;
          if (-1 < (int)extraout_x9_00) {
            lVar13 = extraout_x9_00;
          }
          func_0x000107c27944(uVar8,lVar13,ppppuVar3,ppppuVar2);
          if ((uVar8 & 1) != 0) {
            lVar13 = lStack_b8 + uVar17 * 0x40;
            if (((param_5 ^ 1 | (uint)bStack_c8) & 1) == 0) {
              if (*(char *)(lVar13 + 0x38) != '\x01') goto LAB_10bcf9950;
              bVar11 = 1;
            }
            else if ((bStack_c8 & 1) == 0) {
              bVar11 = 1;
            }
            else {
              bVar11 = *(byte *)(lVar13 + 0x38) ^ 1;
            }
            pppuStack_a0 = &pppuStack_e8;
            pppuStack_98 = (undefined8 ****)(lVar13 + 0x18);
            pppuStack_90 = ppppuVar18;
            if ((*(int *)(*(long *)(param_4 + 0x30) + 0x44) == 2) && ((bVar11 & 1) != 0)) {
              func_0x00010bd0b50c();
              FUN_10bcf58f4();
            }
            else {
              func_0x00010bd0b50c();
              FUN_10bcf56d0();
            }
            goto LAB_10bcf9950;
          }
        }
        func_0x000107c3a674();
        if ((extraout_x8_03 & 1) != 0) break;
        func_0x00010bd0c74c();
        uVar14 = extraout_x8_04;
      }
      puVar9 = &uStack_c0;
      FUN_10bd074ec(puVar9,puVar7);
      lVar13 = lStack_b8 + (long)puVar9 * 0x40;
      func_0x00010bd0b4d0(lVar13);
      *(undefined8 ****)(lVar13 + 0x18) = pppuStack_e8;
      func_0x00010bd0b4d0(lVar13 + 0x20);
      *(byte *)(lVar13 + 0x38) = bStack_c8;
    }
LAB_10bcf9950:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_e0);
    puVar19 = puVar19 + 1;
  } while( true );
}



/* Entry: 10bcf9a20; end: 10bcf9a73;  */

undefined8 * FUN_10bcf9a20(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        func_0x00010bd00194(lVar2);
      }
      pcVar1 = pcVar1 + 1;
      lVar2 = lVar2 + 0x40;
    }
    func_0x00010bd0a3fc();
  }
  return param_1;
}



/* Entry: 10bcf9a74; end: 10bcfa6ef;  */

void FUN_10bcf9a74(long *param_1,long *param_2,ulong param_3,long param_4,long *param_5,
                  long *param_6,long *param_7)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 in_ZR;
  char cVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  undefined8 extraout_x8;
  long *plVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar15;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  byte extraout_w9;
  byte extraout_w9_00;
  byte extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint uVar16;
  undefined4 uVar17;
  byte bVar18;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  long unaff_x19;
  long *unaff_x20;
  undefined **unaff_x21;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  byte bVar22;
  undefined4 auStack_188 [7];
  undefined1 uStack_169;
  long *plStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  long *in_stack_fffffffffffffec8;
  ulong uStack_130;
  long *plStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long *plStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_78;
  
  func_0x00010bd0aa10();
  func_0x00010bd0a30c();
  if (param_4 == 0) {
    plVar14 = *(long **)(unaff_x20[0x15] + 0x10);
  }
  else {
    plVar14 = (long *)(*(long *)(param_4 + 8) + 0x18);
  }
  uStack_78 = extraout_x8;
  if (*param_7 == 0) {
    func_0x00010bd0ae6c();
    func_0x00010bd0befc();
    func_0x00010bd0a968();
    FUN_10bdb2a88(&stack0xfffffffffffffec8);
    goto LAB_10bcfa5fc;
  }
  plVar19 = (long *)(*(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc);
  uVar16 = *(uint *)(unaff_x19 + 0x10);
  uVar20 = *(ulong *)(unaff_x19 + 0x38);
  bVar18 = *(byte *)((long)plVar14 + 0x17);
  uVar21 = plVar14[1];
  if (-1 < (char)bVar18) {
    uVar21 = (ulong)bVar18;
  }
  if (uVar21 == 0) {
    func_0x00010bd0b9e0(&plStack_150);
  }
  else {
    in_stack_fffffffffffffec8 = (long *)*plVar14;
    if (-1 < (char)bVar18) {
      in_stack_fffffffffffffec8 = plVar14;
    }
    func_0x00010bd0a408();
    plStack_e0 = (long *)*plVar19;
    uStack_d8 = plVar19[1];
    if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
      plStack_e0 = plVar19;
      uStack_d8 = (ulong)*(byte *)((long)plVar19 + 0x17);
    }
    plStack_b0 = param_2;
    uStack_a8 = param_3;
    func_0x00010bd0b754();
    uStack_130 = uVar21;
  }
  uVar20 = uVar20 & 0xfffffffffffffffc;
  bVar7 = (uVar16 & 0x10) != 0;
  plVar14 = param_7;
  if (bVar7 && uVar20 != 0) {
LAB_10bcf9bf4:
    func_0x00010bd0c500();
    func_0x000107c281e8(&stack0xfffffffffffffec8,plVar19);
    func_0x000107c27940(&stack0xfffffffffffffec8,&plStack_150);
    func_0x00010bd0b9e0(&plStack_b0);
    func_0x00010ae87db0();
    param_1 = plStack_b0;
    uStack_d8 = uStack_a8;
    plStack_e0 = plStack_b0;
    uStack_d0 = uStack_a0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_b0 = (long *)0x0;
    puVar9 = &stack0xfffffffffffffec8;
    FUN_10bd077c0(puVar9,&plStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_e0);
    func_0x00010bd0b8ec();
    puVar10 = &stack0xfffffffffffffec8;
    FUN_10bd077c0(puVar10,&plStack_168);
    func_0x00010bd0b0e8();
    if (bVar7 && uVar20 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_188,uVar20);
    }
    else {
      FUN_10bcfc628(auStack_188,plVar19);
    }
    puVar11 = &stack0xfffffffffffffec8;
    FUN_10bd077c0(puVar11,auStack_188);
    func_0x00010bd0aacc();
    func_0x00010bcfee28(param_7,(long)(uStack_130 - (long)in_stack_fffffffffffffec8) / 0x18);
    func_0x000107276f2c(&uStack_169,in_stack_fffffffffffffec8,uStack_130,plVar14);
    func_0x00010bd0b8b4();
    func_0x000107c278a8(&stack0xfffffffffffffec8);
    bVar18 = (byte)puVar9 & 3;
    bVar22 = (byte)(((uint)puVar10 & 3) << 2);
    unaff_x21 = (undefined **)(ulong)(((uint)puVar11 & 7) << 4);
  }
  else {
    plVar8 = plVar19;
    FUN_10bcfffc8();
    if ((int)plVar8 == 0) {
      FUN_10bcf9478(param_7,plVar19,&plStack_150);
      unaff_x21 = (undefined **)0x0;
      bVar22 = 0;
      bVar18 = 0;
    }
    else {
      if ((int)plVar8 != 1) goto LAB_10bcf9bf4;
      func_0x00010bd0b8ec();
      func_0x00010bcfee28(param_7,3);
      func_0x00010bd0b9e0(&stack0xfffffffffffffec8);
      func_0x000107c27b9c(plVar14,&stack0xfffffffffffffec8);
      uStack_a8 = uStack_148;
      plStack_b0 = plStack_150;
      uStack_a0 = uStack_140;
      plStack_150 = (long *)0x0;
      uStack_148 = 0;
      uStack_140 = 0;
      func_0x000107c27b9c(plVar14 + 3,&plStack_b0);
      uStack_d8 = uStack_160;
      plStack_e0 = plStack_168;
      uStack_d0 = uStack_158;
      func_0x00010bd0c520();
      func_0x000107c27b9c(plVar14 + 6,&plStack_e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_e0);
      func_0x00010bd0b8b4();
      func_0x00010bd0b3d8();
      func_0x00010bd0b0e8();
      bVar18 = 0;
      bVar22 = 8;
      unaff_x21 = (undefined **)0x20;
      param_1 = plStack_168;
    }
  }
  func_0x00010bd0b6a4();
  param_5[1] = (long)plVar14;
  *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) & 0xfc | bVar18;
  *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) & 0xf3 | bVar22;
  *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) & 0x8f | (byte)unaff_x21;
  func_0x00010bd0ba10(*(undefined8 *)(unaff_x19 + 0x18));
  plVar14 = unaff_x20;
  FUN_10bcf6c84();
  param_5[2] = unaff_x20[0x15];
  *(undefined4 *)((long)param_5 + 4) = *(undefined4 *)(unaff_x19 + 0x48);
  bVar18 = 8;
  if ((int)param_6 == 0) {
    bVar18 = 0;
  }
  *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) & 0xf7 | bVar18;
  func_0x00010bd0be38();
  *(byte *)(extraout_x8_00 + 1) = extraout_w9 & 0xef;
  *(byte *)((long)param_5 + 1) =
       *(byte *)((long)param_5 + 1) & 0xfd | *(char *)(unaff_x19 + 0x50) << 1;
  if ((*(char *)(unaff_x19 + 0x50) == '\x01') && (*(int *)(unaff_x20[0x15] + 0x20) != 999)) {
    func_0x00010bd0bb58();
    func_0x00010bd0a540();
    FUN_10bcf56d0();
  }
  *(byte *)((long)param_5 + 1) =
       *(byte *)((long)param_5 + 1) & 0xfb | *(byte *)(unaff_x19 + 0x10) >> 2 & 4;
  *(char *)((long)param_5 + 2) = (char)*(undefined4 *)(unaff_x19 + 0x58);
  *(byte *)((long)param_5 + 1) =
       *(byte *)((long)param_5 + 1) & 0x3f | *(char *)(unaff_x19 + 0x54) << 6;
  func_0x00010bd0be38();
  bVar18 = 0x20;
  if (extraout_w9_02 < 0xc0) {
    bVar18 = 0;
  }
  *(byte *)(extraout_x8_01 + 1) = bVar18 | (byte)extraout_w9_02 & 0xdf;
  func_0x00010bd0be38();
  bVar18 = (byte)extraout_w9_03;
  lVar15 = extraout_x8_02;
  if ((extraout_w9_03 & 200) == 0x88) {
    func_0x00010bd0a540();
    FUN_10bcf56d0();
    func_0x00010bd0be38();
    lVar15 = extraout_x8_03;
    bVar18 = extraout_w9_00;
  }
  *(undefined8 *)(lVar15 + 0x50) = 0;
  *(undefined8 *)(lVar15 + 0x18) = 0;
  *(undefined8 *)(lVar15 + 0x20) = 0;
  *(byte *)(lVar15 + 1) = bVar18 & 0xfe | (byte)(*(uint *)(unaff_x19 + 0x10) >> 3) & 1;
  uVar16 = *(uint *)(unaff_x19 + 0x10);
  if (((uVar16 >> 3 & 1) != 0) && ((*(byte *)((long)param_5 + 1) >> 5 & 1) != 0)) {
    func_0x00010bd0a3a8(param_5[1]);
    func_0x00010bd0b728();
    uVar16 = *(uint *)(unaff_x19 + 0x10);
  }
  if ((uVar16 >> 10 & 1) == 0) goto LAB_10bcf9ecc;
  plVar14 = param_5;
  if ((uVar16 >> 3 & 1) == 0) {
    func_0x00010b91adc8();
    switch((int)plVar14) {
    case 1:
    case 3:
    case 6:
      *(undefined4 *)(param_5 + 10) = 0;
      break;
    case 2:
    case 4:
    case 5:
    case 8:
      param_5[10] = 0;
      break;
    case 7:
      *(undefined1 *)(param_5 + 10) = 0;
      break;
    case 9:
      func_0x000107c280b4();
      param_5[10] = (long)&DAT_11383d918;
      break;
    case 10:
      param_5[10] = 0;
    }
    goto LAB_10bcf9ecc;
  }
  plStack_e0 = (long *)0x0;
  func_0x00010b91adc8();
  switch((int)plVar14) {
  case 1:
    func_0x00010bd0ab50();
    if (extraout_w8 < 0) {
      plVar14 = (long *)*plVar14;
    }
    func_0x00010bd0c6e0();
    _strtol();
    goto code_r0x00010bcfa330;
  case 2:
    func_0x00010bd0ab50();
    if (extraout_w8_03 < 0) {
      plVar14 = (long *)*plVar14;
    }
    func_0x00010bd0c6e0();
    _strtoll();
    goto code_r0x00010bcfa4b8;
  case 3:
    func_0x00010bd0ab50();
    if (extraout_w8_01 < 0) {
      plVar14 = (long *)*plVar14;
    }
    func_0x00010bd0c6e0();
    _strtoul();
code_r0x00010bcfa330:
    *(int *)(param_5 + 10) = (int)plVar14;
    break;
  case 4:
    func_0x00010bd0ab50();
    if (extraout_w8_02 < 0) {
      plVar14 = (long *)*plVar14;
    }
    func_0x00010bd0c6e0();
    _strtoull();
code_r0x00010bcfa4b8:
    param_5[10] = (long)plVar14;
    break;
  case 5:
    func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
    if ((int)plVar14 == 0) {
      func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
      if ((int)plVar14 == 0) {
        func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
        if ((int)plVar14 == 0) {
          func_0x00010bd0ab50();
          if (extraout_w8_04 < 0) {
            plVar14 = (long *)*plVar14;
          }
          FUN_10bd3d034();
          param_5[10] = (long)param_1;
          break;
        }
        lVar15 = 0x7ff8000000000000;
      }
      else {
        lVar15 = -0x10000000000000;
      }
    }
    else {
      lVar15 = 0x7ff0000000000000;
    }
    param_5[10] = lVar15;
    break;
  case 6:
    func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
    uVar17 = SUB84(param_1,0);
    if ((int)plVar14 == 0) {
      func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
      if ((int)plVar14 == 0) {
        func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
        if ((int)plVar14 == 0) {
          func_0x00010bd0ab50();
          if (extraout_w8_05 < 0) {
            plVar14 = (long *)*plVar14;
          }
          FUN_10bd3d034();
          FUN_10bd3cfc8();
          *(undefined4 *)(param_5 + 10) = uVar17;
          break;
        }
        uVar17 = 0x7fc00000;
      }
      else {
        uVar17 = 0xff800000;
      }
    }
    else {
      uVar17 = 0x7f800000;
    }
    *(undefined4 *)(param_5 + 10) = uVar17;
    break;
  case 7:
    func_0x00010bd0aef4(*(undefined8 *)(unaff_x19 + 0x30));
    if ((int)plVar14 == 0) {
      func_0x00010bd0c61c(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x00010bd0aef4();
      if ((int)plVar14 == 0) {
        func_0x00010bd0a3a8(param_5[1]);
        func_0x00010bd0b728();
      }
      else {
        *(undefined1 *)(param_5 + 10) = 0;
      }
    }
    else {
      *(undefined1 *)(param_5 + 10) = 1;
    }
    break;
  case 8:
    param_5[10] = 0;
    break;
  case 9:
    plVar14 = param_5;
    func_0x00010787827c();
    if ((int)plVar14 != 0xc) {
      plVar14 = param_7;
      func_0x00010bcf6fb8(param_7,*(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc);
      goto code_r0x00010bcfa4b8;
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_b0 = (long *)0x0;
    plVar19 = (long *)(*(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc);
    lVar15 = (long)*(char *)((long)plVar19 + 0x17);
    plVar14 = plVar19;
    if (lVar15 < 0) {
      plVar14 = (long *)*plVar19;
      lVar15 = plVar19[1];
    }
    FUN_10bce1b38(plVar14,lVar15,&plStack_b0);
    if ((int)plVar14 == 0) {
      func_0x00010bd0bb58();
      func_0x00010bd0a3a8();
      func_0x00010bd0b728();
    }
    else {
      plVar19 = param_7;
      func_0x00010bd0b5c8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&stack0xfffffffffffffec8,&plStack_b0);
      plVar14 = plVar19;
      func_0x000107c27b9c(plVar19,&stack0xfffffffffffffec8);
      func_0x00010bd0b3d8();
      param_5[10] = (long)plVar19;
    }
    func_0x00010bd0b8b4();
    break;
  case 10:
    func_0x00010bd0bb58();
    func_0x00010bd0a3a8();
    func_0x00010bd0b728();
    func_0x00010bd0be38();
    *(byte *)(extraout_x8_08 + 1) = extraout_w9_01 & 0xfe;
    param_5[10] = 0;
    break;
  default:
    goto LAB_10bcf9ecc;
  }
  if (plStack_e0 != (long *)0x0) {
    uVar21 = *(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc;
    cVar6 = *(char *)(uVar21 + 0x17);
    if (cVar6 < '\0') {
      if (*(long *)(uVar21 + 8) != 0) goto code_r0x00010bcfa5a8;
    }
    else if (cVar6 != '\0') {
code_r0x00010bcfa5a8:
      if ((char)*plStack_e0 == '\0') goto LAB_10bcf9ecc;
    }
    func_0x00010bd0bb58();
    func_0x00010bd0a8c0();
    FUN_10bcf56d0();
  }
LAB_10bcf9ecc:
  uVar16 = *(uint *)((long)param_5 + 4);
  cVar6 = (int)uVar16 < 0;
  in_ZR = uVar16 == 0;
  cVar5 = '\0';
  if ((int)uVar16 < 1) {
    func_0x00010bd0c2c4();
    func_0x00010bd0b288();
    if (extraout_x8_05 == 0) {
      plVar14[1] = unaff_x19;
      *(undefined4 *)(plVar14 + 2) = 1;
    }
    func_0x00010bd0bb58();
    func_0x00010bd0a3a8();
    func_0x00010bd0c2e0();
    if ((int)param_6 != 0) goto LAB_10bcf9f90;
  }
  else {
    if (((ulong)param_6 & 1) != 0) {
LAB_10bcf9f90:
      if ((*(byte *)(unaff_x19 + 0x10) >> 1 & 1) == 0) {
        func_0x00010bd0a3a8(param_5[1]);
        func_0x00010bd0bb08();
      }
      param_5[5] = param_4;
      if (*(char *)(unaff_x19 + 0x10) < '\0') {
        func_0x00010bd0a24c(param_5[1]);
      }
      goto LAB_10bcfa0b0;
    }
    if (uVar16 >> 0x1d != 0) {
      func_0x00010bd0c2c4();
      func_0x00010bd0b288();
      if (extraout_x8_04 == 0) {
        plVar14[1] = unaff_x19;
        *(undefined4 *)(plVar14 + 2) = 1;
      }
      func_0x00010bd0bb58();
      func_0x00010bd0a8c0();
      FUN_10bcf56d0();
    }
  }
  uVar16 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar16 >> 1 & 1) != 0) {
    func_0x00010bd0a3a8(param_5[1]);
    func_0x00010bd0bb08();
    uVar16 = *(uint *)(unaff_x19 + 0x10);
  }
  param_5[4] = param_4;
  if ((uVar16 >> 7 & 1) != 0) {
    iVar2 = *(int *)(unaff_x19 + 0x4c);
    if (-1 < iVar2) {
      iVar3 = *(int *)(param_4 + 0x78);
      cVar5 = SBORROW4(iVar2,iVar3);
      cVar6 = iVar2 - iVar3 < 0;
      in_ZR = iVar2 == iVar3;
      if (iVar2 < iVar3) {
        *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) | 0x10;
        param_5[5] = *(long *)(param_4 + 0x40) + (long)*(int *)(unaff_x19 + 0x4c) * 0x38;
        goto LAB_10bcfa0b0;
      }
    }
    func_0x00010bd0a540();
    FUN_10bcf56d0();
  }
LAB_10bcfa0b0:
  auStack_188[0] = 8;
  func_0x00010bd0c520();
  func_0x00010bcf1980(param_5,&plStack_168);
  func_0x000107c284b4(&plStack_168,auStack_188);
  lVar15 = param_5[1];
  uVar21 = (ulong)*(char *)(lVar15 + 0x2f);
  if ((long)uVar21 < 0) {
    plVar14 = *(long **)(lVar15 + 0x18);
    uVar21 = *(ulong *)(lVar15 + 0x20);
  }
  else {
    plVar14 = (long *)(lVar15 + 0x18);
  }
  param_6 = param_5;
  if ((*(byte *)(unaff_x19 + 0x10) >> 5 & 1) != 0) {
    if (*param_7 == 0) {
      func_0x00010bd0a2c4();
      func_0x00010bd0a4c0(&stack0xfffffffffffffec8);
      goto LAB_10bcfa5fc;
    }
    plVar19 = *(long **)(unaff_x19 + 0x40);
    lVar15 = param_7[6];
    iVar2 = (int)param_7[0x18];
    unaff_x21 = (undefined **)(long)iVar2;
    uVar20 = (ulong)(iVar2 + 1U);
    *(uint *)(param_7 + 0x18) = iVar2 + 1U;
    uVar13 = (ulong)*(uint *)(param_7 + 0x11);
    func_0x00010bd0a424();
    if (uVar20 != 0) goto LAB_10bcfa610;
    plVar8 = plVar19;
    FUN_10bd10a2c();
    if (((ulong)plVar8 & 1) != 0) {
      func_0x00010b4d1804(&stack0xfffffffffffffec8,plVar19);
      unaff_x21 = (undefined **)(lVar15 + (long)iVar2 * 0x98);
      func_0x00010bd0c668();
      uVar1 = extraout_x11;
      puVar9 = extraout_x10;
      if (cVar6 == cVar5) {
        uVar1 = extraout_x8_06;
        puVar9 = &stack0xfffffffffffffec8;
      }
      func_0x00010bcfd620(puVar9,uVar1,unaff_x21);
      func_0x00010bd0b3d8();
      in_ZR = *(int *)(unaff_x21 + 0xc) == 1;
      if (0 < *(int *)(unaff_x21 + 0xc)) {
        func_0x00010bd0b21c(&stack0xfffffffffffffec8);
        FUN_10bd05240(unaff_x20 + 0xe,&stack0xfffffffffffffec8);
        FUN_10bd0011c(&stack0xfffffffffffffec8);
      }
      if ((plVar19[1] & 1U) != 0) goto LAB_10bcfa604;
      FUN_10bd36610();
      goto LAB_10bcfa1ac;
    }
    func_0x00010bd0a408();
    plStack_e0 = plVar14;
    uStack_d8 = uVar21;
    plStack_b0 = plVar8;
    uStack_a8 = uVar13;
    func_0x00010bd0b754();
    func_0x00010bd0b274();
    func_0x00010bd0b280();
    func_0x00010bd0b6a4();
  }
  unaff_x21 = &PTR_PTR_113406270;
  uVar4 = in_ZR;
  while( true ) {
    in_ZR = uVar4;
    func_0x00010bd0ac34();
    param_6[7] = (long)unaff_x21;
    param_6[8] = extraout_x8_07;
    param_6[9] = extraout_x8_07;
    func_0x000107c27a18(&plStack_168);
    *(undefined1 *)param_5 = 2;
    func_0x00010bd0a3a8(param_5[1]);
    FUN_10bcf6994();
    func_0x000107c3a64c(uStack_78);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10bcfa610:
    func_0x00010bd0a968();
    func_0x00010bd0aba0(&stack0xfffffffffffffec8);
LAB_10bcfa5fc:
    func_0x00010ae6c700(&stack0xfffffffffffffec8);
LAB_10bcfa604:
    func_0x00010bd0bce8();
LAB_10bcfa1ac:
    func_0x00010bd0be2c();
    uVar4 = in_ZR;
    if (!(bool)in_ZR) {
      FUN_10bceca2c(unaff_x20[1],"google.protobuf.FieldOptions",0x1c);
      func_0x00010bd0adc4();
      uVar4 = 0;
      if ((bool)in_ZR) {
        lVar15 = 0;
        while( true ) {
          func_0x00010bd0af70();
          uVar4 = lVar15 == extraout_w8_00;
          if (extraout_w8_00 <= lVar15) break;
          lVar12 = *(long *)*unaff_x20;
          FUN_10bd025c0();
          func_0x00010bd0be50();
          FUN_10bcee158();
          if (lVar12 != 0) {
            func_0x00010bcf5c68(unaff_x20 + 0x1f,&stack0xfffffffffffffec8);
          }
          lVar15 = lVar15 + 1;
        }
      }
    }
  }
  return;
}



/* Entry: 10bcfa6f0; end: 10bcfa753;  */

long FUN_10bcfa6f0(long param_1)

{
  undefined1 in_ZR;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar1;
  ulong extraout_x13_01;
  long extraout_x14;
  long extraout_x14_00;
  long lVar2;
  long unaff_x19;
  
  func_0x00010bd0a5a0();
  FUN_10bd044a0();
  func_0x00010bd0a7a0();
  do {
    func_0x00010bd0ae3c();
    uVar1 = extraout_x13;
    while (uVar1 != 0) {
      func_0x00010bd0b534();
      lVar2 = extraout_x14;
      if ((bool)in_ZR) goto LAB_10bcfa744;
      in_ZR = 0;
      uVar1 = extraout_x13_00 - 1 & extraout_x13_00;
    }
    func_0x00010bd0bf0c();
  } while ((extraout_x13_01 & 1) == 0);
  FUN_10bd0717c();
  func_0x00010bd0b564();
  param_1 = unaff_x19;
  lVar2 = extraout_x14_00;
LAB_10bcfa744:
  return lVar2 + param_1 * 0x20 + 8;
}



/* Entry: 10bcfa754; end: 10bcfabc7;  */

void FUN_10bcfa754(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  byte bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  char cVar12;
  int extraout_w8;
  ulong uVar13;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long extraout_x9_00;
  long lVar14;
  long lVar15;
  ulong *extraout_x10;
  long *extraout_x10_00;
  long *unaff_x19;
  long *unaff_x20;
  byte bVar16;
  int iVar17;
  long unaff_x22;
  undefined8 *puVar18;
  long *plVar19;
  long unaff_x23;
  ulong *puVar20;
  long lVar21;
  long alStack_130 [3];
  long lStack_118;
  int iStack_10c;
  long *plStack_108;
  undefined *puStack_d0;
  long *plStack_c8;
  long alStack_a0 [6];
  undefined8 uStack_70;
  
  plVar11 = param_3;
  func_0x00010bd0a9fc();
  func_0x00010bd0b174();
  func_0x00010bd0a30c();
  plStack_108 = param_2;
  uStack_70 = extraout_x8;
  while (unaff_x23 < (int)unaff_x20[0x10]) {
    func_0x00010bd0a1f8(unaff_x20[9]);
    param_1 = unaff_x19;
    FUN_10bcfa754();
    func_0x00010bd0bca4();
  }
  func_0x00010bd0b174();
  puVar20 = (ulong *)(param_3 + 3);
  while (unaff_x23 < *(int *)((long)unaff_x20 + 4)) {
    func_0x00010bd0a1f8(unaff_x20[7]);
    param_1 = unaff_x19;
    FUN_10bcfabc8();
    func_0x00010bd0b4f0();
  }
  func_0x00010bd0b174();
  for (; unaff_x23 < *(int *)((long)unaff_x20 + 0x8c); unaff_x23 = unaff_x23 + 1) {
    func_0x00010bd0a480(unaff_x20[0xc]);
    param_2 = (long *)(extraout_x8_00 + unaff_x22);
    param_1 = unaff_x19;
    FUN_10bcfabc8();
    unaff_x22 = unaff_x22 + 0x58;
  }
  for (iStack_10c = 0; iStack_10c < *(int *)((long)unaff_x20 + 4); iStack_10c = iStack_10c + 1) {
    lVar15 = unaff_x20[7] + (long)iStack_10c * 0x58;
    if (((*(byte *)(lVar15 + 1) >> 4 & 1) != 0) &&
       (lStack_118 = *(long *)(lVar15 + 0x28), lStack_118 != 0)) {
      if (0 < *(int *)(lStack_118 + 4)) {
        if ((*(byte *)(lVar15 + -0x57) >> 4 & 1) == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = *(long *)(lVar15 + -0x30);
        }
        if (lVar15 != lStack_118) {
          func_0x00010bd09fa8(unaff_x20[1]);
          puVar7 = &DAT_10f62a9de;
          func_0x000107c284bc();
          puStack_d0 = puVar7;
          plStack_c8 = param_2;
          func_0x00010bd09fc4(*(undefined8 *)(plStack_108[7] + (long)iStack_10c * 0x58 + -0x50));
          func_0x00010bd0b5d8();
          puVar2 = puVar20;
          if ((*puVar20 & 1) != 0) {
            puVar2 = (ulong *)(*puVar20 + (long)iStack_10c * 8 + -1);
          }
          plVar11 = (long *)*puVar2;
          param_2 = alStack_130;
          param_1 = unaff_x19;
          FUN_10bcf56d0();
          func_0x00010bd0aad4();
          unaff_x20 = plStack_108;
        }
      }
      lVar15 = unaff_x20[8] +
               (long)(int)((lStack_118 - *(long *)(*(long *)(lStack_118 + 0x10) + 0x40)) / 0x38) *
               0x38;
      iVar17 = *(int *)(lVar15 + 4);
      if (iVar17 == 0) {
        *(long *)(lVar15 + 0x30) = unaff_x20[7] + (long)iStack_10c * 0x58;
      }
      if ((*(byte *)(unaff_x19 + 0x11) & 1) == 0) {
        param_1 = (long *)(*(long *)(lVar15 + 0x30) + (long)iVar17 * 0x58);
        param_2 = (long *)(unaff_x20[7] + (long)iStack_10c * 0x58);
        uVar5 = param_1 == param_2;
        if (!(bool)uVar5) {
          func_0x00010ae6ab0c(param_1,param_2,&UNK_10f8320f2);
          func_0x00010802bcb8();
          func_0x00010bd0b070();
          func_0x00010bd0a968();
          param_1 = alStack_a0;
          plVar11 = (long *)0x1c11;
          FUN_10bdb2a88();
          func_0x00010ae6c700();
          goto LAB_10bcfabb0;
        }
      }
      *(int *)(lVar15 + 4) = iVar17 + 1;
    }
  }
  lVar14 = 0;
  plVar19 = param_3 + 0x12;
  for (lVar15 = 0; uVar5 = lVar15 == (int)unaff_x20[0xf], lVar15 < (int)unaff_x20[0xf];
      lVar15 = lVar15 + 1) {
    lVar21 = unaff_x20[8];
    if (*(int *)(lVar21 + lVar14 + 4) == 0) {
      func_0x00010bd09fa8(unaff_x20[1]);
      puVar7 = &DAT_10f62a9de;
      func_0x000107c284bc();
      puStack_d0 = puVar7;
      plStack_c8 = param_2;
      func_0x00010bd09fc4(*(undefined8 *)(lVar21 + lVar14 + 8));
      func_0x00010bd0b5d8();
      func_0x00010bd0ae30(*plVar19);
      plVar11 = plVar19;
      if (!(bool)uVar5) {
        plVar11 = extraout_x9;
      }
      plVar11 = (long *)*plVar11;
      param_2 = alStack_130;
      param_1 = unaff_x19;
      FUN_10bcf5820();
      func_0x00010bd0aad4();
      unaff_x20 = plStack_108;
    }
    lVar14 = lVar14 + 0x38;
  }
  lVar15 = 0;
  for (lVar14 = 0; bVar6 = lVar14 == *(int *)((long)unaff_x20 + 4),
      lVar14 < *(int *)((long)unaff_x20 + 4); lVar14 = lVar14 + 1) {
    bVar16 = *(byte *)(unaff_x20[7] + lVar15 + 1);
    if (((bVar16 >> 1 & 1) != 0) &&
       (((((bVar16 >> 4 & 1) == 0 || (lVar21 = *(long *)(unaff_x20[7] + lVar15 + 0x28), lVar21 == 0)
          ) || (bVar6 = *(int *)(lVar21 + 4) == 1, !bVar6)) ||
        ((*(byte *)(*(long *)(lVar21 + 0x30) + 1) >> 1 & 1) == 0)))) {
      func_0x00010bd0aa7c(unaff_x20[1]);
      puVar2 = puVar20;
      if (!bVar6) {
        puVar2 = extraout_x10;
      }
      plVar11 = (long *)*puVar2;
      func_0x00010bd0b0fc();
      func_0x00010bd0c244();
      unaff_x20 = plStack_108;
    }
    lVar15 = lVar15 + 0x58;
  }
  func_0x00010bd0c48c();
  iVar17 = -1;
  param_3 = (long *)&UNK_10f8321a6;
  for (; lVar14 < (int)unaff_x20[0xf]; lVar14 = lVar14 + 1) {
    iVar1 = iVar17;
    if ((*(int *)((long)puVar20 + unaff_x20[8] + 4) == 1) &&
       ((*(byte *)(*(long *)((long)puVar20 + unaff_x20[8] + 0x30) + 1) >> 1 & 1) != 0)) {
      iVar1 = (int)lVar14;
      if (iVar17 != -1) {
        iVar1 = iVar17;
      }
    }
    else {
      bVar6 = iVar17 == -1;
      if (!bVar6) {
        func_0x00010bd0aa7c(unaff_x20[1]);
        plVar11 = plVar19;
        if (!bVar6) {
          plVar11 = extraout_x10_00;
        }
        plVar11 = (long *)*plVar11;
        func_0x00010bd0b0fc();
        func_0x00010bd0c244();
        unaff_x20 = plStack_108;
      }
    }
    iVar17 = iVar1;
    puVar20 = puVar20 + 7;
  }
  bVar6 = iVar17 == -1;
  iVar1 = (int)unaff_x20[0xf];
  if (!bVar6) {
    iVar1 = iVar17;
  }
  *(int *)((long)unaff_x20 + 0x7c) = iVar1;
  func_0x000107c3a64c(uStack_70);
  uVar5 = 0;
  if (bVar6) {
    return;
  }
LAB_10bcfabb0:
  ___stack_chk_fail();
  func_0x00010bd0aa70();
  func_0x00010bd0a974();
  func_0x000107c3a688();
  if ((*(byte *)(plVar11 + 2) >> 1 & 1) != 0) {
    func_0x00010bd0ba10(unaff_x20[4]);
    param_1 = unaff_x19;
    func_0x00010bd0bee4();
    func_0x00010bd0adc4();
    if (!(bool)uVar5) {
      if (extraout_w8 == 0) {
        func_0x00010bd0c5c8(param_3[1]);
        func_0x00010bd0ae24();
        func_0x00010bd0b07c();
        if (param_1[0x23] == 0) {
          uVar13 = (ulong)*(char *)((long)param_1 + 0x14f);
          uVar8 = uVar13;
          if ((long)uVar13 < 0) {
            uVar8 = param_1[0x28];
          }
          if (uVar8 == 0) goto LAB_10bcf58d8;
        }
        else {
          func_0x00010bd0b3a0();
          uVar13 = (ulong)*(byte *)((long)param_1 + 0x14f);
        }
        if (((uint)uVar13 >> 7 & 1) == 0) {
          uVar13 = uVar13 & 0xff;
        }
        else {
          uVar13 = param_1[0x28];
        }
        if (uVar13 == 0) {
          return;
        }
LAB_10bcf58d8:
        func_0x00010bd0b3a0();
        return;
      }
      func_0x00010bd0a8ac(param_3[1]);
      goto LAB_10bcfb0a4;
    }
    param_3[4] = (long)param_1;
    FUN_10bcee900();
    if ((param_1 == (long *)0x0) &&
       ((uVar5 = *(char *)(*unaff_x19 + 0x32) == '\x01', !(bool)uVar5 ||
        (func_0x00010bd0aef4(unaff_x20[4]), ((ulong)param_1 & 1) == 0)))) {
      func_0x00010bd0a8ac(param_3[1]);
      FUN_10bcf56d0();
      param_3 = param_2;
    }
  }
  if (((*(byte *)((long)param_3 + 1) >> 4 & 1) != 0) &&
     (func_0x00010bd0b814(), !(bool)uVar5 && extraout_x9_00 != 0)) {
    func_0x00010bd0ae24();
    func_0x00010bd0aadc();
  }
  if ((*(uint *)(unaff_x20 + 2) >> 2 & 1) == 0) {
    func_0x00010bd0c17c();
    if (((int)param_1 != 10) && (func_0x00010bd0c17c(), (int)param_1 != 8)) goto LAB_10bcfac5c;
    func_0x00010bd0bb28();
LAB_10bcfac4c:
    func_0x00010bd0ae24();
LAB_10bcfac58:
    FUN_10bcf5820();
    goto LAB_10bcfac5c;
  }
  if ((*(byte *)(*unaff_x19 + 0x33) & 1) == 0) {
    ppuVar3 = &PTR_PTR_113406270;
    if ((undefined **)unaff_x20[8] != (undefined **)0x0) {
      ppuVar3 = (undefined **)unaff_x20[8];
    }
    bVar16 = *(byte *)((long)ppuVar3 + 0x8c);
  }
  else {
    bVar16 = 0;
  }
  bVar4 = *(byte *)(*unaff_x19 + 0x31);
  func_0x00010bd0ba10(unaff_x20[5]);
  plVar11 = unaff_x19;
  FUN_10bcf6020();
  cVar12 = (char)*plVar11;
  if (cVar12 == '\0') {
    if ((bVar4 & (bVar16 ^ 1) & 1) != 0) {
      puVar18 = (undefined8 *)(unaff_x20[5] & 0xfffffffffffffffc);
      lVar15 = (long)*(char *)((long)puVar18 + 0x17);
      if (lVar15 < 0) {
        lVar15 = puVar18[1];
      }
      lVar14 = (long)*(char *)((unaff_x20[6] & 0xfffffffffffffffcU) + 0x17);
      if (lVar14 < 0) {
        lVar14 = *(long *)((unaff_x20[6] & 0xfffffffffffffffcU) + 8);
      }
      puVar9 = (undefined4 *)unaff_x19[1];
      FUN_10bced8a4(puVar9,(int)lVar15 + (int)lVar14 + 6);
      *puVar9 = 0;
      param_2[3] = (long)puVar9;
      lVar15 = (long)*(char *)((long)puVar18 + 0x17);
      puVar10 = puVar18;
      if (lVar15 < 0) {
        lVar15 = puVar18[1];
        puVar10 = (undefined8 *)*puVar18;
      }
      _memcpy(puVar9 + 1,puVar10,lVar15 + 1);
      lVar15 = (long)*(char *)((long)puVar18 + 0x17);
      if (lVar15 < 0) {
        lVar15 = puVar18[1];
      }
      puVar18 = (undefined8 *)(unaff_x20[6] & 0xfffffffffffffffc);
      lVar14 = (long)*(char *)((long)puVar18 + 0x17);
      if (lVar14 < 0) {
        lVar14 = puVar18[1];
        puVar18 = (undefined8 *)*puVar18;
      }
      _memcpy((long)(puVar9 + 1) + lVar15 + 1,puVar18,lVar14 + 1);
      func_0x00010bd0c168();
      if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
        return;
      }
      FUN_10bced468(unaff_x19[1]);
      return;
    }
    if ((bVar16 & 1) == 0) {
LAB_10bcfaf20:
      func_0x00010bd0bb28();
      func_0x00010bd0c5c8();
      func_0x00010bd0ae24();
      FUN_10bcf5848();
      return;
    }
    func_0x00010bd0b974();
    plVar11 = unaff_x19;
    FUN_10bcf5cb4();
    func_0x00010bd0aad4();
    cVar12 = (char)*plVar11;
    if (cVar12 == '\0') goto LAB_10bcfaf20;
  }
  if ((*(byte *)((long)unaff_x20 + 0x11) >> 2 & 1) == 0) {
    if (cVar12 == '\x01') {
      cVar12 = '\v';
LAB_10bcfaf40:
      *(char *)((long)param_2 + 2) = cVar12;
      goto LAB_10bcfaf44;
    }
    if (cVar12 == '\x04') {
      cVar12 = '\x0e';
      goto LAB_10bcfaf40;
    }
    lVar15 = param_2[1];
  }
  else {
LAB_10bcfaf44:
    param_1 = param_2;
    func_0x00010b91adc8();
    if ((int)param_1 != 10) {
      func_0x00010bd0c17c();
      if ((int)param_1 != 8) {
        func_0x00010bd0bb28();
        goto LAB_10bcfac4c;
      }
      bVar6 = (char)*plVar11 != '\x04';
      if (bVar6) {
        plVar11 = (long *)0x0;
      }
      param_2[6] = (long)plVar11;
      if (bVar6) {
        lVar15 = param_2[1];
        goto LAB_10bcfb09c;
      }
      plVar11 = param_2;
      FUN_10bcefa5c();
      if ((*plVar11 & 0x100) != 0) {
        *(byte *)((long)param_2 + 1) = *(byte *)((long)param_2 + 1) & 0xfe;
      }
      if ((*param_2 & 0x100) == 0) {
        param_1 = param_2;
        FUN_10bcefa5c();
        if (0 < *(int *)((long)param_1 + 4)) {
          func_0x00010bd0c174();
          param_2[10] = param_1[7];
        }
        goto LAB_10bcfac5c;
      }
      param_1 = (long *)0x0;
      FUN_10bd3ee7c();
      if (((ulong)param_1 & 1) == 0) {
        func_0x00010bd0bb28();
        goto LAB_10bcfaf7c;
      }
      func_0x00010bd0c174();
      param_1 = unaff_x19;
      func_0x00010bd0c300();
      plVar11 = param_1;
      if ((char)*param_1 == '\x05') {
LAB_10bcfb020:
        plVar19 = (long *)plVar11[2];
        func_0x00010bd0c174();
        if (plVar19 == param_1) {
          param_2[10] = (long)plVar11;
          goto LAB_10bcfac5c;
        }
      }
      else if ((char)*param_1 == '\x06') {
        plVar11 = (long *)((long)param_1 + -1);
        goto LAB_10bcfb020;
      }
      func_0x00010bd0bb28();
      func_0x00010bd0a8ac();
      FUN_10bcf56d0();
LAB_10bcfac5c:
      func_0x00010bd0c168();
      if (((ulong)param_1 & 1) == 0) {
        FUN_10bcee300(unaff_x19[0x16],param_2[4],*(undefined4 *)((long)param_2 + 4));
        if (param_2[4] == 0) {
          func_0x00010bd0b974();
        }
        else {
          func_0x00010bd0b6e4(*(undefined8 *)(param_2[4] + 8),&stack0xfffffffffffffe50);
        }
        if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
          func_0x00010bd0bda8(param_2[1]);
          func_0x00010bd0ad70();
        }
        else {
          func_0x00010bd0bda8(param_2[1]);
          func_0x00010bd0ad70();
        }
        func_0x00010bd0aad4();
        return;
      }
      if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
        return;
      }
      uVar8 = unaff_x19[1];
      FUN_10bced468();
      if ((uVar8 & 1) != 0) {
        return;
      }
      func_0x00010bd0bb28();
      func_0x00010bd0a8ac();
      FUN_10bcf58f4();
      return;
    }
    bVar6 = (char)*plVar11 != '\x01';
    if (bVar6) {
      plVar11 = (long *)0x0;
    }
    param_2[6] = (long)plVar11;
    if (!bVar6) {
      if ((*param_2 & 0x100) == 0) goto LAB_10bcfac5c;
LAB_10bcfaf7c:
      func_0x00010bd0ae24();
      goto LAB_10bcfac58;
    }
    lVar15 = param_2[1];
  }
LAB_10bcfb09c:
  func_0x00010bd0a8ac(lVar15);
LAB_10bcfb0a4:
  FUN_10bcf56d0();
  return;
}



/* Entry: 10bcfabc8; end: 10bcfb16f;  */

void FUN_10bcfabc8(long *param_1,long *param_2,long param_3)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined1 in_ZR;
  bool bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  int extraout_w8;
  ulong uVar8;
  long lVar9;
  long extraout_x9;
  long lVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar11;
  byte bVar12;
  undefined8 *puVar13;
  long *plVar14;
  
  func_0x000107c3a688();
  if ((*(byte *)(param_3 + 0x10) >> 1 & 1) != 0) {
    func_0x00010bd0ba10(*(undefined8 *)(unaff_x20 + 0x20));
    param_1 = unaff_x19;
    func_0x00010bd0bee4();
    func_0x00010bd0adc4();
    if (!(bool)in_ZR) {
      if (extraout_w8 == 0) {
        func_0x00010bd0c5c8(unaff_x21[1]);
        func_0x00010bd0ae24();
        func_0x00010bd0b07c();
        if (param_1[0x23] == 0) {
          uVar8 = (ulong)*(char *)((long)param_1 + 0x14f);
          uVar4 = uVar8;
          if ((long)uVar8 < 0) {
            uVar4 = param_1[0x28];
          }
          if (uVar4 == 0) goto LAB_10bcf58d8;
        }
        else {
          func_0x00010bd0b3a0();
          uVar8 = (ulong)*(byte *)((long)param_1 + 0x14f);
        }
        if (((uint)uVar8 >> 7 & 1) == 0) {
          uVar8 = uVar8 & 0xff;
        }
        else {
          uVar8 = param_1[0x28];
        }
        if (uVar8 == 0) {
          return;
        }
LAB_10bcf58d8:
        func_0x00010bd0b3a0();
        return;
      }
      func_0x00010bd0a8ac(unaff_x21[1]);
      goto LAB_10bcfb0a4;
    }
    unaff_x21[4] = (long)param_1;
    FUN_10bcee900();
    if ((param_1 == (long *)0x0) &&
       ((in_ZR = *(char *)(*unaff_x19 + 0x32) == '\x01', !(bool)in_ZR ||
        (func_0x00010bd0aef4(*(undefined8 *)(unaff_x20 + 0x20)), ((ulong)param_1 & 1) == 0)))) {
      func_0x00010bd0a8ac(unaff_x21[1]);
      FUN_10bcf56d0();
      unaff_x21 = param_2;
    }
  }
  if (((*(byte *)((long)unaff_x21 + 1) >> 4 & 1) != 0) &&
     (func_0x00010bd0b814(), !(bool)in_ZR && extraout_x9 != 0)) {
    func_0x00010bd0ae24();
    func_0x00010bd0aadc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) >> 2 & 1) == 0) {
    func_0x00010bd0c17c();
    if (((int)param_1 != 10) && (func_0x00010bd0c17c(), (int)param_1 != 8)) goto LAB_10bcfac5c;
    func_0x00010bd0bb28();
LAB_10bcfac4c:
    func_0x00010bd0ae24();
LAB_10bcfac58:
    FUN_10bcf5820();
    goto LAB_10bcfac5c;
  }
  if ((*(byte *)(*unaff_x19 + 0x33) & 1) == 0) {
    ppuVar1 = &PTR_PTR_113406270;
    if (*(undefined ***)(unaff_x20 + 0x40) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x40);
    }
    bVar12 = *(byte *)((long)ppuVar1 + 0x8c);
  }
  else {
    bVar12 = 0;
  }
  bVar2 = *(byte *)(*unaff_x19 + 0x31);
  func_0x00010bd0ba10(*(undefined8 *)(unaff_x20 + 0x28));
  plVar11 = unaff_x19;
  FUN_10bcf6020();
  cVar7 = (char)*plVar11;
  if (cVar7 == '\0') {
    if ((bVar2 & (bVar12 ^ 1) & 1) != 0) {
      puVar13 = (undefined8 *)(*(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc);
      lVar9 = (long)*(char *)((long)puVar13 + 0x17);
      if (lVar9 < 0) {
        lVar9 = puVar13[1];
      }
      uVar4 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
      lVar10 = (long)*(char *)(uVar4 + 0x17);
      if (lVar10 < 0) {
        lVar10 = *(long *)(uVar4 + 8);
      }
      puVar5 = (undefined4 *)unaff_x19[1];
      FUN_10bced8a4(puVar5,(int)lVar9 + (int)lVar10 + 6);
      *puVar5 = 0;
      param_2[3] = (long)puVar5;
      lVar9 = (long)*(char *)((long)puVar13 + 0x17);
      puVar6 = puVar13;
      if (lVar9 < 0) {
        lVar9 = puVar13[1];
        puVar6 = (undefined8 *)*puVar13;
      }
      _memcpy(puVar5 + 1,puVar6,lVar9 + 1);
      lVar9 = (long)*(char *)((long)puVar13 + 0x17);
      if (lVar9 < 0) {
        lVar9 = puVar13[1];
      }
      puVar13 = (undefined8 *)(*(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc);
      lVar10 = (long)*(char *)((long)puVar13 + 0x17);
      if (lVar10 < 0) {
        lVar10 = puVar13[1];
        puVar13 = (undefined8 *)*puVar13;
      }
      _memcpy((long)(puVar5 + 1) + lVar9 + 1,puVar13,lVar10 + 1);
      func_0x00010bd0c168();
      if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
        return;
      }
      FUN_10bced468(unaff_x19[1]);
      return;
    }
    if ((bVar12 & 1) == 0) {
LAB_10bcfaf20:
      func_0x00010bd0bb28();
      func_0x00010bd0c5c8();
      func_0x00010bd0ae24();
      FUN_10bcf5848();
      return;
    }
    func_0x00010bd0b974();
    plVar11 = unaff_x19;
    FUN_10bcf5cb4();
    func_0x00010bd0aad4();
    cVar7 = (char)*plVar11;
    if (cVar7 == '\0') goto LAB_10bcfaf20;
  }
  if ((*(byte *)(unaff_x20 + 0x11) >> 2 & 1) == 0) {
    if (cVar7 == '\x01') {
      cVar7 = '\v';
LAB_10bcfaf40:
      *(char *)((long)param_2 + 2) = cVar7;
      goto LAB_10bcfaf44;
    }
    if (cVar7 == '\x04') {
      cVar7 = '\x0e';
      goto LAB_10bcfaf40;
    }
    lVar9 = param_2[1];
  }
  else {
LAB_10bcfaf44:
    param_1 = param_2;
    func_0x00010b91adc8();
    if ((int)param_1 != 10) {
      func_0x00010bd0c17c();
      if ((int)param_1 != 8) {
        func_0x00010bd0bb28();
        goto LAB_10bcfac4c;
      }
      bVar3 = (char)*plVar11 != '\x04';
      if (bVar3) {
        plVar11 = (long *)0x0;
      }
      param_2[6] = (long)plVar11;
      if (bVar3) {
        lVar9 = param_2[1];
        goto LAB_10bcfb09c;
      }
      plVar11 = param_2;
      FUN_10bcefa5c();
      if ((*plVar11 & 0x100) != 0) {
        *(byte *)((long)param_2 + 1) = *(byte *)((long)param_2 + 1) & 0xfe;
      }
      if ((*param_2 & 0x100) == 0) {
        param_1 = param_2;
        FUN_10bcefa5c();
        if (0 < *(int *)((long)param_1 + 4)) {
          func_0x00010bd0c174();
          param_2[10] = param_1[7];
        }
        goto LAB_10bcfac5c;
      }
      param_1 = (long *)0x0;
      FUN_10bd3ee7c();
      if (((ulong)param_1 & 1) == 0) {
        func_0x00010bd0bb28();
        goto LAB_10bcfaf7c;
      }
      func_0x00010bd0c174();
      param_1 = unaff_x19;
      func_0x00010bd0c300();
      plVar11 = param_1;
      if ((char)*param_1 == '\x05') {
LAB_10bcfb020:
        plVar14 = (long *)plVar11[2];
        func_0x00010bd0c174();
        if (plVar14 == param_1) {
          param_2[10] = (long)plVar11;
          goto LAB_10bcfac5c;
        }
      }
      else if ((char)*param_1 == '\x06') {
        plVar11 = (long *)((long)param_1 + -1);
        goto LAB_10bcfb020;
      }
      func_0x00010bd0bb28();
      func_0x00010bd0a8ac();
      FUN_10bcf56d0();
LAB_10bcfac5c:
      func_0x00010bd0c168();
      if (((ulong)param_1 & 1) == 0) {
        FUN_10bcee300(unaff_x19[0x16],param_2[4],*(undefined4 *)((long)param_2 + 4));
        if (param_2[4] == 0) {
          func_0x00010bd0b974();
        }
        else {
          func_0x00010bd0b6e4(*(undefined8 *)(param_2[4] + 8),&stack0xffffffffffffffa0);
        }
        if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
          func_0x00010bd0bda8(param_2[1]);
          func_0x00010bd0ad70();
        }
        else {
          func_0x00010bd0bda8(param_2[1]);
          func_0x00010bd0ad70();
        }
        func_0x00010bd0aad4();
        return;
      }
      if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
        return;
      }
      uVar4 = unaff_x19[1];
      FUN_10bced468();
      if ((uVar4 & 1) != 0) {
        return;
      }
      func_0x00010bd0bb28();
      func_0x00010bd0a8ac();
      FUN_10bcf58f4();
      return;
    }
    bVar3 = (char)*plVar11 != '\x01';
    if (bVar3) {
      plVar11 = (long *)0x0;
    }
    param_2[6] = (long)plVar11;
    if (!bVar3) {
      if ((*param_2 & 0x100) == 0) goto LAB_10bcfac5c;
LAB_10bcfaf7c:
      func_0x00010bd0ae24();
      goto LAB_10bcfac58;
    }
    lVar9 = param_2[1];
  }
LAB_10bcfb09c:
  func_0x00010bd0a8ac(lVar9);
LAB_10bcfb0a4:
  FUN_10bcf56d0();
  return;
}



/* Entry: 10bcfb170; end: 10bcfb3af;  */

void FUN_10bcfb170(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar7;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 unaff_x30;
  long lStack0000000000000008;
  long lStack0000000000000018;
  
  func_0x00010bd0c844();
  func_0x00010bd0aa10();
  if ((bRam00000001137fe1b8 & 1) == 0) {
    puVar2 = (ulong *)0x1137fe1b8;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x00010bd0b628();
      FUN_10bd001fc(puVar2,0x12);
      for (lStack0000000000000018 = 0; lStack0000000000000018 != 0x80;
          lStack0000000000000018 = lStack0000000000000018 + 8) {
        Hint_Prefetch(*puVar2,0,2,0);
        uVar9 = *(ulong *)((long)&PTR_DAT_110d9b9a0 + lStack0000000000000018);
        uVar3 = uVar9;
        _strlen();
        func_0x00010bd0c650();
        func_0x000107c284ac();
        lStack0000000000000008 = 0;
        uVar10 = puVar2[2];
        uVar7 = *puVar2 >> 0xc ^ uVar3 >> 7;
        while( true ) {
          uVar7 = uVar7 & uVar10;
          func_0x000107c3a6b8();
          for (uVar8 = extraout_x8_02 & 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
            uVar5 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
            puVar6 = (ulong *)(puVar2[1] +
                              (uVar7 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar10
                              ) * 0x10);
            uVar5 = *puVar6;
            uVar1 = puVar6[1];
            uVar4 = uVar9;
            _strlen(uVar9);
            func_0x000107c27944(uVar5,uVar1,uVar9,uVar4);
            if ((uVar5 & 1) != 0) goto LAB_10bcfb354;
          }
          func_0x000107c3a674();
          if ((extraout_x8_03 & 1) != 0) break;
          lStack0000000000000008 = lStack0000000000000008 + 8;
          uVar7 = lStack0000000000000008 + uVar7;
        }
        puVar6 = puVar2;
        func_0x00010bd00228(puVar2,uVar3);
        func_0x000106e5c56c(puVar2[1] + (long)puVar6 * 0x10,uVar9);
LAB_10bcfb354:
      }
      puRam00000001137fe1b0 = puVar2;
      ___cxa_guard_release(0x1137fe1b8);
    }
  }
  puVar2 = puRam00000001137fe1b0;
  Hint_Prefetch(*puRam00000001137fe1b0,0,2,0);
  func_0x00010bd0a8ec(*puRam00000001137fe1b0);
  func_0x000107c284ac();
  uVar7 = puVar2[1];
  uVar3 = puVar2[2];
  func_0x00010bd0a4e0(*puVar2 >> 0xc);
  do {
    func_0x00010bd0addc();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x00010bd0b4e0();
      puVar2 = (ulong *)(uVar7 + (extraout_x8_00 & uVar3) * 0x10);
      uVar9 = *puVar2;
      func_0x00010bd0c5a4(uVar9,puVar2[1]);
      func_0x000107c27944();
      if ((uVar9 & 1) != 0) goto LAB_10bcfb210;
      func_0x00010bd0c764();
    }
    func_0x00010bd0a514();
  } while ((extraout_x8_01 & 1) == 0);
LAB_10bcfb210:
  func_0x00010bd0c820((extraout_x8 & 0x8080808080808080) != 0,unaff_x30);
  return;
}



/* Entry: 10bcfb3b0; end: 10bcfb4a7;  */

void FUN_10bcfb3b0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  code *pcVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x19;
  long lVar10;
  long *unaff_x21;
  long lVar11;
  undefined8 *puVar12;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  
  if (*param_1 == 0) {
    unaff_x21 = param_1;
    if (param_1[1] == 0) {
      if ((param_4 == 0) || (*(long *)(param_4 + 0x18) == 0)) {
        puVar6 = &UNK_10f832f48;
        func_0x00010bd0aa88();
        func_0x00010bd0a1c8();
      }
      else if ((*(byte *)(*(long *)(param_4 + 0x18) + 0x31) & 1) == 0) {
        puVar6 = &UNK_10f832f5c;
        func_0x00010bd0aa88();
        func_0x00010bd0a1c8();
      }
      else {
        if (*(char *)(param_4 + 2) != '\x01') {
          func_0x00010bd0b108();
          puVar3 = *(undefined4 **)(extraout_x8 + 0x28);
          FUN_10bced8a4(puVar3,(int)unaff_x19 + 5);
          *puVar3 = 0;
          param_1[1] = (long)puVar3;
          func_0x00010bd0ad80(puVar3 + 1);
          _memcpy();
          *(undefined1 *)((long)(puVar3 + 1) + (long)unaff_x19) = 0;
          return;
        }
        puVar6 = &UNK_10f832f84;
        func_0x00010bd0aa88();
        func_0x00010bd0a1c8();
      }
    }
    else {
      puVar6 = &UNK_10f832f34;
      func_0x00010bd0aa88();
      func_0x00010bd0a1c8();
    }
  }
  else {
    puVar6 = &UNK_10f832f3b;
    func_0x00010bd0aa88();
    func_0x00010bd0a1c8();
  }
  FUN_10bdb2a88();
  func_0x00010bd0aa9c();
  if (param_1[1] == 0) {
    *param_1 = (long)puVar6;
    return;
  }
  pcStack_58 = FUN_10bcfb4a8;
  iVar5 = 0xf832f34;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010bd0aa88();
  func_0x00010bd0a1c8();
  FUN_10bdb2a88();
  func_0x00010bd0aa9c();
  if (0xe0000000 < iVar5 + 0xe0000000U) {
    lVar10 = param_1[1];
    if ((*param_1 == lVar10) || (iVar5 != *(int *)(lVar10 + -4))) {
      pcVar7 = FUN_10bcfb4e0;
      func_0x000107c3a6d8();
      ppuStack_40 = &puStack_60;
      pcStack_38 = pcVar7;
      func_0x00010bd0afbc();
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar12 = puVar2 + 1;
        *puVar2 = unaff_x21;
LAB_10bcfb5e8:
        unaff_x19[1] = (long)puVar12;
        return;
      }
      lVar10 = *unaff_x19;
      lVar11 = (long)puVar2 - lVar10 >> 3;
      uVar1 = lVar11 + 1;
      if (uVar1 >> 0x3d == 0) {
        uVar8 = param_1[2] - lVar10;
        uVar9 = (long)uVar8 >> 2;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 >> 0x3d == 0) {
          lVar4 = uVar9 << 3;
          __Znwm();
          puVar2 = (undefined8 *)(lVar4 + ((long)puVar2 - lVar10));
          puVar12 = puVar2 + 1;
          *puVar2 = unaff_x21;
          func_0x00010bd0bb48();
          *unaff_x19 = (long)(puVar2 + -lVar11);
          unaff_x19[1] = (long)puVar12;
          unaff_x19[2] = lVar4 + uVar9 * 8;
          if (lVar10 != 0) {
            func_0x00010bd0b404();
          }
          goto LAB_10bcfb5e8;
        }
      }
      else {
        FUN_10bd00338();
      }
      func_0x000104bd35f4();
      func_0x000107c3a6ac();
      if (param_1 != (long *)0x0) {
        func_0x00010bd0b654();
      }
      return;
    }
    *(int *)(lVar10 + -4) = iVar5 + 1;
  }
  return;
}



/* Entry: 10bcfb4a8; end: 10bcfb4df;  */

void FUN_10bcfb4a8(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long lVar7;
  undefined8 unaff_x21;
  long lVar8;
  undefined8 *puVar9;
  
  if (param_1[1] == 0) {
    *param_1 = param_2;
    return;
  }
  iVar4 = 0xf832f34;
  func_0x00010bd0aa88();
  func_0x00010bd0a1c8();
  FUN_10bdb2a88();
  func_0x00010bd0aa9c();
  if (0xe0000000 < iVar4 + 0xe0000000U) {
    lVar7 = param_1[1];
    if ((*param_1 == lVar7) || (iVar4 != *(int *)(lVar7 + -4))) {
      func_0x000107c3a6d8();
      func_0x00010bd0afbc();
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar9 = puVar2 + 1;
        *puVar2 = unaff_x21;
LAB_10bcfb5e8:
        unaff_x19[1] = (long)puVar9;
        return;
      }
      lVar7 = *unaff_x19;
      lVar8 = (long)puVar2 - lVar7 >> 3;
      uVar1 = lVar8 + 1;
      if (uVar1 >> 0x3d == 0) {
        uVar5 = param_1[2] - lVar7;
        uVar6 = (long)uVar5 >> 2;
        if (uVar6 <= uVar1) {
          uVar6 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar6 = 0x1fffffffffffffff;
        }
        if (uVar6 >> 0x3d == 0) {
          lVar3 = uVar6 << 3;
          __Znwm();
          puVar2 = (undefined8 *)(lVar3 + ((long)puVar2 - lVar7));
          puVar9 = puVar2 + 1;
          *puVar2 = unaff_x21;
          func_0x00010bd0bb48();
          *unaff_x19 = (long)(puVar2 + -lVar8);
          unaff_x19[1] = (long)puVar9;
          unaff_x19[2] = lVar3 + uVar6 * 8;
          if (lVar7 != 0) {
            func_0x00010bd0b404();
          }
          goto LAB_10bcfb5e8;
        }
      }
      else {
        FUN_10bd00338();
      }
      func_0x000104bd35f4();
      func_0x000107c3a6ac();
      if (param_1 != (long *)0x0) {
        func_0x00010bd0b654();
      }
      return;
    }
    *(int *)(lVar7 + -4) = iVar4 + 1;
  }
  return;
}



/* Entry: 10bcfb4e0; end: 10bcfb54f;  */

void FUN_10bcfb4e0(long *param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long lVar6;
  undefined8 unaff_x21;
  long lVar7;
  undefined8 *puVar8;
  
  if (0xe0000000 < param_2 + 0xe0000000U) {
    lVar6 = param_1[1];
    if ((*param_1 == lVar6) || (param_2 != *(int *)(lVar6 + -4))) {
      func_0x000107c3a6d8(param_1,CONCAT44(param_2 + 1,param_2));
      func_0x00010bd0afbc();
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar8 = puVar2 + 1;
        *puVar2 = unaff_x21;
LAB_10bcfb5e8:
        unaff_x19[1] = (long)puVar8;
        return;
      }
      lVar6 = *unaff_x19;
      lVar7 = (long)puVar2 - lVar6 >> 3;
      uVar1 = lVar7 + 1;
      if (uVar1 >> 0x3d == 0) {
        uVar4 = param_1[2] - lVar6;
        uVar5 = (long)uVar4 >> 2;
        if (uVar5 <= uVar1) {
          uVar5 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar4) {
          uVar5 = 0x1fffffffffffffff;
        }
        if (uVar5 >> 0x3d == 0) {
          lVar3 = uVar5 << 3;
          __Znwm();
          puVar2 = (undefined8 *)(lVar3 + ((long)puVar2 - lVar6));
          puVar8 = puVar2 + 1;
          *puVar2 = unaff_x21;
          func_0x00010bd0bb48();
          *unaff_x19 = (long)(puVar2 + -lVar7);
          unaff_x19[1] = (long)puVar8;
          unaff_x19[2] = lVar3 + uVar5 * 8;
          if (lVar6 != 0) {
            func_0x00010bd0b404();
          }
          goto LAB_10bcfb5e8;
        }
      }
      else {
        FUN_10bd00338();
      }
      func_0x000104bd35f4();
      func_0x000107c3a6ac();
      if (param_1 != (long *)0x0) {
        func_0x00010bd0b654();
      }
      return;
    }
    *(int *)(lVar6 + -4) = param_2 + 1;
  }
  return;
}



/* Entry: 10bcfb550; end: 10bcfb5fb;  */

void FUN_10bcfb550(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long lVar6;
  undefined8 unaff_x21;
  long lVar7;
  undefined8 *puVar8;
  
  func_0x000107c3a6d8();
  func_0x00010bd0afbc();
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
    puVar8 = puVar2 + 1;
    *puVar2 = unaff_x21;
LAB_10bcfb5e8:
    unaff_x19[1] = (long)puVar8;
    return;
  }
  lVar6 = *unaff_x19;
  lVar7 = (long)puVar2 - lVar6 >> 3;
  uVar1 = lVar7 + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar4 = (long)*(undefined8 **)(param_1 + 0x10) - lVar6;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 >> 0x3d == 0) {
      lVar3 = uVar5 << 3;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + ((long)puVar2 - lVar6));
      puVar8 = puVar2 + 1;
      *puVar2 = unaff_x21;
      func_0x00010bd0bb48();
      *unaff_x19 = (long)(puVar2 + -lVar7);
      unaff_x19[1] = (long)puVar8;
      unaff_x19[2] = lVar3 + uVar5 * 8;
      if (lVar6 != 0) {
        func_0x00010bd0b404();
      }
      goto LAB_10bcfb5e8;
    }
  }
  else {
    FUN_10bd00338();
  }
  func_0x000104bd35f4();
  func_0x000107c3a6ac();
  if (param_1 != 0) {
    func_0x00010bd0b654();
  }
  return;
}



/* Entry: 10bcfb5fc; end: 10bcfb61f;  */

void FUN_10bcfb5fc(long param_1)

{
  func_0x000107c3a6ac();
  if (param_1 != 0) {
    func_0x00010bd0b654();
  }
  return;
}


