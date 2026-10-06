/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107326820; end: 10732683f;  */

void FUN_107326820(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  ulong extraout_x8;
  
  func_0x000107348088();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107348068();
  if ((extraout_x8 & 1) == 0) {
    FUN_10732686c();
  }
  return;
}



/* Entry: 107326840; end: 10732686b;  */

void FUN_107326840(void)

{
  uint extraout_w8;
  
  func_0x000107348068();
  if ((extraout_w8 & 1) == 0) {
    FUN_10732686c();
  }
  return;
}



/* Entry: 10732686c; end: 10732687b;  */

void FUN_10732686c(long param_1)

{
  long unaff_x19;
  
  func_0x000107346d1c();
  func_0x000107347e90();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x48;
    func_0x0001073268a8();
  }
  return;
}



/* Entry: 10732687c; end: 1073268cb;  */

void FUN_10732687c(long param_1)

{
  long unaff_x19;
  
  func_0x000107347e90();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x48;
    func_0x0001073268a8();
  }
  return;
}



/* Entry: 1073268cc; end: 107326903;  */

void FUN_1073268cc(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x000107345b6c();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107326904; end: 107326927;  */

void FUN_107326904(void)

{
  func_0x000107346a38();
  FUN_107326aec();
  func_0x000107345ab0();
  return;
}



/* Entry: 107326928; end: 10732692b;  */

void FUN_107326928(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a1248;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10732692c; end: 10732693f;  */

void FUN_10732692c(void)

{
  func_0x00010732694c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107326940; end: 107326957;  */

/* WARNING: Possible PIC construction at 0x00010738de50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010738de54) */

long FUN_107326940(long param_1)

{
  long lVar1;
  long lVar2;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_1 + 0x68);
  for (lVar2 = *(long *)(param_1 + 0x60); lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x00010738ed20();
    (*extraout_x8)();
  }
  FUN_10738e150(param_1 + 0x80);
  FUN_10738df50((long *)(param_1 + 0x60));
  lVar2 = param_1 + 0x48;
  func_0x00010725c0a0();
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x18;
}



/* Entry: 107326958; end: 10732699f;  */

void FUN_107326958(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x9;
  long extraout_x9_00;
  long lVar1;
  int extraout_w11;
  undefined1 auStack_30 [16];
  
  func_0x000107346060();
  lVar1 = extraout_x9;
  if (extraout_x8 != 0) {
    do {
      func_0x00010734740c();
      lVar1 = extraout_x9_00;
    } while (extraout_w11 != 0);
  }
  FUN_1073269a0(param_1,auStack_30,*(undefined8 *)(lVar1 + 0x10));
  func_0x0001073460e8();
  return;
}



/* Entry: 1073269a0; end: 107326a53;  */

void FUN_1073269a0(void)

{
  func_0x0001073451c0();
  return;
}



/* Entry: 107326a54; end: 107326ab7;  */

void FUN_107326a54(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107348074();
  func_0x000107344ef0();
  FUN_107324d80();
  func_0x000107346698();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107346970();
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107347f90();
      FUN_107326ab8();
    }
    func_0x000107347df8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107326ab8; end: 107326adb;  */

undefined8 FUN_107326ab8(void)

{
  undefined8 unaff_x19;
  
  func_0x000107346368();
  func_0x000107346650();
  func_0x000107346a38();
  FUN_107326aec();
  func_0x000107345ab0();
  return unaff_x19;
}



/* Entry: 107326adc; end: 107326aeb;  */

long FUN_107326adc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 107326aec; end: 107326b67;  */

void FUN_107326aec(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107326b68; end: 107326b6f;  */

void FUN_107326b68(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x48;
    func_0x0001073268a8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107326b70; end: 107326bcf;  */

void FUN_107326b70(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x48;
    func_0x0001073268a8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107326bd0; end: 107326be7;  */

long FUN_107326bd0(long param_1)

{
  undefined1 *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  puVar1 = *(undefined1 **)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) - (long)puVar1 < 1) {
    func_0x000107303c4c(param_1,1);
    puVar1 = *(undefined1 **)(param_1 + 0x18);
  }
  *(undefined1 **)(param_1 + 0x18) = puVar1 + 1;
  *puVar1 = 0;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
  return *(long *)(param_1 + 0x10);
}



/* Entry: 107326be8; end: 107326c37;  */

undefined8 FUN_107326be8(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) - (long)puVar1 < 1) {
    func_0x000107303c4c(param_1,1);
    puVar1 = *(undefined1 **)(param_1 + 0x18);
  }
  *(undefined1 **)(param_1 + 0x18) = puVar1 + 1;
  *puVar1 = 0;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107326c38; end: 107326c6b;  */

void FUN_107326c38(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 in_register_00005008;
  
  func_0x0001073460a0();
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_107323dd0(param_2 + 2,param_3 + 2);
  return;
}



/* Entry: 107326c6c; end: 107326c8f;  */

long FUN_107326c6c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107346d78();
  func_0x000107324968();
  lVar1 = unaff_x19;
  func_0x000107345acc();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 107326c90; end: 107326cab;  */

long FUN_107326c90(long param_1,long param_2,long param_3)

{
  if (*(int *)(param_1 + 0x38) == 1) {
    return param_1;
  }
  func_0x00010563ab98();
  func_0x000107346c9c();
  func_0x000107347f70();
  if (param_3 - param_2 != 0) {
    func_0x0001072d527c(param_1,param_3 - param_2);
    func_0x0001073460c8();
    FUN_107326d18();
  }
  func_0x00010734660c();
  func_0x0001072d52b0();
  return param_1;
}



/* Entry: 107326cac; end: 107326d17;  */

undefined8 FUN_107326cac(undefined8 param_1,long param_2,long param_3)

{
  func_0x000107346c9c();
  func_0x000107347f70();
  if (param_3 - param_2 != 0) {
    func_0x0001072d527c(param_1,param_3 - param_2);
    func_0x0001073460c8();
    FUN_107326d18();
  }
  func_0x00010734660c();
  func_0x0001072d52b0();
  return param_1;
}



/* Entry: 107326d18; end: 107326d3b;  */

void FUN_107326d18(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 107326d3c; end: 107326d4f;  */

void FUN_107326d3c(void)

{
  FUN_107326e9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107326d50; end: 107326d6b;  */

uint * FUN_107326d50(long param_1)

{
  uint *puVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = (uint *)(param_1 + 0x18);
  FUN_107326ed4();
  func_0x000107302960(param_1 + 0x40);
  sVar2 = *(short *)(param_1 + 0x2e);
  if (sVar2 == 3) {
    lVar4 = *(long *)(param_1 + 0x20);
    lVar3 = lVar4;
    for (; lVar4 != lVar3 + (ulong)*puVar1 * 0x30; lVar4 = lVar4 + 0x30) {
      FUN_107326e78();
      lVar3 = *(long *)(param_1 + 0x20);
    }
  }
  else if (sVar2 == 0xc05) {
    lVar3 = *(long *)(param_1 + 0x20);
  }
  else {
    if (sVar2 != 4) {
      return puVar1;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    for (lVar4 = lVar3; lVar4 != lVar3 + (ulong)*puVar1 * 0x18; lVar4 = lVar4 + 0x18) {
      FUN_107326ddc();
    }
  }
  _free(lVar3);
  return puVar1;
}



/* Entry: 107326d6c; end: 107326ddb;  */

undefined8 * FUN_107326d6c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = param_4;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = param_3;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  if (param_2 == 0) {
    uVar1 = 1;
    __Znwm();
    param_1[3] = uVar1;
    param_1[4] = uVar1;
  }
  return param_1;
}



/* Entry: 107326ddc; end: 107326e77;  */

uint * FUN_107326ddc(uint *param_1)

{
  short sVar1;
  long lVar2;
  long lVar3;
  
  sVar1 = *(short *)((long)param_1 + 0x16);
  if (sVar1 == 3) {
    lVar3 = *(long *)(param_1 + 2);
    lVar2 = lVar3;
    for (; lVar3 != lVar2 + (ulong)*param_1 * 0x30; lVar3 = lVar3 + 0x30) {
      FUN_107326e78();
      lVar2 = *(long *)(param_1 + 2);
    }
  }
  else if (sVar1 == 0xc05) {
    lVar2 = *(long *)(param_1 + 2);
  }
  else {
    if (sVar1 != 4) {
      return param_1;
    }
    lVar2 = *(long *)(param_1 + 2);
    for (lVar3 = lVar2; lVar3 != lVar2 + (ulong)*param_1 * 0x18; lVar3 = lVar3 + 0x18) {
      FUN_107326ddc();
    }
  }
  _free(lVar2);
  return param_1;
}



/* Entry: 107326e78; end: 107326e9b;  */

void FUN_107326e78(void)

{
  short sVar1;
  uint *unaff_x19;
  long lVar2;
  long lVar3;
  
  func_0x000107346b14();
  FUN_107326ddc();
  sVar1 = *(short *)((long)unaff_x19 + 0x16);
  if (sVar1 == 3) {
    lVar3 = *(long *)(unaff_x19 + 2);
    lVar2 = lVar3;
    for (; lVar3 != lVar2 + (ulong)*unaff_x19 * 0x30; lVar3 = lVar3 + 0x30) {
      FUN_107326e78();
      lVar2 = *(long *)(unaff_x19 + 2);
    }
  }
  else if (sVar1 == 0xc05) {
    lVar2 = *(long *)(unaff_x19 + 2);
  }
  else {
    if (sVar1 != 4) {
      return;
    }
    lVar2 = *(long *)(unaff_x19 + 2);
    for (lVar3 = lVar2; lVar3 != lVar2 + (ulong)*unaff_x19 * 0x18; lVar3 = lVar3 + 0x18) {
      FUN_107326ddc();
    }
  }
  _free(lVar2);
  return;
}



/* Entry: 107326e9c; end: 107326ea7;  */

void FUN_107326e9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109a12b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107326ea8; end: 107326ed3;  */

uint * FUN_107326ea8(uint *param_1)

{
  short sVar1;
  long lVar2;
  long lVar3;
  
  FUN_107326ed4();
  func_0x000107302960(param_1 + 10);
  sVar1 = *(short *)((long)param_1 + 0x16);
  if (sVar1 == 3) {
    lVar3 = *(long *)(param_1 + 2);
    lVar2 = lVar3;
    for (; lVar3 != lVar2 + (ulong)*param_1 * 0x30; lVar3 = lVar3 + 0x30) {
      FUN_107326e78();
      lVar2 = *(long *)(param_1 + 2);
    }
  }
  else if (sVar1 == 0xc05) {
    lVar2 = *(long *)(param_1 + 2);
  }
  else {
    if (sVar1 != 4) {
      return param_1;
    }
    lVar2 = *(long *)(param_1 + 2);
    for (lVar3 = lVar2; lVar3 != lVar2 + (ulong)*param_1 * 0x18; lVar3 = lVar3 + 0x18) {
      FUN_107326ddc();
    }
  }
  _free(lVar2);
  return param_1;
}



/* Entry: 107326ed4; end: 107326f3b;  */

void FUN_107326ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107326f3c; end: 107326f7f;  */

void FUN_107326f3c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107345eb4(param_1,param_2,param_2);
  FUN_107326ff0();
  return;
}



/* Entry: 107326f80; end: 107326f9f;  */

undefined4 FUN_107326f80(undefined8 *param_1)

{
  return *(undefined4 *)*param_1;
}



/* Entry: 107326fa0; end: 107326fd7;  */

void FUN_107326fa0(void)

{
  func_0x000107345eb4();
  func_0x000107327484();
  return;
}



/* Entry: 107326fd8; end: 107326fef;  */

/* WARNING: Possible PIC construction at 0x0001073277d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073277d8) */

void FUN_107326fd8(undefined8 param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined1 in_ZR;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *unaff_x19;
  uint *puVar8;
  long lVar9;
  undefined8 ***pppuVar10;
  undefined8 uVar11;
  undefined8 in_register_00005008;
  undefined4 auStack_1a0 [16];
  uint *puStack_160;
  undefined8 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint auStack_e0 [16];
  byte bStack_a0;
  undefined8 *puStack_70;
  code *pcStack_68;
  uint auStack_60 [16];
  
  puVar5 = (uint *)*param_2;
  puVar8 = auStack_60;
  func_0x0001073447e0();
  if ((*(ushort *)((long)puVar5 + 0x16) >> 10 & 1) == 0) {
    func_0x000107346ed8();
    puVar8 = puVar5;
  }
  else {
    if ((*(ushort *)((long)puVar5 + 0x16) >> 0xc & 1) == 0) {
      uVar1 = *puVar5;
      param_3 = *(uint **)(puVar5 + 2);
    }
    else {
      uVar1 = 0x15 - (int)*(char *)((long)puVar5 + 0x15);
      param_3 = puVar5;
    }
    func_0x000104c302a4(auStack_60,param_3,uVar1);
    func_0x000107346020();
    func_0x0001072627ac();
    func_0x000104c2f714();
  }
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar4 = (undefined4 *)auStack_140;
  pcStack_68 = FUN_1073275e4;
  pppuVar10 = (undefined8 ***)&puStack_70;
  puStack_70 = (undefined8 *)&stack0xfffffffffffffff0;
  func_0x0001073447e0();
  uVar2 = *(ushort *)((long)puVar8 + 0x16);
  switch(uVar2 & 7) {
  default:
    *unaff_x19 = 6;
    *(undefined1 *)(unaff_x19 + 2) = 0;
    goto code_r0x000107327838;
  case 2:
    *unaff_x19 = 6;
    *(undefined1 *)(unaff_x19 + 2) = 1;
    goto code_r0x000107327838;
  case 3:
    puStack_138 = &UNK_10e52b660;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    param_3 = (uint *)(ulong)*puVar8;
    func_0x000104c32780(&puStack_138);
    uVar1 = *puVar8;
    puVar8 = (uint *)(*(long *)(puVar8 + 2) + 0x18);
    lVar9 = (ulong)uVar1 * 0x30;
    do {
      if (lVar9 == 0) {
        func_0x000104c33260(auStack_e0,&puStack_138);
        param_3 = auStack_e0;
        uVar11 = 0x1073277d8;
        puVar6 = unaff_x19;
        goto code_r0x00010732791c;
      }
      FUN_1073275e4(auStack_e0,puVar8);
      bVar3 = bStack_a0;
      in_ZR = bStack_a0 == 1;
      if ((bool)in_ZR) {
        if ((*(ushort *)((long)puVar8 + -2) >> 0xc & 1) == 0) {
          puVar5 = *(uint **)(puVar8 + -4);
        }
        else {
          puVar5 = puVar8 + -6;
        }
        func_0x000100060964(&uStack_118,puVar5);
        func_0x000107267f10(&puStack_138,&uStack_118);
        param_3 = auStack_e0;
        func_0x0001072d80fc();
        func_0x000104c2f714(&uStack_118);
      }
      else {
        *(undefined1 *)unaff_x19 = 0;
        *(undefined1 *)(unaff_x19 + 0x10) = 0;
      }
      func_0x000107346ea0();
      puVar8 = puVar8 + 0xc;
      lVar9 = lVar9 + -0x30;
    } while ((bVar3 & 1) != 0);
    func_0x000104c33548(&puStack_138);
    break;
  case 4:
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    param_3 = (uint *)(ulong)*puVar8;
    func_0x0001072ac134(&uStack_118);
    lVar9 = *(long *)(puVar8 + 2);
    puVar8 = (uint *)((ulong)*puVar8 * 0x18);
    do {
      if (puVar8 == (uint *)0x0) {
        FUN_107327958(auStack_e0,&uStack_118);
        param_3 = auStack_e0;
        FUN_107327980();
        func_0x000104c33108(auStack_e0);
        puVar8 = (uint *)0x0;
        break;
      }
      FUN_1073275e4(auStack_e0,lVar9);
      bVar3 = bStack_a0;
      in_ZR = bStack_a0 == 1;
      if ((bool)in_ZR) {
        param_3 = auStack_e0;
        func_0x0001072d7f34(&uStack_118);
      }
      else {
        *(undefined1 *)unaff_x19 = 0;
        *(undefined1 *)(unaff_x19 + 0x10) = 0;
      }
      func_0x000107346ea0();
      lVar9 = lVar9 + 0x18;
      puVar8 = puVar8 + -6;
    } while ((bVar3 & 1) != 0);
    func_0x000107269124(&uStack_118);
    break;
  case 5:
    if ((uVar2 >> 0xc & 1) == 0) {
      uVar1 = *puVar8;
      puVar8 = *(uint **)(puVar8 + 2);
    }
    else {
      uVar1 = 0x15 - (int)*(char *)((long)puVar8 + 0x15);
    }
    func_0x000104c302a4(auStack_e0,puVar8,uVar1);
    param_3 = auStack_e0;
    FUN_1073278c4();
    func_0x0001073460f0();
    break;
  case 6:
    if ((uVar2 >> 8 & 1) == 0) {
      if ((uVar2 >> 7 & 1) == 0) {
        FUN_1073274d0(puVar8);
        *unaff_x19 = 3;
        *(undefined8 *)(unaff_x19 + 2) = param_1;
        goto code_r0x000107327838;
      }
      uVar11 = *(undefined8 *)puVar8;
      uVar7 = 4;
    }
    else {
      uVar11 = *(undefined8 *)puVar8;
      uVar7 = 5;
    }
    *unaff_x19 = uVar7;
    *(undefined8 *)(unaff_x19 + 2) = uVar11;
code_r0x000107327838:
    *(undefined1 *)(unaff_x19 + 0x10) = 1;
    break;
  case 7:
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107346258();
  func_0x000104c335c0();
  func_0x000104c33548(&puStack_138);
  func_0x000107345604();
  puVar4 = auStack_1a0;
  puVar6 = auStack_1a0;
  pcStack_148 = FUN_1073278c4;
  puStack_160 = puVar8;
  ppuStack_150 = pppuVar10;
  func_0x0001073448a8();
  func_0x000104c318bc(auStack_1a0);
  func_0x000107346020();
  func_0x000104c33004();
  func_0x000104c2f714();
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  uVar11 = 0x10732791c;
  ___stack_chk_fail();
  pppuVar10 = &ppuStack_150;
code_r0x00010732791c:
  *(uint **)((long)puVar4 + -0x20) = puVar8;
  *(undefined4 **)((long)puVar4 + -0x18) = unaff_x19;
  *(undefined8 ****)((long)puVar4 + -0x10) = pppuVar10;
  *(undefined8 *)((long)puVar4 + -8) = uVar11;
  func_0x0001073460a0();
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *puVar6 = 1;
  *(undefined8 *)(puVar6 + 4) = in_register_00005008;
  *(undefined8 *)(puVar6 + 2) = param_1;
  *(undefined8 *)((long)puVar4 + -0x30) = 0;
  *(undefined8 *)((long)puVar4 + -0x28) = 0;
  func_0x000107346e60();
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  return;
}



/* Entry: 107326ff0; end: 1073270c7;  */

/* WARNING: Possible PIC construction at 0x000107327010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107327014) */
/* WARNING: Removing unreachable block (ram,0x000107327038) */
/* WARNING: Removing unreachable block (ram,0x000107327018) */
/* WARNING: Removing unreachable block (ram,0x000107327040) */
/* WARNING: Removing unreachable block (ram,0x000107327054) */
/* WARNING: Removing unreachable block (ram,0x00010732704c) */
/* WARNING: Removing unreachable block (ram,0x000107344d98) */

void FUN_107326ff0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x0001073447e0();
  uVar2 = *param_2;
  func_0x000100a2b988(uVar2,param_3);
  iVar1 = (int)uVar2;
  func_0x000107327090();
  if (iVar1 != 0) {
    func_0x000107345dfc();
    FUN_107327234();
  }
  return;
}



/* Entry: 1073270c8; end: 1073270e7;  */

undefined8 FUN_1073270c8(void)

{
  undefined8 uStack_18;
  
  FUN_1073270e8(&uStack_18);
  return uStack_18;
}



/* Entry: 1073270e8; end: 10732714f;  */

void FUN_1073270e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  ulong uVar2;
  uint *extraout_x8;
  long lVar3;
  ulong unaff_x19;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x000100a2b988();
  func_0x000107344a90();
  _strlen(param_2);
  func_0x0001073476b0();
  FUN_107327150(extraout_x8);
  FUN_107326ddc();
  func_0x0001073447cc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345740();
  FUN_107326ddc();
  func_0x000107345604();
  func_0x00010734742c();
  lVar3 = *(long *)(puVar1 + 8);
  lVar4 = lVar3;
  while ((lVar4 != lVar3 + (ulong)*extraout_x8 * 0x30 &&
         (uVar2 = unaff_x19, FUN_1073271ac(), (uVar2 & 1) == 0))) {
    lVar4 = lVar4 + 0x30;
    lVar3 = *(long *)(extraout_x8 + 2);
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 107327150; end: 1073271ab;  */

void FUN_107327150(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong unaff_x19;
  long *unaff_x20;
  uint *unaff_x21;
  long lVar3;
  
  func_0x00010734742c();
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = lVar2;
  while ((lVar3 != lVar2 + (ulong)*unaff_x21 * 0x30 &&
         (uVar1 = unaff_x19, FUN_1073271ac(), (uVar1 & 1) == 0))) {
    lVar3 = lVar3 + 0x30;
    lVar2 = *(long *)(unaff_x21 + 2);
  }
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 1073271ac; end: 107327233;  */

bool FUN_1073271ac(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(ushort *)((long)param_1 + 0x16) >> 0xc & 1) == 0) {
    iVar3 = *param_1;
  }
  else {
    iVar3 = 0x15 - *(char *)((long)param_1 + 0x15);
  }
  iVar1 = *param_2;
  if ((*(ushort *)((long)param_2 + 0x16) & 0x1000) != 0) {
    iVar1 = 0x15 - *(char *)((long)param_2 + 0x15);
  }
  if (iVar3 == iVar1) {
    if ((*(ushort *)((long)param_1 + 0x16) >> 0xc & 1) == 0) {
      param_1 = *(int **)(param_1 + 2);
    }
    piVar2 = *(int **)(param_2 + 2);
    if ((*(ushort *)((long)param_2 + 0x16) & 0x1000) != 0) {
      piVar2 = param_2;
    }
    if (param_1 != piVar2) {
      _memcmp(param_1,piVar2,iVar3);
      return (int)param_1 == 0;
    }
    return true;
  }
  return false;
}



/* Entry: 107327234; end: 107327293;  */

void FUN_107327234(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  uint *unaff_x20;
  long lStack_68;
  undefined8 uStack_28;
  
  func_0x000100a2b988();
  func_0x000107344a90();
  _strlen(param_2);
  func_0x0001073476b0();
  FUN_107327294();
  func_0x000107345740();
  FUN_107326ddc();
  func_0x0001073447cc(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107345740();
    FUN_107326ddc();
    func_0x000107345604();
    FUN_107327150(&lStack_68);
    if (lStack_68 == *(long *)(unaff_x20 + 2) + (ulong)*unaff_x20 * 0x30) {
      func_0x000107346c9c(0x1131ad368);
    }
    return;
  }
  return;
}



/* Entry: 107327294; end: 1073272e7;  */

void FUN_107327294(uint *param_1)

{
  long lStack_28;
  
  FUN_107327150(&lStack_28);
  if (lStack_28 == *(long *)(param_1 + 2) + (ulong)*param_1 * 0x30) {
    func_0x000107346c9c(0x1131ad368);
  }
  return;
}



/* Entry: 1073272e8; end: 1073272ff;  */

void FUN_1073272e8(void)

{
  FUN_107327300();
  func_0x000107347c48();
  return;
}



/* Entry: 107327300; end: 107327337;  */

void FUN_107327300(undefined8 *param_1)

{
  undefined8 *extraout_x8;
  undefined8 *puVar1;
  
  func_0x000107345760();
  puVar1 = (undefined8 *)*extraout_x8;
  *param_1 = puVar1;
  (*(code *)*puVar1)(extraout_x8 + 1,param_1 + 1);
  return;
}



/* Entry: 107327338; end: 1073273df;  */

void FUN_107327338(long param_1,uint *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 2) + 0x18;
  lVar4 = (ulong)*param_2 * 0x30;
  lVar2 = (ulong)*param_2 * 3;
  while( true ) {
    if (lVar2 == 0) {
      func_0x00010734615c();
      return;
    }
    if ((*(ushort *)(lVar1 + -2) >> 0xc & 1) == 0) {
      lVar2 = *(long *)(lVar1 + -0x10);
      iVar3 = *(int *)(lVar1 + -0x18);
    }
    else {
      lVar2 = lVar1 + -0x18;
      iVar3 = 0x15 - (uint)*(byte *)(lVar1 + -3);
    }
    lStack_48 = lVar1;
    FUN_1073273e0(param_1,param_3,lVar2,iVar3,&lStack_48);
    if ((*(byte *)(param_1 + 0x18) & 1) != 0) break;
    FUN_1073249ac(param_1);
    lVar1 = lVar1 + 0x30;
    lVar4 = lVar4 + -0x30;
    lVar2 = lVar4;
  }
  return;
}



/* Entry: 1073273e0; end: 10732743f;  */

void FUN_1073273e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x9;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107344b40();
  uStack_30 = *param_4;
  ppuStack_38 = &PTR_DAT_1131ad2e8;
  uStack_28 = extraout_x9;
  FUN_107327440(*param_1);
  func_0x0001072f5f6c(&ppuStack_38);
  func_0x0001073447cc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345834();
  func_0x0001072f5f6c();
  func_0x000107345604();
  func_0x000107327464();
  return;
}



/* Entry: 107327440; end: 1073274cf;  */

void FUN_107327440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x000107327464(param_1,&uStack_20,param_4);
  return;
}



/* Entry: 1073274d0; end: 107327517;  */

double FUN_1073274d0(double *param_1)

{
  ushort uVar1;
  double dVar2;
  
  uVar1 = *(ushort *)((long)param_1 + 0x16);
  if ((uVar1 >> 9 & 1) != 0) {
    return *param_1;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    return (double)*(int *)param_1;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    dVar2 = (double)NEON_ucvtf((ulong)*(uint *)param_1);
    return dVar2;
  }
  if ((uVar1 >> 7 & 1) == 0) {
    return (double)(ulong)*param_1;
  }
  return (double)(long)*param_1;
}



/* Entry: 107327518; end: 107327563;  */

void FUN_107327518(undefined8 param_1,undefined8 *param_2)

{
  func_0x000107327534(*param_2);
  return;
}



/* Entry: 107327564; end: 1073275e3;  */

/* WARNING: Possible PIC construction at 0x0001073277d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073277d8) */

void FUN_107327564(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined1 in_ZR;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 *unaff_x19;
  uint *puVar8;
  long lVar9;
  undefined8 ***pppuVar10;
  undefined8 uVar11;
  undefined8 in_register_00005008;
  undefined4 auStack_1a0 [16];
  uint *puStack_160;
  undefined8 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint auStack_e0 [16];
  byte bStack_a0;
  undefined8 *puStack_70;
  code *pcStack_68;
  uint auStack_60 [16];
  
  puVar8 = auStack_60;
  func_0x0001073447e0();
  if ((*(ushort *)((long)param_2 + 0x16) >> 10 & 1) == 0) {
    func_0x000107346ed8();
    puVar8 = param_2;
  }
  else {
    if ((*(ushort *)((long)param_2 + 0x16) >> 0xc & 1) == 0) {
      uVar1 = *param_2;
      param_3 = *(uint **)(param_2 + 2);
    }
    else {
      uVar1 = 0x15 - (int)*(char *)((long)param_2 + 0x15);
      param_3 = param_2;
    }
    func_0x000104c302a4(auStack_60,param_3,uVar1);
    func_0x000107346020();
    func_0x0001072627ac();
    func_0x000104c2f714();
  }
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar4 = (undefined4 *)auStack_140;
  pcStack_68 = FUN_1073275e4;
  pppuVar10 = (undefined8 ***)&puStack_70;
  puStack_70 = (undefined8 *)&stack0xfffffffffffffff0;
  func_0x0001073447e0();
  uVar2 = *(ushort *)((long)puVar8 + 0x16);
  switch(uVar2 & 7) {
  default:
    *unaff_x19 = 6;
    *(undefined1 *)(unaff_x19 + 2) = 0;
    goto code_r0x000107327838;
  case 2:
    *unaff_x19 = 6;
    *(undefined1 *)(unaff_x19 + 2) = 1;
    goto code_r0x000107327838;
  case 3:
    puStack_138 = &UNK_10e52b660;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    param_3 = (uint *)(ulong)*puVar8;
    func_0x000104c32780(&puStack_138);
    uVar1 = *puVar8;
    puVar8 = (uint *)(*(long *)(puVar8 + 2) + 0x18);
    lVar9 = (ulong)uVar1 * 0x30;
    do {
      if (lVar9 == 0) {
        func_0x000104c33260(auStack_e0,&puStack_138);
        param_3 = auStack_e0;
        uVar11 = 0x1073277d8;
        puVar5 = unaff_x19;
        goto code_r0x00010732791c;
      }
      FUN_1073275e4(auStack_e0,puVar8);
      bVar3 = bStack_a0;
      in_ZR = bStack_a0 == 1;
      if ((bool)in_ZR) {
        if ((*(ushort *)((long)puVar8 + -2) >> 0xc & 1) == 0) {
          puVar6 = *(uint **)(puVar8 + -4);
        }
        else {
          puVar6 = puVar8 + -6;
        }
        func_0x000100060964(&uStack_118,puVar6);
        func_0x000107267f10(&puStack_138,&uStack_118);
        param_3 = auStack_e0;
        func_0x0001072d80fc();
        func_0x000104c2f714(&uStack_118);
      }
      else {
        *(undefined1 *)unaff_x19 = 0;
        *(undefined1 *)(unaff_x19 + 0x10) = 0;
      }
      func_0x000107346ea0();
      puVar8 = puVar8 + 0xc;
      lVar9 = lVar9 + -0x30;
    } while ((bVar3 & 1) != 0);
    func_0x000104c33548(&puStack_138);
    break;
  case 4:
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    param_3 = (uint *)(ulong)*puVar8;
    func_0x0001072ac134(&uStack_118);
    lVar9 = *(long *)(puVar8 + 2);
    puVar8 = (uint *)((ulong)*puVar8 * 0x18);
    do {
      if (puVar8 == (uint *)0x0) {
        FUN_107327958(auStack_e0,&uStack_118);
        param_3 = auStack_e0;
        FUN_107327980();
        func_0x000104c33108(auStack_e0);
        puVar8 = (uint *)0x0;
        break;
      }
      FUN_1073275e4(auStack_e0,lVar9);
      bVar3 = bStack_a0;
      in_ZR = bStack_a0 == 1;
      if ((bool)in_ZR) {
        param_3 = auStack_e0;
        func_0x0001072d7f34(&uStack_118);
      }
      else {
        *(undefined1 *)unaff_x19 = 0;
        *(undefined1 *)(unaff_x19 + 0x10) = 0;
      }
      func_0x000107346ea0();
      lVar9 = lVar9 + 0x18;
      puVar8 = puVar8 + -6;
    } while ((bVar3 & 1) != 0);
    func_0x000107269124(&uStack_118);
    break;
  case 5:
    if ((uVar2 >> 0xc & 1) == 0) {
      uVar1 = *puVar8;
      puVar8 = *(uint **)(puVar8 + 2);
    }
    else {
      uVar1 = 0x15 - (int)*(char *)((long)puVar8 + 0x15);
    }
    func_0x000104c302a4(auStack_e0,puVar8,uVar1);
    param_3 = auStack_e0;
    FUN_1073278c4();
    func_0x0001073460f0();
    break;
  case 6:
    if ((uVar2 >> 8 & 1) == 0) {
      if ((uVar2 >> 7 & 1) == 0) {
        FUN_1073274d0(puVar8);
        *unaff_x19 = 3;
        *(undefined8 *)(unaff_x19 + 2) = param_1;
        goto code_r0x000107327838;
      }
      uVar11 = *(undefined8 *)puVar8;
      uVar7 = 4;
    }
    else {
      uVar11 = *(undefined8 *)puVar8;
      uVar7 = 5;
    }
    *unaff_x19 = uVar7;
    *(undefined8 *)(unaff_x19 + 2) = uVar11;
code_r0x000107327838:
    *(undefined1 *)(unaff_x19 + 0x10) = 1;
    break;
  case 7:
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107346258();
  func_0x000104c335c0();
  func_0x000104c33548(&puStack_138);
  func_0x000107345604();
  puVar4 = auStack_1a0;
  puVar5 = auStack_1a0;
  pcStack_148 = FUN_1073278c4;
  puStack_160 = puVar8;
  ppuStack_150 = pppuVar10;
  func_0x0001073448a8();
  func_0x000104c318bc(auStack_1a0);
  func_0x000107346020();
  func_0x000104c33004();
  func_0x000104c2f714();
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  uVar11 = 0x10732791c;
  ___stack_chk_fail();
  pppuVar10 = &ppuStack_150;
code_r0x00010732791c:
  *(uint **)((long)puVar4 + -0x20) = puVar8;
  *(undefined4 **)((long)puVar4 + -0x18) = unaff_x19;
  *(undefined8 ****)((long)puVar4 + -0x10) = pppuVar10;
  *(undefined8 *)((long)puVar4 + -8) = uVar11;
  func_0x0001073460a0();
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *puVar5 = 1;
  *(undefined8 *)(puVar5 + 4) = in_register_00005008;
  *(undefined8 *)(puVar5 + 2) = param_1;
  *(undefined8 *)((long)puVar4 + -0x30) = 0;
  *(undefined8 *)((long)puVar4 + -0x28) = 0;
  func_0x000107346e60();
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  return;
}



/* Entry: 1073275e4; end: 1073278c3;  */

/* WARNING: Possible PIC construction at 0x0001073277d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073277d8) */

void FUN_1073275e4(undefined8 param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined1 in_ZR;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 *unaff_x19;
  long lVar8;
  undefined8 ***pppuVar9;
  undefined8 uVar10;
  undefined8 in_register_00005008;
  undefined4 auStack_140 [16];
  uint *puStack_100;
  undefined8 **ppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_80 [8];
  byte bStack_40;
  
  puVar4 = (undefined4 *)auStack_e0;
  pppuVar9 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x0001073447e0();
  uVar2 = *(ushort *)((long)param_2 + 0x16);
  switch(uVar2 & 7) {
  default:
    *unaff_x19 = 6;
    *(undefined1 *)(unaff_x19 + 2) = 0;
    goto code_r0x000107327838;
  case 2:
    *unaff_x19 = 6;
    *(undefined1 *)(unaff_x19 + 2) = 1;
    goto code_r0x000107327838;
  case 3:
    puStack_d8 = &UNK_10e52b660;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    param_3 = (undefined8 *)(ulong)*param_2;
    func_0x000104c32780(&puStack_d8);
    uVar1 = *param_2;
    param_2 = (uint *)(*(long *)(param_2 + 2) + 0x18);
    lVar8 = (ulong)uVar1 * 0x30;
    do {
      if (lVar8 == 0) {
        func_0x000104c33260(auStack_80,&puStack_d8);
        param_3 = auStack_80;
        uVar10 = 0x1073277d8;
        puVar5 = unaff_x19;
        goto code_r0x00010732791c;
      }
      FUN_1073275e4(auStack_80,param_2);
      bVar3 = bStack_40;
      in_ZR = bStack_40 == 1;
      if ((bool)in_ZR) {
        if ((*(ushort *)((long)param_2 + -2) >> 0xc & 1) == 0) {
          puVar6 = *(uint **)(param_2 + -4);
        }
        else {
          puVar6 = param_2 + -6;
        }
        func_0x000100060964(&uStack_b8,puVar6);
        func_0x000107267f10(&puStack_d8,&uStack_b8);
        param_3 = auStack_80;
        func_0x0001072d80fc();
        func_0x000104c2f714(&uStack_b8);
      }
      else {
        *(undefined1 *)unaff_x19 = 0;
        *(undefined1 *)(unaff_x19 + 0x10) = 0;
      }
      func_0x000107346ea0();
      param_2 = param_2 + 0xc;
      lVar8 = lVar8 + -0x30;
    } while ((bVar3 & 1) != 0);
    func_0x000104c33548(&puStack_d8);
    break;
  case 4:
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    param_3 = (undefined8 *)(ulong)*param_2;
    func_0x0001072ac134(&uStack_b8);
    lVar8 = *(long *)(param_2 + 2);
    param_2 = (uint *)((ulong)*param_2 * 0x18);
    do {
      if (param_2 == (uint *)0x0) {
        FUN_107327958(auStack_80,&uStack_b8);
        param_3 = auStack_80;
        FUN_107327980();
        func_0x000104c33108(auStack_80);
        param_2 = (uint *)0x0;
        break;
      }
      FUN_1073275e4(auStack_80,lVar8);
      bVar3 = bStack_40;
      in_ZR = bStack_40 == 1;
      if ((bool)in_ZR) {
        param_3 = auStack_80;
        func_0x0001072d7f34(&uStack_b8);
      }
      else {
        *(undefined1 *)unaff_x19 = 0;
        *(undefined1 *)(unaff_x19 + 0x10) = 0;
      }
      func_0x000107346ea0();
      lVar8 = lVar8 + 0x18;
      param_2 = param_2 + -6;
    } while ((bVar3 & 1) != 0);
    func_0x000107269124(&uStack_b8);
    break;
  case 5:
    if ((uVar2 >> 0xc & 1) == 0) {
      uVar1 = *param_2;
      param_2 = *(uint **)(param_2 + 2);
    }
    else {
      uVar1 = 0x15 - (int)*(char *)((long)param_2 + 0x15);
    }
    func_0x000104c302a4(auStack_80,param_2,uVar1);
    param_3 = auStack_80;
    FUN_1073278c4();
    func_0x0001073460f0();
    break;
  case 6:
    if ((uVar2 >> 8 & 1) == 0) {
      if ((uVar2 >> 7 & 1) == 0) {
        FUN_1073274d0(param_2);
        *unaff_x19 = 3;
        *(undefined8 *)(unaff_x19 + 2) = param_1;
        goto code_r0x000107327838;
      }
      uVar10 = *(undefined8 *)param_2;
      uVar7 = 4;
    }
    else {
      uVar10 = *(undefined8 *)param_2;
      uVar7 = 5;
    }
    *unaff_x19 = uVar7;
    *(undefined8 *)(unaff_x19 + 2) = uVar10;
code_r0x000107327838:
    *(undefined1 *)(unaff_x19 + 0x10) = 1;
    break;
  case 7:
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107346258();
  func_0x000104c335c0();
  func_0x000104c33548(&puStack_d8);
  func_0x000107345604();
  puVar4 = auStack_140;
  puVar5 = auStack_140;
  pcStack_e8 = FUN_1073278c4;
  puStack_100 = param_2;
  ppuStack_f0 = pppuVar9;
  func_0x0001073448a8();
  func_0x000104c318bc(auStack_140);
  func_0x000107346020();
  func_0x000104c33004();
  func_0x000104c2f714();
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  uVar10 = 0x10732791c;
  ___stack_chk_fail();
  pppuVar9 = &ppuStack_f0;
code_r0x00010732791c:
  *(uint **)((long)puVar4 + -0x20) = param_2;
  *(undefined4 **)((long)puVar4 + -0x18) = unaff_x19;
  *(undefined8 ****)((long)puVar4 + -0x10) = pppuVar9;
  *(undefined8 *)((long)puVar4 + -8) = uVar10;
  func_0x0001073460a0();
  *param_3 = 0;
  param_3[1] = 0;
  *puVar5 = 1;
  *(undefined8 *)(puVar5 + 4) = in_register_00005008;
  *(undefined8 *)(puVar5 + 2) = param_1;
  *(undefined8 *)((long)puVar4 + -0x30) = 0;
  *(undefined8 *)((long)puVar4 + -0x28) = 0;
  func_0x000107346e60();
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  return;
}



/* Entry: 1073278c4; end: 107327957;  */

void FUN_1073278c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined4 auStack_60 [16];
  
  puVar1 = auStack_60;
  func_0x0001073448a8();
  func_0x000104c318bc(auStack_60);
  func_0x000107346020();
  func_0x000104c33004();
  func_0x000104c2f714();
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073460a0();
  *param_3 = 0;
  param_3[1] = 0;
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 4) = in_register_00005008;
  *(undefined8 *)(puVar1 + 2) = param_1;
  func_0x000107346e60();
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  return;
}



/* Entry: 107327958; end: 10732797f;  */

undefined8 FUN_107327958(undefined8 param_1)

{
  func_0x000107268c30(param_1);
  return param_1;
}



/* Entry: 107327980; end: 1073279bb;  */

void FUN_107327980(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  
  func_0x0001073460a0();
  *param_3 = 0;
  param_3[1] = 0;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = in_register_00005008;
  *(undefined8 *)(param_2 + 2) = param_1;
  func_0x00010734750c();
  func_0x000104c33108();
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  return;
}



/* Entry: 1073279bc; end: 107327a73;  */

void FUN_1073279bc(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *unaff_x19;
  undefined1 auStack_b0 [128];
  
  puVar1 = auStack_b0;
  puVar3 = param_2;
  func_0x0001073447e0();
  func_0x00010786fe30(auStack_b0);
  func_0x000107346020();
  FUN_107327a74();
  FUN_107327aec();
  while( true ) {
    iVar2 = (int)puVar3;
    func_0x0001073446ac();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    in_ZR = iVar2 == 1;
    if (!(bool)in_ZR) break;
    ___cxa_begin_catch(puVar1);
    func_0x000107344fa8();
    func_0x00010002b838(auStack_b0,puVar1);
    puVar1 = param_2;
    puVar3 = auStack_b0;
    func_0x000100066230();
    func_0x000107345944();
    *unaff_x19 = 0;
    unaff_x19[0x78] = 0;
    ___cxa_end_catch();
  }
  func_0x000107347a34();
  func_0x000104bd46a0();
  FUN_107327a90();
  puVar1[0x78] = 1;
  return;
}



/* Entry: 107327a74; end: 107327a8f;  */

void FUN_107327a74(long param_1)

{
  FUN_107327a90();
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 107327a90; end: 107327ab3;  */

void FUN_107327a90(void)

{
  func_0x000107348040();
  FUN_107327ab4();
  return;
}



/* Entry: 107327ab4; end: 107327aeb;  */

/* WARNING: Possible PIC construction at 0x00010726d814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010726d818) */

void FUN_107327ab4(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar1;
  
  if (param_1 == 2) {
code_r0x00010726928c:
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010727473c();
    func_0x000104c31c14();
    return;
  }
  if (param_1 == 0) {
    uVar1 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else if (param_1 == 1) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072747d8(param_3);
    unaff_x30 = &UNK_10726d818;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    goto code_r0x00010726928c;
  }
  return;
}



/* Entry: 107327aec; end: 107327b17;  */

undefined4 * FUN_107327aec(undefined4 *param_1)

{
  FUN_107327b18(*param_1,param_1 + 2);
  return param_1;
}



/* Entry: 107327b18; end: 107327b4f;  */

long FUN_107327b18(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x19;
  
  iVar1 = (int)param_1;
  if (iVar1 != 2) {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        lVar2 = param_2;
        func_0x00010726dd50();
        if ((lVar2 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
          func_0x000107274f70();
          func_0x000107275200();
          func_0x000107275208();
        }
        func_0x00010726dd8c(param_2);
        return param_2;
      }
      return param_1;
    }
    func_0x000104c319e0(param_2 + 0x30);
    func_0x000104c335c0(param_2 + 0x20);
  }
  func_0x000104c3463c(param_2);
  func_0x000104c31c04();
  return unaff_x19;
}



/* Entry: 107327b50; end: 107327ccb;  */

void FUN_107327b50(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  uint *unaff_x19;
  uint *unaff_x21;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x000107345c14();
  uVar4 = *(ushort *)(param_2 + 0x16);
  uVar2 = uVar4 & 7;
  if (uVar2 == 5) {
    if (uVar4 != 0x405) {
      func_0x000107346020();
      FUN_107327ccc();
      return;
    }
LAB_107327c50:
    *(ushort *)((long)unaff_x19 + 0x16) = uVar4;
    uVar9 = *(undefined8 *)(unaff_x21 + 2);
    uVar8 = *(undefined8 *)unaff_x21;
    *(undefined8 *)(unaff_x19 + 4) = *(undefined8 *)(unaff_x21 + 4);
    *(undefined8 *)(unaff_x19 + 2) = uVar9;
    *(undefined8 *)unaff_x19 = uVar8;
  }
  else {
    if (uVar2 == 4) {
      uVar3 = *unaff_x21;
      uVar7 = (ulong)uVar3;
      func_0x000107303e28(param_3,uVar7 * 0x18);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        func_0x00010734671c();
        FUN_107327b50();
      }
      *(undefined2 *)((long)unaff_x19 + 0x16) = 4;
      *unaff_x19 = uVar3;
      unaff_x19[1] = uVar3;
    }
    else {
      if (uVar2 != 3) goto LAB_107327c50;
      uVar3 = *unaff_x21;
      uVar7 = (ulong)uVar3;
      lVar5 = param_3;
      func_0x000107303e28(param_3,uVar7 * 0x30);
      lVar6 = *(long *)(unaff_x21 + 2);
      lVar1 = lVar5;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        func_0x00010734671c(lVar1);
        FUN_107327b50();
        FUN_107327b50(lVar1 + 0x18,lVar6 + 0x18,param_3);
        lVar1 = lVar1 + 0x30;
        lVar6 = lVar6 + 0x30;
      }
      *(undefined2 *)((long)unaff_x19 + 0x16) = 3;
      *unaff_x19 = uVar3;
      unaff_x19[1] = uVar3;
      param_3 = lVar5;
    }
    *(long *)(unaff_x19 + 2) = param_3;
  }
  return;
}



/* Entry: 107327ccc; end: 107327d6b;  */

void FUN_107327ccc(undefined8 param_1,long param_2,int *param_3)

{
  int iVar1;
  int *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107345658();
  if (*(uint *)(param_2 + 8) < 0x16) {
    *(undefined2 *)((long)unaff_x19 + 0x16) = 0x1c05;
    *(char *)((long)unaff_x19 + 0x15) = '\x15' - *(char *)(unaff_x20 + 1);
    param_3 = unaff_x19;
  }
  else {
    *(undefined2 *)((long)unaff_x19 + 0x16) = 0xc05;
    iVar1 = *(int *)(unaff_x20 + 1);
    *unaff_x19 = iVar1;
    func_0x000107303e28(param_3,iVar1 + 1);
    *(int **)(unaff_x19 + 2) = param_3;
  }
  _memcpy(param_3,*unaff_x20,*(undefined4 *)(unaff_x20 + 1));
  *(undefined1 *)((long)param_3 + (ulong)*(uint *)(unaff_x20 + 1)) = 0;
  return;
}



/* Entry: 107327d6c; end: 107327d6f;  */

void FUN_107327d6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a1308;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107327d70; end: 107327d83;  */

void FUN_107327d70(void)

{
  func_0x000107327d90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107327d84; end: 107327d9b;  */

void FUN_107327d84(long param_1)

{
  param_1 = param_1 + 0x18;
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107327d9c; end: 107327dbb;  */

void FUN_107327d9c(void)

{
  func_0x000107346404();
  FUN_107327dbc();
  func_0x0001073465ec();
  return;
}



/* Entry: 107327dbc; end: 107327de7;  */

void FUN_107327dbc(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109a3508;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107327de8; end: 107327deb;  */

void FUN_107327de8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a3508;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107327dec; end: 107327dff;  */

void FUN_107327dec(void)

{
  func_0x000107327e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107327e00; end: 107327e27;  */

void FUN_107327e00(long param_1)

{
  func_0x000100154084(param_1 + 0x18);
  func_0x00010015b8ec();
  return;
}



/* Entry: 107327e28; end: 107327e77;  */

void FUN_107327e28(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107327e78; end: 107327e8b;  */

void FUN_107327e78(void)

{
  func_0x000107327e4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107327e8c; end: 107327ebf;  */

undefined8 FUN_107327e8c(undefined8 param_1)

{
  func_0x000107345fbc();
  FUN_107328060();
  return param_1;
}



/* Entry: 107327ec0; end: 107327ee3;  */

undefined8 * FUN_107327ec0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_1109a1358;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  FUN_107323dd0(param_2 + 3,puVar1 + 2);
  return param_2;
}



/* Entry: 107327ee4; end: 10732802b;  */

void FUN_107327ee4(void)

{
  undefined1 uVar1;
  long unaff_x20;
  undefined1 auStack_3a8 [56];
  int iStack_370;
  undefined **ppuStack_368;
  undefined8 uStack_360;
  undefined1 auStack_358 [232];
  undefined1 auStack_1c8 [408];
  
  func_0x000107346ea8();
  func_0x0001073447e0();
  func_0x000107751284(auStack_358);
  func_0x000107751334(auStack_1c8,auStack_358);
  func_0x000107347a58();
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    FUN_107326bd0(unaff_x20 + 0x40);
    func_0x000107347afc(auStack_1c8);
  }
  uStack_360 = *(undefined8 *)(unaff_x20 + 8);
  ppuStack_368 = &PTR_DAT_1131ad2e8;
  func_0x000107751334(auStack_358,auStack_1c8);
  FUN_1073480ac(auStack_3a8,&ppuStack_368,unaff_x20 + 0x18,auStack_358);
  func_0x000107347a58();
  uVar1 = iStack_370 == 1;
  if ((bool)uVar1) {
    FUN_107326c90(auStack_3a8);
    FUN_107326be8();
    FUN_107326c90(auStack_3a8);
    func_0x000107345ba8();
    FUN_107326cac();
  }
  else {
    func_0x000107346b50();
  }
  FUN_1073280c4(auStack_3a8);
  func_0x000107347058();
  func_0x000107267da8();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107267da8(auStack_1c8);
  func_0x000107345604();
  func_0x000107345760();
  func_0x000107345650();
  func_0x000107344bc4();
  return;
}



/* Entry: 10732802c; end: 107328053;  */

void FUN_10732802c(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a13c8);
  func_0x000107344bc4();
  return;
}



/* Entry: 107328054; end: 10732805f;  */

undefined ** FUN_107328054(void)

{
  return &PTR_DAT_1109a13c8;
}



/* Entry: 107328060; end: 1073280c3;  */

undefined8 * FUN_107328060(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_SUB_1109a1358;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  FUN_107323dd0(param_1 + 3,param_2 + 2);
  return param_1;
}



/* Entry: 1073280c4; end: 1073280fb;  */

void FUN_1073280c4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001073460ac();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a13d8)[extraout_x8]);
  }
  func_0x000107347650();
  return;
}



/* Entry: 1073280fc; end: 10732810b;  */

void FUN_1073280fc(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 10732810c; end: 10732836b;  */

void FUN_10732810c(undefined8 *param_1,undefined ***param_2)

{
  undefined ***pppuVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_190 [32];
  long *plStack_170;
  undefined1 auStack_148 [32];
  undefined **appuStack_128 [3];
  long lStack_110;
  undefined ***pppuStack_108;
  undefined1 auStack_100 [8];
  undefined4 uStack_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  char cStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  char cStack_c8;
  undefined **ppuStack_c0;
  int iStack_58;
  char cStack_50;
  
  func_0x000107346d60();
  func_0x0001073448a8();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x000107347554();
  FUN_1073232dc(&lStack_d8);
  uVar2 = 0;
  if (cStack_c8 == '\x01') {
    iVar3 = (int)&lStack_d8;
    func_0x00010777016c();
    if (iVar3 == 0) {
      uVar2 = cStack_c8 == '\x01';
      if ((bool)uVar2) {
        ppuStack_c0 = &PTR_FUN_1109a13f8;
        param_2 = &ppuStack_c0;
        (**(code **)(lStack_d8 + 0x40))(auStack_148,auStack_d0,param_2);
        FUN_1073249ac(auStack_148);
        FUN_1073249cc(&ppuStack_c0);
      }
    }
    else {
      uStack_f8 = 5;
      func_0x00010734753c();
      func_0x0001072ca12c(appuStack_128,auStack_100);
      param_2 = appuStack_128;
      func_0x000107346ef4(&ppuStack_c0,&lStack_d8);
      func_0x0001072c9884(appuStack_128);
      if (cStack_50 == '\x01' && iStack_58 == 9) {
        param_2 = &ppuStack_c0;
        FUN_107328480();
        func_0x00010732849c(&uStack_f0);
      }
      else {
        uStack_f0 = 0;
        cStack_e0 = '\0';
      }
      func_0x000107296ad0(&ppuStack_c0);
      func_0x0001072c9884(auStack_100);
      uVar2 = cStack_e0 == '\x01';
      if ((bool)uVar2) {
        lVar4 = CONCAT71(uStack_ef,uStack_f0);
        func_0x000107296314();
        lStack_110 = lVar4;
        pppuVar1 = param_2;
        while (pppuStack_108 = pppuVar1, lStack_110 != 0) {
          uVar2 = *(int *)(pppuVar1 + 0x14) == 3;
          if ((bool)uVar2) {
            FUN_10732393c(pppuVar1 + 7);
            func_0x00010724ef84(&ppuStack_c0);
            func_0x00010724ef84(appuStack_128,pppuVar1);
            func_0x000100608100();
            param_2 = &ppuStack_c0;
            func_0x000100066230();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_128);
            func_0x000107345e10();
          }
          func_0x0001072963cc(&lStack_110);
          pppuVar1 = pppuStack_108;
        }
      }
      func_0x000107323f70(&uStack_f0);
    }
  }
  plVar5 = &lStack_d8;
  func_0x0001072f5f4c();
  func_0x0001073447cc(extraout_x8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107323f70(&uStack_f0);
    func_0x0001072f5f4c(&lStack_d8);
    func_0x00010028ad98();
    func_0x000107345614();
    plStack_170 = plVar5;
    FUN_1073283b8(auStack_190);
    func_0x0001072a02ac(extraout_x8_00,auStack_190,param_2);
    func_0x0001001148fc(auStack_190);
    return;
  }
  return;
}



/* Entry: 10732836c; end: 1073283b7;  */

void FUN_10732836c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [32];
  
  FUN_1073283b8(auStack_40);
  func_0x0001072a02ac(param_1,auStack_40,param_3);
  func_0x0001001148fc(auStack_40);
  return;
}



/* Entry: 1073283b8; end: 107328417;  */

void FUN_1073283b8(void)

{
  undefined1 auStack_48 [24];
  long alStack_30 [2];
  
  func_0x000107289cec(alStack_30);
  if (alStack_30[0] == 0) {
    func_0x00010734615c();
  }
  else {
    FUN_107328418(auStack_48);
    func_0x000107346270();
    FUN_107328468();
    func_0x000107345728();
  }
  func_0x000107289d58(alStack_30);
  return;
}



/* Entry: 107328418; end: 107328467;  */

void FUN_107328418(undefined8 param_1,long param_2)

{
  long lStack_30;
  undefined1 uStack_28;
  
  uStack_28 = 1;
  lStack_30 = param_2;
  func_0x00010724e404();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,param_2 + 0xa8);
  func_0x00010724e49c(&lStack_30);
  return;
}



/* Entry: 107328468; end: 10732847f;  */

void FUN_107328468(void)

{
  func_0x0001002a8308();
  return;
}



/* Entry: 107328480; end: 1073284b3;  */

long FUN_107328480(long param_1)

{
  if (*(int *)(param_1 + 0x68) == 9) {
    return param_1 + 8;
  }
  func_0x00010563ab98();
  func_0x000107277f30();
  func_0x000107347c48();
  return param_1;
}



/* Entry: 1073284b4; end: 1073284bb;  */

void FUN_1073284b4(void)

{
  return;
}



/* Entry: 1073284bc; end: 1073284e3;  */

void FUN_1073284bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073450c0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109a13f8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1073284e4; end: 107328503;  */

void FUN_1073284e4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a13f8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107328504; end: 1073285ab;  */

void FUN_107328504(long param_1,undefined8 *param_2,long *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [56];
  char cStack_30;
  
  func_0x0001073447e0();
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  (**(code **)(*param_3 + 0x68))(auStack_68,param_3 + 1);
  uVar1 = cStack_30 == '\x01';
  if ((bool)uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107347854();
    func_0x000100608100(uVar2,auStack_98);
    FUN_1073285e0();
    func_0x000107345728();
  }
  func_0x00010724b3d8();
  func_0x00010734615c();
  func_0x00010734471c();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_68);
  func_0x000107345604();
  func_0x000107345760();
  func_0x000107345650();
  func_0x000107344bc4();
  return;
}



/* Entry: 1073285ac; end: 1073285d3;  */

void FUN_1073285ac(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a1458);
  func_0x000107344bc4();
  return;
}



/* Entry: 1073285d4; end: 1073285df;  */

undefined ** FUN_1073285d4(void)

{
  return &PTR_DAT_1109a1458;
}



/* Entry: 1073285e0; end: 10732860f;  */

void FUN_1073285e0(void)

{
  func_0x000107264c5c();
  func_0x000107346020();
  FUN_107328610();
  return;
}



/* Entry: 107328610; end: 10732861f;  */

void FUN_107328610(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_1103462b8)
            (param_1,*param_2,param_2[1]);
  return;
}



/* Entry: 107328620; end: 107328633;  */

void FUN_107328620(void)

{
  FUN_10732b264();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107328634; end: 10732873f;  */

void FUN_107328634(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  code *extraout_x8;
  long unaff_x19;
  undefined1 auStack_968 [504];
  char cStack_770;
  undefined1 *apuStack_730 [4];
  char cStack_710;
  undefined **appuStack_708 [3];
  undefined ***pppuStack_6f0;
  undefined **ppuStack_6b8;
  undefined1 auStack_698 [536];
  undefined1 auStack_480 [32];
  undefined1 auStack_460 [56];
  undefined1 uStack_428;
  undefined1 auStack_248 [504];
  char cStack_50;
  undefined8 uStack_48;
  
  func_0x0001073450dc();
  func_0x0001073449c4();
  func_0x000107346e2c(auStack_248);
  uVar1 = cStack_50 == '\x01';
  if ((bool)uVar1) {
    func_0x000107346188();
    FUN_107328fa0(auStack_698,auStack_460);
    puVar4 = auStack_698;
    FUN_107328fc0(auStack_480,puVar4);
    ppuStack_6b8 = &PTR_FUN_1109a3df0;
    func_0x000107347d68();
    FUN_1073288f4();
    func_0x00010732a350(&ppuStack_6b8);
    func_0x00010732a384(auStack_480);
    func_0x000107345cec();
    func_0x000107346f9c();
  }
  else {
    auStack_460[0] = 0;
    uStack_428 = 0;
    puVar4 = auStack_460;
    FUN_10732a3b8();
    FUN_10732a3d0(auStack_460);
  }
  func_0x000107346f80();
  func_0x0001073447cc(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345834();
  func_0x00010732a350();
  puVar2 = auStack_480;
  func_0x00010732a384(puVar2);
  func_0x000107345cec();
  func_0x000107346f9c();
  func_0x000107346f80();
  func_0x000107345604();
  ppuVar3 = apuStack_730;
  func_0x0001073448a8();
  pppuStack_6f0 = appuStack_708;
  appuStack_708[0] = &PTR_FUN_1109a3d40;
  FUN_10732985c(apuStack_730,puVar2 + 0x78);
  FUN_107329b74(appuStack_708);
  uVar1 = cStack_710 == '\x01';
  if ((bool)uVar1) {
    func_0x000107345938(*(undefined8 *)(unaff_x19 + 8),apuStack_730[0]);
    (*extraout_x8)();
    puVar4 = apuStack_730[0];
  }
  FUN_107329d5c();
  func_0x00010734471c();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345740();
  FUN_107329d5c();
  func_0x000107345604();
  func_0x000107344818();
  func_0x000107346e2c(auStack_968);
  uVar1 = cStack_770 == '\x01';
  if ((bool)uVar1) {
    func_0x00010734788c(*(undefined8 *)(**(long **)((long)ppuVar3 + 8) + 0x20));
  }
  puVar2 = auStack_968;
  FUN_10732a468();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345834();
  FUN_10732a468();
  func_0x000107345604();
  if (puVar2[0x50] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010734633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(puVar2 + 8) + 0x28))(*(long **)(puVar2 + 8),puVar2 + 0x38,puVar4);
    return;
  }
  return;
}



/* Entry: 107328740; end: 1073287d3;  */

void FUN_107328740(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  code *extraout_x8;
  long unaff_x19;
  undefined1 auStack_2a8 [504];
  char cStack_b0;
  undefined8 auStack_70 [4];
  char cStack_50;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  
  puVar2 = auStack_70;
  func_0x0001073448a8();
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_FUN_1109a3d40;
  FUN_10732985c(auStack_70,param_1 + 0x78);
  FUN_107329b74(appuStack_48);
  uVar1 = cStack_50 == '\x01';
  if ((bool)uVar1) {
    func_0x000107345938(*(undefined8 *)(unaff_x19 + 8),auStack_70[0]);
    (*extraout_x8)();
    param_2 = auStack_70[0];
  }
  FUN_107329d5c();
  func_0x00010734471c();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345740();
  FUN_107329d5c();
  func_0x000107345604();
  func_0x000107344818();
  func_0x000107346e2c(auStack_2a8);
  uVar1 = cStack_b0 == '\x01';
  if ((bool)uVar1) {
    func_0x00010734788c(*(undefined8 *)(**(long **)((long)puVar2 + 8) + 0x20));
  }
  puVar3 = auStack_2a8;
  FUN_10732a468();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345834();
  FUN_10732a468();
  func_0x000107345604();
  if (puVar3[0x50] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010734633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(puVar3 + 8) + 0x28))(*(long **)(puVar3 + 8),puVar3 + 0x38,param_2);
    return;
  }
  return;
}



/* Entry: 1073287d4; end: 10732884b;  */

void FUN_1073287d4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_238 [504];
  char cStack_40;
  
  func_0x000107344818();
  func_0x000107346e2c(auStack_238);
  uVar1 = cStack_40 == '\x01';
  if ((bool)uVar1) {
    func_0x00010734788c(*(undefined8 *)(**(long **)(param_1 + 8) + 0x20));
  }
  puVar2 = auStack_238;
  FUN_10732a468();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345834();
  FUN_10732a468();
  func_0x000107345604();
  if (puVar2[0x50] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010734633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(puVar2 + 8) + 0x28))(*(long **)(puVar2 + 8),puVar2 + 0x38,param_2);
    return;
  }
  return;
}



/* Entry: 10732884c; end: 10732885f;  */

void FUN_10732884c(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010734633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x28))(*(long **)(param_1 + 8),param_1 + 0x38,param_2);
    return;
  }
  return;
}


