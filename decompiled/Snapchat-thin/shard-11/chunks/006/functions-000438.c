/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087fd884; end: 1087fd977;  */

void FUN_1087fd884(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x000107c313f8();
  func_0x0001087fffc8();
  func_0x0001088000c8();
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x20) = param_3;
  func_0x0001087fff20();
  func_0x0001087fff10();
  func_0x0001088000bc();
  *(undefined8 *)(param_1 + 0x80) = param_2;
  func_0x0001087ffef8();
  uVar1 = (undefined4)param_2;
  func_0x0001088000d4();
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  uVar2 = unaff_x20;
  func_0x000107c313d8();
  *(int *)(param_1 + 0xa4) = (int)uVar2;
  uVar2 = unaff_x20;
  func_0x000107c313d8();
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  uVar2 = unaff_x20;
  func_0x000107c313d8();
  *(int *)(param_1 + 0xb0) = (int)uVar2;
  uVar2 = unaff_x20;
  func_0x000107c313d8();
  *(int *)(param_1 + 0xb4) = (int)uVar2;
  uVar2 = unaff_x20;
  func_0x000107c313d8();
  *(int *)(param_1 + 0xb8) = (int)uVar2;
  uVar2 = unaff_x20;
  func_0x000107c313d8();
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  uVar2 = unaff_x20;
  func_0x000107c313d8();
  *(int *)(param_1 + 200) = (int)uVar2;
  func_0x000107c313d8();
  *(int *)(param_1 + 0xcc) = (int)unaff_x20;
  return;
}



/* Entry: 1087fd978; end: 1087fd9bb;  */

void FUN_1087fd978(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c313e0(auStack_38);
  FUN_1087fd9bc(param_1,auStack_38);
  func_0x000107c27914(auStack_38);
  return;
}



/* Entry: 1087fd9bc; end: 1087fda13;  */

void FUN_1087fd9bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_FUN_110a8c518;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  func_0x000107c3034c(param_1,*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  return;
}



/* Entry: 1087fda14; end: 1087fda3f;  */

long FUN_1087fda14(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001087fa700(param_1);
  }
  return param_1;
}



/* Entry: 1087fda40; end: 1087fdb23;  */

undefined8 * FUN_1087fda40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  if (*(char *)(param_2 + 0x1b) == '\x01') {
    func_0x000107c27994(param_1 + 1,param_2 + 1);
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    FUN_1086a0454(param_1 + 6,param_2 + 6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 0xe,param_2 + 0xe);
    param_1[0x11] = param_2[0x11];
    func_0x000107c27994(param_1 + 0x12,param_2 + 0x12);
    uVar2 = param_2[0x16];
    uVar1 = param_2[0x15];
    uVar4 = param_2[0x18];
    uVar3 = param_2[0x17];
    uVar5 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar5;
    param_1[0x18] = uVar4;
    param_1[0x17] = uVar3;
    param_1[0x16] = uVar2;
    param_1[0x15] = uVar1;
    *(undefined1 *)(param_1 + 0x1b) = 1;
  }
  return param_1;
}



/* Entry: 1087fdb24; end: 1087fdb57;  */

void FUN_1087fdb24(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c336b4();
  func_0x000107c3194c();
  func_0x0001087ffb90();
  func_0x000108800148();
  func_0x0001087ffd48();
  *(undefined4 *)(unaff_x20 + 0xa0) = *(undefined4 *)(unaff_x19 + 0xa0);
  return;
}



/* Entry: 1087fdb58; end: 1087fdb73;  */

void FUN_1087fdb58(long param_1)

{
  FUN_1087fdb74();
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return;
}



/* Entry: 1087fdb74; end: 1087fdc17;  */

void FUN_1087fdb74(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c336b4();
  func_0x0001087ff90c();
  func_0x0001087ffd74();
  func_0x0001087ffa8c();
  *(undefined4 *)(unaff_x20 + 0xa0) = *(undefined4 *)(unaff_x19 + 0xa0);
  return;
}



/* Entry: 1087fdc18; end: 1087fdc8b;  */

void FUN_1087fdc18(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  func_0x000107c313f8();
  func_0x0001087fffc8();
  func_0x0001088000c8();
  *(ulong *)(param_1 + 0x18) = CONCAT44(uVar2,uVar1);
  *(undefined1 *)(param_1 + 0x20) = param_3;
  func_0x0001087fff20();
  func_0x0001087fff10();
  func_0x0001088000bc();
  *(ulong *)(param_1 + 0x80) = CONCAT44(uVar2,uVar1);
  func_0x0001087ffef8();
  func_0x0001088000d4();
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  return;
}



/* Entry: 1087fdc8c; end: 1087fdce7;  */

void FUN_1087fdc8c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = **(undefined8 **)*param_1;
  lStack_28 = (*(undefined8 **)*param_1)[1];
  if (lStack_28 != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10 != 0);
  }
  func_0x000108797934();
  func_0x000108797c2c(&uStack_30);
  return;
}



/* Entry: 1087fdce8; end: 1087fdd7f;  */

void FUN_1087fdce8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *extraout_x8;
  
  puVar1 = (undefined8 *)0x630;
  __Znwm();
  *puVar1 = FUN_1087ff674;
  puVar1[1] = FUN_1087ff7ac;
  FUN_1087fe214(puVar1 + 4,param_1);
  func_0x0001087adea8(puVar1 + 2);
  func_0x000108800048();
  puVar1[0xc3] = param_2;
  *(undefined1 *)(puVar1 + 0xc5) = 0;
  func_0x0001087ff9e8(*param_2);
  (*extraout_x8)();
  return;
}



/* Entry: 1087fdd80; end: 1087fe07f;  */

void FUN_1087fdd80(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  uint *puVar3;
  uint extraout_w8;
  long *plVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar6 = *param_1;
  puVar2 = (undefined8 *)0x640;
  __Znwm();
  *puVar2 = FUN_1087ff4c0;
  puVar2[1] = FUN_1087ff63c;
  puVar2[0xc4] = lVar6;
  puVar2[0xc3] = param_1;
  func_0x0001087adea8(puVar2 + 2);
  func_0x000108800048();
  func_0x000107c27994(puVar2 + 0xb9,param_1 + 10);
  puVar2[0xc5] = param_1[0xae];
  puVar2[0xc6] = param_1[0xd];
  plVar7 = *(long **)(lVar6 + 0x10);
  FUN_1087fa734(puVar2 + 4,param_1 + 7);
  lVar6 = param_1[4];
  puVar2[0xbd] = param_1[5];
  puVar2[0xbc] = lVar6;
  puVar2[0xbe] = param_1[6];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  (**(code **)(*plVar7 + 0x10))(puVar2 + 0xc0,plVar7,puVar2 + 4,puVar2 + 0xbc,param_1 + 0xbc);
  puVar3 = (uint *)(puVar2 + 0xbf);
  *(undefined8 *)puVar3 = puVar2[0xc0];
  do {
    func_0x0001087ff83c();
  } while (extraout_w10 != 0);
  func_0x0001087ff9f4(*(undefined8 *)puVar3);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)((long)puVar2 + 0x63c) = 0;
    lVar6 = puVar2[0xbf];
    func_0x0001087ff82c();
    lVar8 = *plVar7;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar7;
    }
    plVar4 = (long *)(lVar6 + 0x10);
    do {
      if (*plVar4 == 0) {
        func_0x0001087ff980();
        plVar4 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x0001087fff48();
        plVar4 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x0001087ff990();
        if ((bool)in_ZR) {
          func_0x0001087ff8a8();
          func_0x0001087ff84c();
          func_0x0001087ff810();
          *(long **)(lVar6 + 0x90) = plVar7;
        }
        func_0x0001087ff970();
        *(long *)(extraout_x8_01 + 0x20) = lVar8;
        func_0x0001087ff898(*(undefined8 *)(lVar6 + 0x90));
        *(undefined8 *)(lVar6 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1087b3548();
  uVar1 = *puVar3;
  func_0x0001087ffb80();
  func_0x0001087ff9e0();
  func_0x0001087ffd0c();
  func_0x0001087ffb2c();
  *(uint *)(puVar2 + 199) = uVar1;
  if ((uVar1 < 8) && ((1 << (ulong)(uVar1 & 0x1f) & 0xcfU) != 0)) {
    func_0x0001087fffe8();
    FUN_10879785c();
  }
  if (*(char *)(puVar2[0xc3] + 0x18) == '\x01') {
    FUN_1087e6ae0(*(long *)puVar2[0xc4] + 0x20,uVar1,puVar2[0xc3] + 8);
  }
  func_0x0001087fffa8(puVar2[0xc4]);
  func_0x0001087ade80(puVar2 + 2,puVar2 + 199);
  func_0x0001087ffd98();
  func_0x0001087ff954();
  func_0x0001087ff9a0();
  return;
}



/* Entry: 1087fe080; end: 1087fe213;  */

void FUN_1087fe080(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  plVar2 = (long *)(param_1 + 0x18);
  FUN_1087fd568();
  if (plVar2 == (long *)0x0) {
    return;
  }
  func_0x000107c28850(plVar2 + 5);
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *(long *)(param_1 + 0x18);
  plVar1 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar1;
    plVar1 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar2);
  plStack_30 = (long *)(param_1 + 0x28);
  if (plVar6 == plStack_30) {
LAB_1087fe128:
    if (lVar3 == 0) {
LAB_1087fe15c:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1087fe164;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar10 = uVar9 - uVar10 * uVar5;
      }
    }
    if (uVar10 != uVar4) goto LAB_1087fe15c;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar10 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1087fe128;
LAB_1087fe164:
    if (lVar3 == 0) goto LAB_1087fe19c;
    uVar9 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar5 <= uVar9) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar7 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(lVar8 + uVar9 * 8) = plVar6;
    lVar3 = *plVar2;
  }
LAB_1087fe19c:
  *plVar6 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  uStack_28 = 1;
  uStack_27 = 0;
  uStack_23 = 0;
  plStack_38 = plVar2;
  func_0x0001087fe1d4(&plStack_38);
  return;
}



/* Entry: 1087fe214; end: 1087fe2a7;  */

void FUN_1087fe214(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c336c0();
  *param_1 = *param_2;
  FUN_1087e70c8(param_1 + 1,param_2 + 1);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  FUN_1087fa734(unaff_x19 + 0x38,unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x5e0);
  *(undefined8 *)(unaff_x19 + 0x5e8) = *(undefined8 *)(unaff_x20 + 0x5e8);
  *(undefined8 *)(unaff_x19 + 0x5e0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x5e0) = 0;
  *(undefined1 *)(unaff_x19 + 0x5f0) = 0;
  *(undefined1 *)(unaff_x20 + 0x5f0) = 1;
  return;
}



/* Entry: 1087fe2a8; end: 1087fe313;  */

long FUN_1087fe2a8(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x5f0) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x5e8);
    iVar1 = *(int *)(lVar2 + 0x40) + -1;
    *(int *)(lVar2 + 0x40) = iVar1;
    if (*(char *)(lVar2 + 0x44) == '\x01' && iVar1 == 0) {
      func_0x000107c28850(lVar2 + 0x50);
    }
  }
  func_0x000107c27f9c(param_1 + 0x5e0);
  func_0x0001087f9a18(param_1 + 0x38);
  FUN_1087f995c(param_1 + 0x20);
  FUN_1086ccd68(param_1 + 8);
  return param_1;
}



/* Entry: 1087fe314; end: 1087fe32b;  */

void FUN_1087fe314(long *param_1,long param_2)

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



/* Entry: 1087fe32c; end: 1087fe443;  */

void FUN_1087fe32c(long param_1,int param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x000107c33694();
  uStack_48 = extraout_x8;
  if ((*(byte *)(lVar1 + 0xc0) & 1) == 0) {
    func_0x000107c28870(param_1 + 0x88);
    func_0x0001087ffd64();
    func_0x0001087ffce0();
    func_0x0001087ffa6c();
    func_0x0001087ffd40();
    func_0x0001087ffd5c();
  }
  else {
    func_0x000107c28834(lVar1 + 0x78);
    func_0x0001087ffa40();
    func_0x0001087ff9e0();
    func_0x0001087ffa6c();
  }
  func_0x0001087ff9e0();
  func_0x0001087ffa40();
  func_0x0001087ffb60();
  func_0x00010880003c();
  func_0x0001087fc078(auStack_b8);
  param_1 = param_1 + 0x20;
  FUN_1087a33a8();
  while( true ) {
    func_0x0001087ff954();
    func_0x0001087ff9a0();
    func_0x000107c3368c(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if (param_2 == 0) break;
    func_0x0001087ffd64();
    func_0x0001087ffce0();
    func_0x0001087ffa6c();
    func_0x0001087ffd40();
    func_0x0001087ffd5c();
    func_0x0001087ff9e0();
    func_0x0001087ffa40();
    func_0x0001087ffacc();
    func_0x0001087ff9d0();
    ___cxa_end_catch();
  }
  func_0x0001087ffd88();
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    func_0x0001087ffd64();
    func_0x0001087ffce0();
    func_0x0001087ffa6c();
    func_0x0001087ffd40();
    func_0x0001087ffd5c();
  }
  else {
    func_0x0001087ffa40();
    func_0x0001087ff9e0();
    func_0x0001087ffa6c();
  }
  func_0x0001087ff9e0();
  func_0x0001087ffa40();
  func_0x0001087ff954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087fe444; end: 1087fe4b7;  */

void FUN_1087fe444(long param_1)

{
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    func_0x0001087ffd64();
    func_0x0001087ffce0();
    func_0x0001087ffa6c();
    func_0x0001087ffd40();
    func_0x0001087ffd5c();
  }
  else {
    func_0x0001087ffa40();
    func_0x0001087ff9e0();
    func_0x0001087ffa6c();
  }
  func_0x0001087ff9e0();
  func_0x0001087ffa40();
  func_0x0001087ff954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087fe4b8; end: 1087feb7b;  */

void FUN_1087fe4b8(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 auStack_120 [6];
  long lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_d0;
  undefined8 uStack_68;
  
  lVar5 = param_1;
  func_0x000107c33694();
  puVar2 = (undefined8 *)(lVar5 + 0xc0);
  uStack_68 = extraout_x8;
  FUN_1087fcdf4();
  *(undefined8 *)(param_1 + 0x20) = *puVar2;
  func_0x0001087b07bc(param_1 + 0x28,puVar2 + 1);
  uVar4 = *(undefined4 *)(puVar2 + 9);
  *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)((long)puVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  func_0x000107c27c5c(param_1 + 0x70,puVar2 + 10);
  func_0x0001087ffdec();
  func_0x0001087ffd6c();
  func_0x0001087ff9bc();
  if (((extraout_w8 >> 1 & 1) != 0) ||
     ((func_0x0001087ff9bc(), (extraout_w8_00 >> 5 & 1) != 0 &&
      (*(int *)(*(long *)(lVar5 + 0x250) + 0x38) == 0)))) {
    func_0x0001087ffa74();
    uStack_d0 = 0x13;
    func_0x0001087fff80();
    FUN_1087ffca0();
    plVar6 = &lStack_f0;
    FUN_108791610(plVar6,param_1 + 0x238);
    FUN_108791a34(auStack_120,plVar6);
    lVar5 = *(long *)(param_1 + 0x278);
    func_0x0001087fff78();
    func_0x0001087ffc98();
    plVar6 = *(long **)(lVar5 + 0x48);
    FUN_108791a34(param_1 + 0x110,auStack_120);
    func_0x000108800104(*(undefined8 *)(*plVar6 + 0x60));
    func_0x0001087fff64();
    FUN_108788618(auStack_120);
  }
  func_0x000107c28288(param_1 + 0x1a8);
  lVar5 = *(long *)(*(long *)(param_1 + 0x278) + 0x88);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x0001087ff9e8();
    uVar4 = (undefined4)lVar5;
    (*extraout_x8_00)();
  }
  lVar5 = param_1 + 0x1a8;
  FUN_1087b023c();
  lStack_f0 = lVar5;
  uStack_e8 = uVar4;
  func_0x0001087fff54();
  lVar5 = *(long *)(param_1 + 0x18);
  do {
    auStack_120[0] = 0;
    iVar1 = (int)lVar5 + 0x10;
    puVar2 = auStack_120;
    func_0x0001087ff93c();
    if (iVar1 != 0) {
      in_ZR = *(char *)(lVar5 + 0x118) == '\x01';
      if ((bool)in_ZR) {
        func_0x0001087fc078(lVar5 + 0xa8);
        *(undefined1 *)(lVar5 + 0x118) = 0;
      }
      func_0x00010880017c();
      func_0x0001087ffb40();
      break;
    }
  } while (((uint)auStack_120[0] >> 1 & 1) == 0);
  func_0x0001087ffc50();
  puVar3 = (undefined8 *)(param_1 + 0x1e8);
  func_0x0001087fc078(puVar3);
  func_0x0001087ffce8();
  func_0x0001087ffc78();
  func_0x0001087ffc68();
  func_0x0001087ffe64();
  func_0x0001087ffc70();
  while( true ) {
    func_0x0001087ff954();
    func_0x0001087ff9a0();
    func_0x000107c3368c(uStack_68);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar2 == 0) break;
    func_0x0001087fff64();
    puVar3 = auStack_120;
    FUN_108788618();
    func_0x0001087ffce8();
    func_0x0001087ffc78();
    func_0x0001087ffc68();
    func_0x0001087ffe64();
    func_0x0001087ffc70();
    func_0x0001087ffb24();
    func_0x0001087ff9d0();
    ___cxa_end_catch();
  }
  func_0x00010880010c();
  func_0x000107c27f9c((undefined1 *)((long)puVar3 + 0xc0));
  func_0x0001087ffd6c();
  func_0x0001087ffce8();
  func_0x0001087ffc78();
  func_0x0001087ffc68();
  func_0x000108794594((undefined1 *)((long)puVar3 + 0x250));
  func_0x0001087ffc70();
  func_0x0001087ff954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar3);
  return;
}



/* Entry: 1087feb7c; end: 1087febeb;  */

void FUN_1087feb7c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xc0);
  func_0x0001087ffd6c();
  func_0x0001087ffce8();
  func_0x0001087ffc78();
  func_0x0001087ffc68();
  func_0x000108794594(param_1 + 0x250);
  func_0x0001087ffc70();
  func_0x0001087ff954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087febec; end: 1087fef33;  */

void FUN_1087febec(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint extraout_w8;
  long extraout_x8;
  long *plVar14;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_68;
  
  plVar15 = param_1 + 0x1b;
  plVar1 = param_1 + 0x1c;
  plVar9 = param_1;
  func_0x0001087ff82c();
  do {
    if (((uint)*(undefined8 *)(*plVar15 + 0x10) >> 5 & 1) != 0) {
      func_0x00010880011c(*plVar15);
      __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x14);
LAB_1087feee0:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1087feee4);
      (*pcVar6)();
    }
    func_0x000108800168();
    func_0x0001087ff9e0();
    func_0x0001087ffa40();
    uVar10 = param_1[0x19];
    bVar7 = (ulong)param_1[0x1a] <= uVar10;
    if (bVar7) {
      lVar17 = param_1[0x18];
      if (((long)(uVar10 - lVar17) >> 7) + 1U >> 0x39 != 0) {
        FUN_1087fc1b0();
        goto LAB_1087feee0;
      }
      func_0x0001087ffdac();
      lVar16 = extraout_x9;
      if (bVar7) {
        lVar16 = extraout_x8;
      }
      if (lVar16 == 0) {
        lVar16 = 0;
        param_2 = 0;
      }
      else {
        FUN_1087fc1bc();
      }
      lVar17 = lVar16 + (uVar10 - lVar17);
      FUN_1087fd268(lVar17,param_1 + 4);
      lVar18 = param_1[0x18];
      lVar3 = param_1[0x19];
      lVar2 = lVar17 + (lVar18 - lVar3);
      param_1[0x1b] = lVar2;
      param_1[0x1c] = lVar2;
      param_1[0x14] = (long)(param_1 + 0x1a);
      param_1[0x15] = (long)plVar1;
      param_1[0x16] = (long)plVar15;
      lVar11 = lVar2;
      for (lVar12 = lVar18; lVar12 != lVar3; lVar12 = lVar12 + 0x80) {
        FUN_1087fd268(lVar11,lVar12);
        lVar11 = *plVar15 + 0x80;
        *plVar15 = lVar11;
      }
      *(undefined1 *)(param_1 + 0x17) = 1;
      for (; lVar18 != lVar3; lVar18 = lVar18 + 0x80) {
        func_0x0001087fc078(lVar18 + 0x10);
      }
      lVar17 = lVar17 + 0x80;
      FUN_1087fc258(param_1 + 0x14);
      lVar12 = param_1[0x18];
      param_1[0x18] = lVar2;
      param_1[0x19] = lVar17;
      param_1[0x1a] = lVar16 + param_2 * 0x80;
      if (lVar12 != 0) {
        __ZdlPv();
      }
    }
    else {
      FUN_1087fd268(uVar10,param_1 + 4);
      lVar17 = uVar10 + 0x80;
    }
    lVar16 = param_1[0x21];
    param_1[0x19] = lVar17;
    iVar4 = *(int *)(lVar17 + -0x6c);
    func_0x0001087ffe98();
    if (iVar4 != 0) {
LAB_1087fee20:
      plVar15 = param_1 + 3;
      lVar17 = *plVar15;
      break;
    }
    plVar14 = (long *)(lVar16 + 8);
    param_1[0x21] = (long)plVar14;
    uVar8 = plVar14 == (long *)param_1[0x20];
    if ((bool)uVar8) goto LAB_1087fee20;
    plVar13 = (long *)param_1[0x1d];
    param_2 = *plVar14;
    FUN_1087fc3a8(plVar1,plVar13,param_2,param_1[0x1e],param_1[0x1f]);
    *plVar15 = *plVar1;
    do {
      func_0x0001087ff83c();
    } while (extraout_w10 != 0);
    func_0x0001087ff9f4(*plVar15);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x22) = 0;
      lVar17 = *plVar15;
      lVar16 = *plVar9;
      if (lVar16 == 0) {
        func_0x000107c3a5c0();
        lVar16 = *plVar13;
      }
      plVar14 = (long *)(lVar17 + 0x10);
      do {
        if (*plVar14 == 0) {
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *plVar14 = 1;
            ExclusiveMonitorsStatus();
          }
          func_0x0001088002e8();
          plVar14 = extraout_x8_01;
          uVar5 = extraout_w9_00;
          uVar10 = extraout_x10_00;
        }
        else {
          func_0x0001088002f4();
          plVar14 = extraout_x8_00;
          uVar5 = extraout_w9;
          uVar10 = extraout_x10;
        }
        if ((uVar10 & 1) != 0) {
          func_0x0001087ff990();
          if ((bool)uVar8) {
            func_0x0001087ff8a8();
            func_0x0001087ff84c();
            func_0x0001087ff810();
            *(long **)(lVar17 + 0x90) = plVar13;
          }
          func_0x0001087ff970();
          *(long *)(extraout_x8_02 + 0x20) = lVar16;
          func_0x0001087ff898(*(undefined8 *)(lVar17 + 0x90));
          *(undefined8 *)(lVar17 + 0x10) = 0;
          return;
        }
      } while ((uVar5 >> 1 & 1) == 0);
    }
  } while( true );
  while (((uint)uStack_68 >> 1 & 1) == 0) {
    uStack_68 = 0;
    lVar16 = lVar17 + 0x10;
    func_0x0001087ff93c(lVar16,&uStack_68);
    if ((int)lVar16 != 0) {
      if (*(char *)(lVar17 + 0xb0) == '\x01') {
        FUN_1087fc33c(lVar17 + 0x98);
      }
      lVar16 = param_1[0x18];
      *(long *)(lVar17 + 0xa0) = param_1[0x19];
      *(long *)(lVar17 + 0x98) = lVar16;
      *(long *)(lVar17 + 0xa8) = param_1[0x1a];
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      *(undefined1 *)(lVar17 + 0xb0) = 1;
      *(undefined8 *)(lVar17 + 0x10) = 2;
      func_0x000107c31508(lVar17,plVar15);
      break;
    }
  }
  func_0x000107c27fa0(plVar15,0);
  func_0x0001087ffcc4();
  func_0x0001087ff954();
  func_0x0001087ff9a0();
  return;
}



/* Entry: 1087fef34; end: 1087fef67;  */

void FUN_1087fef34(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xd8);
  func_0x000107c27f9c(param_1 + 0xe0);
  func_0x0001087ffcc4();
  func_0x0001087ff954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087fef68; end: 1087ff3ff;  */

void FUN_1087fef68(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  byte *pbVar13;
  long *plVar14;
  long *plVar15;
  uint extraout_w8;
  uint extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long *plVar16;
  long *extraout_x8_03;
  long *extraout_x8_04;
  code *extraout_x8_05;
  uint extraout_w9;
  uint extraout_w9_00;
  int extraout_w9_01;
  long extraout_x9;
  long lVar17;
  int extraout_w10;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong unaff_x26;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  undefined1 auStack_5b8 [1448];
  undefined8 uStack_10;
  
  func_0x000107c33700();
  plVar10 = param_1;
  func_0x000107c33694();
  plVar2 = plVar10 + 0xc6;
  plVar15 = plVar10 + 0xbe;
  plVar11 = plVar10;
  uStack_10 = extraout_x8;
  func_0x0001087ff82c();
  do {
    func_0x0001087ff9f4(*plVar15);
    if ((extraout_w8 >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(param_1 + 0xcb,*plVar15 + 0x18);
      __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0xcb);
LAB_1087ff32c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1087ff330);
      (*pcVar5)();
    }
    uVar22 = param_1[199];
    bVar6 = (ulong)param_1[200] <= uVar22;
    bVar7 = uVar22 == param_1[200];
    if (bVar6) {
      lVar18 = *plVar2;
      func_0x0001088002d4();
      if (bVar6 && !bVar7) {
        FUN_1087fc330();
        goto LAB_1087ff32c;
      }
      func_0x0001087ffc30((extraout_x8_00 - extraout_x10) / 0x18);
      func_0x0001088002c0();
      param_1[0xbd] = (long)(plVar10 + 200);
      if (unaff_x26 == 0) {
        lVar21 = 0;
      }
      else {
        if (extraout_x11 < unaff_x26) {
          func_0x000104bd35f4();
          goto LAB_1087ff32c;
        }
        lVar21 = unaff_x26 * 0x18;
        __Znwm();
      }
      param_1[0xb9] = lVar21;
      lVar18 = lVar21 + (uVar22 - lVar18);
      param_1[0xbb] = lVar18;
      param_1[0xba] = lVar18;
      lVar21 = lVar21 + unaff_x26 * 0x18;
      param_1[0xbc] = lVar21;
      func_0x00010880021c();
      lVar20 = param_1[199];
      lVar12 = param_1[0xc6];
      unaff_x26 = lVar18 + ((lVar20 - lVar12) / -0x18) * 0x18;
      lVar17 = lVar12;
      while (lVar17 != lVar20) {
        func_0x0001087ffbc8();
        lVar17 = extraout_x9;
      }
      for (; lVar12 != lVar20; lVar12 = lVar12 + 0x18) {
        FUN_1087fc33c();
      }
      lVar18 = lVar18 + 0x18;
      lVar12 = param_1[0xc6];
      param_1[0xc6] = unaff_x26;
      param_1[0xba] = lVar12;
      param_1[199] = lVar18;
      param_1[0xbb] = lVar12;
      lVar17 = param_1[200];
      param_1[200] = lVar21;
      param_1[0xbc] = lVar17;
      param_1[0xb9] = lVar12;
      func_0x0001087fffb0();
    }
    else {
      func_0x00010880021c();
      lVar18 = uVar22 + 0x18;
    }
    param_1[199] = lVar18;
    func_0x0001087ff9e0();
    func_0x0001087ffb80();
    lVar18 = param_1[199];
    if (*(long *)(lVar18 + -0x18) == *(long *)(lVar18 + -0x10)) {
      iVar9 = 7;
    }
    else {
      iVar9 = *(int *)(*(long *)(lVar18 + -0x10) + -0x6c);
    }
    *(int *)(param_1 + 0xbe) = iVar9;
    (**(code **)(**(long **)(param_1[0xcd] + 8) + 8))
              (param_1 + 0xb9,*(long **)(param_1[0xcd] + 8),iVar9);
    lVar21 = param_1[0xcf];
    func_0x000108800200();
    func_0x000107c299a0(param_1 + 0xb9);
    uVar8 = iVar9 == 1;
    *(undefined1 *)(lVar21 + 0x20) = uVar8;
    func_0x0001087b153c(lVar21 + 0x10,param_1 + 0xc9);
    lVar21 = param_1[0xc9];
    if (lVar21 == 0) {
LAB_1087ff268:
      FUN_1087faa9c(&lStack_5d0,lVar18 + -0x18);
      func_0x000107c279a4(&lStack_5d0);
      lStack_5c8 = plVar10[199];
      lStack_5d0 = *plVar2;
      lStack_5c0 = plVar10[200];
      plVar10[199] = 0;
      plVar10[200] = 0;
      *plVar2 = 0;
      FUN_1087fa734(auStack_5b8,param_1 + 4);
      func_0x0001087ff9e8(*(undefined8 *)(param_1[0xcd] + 0x60));
      (*extraout_x8_05)();
      func_0x0001087ade80(param_1 + 2);
      func_0x0001087fd2c8(&lStack_5d0);
      func_0x0001087ffd90();
      func_0x0001087fd288(plVar2);
      plVar14 = plVar15;
      goto LAB_1087ff2dc;
    }
    func_0x0001087ff9e8(lVar21,(int)param_1[6]);
    iVar9 = (int)lVar21;
    (*extraout_x8_01)();
    if (iVar9 == 0) goto LAB_1087ff268;
    func_0x0001087ff9e8(*(undefined8 *)(param_1[0xcd] + 0x58));
    (*extraout_x8_02)();
    if (*(int *)((long)param_1 + 0x564) == 3) {
      func_0x0001087ffbf4();
    }
    else {
      *(undefined4 *)((long)param_1 + 0x564) = 3;
    }
    func_0x0001087fff30();
    pbVar13 = (byte *)param_1[0xcd];
    plVar14 = param_1 + 0xc3;
    FUN_1087fb434(plVar10 + 0xcc,pbVar13,plVar14,param_1 + 4,param_1[0xce]);
    *plVar15 = plVar10[0xcc];
    do {
      func_0x0001087ff83c();
    } while (extraout_w10 != 0);
    func_0x0001087ff9f4(*plVar15);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xd0) = 0;
      lVar21 = *plVar15;
      lVar18 = *plVar11;
      if (lVar18 == 0) {
        func_0x000107c3a5c0();
        lVar18 = *(long *)pbVar13;
      }
      plVar16 = (long *)(lVar21 + 0x10);
      do {
        if (*plVar16 == 0) {
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *plVar16 = 1;
            ExclusiveMonitorsStatus();
          }
          func_0x0001088002e8();
          plVar16 = extraout_x8_04;
          uVar4 = extraout_w9_00;
          uVar22 = extraout_x10_01;
        }
        else {
          func_0x0001088002f4();
          plVar16 = extraout_x8_03;
          uVar4 = extraout_w9;
          uVar22 = extraout_x10_00;
        }
        if ((uVar22 & 1) != 0) {
          pbVar19 = *(byte **)(lVar21 + 0x90);
          bVar3 = pbVar19[1];
          uVar22 = (ulong)bVar3;
          bVar7 = *pbVar19 <= bVar3;
          uVar8 = bVar3 == *pbVar19;
          if ((bool)uVar8) {
            func_0x0001087ff8a8();
            iVar9 = extraout_w8_01;
            if (bVar7) {
              iVar9 = extraout_w9_01;
            }
            pbVar13 = (byte *)(ulong)(iVar9 * 0x18 + 0x10);
            _malloc();
            uVar22 = 0;
            *pbVar13 = (byte)iVar9;
            pbVar13[1] = 0;
            pbVar13[8] = 0;
            pbVar13[9] = 0;
            pbVar13[10] = 0;
            pbVar13[0xb] = 0;
            pbVar13[0xc] = 0;
            pbVar13[0xd] = 0;
            pbVar13[0xe] = 0;
            pbVar13[0xf] = 0;
            *(byte **)(pbVar19 + 8) = pbVar13;
            *(byte **)(lVar21 + 0x90) = pbVar13;
            pbVar19 = pbVar13;
          }
          pbVar1 = pbVar19 + uVar22 * 0x18 + 0x10;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          *(long **)(pbVar19 + uVar22 * 0x18 + 0x18) = param_1;
          *(long *)(pbVar19 + uVar22 * 0x18 + 0x20) = lVar18;
          func_0x0001087ff898(*(undefined8 *)(lVar21 + 0x90));
          *(undefined8 *)(lVar21 + 0x10) = 0;
          while (func_0x000107c3368c(uStack_10), !(bool)uVar8) {
            ___stack_chk_fail();
            if ((int)plVar14 == 0) {
              do {
                __Unwind_Resume(pbVar13);
                func_0x000104bd46a0();
              } while ((int)plVar14 == 0);
              func_0x0001087ff9e0();
              func_0x0001087ffb80();
            }
            else {
              func_0x0001087fd2c8(&lStack_5d0);
            }
            func_0x0001087ffd90();
            func_0x0001087fd288(plVar2);
            ___cxa_begin_catch(pbVar13);
            func_0x0001087ff9d0();
            ___cxa_end_catch();
LAB_1087ff2dc:
            func_0x0001087ff954();
            pbVar13 = (byte *)(param_1 + 0xc3);
            FUN_1087f995c();
            func_0x0001087ffb2c();
            func_0x0001087ff9a0();
          }
          return;
        }
      } while ((uVar4 >> 1 & 1) == 0);
    }
  } while( true );
}



/* Entry: 1087ff400; end: 1087ff447;  */

void FUN_1087ff400(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x5f0);
  func_0x000107c27f9c(param_1 + 0x660);
  func_0x0001087ffd90();
  func_0x0001087fd288(param_1 + 0x630);
  func_0x0001087ff954();
  FUN_1087f995c(param_1 + 0x618);
  func_0x0001087ffb2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ff448; end: 1087ff497;  */

void FUN_1087ff448(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x0001087fff40();
  func_0x000107c287c8(param_1 + 0x10);
  func_0x0001087ff954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ff498; end: 1087ff4bf;  */

void FUN_1087ff498(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x20);
  func_0x0001087ff954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ff4c0; end: 1087ff63b;  */

void FUN_1087ff4c0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 0x5f8);
  FUN_1087b3548();
  uVar1 = *puVar2;
  func_0x000107c27f9c(param_1 + 0x5f8);
  func_0x0001088001e4();
  func_0x0001087ffd0c();
  func_0x0001087ffb2c();
  *(uint *)(param_1 + 0x638) = uVar1;
  if (uVar1 < 8 && (1 << (ulong)(uVar1 & 0x1f) & 0xcfU) != 0) {
    func_0x0001087fffe8();
    FUN_10879785c();
  }
  if (*(char *)(*(long *)(param_1 + 0x618) + 0x18) == '\x01') {
    FUN_1087e6ae0(**(long **)(param_1 + 0x620) + 0x20,uVar1,*(long *)(param_1 + 0x618) + 8);
  }
  func_0x0001087fffa8(*(undefined8 *)(param_1 + 0x620));
  func_0x0001087ade80(param_1 + 0x10,param_1 + 0x638);
  func_0x0001087ffd98();
  func_0x0001087ff954();
  func_0x0001087ff9a0();
  return;
}



/* Entry: 1087ff63c; end: 1087ff673;  */

void FUN_1087ff63c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x5f8);
  func_0x0001088001e4();
  func_0x0001087ffd0c();
  func_0x0001087ffb2c();
  func_0x0001087ffd98();
  func_0x0001087ff954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ff674; end: 1087ff7ab;  */

void FUN_1087ff674(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  uint extraout_w8;
  long *plVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  plVar3 = (long *)(param_1 + 0x618);
  if ((*(byte *)(param_1 + 0x628) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1087fdd80((long *)(param_1 + 0x620));
    *plVar3 = *(long *)(param_1 + 0x620);
    do {
      func_0x0001087ff83c();
    } while (extraout_w10 != 0);
    func_0x0001087ff9f4(*plVar3);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x628) = 1;
      lVar6 = *plVar3;
      func_0x0001087ff82c();
      lVar7 = *plVar2;
      if (lVar7 == 0) {
        func_0x000107c3a5c0();
        lVar7 = *plVar2;
      }
      plVar4 = (long *)(lVar6 + 0x10);
      do {
        if (*plVar4 == 0) {
          func_0x0001087ff980();
          plVar4 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x0001087fff48();
          plVar4 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x0001087ff990();
          if ((bool)in_ZR) {
            func_0x0001087ff8a8();
            func_0x0001087ff84c();
            func_0x0001087ff810();
            *(long **)(lVar6 + 0x90) = plVar2;
          }
          func_0x0001087ff970();
          *(long *)(extraout_x8_01 + 0x20) = lVar7;
          func_0x0001087ff898(*(undefined8 *)(lVar6 + 0x90));
          *(undefined8 *)(lVar6 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_1087b3548(plVar3);
  func_0x0001087ade80(param_1 + 0x10,plVar3);
  func_0x0001087ff9e0();
  func_0x0001087ffa40();
  func_0x0001087ff954();
  func_0x000108800174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ff7ac; end: 1087ff7eb;  */

void FUN_1087ff7ac(long param_1)

{
  if (*(char *)(param_1 + 0x628) == '\x01') {
    func_0x000107c27f9c(param_1 + 0x618);
    func_0x000107c27f9c(param_1 + 0x620);
  }
  func_0x0001087ff954();
  func_0x000108800174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ff7ec; end: 1087ffc9f;  */

void FUN_1087ff7ec(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 uStack0000000000000038;
  undefined1 uStack0000000000000070;
  undefined1 uStack0000000000000078;
  undefined1 uStack000000000000007c;
  undefined1 uStack0000000000000080;
  undefined1 uStack0000000000000098;
  
  uStack0000000000000038 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000078 = 0;
  uStack000000000000007c = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000098 = 0;
  func_0x000107c336b4(unaff_x19 + 0x20,&stack0x00000030);
  func_0x000107c33728();
  FUN_1087b12d0();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x4c);
  *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined1 *)(unaff_x20 + 0x4c) = uVar1;
  func_0x000107c27c54(unaff_x20 + 0x50,unaff_x19 + 0x50);
  return;
}



/* Entry: 1087ffca0; end: 1087ffcbb;  */

void FUN_1087ffca0(void)

{
  long unaff_x19;
  
  func_0x0001087fab40(*(undefined4 *)(*(long *)(unaff_x19 + 0x280) + 8));
  return;
}



/* Entry: 1087ffcbc; end: 1088002ff;  */

void FUN_1087ffcbc(void)

{
  char in_stack_00000620;
  
  if (in_stack_00000620 == '\x01') {
    func_0x00010066b5d4();
  }
  return;
}



/* Entry: 108800300; end: 108800bcb;  */

void FUN_108800300(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
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
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  int extraout_w10_29;
  int extraout_w10_30;
  int extraout_w10_31;
  ulong *puVar6;
  undefined8 unaff_x22;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  ulong *puStack_60;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar7 = *param_2;
  __Znwm(0xe8);
  func_0x000108801170();
  uStack_88 = *(undefined8 *)(lVar7 + 0x38);
  uStack_90 = *(undefined8 *)(lVar7 + 0x30);
  if (*(long *)(lVar7 + 0x38) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10 != 0);
  }
  uStack_98 = *(undefined8 *)(lVar7 + 0x48);
  uStack_a0 = *(undefined8 *)(lVar7 + 0x40);
  if (*(long *)(lVar7 + 0x48) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_00 != 0);
  }
  uStack_a8 = *(undefined8 *)(lVar7 + 0xa8);
  uStack_b0 = *(undefined8 *)(lVar7 + 0xa0);
  if (*(long *)(lVar7 + 0xa8) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_01 != 0);
  }
  uStack_b8 = *(undefined8 *)(lVar7 + 0x98);
  uStack_c0 = *(undefined8 *)(lVar7 + 0x90);
  if (*(long *)(lVar7 + 0x98) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_02 != 0);
  }
  uStack_c8 = *(undefined8 *)(lVar7 + 0x68);
  uStack_d0 = *(undefined8 *)(lVar7 + 0x60);
  if (*(long *)(lVar7 + 0x68) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_03 != 0);
  }
  uStack_d8 = *(undefined8 *)(lVar7 + 0x128);
  uStack_e0 = *(undefined8 *)(lVar7 + 0x120);
  if (*(long *)(lVar7 + 0x128) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_04 != 0);
  }
  uStack_e8 = *(undefined8 *)(lVar7 + 0x138);
  uStack_f0 = *(undefined8 *)(lVar7 + 0x130);
  if (*(long *)(lVar7 + 0x138) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_05 != 0);
  }
  uStack_f8 = *(undefined8 *)(lVar7 + 0x148);
  uStack_100 = *(undefined8 *)(lVar7 + 0x140);
  if (*(long *)(lVar7 + 0x148) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_06 != 0);
  }
  uStack_108 = *(undefined8 *)(lVar7 + 0x108);
  uStack_110 = *(undefined8 *)(lVar7 + 0x100);
  if (*(long *)(lVar7 + 0x108) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_07 != 0);
  }
  uStack_118 = *(undefined8 *)(lVar7 + 0x178);
  uStack_120 = *(undefined8 *)(lVar7 + 0x170);
  if (*(long *)(lVar7 + 0x178) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_08 != 0);
  }
  uStack_128 = *(undefined8 *)(lVar7 + 0x188);
  uStack_130 = *(undefined8 *)(lVar7 + 0x180);
  if (*(long *)(lVar7 + 0x188) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_09 != 0);
  }
  uStack_138 = param_3[1];
  uStack_140 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_10 != 0);
  }
  func_0x0001088010fc();
  func_0x000108805bfc();
  func_0x000104be3970(&uStack_140);
  func_0x000107c289fc(&uStack_130);
  func_0x000107c29114(&uStack_120);
  func_0x000107c28ab4(&uStack_110);
  func_0x000107c29958(&uStack_100);
  func_0x000107c28ebc(&uStack_f0);
  func_0x0001088011c8();
  func_0x000107c29194(&uStack_d0);
  func_0x000107c28ab8(&uStack_c0);
  puVar3 = &uStack_b0;
  func_0x000107c2814c();
  func_0x0001088011e8();
  func_0x0001088011e0();
  func_0x000108801168();
  puVar6 = (ulong *)(param_1 + 2);
  puVar8 = (undefined8 *)param_1[1];
  uVar2 = (undefined8 *)*puVar6 <= puVar8;
  if ((bool)uVar2) {
    func_0x0001088010ec();
    func_0x0001088010d4();
    func_0x000108801198();
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000108801128();
    }
    func_0x00010880109c();
    func_0x0001088010e0();
  }
  else {
    *puVar8 = unaff_x22;
    puVar8 = puVar8 + 1;
  }
  param_1[1] = (long)puVar8;
  lVar7 = *param_2;
  uVar5 = *(undefined8 *)(lVar7 + 0x30);
  puVar8 = *(undefined8 **)(lVar7 + 0x38);
  puVar3 = (undefined8 *)0x50;
  __Znwm();
  uStack_80 = uVar5;
  puStack_78 = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_11 != 0);
  }
  uVar10 = *(undefined8 *)(lVar7 + 0x48);
  uVar9 = *(undefined8 *)(lVar7 + 0x40);
  if (*(long *)(lVar7 + 0x48) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_12 != 0);
  }
  uVar12 = *(undefined8 *)(lVar7 + 0xf8);
  uVar11 = *(undefined8 *)(lVar7 + 0xf0);
  if (*(long *)(lVar7 + 0xf8) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_13 != 0);
  }
  uVar14 = *(undefined8 *)(lVar7 + 0xe8);
  uVar13 = *(undefined8 *)(lVar7 + 0xe0);
  if (*(long *)(lVar7 + 0xe8) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_14 != 0);
  }
  *(undefined4 *)(puVar3 + 1) = 2;
  *puVar3 = &PTR_FUN_110a73480;
  puVar3[2] = uVar5;
  puVar3[3] = puVar8;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar3[5] = uVar10;
  puVar3[4] = uVar9;
  puVar3[7] = uVar12;
  puVar3[6] = uVar11;
  uStack_a0 = 0;
  uStack_98 = 0;
  puVar3[9] = uVar14;
  puVar3[8] = uVar13;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x000107c288a4(&uStack_b0);
  func_0x000107c28858(&uStack_a0);
  func_0x000107c28808(&uStack_90);
  puVar4 = &uStack_80;
  func_0x000107c28800();
  func_0x000108801204();
  if ((bool)uVar2) {
    func_0x0001088010ec();
    func_0x0001088010d4();
    func_0x000108801198();
    if (puVar4 != (undefined8 *)0x0) {
      func_0x000108801128();
    }
    func_0x00010880109c();
    func_0x0001088010e0();
  }
  else {
    *puVar8 = puVar3;
    puVar8 = puVar8 + 1;
  }
  param_1[1] = (long)puVar8;
  puVar8 = (undefined8 *)*param_2;
  lVar7 = puVar8[0x1f];
  uVar9 = puVar8[0x1f];
  uVar5 = puVar8[0x1e];
  puVar3 = (undefined8 *)0x40;
  __Znwm();
  if (lVar7 != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_15 != 0);
  }
  uVar11 = puVar8[0x15];
  uVar10 = puVar8[0x14];
  if (puVar8[0x15] != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_16 != 0);
  }
  uVar13 = puVar8[0x29];
  uVar12 = puVar8[0x28];
  if (puVar8[0x29] != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_17 != 0);
  }
  *(undefined4 *)(puVar3 + 1) = 3;
  *puVar3 = &PTR_FUN_110a734c0;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  puVar3[3] = uVar9;
  puVar3[2] = uVar5;
  puVar3[5] = uVar11;
  puVar3[4] = uVar10;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar3[7] = uVar13;
  puVar3[6] = uVar12;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x000107c29958(&uStack_a0);
  func_0x000107c2814c(&uStack_90);
  puVar4 = &uStack_80;
  func_0x000107c28858();
  func_0x000108801204();
  if ((bool)uVar2) {
    func_0x0001088010ec();
    func_0x0001088010d4();
    func_0x000108801198();
    if (puVar4 != (undefined8 *)0x0) {
      func_0x000108801128();
    }
    func_0x00010880109c();
    func_0x0001088010e0();
  }
  else {
    *puVar8 = puVar3;
    puVar8 = puVar8 + 1;
  }
  param_1[1] = (long)puVar8;
  puVar8 = (undefined8 *)*param_2;
  __Znwm(0x58);
  func_0x000108801170();
  uStack_88 = puVar8[9];
  uStack_90 = puVar8[8];
  if (puVar8[9] != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_18 != 0);
  }
  uStack_98 = puVar8[0x2f];
  uStack_a0 = puVar8[0x2e];
  if (puVar8[0x2f] != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_19 != 0);
  }
  uStack_a8 = puVar8[0x31];
  uStack_b0 = puVar8[0x30];
  if (puVar8[0x31] != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_20 != 0);
  }
  func_0x000108804cc0(puVar3,&uStack_80,&uStack_90,&uStack_a0,&uStack_b0);
  func_0x000107c289fc(&uStack_b0);
  func_0x000107c29114(&uStack_a0);
  puVar4 = &uStack_90;
  func_0x000107c28808();
  func_0x000108801168();
  func_0x000108801204();
  if ((bool)uVar2) {
    func_0x0001088010ec();
    func_0x0001088010d4();
    func_0x000108801198();
    if (puVar4 != (undefined8 *)0x0) {
      func_0x000108801128();
    }
    func_0x00010880109c();
    func_0x0001088010e0();
  }
  else {
    *puVar8 = puVar3;
    puVar8 = puVar8 + 1;
  }
  param_1[1] = (long)puVar8;
  puVar8 = (undefined8 *)*param_2;
  func_0x000107c29248(&uStack_90);
  uVar5 = 0x30;
  __Znwm();
  puStack_78 = (undefined8 *)uStack_88;
  uStack_80 = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x000108804420();
  puVar3 = &uStack_80;
  func_0x000107c289ac();
  func_0x000108801204();
  if ((bool)uVar2) {
    func_0x0001088010ec();
    func_0x0001088010d4();
    func_0x000108801198();
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000108801128();
    }
    func_0x00010880109c();
    func_0x0001088010e0();
  }
  else {
    *puVar8 = uVar5;
    puVar8 = puVar8 + 1;
  }
  param_1[1] = (long)puVar8;
  func_0x000107c29254(&uStack_90);
  lVar7 = *param_2;
  uVar5 = 0x110;
  __Znwm();
  func_0x000107c27994(&uStack_80,lVar7);
  uStack_88 = *(undefined8 *)(lVar7 + 0x38);
  uStack_90 = *(undefined8 *)(lVar7 + 0x30);
  if (*(long *)(lVar7 + 0x38) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_21 != 0);
  }
  uStack_98 = *(undefined8 *)(lVar7 + 0x48);
  uStack_a0 = *(undefined8 *)(lVar7 + 0x40);
  if (*(long *)(lVar7 + 0x48) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_22 != 0);
  }
  uStack_a8 = *(undefined8 *)(lVar7 + 0xb8);
  uStack_b0 = *(undefined8 *)(lVar7 + 0xb0);
  if (*(long *)(lVar7 + 0xb8) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_23 != 0);
  }
  uStack_b8 = *(undefined8 *)(lVar7 + 0xa8);
  uStack_c0 = *(undefined8 *)(lVar7 + 0xa0);
  if (*(long *)(lVar7 + 0xa8) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_24 != 0);
  }
  uStack_c8 = *(undefined8 *)(lVar7 + 0x98);
  uStack_d0 = *(undefined8 *)(lVar7 + 0x90);
  if (*(long *)(lVar7 + 0x98) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_25 != 0);
  }
  uStack_d8 = *(undefined8 *)(lVar7 + 0x128);
  uStack_e0 = *(undefined8 *)(lVar7 + 0x120);
  if (*(long *)(lVar7 + 0x128) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_26 != 0);
  }
  uStack_e8 = *(undefined8 *)(lVar7 + 0xd8);
  uStack_f0 = *(undefined8 *)(lVar7 + 0xd0);
  if (*(long *)(lVar7 + 0xd8) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_27 != 0);
  }
  uStack_f8 = *(undefined8 *)(lVar7 + 0xe8);
  uStack_100 = *(undefined8 *)(lVar7 + 0xe0);
  if (*(long *)(lVar7 + 0xe8) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_28 != 0);
  }
  uStack_108 = *(undefined8 *)(lVar7 + 0x188);
  uStack_110 = *(undefined8 *)(lVar7 + 0x180);
  if (*(long *)(lVar7 + 0x188) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_29 != 0);
  }
  uStack_118 = *(undefined8 *)(lVar7 + 0x198);
  uStack_120 = *(undefined8 *)(lVar7 + 400);
  if (*(long *)(lVar7 + 0x198) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_30 != 0);
  }
  uStack_128 = *(undefined8 *)(lVar7 + 0x2e8);
  uStack_130 = *(undefined8 *)(lVar7 + 0x2e0);
  if (*(long *)(lVar7 + 0x2e8) != 0) {
    do {
      func_0x0001088010c4();
    } while (extraout_w10_31 != 0);
  }
  func_0x0001088010fc();
  FUN_10880750c(uVar5);
  func_0x000107c297ac(&uStack_130);
  func_0x000107c2995c(&uStack_120);
  func_0x000107c289fc(&uStack_110);
  func_0x000107c288a4(&uStack_100);
  func_0x000107c28abc(&uStack_f0);
  func_0x0001088011c8();
  func_0x000107c28ab8(&uStack_d0);
  func_0x000107c2814c(&uStack_c0);
  puVar3 = &uStack_b0;
  func_0x000107c288e8();
  func_0x0001088011e8();
  func_0x0001088011e0();
  func_0x000108801168();
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    puVar3 = puVar8 + 1;
    *puVar8 = uVar5;
  }
  else {
    func_0x0001088010d4((long)puVar8 - *param_1 >> 3);
    lVar7 = *param_1;
    lVar1 = param_1[1];
    puStack_60 = puVar6;
    if (puVar3 == (undefined8 *)0x0) {
      puStack_68 = (undefined8 *)0x0;
    }
    else {
      puVar8 = puVar3;
      func_0x000108801128();
      puStack_68 = puVar3;
      puVar3 = puVar8;
    }
    puStack_78 = (undefined8 *)((long)puStack_68 + (lVar1 - lVar7));
    puStack_68 = puStack_68 + (long)puVar3;
    puVar8 = puStack_78 + 1;
    *puStack_78 = uVar5;
    puStack_70 = puVar8;
    FUN_108800bcc(param_1,&uStack_80);
    puVar3 = (undefined8 *)param_1[1];
    FUN_1087fb8e4(&uStack_80);
  }
  param_1[1] = (long)puVar3;
  return;
}



/* Entry: 108800bcc; end: 108800c4b;  */

void FUN_108800bcc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108800c4c; end: 108800c4f;  */

undefined8 * FUN_108800c4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73480;
  func_0x000107c288a4(param_1 + 8);
  func_0x000107c28858(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c28800(param_1 + 2);
  return param_1;
}



/* Entry: 108800c50; end: 108800c63;  */

void FUN_108800c50(void)

{
  FUN_108800e38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108800c64; end: 108800e37;  */

undefined8 * FUN_108800c64(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 auStack_1f8 [3];
  undefined1 auStack_1e0 [44];
  undefined4 uStack_1b4;
  char cStack_190;
  undefined8 auStack_188 [3];
  undefined8 uStack_170;
  long *plStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined1 auStack_138 [56];
  undefined1 uStack_100;
  undefined1 auStack_f8 [56];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [120];
  
  func_0x000108801130();
  func_0x0001087fbde0(auStack_1f8);
  func_0x0001088011b0();
  uVar1 = *(undefined4 *)(unaff_x20 + 0x530);
  plVar3 = *(long **)(unaff_x19 + 0x10);
  (**(code **)(*plVar3 + 0x10))();
  func_0x000107c27994(auStack_188);
  uStack_170 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_160 = 0;
  uStack_158 = *(undefined4 *)(unaff_x20 + 0x528);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x520);
  uStack_148 = *(undefined4 *)(unaff_x20 + 0x52c);
  uStack_144 = 3;
  plStack_168 = plVar3;
  uStack_15c = uVar1;
  FUN_108860568(auStack_1e0,*(undefined8 *)(unaff_x19 + 0x20),auStack_188);
  uVar2 = cStack_190 == '\x01';
  if ((bool)uVar2) {
    plVar3 = *(long **)(unaff_x19 + 0x30);
    (**(code **)(*plVar3 + 0x10))();
    FUN_10879ca28(uStack_15c,uStack_1b4,plVar3,*(undefined8 *)(unaff_x19 + 0x40));
    uVar5 = (ulong)*(uint *)(unaff_x19 + 8);
    auStack_f8[0] = 0;
    uStack_c0 = 0;
    func_0x0001087fc040(auStack_b8,uVar5,4,auStack_f8);
    func_0x0001088011a4();
    func_0x000108801160();
    FUN_1087a33a8(auStack_f8);
    func_0x0001088011d8();
  }
  else {
    func_0x0001088011d8();
    uVar5 = (ulong)*(uint *)(unaff_x19 + 8);
    auStack_138[0] = 0;
    uStack_100 = 0;
    func_0x0001087fc040(auStack_b8,uVar5,0,auStack_138);
    func_0x0001088011a4();
    func_0x000108801160();
    FUN_1087a33a8(auStack_138);
  }
  puVar4 = auStack_188;
  func_0x000107c27914();
  while( true ) {
    func_0x000108801158();
    func_0x000108801180();
    if ((bool)uVar2) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)uVar5 == 0) break;
    func_0x000108801160();
    FUN_1087a33a8(auStack_f8);
    func_0x0001088011d8();
    func_0x000107c27914(auStack_188);
    ___cxa_begin_catch(puVar4);
    puVar4 = auStack_1f8;
    func_0x0001053360b0();
    ___cxa_end_catch();
  }
  func_0x0001088011d0();
  *puVar4 = &PTR_FUN_110a73480;
  func_0x000107c288a4(puVar4 + 8);
  func_0x000107c28858(puVar4 + 6);
  func_0x000107c28808(puVar4 + 4);
  func_0x000107c28800(puVar4 + 2);
  return puVar4;
}



/* Entry: 108800e38; end: 108800e87;  */

undefined8 * FUN_108800e38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73480;
  func_0x000107c288a4(param_1 + 8);
  func_0x000107c28858(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c28800(param_1 + 2);
  return param_1;
}



/* Entry: 108800e88; end: 108800e8b;  */

undefined8 * FUN_108800e88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a734c0;
  func_0x000107c29958(param_1 + 6);
  func_0x000107c2814c(param_1 + 4);
  func_0x000107c28858(param_1 + 2);
  return param_1;
}



/* Entry: 108800e8c; end: 108800e9f;  */

void FUN_108800e8c(void)

{
  FUN_108800fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108800ea0; end: 108800fcf;  */

long * FUN_108800ea0(undefined8 param_1,ulong param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long alStack_110 [3];
  undefined1 auStack_f8 [56];
  undefined1 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_68;
  undefined1 uStack_50;
  
  func_0x000108801130();
  func_0x0001087fbde0(alStack_110);
  func_0x0001088011b0();
  uVar1 = *(int *)(unaff_x20 + 0x52c) == 3;
  if ((bool)uVar1) {
    plVar2 = *(long **)(unaff_x19 + 0x10);
    (**(code **)(*plVar2 + 0x10))();
    if ((int)plVar2 == 0) {
      uStack_b8 = *(undefined4 *)(unaff_x19 + 8);
      uStack_b4 = 5;
      uStack_b0 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_50 = 0;
      func_0x0001088011bc();
      func_0x000108801150();
      goto LAB_108800f24;
    }
  }
  FUN_108801018();
  param_2 = (ulong)*(uint *)(unaff_x19 + 8);
  auStack_f8[0] = 0;
  uStack_c0 = 0;
  func_0x0001087fc040(&uStack_b8,param_2,0,auStack_f8);
  func_0x0001088011bc();
  func_0x000108801150();
  plVar2 = (long *)auStack_f8;
  FUN_1087a33a8();
LAB_108800f24:
  while( true ) {
    func_0x000108801158();
    func_0x000108801180();
    if ((bool)uVar1) {
      return plVar2;
    }
    ___stack_chk_fail();
    if ((int)param_2 == 0) break;
    func_0x000108801150();
    ___cxa_begin_catch(plVar2);
    plVar2 = alStack_110;
    func_0x0001053360b0();
    ___cxa_end_catch();
  }
  func_0x0001088011d0();
  *plVar2 = (long)&PTR_FUN_110a734c0;
  func_0x000107c29958(plVar2 + 6);
  func_0x000107c2814c(plVar2 + 4);
  func_0x000107c28858(plVar2 + 2);
  return plVar2;
}



/* Entry: 108800fd0; end: 108801017;  */

undefined8 * FUN_108800fd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a734c0;
  func_0x000107c29958(param_1 + 6);
  func_0x000107c2814c(param_1 + 4);
  func_0x000107c28858(param_1 + 2);
  return param_1;
}



/* Entry: 108801018; end: 10880109b;  */

void FUN_108801018(long param_1)

{
  undefined1 auStack_778 [904];
  undefined1 uStack_3f0;
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [944];
  
  func_0x000107c27994(auStack_3e8);
  auStack_778[0] = 0;
  uStack_3f0 = 0;
  FUN_10864094c(auStack_3d0,auStack_3e8,2,auStack_778);
  func_0x00010863f788(auStack_778);
  func_0x000107c27914(auStack_3e8);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),auStack_3d0);
  FUN_108798a4c(auStack_3d0);
  return;
}



/* Entry: 10880109c; end: 10880120f;  */

void FUN_10880109c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  
  puVar1 = (undefined8 *)(param_1 + (unaff_x23 - unaff_x24));
  *(undefined8 **)(unaff_x29 + -0x68) = puVar1;
  *(long *)(unaff_x29 + -0x58) = param_1 + param_2 * 8;
  *puVar1 = unaff_x22;
  *(undefined8 **)(unaff_x29 + -0x60) = puVar1 + 1;
  lVar2 = *(long *)(unaff_x29 + -0x68) - (unaff_x19[1] - *unaff_x19);
  _memcpy(lVar2);
  *(long *)(unaff_x29 + -0x68) = lVar2;
  lVar2 = *unaff_x19;
  unaff_x19[1] = lVar2;
  *unaff_x19 = *(long *)(unaff_x29 + -0x68);
  *(long *)(unaff_x29 + -0x68) = lVar2;
  lVar2 = unaff_x19[1];
  unaff_x19[1] = *(long *)(unaff_x29 + -0x60);
  *(long *)(unaff_x29 + -0x60) = lVar2;
  lVar2 = unaff_x19[2];
  unaff_x19[2] = *(long *)(unaff_x29 + -0x58);
  *(long *)(unaff_x29 + -0x58) = lVar2;
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x68);
  return;
}



/* Entry: 108801210; end: 1088012e3;  */

uint FUN_108801210(long param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  uVar2 = (uint)auStack_60;
  func_0x000107c29ee4(auStack_40,param_3);
  FUN_10865ecd8(auStack_60,auStack_40);
  ppuVar1 = &PTR_PTR_113286e08;
  if (*(undefined ***)(param_1 + 0x30) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x30);
  }
  if (*(int *)(param_2 + 0x40) == 4) {
    uVar2 = (uint)auStack_60;
    FUN_1088012e4(auStack_60,ppuVar1 + 3);
  }
  else {
    if (*(int *)(param_2 + 0x40) != 5) {
      uVar2 = 0;
      iVar3 = 0;
      goto LAB_108801298;
    }
    FUN_1088012e4(auStack_60,ppuVar1 + 6);
  }
  iVar3 = 1;
LAB_108801298:
  func_0x000107c2a2e0(auStack_60);
  func_0x000107c2a2e0(auStack_40);
  return uVar2 | iVar3 << 8;
}



/* Entry: 1088012e4; end: 10880133f;  */

bool FUN_1088012e4(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar2 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar2 = (ulong *)(*param_2 + 7);
  }
  FUN_1086a30cc(puVar2,puVar2 + (int)param_2[1],param_1);
  puVar1 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar1 = (ulong *)(*param_2 + 7);
  }
  return puVar1 + (int)param_2[1] != puVar2;
}



/* Entry: 108801340; end: 10880172b;  */

void FUN_108801340(long param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 in_x7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_830 [904];
  undefined1 uStack_4a8;
  undefined1 auStack_4a0 [24];
  long alStack_488 [118];
  undefined1 auStack_d8 [88];
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 auStack_50 [2];
  
  puVar1 = auStack_68;
  func_0x000107c27994(puVar1,param_2 + 10);
  lVar10 = param_2[0xd];
  uStack_80 = 0;
  func_0x000107c28258();
  uStack_70 = 1;
  lVar2 = param_1;
  puStack_78 = puVar1;
  FUN_10880172c(param_1,param_2);
  lVar9 = *param_2;
  lVar8 = param_2[1];
  iVar6 = (int)lVar2;
  if ((lVar9 == lVar8) || (lVar2 = *(long *)(lVar8 + -0x10), *(long *)(lVar8 + -0x18) == lVar2)) {
    if (iVar6 != 7) {
      iVar5 = 7;
      goto LAB_1088013d0;
    }
  }
  else {
    iVar5 = *(int *)(lVar2 + -0x6c);
    if (iVar6 != iVar5) {
      *(int *)(lVar2 + -0x6c) = iVar6;
LAB_1088013d0:
      (**(code **)(**(long **)(param_1 + 0x68) + 0x30))(*(long **)(param_1 + 0x68),iVar5);
      lVar9 = *param_2;
      lVar8 = param_2[1];
    }
  }
  plVar3 = *(long **)(param_1 + 200);
  if (lVar9 == lVar8) {
    lVar9 = *(long *)(lVar8 + -0x10);
  }
  else {
    lVar9 = *(long *)(lVar8 + -0x10);
    if ((*(long *)(lVar8 + -0x18) != lVar9) && (*(int *)(lVar9 + -0x6c) != 7)) goto LAB_108801448;
  }
  if ((*(char *)(lVar9 + -0x24) != '\x01' || *(int *)(lVar9 + -0x28) != 2) &&
     ((**(code **)(*plVar3 + 0x18))(plVar3,param_2 + 10), (int)plVar3 != 0)) {
    *(undefined4 *)(lVar9 + -0x28) = 2;
    *(undefined1 *)(lVar9 + -0x24) = 1;
  }
LAB_108801448:
  func_0x000107c28288(&uStack_80);
  lVar9 = param_2[1];
  puVar4 = &uStack_80;
  FUN_1087b023c(puVar4);
  FUN_10868ca64(auStack_d8,auStack_68);
  FUN_1087fa884(param_1 + 8,param_1 + 0x68,param_2 + 3,lVar9 + -0x18,puVar4,1,auStack_d8,in_x7,
                lVar10,1);
  func_0x000107c279dc(auStack_d8);
  lVar9 = param_2[1];
  lVar8 = *(long *)(lVar9 + -0x10);
  auStack_50[0] = *(undefined8 *)(lVar8 + -0x28);
  if ((*param_2 == lVar9) || (*(long *)(lVar9 + -0x18) == lVar8)) {
    uVar7 = 7;
  }
  else {
    uVar7 = *(undefined4 *)(lVar8 + -0x6c);
  }
  alStack_488[0] = param_2[0xac];
  (**(code **)(**(long **)(param_1 + 0x68) + 0x20))
            (*(long **)(param_1 + 0x68),alStack_488,uVar7,auStack_50);
  plVar3 = *(long **)(param_1 + 0x58);
  func_0x000107c27994(auStack_4a0,param_2 + 6);
  auStack_830[0] = 0;
  uStack_4a8 = 0;
  FUN_10864094c(alStack_488,auStack_4a0,2,auStack_830);
  lVar9 = param_2[1];
  if ((*param_2 == lVar9) || (*(long *)(lVar9 + -0x18) == *(long *)(lVar9 + -0x10))) {
    uVar7 = 7;
  }
  else {
    uVar7 = *(undefined4 *)(*(long *)(lVar9 + -0x10) + -0x6c);
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,alStack_488,uVar7);
  FUN_108798a4c(alStack_488);
  func_0x00010863f788(auStack_830);
  func_0x000107c27914(auStack_4a0);
  func_0x000107c27914(auStack_68);
  return;
}



/* Entry: 10880172c; end: 108803593;  */

undefined4 FUN_10880172c(long *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined ***pppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 uVar14;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  ulong extraout_x8_05;
  code *extraout_x8_06;
  undefined **extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined *puVar15;
  long extraout_x9_02;
  undefined **extraout_x9_03;
  undefined **extraout_x9_04;
  undefined **extraout_x9_05;
  undefined **extraout_x9_06;
  undefined **extraout_x9_07;
  undefined **extraout_x9_08;
  undefined **extraout_x9_09;
  undefined **extraout_x9_10;
  undefined **extraout_x9_11;
  undefined **extraout_x9_12;
  undefined **extraout_x9_13;
  undefined **extraout_x9_14;
  undefined **extraout_x9_15;
  undefined **extraout_x9_16;
  undefined **extraout_x9_17;
  undefined **extraout_x9_18;
  undefined **extraout_x11;
  undefined **ppuVar16;
  undefined **extraout_x11_00;
  undefined **extraout_x11_01;
  undefined **extraout_x11_02;
  undefined **extraout_x11_03;
  undefined **extraout_x11_04;
  undefined **extraout_x11_05;
  undefined **extraout_x11_06;
  undefined **extraout_x11_07;
  undefined4 uVar17;
  undefined **ppuVar18;
  long *plVar19;
  undefined **ppuVar20;
  long lVar21;
  long lVar22;
  undefined **unaff_x27;
  undefined **ppuVar23;
  undefined **ppuStack_d90;
  undefined **ppuStack_d88;
  ulong uStack_d80;
  int iStack_d78;
  int iStack_d74;
  ulong uStack_d70;
  uint uStack_d64;
  undefined **ppuStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined *puStack_d48;
  undefined *puStack_d40;
  undefined ***pppuStack_d38;
  undefined8 uStack_d30;
  undefined **ppuStack_d28;
  ulong uStack_d20;
  undefined1 auStack_d18 [120];
  undefined1 auStack_ca0 [24];
  undefined1 auStack_c88 [64];
  long lStack_c48;
  long lStack_c40;
  undefined8 uStack_c38;
  undefined1 auStack_c30 [24];
  undefined **ppuStack_c18;
  byte bStack_bf0;
  undefined **ppuStack_be8;
  byte bStack_b88;
  undefined **ppuStack_b80;
  undefined **ppuStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b60;
  char cStack_b58;
  undefined1 auStack_b30 [48];
  undefined **ppuStack_b00;
  char cStack_9d8;
  long lStack_9d0;
  long lStack_9c8;
  undefined8 ****appppuStack_828 [6];
  undefined1 auStack_7f8 [120];
  byte bStack_780;
  byte bStack_678;
  undefined8 ****ppppuStack_670;
  ulong uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_650;
  undefined *apuStack_648 [5];
  undefined1 auStack_620 [88];
  char cStack_5c8;
  char cStack_4c8;
  byte bStack_4c0;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  ulong uStack_4a8;
  undefined **ppuStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_428 [24];
  char cStack_410;
  undefined **ppuStack_3c0;
  undefined **ppuStack_360;
  byte bStack_348;
  undefined **ppuStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined **ppuStack_2c8;
  ulong uStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined ***pppuStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  char cStack_110;
  char cStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_2 + 10;
  iVar9 = *(int *)(param_2 + 0x38);
  ppuVar18 = (undefined **)param_2[0xd];
  puVar15 = param_2[1];
  if (*param_2 == puVar15) {
    if (*(char *)(param_2 + 0x17) != '\x01') {
LAB_10880184c:
      uVar17 = 7;
LAB_108801858:
      if (*(char *)(param_2 + 0x23) != '\x01') goto LAB_108802e68;
      uVar10 = *(uint *)((long)param_2 + 0x1c4);
      uVar14 = *(undefined8 *)(param_1[3] + 0x18);
      func_0x000107c278b8(auStack_ca0,&UNK_10f4bbffb);
      func_0x000107c31420(auStack_c88,uVar14,auStack_ca0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ca0);
      lVar21 = *(long *)(param_2[1] + -0x18);
      lVar22 = *(long *)(param_2[1] + -0x10);
      if ((lVar21 != lVar22) && (*(int *)(lVar22 + -0x6c) != 0)) {
        iVar9 = (int)*param_2;
        FUN_108803594();
        if (iVar9 == 0) {
          if ((*(int *)(param_2 + 0x16) != 4) &&
             ((*(int *)(param_2 + 0x16) != 5 || 10 < uVar10 ||
              ((1 << (ulong)(uVar10 & 0x1f) & 0x4a0U) == 0)))) {
            FUN_108862cf0(&ppuStack_2e0,param_1[3],ppuVar1,ppuVar18);
            func_0x000107c28998(&ppppuStack_670,&ppuStack_2e0);
            func_0x000108803e08();
            func_0x000108803d18(param_1[3]);
            func_0x000108803e5c(appppuStack_828);
            func_0x000108803d50();
            if (cStack_4c8 == '\x01') {
              func_0x000108803ed0(&ppuStack_2e0,param_1[3]);
              if (cStack_110 == '\x01') {
                bVar5 = *(int *)(param_2 + 0x16) == 0x18 & (byte)apuStack_648[0];
                if (bVar5 == 1) {
                  func_0x000108803e18(param_1[3]);
                }
                ppuStack_b78 = (undefined **)0x0;
                ppuStack_b80 = (undefined **)0x0;
                uStack_b70 = 0;
                FUN_1086a125c(&ppuStack_4b8,param_1[3],&ppppuStack_670);
                func_0x000108803f18();
                func_0x000108803e10();
                if (bVar5 != 0) {
                  FUN_108869e60(&ppuStack_4b8,param_1[3],ppuVar1,uStack_650);
                  FUN_10867b070(&lStack_9d0,&ppuStack_4b8);
                  func_0x000107c28948(&ppuStack_4b8);
                  for (; lStack_9d0 != lStack_9c8; lStack_9d0 = lStack_9d0 + 0x1a8) {
                    FUN_1086a125c(&ppuStack_4b8,param_1[3],lStack_9d0);
                    func_0x000108803f18();
                    func_0x000108803e10();
                  }
                  func_0x00010867b9fc(&lStack_9d0);
                }
                func_0x000108803e9c();
                func_0x000108803d0c();
                func_0x000108803db8();
                func_0x000108803e74();
              }
              func_0x000108803e54();
            }
            func_0x000108803e18(param_1[3]);
            func_0x000108803d58(param_1[3]);
            if ((cStack_4c8 == '\x01') && ((bStack_780 & 1) != 0)) {
              (**(code **)(*(long *)param_1[0xf] + 0x20))
                        ((long *)param_1[0xf],ppuVar1,auStack_7f8,auStack_620);
            }
            func_0x000107c28f90(appppuStack_828);
            func_0x000107c288dc(&ppppuStack_670);
            bVar7 = false;
            uVar17 = 7;
            goto LAB_108802dec;
          }
          func_0x000108803d18(param_1[3]);
          func_0x000108803e5c(&ppuStack_4b8);
          func_0x000108803d50();
          if (cStack_410 == '\x01') {
            FUN_1088605f8(param_1[3],auStack_428,3);
            goto LAB_108801df8;
          }
          func_0x000108803d58(param_1[3]);
        }
        else {
          func_0x000108803d18(param_1[3]);
          func_0x000108803e5c(&ppuStack_4b8);
          func_0x000108803d50();
          if (cStack_410 == '\x01') {
            func_0x000108803f38();
            goto LAB_108801df8;
          }
          func_0x000108803d58(param_1[3]);
        }
        uVar17 = 7;
LAB_108801df8:
        func_0x000107c28f90(&ppuStack_4b8);
        bVar7 = false;
        goto LAB_108802dec;
      }
      if ((*(char *)(param_2 + 0xa0) == '\x01') && (*(int *)(param_2 + 0x9f) == 0xd)) {
        if (iVar9 == 1) {
          func_0x000108803e18(param_1[3]);
          plVar19 = (long *)param_1[0x1b];
          puStack_2b8 = (undefined *)0x0;
          uStack_2c0 = 0;
          ppuStack_2c8 = (undefined **)0x0;
          uStack_2d0 = 0;
          uStack_2d8 = 0;
          ppuStack_2e0 = (undefined **)0x0;
          FUN_1086cf200(&ppuStack_2e0);
          func_0x000108803f44();
          ppuVar23 = extraout_x9;
          if (extraout_w8 != 0xd) {
            ppuVar23 = &PTR_PTR_11327f548;
          }
          FUN_10868cc20(auStack_d18,ppuVar23);
          (**(code **)(*plVar19 + 0x28))
                    (&ppuStack_4b8,plVar19,ppuVar1,1,0x1200b4,&ppuStack_2e0,auStack_d18,0,0);
          FUN_1089058f8(auStack_d18);
          func_0x0001086cf230(&ppuStack_2e0);
        }
        goto LAB_108801ee4;
      }
      if (1 < iVar9 - 1U) goto LAB_108801ee4;
      if (*(int *)(param_2 + 0x16) == 4) {
        if (*(char *)(param_2 + 0x78) == '\x01') goto LAB_108801d58;
        uStack_2d0 = 0;
        ppuStack_2e0 = (undefined **)0x1;
      }
      else {
        if ((*(int *)(param_2 + 0x16) != 6) || (((ulong)param_2[0x80] & 1) != 0)) {
LAB_108801d58:
          lVar3 = 0x4f8;
          if (*(char *)(param_2 + 0x17) == '\0') {
            lVar3 = 200;
          }
          if ((*(byte *)((long)ppuVar1 + lVar3) & 1) == 0) {
            func_0x000108803d98();
            func_0x000107c2793c(&UNK_10f4bc0ca);
            func_0x000108803cb4();
            func_0x000108803cc8();
            func_0x000108803d80();
            func_0x000108803d6c();
            func_0x000108803e20();
            func_0x00010bd3f4e0();
            goto LAB_108803114;
          }
          ppuVar23 = (undefined **)param_2[0xd];
          if ((lVar21 != lVar22) && (*(int *)(lVar22 + -0x6c) != 0)) {
            func_0x000108803d98();
            func_0x000107c2793c(&UNK_10f4bc11f);
            func_0x000108803cb4();
            func_0x000108803cc8();
            func_0x000108803d80();
            func_0x000108803d6c();
            func_0x000108803e20();
            func_0x00010bd3f4e0();
            goto LAB_108803114;
          }
          if (*(int *)(param_2 + 0x38) == 0) {
            func_0x000108803d98();
            func_0x000107c2793c(&UNK_10f4bc173);
            func_0x000108803cb4();
            func_0x000108803cc8();
            func_0x000108803d80();
            func_0x000108803d6c();
            func_0x000108803e20();
            func_0x00010bd3f4e0();
            goto LAB_108803114;
          }
          FUN_108862d6c(&ppuStack_2e0,param_1[3],ppuVar1,ppuVar23);
          func_0x000107c28998(&ppuStack_b80,&ppuStack_2e0);
          func_0x000108803e08();
          func_0x000108803d18(param_1[3]);
          func_0x000108803e5c(auStack_c30);
          func_0x000108803d50();
          bVar7 = false;
          if (cStack_9d8 != '\x01') goto LAB_108802dcc;
          if ((bStack_b88 & 1) == 0) goto LAB_108802dcc;
          if ((bStack_bf0 & 1) == 0) {
            bVar7 = false;
            goto LAB_108802dcc;
          }
          uVar10 = (uint)auStack_b30;
          FUN_108844938();
          uStack_d70 = (ulong)uVar10;
          ppuVar16 = &PTR_PTR_113284418;
          if (ppuStack_be8 != (undefined **)0x0) {
            ppuVar16 = ppuStack_be8;
          }
          uVar10 = *(uint *)(ppuVar16 + 8);
          uStack_d80 = (ulong)uVar10;
          if (uVar10 == 4) {
            if (((ulong)param_2[0x78] & 1) != 0) {
LAB_108801f50:
              iStack_d74 = *(int *)(param_2 + 0x38);
              ppuStack_d88 = (undefined **)param_2[0x36];
LAB_1088020a0:
              iStack_d78 = 0;
              uStack_d64 = 1;
              goto LAB_1088020a8;
            }
            uStack_2d0 = 0;
            ppuStack_2e0 = (undefined **)0x1;
          }
          else {
            if (uVar10 != 6) {
              iStack_d74 = *(int *)(param_2 + 0x38);
              ppuStack_d88 = (undefined **)param_2[0x36];
              if (uVar10 != 0x10) goto LAB_1088020a0;
              bVar7 = (undefined **)param_2[0x1e] == (undefined **)0x0;
              ppuVar16 = &PTR_PTR_113284418;
              if (!bVar7) {
                ppuVar16 = (undefined **)param_2[0x1e];
              }
              func_0x000108803ec0(ppuVar16);
              lVar21 = extraout_x9_00 + 0xb58;
              if (!bVar7) {
                lVar21 = extraout_x8_01;
              }
              ppuVar16 = extraout_x11;
              if (ppuStack_b00 != (undefined **)0x0) {
                ppuVar16 = ppuStack_b00;
              }
              puVar15 = ppuVar16[0x18];
              ppuVar20 = ppuVar16 + 0x18;
              if (((ulong)puVar15 & 1) != 0) {
                ppuVar20 = (undefined **)(puVar15 + 7);
              }
              lVar22 = (long)*(int *)(ppuVar16 + 0x19) << 3;
              do {
                bVar7 = lVar22 == 0;
                uStack_d64 = (uint)bVar7;
                if (lVar22 == 0) break;
                func_0x000108803ec0(*ppuVar20);
                uVar11 = extraout_x9_01 + 0xb58;
                if (!bVar7) {
                  uVar11 = extraout_x8_02;
                }
                func_0x000107c287e8(uVar11,lVar21);
                lVar22 = lVar22 + -8;
                ppuVar20 = ppuVar20 + 1;
              } while ((uVar11 & 1) == 0);
              iStack_d78 = 1;
LAB_1088020a8:
              ppuStack_d90 = param_2 + 0x36;
              unaff_x27 = &PTR_PTR_113284418;
              if (ppuStack_be8 != (undefined **)0x0) {
                unaff_x27 = ppuStack_be8;
              }
              switch(*(undefined4 *)(unaff_x27 + 8)) {
              case 0x11:
                if ((unaff_x27[7][0x10] & 1) != 0) goto code_r0x0001088020d8;
                break;
              case 0x17:
              case 0x18:
              case 0x1b:
code_r0x0001088020d8:
                ppuVar23 = &PTR_PTR_113284418;
                if ((undefined **)param_2[0x1e] != (undefined **)0x0) {
                  ppuVar23 = (undefined **)param_2[0x1e];
                }
                FUN_1086e981c(ppuVar23,&ppuStack_b80);
                goto code_r0x000108802a4c;
              case 0x1c:
                lVar21 = param_1[3];
                ppuStack_4b8 = ppuVar23;
                FUN_1086afdec(&ppuStack_2e0,&ppuStack_4b8,1);
                FUN_10886488c(lVar21,ppuVar1,&ppuStack_2e0);
                func_0x00010867bb84(&ppuStack_2e0);
                goto LAB_108802a7c;
              }
              uStack_2d8 = 0;
              ppuStack_2e0 = &PTR_FUN_110a96220;
              uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
              ppuStack_2c8 = (undefined **)0x0;
              uStack_2d0 = 0;
              puStack_2b8 = (undefined *)0x0;
              uStack_2c0 = 0;
              puStack_2b0 = (undefined *)0x0;
              func_0x0001086a56fc(&ppuStack_2e0);
              func_0x0001088bf408();
              puStack_2b8 = unaff_x27[5];
              pppuVar12 = &ppuStack_2e0;
              FUN_1086a5b88();
              func_0x0001088bf408();
              bVar7 = *(int *)(unaff_x27 + 8) + -4 == 0x16;
              switch(*(int *)(unaff_x27 + 8) + -4) {
              case 0:
                if (((ulong)param_2[0x78] & 1) != 0) {
                  if ((int)uStack_2a0 != 4) {
                    func_0x000108803ce4();
                    func_0x000108803d3c(4);
                    if (((ulong)pppuVar12 & 1) != 0) {
                      func_0x000108803d30();
                    }
                    func_0x00010880371c();
                    pppuStack_2a8 = pppuVar12;
                  }
                  FUN_10891dbcc();
                  puStack_2b0 = param_2[0x76];
                  goto LAB_108802a14;
                }
                func_0x000108803e2c(&UNK_10f4bc2c8);
                func_0x00010bd3f434();
                func_0x000108803cec();
                func_0x000108803e20();
                func_0x00010bd3f4e0();
                break;
              case 1:
                func_0x000108803c70(&UNK_110a95360);
                uVar8 = extraout_w8_01 == 5;
                if (!(bool)uVar8) {
                  func_0x000108803ce4();
                  func_0x000108803d3c(5);
                  if (((ulong)pppuVar12 & 1) != 0) {
                    func_0x000108803d30();
                  }
                  func_0x000108803758();
                  pppuStack_2a8 = pppuVar12;
                }
                pppuVar12 = pppuStack_2a8;
                func_0x000108803dd8();
                if (!(bool)uVar8) {
                  ppuVar23 = pppuVar12[1];
                  if (((ulong)ppuVar23 & 1) != 0) {
                    func_0x000108803df0();
                    ppuVar23 = extraout_x9_05;
                  }
                  ppuVar16 = ppuStack_4b0;
                  if (((ulong)ppuStack_4b0 & 1) != 0) {
                    func_0x000108803de4();
                    ppuVar23 = extraout_x9_06;
                    ppuVar16 = extraout_x11_01;
                  }
                  if (ppuVar23 == ppuVar16) {
                    func_0x000108803dfc();
                  }
                  else {
                    FUN_10891dd7c();
                  }
                }
                FUN_10891dcd4(&ppuStack_4b8);
                goto LAB_108802a14;
              case 2:
                if (((ulong)param_2[0x80] & 1) != 0) {
                  if ((int)uStack_2a0 != 6) {
                    func_0x000108803ce4();
                    func_0x000108803d3c(6);
                    if (((ulong)pppuVar12 & 1) != 0) {
                      func_0x000108803d30();
                    }
                    func_0x00010880378c();
                    pppuStack_2a8 = pppuVar12;
                  }
                  func_0x00010891e364();
                  goto LAB_108802a14;
                }
                func_0x000108803e2c(&UNK_10f4bc2e9);
                func_0x00010bd3f434();
                func_0x000108803cec();
                func_0x000108803e20();
                func_0x00010bd3f4e0();
                break;
              case 3:
                func_0x000108803c70(&UNK_110a94eb0);
                uVar8 = extraout_w8_03 == 7;
                if (!(bool)uVar8) {
                  func_0x000108803ce4();
                  func_0x000108803d3c(7);
                  if (((ulong)pppuVar12 & 1) != 0) {
                    func_0x000108803d30();
                  }
                  func_0x0001088037d0();
                  pppuStack_2a8 = pppuVar12;
                }
                pppuVar12 = pppuStack_2a8;
                func_0x000108803dd8();
                if (!(bool)uVar8) {
                  ppuVar23 = pppuVar12[1];
                  if (((ulong)ppuVar23 & 1) != 0) {
                    func_0x000108803df0();
                    ppuVar23 = extraout_x9_09;
                  }
                  ppuVar16 = ppuStack_4b0;
                  if (((ulong)ppuStack_4b0 & 1) != 0) {
                    func_0x000108803de4();
                    ppuVar23 = extraout_x9_10;
                    ppuVar16 = extraout_x11_03;
                  }
                  if (ppuVar23 == ppuVar16) {
                    func_0x000108803dfc();
                  }
                  else {
                    FUN_10891e644();
                  }
                }
                FUN_10891e59c(&ppuStack_4b8);
                goto LAB_108802a14;
              case 4:
                if (((ulong)param_2[0x85] & 1) != 0) {
                  if ((int)uStack_2a0 != 8) {
                    func_0x000108803ce4();
                    func_0x000108803d3c(8);
                    if (((ulong)pppuVar12 & 1) != 0) {
                      func_0x000108803d30();
                    }
                    func_0x000108803804();
                    pppuStack_2a8 = pppuVar12;
                  }
                  FUN_10891e9c4();
                  goto LAB_108802a14;
                }
                func_0x000108803e2c(&UNK_10f4bc30a);
                func_0x00010bd3f434();
                func_0x000108803cec();
                func_0x000108803e20();
                func_0x00010bd3f4e0();
                break;
              default:
                goto LAB_108802a14;
              case 6:
                func_0x000108803c70(&UNK_110a95180);
                uVar8 = extraout_w8_02 == 10;
                if (!(bool)uVar8) {
                  func_0x000108803ce4();
                  func_0x000108803d3c(10);
                  if (((ulong)pppuVar12 & 1) != 0) {
                    func_0x000108803d30();
                  }
                  func_0x00010880383c();
                  pppuStack_2a8 = pppuVar12;
                }
                pppuVar12 = pppuStack_2a8;
                func_0x000108803dd8();
                if (!(bool)uVar8) {
                  ppuVar23 = pppuVar12[1];
                  if (((ulong)ppuVar23 & 1) != 0) {
                    func_0x000108803df0();
                    ppuVar23 = extraout_x9_07;
                  }
                  ppuVar16 = ppuStack_4b0;
                  if (((ulong)ppuStack_4b0 & 1) != 0) {
                    func_0x000108803de4();
                    ppuVar23 = extraout_x9_08;
                    ppuVar16 = extraout_x11_02;
                  }
                  if (ppuVar23 == ppuVar16) {
                    func_0x000108803dfc();
                  }
                  else {
                    FUN_10891f8ac();
                  }
                }
                FUN_10891f804(&ppuStack_4b8);
                goto LAB_108802a14;
              case 7:
                func_0x000108803c70(&UNK_110a95040);
                uVar8 = extraout_w8_04 == 0xb;
                if (!(bool)uVar8) {
                  func_0x000108803ce4();
                  func_0x000108803d3c(0xb);
                  if (((ulong)pppuVar12 & 1) != 0) {
                    func_0x000108803d30();
                  }
                  func_0x000108803870();
                  pppuStack_2a8 = pppuVar12;
                }
                pppuVar12 = pppuStack_2a8;
                func_0x000108803dd8();
                if (!(bool)uVar8) {
                  ppuVar23 = pppuVar12[1];
                  if (((ulong)ppuVar23 & 1) != 0) {
                    func_0x000108803df0();
                    ppuVar23 = extraout_x9_11;
                  }
                  ppuVar16 = ppuStack_4b0;
                  if (((ulong)ppuStack_4b0 & 1) != 0) {
                    func_0x000108803de4();
                    ppuVar23 = extraout_x9_12;
                    ppuVar16 = extraout_x11_04;
                  }
                  if (ppuVar23 == ppuVar16) {
                    func_0x000108803dfc();
                  }
                  else {
                    FUN_10891fa5c();
                  }
                }
                FUN_10891f9b4(&ppuStack_4b8);
                goto LAB_108802a14;
              case 8:
                func_0x000108803c70(&UNK_110a950e0);
                uVar8 = extraout_w8_05 == 0xc;
                if (!(bool)uVar8) {
                  func_0x000108803ce4();
                  func_0x000108803d3c(0xc);
                  if (((ulong)pppuVar12 & 1) != 0) {
                    func_0x000108803d30();
                  }
                  func_0x0001088038a4();
                  pppuStack_2a8 = pppuVar12;
                }
                pppuVar12 = pppuStack_2a8;
                func_0x000108803dd8();
                if (!(bool)uVar8) {
                  ppuVar23 = pppuVar12[1];
                  if (((ulong)ppuVar23 & 1) != 0) {
                    func_0x000108803df0();
                    ppuVar23 = extraout_x9_13;
                  }
                  ppuVar16 = ppuStack_4b0;
                  if (((ulong)ppuStack_4b0 & 1) != 0) {
                    func_0x000108803de4();
                    ppuVar23 = extraout_x9_14;
                    ppuVar16 = extraout_x11_05;
                  }
                  if (ppuVar23 == ppuVar16) {
                    func_0x000108803dfc();
                  }
                  else {
                    FUN_10891fc0c();
                  }
                }
                FUN_10891fb64(&ppuStack_4b8);
                goto LAB_108802a14;
              case 9:
                uVar8 = (int)uStack_2a0 == 0xd;
                if (!(bool)uVar8) {
                  func_0x000108803ce4();
                  func_0x000108803d3c(0xd);
                  if (((ulong)pppuVar12 & 1) != 0) {
                    func_0x000108803d30();
                  }
                  func_0x0001088038d8();
                  pppuStack_2a8 = pppuVar12;
                }
                pppuVar12 = pppuStack_2a8;
                func_0x000108803f50();
                if ((bool)uVar8) {
                  func_0x000108803f44();
                  FUN_10891fe90();
                  goto LAB_108802a14;
                }
                func_0x000108803f5c();
                if (!(bool)uVar8) goto LAB_108802a14;
                ppuVar23 = &PTR_PTR_113284418;
                if ((undefined **)param_2[0x1e] != (undefined **)0x0) {
                  ppuVar23 = (undefined **)param_2[0x1e];
                }
                if (*(int *)(ppuVar23 + 8) == 0xd) {
                  ppuVar23 = (undefined **)ppuVar23[7];
                }
                else {
                  ppuVar23 = &PTR_PTR_113286d80;
                }
                *(int *)(pppuVar12 + 2) = *(int *)(ppuVar23 + 2) + 1;
                goto LAB_108802a14;
              case 0xb:
                func_0x000108803c94(&UNK_110a95ea0);
                uStack_4a8 = 0;
                ppuStack_4a0 = (undefined **)0x0;
                uVar8 = (int)uStack_2a0 == 0xf;
                if (!(bool)uVar8) {
                  func_0x000108803ce4();
                  func_0x000108803d3c(0xf);
                  if (((ulong)pppuVar12 & 1) != 0) {
                    func_0x000108803d30();
                  }
                  func_0x000108803910();
                  pppuStack_2a8 = pppuVar12;
                }
                pppuVar12 = pppuStack_2a8;
                func_0x000108803dd8();
                if (!(bool)uVar8) {
                  ppuVar23 = pppuVar12[1];
                  if (((ulong)ppuVar23 & 1) != 0) {
                    func_0x000108803df0();
                    ppuVar23 = extraout_x9_15;
                  }
                  ppuVar16 = ppuStack_4b0;
                  if (((ulong)ppuStack_4b0 & 1) != 0) {
                    func_0x000108803de4();
                    ppuVar23 = extraout_x9_16;
                    ppuVar16 = extraout_x11_06;
                  }
                  if (ppuVar23 == ppuVar16) {
                    func_0x000108803dfc();
                    uVar4 = *(undefined4 *)(pppuVar12 + 2);
                    *(undefined4 *)(pppuVar12 + 2) = (undefined4)uStack_4a8;
                    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uVar4);
                    ppuVar23 = pppuVar12[3];
                    pppuVar12[3] = ppuStack_4a0;
                    ppuStack_4a0 = ppuVar23;
                  }
                  else {
                    FUN_108921688();
                  }
                }
                FUN_108921548(&ppuStack_4b8);
                goto LAB_108802a14;
              case 0xc:
                if (((ulong)param_2[0x8b] & 1) == 0) goto LAB_108802a14;
                func_0x0001086aafbc(&ppuStack_2e0);
                FUN_108920410();
                pppuVar12 = &ppuStack_2e0;
                func_0x0001086aafbc();
                pppuVar12[4] = ppuStack_d88;
                goto LAB_108802a14;
              case 0xd:
                func_0x000108803c94(&UNK_110a95310);
                uStack_4a8 = uStack_4a8 & 0xffffffff00000000;
                func_0x0001086ab1b4(&ppuStack_2e0);
                FUN_1086a5b98();
                FUN_108921344(&ppuStack_4b8);
                goto LAB_108802a14;
              case 0xe:
                func_0x000108803f50();
                if (bVar7) {
                  func_0x000108803948(&ppuStack_2e0);
                  FUN_108920888();
                  goto LAB_108802a14;
                }
                func_0x000108803f5c();
                if (!bVar7) goto LAB_108802a14;
                pppuVar12 = &ppuStack_2e0;
                func_0x000108803948(pppuVar12);
                pppuVar12 = pppuVar12 + 2;
                func_0x0001086eae18(pppuVar12);
                func_0x0001086eae08();
                func_0x0001088bf408();
                func_0x000107c303b4(pppuVar12 + 3);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
                goto LAB_108802a14;
              case 0xf:
                uVar8 = (int)uStack_2a0 == 0x13;
                if (!(bool)uVar8) {
                  func_0x000108803ce4();
                  func_0x000108803d3c(0x13);
                  if (((ulong)pppuVar12 & 1) != 0) {
                    func_0x000108803d30();
                  }
                  func_0x0001088039e4();
                  pppuStack_2a8 = pppuVar12;
                }
                pppuVar12 = pppuStack_2a8;
                func_0x000108803f50();
                if ((bool)uVar8) {
                  func_0x000108803f44();
                  FUN_108920c6c();
                  goto LAB_108802a14;
                }
                func_0x000108803f5c();
                if (!(bool)uVar8) goto LAB_108802a14;
                ppuStack_4b0 = (undefined **)0x0;
                ppuStack_4b8 = (undefined **)0x0;
                uStack_4a8 = 0;
                pppuVar2 = pppuVar12 + 3;
                if (pppuVar2 != &ppuStack_4b8) {
                  if (pppuVar12[5] == (undefined **)0x0) {
                    func_0x000107c303a4(pppuVar2,&ppuStack_4b8);
                  }
                  else {
                    FUN_1086ebb18(pppuVar2,&ppuStack_4b8);
                  }
                }
                func_0x000107c29ae0(&ppuStack_4b8);
                goto LAB_108802a14;
              case 0x10:
                if ((int)uStack_2a0 != 0x14) {
                  func_0x000108803ce4();
                  func_0x000108803d3c(0x14);
                  if (((ulong)pppuVar12 & 1) != 0) {
                    func_0x000108803d30();
                  }
                  func_0x000108803a28();
                  pppuStack_2a8 = pppuVar12;
                }
                FUN_108920ef4();
                goto LAB_108802a14;
              case 0x11:
                if ((int)uStack_2a0 != 0x15) {
                  func_0x000108803ce4();
                  func_0x000108803d3c(0x15);
                  if (((ulong)pppuVar12 & 1) != 0) {
                    func_0x000108803d30();
                  }
                  func_0x000108803a64();
                  pppuStack_2a8 = pppuVar12;
                }
                FUN_108921310();
                goto LAB_108802a14;
              case 0x12:
                uVar8 = (int)uStack_2a0 == 0x16;
                if (!(bool)uVar8) {
                  func_0x000108803ce4();
                  func_0x000108803d3c(0x16);
                  if (((ulong)pppuVar12 & 1) != 0) {
                    func_0x000108803d30();
                  }
                  func_0x000108803aa4();
                  pppuStack_2a8 = pppuVar12;
                }
                pppuVar12 = pppuStack_2a8;
                func_0x000108803f50();
                if ((bool)uVar8) {
                  func_0x000108803f44();
                  FUN_10891ec14();
                  goto LAB_108802a14;
                }
                func_0x000108803f5c();
                if (!(bool)uVar8) goto LAB_108802a14;
                func_0x000108803c94(&UNK_110a96080);
                uStack_498 = 0;
                uStack_4a8 = 0;
                ppuStack_4a0 = (undefined **)0x0;
                func_0x000108803dd8();
                if (!(bool)uVar8) {
                  ppuVar23 = pppuVar12[1];
                  if (((ulong)ppuVar23 & 1) != 0) {
                    ppuVar23 = *(undefined ***)((ulong)ppuVar23 & 0xfffffffffffffffe);
                  }
                  if (ppuVar23 == (undefined **)0x0) {
                    FUN_10891ec44();
                  }
                  else {
                    FUN_10891ec14();
                  }
                }
                FUN_10891ea60(&ppuStack_4b8);
                goto LAB_108802a14;
              case 0x15:
                func_0x000108803c70(&UNK_110a94fa0);
                uVar8 = extraout_w8_06 == 0x18;
                if (!(bool)uVar8) {
                  func_0x000108803ce4();
                  func_0x000108803d3c(0x18);
                  if (((ulong)pppuVar12 & 1) != 0) {
                    func_0x000108803d30();
                  }
                  func_0x000108803ae4();
                  pppuStack_2a8 = pppuVar12;
                }
                pppuVar12 = pppuStack_2a8;
                func_0x000108803dd8();
                if (!(bool)uVar8) {
                  ppuVar23 = pppuVar12[1];
                  if (((ulong)ppuVar23 & 1) != 0) {
                    func_0x000108803df0();
                    ppuVar23 = extraout_x9_17;
                  }
                  ppuVar16 = ppuStack_4b0;
                  if (((ulong)ppuStack_4b0 & 1) != 0) {
                    func_0x000108803de4();
                    ppuVar23 = extraout_x9_18;
                    ppuVar16 = extraout_x11_07;
                  }
                  if (ppuVar23 == ppuVar16) {
                    func_0x000108803dfc();
                  }
                  else {
                    FUN_10891f30c();
                  }
                }
                FUN_10891f264(&ppuStack_4b8);
                goto LAB_108802a14;
              case 0x16:
                func_0x000108803c70(&UNK_110a95720);
                uVar8 = extraout_w8_00 == 0x19;
                if (!(bool)uVar8) {
                  func_0x000108803ce4();
                  func_0x000108803d3c(0x19);
                  if (((ulong)pppuVar12 & 1) != 0) {
                    func_0x000108803d30();
                  }
                  func_0x000108803b18();
                  pppuStack_2a8 = pppuVar12;
                }
                pppuVar12 = pppuStack_2a8;
                func_0x000108803dd8();
                if ((bool)uVar8) goto LAB_108802934;
                ppuVar23 = pppuVar12[1];
                if (((ulong)ppuVar23 & 1) != 0) goto code_r0x000108802ea8;
                goto LAB_108802430;
              }
              goto LAB_108803114;
            }
            if (((ulong)param_2[0x80] & 1) != 0) goto LAB_108801f50;
            ppuStack_2e0 = (undefined **)0x0;
            uStack_2d0 = 1;
          }
          uStack_2a0 = (ulong)(ppuStack_c18 != ppuVar23);
          uStack_2d8 = 0;
          ppuStack_2c8 = (undefined **)0x0;
          puStack_2b8 = (undefined *)0x0;
          pppuStack_2a8 = (undefined ***)0x0;
          uStack_298 = 0;
          uStack_2c0 = uStack_d80;
          puStack_2b0 = (undefined *)(ulong)*(uint *)(param_2 + 0x16);
          func_0x000107c2793c(&UNK_10f4bc1f9);
          func_0x000107c3173c(&ppppuStack_670);
          if (-1 < (char)uStack_660._7_1_) {
            uStack_668 = (ulong)uStack_660._7_1_;
            ppppuStack_670 = &ppppuStack_670;
          }
          func_0x000108803e2c(ppppuStack_670,uStack_668,&UNK_10f4bc29a);
          func_0x00010bd3f434();
          func_0x000108803cec();
          func_0x000108803e20();
          func_0x00010bd3f4e0();
LAB_108803114:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x108803118);
          (*pcVar6)();
        }
        ppuStack_2e0 = (undefined **)0x0;
        uStack_2d0 = 1;
      }
      uStack_2d8 = 0;
      ppuStack_2c8 = (undefined **)0x0;
      puVar15 = &UNK_10f4bc03a;
      func_0x000107c2793c(&UNK_10f4bc03a);
      func_0x000107c3173c(&ppuStack_4b8);
      func_0x000107c31338();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_d30,&ppuStack_4b8);
      func_0x00010bd3f128(&puStack_d48,3);
      uVar11 = param_1[1];
      func_0x000108803e38();
      (*extraout_x8_00)();
      pppuStack_2a8 = pppuStack_d38;
      ppuStack_2e0 = (undefined **)CONCAT44(ppuStack_2e0._4_4_,0xb);
      uStack_2d8 = 0;
      ppuStack_2c8 = ppuStack_d28;
      uStack_2d0 = uStack_d30;
      uStack_2c0 = uStack_d20;
      uStack_d30 = 0;
      ppuStack_d28 = (undefined **)0x0;
      uStack_d20 = 0;
      puStack_2b0 = puStack_d40;
      puStack_2b8 = puStack_d48;
      puStack_d48 = (undefined *)0x0;
      puStack_d40 = (undefined *)0x0;
      pppuStack_d38 = (undefined ***)0x0;
      uStack_298 = uStack_298 & 0xffffffffffffff00;
      uStack_2a0 = uVar11;
      func_0x00010bcc46f8(puVar15,&ppuStack_2e0);
      func_0x00010786e114(&ppuStack_2e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_d48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d30);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_4b8);
LAB_108801ee4:
      bVar7 = false;
      goto LAB_108802ddc;
    }
LAB_1088017a4:
    uVar17 = 7;
  }
  else {
    lVar21 = *(long *)(puVar15 + -0x10);
    if (*(long *)(puVar15 + -0x18) == lVar21) {
      if (((ulong)param_2[0x17] & 1) == 0) goto LAB_10880184c;
      goto LAB_1088017a4;
    }
    if (((ulong)param_2[0x17] & 1) == 0) {
      uVar17 = *(undefined4 *)(lVar21 + -0x6c);
      goto LAB_108801858;
    }
    uVar17 = *(undefined4 *)(lVar21 + -0x6c);
  }
  if (*(char *)(param_2 + 0xa9) != '\x01') goto LAB_108802e68;
  ppuStack_b78 = (undefined **)0x0;
  ppuStack_b80 = (undefined **)0x0;
  uStack_b70 = 0;
  ppuStack_2e0 = (undefined **)((ulong)ppuStack_2e0 & 0xffffffffffffff00);
  cStack_110 = '\0';
  ppuVar18 = *(undefined ***)(param_1[3] + 0x18);
  func_0x000107c278b8(&lStack_9d0,&UNK_10f4bc08d);
  func_0x000107c31420(appppuStack_828,ppuVar18,&lStack_9d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_9d0);
  lVar21 = *(long *)(param_2[1] + -0x10);
  if ((*(long *)(param_2[1] + -0x18) == lVar21) || (*(int *)(lVar21 + -0x6c) == 0)) {
    func_0x000108803dcc(param_1[3]);
    func_0x000108803dc0();
    func_0x000108803e94();
    if (cStack_5c8 == '\x01') {
      lVar21 = param_1[3];
      FUN_1086a0460(auStack_c30,apuStack_648);
      func_0x000108803d8c(&ppuStack_4b8,lVar21);
      func_0x000108803e44();
      ppuVar23 = ppuStack_4b0;
      for (ppuVar18 = ppuStack_4b8; ppuVar18 != ppuVar23; ppuVar18 = ppuVar18 + 0x35) {
        FUN_1086e981c(param_2 + 0xe,ppuVar18);
        func_0x000108803e38(param_1[3]);
        (*extraout_x8)();
      }
      func_0x000108803e8c();
    }
    FUN_1088652dc(param_1[3],param_2 + 6);
    func_0x000108803d58(param_1[3]);
LAB_108801a54:
    func_0x000108803f30();
  }
  else {
    iVar9 = (int)*param_2;
    FUN_108803594();
    if (iVar9 != 0) {
      func_0x000108803dcc(param_1[3]);
      func_0x000108803dc0();
      func_0x000108803e94();
      if (cStack_5c8 == '\x01') {
        func_0x000108803f38();
      }
      else {
        func_0x000108803d58(param_1[3]);
        lVar21 = param_1[3];
        FUN_1086a0460(auStack_c30,param_2 + 0x2d);
        func_0x000108803d8c(&ppuStack_4b8,lVar21);
        func_0x000108803f24();
        func_0x000108803e8c();
        func_0x000108803e44();
        uVar17 = 7;
      }
      goto LAB_108801a54;
    }
    func_0x000108803dcc(param_1[3]);
    func_0x000108803dc0();
    func_0x000108803e94();
    ppuVar23 = apuStack_648;
    if (cStack_5c8 == '\0') {
      ppuVar23 = param_2 + 0x2d;
    }
    FUN_1088652dc(param_1[3],param_2 + 6);
    func_0x000108803d58(param_1[3]);
    param_2 = (undefined **)param_1[3];
    FUN_1086a0460(auStack_c30,ppuVar23);
    func_0x000108803d8c(&ppuStack_4b8,param_2);
    func_0x000108803f24();
    func_0x000108803e8c();
    func_0x000108803e44();
    func_0x000108803f30();
    uVar17 = 7;
  }
  if (ppuStack_b80 != ppuStack_b78) {
    FUN_1086a0a58(&ppppuStack_670,param_1[3],ppuVar1);
    ppuVar18 = ppuStack_b78;
    for (param_2 = ppuStack_b80; param_2 != ppuVar18; param_2 = param_2 + 0x35) {
      FUN_1086a125c(&ppuStack_4b8,param_1[3],param_2);
      func_0x000107c28950(param_2,&ppuStack_4b8);
      func_0x000108803e10();
      FUN_1086a1084(param_2,&ppppuStack_670);
    }
    func_0x000108803ed0(&ppuStack_4b8,param_1[3]);
    func_0x000107c290ac(&ppuStack_2e0,&ppuStack_4b8);
    func_0x000107c288c8(&ppuStack_4b8);
    func_0x0001086a9a34(&ppppuStack_670);
  }
  func_0x000107c31428(appppuStack_828);
  if ((cStack_110 == '\x01') && (ppuStack_b80 != ppuStack_b78)) {
    func_0x000108803e9c();
    func_0x000108803d0c();
    func_0x000108803db8();
  }
  func_0x000107c31424(appppuStack_828);
  func_0x000108803e54();
  func_0x000108803e74();
LAB_108802e68:
  do {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return uVar17;
    }
    ___stack_chk_fail();
code_r0x000108802ea8:
    func_0x000108803df0();
    ppuVar23 = extraout_x9_03;
LAB_108802430:
    ppuVar16 = ppuStack_4b0;
    if (((ulong)ppuStack_4b0 & 1) != 0) {
      func_0x000108803de4();
      ppuVar23 = extraout_x9_04;
      ppuVar16 = extraout_x11_00;
    }
    if (ppuVar23 == ppuVar16) {
      func_0x000108803dfc();
    }
    else {
      FUN_10891efd8();
    }
LAB_108802934:
    FUN_10891ef30(&ppuStack_4b8);
LAB_108802a14:
    ppuVar23 = unaff_x27;
    FUN_1086e97e0(unaff_x27);
    FUN_1086ea7e0(&ppuStack_2e0,&ppuStack_b80,ppuVar23);
    FUN_1086e96ec(&ppuStack_2e0,&ppuStack_b80,param_1[3]);
    FUN_10891bc38(&ppuStack_2e0);
code_r0x000108802a4c:
    func_0x000108803e38(param_1[3]);
    (*extraout_x8_03)();
    if ((int)uStack_d70 == 0x1f) {
      iVar9 = (int)auStack_b30;
      FUN_108844938();
      bVar7 = iVar9 != 0x1f;
    }
    else {
LAB_108802a7c:
      bVar7 = false;
    }
    func_0x000108803e18(param_1[3]);
    func_0x000107c29f60(&ppuStack_4b8,param_1[3],ppuVar1,0);
    if ((bStack_348 & 1) == 0) {
      if (iStack_d74 == 1) {
        ppuStack_360 = ppuStack_d88;
        ppuStack_3c0 = ppuStack_d88;
        if (ppuStack_d88 != (undefined **)0xfffffffffffffffe) {
          func_0x000107c29940(&ppuStack_2e0,param_1 + 0x17);
          if (ppuStack_2e0 != (undefined **)0x0) {
            func_0x000108803e38();
            (*extraout_x8_04)();
          }
          func_0x000107c29574(&ppuStack_2e0);
        }
      }
      FUN_10885ff98(param_1[3],&ppuStack_4b8);
      if (iStack_d78 != 0) {
        (**(code **)(*(long *)param_1[0xf] + 0x18))((long *)param_1[0xf],ppuVar1,*ppuStack_d90);
        lVar21 = 0;
        ppuVar23 = &PTR_PTR_113286e08;
        if (ppuStack_b00 != (undefined **)0x0) {
          ppuVar23 = ppuStack_b00;
        }
        puVar15 = ppuVar23[0x18];
        ppuVar16 = &PTR_PTR_113284418;
        if ((undefined **)param_2[0x1e] != (undefined **)0x0) {
          ppuVar16 = (undefined **)param_2[0x1e];
        }
        uStack_d70 = (ulong)*(int *)(ppuVar23 + 0x19);
        unaff_x27 = &PTR_PTR_11326cb58;
        if ((undefined **)ppuVar16[3] != (undefined **)0x0) {
          unaff_x27 = (undefined **)ppuVar16[3];
        }
        uVar8 = ((ulong)puVar15 & 1) == 0;
        ppuVar23 = ppuVar23 + 0x18;
        if (!(bool)uVar8) {
          ppuVar23 = (undefined **)(puVar15 + 7);
        }
        for (lVar22 = uStack_d70 << 3; lVar22 != 0; lVar22 = lVar22 + -8) {
          func_0x000108803ec0(*ppuVar23);
          uVar11 = extraout_x9_02 + 0xb58;
          if (!(bool)uVar8) {
            uVar11 = extraout_x8_05;
          }
          func_0x000107c287e8(uVar11,unaff_x27);
          lVar21 = lVar21 + (uVar11 & 0xffffffff);
          ppuVar23 = ppuVar23 + 1;
        }
        FUN_1087a484c(&ppuStack_2e0,&ppuStack_b80,ppuVar1,uStack_d70,lVar21,uStack_d64);
        if (cStack_78 == '\x01') {
          (**(code **)(*(long *)param_1[0x11] + 0x30))((long *)param_1[0x11],&ppuStack_2e0);
        }
        func_0x0001088036fc(&ppuStack_2e0);
      }
      iVar9 = *(int *)(param_2 + 0x16);
      lStack_c40 = 0;
      uStack_c38 = 0;
      lStack_c48 = 0;
      if (cStack_b58 == '\x01') {
        if (1 < iVar9 - 6U && iVar9 != 4) {
          if (iVar9 == 8) {
            uVar14 = 2;
          }
          else {
            if (iVar9 != 0x16) goto LAB_108802cd0;
            uVar14 = 5;
          }
          FUN_10886a45c(param_1[3],&ppuStack_4b8,uStack_b60,uVar14);
        }
        FUN_108869e60(&ppuStack_2e0,param_1[3],&ppuStack_4b8,uStack_b60);
        func_0x000107c288bc(&ppppuStack_670,&ppuStack_2e0);
        _bzero(appppuStack_828,0x1b8);
        while ((((bStack_4c0 & 1) != 0 || ((bStack_678 & 1) != 0)) &&
               (ppppuStack_670 != appppuStack_828[0]))) {
          pppppuVar13 = &ppppuStack_670;
          func_0x000107c288c0(pppppuVar13);
          FUN_1086a125c(&lStack_9d0,param_1[3],pppppuVar13);
          FUN_10867b444(&lStack_c48,&lStack_9d0);
          func_0x000107c288e0(&lStack_9d0);
          func_0x000107c28980(&ppppuStack_670);
        }
        func_0x000108803eb8(appppuStack_828);
        func_0x000108803eb8(&ppppuStack_670);
        func_0x000108803e08();
      }
LAB_108802cd0:
      if (((((ulong)param_2[0x78] & 1) == 0) && (((ulong)param_2[0x80] & 1) == 0)) &&
         ((((ulong)param_2[0x8b] & 1) == 0 &&
          ((*(int *)(param_2 + 0x16) != 0x1a &&
           (*(char *)(param_2 + 0xa0) != '\x01' || *(int *)(param_2 + 0x9f) != 0xb)))))) {
        if (lStack_c48 != lStack_c40) {
          uStack_2d8 = 0;
          ppuStack_2e0 = (undefined **)0x0;
          uStack_2d0 = 0;
          func_0x000108803d0c(**(undefined8 **)param_1[7]);
          func_0x000104be1274(&ppuStack_2e0);
        }
      }
      else {
        FUN_1086a125c(&ppuStack_2e0,param_1[3],&ppuStack_b80);
        func_0x0001086aa5b8(&lStack_c48,&ppuStack_2e0);
        uStack_668 = 0;
        ppppuStack_670 = (undefined8 *****)0x0;
        uStack_660 = 0;
        func_0x000108803d0c(**(undefined8 **)param_1[7]);
        func_0x000104be1274(&ppppuStack_670);
        func_0x000107c288e0(&ppuStack_2e0);
      }
      if (((uint)uStack_d80 & 0xfffffffe) == 6) {
        func_0x000108803e38(param_1[0x13]);
        (*extraout_x8_06)();
      }
      func_0x00010867b9fc(&lStack_c48);
    }
    func_0x000107c287e4(&ppuStack_4b8);
LAB_108802dcc:
    func_0x000107c28f90(auStack_c30);
    func_0x000107c288dc(&ppuStack_b80);
LAB_108802ddc:
    func_0x000108803e18(param_1[3]);
    func_0x000108803d58(param_1[3]);
LAB_108802dec:
    func_0x000107c31428(auStack_c88);
    func_0x000107c31424(auStack_c88);
    if (bVar7) {
      param_1 = (long *)param_1[7];
      func_0x000107c27994(&ppuStack_d60,ppuVar1);
      uStack_2d0 = uStack_d50;
      uStack_2d8 = uStack_d58;
      ppuStack_2e0 = ppuStack_d60;
      uStack_d58 = 0;
      uStack_d50 = 0;
      ppuStack_d60 = (undefined **)0x0;
      ppuStack_2c8 = ppuVar18;
      FUN_1086ce96c(&ppuStack_4b8,&ppuStack_2e0,1);
      (**(code **)(*param_1 + 0x10))(param_1,ppuVar1,&ppuStack_4b8);
      func_0x000108803db8();
      func_0x000107c27914(&ppuStack_2e0);
      func_0x000107c27914(&ppuStack_d60);
    }
  } while( true );
}



/* Entry: 108803594; end: 1088035c3;  */

bool FUN_108803594(long param_1,long param_2)

{
  if ((param_1 != param_2) && (*(long *)(param_2 + -0x18) != *(long *)(param_2 + -0x10))) {
    return (*(uint *)(*(long *)(param_2 + -0x10) + -0x6c) & 0xfffffffe) == 4;
  }
  return false;
}



/* Entry: 1088035c4; end: 108803653;  */

void FUN_1088035c4(undefined1 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 uVar2;
  long lStack_e8;
  undefined1 auStack_e0 [168];
  char cStack_38;
  
  func_0x000107c28ef4(&lStack_e8,param_2);
  func_0x000108803e7c();
  if (cStack_38 == '\x01') {
    func_0x000108803f10();
    if (lStack_e8 != 0) {
      plVar1 = &lStack_e8;
      FUN_1086a1330(plVar1);
      FUN_1086a94f4(param_1,plVar1);
      uVar2 = 1;
      goto LAB_108803630;
    }
  }
  else {
    func_0x000108803f10();
  }
  uVar2 = 0;
  *param_1 = 0;
LAB_108803630:
  param_1[0xa8] = uVar2;
  func_0x000107c28f90(auStack_e0);
  return;
}



/* Entry: 108803654; end: 1088036e3;  */

void FUN_108803654(undefined1 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 uVar2;
  long lStack_e8;
  undefined1 auStack_e0 [168];
  char cStack_38;
  
  func_0x000107c29a88(&lStack_e8,param_2);
  func_0x000108803e7c();
  if (cStack_38 == '\x01') {
    func_0x000108803f08();
    if (lStack_e8 != 0) {
      plVar1 = &lStack_e8;
      FUN_1087f8d10(plVar1);
      FUN_1087fdb74(param_1,plVar1);
      uVar2 = 1;
      goto LAB_1088036c0;
    }
  }
  else {
    func_0x000108803f08();
  }
  uVar2 = 0;
  *param_1 = 0;
LAB_1088036c0:
  param_1[0xa8] = uVar2;
  func_0x000107c29a98(auStack_e0);
  return;
}



/* Entry: 1088036e4; end: 1088036e7;  */

undefined8 * FUN_1088036e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73500;
  func_0x000107c2917c(param_1 + 0x1b);
  func_0x000107c297ac(param_1 + 0x19);
  func_0x000107c299b8(param_1 + 0x17);
  func_0x000107c289fc(param_1 + 0x15);
  func_0x000107c29aa0(param_1 + 0x13);
  func_0x000107c286e0(param_1 + 0x11);
  func_0x000107c28ab4(param_1 + 0xf);
  func_0x000107c29a48(param_1 + 0xd);
  func_0x000107c29958(param_1 + 0xb);
  func_0x000107c28ec0(param_1 + 9);
  func_0x000107c28ab8(param_1 + 7);
  func_0x000107c2814c(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  func_0x000107c28800(param_1 + 1);
  return param_1;
}



/* Entry: 1088036e8; end: 10880371b;  */

void FUN_1088036e8(void)

{
  func_0x000108803b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880371c; end: 108803c1b;  */

void FUN_10880371c(long param_1)

{
  if (param_1 == 0) {
    func_0x000108803edc();
  }
  else {
    func_0x000108803dac();
  }
  func_0x000108803d24(&UNK_110a95400);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 108803c1c; end: 108803c6f;  */

undefined8 FUN_108803c1c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_3;
  FUN_108841db0(auStack_38,param_2);
  func_0x000107c28260(uVar1,&DAT_10f2fb62f,auStack_38);
  func_0x000108803efc();
  return uVar1;
}



/* Entry: 108803c70; end: 108803fbb;  */

void FUN_108803c70(void)

{
  return;
}



/* Entry: 108803fbc; end: 108804357;  */

void FUN_108803fbc(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined **ppuVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 auStack_588 [24];
  int aiStack_570 [2];
  ulong uStack_568;
  uint auStack_3b0 [2];
  ulong uStack_3a8;
  undefined1 auStack_200 [80];
  undefined1 auStack_1b0 [344];
  byte bStack_58;
  
  func_0x000107c295fc(auStack_588);
  func_0x000107c295e8(param_1,auStack_588);
  ppuVar2 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_4 + 0x78) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_4 + 0x78);
  }
  if (*(uint *)((long)ppuVar2 + 0xac) < 2) {
    aiStack_570[0] = 4;
    FUN_108804400();
    goto LAB_108804290;
  }
  auStack_200[0] = 0;
  bStack_58 = 0;
  if (*(char *)(param_4 + 0x120) == '\x01') {
    if (*(char *)(param_4 + 300) != '\x01' || *(int *)(param_4 + 0x128) != 0) {
      if (*(int *)(param_4 + 0x128) - 7U < 0xfffffffb) {
        FUN_108862e68(aiStack_570,*param_2,param_4,*(undefined8 *)(param_4 + 0x118));
        func_0x000107c28998(auStack_3b0,aiStack_570);
        func_0x000107c2894c(auStack_200,auStack_3b0);
        func_0x000107c288dc(auStack_3b0);
        func_0x000107c28948(aiStack_570);
        if (bStack_58 == 1) {
          iVar6 = (int)auStack_200;
          func_0x000107c28e64();
          if (iVar6 != 0) {
            aiStack_570[0] = 4;
            FUN_108804400();
            goto LAB_108804288;
          }
        }
      }
      goto LAB_1088040c8;
    }
    aiStack_570[0] = 4;
    FUN_108804400();
  }
  else {
LAB_1088040c8:
    (**(code **)(*(long *)param_2[2] + 0x20))(aiStack_570,(long *)param_2[2],param_4 + 0x50);
    if (aiStack_570[0] == 1) {
      lVar3 = param_3;
      FUN_108804358();
      uVar7 = uStack_568;
      uStack_568 = 0;
      uVar9 = *(ulong *)(lVar3 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      if ((uVar9 == 0) && (*(long *)(lVar3 + 0x18) != 0)) {
        func_0x000108804414();
      }
      if (uVar7 == 0) {
        uVar5 = *(uint *)(lVar3 + 0x10) & 0xfffffffe;
      }
      else {
        uVar4 = *(ulong *)(uVar7 + 8);
        if ((uVar4 & 1) != 0) {
          uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
        }
        if (uVar9 != uVar4) {
          func_0x00010b4cf42c(uVar9,uVar7);
          uVar7 = uVar9;
        }
        uVar5 = *(uint *)(lVar3 + 0x10) | 1;
      }
      *(uint *)(lVar3 + 0x10) = uVar5;
      *(ulong *)(lVar3 + 0x18) = uVar7;
    }
    bVar1 = (*(byte *)(param_2 + 6) ^ 1) & bStack_58;
    if ((bVar1 & 1) == 0) {
      uVar8 = 0;
      uVar5 = 0;
      iVar6 = aiStack_570[0];
    }
    else {
      (**(code **)(*(long *)param_2[2] + 0x20))(auStack_3b0,(long *)param_2[2],auStack_1b0);
      uVar8 = auStack_3b0[0];
      if (auStack_3b0[0] == 1) {
        FUN_108804358();
        uVar7 = uStack_3a8;
        uStack_3a8 = 0;
        uVar9 = *(ulong *)(param_3 + 8);
        if ((uVar9 & 1) != 0) {
          uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
        }
        if ((uVar9 == 0) && (*(long *)(param_3 + 0x20) != 0)) {
          func_0x000108804414();
        }
        if (uVar7 == 0) {
          uVar5 = *(uint *)(param_3 + 0x10) & 0xfffffffd;
        }
        else {
          uVar4 = *(ulong *)(uVar7 + 8);
          if ((uVar4 & 1) != 0) {
            uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
          }
          if (uVar9 != uVar4) {
            func_0x00010b4cf42c(uVar9,uVar7);
            uVar7 = uVar9;
          }
          uVar5 = *(uint *)(param_3 + 0x10) | 2;
        }
        *(uint *)(param_3 + 0x10) = uVar5;
        *(ulong *)(param_3 + 0x20) = uVar7;
        uVar8 = auStack_3b0[0];
      }
      iVar6 = aiStack_570[0];
      uVar5 = uVar8 & 0xffffff00;
      func_0x00010880440c(auStack_3b0);
      uVar8 = uVar8 & 0xff;
    }
    func_0x00010880440c(aiStack_570);
    if ((iVar6 == 2) || ((bVar1 & (uVar5 | uVar8) == 2) != 0)) {
      aiStack_570[0] = 0;
      FUN_108804400();
    }
    else {
      func_0x000107c295ec(auStack_588,&UNK_10dd62ad6);
    }
  }
LAB_108804288:
  func_0x000107c288dc(auStack_200);
LAB_108804290:
  func_0x000107c27fb8(auStack_588);
  return;
}



/* Entry: 108804358; end: 1088043ff;  */

void FUN_108804358(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x40) != 6) {
    FUN_10891c548(param_1);
    *(undefined4 *)(param_1 + 0x40) = 6;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x0001088043b0();
    *(ulong *)(param_1 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 108804400; end: 10880447f;  */

void FUN_108804400(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x24;
  
  puVar4 = (undefined8 *)(unaff_x24 + 0x10);
  puVar5 = &stack0x00000030;
  func_0x000107c33290();
  FUN_10873205c();
  func_0x000107c3328c();
  if (puVar5 != (undefined1 *)0x0) {
    plVar7 = (long *)(puVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)*puVar4;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar6 >> 0x21 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7,1,puVar4);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  *puVar4 = puVar5;
  return;
}



/* Entry: 108804480; end: 108804a87;  */

void FUN_108804480(undefined8 param_1,long param_2,undefined ***param_3)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined1 auStack_648 [24];
  undefined1 auStack_630 [64];
  long lStack_5f0;
  long lStack_5e8;
  byte bStack_5d8;
  undefined **appuStack_5d0 [53];
  byte bStack_428;
  undefined **appuStack_420 [3];
  undefined **ppuStack_408;
  undefined1 auStack_3e0 [64];
  int iStack_3a0;
  undefined1 auStack_398 [56];
  undefined1 uStack_360;
  undefined1 auStack_358 [56];
  undefined1 uStack_320;
  long *plStack_318;
  undefined4 uStack_310;
  undefined1 auStack_308 [56];
  undefined1 uStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined4 uStack_2b8;
  undefined1 uStack_288;
  undefined1 uStack_280;
  undefined1 uStack_27c;
  undefined1 uStack_278;
  undefined1 uStack_260;
  undefined1 auStack_258 [56];
  undefined1 uStack_220;
  undefined **appuStack_218 [8];
  undefined1 uStack_1d8;
  undefined **ppuStack_1a0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = param_3;
  func_0x0001087fbde0(auStack_648);
  FUN_1087fbd64(param_1,auStack_648);
  if (*(char *)(param_3 + 0x11) == '\x01') {
    func_0x000108804c80(6);
    func_0x000108804cb8();
    goto LAB_108804954;
  }
  ppuVar17 = param_3[7];
  FUN_1086a7798(auStack_3e0,param_3 + 8);
  appuStack_218[0]._0_1_ = 0;
  uStack_1d8 = 0;
  pppuVar7 = appuStack_218;
  FUN_108804af4(param_3 + 0x1e);
  func_0x0001086a78d0(appuStack_218);
  if (iStack_3a0 == 0x17) {
    FUN_1086a9cbc(appuStack_420,param_3 + 0x15);
    FUN_108862d6c(appuStack_218,*(undefined8 *)(param_2 + 0x10),param_3 + 4,ppuVar17);
    func_0x000107c28998(appuStack_5d0,appuStack_218);
    func_0x000107c28948(appuStack_218);
    if ((bStack_428 & 1) == 0) {
      auStack_258[0] = 0;
      uStack_220 = 0;
      func_0x000108804c74(appuStack_218);
      pppuVar7 = appuStack_218;
      func_0x0001087fbdac(auStack_648);
      func_0x000108804cb8();
      FUN_1087a33a8(auStack_258);
    }
    else {
      pppuVar7 = appuStack_5d0;
      func_0x000107c28970(appuStack_218);
      ppuVar17 = &PTR_PTR_113280c30;
      if (ppuStack_1a0 != (undefined **)0x0) {
        ppuVar17 = ppuStack_1a0;
      }
      if ((((ulong)ppuVar17[2] & 1) == 0) || (*(int *)(ppuVar17[0xd] + 0x1c) == 1)) {
LAB_108804908:
        ppuStack_2c8 = (undefined **)0x6;
        ppuStack_2c0 = (undefined **)((ulong)ppuStack_2c0 & 0xffffffffffffff00);
        uStack_288 = 0;
        uStack_280 = 0;
        uStack_27c = 0;
        uStack_278 = 0;
        uStack_260 = 0;
        func_0x000108804c68();
        func_0x000108804cb0();
      }
      else {
        ppuVar17 = &PTR_PTR_113284418;
        if (ppuStack_408 != (undefined **)0x0) {
          ppuVar17 = ppuStack_408;
        }
        if (*(int *)(ppuVar17 + 8) != 0x17) {
LAB_1088048fc:
          pppuVar7 = appuStack_420;
          func_0x000108804bdc(param_3 + 0x15);
          goto LAB_108804908;
        }
        pppuVar6 = appuStack_420;
        FUN_108804a88();
        func_0x0001086d0ea8();
        ppuVar17 = &PTR_PTR_113280c30;
        if (ppuStack_1a0 != (undefined **)0x0) {
          ppuVar17 = ppuStack_1a0;
        }
        ppuVar14 = &PTR_PTR_113280bc8;
        if ((undefined **)ppuVar17[0xd] != (undefined **)0x0) {
          ppuVar14 = (undefined **)ppuVar17[0xd];
        }
        iVar2 = *(int *)((long)ppuVar14 + 0x1c);
        if (iVar2 == 1) goto LAB_1088048fc;
        if (iVar2 == 5) {
          puVar18 = ppuVar14[2];
          lVar12 = (long)*(char *)((*(ulong *)(puVar18 + 0x28) & 0xfffffffffffffffc) + 0x17);
          if (lVar12 < 0) {
            lVar12 = *(long *)((*(ulong *)(puVar18 + 0x28) & 0xfffffffffffffffc) + 8);
          }
          if (lVar12 == 0) {
            auStack_308[0] = 0;
            uStack_2d0 = 0;
            func_0x000108804c74(&ppuStack_2c8);
            func_0x000108804c68();
            func_0x000108804cb0();
            puVar9 = auStack_308;
            goto LAB_1088047e8;
          }
          FUN_108804a98();
          func_0x0001086649e8();
          FUN_10890e444();
          uVar10 = SUB84(puVar18,0);
          plVar8 = *(long **)(param_2 + 0x20);
          (**(code **)(*plVar8 + 0x18))();
          ppuVar17 = pppuVar6[1];
          if (((ulong)ppuVar17 & 1) != 0) {
            ppuVar17 = *(undefined ***)((ulong)ppuVar17 & 0xfffffffffffffffe);
          }
          plStack_318 = plVar8;
          uStack_310 = uVar10;
          func_0x00010539283c(pppuVar6 + 2,&plStack_318,0xc,ppuVar17);
          puVar13 = (undefined8 *)((ulong)pppuVar6[5] & 0xfffffffffffffffc);
          bVar3 = *(byte *)((long)puVar13 + 0x17);
          pppuVar7 = (undefined ***)puVar13[1];
          if (-1 < (char)bVar3) {
            pppuVar7 = (undefined ***)(ulong)bVar3;
          }
          puVar15 = (undefined8 *)((ulong)pppuVar6[2] & 0xfffffffffffffffc);
          bVar4 = *(byte *)((long)puVar15 + 0x17);
          uVar11 = puVar15[1];
          if (-1 < (char)bVar4) {
            uVar11 = (ulong)bVar4;
          }
          ppuVar17 = &PTR_PTR_113284418;
          if (ppuStack_408 != (undefined **)0x0) {
            ppuVar17 = ppuStack_408;
          }
          if (*(int *)(ppuVar17 + 8) == 0x17) {
            ppuVar17 = (undefined **)ppuVar17[7];
          }
          else {
            ppuVar17 = &PTR_PTR_113286ca0;
          }
          puVar16 = (undefined8 *)((ulong)ppuVar17[3] & 0xfffffffffffffffc);
          puVar1 = (undefined8 *)*puVar13;
          if (-1 < (char)bVar3) {
            puVar1 = puVar13;
          }
          puVar13 = (undefined8 *)*puVar15;
          if (-1 < (char)bVar4) {
            puVar13 = puVar15;
          }
          puVar15 = (undefined8 *)*puVar16;
          uVar5 = puVar16[1];
          if (-1 < (char)*(byte *)((long)puVar16 + 0x17)) {
            puVar15 = puVar16;
            uVar5 = (ulong)*(byte *)((long)puVar16 + 0x17);
          }
          FUN_108667ce0(&lStack_5f0,puVar1,pppuVar7,puVar13,uVar11,puVar15,uVar5);
          if ((bStack_5d8 & 1) == 0) {
            auStack_358[0] = 0;
            uStack_320 = 0;
            func_0x000108804c74(&ppuStack_2c8);
            func_0x000108804c68();
            func_0x000108804cb0();
            FUN_1087a33a8(auStack_358);
          }
          else {
            FUN_1086a9cbc(auStack_630,appuStack_420);
            puVar9 = auStack_630;
            FUN_108804a88();
            func_0x0001086d0ea8();
            uVar11 = *(ulong *)(puVar9 + 8);
            if ((uVar11 & 1) != 0) {
              uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
            }
            func_0x00010539283c(puVar9 + 0x18,lStack_5f0,lStack_5e8 - lStack_5f0,uVar11);
            puVar9 = auStack_630;
            FUN_108804a88(puVar9);
            func_0x0001086d0ea8();
            FUN_108804a98();
            func_0x0001086649e8();
            func_0x000107c3025c(puVar9 + 0x28);
            FUN_1087fa634(&ppuStack_2c8,auStack_630);
            pppuVar7 = &ppuStack_2c8;
            FUN_108804af4(param_3 + 0x1e);
            func_0x0001086a78d0(&ppuStack_2c8);
            FUN_108929390(auStack_630);
          }
          func_0x000107c279c4(&lStack_5f0);
          if ((bStack_5d8 & 1) != 0) goto LAB_1088048fc;
        }
        else {
          if (iVar2 == 6) {
            uStack_2b8 = 0;
            ppuStack_2c0 = (undefined **)0x0;
            ppuStack_2c8 = &PTR_DAT_110d9ac98;
            FUN_108804a98();
            if (*(int *)((long)pppuVar6 + 0x1c) == 1) {
              pppuVar7 = (undefined ***)pppuVar6[2];
            }
            else {
              func_0x000107c2a510(pppuVar6);
              *(undefined4 *)((long)pppuVar6 + 0x1c) = 1;
              pppuVar7 = (undefined ***)pppuVar6[1];
              if (((ulong)pppuVar7 & 1) != 0) {
                pppuVar7 = *(undefined ****)((ulong)pppuVar7 & 0xfffffffffffffffe);
              }
              func_0x000107c287f8();
              pppuVar6[2] = (undefined **)pppuVar7;
            }
            if (pppuVar7 != &ppuStack_2c8) {
              ppuVar17 = pppuVar7[1];
              if (((ulong)ppuVar17 & 1) != 0) {
                ppuVar17 = *(undefined ***)((ulong)ppuVar17 & 0xfffffffffffffffe);
              }
              ppuVar14 = ppuStack_2c0;
              if (((ulong)ppuStack_2c0 & 1) != 0) {
                ppuVar14 = *(undefined ***)((ulong)ppuStack_2c0 & 0xfffffffffffffffe);
              }
              if (ppuVar17 == ppuVar14) {
                func_0x00010bd1b6fc();
              }
              else {
                func_0x00010bd1b6a4();
              }
            }
            func_0x000107c316b0(&ppuStack_2c8);
            goto LAB_1088048fc;
          }
          auStack_398[0] = 0;
          uStack_360 = 0;
          func_0x000108804c74(&ppuStack_2c8);
          func_0x000108804c68();
          func_0x000108804cb0();
          puVar9 = auStack_398;
LAB_1088047e8:
          FUN_1087a33a8(puVar9);
        }
      }
      func_0x000107c288e0(appuStack_218);
    }
    func_0x000107c288dc(appuStack_5d0);
    FUN_108929390(appuStack_420);
  }
  else {
    func_0x000108804c80(6);
    func_0x000108804cb8();
  }
  FUN_10891cac8(auStack_3e0);
LAB_108804954:
  while( true ) {
    puVar9 = auStack_648;
    func_0x000107c27fb8(puVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) break;
    ___stack_chk_fail();
    while ((int)pppuVar7 == 0) {
      __Unwind_Resume(puVar9);
      func_0x000104bd46a0();
    }
    FUN_108929390(auStack_630);
    func_0x000107c279c4(&lStack_5f0);
    func_0x000107c288e0(appuStack_218);
    func_0x000107c288dc(appuStack_5d0);
    FUN_108929390(appuStack_420);
    FUN_10891cac8(auStack_3e0);
    ___cxa_begin_catch(puVar9);
    func_0x0001053360b0(auStack_648);
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 108804a88; end: 108804a97;  */

void FUN_108804a88(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000108804b88();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 108804a98; end: 108804adb;  */

void FUN_108804a98(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000107c287f0();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 108804adc; end: 108804adf;  */

undefined8 * FUN_108804adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73550;
  func_0x000107c289ac(param_1 + 4);
  func_0x000107c28808(param_1 + 2);
  return param_1;
}



/* Entry: 108804ae0; end: 108804af3;  */

void FUN_108804ae0(void)

{
  FUN_108804c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108804af4; end: 108804b4f;  */

long FUN_108804af4(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 == *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      FUN_1086a8024(param_1);
    }
  }
  else if (cVar1 == '\0') {
    FUN_1086a7fcc(param_1);
  }
  else {
    FUN_108929390(param_1);
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return param_1;
}



/* Entry: 108804b50; end: 108804c0f;  */

void FUN_108804b50(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000108804b88();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 108804c10; end: 108804c2b;  */

void FUN_108804c10(long param_1)

{
  FUN_1086a9cbc();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 108804c2c; end: 108804c67;  */

undefined8 * FUN_108804c2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73550;
  func_0x000107c289ac(param_1 + 4);
  func_0x000107c28808(param_1 + 2);
  return param_1;
}



/* Entry: 108804c68; end: 108804d1b;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108804c68(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x23;
  
  puVar5 = (undefined8 *)(unaff_x23 + 0x18);
  FUN_1087fbef8(*puVar5,puVar5,&stack0x00000398);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 108804d1c; end: 10880541f;  */

void FUN_108804d1c(undefined8 param_1,long param_2,undefined **param_3)

{
  byte *pbVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined **ppuVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined **ppuVar14;
  long extraout_x8;
  undefined *puVar15;
  long lVar16;
  ulong extraout_x8_00;
  byte *pbVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined8 uVar22;
  undefined *apuStack_230 [8];
  undefined1 uStack_1f0;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined8 *)0x378;
  ppuVar21 = param_3;
  __Znwm();
  *puVar10 = FUN_10880567c;
  puVar10[1] = FUN_108805a38;
  puVar10[0x6a] = param_3;
  puVar10[0x69] = param_2;
  func_0x0001087fbde0(puVar10 + 2);
  ppuVar11 = (undefined **)(puVar10 + 2);
  FUN_1087fbd64(param_1,ppuVar11);
  uVar8 = *(char *)(param_3 + 0x11) == '\x01';
  if ((bool)uVar8) {
    FUN_108805a88(5);
    func_0x000108805ae0();
    goto LAB_1088052dc;
  }
  puVar10[0x66] = param_3[7];
  FUN_1086a7798(puVar10 + 0x3f,param_3 + 8);
  apuStack_230[0]._0_1_ = 0;
  uStack_1f0 = 0;
  ppuVar21 = apuStack_230;
  FUN_1088054d4(param_3 + 0x27);
  ppuVar11 = apuStack_230;
  func_0x0001086a78b0(ppuVar11);
  uVar8 = (*(uint *)(puVar10 + 0x47) & 0xfffffffe) == 6;
  if (!(bool)uVar8) {
    FUN_108805a88(5);
    func_0x000108805ae0();
    goto LAB_1088052d8;
  }
  ppuVar18 = (undefined **)(param_2 + 0x28);
  ppuVar21 = param_3 + 4;
  FUN_10886ba9c(apuStack_230,*ppuVar18,ppuVar21,puVar10 + 0x66);
  FUN_10867b070(puVar10 + 0x60,apuStack_230);
  ppuVar11 = apuStack_230;
  func_0x000107c28948(ppuVar11);
  if (puVar10[0x60] == puVar10[0x61]) {
    uVar22 = 0x700000005;
    uVar8 = true;
LAB_108804e68:
    FUN_108805a88(uVar22);
    func_0x000108805ae0();
  }
  else {
    uVar8 = puVar10[0x61] - puVar10[0x60] == 0x1a8;
    if ((bool)uVar8) {
      uVar22 = 5;
      goto LAB_108804e68;
    }
    ppuVar11 = (undefined **)*ppuVar18;
    ppuVar21 = param_3 + 4;
    func_0x000107c29f64(puVar10 + 4,ppuVar11,ppuVar21,2);
    if ((*(byte *)(puVar10 + 0x3e) & 1) == 0) {
      FUN_108805a88(0x700000005);
      func_0x000108805ae0();
    }
    else {
      ppuVar21 = (undefined **)(param_2 + 0x10);
      func_0x000107c27994(puVar10 + 99);
      puVar10[0x53] = 0;
      puVar10[0x52] = 0;
      puVar10[0x51] = &PTR_FUN_110a8c518;
      *(undefined4 *)(puVar10 + 0x58) = 0;
      puVar10[0x55] = 0;
      puVar10[0x54] = 0;
      *(undefined1 *)(puVar10 + 0x56) = 0;
      iVar9 = (int)puVar10 + 0x20;
      func_0x000107c28da8();
      if (iVar9 != 0) {
        *(undefined1 *)(puVar10 + 0x56) = 1;
      }
      if (*(int *)(puVar10 + 0x47) == 7) {
        FUN_1088f02ec(puVar10 + 0x51);
        *(undefined4 *)(puVar10 + 0x58) = 5;
        uVar12 = puVar10[0x52];
        if ((uVar12 & 1) != 0) {
          func_0x000108805b2c();
        }
        func_0x0001088055f8();
        puVar10[0x57] = uVar12;
        func_0x000108805bb4();
        *(uint *)(uVar12 + 0x10) = *(uint *)(uVar12 + 0x10) | 1;
        ppuVar11 = *(undefined ***)(uVar12 + 0x30);
        if (ppuVar11 == (undefined **)0x0) {
          ppuVar11 = *(undefined ***)(uVar12 + 8);
          if (((ulong)ppuVar11 & 1) != 0) {
            func_0x000108805b2c();
          }
          func_0x000107c287e0();
          *(undefined ***)(uVar12 + 0x30) = ppuVar11;
        }
        func_0x000108805bac();
        func_0x000108805b64();
        lVar16 = puVar10[0x61];
        for (lVar19 = puVar10[0x60]; lVar19 != lVar16; lVar19 = lVar19 + 0x1a8) {
          if (*(char *)(lVar19 + 0x28) == '\x01') {
            ppuVar18 = &PTR_PTR_113286e08;
            if (*(undefined ***)(lVar19 + 0x80) != (undefined **)0x0) {
              ppuVar18 = *(undefined ***)(lVar19 + 0x80);
            }
            func_0x000108805af0(ppuVar18);
            if (((ulong)ppuVar11 & 1) != 0) {
              ppuVar11 = (undefined **)(uVar12 + 0x18);
              FUN_1087fa4c4();
              ppuVar11[2] = *(undefined **)(lVar19 + 0x20);
              ppuVar11[3] = (undefined *)puVar10[0x2f];
            }
          }
        }
        uVar8 = *(int *)(uVar12 + 0x20) == 1;
        if (1 < *(int *)(uVar12 + 0x20)) goto LAB_10880526c;
LAB_1088052b8:
        FUN_108805a88(5);
        func_0x000108805ae0();
      }
      else {
        uVar8 = *(int *)(puVar10 + 0x47) == 6;
        if (!(bool)uVar8) {
LAB_10880526c:
          func_0x000107c29ee4(apuStack_230,puVar10[0x69] + 0x10);
          FUN_1087fa3d8(puVar10 + 0x51);
          lVar19 = puVar10[0x6a];
          func_0x000108805bac();
          func_0x000108805b64();
          puVar10[0x55] = *(undefined8 *)(lVar19 + 0xd0);
          FUN_1086a7d80(apuStack_230,puVar10 + 0x51);
          ppuVar21 = apuStack_230;
          FUN_1088054d4(lVar19 + 0x138);
          ppuVar11 = apuStack_230;
          func_0x0001086a78b0(ppuVar11);
          goto LAB_1088052b8;
        }
        FUN_1088f02ec(puVar10 + 0x51);
        *(undefined4 *)(puVar10 + 0x58) = 4;
        uVar12 = puVar10[0x52];
        if ((uVar12 & 1) != 0) {
          func_0x000108805b2c();
        }
        FUN_108805544();
        puVar10[0x6b] = uVar12;
        puVar10[0x57] = uVar12;
        func_0x000108805bb4();
        *(uint *)(uVar12 + 0x10) = *(uint *)(uVar12 + 0x10) | 1;
        if (*(long *)(uVar12 + 0x30) == 0) {
          uVar13 = *(ulong *)(uVar12 + 8);
          if ((uVar13 & 1) != 0) {
            func_0x000108805b2c();
          }
          func_0x000107c287e0();
          *(ulong *)(uVar12 + 0x30) = uVar13;
        }
        ppuVar2 = (undefined **)(puVar10 + 0x67);
        func_0x000108805bac();
        func_0x000108805b64();
        ppuVar21 = ppuVar18;
        func_0x000108803f68(puVar10 + 0x59,ppuVar18,param_2 + 0x38);
        lVar19 = puVar10[0x60];
        puVar10[0x6c] = puVar10[0x61];
        ppuVar14 = &PTR___tlv_bootstrap_11340e278;
        (*(code *)PTR___tlv_bootstrap_11340e278)();
        ppuVar11 = ppuVar14;
        lVar16 = extraout_x8;
        while( true ) {
          puVar10[0x6d] = lVar19;
          *(byte *)((long)puVar10 + 0x371) = (byte)ppuVar18 & 1;
          if (lVar19 == lVar16) break;
          if (*(char *)(lVar19 + 0x28) == '\x01') {
            ppuVar4 = &PTR_PTR_113286e08;
            if (*(undefined ***)(lVar19 + 0x80) != (undefined **)0x0) {
              ppuVar4 = *(undefined ***)(lVar19 + 0x80);
            }
            func_0x000108805af0(ppuVar4);
            if (((ulong)ppuVar11 & 1) == 0) {
              puVar10[0x49] = 0;
              puVar10[0x48] = &PTR_FUN_110a96130;
              *(undefined4 *)(puVar10 + 0x50) = 0;
              puVar10[0x4b] = 0;
              puVar10[0x4a] = 0;
              puVar10[0x4d] = 0;
              puVar10[0x4c] = 0;
              puVar10[0x4e] = 0;
              ppuVar11 = (undefined **)(puVar10 + 0x59);
              ppuVar21 = (undefined **)(puVar10 + 0x48);
              FUN_108803fbc(puVar10 + 0x68,ppuVar11,ppuVar21,lVar19);
              puVar15 = (undefined *)puVar10[0x68];
              *ppuVar2 = puVar15;
              plVar3 = (long *)(puVar15 + 8);
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar7) {
                  *plVar3 = *plVar3 + 4;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (((uint)*(undefined8 *)(*ppuVar2 + 0x10) >> 1 & 1) == 0) {
                *(undefined1 *)(puVar10 + 0x6e) = 0;
                puVar20 = *ppuVar2;
                puVar15 = *ppuVar14;
                if (puVar15 == (undefined *)0x0) {
                  func_0x000107c3a5c0();
                  puVar15 = *ppuVar11;
                }
                plVar3 = (long *)(puVar20 + 0x10);
                do {
                  lVar19 = *plVar3;
                  if (lVar19 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar7) {
                      *plVar3 = 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') {
                      pbVar17 = *(byte **)(puVar20 + 0x90);
                      bVar5 = pbVar17[1];
                      uVar12 = (ulong)bVar5;
                      uVar8 = 0;
                      if (bVar5 == *pbVar17) {
                        uVar8 = bVar5 == 0x40;
                        func_0x000108805b74();
                        func_0x000108805b38();
                        *(undefined ***)(puVar20 + 0x90) = ppuVar11;
                        uVar12 = extraout_x8_00;
                      }
                      uVar12 = uVar12 & 0xffffffff;
                      pbVar1 = pbVar17 + uVar12 * 0x18 + 0x10;
                      pbVar1[0] = 0;
                      pbVar1[1] = 0;
                      pbVar1[2] = 0;
                      pbVar1[3] = 0;
                      pbVar1[4] = 0;
                      pbVar1[5] = 0;
                      pbVar1[6] = 0;
                      pbVar1[7] = 0;
                      *(undefined8 **)(pbVar17 + uVar12 * 0x18 + 0x18) = puVar10;
                      *(undefined **)(pbVar17 + uVar12 * 0x18 + 0x20) = puVar15;
                      *(char *)(*(long *)(puVar20 + 0x90) + 1) =
                           *(char *)(*(long *)(puVar20 + 0x90) + 1) + '\x01';
                      *(undefined8 *)(puVar20 + 0x10) = 0;
                      while (func_0x000108805bd4(uStack_70), !(bool)uVar8) {
                        ___stack_chk_fail();
                        if ((int)ppuVar21 == 0) {
                          do {
                            __Unwind_Resume(ppuVar11);
                            func_0x000104bd46a0();
                          } while ((int)ppuVar21 == 0);
                        }
                        else {
                          func_0x000108805b64();
                        }
                        func_0x000108805b14();
                        func_0x000108805b24();
                        func_0x000108805b1c();
                        func_0x000108805b04();
                        func_0x000108805afc();
                        ___cxa_begin_catch(ppuVar11);
                        ppuVar11 = (undefined **)(puVar10 + 2);
                        func_0x0001053360b0();
                        ___cxa_end_catch();
LAB_1088052dc:
                        func_0x000108805b8c();
                        func_0x000108805bcc();
                      }
                      return;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                } while (((uint)lVar19 >> 1 & 1) == 0);
              }
              ppuVar11 = ppuVar2;
              func_0x000107c28a1c();
              puVar15 = *ppuVar11;
              ppuVar11 = ppuVar2;
              func_0x000107c27f9c();
              func_0x000108805b6c();
              if (((ulong)puVar15 >> 0x20 & 1) == 0) {
                func_0x000108805b54(puVar10[0x6b]);
                iVar9 = *(int *)(puVar10 + 0x50);
                ppuVar21 = (undefined **)puVar10[0x4f];
                ppuVar18 = ppuVar11;
                func_0x000108805be8();
                if (ppuVar18 == (undefined **)0x0) {
                  ppuVar18 = (undefined **)ppuVar11[1];
                  if (((ulong)ppuVar18 & 1) != 0) {
                    func_0x000108805b2c();
                  }
                  func_0x0001088043b0();
                  ppuVar11[4] = (undefined *)ppuVar18;
                }
                ppuVar11 = ppuVar18;
                if (iVar9 != 6) {
                  ppuVar21 = &PTR_PTR_113286d58;
                }
                FUN_10891dfb4();
                func_0x000108805b84();
                ppuVar11[2] = *(undefined **)(puVar10[0x6d] + 0x20);
                func_0x000108805b84();
                ppuVar11[3] = (undefined *)puVar10[0x2f];
              }
              ppuVar18 = (undefined **)((ulong)puVar15 >> 0x20 & 1);
              func_0x000108805b0c();
            }
          }
          lVar19 = puVar10[0x6d] + 0x1a8;
          lVar16 = puVar10[0x6c];
        }
        uVar8 = *(int *)(puVar10[0x6b] + 0x20) == 2;
        if (1 < *(int *)(puVar10[0x6b] + 0x20)) {
          func_0x000108805ad8();
          goto LAB_10880526c;
        }
        FUN_108805a88(5);
        func_0x000108805ae0();
        func_0x000108805ad8();
      }
      func_0x000108805b14();
      func_0x000108805b24();
    }
    func_0x000108805b1c();
  }
  func_0x000108805b04();
LAB_1088052d8:
  func_0x000108805afc();
  goto LAB_1088052dc;
}



/* Entry: 108805420; end: 1088054bb;  */

bool FUN_108805420(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar2 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar2 = (ulong *)(*param_2 + 7);
  }
  func_0x000107c28f0c(puVar2,puVar2 + (int)param_2[1],param_1);
  puVar1 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar1 = (ulong *)(*param_2 + 7);
  }
  return puVar1 + (int)param_2[1] != puVar2;
}



/* Entry: 1088054bc; end: 1088054bf;  */

undefined8 * FUN_1088054bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73590;
  func_0x000107c289fc(param_1 + 9);
  func_0x000107c29114(param_1 + 7);
  func_0x000107c28808(param_1 + 5);
  func_0x000107c27914(param_1 + 2);
  return param_1;
}



/* Entry: 1088054c0; end: 1088054d3;  */

void FUN_1088054c0(void)

{
  func_0x000108805630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088054d4; end: 1088054f7;  */

undefined8 FUN_1088054d4(undefined8 param_1)

{
  FUN_1088054f8();
  return param_1;
}



/* Entry: 1088054f8; end: 10880551f;  */

void FUN_1088054f8(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  ulong extraout_x9;
  long unaff_x19;
  
  cVar1 = *(char *)(param_1 + 0x40);
  bVar2 = cVar1 == *(char *)(param_2 + 0x40);
  if (!bVar2) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        FUN_1088f050c();
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      return;
    }
    FUN_1086a0360();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001086b03a8();
    if (!bVar2) {
      uVar3 = *(ulong *)(unaff_x19 + 8);
      if ((uVar3 & 1) != 0) {
        func_0x0001086b04a8();
        uVar3 = extraout_x8;
      }
      uVar4 = *(ulong *)(param_2 + 8);
      if ((uVar4 & 1) != 0) {
        func_0x0001086b049c();
        uVar3 = extraout_x8_00;
        uVar4 = extraout_x9;
      }
      if (uVar3 == uVar4) {
        func_0x0001088f0cfc();
      }
      else {
        FUN_1088f0ccc();
      }
    }
    return;
  }
  return;
}



/* Entry: 108805520; end: 108805543;  */

void FUN_108805520(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_1088f050c();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 108805544; end: 10880567b;  */

void FUN_108805544(long param_1)

{
  if (param_1 == 0) {
    __Znwm(0x38);
  }
  else {
    func_0x000108805bc0();
  }
  func_0x000108805b94(&UNK_110a8c4b8);
  return;
}



/* Entry: 10880567c; end: 108805a37;  */

void FUN_10880567c(long param_1,undefined **param_2)

{
  byte *pbVar1;
  ulong *puVar2;
  ulong *puVar3;
  long *plVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined **ppuVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  ulong extraout_x8;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *apuStack_d8 [14];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (ulong *)(param_1 + 0x338);
  puVar3 = (ulong *)(param_1 + 0x340);
  ppuVar10 = &PTR___tlv_bootstrap_11340e278;
  (*(code *)PTR___tlv_bootstrap_11340e278)();
  do {
    do {
      puVar11 = puVar2;
      func_0x000107c28a1c();
      uVar18 = *puVar11;
      func_0x000108805b6c();
      puVar11 = puVar3;
      func_0x000107c27f9c();
      if ((uVar18 >> 0x20 & 1) == 0) {
        func_0x000108805b54(*(undefined8 *)(param_1 + 0x358));
        iVar5 = *(int *)(param_1 + 0x280);
        param_2 = *(undefined ***)(param_1 + 0x278);
        puVar12 = puVar11;
        func_0x000108805be8();
        if (puVar12 == (ulong *)0x0) {
          puVar12 = (ulong *)puVar11[1];
          if (((ulong)puVar12 & 1) != 0) {
            func_0x000108805b2c();
          }
          func_0x0001088043b0();
          puVar11[4] = (ulong)puVar12;
        }
        puVar11 = puVar12;
        if (iVar5 != 6) {
          param_2 = &PTR_PTR_113286d58;
        }
        FUN_10891dfb4();
        func_0x000108805b84();
        puVar11[2] = *(ulong *)(*(long *)(param_1 + 0x368) + 0x20);
        func_0x000108805b84();
        puVar11[3] = *(ulong *)(param_1 + 0x178);
      }
      func_0x000108805b0c();
      do {
        do {
          lVar14 = *(long *)(param_1 + 0x368);
          lVar16 = lVar14 + 0x1a8;
          *(long *)(param_1 + 0x368) = lVar16;
          *(byte *)(param_1 + 0x371) = (byte)(uVar18 >> 0x20) & 1;
          if (lVar16 == *(long *)(param_1 + 0x360)) {
            iVar5 = *(int *)(*(long *)(param_1 + 0x358) + 0x20);
            uVar9 = iVar5 == 1;
            if (iVar5 < 2) {
              func_0x000108805ab0(5);
              ppuVar13 = apuStack_d8;
              func_0x0001087fc078(ppuVar13);
              func_0x000108805ad8();
            }
            else {
              func_0x000108805ad8();
              func_0x000107c29ee4(apuStack_d8,*(long *)(param_1 + 0x348) + 0x10);
              FUN_1087fa3d8(param_1 + 0x288);
              lVar16 = *(long *)(param_1 + 0x350);
              func_0x000107c287d0();
              func_0x000107c2a2e0(apuStack_d8);
              *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(lVar16 + 0xd0);
              FUN_1086a7d80(apuStack_d8,param_1 + 0x288);
              param_2 = apuStack_d8;
              FUN_1088054d4(lVar16 + 0x138);
              func_0x0001086a78b0(apuStack_d8);
              func_0x000108805ab0(5);
              ppuVar13 = apuStack_d8;
              func_0x0001087fc078(ppuVar13);
            }
            func_0x000108805b14();
            func_0x000108805b24();
            func_0x000108805b1c();
            func_0x000108805b04();
            func_0x000108805afc();
            goto LAB_1088058fc;
          }
        } while (*(char *)(lVar14 + 0x1d0) != '\x01');
        ppuVar13 = &PTR_PTR_113286e08;
        if (*(undefined ***)(lVar14 + 0x228) != (undefined **)0x0) {
          ppuVar13 = *(undefined ***)(lVar14 + 0x228);
        }
        func_0x000108805af0(ppuVar13);
      } while (((ulong)puVar11 & 1) != 0);
      *(undefined8 *)(param_1 + 0x248) = 0;
      *(undefined ***)(param_1 + 0x240) = &PTR_FUN_110a96130;
      *(undefined4 *)(param_1 + 0x280) = 0;
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x250) = 0;
      *(undefined8 *)(param_1 + 0x268) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined8 *)(param_1 + 0x270) = 0;
      ppuVar13 = (undefined **)(param_1 + 0x2c8);
      param_2 = (undefined **)(param_1 + 0x240);
      FUN_108803fbc(puVar3,ppuVar13,param_2,lVar16);
      *puVar2 = *puVar3;
      plVar4 = (long *)(*puVar3 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *plVar4 = *plVar4 + 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    } while (((uint)*(undefined8 *)(*puVar2 + 0x10) >> 1 & 1) != 0);
    *(undefined1 *)(param_1 + 0x370) = 0;
    uVar18 = *puVar2;
    puVar19 = *ppuVar10;
    if (puVar19 == (undefined *)0x0) {
      func_0x000107c3a5c0();
      puVar19 = *ppuVar13;
    }
    plVar4 = (long *)(uVar18 + 0x10);
    do {
      lVar16 = *plVar4;
      if (lVar16 == 0) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *plVar4 = 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          pbVar17 = *(byte **)(uVar18 + 0x90);
          bVar6 = pbVar17[1];
          uVar15 = (ulong)bVar6;
          uVar9 = 0;
          if (bVar6 == *pbVar17) {
            uVar9 = bVar6 == 0x40;
            func_0x000108805b74();
            func_0x000108805b38();
            *(undefined ***)(uVar18 + 0x90) = ppuVar13;
            uVar15 = extraout_x8;
          }
          uVar15 = uVar15 & 0xffffffff;
          pbVar1 = pbVar17 + uVar15 * 0x18 + 0x10;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          *(long *)(pbVar17 + uVar15 * 0x18 + 0x18) = param_1;
          *(undefined **)(pbVar17 + uVar15 * 0x18 + 0x20) = puVar19;
          *(char *)(*(long *)(uVar18 + 0x90) + 1) = *(char *)(*(long *)(uVar18 + 0x90) + 1) + '\x01'
          ;
          *(undefined8 *)(uVar18 + 0x10) = 0;
          while (func_0x000108805bd4(uStack_68), !(bool)uVar9) {
            ___stack_chk_fail();
            if ((int)param_2 != 0) goto LAB_1088059a0;
            do {
              __Unwind_Resume(ppuVar13);
LAB_1088059a0:
              func_0x000104bd46a0();
            } while ((int)param_2 == 0);
            func_0x000108805b0c();
            func_0x000108805ad8();
            func_0x000108805b14();
            func_0x000108805b24();
            func_0x000108805b1c();
            func_0x000108805b04();
            func_0x000108805afc();
            ___cxa_begin_catch(ppuVar13);
            ppuVar13 = (undefined **)(param_1 + 0x10);
            func_0x0001053360b0();
            ___cxa_end_catch();
LAB_1088058fc:
            func_0x000108805b8c();
            func_0x000108805bcc();
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar16 >> 1 & 1) == 0);
  } while( true );
}



/* Entry: 108805a38; end: 108805a87;  */

void FUN_108805a38(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x338);
  func_0x000107c27f9c(param_1 + 0x340);
  func_0x000108805b0c();
  func_0x000108805ad8();
  func_0x000108805b14();
  func_0x000108805b24();
  func_0x000108805b1c();
  func_0x000108805b04();
  func_0x000108805afc();
  func_0x000108805b8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108805a88; end: 108805ccf;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108805a88(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 uStack0000000000000010;
  undefined1 uStack0000000000000018;
  undefined1 uStack0000000000000050;
  undefined1 uStack0000000000000058;
  undefined1 uStack000000000000005c;
  undefined1 uStack0000000000000060;
  undefined1 uStack0000000000000078;
  
  uStack0000000000000018 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  uStack000000000000005c = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000078 = 0;
  puVar5 = (undefined8 *)(unaff_x19 + 0x18);
  uStack0000000000000010 = param_1;
  FUN_1087fbef8(*puVar5,puVar5,&stack0x00000010);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 108805cd0; end: 10880680f;  */

/* WARNING: Removing unreachable block (ram,0x000108805ff0) */

void FUN_108805cd0(ulong *param_1,undefined *param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  ulong uVar13;
  long extraout_x9;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong *unaff_x26;
  undefined8 uVar19;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [56];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined4 uStack_190;
  undefined8 uStack_70;
  
  func_0x000108807440();
  puVar7 = (undefined8 *)0x6c8;
  uStack_70 = extraout_x8;
  __Znwm();
  *puVar7 = FUN_108806d14;
  puVar7[1] = FUN_10880722c;
  puVar7[0xd7] = param_3;
  puVar7[0xd6] = param_2;
  func_0x0001087fbde0(puVar7 + 2);
  FUN_1087fbd64(param_1,puVar7 + 2);
  uVar17 = *(undefined8 *)(param_3 + 0x38);
  puVar10 = (undefined8 *)(param_3 + 0x40);
  FUN_1086a7798(puVar7 + 0xb4);
  puVar11 = (undefined8 *)(param_3 + 0x20);
  lVar18 = 0x4f8;
  if (*(char *)(param_3 + 0x88) == '\0') {
    lVar18 = 200;
  }
  uVar5 = *(char *)((long)puVar11 + lVar18) == '\x01';
  if ((bool)uVar5) {
LAB_108805d74:
    func_0x00010880726c(1);
    puVar9 = &uStack_230;
    puVar11 = puVar10;
  }
  else {
    unaff_x26 = puVar7 + 0xaa;
    param_1 = puVar7 + 0xbd;
    if (*(char *)(param_3 + 0x88) == '\0') {
      FUN_108862d6c(&uStack_230,*(undefined8 *)(param_2 + 0x38),puVar11,uVar17);
      func_0x000107c28998(puVar7 + 0x3f,&uStack_230);
      func_0x000107c28948(&uStack_230);
      if ((*(byte *)(puVar7 + 0x74) & 1) == 0) {
        func_0x0001088072dc(param_2);
        func_0x00010880726c(0x700000001);
        func_0x000108807384();
      }
      else {
        puVar11 = puVar7 + 0x3f;
        func_0x000107c28a9c(puVar7 + 0x75);
        uVar5 = *(int *)(puVar7 + 0xbc) == 6;
        if ((bool)uVar5) {
          func_0x000108803f68(puVar7 + 4,param_2 + 0x38,param_2 + 0xb8);
          puVar11 = puVar7 + 0xb4;
          FUN_108803fbc(param_1,puVar7 + 4,puVar11,puVar7 + 0x75);
          *unaff_x26 = *param_1;
          plVar1 = (long *)(*param_1 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (((uint)*(undefined8 *)(*unaff_x26 + 0x10) >> 1 & 1) == 0) {
            *(undefined1 *)(puVar7 + 0xd8) = 0;
            param_3 = puVar7[0xaa];
            ppuVar8 = &PTR___tlv_bootstrap_11340e278;
            (*(code *)PTR___tlv_bootstrap_11340e278)();
            param_2 = *ppuVar8;
            if (param_2 == (undefined *)0x0) {
              func_0x000107c3a5c0();
              param_2 = *ppuVar8;
            }
            plVar1 = (long *)(param_3 + 0x10);
            do {
              lVar18 = *plVar1;
              if (lVar18 == 0) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                uVar5 = cVar3 == '\0';
                if ((bool)uVar5) {
                  puVar14 = *(ulong **)(param_3 + 0x90);
                  bVar2 = *(byte *)((long)puVar14 + 1);
                  uVar13 = (ulong)bVar2;
                  uVar5 = 0;
                  param_1 = puVar14;
                  if (bVar2 == (byte)*puVar14) {
                    uVar12 = (uint)bVar2 << 1;
                    uVar5 = bVar2 == 0x40;
                    if (0x7f < uVar12) {
                      uVar12 = 0x80;
                    }
                    param_1 = (ulong *)(ulong)(uVar12 * 0x18 + 0x10);
                    _malloc();
                    uVar13 = 0;
                    *(byte *)param_1 = (byte)uVar12;
                    *(byte *)((long)param_1 + 1) = 0;
                    param_1[1] = 0;
                    puVar14[1] = (ulong)param_1;
                    *(ulong **)(param_3 + 0x90) = param_1;
                  }
                  param_1[uVar13 * 3 + 2] = 0;
                  param_1[uVar13 * 3 + 3] = (ulong)puVar7;
                  param_1[uVar13 * 3 + 4] = (ulong)param_2;
                  *(char *)(*(long *)(param_3 + 0x90) + 1) =
                       *(char *)(*(long *)(param_3 + 0x90) + 1) + '\x01';
                  *(undefined8 *)(param_3 + 0x10) = 0;
                  goto LAB_108806398;
                }
              }
              else {
                ClearExclusiveLocal();
              }
            } while (((uint)lVar18 >> 1 & 1) == 0);
          }
          puVar14 = unaff_x26;
          func_0x000107c28a1c();
          uVar13 = *puVar14;
          func_0x000107c27f9c(unaff_x26);
          func_0x000107c27f9c(param_1);
          if ((uVar13 >> 0x20 & 1) == 0) {
            func_0x0001088072f8();
            goto LAB_10880602c;
          }
          puVar11 = (undefined8 *)(uVar13 & 0x1ffffffff);
          FUN_108806810(puVar7[0xd6]);
          func_0x00010880726c(0x700000001);
          func_0x000108807384();
          func_0x0001088072f8();
        }
        else {
LAB_10880602c:
          func_0x00010880734c();
          func_0x000108807414();
          if ((*(byte *)(puVar7 + 0x3e) & 1) == 0) {
            func_0x0001088072dc(puVar7[0xd6]);
            func_0x00010880726c(0x700000001);
            func_0x000108807384();
          }
          else {
            func_0x00010880734c();
            puVar11 = (undefined8 *)(extraout_x9 + 0x20);
            FUN_10885edd8(&uStack_230);
            FUN_108655080(puVar7 + 0xcd,&uStack_230);
            FUN_108656820(&uStack_230);
            if (((*(byte *)((long)puVar7 + 0x694) & 1) == 0) &&
               ((*(byte *)(puVar7 + 0x7a) & 1) != 0)) {
              lVar16 = puVar7[0xd6];
              param_3 = *(long *)(lVar16 + 0x28);
              func_0x000108807368();
              (*extraout_x8_01)();
              lVar18 = param_3;
              func_0x000108807324();
              func_0x0001088073d4();
              FUN_10891d930();
              func_0x0001088073d4();
              func_0x000107c29ee4(&uStack_230,puVar7[0xd6] + 0x10);
              FUN_1086a7b48(lVar18);
              lVar15 = puVar7[0xd6];
              func_0x000107c287d0();
              func_0x0001088074f8();
              *(long *)(lVar18 + 0x30) = param_3;
              uVar17 = *(undefined8 *)(lVar15 + 0x68);
              func_0x000108807368();
              (*extraout_x8_02)();
              puVar7[0xca] = uVar17;
              func_0x000107c29ee4(&uStack_230,puVar7 + 0xcd);
              FUN_1086c814c(lVar18);
              func_0x000107c287d0();
              func_0x0001088074f8();
              *(undefined8 *)(lVar18 + 0x28) = puVar7[0x79];
              iVar6 = (int)puVar7 + 0x20;
              func_0x000107c28da8();
              if (iVar6 != 0) {
                *(undefined1 *)(puVar7 + 0xcc) = 1;
              }
              uVar17 = *(undefined8 *)(*(long *)(puVar7[0xd6] + 0x38) + 0x18);
              func_0x000108807424();
              func_0x000107c31420(param_1,uVar17,puVar7 + 0xd3);
              uVar17 = puVar7[0xd7];
              func_0x00010880740c();
              FUN_108806b84(unaff_x26,(long *)(lVar16 + 0x28),uVar17,2);
              FUN_10886024c(*(undefined8 *)(puVar7[0xd6] + 0x38),unaff_x26);
              param_2 = *(undefined **)(puVar7[0xd6] + 0x38);
              func_0x000107c27994(&uStack_230,puVar7[0xd7] + 0x20);
              uStack_218 = *(undefined8 *)(puVar7[0xd7] + 0x38);
              uStack_210 = puVar7[0xca];
              auStack_208[0] = 1;
              FUN_1086a9cbc(auStack_200,puVar7 + 0xc5);
              func_0x000107c278b8(auStack_1c0,&DAT_10f4bdfde);
              lStack_1a8 = param_3;
              func_0x000107c27994(auStack_1a0,puVar7[0xd7]);
              puVar10 = &uStack_230;
              FUN_108865044(param_2);
              iVar6 = (int)&uStack_230;
              func_0x0001086a9714();
              func_0x0001088073dc();
              if (iVar6 != 4) {
                func_0x00010880745c();
                func_0x0001088073fc();
              }
              func_0x000107c31428(param_1);
              func_0x000107c27914(unaff_x26);
              puVar14 = param_1;
              func_0x000107c31424();
              iVar6 = (int)puVar14;
              func_0x0001088073dc();
              uVar5 = iVar6 == 4;
              if (!(bool)uVar5) {
                puVar10 = (undefined8 *)puVar7[0xd7];
                func_0x0001088074e8(puVar7[0xd6]);
                func_0x00010880738c();
                func_0x000108807488();
              }
              func_0x000108807480(puVar7[0xd6]);
              func_0x000108807474(puVar7[0xd7]);
              func_0x0001088073cc();
              func_0x000108807308();
              func_0x0001088072e8();
              func_0x0001088072f0();
              func_0x000108807300();
              goto LAB_108805d74;
            }
            func_0x0001088074c0(puVar7[0xd6]);
            func_0x00010880726c(0x700000001);
            func_0x000108807384();
            func_0x000108807308();
          }
          func_0x0001088072e8();
        }
        func_0x0001088072f0();
      }
      func_0x000108807300();
      goto LAB_10880638c;
    }
    func_0x000107c29f64(puVar7 + 4,*(undefined8 *)(param_2 + 0x38),puVar11,2);
    bVar2 = *(byte *)(puVar7 + 0x3e);
    if ((bVar2 & 1) == 0) {
      func_0x0001088072dc(param_2);
      func_0x0001088072bc(0x700000001);
    }
    else {
      uVar17 = *(undefined8 *)(param_2 + 0x28);
      func_0x000108807368();
      (*extraout_x8_00)();
      FUN_108788cc8(unaff_x26,*(undefined8 *)(param_3 + 0x90),*(undefined8 *)(param_3 + 0x98));
      *param_1 = 0;
      puVar7[0xbe] = 0;
      puVar7[0xbf] = 0;
      if (puVar7[0xad] != 0) {
        FUN_108861b60(&uStack_230,*(undefined8 *)(param_2 + 0x38),puVar11,unaff_x26,0);
        func_0x0001086a9b44(param_1,&uStack_230);
        func_0x00010867b9fc(&uStack_230);
      }
      uVar19 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18);
      func_0x000107c278b8(puVar7 + 0xc5,&UNK_10f4bc340);
      func_0x000107c31420(puVar7 + 0x75,uVar19,puVar7 + 0xc5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7 + 0xc5);
      uVar19 = *(undefined8 *)(param_2 + 0x38);
      FUN_108806b84(&uStack_230,param_2 + 0x28,param_3,*(undefined4 *)(param_3 + 0x530));
      FUN_10886024c(uVar19,&uStack_230);
      func_0x0001088074f0();
      uVar19 = *(undefined8 *)(param_2 + 0x38);
      func_0x000107c27994(&uStack_230,puVar11);
      uStack_218 = *(undefined8 *)(param_3 + 0x158);
      uStack_210 = CONCAT71(uStack_210._1_7_,1);
      FUN_1086a0454(auStack_208,param_3 + 0x138);
      func_0x000107c278b8(auStack_1c8,&DAT_10f4bdfde);
      uStack_1b0 = uVar17;
      func_0x000107c27994(&lStack_1a8,param_3);
      uStack_190 = *(undefined4 *)(param_3 + 0x170);
      FUN_10886516c(uVar19,&uStack_230);
      func_0x0001086a9a00(&uStack_230);
      func_0x000107c31428(puVar7 + 0x75);
      if (*(int *)(param_3 + 0x170) == 9) {
        lVar15 = puVar7[0xbe];
        for (lVar18 = puVar7[0xbd]; lVar18 != lVar15; lVar18 = lVar18 + 0x1a8) {
          FUN_1086e981c(param_3 + 0x40,lVar18);
        }
      }
      func_0x000107c31424(puVar7 + 0x75);
      func_0x00010867bb84(unaff_x26);
      *(undefined1 *)(param_3 + 0x518) = 1;
      func_0x0001088074e8(param_2,param_3);
      uVar5 = puVar7[0xbd] == puVar7[0xbe];
      if (!(bool)uVar5) {
        uStack_230 = 0;
        uStack_228 = 0;
        uStack_220 = 0;
        (**(code **)**(undefined8 **)(param_2 + 0x58))
                  (*(undefined8 **)(param_2 + 0x58),puVar11,puVar7 + 4,0,param_1,&uStack_230);
        func_0x000104be1274(&uStack_230);
      }
      func_0x000108807480(param_2);
      func_0x0001088074b8();
    }
    func_0x0001088072e8();
    if ((bVar2 & 1) != 0) {
      func_0x0001088072bc(1);
    }
    puVar11 = puVar7 + 0x3f;
    func_0x0001087fbdac(puVar7 + 2);
    puVar9 = puVar7 + 0x3f;
  }
  func_0x0001087fc078(puVar9);
LAB_10880638c:
  do {
    func_0x000108807374();
    while( true ) {
      func_0x0001088073c4();
      func_0x0001088074b0();
LAB_108806398:
      func_0x000108807310(uStack_70);
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010880735c();
      if ((int)puVar11 == 0) {
        do {
          __Unwind_Resume(param_3);
          func_0x000104bd46a0(param_3);
          func_0x0001088073b8();
        } while ((int)param_2 == 0);
        func_0x000107c27914(unaff_x26);
        func_0x000107c31424(param_1);
      }
      func_0x0001088073cc();
      func_0x000108807308();
      func_0x0001088072e8();
      func_0x0001088072f0();
      func_0x000108807300();
      uVar5 = (int)param_2 == 2;
      if ((bool)uVar5) break;
      func_0x000108807374();
      func_0x0001088074d8();
      func_0x0001053360b0(puVar7 + 2);
      ___cxa_end_catch();
    }
    func_0x0001088074d8();
    func_0x000108848514();
    func_0x000108807494(puVar7[0xd6]);
    func_0x00010880726c(0x700000001);
    func_0x000108807384();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 108806810; end: 10880696b;  */

void FUN_108806810(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_828 [904];
  undefined1 uStack_4a0;
  undefined1 auStack_498 [24];
  undefined1 auStack_480 [944];
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *pcStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_a0;
  func_0x000108807440();
  lVar6 = *(long *)(param_1 + 0xd8);
  uStack_48 = extraout_x8;
  if (lVar6 != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x48);
    lStack_98 = *(long *)(param_1 + 0xe0);
    if (lStack_98 != 0) {
      plVar1 = (long *)(lStack_98 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_90 = (undefined4)param_2;
    uStack_8c = CONCAT31(uStack_8c._1_3_,(char)((ulong)param_2 >> 0x20));
    lStack_a0 = lVar6;
    func_0x000107c28150();
    lVar6 = puVar7[2];
    __ZNSt3__15mutex4lockEv(lVar6 + 8);
    lVar8 = *(long *)(lVar6 + 0x70);
    pcStack_80 = FUN_108806cb8;
    ppuStack_78 = &PTR_DAT_110a73600;
    lStack_68 = lStack_98;
    lStack_70 = lStack_a0;
    lStack_a0 = 0;
    lStack_98 = 0;
    uStack_60 = CONCAT44(uStack_8c,uStack_90);
    lStack_50 = param_1;
    func_0x000107c28154(lVar6 + 0x48,&pcStack_80);
    func_0x0001088073ec();
    __ZNSt3__15mutex6unlockEv(lVar6 + 8);
    if (lVar8 == 0) {
      uVar4 = *puVar7;
      ppuStack_78 = (undefined **)puVar7[3];
      pcStack_80 = (code *)puVar7[2];
      if (puVar7[3] != 0) {
        plVar1 = (long *)(puVar7[3] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000108807368(uVar4);
      (*extraout_x8_00)();
      func_0x000107c27e74(&pcStack_80);
    }
    func_0x000104be3970();
  }
  func_0x000108807310(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27e74(&pcStack_80);
  func_0x000104be3970();
  func_0x0001088074a8();
  func_0x000107c27994(auStack_498);
  auStack_828[0] = 0;
  uStack_4a0 = 0;
  FUN_10864094c(auStack_480,auStack_498,param_3,auStack_828);
  func_0x00010863f788(auStack_828);
  func_0x000107c27914(auStack_498);
  func_0x000108807368(*(undefined8 *)((long)plVar5 + 0x98));
  (*extraout_x8_01)();
  FUN_108798a4c(auStack_480);
  return;
}



/* Entry: 10880696c; end: 1088069f7;  */

void FUN_10880696c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *extraout_x8;
  undefined1 auStack_788 [904];
  undefined1 uStack_400;
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [944];
  
  func_0x000107c27994(auStack_3f8);
  auStack_788[0] = 0;
  uStack_400 = 0;
  FUN_10864094c(auStack_3e0,auStack_3f8,param_3,auStack_788);
  func_0x00010863f788(auStack_788);
  func_0x000107c27914(auStack_3f8);
  func_0x000108807368(*(undefined8 *)(param_1 + 0x98));
  (*extraout_x8)();
  FUN_108798a4c(auStack_3e0);
  return;
}



/* Entry: 1088069f8; end: 108806b83;  */

void FUN_1088069f8(long param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  FUN_1088612f4(uVar1,param_3,*(undefined8 *)(param_2 + 0x18));
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  if ((int)uVar1 != 0) {
    FUN_1086a125c(&uStack_230,*(undefined8 *)(param_1 + 0x38),param_2);
    func_0x0001088074cc();
    func_0x0001088073e4();
  }
  if ((param_5 & 1) != 0) {
    FUN_108869e60(&uStack_230,*(undefined8 *)(param_1 + 0x38),param_3,param_4);
    FUN_10867b070(&lStack_70,&uStack_230);
    func_0x000107c28948(&uStack_230);
    lVar2 = lStack_70;
    if (lStack_70 != lStack_68) {
      for (; lVar2 != lStack_68; lVar2 = lVar2 + 0x1a8) {
        FUN_1086a125c(&uStack_230,*(undefined8 *)(param_1 + 0x38),lVar2);
        func_0x0001088074cc();
        func_0x0001088073e4();
      }
    }
    func_0x00010867b9fc(&lStack_70);
  }
  if (lStack_58 != lStack_50) {
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    (**(code **)**(undefined8 **)(param_1 + 0x58))
              (*(undefined8 **)(param_1 + 0x58),param_3,param_3,*(int *)(param_3 + 0x11c) == 3,
               &lStack_58,&uStack_230);
    func_0x000104be1274(&uStack_230);
  }
  func_0x00010867b9fc(&lStack_58);
  return;
}



/* Entry: 108806b84; end: 108806c07;  */

void FUN_108806b84(long param_1,undefined8 *param_2,long param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *extraout_x8;
  
  lVar2 = param_1;
  func_0x000107c27994(param_1,param_3);
  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  uVar3 = *param_2;
  func_0x000108807368();
  (*extraout_x8)();
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0x528);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 0x520);
  uVar1 = *(undefined4 *)(param_3 + 0x52c);
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}



/* Entry: 108806c08; end: 108806c0b;  */

undefined8 * FUN_108806c08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a735d0;
  func_0x000104be3970(param_1 + 0x1b);
  func_0x000107c289fc(param_1 + 0x19);
  func_0x000107c29114(param_1 + 0x17);
  func_0x000107c28ab4(param_1 + 0x15);
  func_0x000107c29958(param_1 + 0x13);
  func_0x000107c28ebc(param_1 + 0x11);
  func_0x000107c28ec0(param_1 + 0xf);
  func_0x000107c29194(param_1 + 0xd);
  func_0x000107c28ab8(param_1 + 0xb);
  func_0x000107c2814c(param_1 + 9);
  func_0x000107c28808(param_1 + 7);
  func_0x000107c28800(param_1 + 5);
  func_0x000107c27914(param_1 + 2);
  return param_1;
}



/* Entry: 108806c0c; end: 108806c1f;  */

void FUN_108806c0c(void)

{
  FUN_108806c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108806c20; end: 108806cb7;  */

undefined8 * FUN_108806c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a735d0;
  func_0x000104be3970(param_1 + 0x1b);
  func_0x000107c289fc(param_1 + 0x19);
  func_0x000107c29114(param_1 + 0x17);
  func_0x000107c28ab4(param_1 + 0x15);
  func_0x000107c29958(param_1 + 0x13);
  func_0x000107c28ebc(param_1 + 0x11);
  func_0x000107c28ec0(param_1 + 0xf);
  func_0x000107c29194(param_1 + 0xd);
  func_0x000107c28ab8(param_1 + 0xb);
  func_0x000107c2814c(param_1 + 9);
  func_0x000107c28808(param_1 + 7);
  func_0x000107c28800(param_1 + 5);
  func_0x000107c27914(param_1 + 2);
  return param_1;
}



/* Entry: 108806cb8; end: 108806d13;  */

void FUN_108806cb8(long param_1)

{
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108806cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
              (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108806ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 108806d14; end: 10880722b;  */

void FUN_108806d14(long param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x9;
  ulong uVar6;
  undefined8 unaff_x21;
  ulong *puVar7;
  long lVar8;
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [24];
  ulong uStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  puVar5 = auStack_f0;
  iVar2 = (int)auStack_f0;
  lVar8 = param_1;
  func_0x000108807440();
  puVar7 = (ulong *)(lVar8 + 0x550);
  uStack_48 = extraout_x8;
  func_0x000107c28a1c();
  uVar6 = *puVar7;
  func_0x000107c27f9c(param_1 + 0x550);
  func_0x0001088074e0();
  if ((uVar6 >> 0x20 & 1) == 0) {
    func_0x0001088072f8();
    func_0x00010880734c();
    func_0x000108807414();
    if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) {
      func_0x0001088072dc(*(undefined8 *)(param_1 + 0x6b0));
      func_0x000108807294(0x700000001);
      func_0x00010880737c();
    }
    else {
      func_0x00010880734c();
      param_2 = (undefined1 *)(extraout_x9 + 0x20);
      FUN_10885edd8(auStack_f0);
      FUN_108655080(param_1 + 0x668,auStack_f0);
      FUN_108656820(auStack_f0);
      if (((*(byte *)(param_1 + 0x694) & 1) == 0) && ((*(byte *)(param_1 + 0x3d0) & 1) != 0)) {
        puVar7 = (ulong *)(*(long *)(param_1 + 0x6b0) + 0x28);
        uVar6 = *puVar7;
        func_0x000108807368();
        (*extraout_x8_00)();
        uVar3 = uVar6;
        func_0x000108807324();
        func_0x0001088073d4();
        FUN_10891d930();
        func_0x0001088073d4();
        func_0x000107c29ee4(auStack_f0,*(long *)(param_1 + 0x6b0) + 0x10);
        FUN_1086a7b48(uVar3);
        lVar8 = *(long *)(param_1 + 0x6b0);
        func_0x000107c287d0();
        func_0x0001088074a0();
        *(ulong *)(uVar3 + 0x30) = uVar6;
        uVar4 = *(undefined8 *)(lVar8 + 0x68);
        func_0x000108807368();
        (*extraout_x8_01)();
        *(undefined8 *)(param_1 + 0x650) = uVar4;
        func_0x000107c29ee4(auStack_f0,param_1 + 0x668);
        FUN_1086c814c(uVar3);
        func_0x000107c287d0();
        func_0x0001088074a0();
        *(undefined8 *)(uVar3 + 0x28) = *(undefined8 *)(param_1 + 0x3c8);
        iVar1 = (int)param_1 + 0x20;
        func_0x000107c28da8();
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0x660) = 1;
        }
        uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x6b0) + 0x38) + 0x18);
        func_0x000108807424();
        func_0x000107c31420(param_1 + 0x5e8,uVar4,param_1 + 0x698);
        uVar4 = *(undefined8 *)(param_1 + 0x6b8);
        func_0x00010880740c();
        FUN_108806b84(param_1 + 0x550,puVar7,uVar4,2);
        FUN_10886024c(*(undefined8 *)(*(long *)(param_1 + 0x6b0) + 0x38),param_1 + 0x550);
        unaff_x21 = *(undefined8 *)(*(long *)(param_1 + 0x6b0) + 0x38);
        func_0x000107c27994(auStack_f0,*(long *)(param_1 + 0x6b8) + 0x20);
        uStack_d8 = *(undefined8 *)(*(long *)(param_1 + 0x6b8) + 0x38);
        uStack_d0 = *(undefined8 *)(param_1 + 0x650);
        uStack_c8 = 1;
        FUN_1086a9cbc(auStack_c0,param_1 + 0x628);
        func_0x000107c278b8(auStack_80,&DAT_10f4bdfde);
        uStack_68 = uVar6;
        func_0x000107c27994(auStack_60,*(undefined8 *)(param_1 + 0x6b8));
        FUN_108865044(unaff_x21);
        func_0x0001086a9714();
        func_0x0001088073dc();
        if (iVar2 != 4) {
          func_0x00010880745c();
          func_0x0001088073fc();
        }
        func_0x000107c31428(param_1 + 0x5e8);
        func_0x000107c27914(param_1 + 0x550);
        iVar2 = (int)param_1 + 0x5e8;
        func_0x000107c31424();
        func_0x0001088073dc();
        in_ZR = iVar2 == 4;
        if (!(bool)in_ZR) {
          puVar5 = *(undefined1 **)(param_1 + 0x6b8);
          func_0x0001088074e8(*(undefined8 *)(param_1 + 0x6b0));
          func_0x00010880738c();
          func_0x000108807488();
        }
        func_0x000108807480(*(undefined8 *)(param_1 + 0x6b0));
        func_0x000108807474(*(undefined8 *)(param_1 + 0x6b8));
        func_0x0001088073cc();
        func_0x000108807308();
        func_0x0001088072e8();
        func_0x0001088072f0();
        func_0x000108807300();
        func_0x000108807294(1);
        func_0x00010880737c();
        goto LAB_108806ff4;
      }
      func_0x0001088074c0(*(undefined8 *)(param_1 + 0x6b0));
      func_0x000108807294(0x700000001);
      func_0x00010880737c();
      func_0x000108807308();
    }
    func_0x0001088072e8();
    puVar5 = param_2;
  }
  else {
    puVar5 = (undefined1 *)(uVar6 & 0x1ffffffff);
    FUN_108806810(*(undefined8 *)(param_1 + 0x6b0));
    func_0x000108807294(0x700000001);
    func_0x00010880737c();
    func_0x0001088072f8();
  }
  func_0x0001088072f0();
  func_0x000108807300();
LAB_108806ff4:
  do {
    func_0x000108807374();
    while( true ) {
      func_0x0001088073c4();
      func_0x0001088074b0();
      func_0x000108807310(uStack_48);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x000108807434();
      if ((int)puVar5 == 0) {
        __Unwind_Resume(uVar6);
        func_0x000107c27f9c(uVar6 + 0x550);
        func_0x0001088074e0();
        func_0x0001088072f8();
        func_0x0001088072f0();
        func_0x000108807300();
        func_0x000108807374();
        func_0x0001088073c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar6);
        return;
      }
      func_0x0001088073cc();
      func_0x000108807308();
      func_0x0001088072e8();
      func_0x0001088072f0();
      func_0x000108807300();
      in_ZR = (int)unaff_x21 == 2;
      if ((bool)in_ZR) break;
      func_0x000108807374();
      ___cxa_begin_catch(uVar6);
      func_0x0001053360b0(param_1 + 0x10);
      ___cxa_end_catch();
    }
    ___cxa_begin_catch(uVar6);
    func_0x000108848514();
    func_0x000108807494(*(undefined8 *)(param_1 + 0x6b0));
    func_0x000108807294(0x700000001);
    func_0x00010880737c();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 10880722c; end: 10880726b;  */

void FUN_10880722c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x550);
  func_0x0001088074e0();
  func_0x0001088072f8();
  func_0x0001088072f0();
  func_0x000108807300();
  func_0x000108807374();
  func_0x0001088073c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10880726c; end: 10880750b;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_10880726c(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 uStack0000000000000010;
  undefined1 uStack0000000000000018;
  undefined1 uStack0000000000000050;
  undefined1 uStack0000000000000058;
  undefined1 uStack000000000000005c;
  undefined1 uStack0000000000000060;
  undefined1 uStack0000000000000078;
  
  uStack0000000000000018 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  uStack000000000000005c = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000078 = 0;
  puVar5 = (undefined8 *)(unaff_x19 + 0x18);
  uStack0000000000000010 = param_1;
  FUN_1087fbef8(*puVar5,puVar5,&stack0x00000010);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 10880750c; end: 1088076bf;  */

undefined8 *
FUN_10880750c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
             undefined8 param_13,undefined8 *param_14)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 4;
  *param_1 = &PTR_FUN_110a73628;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar1;
  param_1[4] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  uVar1 = *param_5;
  param_1[10] = param_5[1];
  param_1[9] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[0xc] = param_6[1];
  param_1[0xb] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  uVar1 = *param_7;
  param_1[0xe] = param_7[1];
  param_1[0xd] = uVar1;
  *param_7 = 0;
  param_7[1] = 0;
  uVar1 = *param_8;
  param_1[0x10] = param_8[1];
  param_1[0xf] = uVar1;
  *param_8 = 0;
  param_8[1] = 0;
  uVar1 = *param_9;
  param_1[0x12] = param_9[1];
  param_1[0x11] = uVar1;
  *param_9 = 0;
  param_9[1] = 0;
  uVar1 = *param_10;
  param_1[0x14] = param_10[1];
  param_1[0x13] = uVar1;
  *param_10 = 0;
  param_10[1] = 0;
  uVar1 = *param_11;
  param_1[0x16] = param_11[1];
  param_1[0x15] = uVar1;
  *param_11 = 0;
  param_11[1] = 0;
  uVar1 = *param_12;
  param_1[0x18] = param_12[1];
  param_1[0x17] = uVar1;
  *param_12 = 0;
  param_12[1] = 0;
  FUN_1087bc1b8(param_1 + 0x19,param_13);
  uVar1 = *param_14;
  param_1[0x21] = param_14[1];
  param_1[0x20] = uVar1;
  *param_14 = 0;
  param_14[1] = 0;
  return param_1;
}



/* Entry: 1088076c0; end: 10880876b;  */

void FUN_1088076c0(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  code *pcVar7;
  undefined1 in_ZR;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined ******ppppppuVar15;
  undefined ******ppppppuVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long *plVar19;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long lVar20;
  code *extraout_x8_10;
  undefined8 extraout_x8_11;
  uint uVar21;
  undefined ******extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  long lVar22;
  undefined8 extraout_x12;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 *unaff_x23;
  long lVar25;
  ulong uVar26;
  undefined *****pppppuStack_258;
  ulong uStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined *****pppppuStack_230;
  ulong uStack_228;
  long *plStack_220;
  ulong uStack_218;
  long lStack_210;
  undefined **appuStack_208 [3];
  undefined ***pppuStack_1f0;
  undefined1 uStack_1e8;
  undefined1 uStack_1e4;
  undefined1 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_70;
  
  func_0x00010880a4a0();
  puVar11 = (undefined8 *)0x9b0;
  uStack_70 = extraout_x8;
  __Znwm();
  *puVar11 = FUN_10880994c;
  puVar11[1] = FUN_10880a324;
  puVar11[0x133] = param_3;
  puVar11[0x132] = param_2;
  func_0x0001087fbde0(puVar11 + 2);
  FUN_1087fbd64(param_1,puVar11 + 2);
  func_0x000107c29f64(puVar11 + 10,*(undefined8 *)(param_2 + 0x38),param_3 + 4,0);
  if ((*(byte *)(puVar11 + 0x44) & 1) == 0) {
    func_0x00010880a768();
    FUN_10880876c();
    pppppuStack_230 = (undefined *****)0x700000004;
    uStack_228 = uStack_228 & 0xffffffffffffff00;
    pppuStack_1f0 = (undefined ***)((ulong)pppuStack_1f0 & 0xffffffffffffff00);
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    func_0x00010880a3ec();
    func_0x00010880a56c();
LAB_1088082d0:
    func_0x00010880a57c();
    func_0x00010880a478();
    func_0x00010880a4b0();
LAB_1088082dc:
    func_0x00010880a3d8(uStack_70);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar12 = puVar11 + 0x45;
    puVar1 = puVar11 + 0x7b;
    in_ZR = *(char *)(param_3 + 0x11) == '\x01';
    if ((bool)in_ZR) {
      plVar13 = puVar11 + 0xd;
      func_0x000107c29e74();
      func_0x00010880a768(puVar1);
      FUN_108808870();
      *puVar12 = *puVar1;
      do {
        func_0x00010880a428();
      } while (extraout_w10 != 0);
      func_0x00010880a5d4(*puVar12);
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar11 + 0x134) = 0;
        puVar23 = (undefined8 *)puVar11[0x45];
        func_0x00010880a4f4();
        unaff_x23 = (undefined8 *)*plVar13;
        if (unaff_x23 == (undefined8 *)0x0) {
          func_0x000107c3a5c0();
          unaff_x23 = (undefined8 *)*plVar13;
        }
        plVar19 = puVar23 + 2;
        do {
          if (*plVar19 == 0) {
            func_0x00010880a480();
            plVar19 = extraout_x8_01;
            uVar21 = extraout_w10_01;
            uVar17 = extraout_x11_00;
          }
          else {
            func_0x00010880a774();
            plVar19 = extraout_x8_00;
            uVar21 = extraout_w10_00;
            uVar17 = extraout_x11;
          }
          if ((uVar17 & 1) != 0) {
            func_0x00010880a758();
            if ((bool)in_ZR) {
              func_0x00010880a490();
              func_0x00010880a438();
              func_0x00010880a40c();
              puVar23[0x12] = plVar13;
            }
            func_0x00010880a748();
            *(undefined8 **)(extraout_x8_02 + 0x20) = unaff_x23;
            *(char *)(puVar23[0x12] + 1) = *(char *)(puVar23[0x12] + 1) + '\x01';
            goto LAB_108807a24;
          }
        } while ((uVar21 >> 1 & 1) == 0);
      }
      FUN_1087fcdf4(puVar12);
      puVar11 = puVar11 + 3;
      unaff_x23 = (undefined8 *)*puVar11;
      do {
        pppppuStack_230 = (undefined *****)0x0;
        puVar23 = unaff_x23 + 2;
        func_0x00010880a7d4(puVar23,&pppppuStack_230);
        if ((int)puVar23 != 0) {
          FUN_1087fbf9c(unaff_x23 + 0x13);
          FUN_1087fc210(unaff_x23 + 0x13,puVar12);
          *(undefined1 *)(unaff_x23 + 0x21) = 1;
          unaff_x23[2] = 2;
          func_0x000107c31508(unaff_x23,puVar11);
          break;
        }
      } while (((uint)pppppuStack_230 >> 1 & 1) == 0);
      func_0x000107c27fa0(puVar11,0);
      func_0x00010880a61c();
      func_0x000107c27f9c(puVar1);
      param_3 = puVar12;
      goto LAB_1088082d0;
    }
    uVar24 = param_3[7];
    in_ZR = *(char *)(param_3 + 0x26) == '\0';
    lVar25 = 0xf0;
    if ((bool)in_ZR) {
      lVar25 = 0xa8;
    }
    FUN_1086a9cbc(puVar11 + 0xde,(long)param_3 + lVar25);
    FUN_108862d6c(&pppppuStack_230,*(undefined8 *)(param_2 + 0x38),param_3 + 4,uVar24);
    func_0x000107c28998(puVar12,&pppppuStack_230);
    func_0x000107c28948(&pppppuStack_230);
    if ((*(byte *)(puVar11 + 0x7a) & 1) == 0) {
      func_0x00010880a768();
      FUN_10880876c();
      *(undefined1 *)(puVar11 + 0xd6) = 0;
      *(undefined1 *)(puVar11 + 0xdd) = 0;
      func_0x0001087fc040(&pppppuStack_230,4,7,puVar11 + 0xd6);
      func_0x00010880a3ec();
      func_0x00010880a56c();
      FUN_1087a33a8(puVar11 + 0xd6);
LAB_1088082c4:
      func_0x000107c288dc(puVar12);
      func_0x00010880a564();
      goto LAB_1088082d0;
    }
    func_0x00010880a894();
    func_0x000107c28970();
    plVar13 = puVar11 + 0xd;
    func_0x000107c29e74();
    *(int *)(param_3 + 0xa2) = (int)plVar13;
    *(undefined1 *)((long)param_3 + 0x514) = 1;
    if (puVar11[0x35] == -2) {
      param_3[0x30] = 0xfffffffffffffffe;
      *(undefined1 *)(param_3 + 0x31) = 1;
      iVar4 = *(int *)(param_3 + 0x10);
      in_ZR = iVar4 + -4 == 4;
      switch(iVar4 + -4) {
      case 0:
        uStack_218 = uStack_218 & 0xffffffff00000000;
        uStack_228 = 0;
        plStack_220 = (long *)0x0;
        pppppuStack_230 = (undefined *****)&PTR_FUN_110a95410;
        plVar13 = *(long **)(param_2 + 0x28);
        (**(code **)(*plVar13 + 0x10))();
        plStack_220 = plVar13;
        FUN_1087fa304(puVar11 + 0x111,&pppppuStack_230);
        func_0x000108809510(param_3 + 0x6e,puVar11 + 0x111);
        FUN_10891da78(puVar11 + 0x111);
        FUN_10891da78(&pppppuStack_230);
        break;
      case 1:
        break;
      case 2:
        puVar11[0xfd] = 0;
        puVar11[0xfc] = &PTR_DAT_110a95f50;
        puVar11[0xff] = 0;
        puVar11[0xfe] = 0;
        puVar11[0x101] = 0;
        puVar11[0x100] = 0;
        puVar11[0x102] = 0;
        FUN_1088094dc(param_3 + 0x73,puVar11 + 0xfc);
        FUN_10891e088(puVar11 + 0xfc);
        break;
      case 3:
        *(undefined1 *)((long)param_3 + 0x519) = 1;
        break;
      case 4:
        pppppuStack_230 = (undefined *****)&PTR_DAT_110a961d0;
        uStack_228 = 0;
        uStack_218 = 0;
        plStack_220 = (long *)0x1;
        uVar17 = 0;
        func_0x0001086cfa40();
        uStack_218 = uVar17;
        FUN_108919e8c();
        func_0x00010880a8a0(puVar11[0x8a]);
        unaff_x23 = (undefined8 *)(ulong)*(uint *)(extraout_x8_07 + 0xa8);
        in_ZR = (undefined **)puVar11[0x88] == (undefined **)0x0;
        ppuVar3 = &PTR_PTR_11326cb58;
        if (!(bool)in_ZR) {
          ppuVar3 = (undefined **)puVar11[0x88];
        }
        FUN_10865ecd8(&pppppuStack_258,ppuVar3);
        FUN_10884269c(uVar17,unaff_x23,&pppppuStack_258);
        func_0x0001087fa31c(puVar11 + 0x115,&pppppuStack_230);
        func_0x000108809544(param_3 + 0x7b,puVar11 + 0x115);
        FUN_10891e878(puVar11 + 0x115);
        func_0x000107c2a2e0(&pppppuStack_258);
        FUN_10891e878(&pppppuStack_230);
        break;
      default:
        in_ZR = iVar4 == 0x10;
        if ((bool)in_ZR) {
          FUN_108808b08(param_3);
        }
        else {
          in_ZR = iVar4 == 0x15;
          if ((bool)in_ZR) {
            FUN_108808bdc(puVar1,param_3);
          }
        }
      }
      *(undefined4 *)(param_3 + 0x32) = 1;
      func_0x00010880a768();
      FUN_108808d40();
      *(undefined1 *)(puVar11 + 0xce) = 0;
      *(undefined1 *)(puVar11 + 0xd5) = 0;
      func_0x0001087fc040(&pppppuStack_230,4,0,puVar11 + 0xce);
      func_0x00010880a3ec();
      func_0x00010880a56c();
      puVar11 = puVar11 + 0xce;
LAB_1088082b8:
      FUN_1087a33a8(puVar11);
LAB_1088082bc:
      func_0x000107c288e0(puVar1);
      goto LAB_1088082c4;
    }
    ppppppuVar15 = (undefined ******)(puVar11 + 0xb0);
    unaff_x23 = puVar11 + 0xc5;
    in_ZR = *(char *)(param_3 + 0x2f) == '\x01';
    if ((bool)in_ZR) {
      func_0x00010880a768(unaff_x23);
      FUN_108808e3c();
      *ppppppuVar15 = (undefined *****)*unaff_x23;
      do {
        func_0x00010880a428();
      } while (extraout_w10_02 != 0);
      func_0x00010880a5d4(*ppppppuVar15);
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar11 + 0x134) = 1;
        param_3 = (undefined8 *)puVar11[0xb0];
        func_0x00010880a4f4();
        lVar25 = *plVar13;
        if (lVar25 == 0) {
          func_0x000107c3a5c0();
          lVar25 = *plVar13;
        }
        plVar19 = param_3 + 2;
        do {
          if (*plVar19 == 0) {
            func_0x00010880a480();
            plVar19 = extraout_x8_04;
            uVar21 = extraout_w10_04;
            uVar17 = extraout_x11_02;
          }
          else {
            func_0x00010880a774();
            plVar19 = extraout_x8_03;
            uVar21 = extraout_w10_03;
            uVar17 = extraout_x11_01;
          }
          if ((uVar17 & 1) != 0) {
            func_0x00010880a758();
            if ((bool)in_ZR) {
              func_0x00010880a490();
              func_0x00010880a438();
              func_0x00010880a40c();
              param_3[0x12] = plVar13;
            }
            func_0x00010880a748();
            *(long *)(extraout_x8_08 + 0x20) = lVar25;
            goto LAB_108807d7c;
          }
        } while ((uVar21 >> 1 & 1) == 0);
      }
      FUN_1087b3548();
      param_3 = (undefined8 *)(ulong)*(uint *)ppppppuVar15;
      func_0x00010880a634();
      func_0x000107c27f9c(unaff_x23);
LAB_108808290:
      *(undefined1 *)(puVar11 + 0xe6) = 0;
      *(undefined1 *)(puVar11 + 0xed) = 0;
      func_0x0001087fc040(&pppppuStack_230,4,param_3,puVar11 + 0xe6);
      func_0x00010880a3ec();
      func_0x00010880a56c();
      puVar11 = puVar11 + 0xe6;
      goto LAB_1088082b8;
    }
    *(undefined1 *)(puVar11 + 0xee) = 0;
    *(undefined1 *)(puVar11 + 0xf4) = 0;
    FUN_108809120(puVar11 + 0xee,*(undefined4 *)(param_2 + 0xdc),*(undefined4 *)(param_2 + 0xf4),
                  *(undefined4 *)(param_3 + 0xa7));
    plVar13 = *(long **)(param_2 + 0x48);
    (**(code **)(*plVar13 + 0x50))
              (puVar11 + 4,plVar13,param_3 + 4,puVar11 + 0xde,puVar11 + 0x85,puVar11 + 0xee);
    puVar23 = puVar11 + 0xf5;
    *puVar23 = puVar11[4];
    do {
      func_0x00010880a428();
    } while (extraout_w10_05 != 0);
    func_0x00010880a5d4(*puVar23);
    if ((extraout_w8_02 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar11 + 0x134) = 2;
      param_3 = (undefined8 *)puVar11[0xf5];
      func_0x00010880a4f4();
      lVar25 = *plVar13;
      if (lVar25 == 0) {
        func_0x000107c3a5c0();
        lVar25 = *plVar13;
      }
      plVar19 = param_3 + 2;
      do {
        if (*plVar19 != 0) {
          func_0x00010880a774();
          plVar19 = extraout_x8_05;
          uVar21 = extraout_w10_06;
          if ((extraout_x11_03 & 1) == 0) goto LAB_108807b78;
LAB_108807d54:
          func_0x00010880a758();
          if ((bool)in_ZR) {
            func_0x00010880a490();
            func_0x00010880a438();
            func_0x00010880a40c();
            param_3[0x12] = plVar13;
          }
          func_0x00010880a748();
          *(long *)(extraout_x8_09 + 0x20) = lVar25;
LAB_108807d7c:
          *(char *)(param_3[0x12] + 1) = *(char *)(param_3[0x12] + 1) + '\x01';
          puVar23 = param_3;
LAB_108807a24:
          puVar23[2] = 0;
          goto LAB_1088082dc;
        }
        func_0x00010880a480();
        plVar19 = extraout_x8_06;
        uVar21 = extraout_w10_07;
        if ((extraout_x11_04 & 1) != 0) goto LAB_108807d54;
LAB_108807b78:
      } while ((uVar21 >> 1 & 1) == 0);
    }
    func_0x00010880a5d4(*puVar23);
    param_3 = (undefined8 *)*puVar23;
    if ((extraout_w8_03 >> 5 & 1) == 0) {
      *(undefined1 *)(puVar11 + 0xb0) = 0;
      *(undefined4 *)(puVar11 + 0xba) = 0xffffffff;
      func_0x00010880a63c();
      uVar21 = *(uint *)(param_3 + 0x1d);
      if (uVar21 != 0xffffffff) {
        pppppuStack_230 = (undefined *****)ppppppuVar15;
        (*(code *)(&PTR_FUN_110a73658)[uVar21])(&pppppuStack_230,param_3 + 0x13);
        *(uint *)(puVar11 + 0xba) = uVar21;
      }
      param_3 = puVar23;
      func_0x000107c27f9c(puVar23);
      func_0x00010880a594();
      in_ZR = *(int *)(puVar11 + 0xba) == 1;
      if ((bool)in_ZR) {
        FUN_10877cff0(puVar11 + 0xbb,ppppppuVar15);
        if (*(char *)(puVar11[0x133] + 0x4d0) == '\x01') {
          func_0x00010880a810();
        }
        else {
          func_0x00010880a804();
        }
        func_0x00010880a6e8();
        bVar6 = *(byte *)(puVar11 + 0xb7);
        iVar4 = *(int *)(puVar11 + 0xb9);
        lVar25 = puVar11[0xb8];
        plVar13 = (long *)(lVar25 + 0x38);
        if ((bVar6 & iVar4 == 0xd) == 0) {
          plVar13 = puVar11 + 0xb6;
        }
        lVar22 = *plVar13;
        lVar20 = lVar22 - puVar11[0x35];
        if (lVar20 < 2) {
          uVar21 = 3;
          if (lVar22 != puVar11[0x35]) {
            uVar21 = 4;
          }
          uVar2 = 2;
          if (lVar20 != 1) {
            uVar2 = uVar21;
          }
          uVar17 = (ulong)uVar2;
        }
        else {
          uVar17 = 1;
        }
        if ((uint)bVar6 == (*(uint *)(puVar11 + 0xb2) & 2) >> 1) {
          func_0x00010880a880();
          puVar11[6] = extraout_x12;
          puVar11[7] = 0;
          puVar11[8] = extraout_x8_11;
          puVar11[9] = 0;
          func_0x00010880a780();
          func_0x00010880a874(&pppppuStack_258);
          uVar17 = uStack_250;
          ppppppuVar15 = (undefined ******)pppppuStack_258;
          if (-1 < (long)uStack_248) {
            uVar17 = uStack_248 >> 0x38;
            ppppppuVar15 = &pppppuStack_258;
          }
          func_0x00010bd3f434(&pppppuStack_230,ppppppuVar15,uVar17,&UNK_10f4bbca9);
          ppppppuVar15 = (undefined ******)pppppuStack_230;
          if (-1 < (long)plStack_220) {
            ppppppuVar15 = &pppppuStack_230;
          }
          func_0x00010880a6f8(ppppppuVar15);
          goto LAB_10880841c;
        }
        *(undefined1 *)(puVar11 + 0xc5) = 0;
        *(undefined1 *)(puVar11 + 0xcd) = 0;
        lVar20 = puVar11[0x133];
        if (bVar6 == 0) {
          uVar18 = uVar17;
          func_0x00010880a8dc(puVar11[0xb4]);
          uVar26 = (ulong)*(uint *)(uVar18 + 0x38);
          *(uint *)(lVar20 + 0x194) = *(uint *)(uVar18 + 0x38);
          puVar14 = unaff_x23;
          FUN_1086819f0(unaff_x23);
          func_0x00010880a8b4();
          (*extraout_x8_10)();
          plStack_220 = (long *)0x0;
          uStack_218 = 0;
          pppppuStack_230 = (undefined *****)&PTR_FUN_110a609a8;
          uStack_228 = 0;
          lStack_210 = CONCAT44(lStack_210._4_4_,0x1b0);
          func_0x00010880a6bc();
          func_0x00010880a81c();
          ppppppuVar15 = &pppppuStack_230;
          func_0x000107c28824(ppppppuVar15,puVar11 + 0x12f,puVar14);
          ppppppuVar16 = ppppppuVar15;
          func_0x00010880a69c();
          func_0x00010880a828();
          func_0x000107c28824(ppppppuVar15,puVar11 + 300,ppppppuVar16);
          FUN_1087ceb70(uVar26);
          FUN_1087b95a0(ppppppuVar15,uVar26);
          func_0x00010880a66c();
          func_0x00010880a610(*(undefined4 *)(puVar11[0x133] + 0x52c));
          func_0x000107c28818(ppppppuVar15,puVar11 + 0x129);
          func_0x000107c2884c(puVar23,ppppppuVar15);
          lVar25 = puVar11[0x133];
          func_0x00010880a664();
          func_0x00010880a694();
          func_0x00010880a6ac();
          func_0x000107c2882c(&pppppuStack_230);
          if ((*(ulong *)(lVar25 + 0x510) >> 0x20 & 1) != 0) {
            func_0x00010880a394();
            func_0x000107c29054(puVar23);
          }
          plVar13 = *(long **)(puVar11[0x132] + 0x98);
          func_0x000107c2884c(puVar11 + 0x108,puVar23);
          (**(code **)(*plVar13 + 0x50))(plVar13,puVar11 + 0x108);
          func_0x00010880a64c();
          func_0x000107c2882c(puVar23);
LAB_1088081d8:
          FUN_1087a47ec(uVar17,unaff_x23,puVar11[0x132] + 0xb8);
          uVar21 = 7;
          if (0xff < ((uint)uVar17 & 0xffff)) {
            uVar21 = 3;
          }
          in_ZR = bVar6 == 0;
          uVar2 = 0;
          if ((bool)in_ZR) {
            uVar2 = uVar21;
          }
          param_3 = (undefined8 *)(ulong)uVar2;
          bVar8 = true;
          if ((uVar17 & 1) != 0) {
            plVar13 = *(long **)(puVar11[0x132] + 0x88);
            pppppuStack_230 = (undefined *****)CONCAT26(pppppuStack_230._6_2_,0x100120099);
            func_0x000107c27994(&uStack_228,puVar11[0x133] + 0x20);
            pppuStack_1f0 = appuStack_208;
            appuStack_208[0] = &PTR_FUN_110a73678;
            uStack_1e8 = 0;
            lStack_210 = lVar22;
            (**(code **)(*plVar13 + 0x28))(plVar13,&pppppuStack_230);
            func_0x0001086cf1c0(&pppppuStack_230);
            bVar8 = true;
          }
        }
        else {
          if (iVar4 == 0xd) {
            uVar24 = puVar11[0x132];
            FUN_108809380(lVar20 + 0x20);
            *(long *)(lVar20 + 0x180) = lVar22;
            *(undefined1 *)(lVar20 + 0x188) = 1;
            FUN_1088093ac(uVar24,lVar20,uVar17);
            goto LAB_1088081d8;
          }
          iVar5 = *(int *)(lVar20 + 0x80);
          if (iVar5 == 8) {
            bVar9 = false;
            bVar8 = false;
            bVar10 = iVar4 != 8;
          }
          else if (iVar5 == 6) {
            bVar8 = false;
            bVar10 = false;
            bVar9 = iVar4 != 7;
          }
          else if (iVar5 == 4) {
            bVar9 = false;
            bVar10 = false;
            bVar8 = iVar4 != 6;
          }
          else {
            bVar9 = false;
            bVar8 = false;
            bVar10 = false;
          }
          in_ZR = (int)uVar17 == 2;
          if ((!(bool)in_ZR) || ((bVar9 == false && bVar8 == false) && bVar10 == false)) {
            FUN_108809380(lVar20 + 0x20);
            *(undefined8 *)(lVar20 + 0x180) = puVar11[0xb6];
            *(undefined1 *)(lVar20 + 0x188) = 1;
            if (iVar4 == 8) {
              func_0x0001087fa31c(puVar11 + 0x10d,lVar25);
              func_0x00010880a834(puVar11[0x133]);
              func_0x00010880a6f0();
            }
            else if (iVar4 == 7) {
              func_0x0001087fa310(puVar23,lVar25);
              FUN_1088094dc(puVar11[0x133] + 0x398,puVar23);
              FUN_10891e088(puVar23);
            }
            else if (iVar4 == 6) {
              FUN_1087fa304(puVar11 + 0x119,lVar25);
              func_0x00010880a840(puVar11[0x133]);
              func_0x00010880a708();
            }
            else {
              iVar4 = *(int *)(lVar20 + 0x80);
              if (iVar4 == 7) {
                *(undefined1 *)(puVar11[0x133] + 0x519) = 1;
              }
              else if (iVar4 == 0x15) {
                FUN_108808bdc(puVar1,puVar11[0x133]);
              }
              else if (iVar4 == 0x14) {
                func_0x00010880a6cc();
                uStack_228 = 0;
                plStack_220 = (long *)(CONCAT71((int7)((ulong)plStack_220 >> 8),extraout_w8) &
                                      0xffffffff);
                pppppuStack_230 = (undefined *****)extraout_x9;
                func_0x0001087fa334(puVar11 + 0x126,&pppppuStack_230);
                if (*(char *)(puVar11[0x133] + 0x448) == '\x01') {
                  func_0x00010880a7b0();
                }
                else {
                  func_0x00010880a7a4();
                }
                func_0x00010880a644();
                FUN_108920dbc(&pppppuStack_230);
              }
              else if (iVar4 == 0x10) {
                FUN_108808b08(puVar11[0x133]);
              }
            }
            func_0x00010880a8f0();
            FUN_1088093ac();
            goto LAB_1088081d8;
          }
          uStack_248 = 0;
          uStack_240 = 0;
          pppppuStack_258 = (undefined *****)&PTR_FUN_110a6f328;
          uStack_250 = 0;
          uStack_238 = 5;
          func_0x00010880a600();
          ppppppuVar15 = &pppppuStack_258;
          FUN_1087915bc(ppppppuVar15,puVar11 + 0x123,bVar8);
          func_0x00010880a5e8();
          FUN_1087915bc(ppppppuVar15,puVar11 + 0x120,bVar9);
          func_0x00010880a738();
          FUN_1087915bc(ppppppuVar15,puVar11 + 0x11d,bVar10);
          FUN_108791a34(&pppppuStack_230,ppppppuVar15);
          lVar25 = puVar11[0x132];
          func_0x00010880a720();
          func_0x00010880a5e0();
          func_0x00010880a5f8();
          FUN_108788618(&pppppuStack_258);
          plVar13 = *(long **)(lVar25 + 0x98);
          FUN_108791a34(puVar11 + 0x103,&pppppuStack_230);
          (**(code **)(*plVar13 + 0x60))(plVar13,puVar11 + 0x103);
          func_0x00010880a710();
          FUN_108788618(&pppppuStack_230);
          pppppuStack_230 = (undefined *****)0x700000004;
          uStack_228 = uStack_228 & 0xffffffffffffff00;
          pppuStack_1f0 = (undefined ***)((ulong)pppuStack_1f0 & 0xffffffffffffff00);
          uStack_1e8 = 0;
          uStack_1e4 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          func_0x00010880a3ec();
          func_0x00010880a56c();
          param_3 = (undefined8 *)0x0;
          bVar8 = false;
        }
        func_0x000107c29564(unaff_x23);
      }
      else {
        if (*(int *)(puVar11 + 0xba) != 0) {
          func_0x00010563ab98();
          goto LAB_10880841c;
        }
        func_0x00010880a8f0();
        FUN_1088091e4();
        bVar8 = true;
      }
      func_0x00010880a63c();
      func_0x00010880a574();
      if (bVar8) goto LAB_108808290;
      goto LAB_1088082bc;
    }
  }
  __ZNSt13exception_ptrC1ERKS_(unaff_x23,param_3 + 3);
  __ZSt17rethrow_exceptionSt13exception_ptr();
LAB_10880841c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x108808420);
  (*pcVar7)();
}



/* Entry: 10880876c; end: 10880886f;  */

void FUN_10880876c(void)

{
  long unaff_x19;
  long *plVar1;
  long unaff_x20;
  
  func_0x00010880a3b0();
  func_0x00010880a468();
  func_0x00010880a7f0();
  func_0x00010880a534();
  func_0x00010880a458();
  func_0x00010880a7e0();
  func_0x00010880a79c();
  FUN_1087b95a0();
  func_0x00010880a3f8();
  func_0x00010880a610(*(undefined4 *)(unaff_x20 + 0x52c));
  func_0x00010880a520();
  func_0x00010880a68c();
  func_0x00010880a52c();
  func_0x00010880a4b8();
  func_0x00010880a540();
  func_0x00010880a7e8();
  if ((*(ulong *)(unaff_x20 + 0x510) >> 0x20 & 1) != 0) {
    func_0x00010880a394();
    func_0x00010880a684();
  }
  plVar1 = *(long **)(unaff_x19 + 0x98);
  func_0x00010880a514();
  func_0x00010880a500(*(undefined8 *)(*plVar1 + 0x50));
  func_0x00010880a50c();
  func_0x00010880a67c();
  return;
}



/* Entry: 108808870; end: 108808b07;  */

void FUN_108808870(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                  long param_5)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint extraout_w8;
  undefined8 extraout_x8;
  ulong uVar9;
  long *plVar10;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long lVar11;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar12;
  long lStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_68;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  plVar8 = param_3;
  func_0x00010880a4a0();
  puVar5 = (undefined8 *)0xb8;
  uStack_48 = extraout_x8;
  __Znwm();
  *puVar5 = FUN_108809858;
  puVar5[1] = FUN_10880991c;
  func_0x0001087fbde0(puVar5 + 2);
  plVar6 = puVar5 + 2;
  FUN_1087fbd64(param_1,plVar6);
  *(undefined4 *)(param_3 + 0xa2) = param_4;
  *(undefined1 *)((long)param_3 + 0x514) = 1;
  uVar4 = param_5 == -2;
  if ((bool)uVar4) {
    param_3[0x30] = -2;
    *(undefined1 *)(param_3 + 0x31) = 1;
    *(undefined4 *)(param_3 + 0x32) = 0;
    func_0x00010880a894();
    FUN_108808d40();
    lStack_b8 = 4;
    uStack_b0 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    func_0x00010880a550();
    func_0x00010880a7c4();
  }
  else {
    FUN_1086a0454(puVar5 + 4,param_3 + 0x27);
    uVar4 = false;
    if (*(int *)(puVar5 + 0xb) == 9) {
      puVar7 = puVar5 + 4;
      func_0x0001087fa420();
      uVar9 = puVar7[3];
      uVar4 = (uVar9 & 1) == 0;
      puVar1 = puVar7 + 3;
      if (!(bool)uVar4) {
        puVar1 = (ulong *)(uVar9 + 7);
      }
      for (lVar11 = (long)*(int *)(puVar7 + 4) << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
        *(long *)(*puVar1 + 0x18) = param_5;
        puVar1 = puVar1 + 1;
      }
    }
    FUN_1086a7d80(&lStack_b8,puVar5 + 4);
    plVar8 = &lStack_b8;
    FUN_1088054d4(param_3 + 0x27);
    plVar6 = &lStack_b8;
    func_0x0001086a78b0();
    func_0x00010880a894(puVar5 + 0x15);
    FUN_108808e3c();
    puVar5[0x14] = puVar5[0x15];
    do {
      func_0x00010880a428();
    } while (extraout_w10 != 0);
    func_0x00010880a5d4(puVar5[0x14]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x16) = 0;
      lVar11 = puVar5[0x14];
      func_0x00010880a728();
      if (*plVar6 == 0) {
        func_0x000107c3a5c0();
      }
      plVar10 = (long *)(lVar11 + 0x10);
      do {
        if (*plVar10 == 0) {
          func_0x00010880a480();
          plVar10 = extraout_x8_01;
          uVar3 = extraout_w10_01;
          uVar12 = extraout_w11_00;
        }
        else {
          func_0x00010880a774();
          plVar10 = extraout_x8_00;
          uVar3 = extraout_w10_00;
          uVar12 = extraout_w11;
        }
        if ((uVar12 & 1) != 0) {
          func_0x00010880a8c8();
          if ((bool)uVar4) {
            func_0x00010880a490();
            func_0x00010880a654();
            func_0x00010880a5b4();
          }
          func_0x00010880a4c8();
          goto LAB_108808a58;
        }
      } while ((uVar3 >> 1 & 1) == 0);
    }
    puVar7 = puVar5 + 0x14;
    FUN_1087b3548();
    uVar2 = *(undefined4 *)puVar7;
    func_0x00010880a718();
    func_0x00010880a5ac();
    *(undefined1 *)(puVar5 + 0xc) = 0;
    *(undefined1 *)(puVar5 + 0x13) = 0;
    plVar8 = (long *)0x4;
    func_0x0001087fc040(&lStack_b8,4,uVar2,puVar5 + 0xc);
    func_0x00010880a550();
    func_0x00010880a7c4();
    plVar6 = puVar5 + 0xc;
    FUN_1087a33a8(plVar6);
    func_0x00010880a5a4();
  }
  while( true ) {
    func_0x00010880a478();
    func_0x00010880a4b0();
LAB_108808a58:
    func_0x00010880a3d8(uStack_48);
    if ((bool)uVar4) break;
    ___stack_chk_fail();
    if ((int)plVar8 != 0) goto LAB_108808aac;
    do {
      func_0x00010880a794();
LAB_108808aac:
      func_0x000104bd46a0(plVar6);
    } while ((int)plVar8 == 0);
    func_0x00010880a5a4();
    func_0x00010880a624();
    func_0x00010880a548();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 108808b08; end: 108808bdb;  */

void FUN_108808b08(long param_1)

{
  undefined **ppuVar1;
  undefined1 auStack_70 [40];
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuStack_48 = &PTR_DAT_110a95b40;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  ppuVar1 = *(undefined ***)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x80) != 0x10) {
    ppuVar1 = &PTR_PTR_113286d10;
  }
  if (((ulong)ppuVar1[2] & 1) != 0) {
    FUN_1086a56dc(&ppuStack_48);
    FUN_108920068();
  }
  func_0x0001087fa328(auStack_70,&ppuStack_48);
  if (*(char *)(param_1 + 0x428) == '\x01') {
    FUN_1086a84b8(param_1 + 0x400,auStack_70);
  }
  else {
    FUN_1086a845c(param_1 + 0x400,auStack_70);
  }
  FUN_108920280(auStack_70);
  FUN_108920280(&ppuStack_48);
  return;
}



/* Entry: 108808bdc; end: 108808d3f;  */

void FUN_108808bdc(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined1 auStack_98 [40];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  byte bStack_38;
  undefined **ppuStack_30;
  undefined4 uStack_28;
  
  ppuVar1 = *(undefined ***)(param_2 + 0x78);
  if (*(int *)(param_2 + 0x80) != 0x15) {
    ppuVar1 = &PTR_PTR_113284300;
  }
  FUN_108920f24(auStack_48,0,ppuVar1);
  ppuStack_70 = &PTR_DAT_110a960e0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  func_0x00010880a8a0(*(undefined8 *)(param_1 + 0x78));
  func_0x000108809578(&ppuStack_70);
  FUN_108910b14();
  if ((bStack_38 & 1) != 0) {
    pppuVar2 = &ppuStack_70;
    func_0x000108809578();
    pppuVar2 = pppuVar2 + 2;
    FUN_1086eb4c4();
    pppuVar3 = pppuVar2;
    FUN_1086eb480();
    ppuVar1 = &PTR_PTR_113386730;
    if (ppuStack_30 != (undefined **)0x0) {
      ppuVar1 = ppuStack_30;
    }
    pppuVar3[2] = (undefined **)ppuVar1[8];
    *(undefined4 *)(pppuVar2 + 4) = uStack_28;
  }
  func_0x0001087fa340(auStack_98,&ppuStack_70);
  if (*(char *)(param_2 + 0x478) == '\x01') {
    FUN_1086a86c4(param_2 + 0x450,auStack_98);
  }
  else {
    FUN_1086a8668(param_2 + 0x450,auStack_98);
  }
  FUN_10892115c(auStack_98);
  FUN_10892115c(&ppuStack_70);
  FUN_108920f80(auStack_48);
  return;
}



/* Entry: 108808d40; end: 108808e3b;  */

void FUN_108808d40(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long *plVar2;
  long unaff_x20;
  undefined1 auStack_b0 [128];
  
  func_0x00010880a3b0();
  func_0x00010880a468();
  func_0x00010880a7f0();
  func_0x00010880a534();
  uVar1 = param_1;
  func_0x00010880a458();
  func_0x00010880a7e0();
  func_0x000107c28824(param_1,auStack_b0,uVar1);
  FUN_1087b95a0();
  func_0x00010880a3f8();
  func_0x00010880a610(*(undefined4 *)(unaff_x20 + 0x52c));
  func_0x00010880a520();
  func_0x00010880a68c();
  func_0x00010880a52c();
  func_0x00010880a4b8();
  func_0x00010880a540();
  func_0x00010880a7e8();
  if ((*(ulong *)(unaff_x20 + 0x510) >> 0x20 & 1) != 0) {
    func_0x00010880a394();
    func_0x00010880a684();
  }
  plVar2 = *(long **)(unaff_x19 + 0x98);
  func_0x00010880a514();
  func_0x00010880a500(*(undefined8 *)(*plVar2 + 0x50));
  func_0x00010880a50c();
  func_0x00010880a67c();
  return;
}


