/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10527b070; end: 10527b277;  */

undefined8 * FUN_10527b070(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *unaff_x20;
  long *plVar8;
  int iVar9;
  long lVar10;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined4 uStack_100;
  undefined8 uStack_e8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long alStack_68 [2];
  undefined8 uStack_58;
  
  lVar10 = param_3;
  func_0x000100b9dac4();
  func_0x00010527ba84();
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  plVar8 = (long *)(lVar10 + 0x18);
  pcVar1 = (char *)(lVar10 + 0x20);
  uStack_58 = extraout_x8;
  for (lVar10 = *(long *)(lVar10 + 0x10) << 4; lVar10 != 0; lVar10 = lVar10 + -0x10) {
    if (*pcVar1 == '\t') {
      func_0x000100676930(auStack_b8,*(undefined8 *)(*(long *)(pcVar1 + -8) + 0x10));
      FUN_10527b278(&uStack_a0,auStack_b8);
      func_0x00010527bc0c();
    }
    pcVar1 = pcVar1 + 0x10;
  }
  func_0x0001005d4650(unaff_x20 + 4);
  func_0x0001003a9204(auStack_b8);
  lVar10 = 0xe8;
  __Znwm(0xe8);
  func_0x00010527c22c();
  func_0x00010527c218();
  FUN_105279eac();
  FUN_105279e3c(alStack_68,lVar10 + 0x18,lVar10);
  lVar10 = unaff_x20[8];
  unaff_x20[8] = alStack_68[0];
  FUN_10527588c(lVar10);
  FUN_10527588c(0);
  func_0x00010527bc0c();
  plVar2 = plVar8 + *(long *)(param_3 + 0x10) * 2;
  iVar9 = 1;
  for (; uVar3 = plVar8 == plVar2, !(bool)uVar3; plVar8 = plVar8 + 2) {
    if ((char)plVar8[1] == '\t') {
      for (lVar10 = *(long *)(*plVar8 + 0x10) << 4; lVar10 != 0; lVar10 = lVar10 + -0x10) {
        func_0x00010527c184(unaff_x20[8]);
        iVar9 = iVar9 + 1;
      }
    }
    else {
      FUN_10527a37c(unaff_x20[8],iVar9,plVar8);
      iVar9 = iVar9 + 1;
    }
  }
  FUN_10527a560();
  puVar4 = &uStack_a0;
  func_0x00010527b690();
  func_0x00010527ba10(uStack_58);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    puVar5 = &uStack_a0;
    func_0x00010527b690();
    func_0x00010527bb70();
    func_0x00010527c2b8();
    FUN_10527b2f4();
    func_0x00010527ba84();
    uStack_100 = 0xd;
    puVar7 = puVar5;
    uStack_e8 = extraout_x8_00;
    func_0x0001005d4650();
    puStack_110 = puVar5;
    puStack_108 = puVar7;
    FUN_10527b354(puVar4,&puStack_110);
    func_0x00010527ba10(uStack_e8);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      func_0x00010527bccc();
      lVar10 = 0x28;
      __Znwm();
      FUN_10527b5ac();
      FUN_10527b578(lVar10 + 8,unaff_x20);
      lVar6 = *unaff_x20;
      *unaff_x20 = lVar10;
      if (lVar6 != 0) {
        func_0x00010527bae8();
      }
      return (undefined8 *)(lVar10 + 0x10);
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10527b278; end: 10527b2f3;  */

long FUN_10527b278(void)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00010527c2b8();
  FUN_10527b2f4();
  func_0x00010527ba84();
  func_0x0001005d4650();
  FUN_10527b354();
  func_0x00010527ba10(extraout_x8);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x00010527bccc();
  lVar1 = 0x28;
  __Znwm();
  FUN_10527b5ac();
  FUN_10527b578(lVar1 + 8,unaff_x20);
  lVar2 = *unaff_x20;
  *unaff_x20 = lVar1;
  if (lVar2 != 0) {
    func_0x00010527bae8();
  }
  return lVar1 + 0x10;
}



/* Entry: 10527b2f4; end: 10527b353;  */

long FUN_10527b2f4(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  func_0x00010527bccc();
  lVar1 = 0x28;
  __Znwm();
  FUN_10527b5ac();
  FUN_10527b578(lVar1 + 8);
  lVar2 = *unaff_x20;
  *unaff_x20 = lVar1;
  if (lVar2 != 0) {
    func_0x00010527bae8();
  }
  return lVar1 + 0x10;
}



/* Entry: 10527b354; end: 10527b397;  */

undefined8 * FUN_10527b354(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1 = puVar1 + 4;
  }
  else {
    puVar1 = param_1;
    FUN_10527b398();
  }
  param_1[1] = puVar1;
  return puVar1 + -4;
}



/* Entry: 10527b398; end: 10527b427;  */

long FUN_10527b398(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x000100b9dac4();
  FUN_10527b428();
  FUN_10527b4ac(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 5,unaff_x19 + 2);
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar2;
  puStack_38[3] = uVar4;
  puStack_38[2] = uVar3;
  puStack_38 = puStack_38 + 4;
  func_0x000100b9dd30();
  FUN_10527b468();
  lVar1 = unaff_x19[1];
  FUN_10527b528(auStack_48);
  return lVar1;
}



/* Entry: 10527b428; end: 10527b467;  */

ulong FUN_10527b428(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 >> 0x3b == 0) {
    uVar1 = param_1[2] - *param_1 >> 4;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x7ffffffffffffff;
    }
    return uVar1;
  }
  FUN_10527b4a0();
  func_0x00010054d294();
  uVar1 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(uVar1);
  func_0x000100b9de8c();
  return uVar1;
}



/* Entry: 10527b468; end: 10527b49f;  */

void FUN_10527b468(long *param_1,long param_2)

{
  func_0x00010054d294();
  _memcpy(*(long *)(param_2 + 8) - (param_1[1] - *param_1));
  func_0x000100b9de8c();
  return;
}



/* Entry: 10527b4a0; end: 10527b4ab;  */

void FUN_10527b4a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010527bb84();
  func_0x000100b9dbcc();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010527b4ec();
  }
  lVar1 = param_4 + unaff_x20 * 0x20;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x20;
  return;
}



/* Entry: 10527b4ac; end: 10527b50b;  */

void FUN_10527b4ac(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000100b9dbcc();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010527b4ec();
  }
  lVar1 = param_4 + unaff_x20 * 0x20;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x20;
  return;
}



/* Entry: 10527b50c; end: 10527b527;  */

long * FUN_10527b50c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_2 << 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10527b554();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10527b528; end: 10527b553;  */

long * FUN_10527b528(long *param_1)

{
  FUN_10527b554();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10527b554; end: 10527b577;  */

void FUN_10527b554(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x20;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10527b578; end: 10527b5ab;  */

long * FUN_10527b578(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    func_0x00010527bae8();
  }
  return param_1;
}



/* Entry: 10527b5ac; end: 10527b5df;  */

void FUN_10527b5ac(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010527c2a4();
  *param_1 = extraout_x8;
  param_1[1] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2);
  return;
}



/* Entry: 10527b5e0; end: 10527b60f;  */

undefined8 * FUN_10527b5e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873720;
  FUN_10527b640(param_1 + 1);
  return param_1;
}



/* Entry: 10527b610; end: 10527b613;  */

void FUN_10527b610(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x00010527c2a4();
  *param_1 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
  *unaff_x19 = &PTR_FUN_110873720;
  FUN_10527b640(unaff_x19 + 1);
  return;
}



/* Entry: 10527b614; end: 10527b627;  */

void FUN_10527b614(void)

{
  func_0x00010527b668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527b628; end: 10527b62b;  */

undefined8 * FUN_10527b628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873720;
  FUN_10527b640(param_1 + 1);
  return param_1;
}



/* Entry: 10527b62c; end: 10527b63f;  */

void FUN_10527b62c(void)

{
  FUN_10527b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527b640; end: 10527b6df;  */

void FUN_10527b640(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010045db50();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x00010527bae8();
  }
  return;
}



/* Entry: 10527b6e0; end: 10527b6f7;  */

void FUN_10527b6e0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10527b6f8; end: 10527b71b;  */

void FUN_10527b6f8(void)

{
  func_0x00010527bc98();
  FUN_10527b71c();
  return;
}



/* Entry: 10527b71c; end: 10527b7b7;  */

void FUN_10527b71c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10527b7b8; end: 10527b88b;  */

void FUN_10527b7b8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  int extraout_w11;
  int extraout_w12;
  undefined8 *unaff_x19;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [7];
  undefined8 uStack_28;
  
  func_0x00010527ba24(param_1,param_1);
  uStack_28 = extraout_x8;
  func_0x00010527aadc(alStack_60);
  if (alStack_60[0] != 0) {
    do {
      func_0x00010527bba8();
    } while (extraout_w11 != 0);
  }
  if ((*(long *)(param_2 + 0x18) != 0) && (*(long *)(*(long *)(param_2 + 0x18) + 0x10) != 0)) {
    do {
      func_0x00010527bb40();
    } while (extraout_w12 != 0);
  }
  func_0x00010527be80();
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x00010527c004();
  func_0x00010527bd0c();
  func_0x00010527bd9c();
  func_0x00010527ba38();
  FUN_10527b88c(&uStack_70);
  func_0x00010527bad8();
  func_0x00010527bf24();
  func_0x00010527ba10(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527bc44();
    func_0x00010527bd9c();
    func_0x00010527ba38();
    FUN_10527b88c(&uStack_70);
    func_0x00010527bf24();
    func_0x00010527bb70();
    func_0x00010527bc5c();
    func_0x000104bddf60(*unaff_x19);
    return;
  }
  return;
}



/* Entry: 10527b88c; end: 10527b8a7;  */

void FUN_10527b88c(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010527bc5c();
  func_0x000104bddf60(*unaff_x19);
  return;
}



/* Entry: 10527b8a8; end: 10527b92f;  */

undefined8 * FUN_10527b8a8(undefined8 param_1,long param_2)

{
  char *pcVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *unaff_x20;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined4 uStack_100;
  undefined8 uStack_e8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long alStack_68 [2];
  undefined8 uStack_58;
  
  lVar10 = *(long *)(param_2 + 0x10);
  lVar9 = lVar10;
  func_0x000100b9dac4(param_1,*(undefined8 *)(param_2 + 0x18));
  func_0x00010527ba84();
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  plVar7 = (long *)(lVar9 + 0x18);
  pcVar1 = (char *)(lVar9 + 0x20);
  uStack_58 = extraout_x8;
  for (lVar9 = *(long *)(lVar9 + 0x10) << 4; lVar9 != 0; lVar9 = lVar9 + -0x10) {
    if (*pcVar1 == '\t') {
      func_0x000100676930(auStack_b8,*(undefined8 *)(*(long *)(pcVar1 + -8) + 0x10));
      FUN_10527b278(&uStack_a0,auStack_b8);
      func_0x00010527bc0c();
    }
    pcVar1 = pcVar1 + 0x10;
  }
  func_0x0001005d4650(unaff_x20 + 4);
  func_0x0001003a9204(auStack_b8);
  lVar9 = 0xe8;
  __Znwm(0xe8);
  func_0x00010527c22c();
  func_0x00010527c218();
  FUN_105279eac();
  FUN_105279e3c(alStack_68,lVar9 + 0x18,lVar9);
  lVar9 = unaff_x20[8];
  unaff_x20[8] = alStack_68[0];
  FUN_10527588c(lVar9);
  FUN_10527588c(0);
  func_0x00010527bc0c();
  plVar2 = plVar7 + *(long *)(lVar10 + 0x10) * 2;
  iVar8 = 1;
  for (; uVar3 = plVar7 == plVar2, !(bool)uVar3; plVar7 = plVar7 + 2) {
    if ((char)plVar7[1] == '\t') {
      for (lVar10 = *(long *)(*plVar7 + 0x10) << 4; lVar10 != 0; lVar10 = lVar10 + -0x10) {
        func_0x00010527c184(unaff_x20[8]);
        iVar8 = iVar8 + 1;
      }
    }
    else {
      FUN_10527a37c(unaff_x20[8],iVar8,plVar7);
      iVar8 = iVar8 + 1;
    }
  }
  FUN_10527a560();
  puVar4 = &uStack_a0;
  func_0x00010527b690();
  func_0x00010527ba10(uStack_58);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    puVar5 = &uStack_a0;
    func_0x00010527b690();
    func_0x00010527bb70();
    func_0x00010527c2b8();
    FUN_10527b2f4();
    func_0x00010527ba84();
    uStack_100 = 0xd;
    puVar6 = puVar5;
    uStack_e8 = extraout_x8_00;
    func_0x0001005d4650();
    puStack_110 = puVar5;
    puStack_108 = puVar6;
    FUN_10527b354(puVar4,&puStack_110);
    func_0x00010527ba10(uStack_e8);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      func_0x00010527bccc();
      lVar10 = 0x28;
      __Znwm();
      FUN_10527b5ac();
      FUN_10527b578(lVar10 + 8,unaff_x20);
      lVar9 = *unaff_x20;
      *unaff_x20 = lVar10;
      if (lVar9 != 0) {
        func_0x00010527bae8();
      }
      return (undefined8 *)(lVar10 + 0x10);
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10527b930; end: 10527b953;  */

void FUN_10527b930(long param_1)

{
  func_0x00010045db50();
  if (param_1 != 0) {
    func_0x0001003a916c();
  }
  return;
}



/* Entry: 10527b954; end: 10527b96f;  */

void FUN_10527b954(void)

{
  return;
}



/* Entry: 10527b970; end: 10527b9a3;  */

void FUN_10527b970(long *param_1,long param_2)

{
  func_0x00010028bb78();
  *(undefined2 *)(param_1 + 1) = 5;
  *param_1 = param_2 / 1000000;
  return;
}



/* Entry: 10527b9a4; end: 10527b9bf;  */

void FUN_10527b9a4(void)

{
  return;
}



/* Entry: 10527b9c0; end: 10527b9fb;  */

undefined8 * FUN_10527b9c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110872d98;
  FUN_1052750b0(param_1 + 6);
  func_0x00010527bfa8();
  func_0x00010527c0e4();
  return param_1;
}



/* Entry: 10527b9fc; end: 10527c303;  */

void FUN_10527b9fc(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  *param_2 = param_1;
  uVar1 = *(undefined8 *)(param_3 + 8);
  param_2[2] = *(undefined8 *)(param_3 + 0x10);
  param_2[1] = uVar1;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  return;
}



/* Entry: 10527c304; end: 10527c3a3;  */

undefined8 * FUN_10527c304(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110873858;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010527e530();
    } while (extraout_w10 != 0);
  }
  FUN_10527c3a4(&uStack_40,param_3);
  param_1[6] = uStack_38;
  param_1[5] = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10527ca18(&uStack_40);
  return param_1;
}



/* Entry: 10527c3a4; end: 10527c3c7;  */

void FUN_10527c3a4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10527c624(&uStack_11,param_1);
  return;
}



/* Entry: 10527c3c8; end: 10527c49f;  */

void FUN_10527c3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long lVar4;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long alStack_80 [4];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_28;
  
  plVar1 = alStack_80;
  plVar2 = alStack_80;
  func_0x000100469560();
  uStack_28 = extraout_x8;
  func_0x000104bd4df4(auStack_60);
  if (*(long *)(param_1 + 0x20) != 0) {
    do {
      func_0x00010527e530();
    } while (extraout_w10 != 0);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    do {
      func_0x00010527e670();
    } while (extraout_w11 != 0);
  }
  func_0x00010527e5d8();
  func_0x00010527e6b0();
  func_0x00010527e398(uStack_50);
  FUN_10527c55c();
  puVar3 = auStack_60;
  func_0x00010527e628();
  func_0x00010527e5b8();
  func_0x000100469710(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527e398(uStack_50);
    FUN_10527c55c();
    func_0x00010527e5b8();
    func_0x00010527e434();
    pcStack_88 = FUN_10527c4a0;
    lStack_a0 = param_1;
    puStack_98 = (undefined1 *)plVar1;
    puStack_90 = &stack0xfffffffffffffff0;
    FUN_10527c5a0(&lStack_c0,param_3);
    uStack_b8 = 0;
    if (lStack_c0 != 0) {
      do {
        func_0x00010527e45c();
        uStack_b8 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    func_0x00010b9a8ef8(auStack_b0,&uStack_b8);
    lVar4 = *plVar2;
    func_0x0001003a83dc(auStack_c8,puVar3);
    func_0x000104bd9bd4(lVar4 + 0x10,auStack_c8);
    func_0x00010b9a9020();
    func_0x0001003a8c94(auStack_c8);
    func_0x00010527e5a0();
    func_0x000104bda388(&uStack_b8);
    func_0x000104bda3d0(&lStack_c0);
    return;
  }
  return;
}



/* Entry: 10527c4a0; end: 10527c55b;  */

void FUN_10527c4a0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  int extraout_w11;
  long lVar1;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  FUN_10527c5a0(&lStack_40,param_3);
  uStack_38 = 0;
  if (lStack_40 != 0) {
    do {
      func_0x00010527e45c();
      uStack_38 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010b9a8ef8(auStack_30,&uStack_38);
  lVar1 = *param_1;
  func_0x0001003a83dc(auStack_48,param_2);
  func_0x000104bd9bd4(lVar1 + 0x10,auStack_48);
  func_0x00010b9a9020();
  func_0x0001003a8c94(auStack_48);
  func_0x00010527e5a0();
  func_0x000104bda388(&uStack_38);
  func_0x000104bda3d0(&lStack_40);
  return;
}



/* Entry: 10527c55c; end: 10527c57b;  */

long FUN_10527c55c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010527e780();
  lVar1 = unaff_x19;
  func_0x0001003a81cc();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10527c57c; end: 10527c58b;  */

void FUN_10527c57c(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcStack_40;
  char *pcStack_38;
  
  pcVar2 = "UnifiedGrpc";
  pcVar1 = pcVar2;
  func_0x0001003a8364();
  pcStack_40 = "UnifiedGrpc";
  func_0x000107c613d0();
  pcStack_38 = pcVar2;
  func_0x0001003a8458(param_1,pcVar1,&pcStack_40);
  return;
}



/* Entry: 10527c58c; end: 10527c59f;  */

void FUN_10527c58c(void)

{
  FUN_10527c5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527c5a0; end: 10527c5df;  */

void FUN_10527c5a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm();
  func_0x00010b9ac22c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10527c5e0; end: 10527c623;  */

undefined8 * FUN_10527c5e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110873858;
  func_0x000100554470(param_1 + 5);
  func_0x00010048b850(param_1 + 3);
  func_0x000104bd5244(param_1 + 1);
  return param_1;
}



/* Entry: 10527c624; end: 10527c693;  */

undefined1 * FUN_10527c624(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000100469560();
  uStack_28 = extraout_x8;
  FUN_10527c694(auStack_40,1);
  FUN_10527c6e8();
  func_0x0001004696e8();
  func_0x00010527ca08();
  func_0x000100469710(uStack_28);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x00010527ca08();
  func_0x00010527e434();
  *(undefined8 *)(puVar1 + 8) = param_2;
  puVar2 = puVar1;
  FUN_10527c6bc();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10527c694; end: 10527c6bb;  */

long FUN_10527c694(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10527c6bc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10527c6bc; end: 10527c6e7;  */

undefined8 * FUN_10527c6bc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x666666666666667) {
    puVar1 = (undefined8 *)(param_2 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108738d0;
  FUN_10527c740(param_1 + 3);
  return param_1;
}



/* Entry: 10527c6e8; end: 10527c71f;  */

undefined8 * FUN_10527c6e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108738d0;
  FUN_10527c740(param_1 + 3);
  return param_1;
}



/* Entry: 10527c720; end: 10527c723;  */

void FUN_10527c720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108738d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10527c724; end: 10527c737;  */

void FUN_10527c724(void)

{
  func_0x00010527c9fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527c738; end: 10527c73f;  */

void FUN_10527c738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010046e278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10527c740; end: 10527c793;  */

undefined8 * FUN_10527c740(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_28;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010527e670();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = &PTR_FUN_110873920;
  param_1[1] = lVar1;
  uStack_28 = 0;
  func_0x000104bd5214(&uStack_28);
  return param_1;
}



/* Entry: 10527c794; end: 10527c797;  */

undefined8 * FUN_10527c794(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873920;
  func_0x000104bd5214(param_1 + 1);
  return param_1;
}



/* Entry: 10527c798; end: 10527c7ab;  */

void FUN_10527c798(void)

{
  FUN_10527c8f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527c7ac; end: 10527c843;  */

void FUN_10527c7ac(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_98;
  undefined8 uStack_28;
  
  func_0x000100469560();
  func_0x00010527e7c8();
  if (extraout_x8 != 0) {
    plVar1 = (long *)(extraout_x8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (extraout_x8 != 0) {
    do {
      func_0x00010527e530();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*param_1 + 0x28))();
  func_0x00010527e540();
  func_0x00010527e660();
  func_0x000100469710(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527e4c4();
    func_0x00010527e660();
    func_0x00010527e434();
    func_0x000100469560();
    func_0x00010527e7c8();
    if (extraout_x8_00 != 0) {
      plVar1 = (long *)(extraout_x8_00 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010527e530();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*param_1 + 0x30))();
    func_0x00010527e540();
    func_0x00010527e660();
    func_0x000100469710(uStack_98);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010527e4c4();
      func_0x00010527e660();
      func_0x00010527e434();
                    /* WARNING: Could not recover jumptable at 0x00010527c8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[1] + 0x40))();
      return;
    }
  }
  return;
}



/* Entry: 10527c844; end: 10527c8e7;  */

void FUN_10527c844(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w10;
  undefined8 uStack_28;
  
  func_0x000100469560();
  func_0x00010527e7c8();
  if (extraout_x8 != 0) {
    plVar1 = (long *)(extraout_x8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (extraout_x8 != 0) {
    do {
      func_0x00010527e530();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*param_1 + 0x30))();
  func_0x00010527e540();
  func_0x00010527e660();
  func_0x000100469710(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527e4c4();
    func_0x00010527e660();
    func_0x00010527e434();
                    /* WARNING: Could not recover jumptable at 0x00010527c8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 0x40))();
    return;
  }
  return;
}



/* Entry: 10527c8e8; end: 10527c8f7;  */

void FUN_10527c8e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010527c8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  return;
}



/* Entry: 10527c8f8; end: 10527c923;  */

undefined8 * FUN_10527c8f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873920;
  func_0x000104bd5214(param_1 + 1);
  return param_1;
}



/* Entry: 10527c924; end: 10527ca17;  */

void FUN_10527c924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010527e654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 10527ca18; end: 10527ca3b;  */

void FUN_10527ca18(long param_1)

{
  func_0x00010046e218();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10527ca3c; end: 10527cb33;  */

undefined1 * FUN_10527ca3c(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w11;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_28;
  
  puVar2 = auStack_80;
  func_0x000100469560();
  uStack_28 = extraout_x8;
  if (*(long *)(param_2 + 0x10) == 0) {
    puVar2 = *(undefined1 **)(param_1 + 0x18);
    func_0x00010b9a0050(puVar2,"Auth context is not set");
    func_0x00010527e3a4();
  }
  else {
    func_0x000104bd4df4(auStack_60);
    if (*(long *)(param_2 + 0x18) != 0) {
      do {
        func_0x00010527e530();
      } while (extraout_w10 != 0);
    }
    if (*(long *)(param_2 + 0x28) != 0) {
      do {
        func_0x00010527e670();
      } while (extraout_w11 != 0);
    }
    func_0x00010527e5d8();
    func_0x00010527e6b0();
    func_0x00010527e398(uStack_50);
    FUN_10527cb34();
    func_0x00010527e628();
    func_0x00010527e5b8();
  }
  func_0x000100469710(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527e398(uStack_50);
    FUN_10527cb34(auStack_80);
    func_0x00010527e5b8();
    func_0x00010527e434();
    func_0x00010527e780();
    puVar1 = puVar2;
    func_0x0001003a81cc();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10527cb34; end: 10527cb53;  */

long FUN_10527cb34(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010527e780();
  lVar1 = unaff_x19;
  func_0x0001003a81cc();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10527cb54; end: 10527cef7;  */

void FUN_10527cb54(long param_1,long param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  code cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  long lStack_138;
  undefined1 auStack_128 [24];
  code *pcStack_110;
  long lStack_108;
  undefined1 auStack_100 [8];
  char cStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_48;
  
  lVar3 = param_1;
  func_0x000100469560();
  uStack_48 = extraout_x8;
  func_0x00010b9abfa4();
  puVar4 = &uStack_c0;
  func_0x00010b9a8f04(puVar4,lVar3);
  func_0x00010527e480();
  puVar5 = auStack_d0;
  func_0x00010b9a8f04(puVar5,puVar4);
  func_0x00010527e48c();
  puVar6 = auStack_e0;
  func_0x00010b9a8f04(puVar6,puVar5);
  func_0x00010527e474();
  puVar5 = auStack_f0;
  func_0x00010b9a8f04(puVar5,puVar6);
  func_0x00010527e718();
  func_0x00010b9a8f04(auStack_100,puVar5);
  func_0x0001004695d8(&pcStack_110);
  func_0x00010527e5f4(uStack_b8);
  if ((bool)in_ZR) {
    func_0x00010b9a9894(auStack_128,&uStack_c0);
    func_0x00010527e5f4(uStack_c8);
    pcVar1 = pcStack_110;
    if ((bool)in_ZR) {
      func_0x00010b9a9894(&pcStack_80,auStack_d0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (pcVar1 + 0x98,&pcStack_80);
      func_0x00010527e5c8();
      func_0x00010527e5f4(uStack_d8);
      pcVar1 = pcStack_110;
      if ((bool)in_ZR) {
        func_0x00010b9a9894(&pcStack_80,auStack_e0);
        func_0x0001002a8234(pcVar1 + 0x28,&pcStack_80);
        func_0x00010527e5c8();
      }
      func_0x00010527e5f4(uStack_e8);
      pcVar1 = pcStack_110;
      if ((bool)in_ZR) {
        func_0x00010b9a9894(&pcStack_80,auStack_f0);
        func_0x0001002a8234(pcVar1 + 8,&pcStack_80);
        func_0x00010527e5c8();
      }
      pcVar1 = pcStack_110;
      in_ZR = cStack_f8 == '\a';
      if ((bool)in_ZR) {
        cVar2 = (code)0x0;
        func_0x00010b9a9608();
        pcVar1[0x88] = cVar2;
      }
      ppuStack_78 = (undefined **)lStack_108;
      pcStack_80 = pcStack_110;
      if (lStack_108 != 0) {
        do {
          func_0x00010527e530();
        } while (extraout_w10 != 0);
      }
      func_0x00010061a3ac(auStack_140,auStack_128,&pcStack_80,param_2 + 0x10,param_2 + 0x20);
      func_0x00010046e224(&pcStack_80);
      func_0x00010527e7a0();
      if (lStack_138 != 0) {
        do {
          func_0x00010527e530();
        } while (extraout_w10_00 != 0);
      }
      pcStack_80 = FUN_10527cf20;
      ppuStack_78 = &PTR_FUN_110873b60;
      pcStack_b0 = (code *)0x0;
      ppuStack_a8 = (undefined **)0x0;
      FUN_10527c4a0(auStack_148,"unaryCall",&pcStack_80);
      func_0x00010527e398(ppuStack_78);
      func_0x00010062385c(&pcStack_b0);
      if (lStack_138 != 0) {
        do {
          func_0x00010527e530();
        } while (extraout_w10_01 != 0);
      }
      pcStack_b0 = FUN_10527da8c;
      ppuStack_a8 = &PTR_FUN_110873c28;
      uStack_158 = 0;
      uStack_150 = 0;
      FUN_10527c4a0(auStack_148,"serverStreamingCall",&pcStack_b0);
      func_0x00010527e398(ppuStack_a8);
      func_0x00010062385c(&uStack_158);
      func_0x00010527e628();
      func_0x00010527e4a8();
      func_0x00010062385c(auStack_140);
    }
    else {
      func_0x00010b9a0050(*(undefined8 *)(param_1 + 0x18),"\'endpoint\' is invalid");
      func_0x00010527e3a4();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
  }
  else {
    func_0x00010b9a0050(*(undefined8 *)(param_1 + 0x18),"\'serviceName\' is invalid");
    func_0x00010527e3a4();
  }
  func_0x00010046e248(&pcStack_110);
  func_0x00010b9a8d98(auStack_100);
  func_0x00010b9a8d98(auStack_f0);
  func_0x00010b9a8d98(auStack_e0);
  func_0x00010b9a8d98(auStack_d0);
  func_0x00010b9a8d98(&uStack_c0);
  func_0x000100469710(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527e5c8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
    func_0x00010046e248(&pcStack_110);
    func_0x00010b9a8d98(auStack_100);
    func_0x00010b9a8d98(auStack_f0);
    func_0x00010b9a8d98(auStack_e0);
    func_0x00010b9a8d98(auStack_d0);
    puVar4 = &uStack_c0;
    func_0x00010b9a8d98();
    func_0x00010527e434();
    *puVar4 = &PTR_FUN_1108739c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return;
  }
  return;
}



/* Entry: 10527cef8; end: 10527cefb;  */

void FUN_10527cef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108739c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10527cefc; end: 10527cf0f;  */

void FUN_10527cefc(void)

{
  FUN_10527cf10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527cf10; end: 10527cf1f;  */

void FUN_10527cf10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108739c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10527cf20; end: 10527d2a7;  */

void FUN_10527cf20(void)

{
  undefined1 in_ZR;
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  int extraout_w10;
  int extraout_w11;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_288 [24];
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  long alStack_250 [2];
  undefined8 *puStack_240;
  undefined8 uStack_238;
  char cStack_210;
  undefined8 uStack_208;
  byte bStack_200;
  undefined1 auStack_1f8 [32];
  undefined1 auStack_1d8 [32];
  undefined1 auStack_1b8 [32];
  undefined1 auStack_198 [48];
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  ushort uStack_128;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [24];
  long lStack_80;
  char cStack_78;
  char cStack_77;
  undefined1 auStack_70 [8];
  char cStack_68;
  long lStack_60;
  char cStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  func_0x00010527e50c();
  func_0x00010527e6f8();
  func_0x00010527e480();
  func_0x00010527e704();
  func_0x00010527e48c();
  func_0x00010527e6ec();
  func_0x00010527e474();
  func_0x00010527e6e0();
  func_0x00010527e5f4(uStack_48);
  if ((bool)in_ZR) {
    func_0x00010b9a9894(auStack_98,auStack_50);
    if (cStack_58 == '\n') {
      func_0x00010bd48000(auStack_a8,*(undefined8 *)(lStack_60 + 0x20),
                          *(undefined8 *)(lStack_60 + 0x28));
      uStack_b8 = 0;
      uStack_b0 = 0;
      if (cStack_68 == '\b') {
        func_0x00010527e3e8();
        func_0x0001001148fc(auStack_1f8);
        func_0x0001001148fc(auStack_1d8);
        func_0x0001001148fc(auStack_1b8);
        func_0x00010062706c(auStack_198);
        func_0x00010527e4f8();
        if ((bStack_200 & 0xfc) == 4) {
          puVar2 = &uStack_208;
          func_0x00010b9a9588();
          puStack_160 = (undefined8 *)CONCAT71(puStack_160._1_7_,1);
          puStack_168 = puVar2;
        }
        func_0x00010527e4e4();
        if (cStack_210 == '\b') {
          func_0x00010527e680();
          FUN_10527d444(unaff_x21 + 0x10);
          func_0x00010527e7dc();
          while (alStack_250[0] != unaff_x22) {
            func_0x00010527e6c8();
            func_0x00010527e794();
            func_0x00010527e730();
            func_0x000100066230();
            func_0x00010527e668();
            func_0x00010527e5b0();
            func_0x00010527d4cc(alStack_250);
          }
          func_0x00010527e73c(&puStack_168);
          func_0x00010527e638();
        }
        func_0x00010b9aa82c(&puStack_240,auStack_70,"requireAuth");
        if ((char)uStack_238 == '\a') {
          uVar1 = (ushort)&puStack_240;
          func_0x00010b9a9608();
          uStack_128 = uVar1 | 0x100;
        }
        FUN_10527d2d8(&puStack_270,&puStack_168);
        FUN_10527d340(&uStack_b8,&puStack_270);
        FUN_10527d608(&puStack_270);
        func_0x00010b9a8d98(&puStack_240);
        func_0x00010527e630();
        func_0x00010527e588();
        func_0x00010527e5d0();
      }
      puVar3 = (undefined8 *)0x28;
      __Znwm();
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_110873ab0;
      puVar2 = puVar3 + 3;
      *puVar2 = &PTR_DAT_110873b00;
      puVar3[4] = 0;
      puStack_168 = puVar2;
      puStack_160 = puVar3;
      if (cStack_78 == '\v') {
        if ((cStack_77 == '\x01') && (lStack_80 != 0)) {
          do {
            func_0x00010527e45c();
          } while (extraout_w11 != 0);
        }
        puVar3 = puStack_160;
        puVar2 = puStack_168;
        func_0x00010527e6d4();
        func_0x000104bda388(auStack_288);
      }
      plVar4 = *(long **)(unaff_x20 + 0x10);
      puStack_270 = puVar2;
      puStack_268 = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        do {
          func_0x00010527e530();
        } while (extraout_w10 != 0);
      }
      (**(code **)(*plVar4 + 0x10))(&puStack_240);
      func_0x000100629f48(&puStack_270);
      puStack_268 = (undefined8 *)uStack_238;
      puStack_270 = puStack_240;
      puStack_240 = (undefined8 *)0x0;
      uStack_238 = 0;
      func_0x00010527e6a4();
      func_0x00010527e5a8();
      func_0x00010527e640();
      FUN_10527da24(&puStack_168);
      func_0x000100629f74(&uStack_b8);
      func_0x0001000ff1ac(auStack_a8);
    }
    else {
      func_0x00010527e748(*(undefined8 *)(unaff_x21 + 0x18));
      func_0x00010527e3a4();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  }
  else {
    func_0x00010527e75c(*(undefined8 *)(unaff_x21 + 0x18));
    func_0x00010527e3a4();
  }
  func_0x00010527e5c0();
  func_0x00010527e600();
  func_0x00010527e608();
  func_0x00010527e610();
  return;
}



/* Entry: 10527d2a8; end: 10527d2d7;  */

undefined8 FUN_10527d2a8(undefined8 param_1,undefined8 param_2)

{
  FUN_10527d500();
  func_0x000100627038(param_1,param_2);
  return param_1;
}



/* Entry: 10527d2d8; end: 10527d33f;  */

void FUN_10527d2d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xd0;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110873a10;
  puVar1[3] = &PTR_DAT_110873a60;
  func_0x000100627360(puVar1 + 4,param_2);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10527d340; end: 10527d37b;  */

undefined8 * FUN_10527d340(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000100629f74(&uStack_30);
  return param_1;
}



/* Entry: 10527d37c; end: 10527d443;  */

undefined1  [16] FUN_10527d37c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined1 auVar4 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  func_0x000100469560();
  uStack_38 = extraout_x8;
  func_0x000104bd4df4(&uStack_70);
  uStack_50 = param_2[1];
  uStack_58 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  pcStack_68 = FUN_10527d9ac;
  ppuStack_60 = &PTR_FUN_110873b40;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10527c4a0(&uStack_70,"cancel",&pcStack_68);
  func_0x00010527e550();
  func_0x00010062a21c(&uStack_80);
  puVar3 = &uStack_70;
  func_0x00010527e628();
  puVar2 = &uStack_70;
  func_0x000104bd4e40(puVar2);
  func_0x000100469710(uStack_38);
  if ((bool)in_ZR) {
    auVar4._8_8_ = puVar3;
    auVar4._0_8_ = puVar2;
    return auVar4;
  }
  ___stack_chk_fail();
  func_0x00010527e550();
  func_0x00010062a21c(&uStack_80);
  puVar3 = &uStack_70;
  func_0x000104bd4e40();
  func_0x00010527e434();
  pcStack_88 = FUN_10527d444;
  uStack_98 = puVar3[1];
  uStack_a0 = *puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_10527d470(&uStack_a0);
  auVar1._8_8_ = uStack_98;
  auVar1._0_8_ = uStack_a0;
  return auVar1;
}



/* Entry: 10527d444; end: 10527d46f;  */

undefined1  [16] FUN_10527d444(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10527d470(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10527d470; end: 10527d4ff;  */

void FUN_10527d470(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x0001003acc00();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x18;
  }
  return;
}



/* Entry: 10527d500; end: 10527d523;  */

void FUN_10527d500(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010028ad98();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10527d524; end: 10527d527;  */

void FUN_10527d524(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10527d528; end: 10527d53b;  */

void FUN_10527d528(void)

{
  FUN_10527d5fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527d53c; end: 10527d547;  */

void FUN_10527d53c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010046e278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10527d548; end: 10527d55b;  */

void FUN_10527d548(void)

{
  FUN_10527d5d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527d55c; end: 10527d567;  */

undefined8 * FUN_10527d55c(undefined8 *param_1,long param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    func_0x00010028b0c8(param_1 + 2,param_2 + 0x18);
    *(undefined1 *)(param_1 + 7) = 1;
  }
  uVar1 = *(undefined2 *)(param_2 + 0x48);
  puVar3 = param_1 + 9;
  *(undefined1 *)puVar3 = 0;
  *(undefined2 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_2 + 0x68) == '\x01') {
    if (*(char *)(param_2 + 0x67) < '\0') {
      func_0x000100033dac(puVar3,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x58);
      uVar2 = *(undefined8 *)(param_2 + 0x50);
      param_1[0xb] = *(undefined8 *)(param_2 + 0x60);
      param_1[10] = uVar4;
      *puVar3 = uVar2;
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  puVar3 = param_1 + 0xd;
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_2 + 0x88) == '\x01') {
    if (*(char *)(param_2 + 0x87) < '\0') {
      func_0x000100033dac(puVar3,*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78));
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x78);
      uVar2 = *(undefined8 *)(param_2 + 0x70);
      param_1[0xf] = *(undefined8 *)(param_2 + 0x80);
      param_1[0xe] = uVar4;
      *puVar3 = uVar2;
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  puVar3 = param_1 + 0x12;
  *(undefined1 *)puVar3 = 0;
  param_1[0x11] = uVar2;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    if (*(char *)(param_2 + 0xaf) < '\0') {
      func_0x000100033dac(puVar3,*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0xa0));
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0xa0);
      uVar2 = *(undefined8 *)(param_2 + 0x98);
      param_1[0x14] = *(undefined8 *)(param_2 + 0xa8);
      param_1[0x13] = uVar4;
      *puVar3 = uVar2;
    }
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return param_1;
}



/* Entry: 10527d568; end: 10527d59f;  */

undefined1 * FUN_10527d568(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_10527d5a0();
  return param_1;
}



/* Entry: 10527d5a0; end: 10527d5b3;  */

void FUN_10527d5a0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x00010028b0c8();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 10527d5b4; end: 10527d5cf;  */

void FUN_10527d5b4(long param_1)

{
  func_0x00010028b0c8();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10527d5d0; end: 10527d5fb;  */

undefined8 * FUN_10527d5d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110873a60;
  func_0x000100627b64(param_1 + 1);
  return param_1;
}



/* Entry: 10527d5fc; end: 10527d607;  */

void FUN_10527d5fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10527d608; end: 10527d62b;  */

void FUN_10527d608(long param_1)

{
  func_0x00010046e218();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10527d62c; end: 10527d62f;  */

void FUN_10527d62c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873ab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10527d630; end: 10527d643;  */

void FUN_10527d630(void)

{
  func_0x00010527d9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527d644; end: 10527d64f;  */

void FUN_10527d644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010046e278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10527d650; end: 10527d663;  */

void FUN_10527d650(void)

{
  FUN_10527d894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527d664; end: 10527d893;  */

undefined8 * FUN_10527d664(undefined8 *param_1,long *param_2,int *param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  int aiStack_a0 [2];
  undefined2 uStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 auStack_80 [2];
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x000100469560();
  uStack_48 = extraout_x8;
  if (param_1[1] == 0) goto LAB_10527d81c;
  plVar3 = param_2;
  func_0x00010527e4b0();
  auStack_70[0] = 0;
  if ((char)plVar3[2] == '\x01') {
    func_0x00010527d8c0(&lStack_88);
    lVar1 = lStack_88;
    if ((long *)*param_2 == (long *)0x0) {
LAB_10527d6f0:
      param_2 = (long *)0x0;
    }
    else {
      (**(code **)(*(long *)*param_2 + 0x10))();
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) goto LAB_10527d6f0;
      (**(code **)(*param_2 + 0x18))();
    }
    func_0x00010527e6bc(param_2,lVar1 + 0x10);
    aiStack_a0[0] = 3;
    FUN_10527d8ec(auStack_90,aiStack_a0,&lStack_88);
    func_0x00010b9a8f90(aiStack_a0,auStack_90);
    func_0x00010527e598(auStack_80);
    func_0x00010527e520();
    func_0x000104bdb38c(auStack_90);
    FUN_10527d94c(&lStack_88);
  }
  in_ZR = (char)param_3[8] == '\x01';
  if (((bool)in_ZR) && (func_0x00010527e46c(), *param_3 != 0)) {
    func_0x00010527e7a0();
    func_0x00010527e46c();
    func_0x00010527e3b4();
    func_0x00010b9a8dd4(aiStack_a0);
    lVar1 = lStack_88;
    func_0x0001003a83dc(auStack_90,"message");
    func_0x000104bd9bd4(lVar1 + 0x10,auStack_90);
    func_0x00010527e598();
    func_0x00010527e754();
    func_0x00010527e520();
    func_0x00010527e46c();
    aiStack_a0[0] = *param_3;
    uStack_98 = 4;
    func_0x0001003a83dc(auStack_90,"code");
    func_0x000104bd9bd4(lStack_88 + 0x10,auStack_90);
    func_0x00010527e598();
    func_0x00010527e754();
    func_0x00010527e520();
    func_0x00010b9a8f54(aiStack_a0,&lStack_88);
    func_0x00010527e598(auStack_70);
    func_0x00010527e520();
    func_0x00010527e4a8();
  }
  func_0x00010b9ac0a8(auStack_60,*(undefined8 *)(unaff_x19 + 8),auStack_80,2);
  func_0x000104bda914(auStack_60);
  param_1 = auStack_80;
  func_0x000104c6289c();
LAB_10527d81c:
  func_0x000100469710(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010527e754();
  func_0x00010527e520();
  func_0x00010527e4a8();
  puVar2 = auStack_80;
  func_0x000104c6289c();
  func_0x00010527e434();
  *puVar2 = &PTR_DAT_110873b00;
  func_0x000104bda388(puVar2 + 1);
  return puVar2;
}



/* Entry: 10527d894; end: 10527d8eb;  */

undefined8 * FUN_10527d894(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110873b00;
  func_0x000104bda388(param_1 + 1);
  return param_1;
}



/* Entry: 10527d8ec; end: 10527d933;  */

void FUN_10527d8ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm();
  func_0x00010b9ac624();
  *param_1 = uVar1;
  return;
}



/* Entry: 10527d934; end: 10527d94b;  */

undefined8 * FUN_10527d934(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  FUN_10527d974(*param_1);
  return param_1;
}



/* Entry: 10527d94c; end: 10527d973;  */

undefined8 * FUN_10527d94c(undefined8 *param_1)

{
  FUN_10527d974(*param_1);
  return param_1;
}



/* Entry: 10527d974; end: 10527d9ab;  */

void FUN_10527d974(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010527d998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10527d9ac; end: 10527d9df;  */

void FUN_10527d9ac(undefined8 param_1,long param_2)

{
  if (*(long **)(param_2 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x10) + 0x10))();
  }
  func_0x00010527e3a4();
  return;
}



/* Entry: 10527d9e0; end: 10527da23;  */

void FUN_10527d9e0(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010046e218();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10527da24; end: 10527da47;  */

void FUN_10527da24(long param_1)

{
  func_0x00010046e218();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10527da48; end: 10527da8b;  */

void FUN_10527da48(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010046e218();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10527da8c; end: 10527de43;  */

void FUN_10527da8c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_298 [24];
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  long alStack_260 [2];
  undefined8 *puStack_250;
  undefined8 uStack_248;
  char cStack_220;
  undefined8 uStack_218;
  byte bStack_210;
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [32];
  undefined1 auStack_1a8 [48];
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [24];
  long lStack_90;
  char cStack_88;
  char cStack_87;
  long lStack_80;
  char cStack_78;
  char cStack_77;
  char cStack_68;
  long lStack_60;
  char cStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  func_0x00010527e50c();
  func_0x00010527e6f8();
  func_0x00010527e480();
  func_0x00010527e704();
  func_0x00010527e48c();
  func_0x00010527e6ec();
  func_0x00010527e474();
  func_0x00010527e6e0();
  func_0x00010527e718();
  func_0x00010b9a8f04(&lStack_90,param_1);
  func_0x00010527e5f4(uStack_48);
  if ((bool)in_ZR) {
    func_0x00010b9a9894(auStack_a8,auStack_50);
    if (cStack_58 == '\n') {
      func_0x00010bd48000(auStack_b8,*(undefined8 *)(lStack_60 + 0x20),
                          *(undefined8 *)(lStack_60 + 0x28));
      uStack_c8 = 0;
      uStack_c0 = 0;
      if (cStack_68 == '\b') {
        func_0x00010527e3e8();
        func_0x0001001148fc(auStack_208);
        func_0x0001001148fc(auStack_1e8);
        func_0x0001001148fc(auStack_1c8);
        func_0x00010062706c(auStack_1a8);
        func_0x00010527e4f8();
        if ((bStack_210 & 0xfc) == 4) {
          puVar1 = &uStack_218;
          func_0x00010b9a9588();
          puStack_170 = (undefined8 *)CONCAT71(puStack_170._1_7_,1);
          puStack_178 = puVar1;
        }
        func_0x00010527e4e4();
        if (cStack_220 == '\b') {
          func_0x00010527e680();
          FUN_10527d444(unaff_x21 + 0x10);
          func_0x00010527e7dc();
          while (alStack_260[0] != unaff_x22) {
            func_0x00010527e6c8();
            func_0x00010527e794();
            func_0x00010527e730();
            func_0x000100066230();
            func_0x00010527e668();
            func_0x00010527e5b0();
            func_0x00010527d4cc(alStack_260);
          }
          func_0x00010527e73c(&puStack_178);
          func_0x00010527e638();
        }
        FUN_10527d2d8(&puStack_250,&puStack_178);
        FUN_10527d340(&uStack_c8,&puStack_250);
        FUN_10527d608(&puStack_250);
        func_0x00010527e630();
        func_0x00010527e588();
        func_0x00010527e5d0();
      }
      puVar2 = (undefined8 *)0x30;
      __Znwm();
      puVar2[2] = 0;
      puVar1 = puVar2 + 3;
      *puVar1 = &PTR_DAT_110873be0;
      puVar2[4] = 0;
      *puVar2 = &PTR_FUN_110873b90;
      puVar2[1] = 0;
      puVar2[5] = 0;
      puStack_178 = puVar1;
      puStack_170 = puVar2;
      if (cStack_78 == '\v') {
        if ((cStack_77 == '\x01') && (lStack_80 != 0)) {
          do {
            func_0x00010527e45c();
          } while (extraout_w11 != 0);
        }
        puVar1 = puStack_178;
        func_0x00010527e6d4();
        func_0x000104bda388(auStack_298);
      }
      puStack_280 = puVar1;
      if (cStack_88 == '\v') {
        if (cStack_87 == '\x01') {
          uStack_218 = 0;
          if (lStack_90 != 0) {
            do {
              func_0x00010527e45c();
              uStack_218 = extraout_x8;
            } while (extraout_w11_00 != 0);
          }
        }
        else {
          uStack_218 = 0;
        }
        func_0x000104be7934(puVar1 + 2,&uStack_218);
        func_0x000104bda388(&uStack_218);
        puStack_280 = puStack_178;
      }
      plVar3 = *(long **)(unaff_x20 + 0x10);
      puStack_278 = puStack_170;
      if (puStack_170 != (undefined8 *)0x0) {
        do {
          func_0x00010527e530();
        } while (extraout_w10 != 0);
      }
      (**(code **)(*plVar3 + 0x18))(&puStack_250);
      FUN_10527e23c(&puStack_280);
      puStack_278 = (undefined8 *)uStack_248;
      puStack_280 = puStack_250;
      puStack_250 = (undefined8 *)0x0;
      uStack_248 = 0;
      func_0x00010527e6a4();
      func_0x00010527e5a8();
      func_0x00010527e640();
      func_0x00010527e260(&puStack_178);
      func_0x000100629f74(&uStack_c8);
      func_0x0001000ff1ac(auStack_b8);
    }
    else {
      func_0x00010527e748(*(undefined8 *)(unaff_x21 + 0x18));
      func_0x00010527e3a4();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  }
  else {
    func_0x00010527e75c(*(undefined8 *)(unaff_x21 + 0x18));
    func_0x00010527e3a4();
  }
  func_0x00010b9a8d98(&lStack_90);
  func_0x00010527e5c0();
  func_0x00010527e600();
  func_0x00010527e608();
  func_0x00010527e610();
  return;
}



/* Entry: 10527de44; end: 10527de47;  */

void FUN_10527de44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873b90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10527de48; end: 10527de5b;  */

void FUN_10527de48(void)

{
  FUN_10527e230();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527de5c; end: 10527de67;  */

void FUN_10527de5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010046e278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


