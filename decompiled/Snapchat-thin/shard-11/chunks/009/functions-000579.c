/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10899bfb8; end: 10899bfe3;  */

undefined8 * FUN_10899bfb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3f48;
  func_0x000108995660(param_1 + 1);
  return param_1;
}



/* Entry: 10899bfe4; end: 10899bfe7;  */

undefined8 * FUN_10899bfe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3f48;
  func_0x000108995660(param_1 + 1);
  return param_1;
}



/* Entry: 10899bfe8; end: 10899bffb;  */

void FUN_10899bfe8(void)

{
  FUN_10899bfb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899bffc; end: 10899c107;  */

void FUN_10899bffc(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w10;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [96];
  undefined8 uStack_28;
  
  puVar3 = auStack_a0;
  func_0x00010899c6bc();
  iVar1 = *(int *)(param_2 + 0x18) + 1;
  uVar2 = iVar1 == 5;
  uStack_28 = extraout_x8;
  switch(iVar1) {
  case 0:
    func_0x00010899c6cc();
    func_0x00010899c694();
    func_0x00010899c670();
    break;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    goto code_r0x00010899c0b0;
  case 2:
    func_0x00010899c6cc();
    func_0x00010899c694();
    func_0x00010899c670();
    break;
  case 3:
    func_0x000107c278b8(auStack_a0,&DAT_10df7b43d);
    func_0x00010899c694();
    func_0x00010899c670();
    break;
  case 5:
    func_0x000107c278b8(auStack_a0,&DAT_10df7b44a);
    func_0x00010899c694();
    func_0x00010899c670();
  }
  func_0x000108a027e0(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
code_r0x00010899c0b0:
  func_0x00010899c680(uStack_28);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108a027e0(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010899c6a8();
  lVar5 = *(long *)(puVar3 + 0x10);
  uVar7 = *(undefined8 *)(puVar3 + 0x10);
  uVar6 = *(undefined8 *)(puVar3 + 8);
  puVar4 = (undefined8 *)0x18;
  __Znwm();
  if (lVar5 != 0) {
    do {
      func_0x00010899c6ec();
    } while (extraout_w10 != 0);
  }
  *puVar4 = &PTR_DAT_110aa4c58;
  puVar4[2] = uVar7;
  puVar4[1] = uVar6;
  *extraout_x8_00 = puVar4;
  return;
}



/* Entry: 10899c108; end: 10899c163;  */

void FUN_10899c108(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int extraout_w10;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  if (lVar2 != 0) {
    do {
      func_0x00010899c6ec();
    } while (extraout_w10 != 0);
  }
  *puVar1 = &PTR_DAT_110aa4c58;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  *param_1 = puVar1;
  return;
}



/* Entry: 10899c164; end: 10899c173;  */

void FUN_10899c164(void)

{
  return;
}



/* Entry: 10899c174; end: 10899c1e3;  */

undefined8 FUN_10899c174(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_38;
  long lStack_30;
  
  if ((*(byte *)(param_3 + 0x18) & 1) == 0) {
    (**(code **)*param_1)(&lStack_38);
    lVar1 = 0;
    if (lStack_30 - lStack_38 != 0) {
      lVar1 = lStack_38;
    }
    func_0x000108a029a8(param_2,lVar1,(lStack_30 - lStack_38) / 0x60);
    func_0x00010899b0ec(&lStack_38);
  }
  else {
    param_2 = 0;
  }
  return param_2;
}



/* Entry: 10899c1e4; end: 10899c1eb;  */

void FUN_10899c1e4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10899c1ec; end: 10899c26b;  */

void FUN_10899c1ec(long *param_1,undefined8 *param_2)

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



/* Entry: 10899c26c; end: 10899c27f;  */

long * FUN_10899c26c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  ulong unaff_x20;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x00010899c724();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar3 = plVar2[2];
      while (lVar3 != plVar2[1]) {
        lVar3 = lVar3 + -0x10;
        plVar2[2] = lVar3;
      }
      if (*plVar2 != 0) {
        __ZdlPv();
      }
      return plVar2;
    }
    lVar3 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar3 + param_3 * 0x10;
  *unaff_x19 = lVar3;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar3 + unaff_x20 * 0x10;
  return unaff_x19;
}



/* Entry: 10899c280; end: 10899c2df;  */

long * FUN_10899c280(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010899c724();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar2 = param_1[2];
      while (lVar2 != param_1[1]) {
        lVar2 = lVar2 + -0x10;
        param_1[2] = lVar2;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x10;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x10;
  return unaff_x19;
}



/* Entry: 10899c2e0; end: 10899c31f;  */

long * FUN_10899c2e0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x10;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10899c320; end: 10899c42b;  */

undefined8 * FUN_10899c320(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_78 = 0;
  puStack_80 = param_1;
  if (param_3 != 0) {
    if (0x2aaaaaaaaaaaaaa < param_3) {
      FUN_10899aebc();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10899c41c);
      (*pcVar1)();
    }
    puVar2 = param_1 + 2;
    uVar3 = param_3;
    func_0x00010899af1c();
    *param_1 = puVar2;
    param_1[1] = puVar2;
    param_1[2] = puVar2 + uVar3 * 0xc;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_70 = param_1 + 2;
    puStack_50 = puVar2;
    for (lVar4 = param_3 * 0x60; puStack_48 = puVar2, lVar4 != 0; lVar4 = lVar4 + -0x60) {
      func_0x000108a02680(puVar2,param_2);
      param_2 = param_2 + 0x60;
      puVar2 = puStack_48 + 0xc;
    }
    uStack_58 = 1;
    FUN_10899b004(&puStack_70);
    param_1[1] = puVar2;
  }
  uStack_78 = 1;
  FUN_10899c42c(&puStack_80);
  return param_1;
}



/* Entry: 10899c42c; end: 10899c47f;  */

long FUN_10899c42c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010899b118(param_1);
  }
  return param_1;
}



/* Entry: 10899c480; end: 10899c507;  */

undefined1 * FUN_10899c480(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x00010899c6bc();
  uStack_28 = extraout_x8;
  FUN_10899c508(auStack_40,1);
  FUN_10899c560(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010899c5c4();
  func_0x00010899c680(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010899c5c4();
  func_0x00010899c6a8();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_10899c530();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10899c508; end: 10899c52f;  */

long FUN_10899c508(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10899c530();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10899c530; end: 10899c55f;  */

undefined8 * FUN_10899c530(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xea0ea0ea0ea0eb) {
    puVar1 = (undefined8 *)(param_2 * 0x118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa3fe0;
  func_0x000108a0352c(param_1 + 3);
  return param_1;
}



/* Entry: 10899c560; end: 10899c58f;  */

undefined8 * FUN_10899c560(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa3fe0;
  func_0x000108a0352c(param_1 + 3);
  return param_1;
}



/* Entry: 10899c590; end: 10899c593;  */

void FUN_10899c590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3fe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10899c594; end: 10899c5a7;  */

void FUN_10899c594(void)

{
  func_0x00010899c5b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899c5a8; end: 10899c5d3;  */

long FUN_10899c5a8(long param_1)

{
  long lVar1;
  
  func_0x000108a047d0(param_1 + 0xe8);
  func_0x000108a03b04(param_1 + 200);
  lVar1 = 0x98;
  do {
    func_0x000108a046b8(param_1 + 0x18 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  return param_1 + 0x18;
}



/* Entry: 10899c5d4; end: 10899c66f;  */

void FUN_10899c5d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10899c670; end: 10899c72f;  */

/* WARNING: Removing unreachable block (ram,0x00010899c414) */

void FUN_10899c670(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *unaff_x19;
  undefined1 *puVar3;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar3 = &stack0x00000018;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  lVar2 = 1;
  puVar1 = unaff_x19 + 2;
  func_0x00010899af1c();
  *unaff_x19 = puVar1;
  unaff_x19[1] = puVar1;
  unaff_x19[2] = puVar1 + lVar2 * 0xc;
  ppuStack_68 = &puStack_50;
  ppuStack_60 = &puStack_48;
  lVar2 = 0x60;
  puStack_70 = unaff_x19 + 2;
  puStack_50 = puVar1;
  do {
    puStack_48 = puVar1;
    func_0x000108a02680(puVar1,puVar3);
    puVar3 = puVar3 + 0x60;
    puVar1 = puStack_48 + 0xc;
    lVar2 = lVar2 + -0x60;
  } while (lVar2 != 0);
  uStack_58 = 1;
  puStack_48 = puVar1;
  FUN_10899b004(&puStack_70);
  unaff_x19[1] = puVar1;
  FUN_10899c42c(&stack0xffffffffffffff80);
  return;
}



/* Entry: 10899c730; end: 10899c99f;  */

undefined8 *
FUN_10899c730(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7,long *param_8,long *param_9,
             undefined4 param_10,undefined4 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa4030;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 3,param_7);
  param_1[6] = *param_5;
  lVar3 = param_5[1];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x00010899d7f0();
    } while (extraout_w10 != 0);
  }
  uVar4 = *param_6;
  *param_6 = 0;
  param_1[8] = uVar4;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_110aa40c0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  param_1[9] = puVar1;
  func_0x000104c038b0(param_1 + 10,param_3);
  func_0x000104c038b0(param_1 + 0xd,param_4);
  *(undefined2 *)(param_1 + 0x10) = 1;
  param_3 = param_3 + 8;
  func_0x000107c27bdc();
  *(bool *)((long)param_1 + 0x82) =
       (int)((ulong)param_2 >> 0x20) * (int)param_2 <
       *(int *)(param_3 + 0x20) * *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + 0x84) = param_2;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  puVar1 = (undefined8 *)*param_8;
  param_1[0x13] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  puVar1 = (undefined8 *)*param_9;
  param_1[0x14] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  *(undefined4 *)(param_1 + 0x15) = param_10;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = param_12;
  ppuVar2 = &PTR___tlv_bootstrap_11340dcc0;
  (*(code *)PTR___tlv_bootstrap_11340dcc0)(param_13);
  param_1[0x18] = *ppuVar2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = *extraout_x8;
  lVar3 = extraout_x8[1];
  param_1[0x1c] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x00010899d7f0();
    } while (extraout_w10_00 != 0);
  }
  FUN_10899c9a0(param_1,(undefined8 *)((long)param_1 + 0x84));
  return param_1;
}



/* Entry: 10899c9a0; end: 10899ca8f;  */

undefined8 * FUN_10899c9a0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_28;
  
  func_0x00010899d834();
  plVar4 = *(long **)(param_1 + 0xd8);
  uStack_28 = extraout_x8;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,*(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4));
  }
  uStack_78 = *param_2;
  plVar4 = *(long **)(unaff_x19 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x19 + 0x38);
  uStack_70 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    plVar1 = (long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_88 = FUN_10899d4dc;
  ppuStack_80 = &PTR_FUN_110aa4100;
  uStack_98 = 0;
  uStack_90 = 0;
  (**(code **)(*plVar4 + 0x10))(plVar4,&pcStack_88);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  puVar5 = &uStack_98;
  func_0x00010899d30c();
  func_0x00010899d848(uStack_28);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  puVar5 = &uStack_98;
  func_0x00010899d30c();
  func_0x00010899d7bc();
  (**(code **)(**(long **)(puVar5[8] + 0x18) + 0x38))();
  func_0x00010899d80c();
  func_0x000108afae08(puVar5 + 0x1a);
  func_0x000104c05328(puVar5 + 0x1b);
  FUN_10899d2a8(puVar5 + 0x1a);
  FUN_10899d2a8(puVar5 + 0x19);
  FUN_108995704(puVar5 + 0x14);
  FUN_108995704(puVar5 + 0x13);
  func_0x000104c03854(puVar5 + 0xd);
  func_0x000104c03854(puVar5 + 10);
  FUN_10899d4a0(puVar5 + 9);
  func_0x00010563d08c(puVar5 + 8);
  func_0x0001089956ac(puVar5 + 6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5 + 3);
  FUN_108995798(puVar5 + 1);
  return puVar5;
}



/* Entry: 10899ca90; end: 10899cb33;  */

long FUN_10899ca90(long param_1)

{
  (**(code **)(**(long **)(*(long *)(param_1 + 0x40) + 0x18) + 0x38))();
  func_0x00010899d80c();
  func_0x000108afae08(param_1 + 0xd0);
  func_0x000104c05328(param_1 + 0xd8);
  FUN_10899d2a8(param_1 + 0xd0);
  FUN_10899d2a8(param_1 + 200);
  FUN_108995704(param_1 + 0xa0);
  FUN_108995704(param_1 + 0x98);
  func_0x000104c03854(param_1 + 0x68);
  func_0x000104c03854(param_1 + 0x50);
  FUN_10899d4a0(param_1 + 0x48);
  func_0x00010563d08c((long *)(param_1 + 0x40));
  func_0x0001089956ac(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  FUN_108995798(param_1 + 8);
  return param_1;
}



/* Entry: 10899cb34; end: 10899cb37;  */

long FUN_10899cb34(long param_1)

{
  (**(code **)(**(long **)(*(long *)(param_1 + 0x40) + 0x18) + 0x38))();
  func_0x00010899d80c();
  func_0x000108afae08(param_1 + 0xd0);
  func_0x000104c05328(param_1 + 0xd8);
  FUN_10899d2a8(param_1 + 0xd0);
  FUN_10899d2a8(param_1 + 200);
  FUN_108995704(param_1 + 0xa0);
  FUN_108995704(param_1 + 0x98);
  func_0x000104c03854(param_1 + 0x68);
  func_0x000104c03854(param_1 + 0x50);
  FUN_10899d4a0(param_1 + 0x48);
  func_0x00010563d08c((long *)(param_1 + 0x40));
  func_0x0001089956ac(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  FUN_108995798(param_1 + 8);
  return param_1;
}



/* Entry: 10899cb38; end: 10899cb4b;  */

void FUN_10899cb38(void)

{
  FUN_10899ca90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899cb4c; end: 10899ce33;  */

void FUN_10899cb4c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uStack_28;
  
  cVar1 = *(char *)(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (cVar1 == '\x01') {
    lVar4 = *(long *)(param_1 + 0x48);
    *(undefined8 *)(lVar4 + 0x10) = param_2;
    uVar2 = *(char *)(lVar4 + 0x20) == '\x01';
    if ((bool)uVar2) {
      *(undefined1 *)(lVar4 + 0x20) = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
              (*(long **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x48));
    func_0x00010899d85c();
    if ((bool)uVar2) {
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
  }
  else {
    uVar3 = param_1 + 0x50;
    func_0x000108991390(uVar3,*(undefined4 *)(param_3 + 4));
    if (*(char *)(param_1 + 0x82) == '\x01') {
      if (*(int *)(param_1 + 0x88) * *(int *)(param_1 + 0x84) < (int)(uVar3 >> 0x20) * (int)uVar3) {
        return;
      }
      *(undefined1 *)(param_1 + 0x82) = 0;
    }
    uVar5 = *(ulong *)(param_1 + 0x84);
    *(ulong *)(param_1 + 0x84) = uVar3;
    if ((int)uVar3 != (int)uVar5 || uVar3 >> 0x20 != uVar5 >> 0x20) {
      uStack_28 = uVar3;
      FUN_10899c9a0(param_1,&uStack_28);
    }
  }
  return;
}



/* Entry: 10899ce34; end: 10899ce4b;  */

/* WARNING: Removing unreachable block (ram,0x000108afae38) */
/* WARNING: Removing unreachable block (ram,0x000108afae40) */

long * FUN_10899ce34(long *param_1,int param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 uStack_38;
  long lStack_28;
  
  if ((int)param_1[0x15] == param_2) {
    return param_1;
  }
  *(int *)(param_1 + 0x15) = param_2;
  bVar1 = *(char *)((long)param_1 + 0x81) == '\x01';
  plVar2 = param_1;
  if ((((bVar1) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) &&
      ((*(byte *)((long)param_1 + 0x82) & 1) == 0)) && (func_0x00010899d85c(), bVar1)) {
    plVar2 = param_1;
    FUN_10899cfa4();
    if ((ulong)plVar2 >> 0x20 == 0) {
      param_1 = param_1 + 0x1a;
      if (*param_1 == 0) {
        return param_1;
      }
      *(undefined1 *)(*param_1 + 4) = 0;
      if (*param_1 != 0) {
        FUN_10899d2d4();
      }
      *param_1 = 0;
      return param_1;
    }
    if (param_1[0x1a] == 0) {
      func_0x00010899d798(0x10899d000);
      func_0x00010899d77c();
      func_0x00010899d334(param_1 + 0x1a,&lStack_28);
      plVar2 = &lStack_28;
      FUN_10899d2a8(plVar2);
      func_0x00010899d7d0(uStack_38);
    }
  }
  return plVar2;
}



/* Entry: 10899ce4c; end: 10899ceab;  */

ulong FUN_10899ce4c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x94) == '\x01') {
    lVar3 = param_1 + 0x58;
    func_0x000107c27bdc();
    iVar1 = *(int *)(lVar3 + 0x20) * *(int *)(lVar3 + 0x1c);
    iVar2 = *(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x8c);
    if (iVar2 != iVar1) {
      uVar5 = (ulong)(iVar2 <= iVar1);
      uVar4 = 0x100000000;
      goto LAB_10899cea4;
    }
  }
  uVar4 = 0;
  uVar5 = 0;
LAB_10899cea4:
  return uVar5 | uVar4;
}



/* Entry: 10899ceac; end: 10899cfa3;  */

undefined8 ** FUN_10899ceac(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 **ppuVar1;
  long lVar2;
  int iVar3;
  undefined1 in_ZR;
  long *plVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **ppuVar11;
  ulong uVar12;
  undefined8 **ppuVar13;
  long *unaff_x19;
  undefined8 *puStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined8 uStack_38;
  
  puVar7 = param_2;
  func_0x00010899d834();
  puStack_a8 = puVar7;
  uStack_38 = extraout_x8;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  uStack_98 = 0x10899d578;
  ppuStack_90 = &PTR_FUN_110aa4118;
  plVar4 = (long *)0x10;
  uStack_a0 = param_3;
  __Znwm();
  *plVar4 = (long)param_2;
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2);
    param_3 = uStack_a0;
  }
  *(undefined4 *)(plVar4 + 1) = param_3;
  plStack_88 = plVar4;
  (**(code **)(*unaff_x19 + 0x10))();
  func_0x00010899d7e0();
  ppuVar5 = &puStack_a8;
  FUN_108995704();
  func_0x00010899d848(uStack_38);
  if ((bool)in_ZR) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  __ZdlPv(plVar4);
  ppuVar5 = &puStack_a8;
  FUN_108995704();
  func_0x00010899d7bc();
  if (*(char *)((long)ppuVar5 + 0x94) != '\x01') {
    uVar9 = 0;
    uVar10 = 0;
    goto LAB_10899d130;
  }
  if ((undefined8 *)0x1 < ppuVar5[0xc]) {
    ppuVar1 = ppuVar5 + 0xe;
    iVar3 = *(int *)(ppuVar5 + 0x12) * *(int *)((long)ppuVar5 + 0x8c);
    ppuVar13 = ppuVar1;
    ppuVar6 = ppuVar1;
    while (ppuVar11 = (undefined8 **)*ppuVar6, ppuVar11 != (undefined8 **)0x0) {
      iVar8 = *(int *)(ppuVar11 + 4) * *(int *)((long)ppuVar11 + 0x1c);
      lVar2 = 8;
      if (iVar3 <= iVar8) {
        lVar2 = 0;
      }
      ppuVar6 = (undefined8 **)((long)ppuVar11 + lVar2);
      if (iVar3 <= iVar8) {
        ppuVar13 = ppuVar11;
      }
    }
    if ((((ppuVar1 == ppuVar13) ||
         (iVar3 < *(int *)(ppuVar13 + 4) * *(int *)((long)ppuVar13 + 0x1c))) ||
        ((*(ulong *)((long)ppuVar13 + 0x34) >> 0x20 & 1) == 0)) ||
       (iVar8 = (int)*(ulong *)((long)ppuVar13 + 0x34), *(int *)(ppuVar5 + 0x15) < iVar8)) {
      if ((*(char *)(ppuVar5 + 0x16) == '\x01') &&
         (*(int *)(ppuVar5 + 0x15) < *(int *)((long)ppuVar5 + 0xac))) {
        ppuVar6 = ppuVar5 + 0xb;
        func_0x000107c27bdc();
        if (iVar3 < *(int *)(ppuVar6 + 4) * *(int *)((long)ppuVar6 + 0x1c)) {
          iVar3 = *(int *)(ppuVar5 + 0x12) * *(int *)((long)ppuVar5 + 0x8c);
          ppuVar13 = ppuVar1;
          ppuVar6 = ppuVar1;
          while (ppuVar11 = ppuVar13, ppuVar13 = (undefined8 **)*ppuVar6,
                ppuVar13 != (undefined8 **)0x0) {
            iVar8 = *(int *)(ppuVar13 + 4) * *(int *)((long)ppuVar13 + 0x1c);
            lVar2 = 0;
            if (iVar8 <= iVar3) {
              lVar2 = 8;
            }
            ppuVar6 = (undefined8 **)((long)ppuVar13 + lVar2);
            if (iVar8 <= iVar3) {
              ppuVar13 = ppuVar11;
            }
          }
          if (((ppuVar1 == ppuVar11) ||
              (uVar12 = *(ulong *)((long)ppuVar11 + 0x34), (uVar12 >> 0x20 & 1) == 0)) ||
             (*(int *)(ppuVar5 + 0x15) < (int)uVar12)) {
            uVar9 = 0x100000000;
            uVar10 = 1;
          }
          else {
            uVar9 = 0;
            uVar10 = 0;
            *(int *)((long)ppuVar5 + 0xac) = (int)uVar12;
            *(char *)(ppuVar5 + 0x16) = (char)(uVar12 >> 0x20);
          }
          goto LAB_10899d130;
        }
        if (*(char *)(ppuVar5 + 0x16) == '\x01') {
          uVar9 = 0;
          uVar10 = 0;
          *(undefined1 *)(ppuVar5 + 0x16) = 0;
          goto LAB_10899d130;
        }
      }
    }
    else if (*(int *)(ppuVar5[10] + 4) * *(int *)((long)ppuVar5[10] + 0x1c) < iVar3) {
      uVar10 = 0;
      *(int *)((long)ppuVar5 + 0xac) = iVar8;
      *(undefined1 *)(ppuVar5 + 0x16) = 1;
      uVar9 = 0x100000000;
      goto LAB_10899d130;
    }
  }
  uVar9 = 0;
  uVar10 = 0;
LAB_10899d130:
  return (undefined8 **)(uVar10 | uVar9);
}



/* Entry: 10899cfa4; end: 10899d14f;  */

ulong FUN_10899cfa4(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  if (*(char *)(param_1 + 0x94) != '\x01') {
    uVar5 = 0;
    uVar6 = 0;
    goto LAB_10899d130;
  }
  if (1 < *(ulong *)(param_1 + 0x60)) {
    plVar1 = (long *)(param_1 + 0x70);
    iVar2 = *(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x8c);
    plVar10 = plVar1;
    plVar9 = plVar1;
    while (plVar7 = (long *)*plVar9, plVar7 != (long *)0x0) {
      iVar4 = *(int *)(plVar7 + 4) * *(int *)((long)plVar7 + 0x1c);
      lVar3 = 8;
      if (iVar2 <= iVar4) {
        lVar3 = 0;
      }
      plVar9 = (long *)((long)plVar7 + lVar3);
      if (iVar2 <= iVar4) {
        plVar10 = plVar7;
      }
    }
    if ((((plVar1 == plVar10) || (iVar2 < (int)plVar10[4] * *(int *)((long)plVar10 + 0x1c))) ||
        ((*(ulong *)((long)plVar10 + 0x34) >> 0x20 & 1) == 0)) ||
       (iVar4 = (int)*(ulong *)((long)plVar10 + 0x34), *(int *)(param_1 + 0xa8) < iVar4)) {
      if ((*(char *)(param_1 + 0xb0) == '\x01') &&
         (*(int *)(param_1 + 0xa8) < *(int *)(param_1 + 0xac))) {
        lVar3 = param_1 + 0x58;
        func_0x000107c27bdc();
        if (iVar2 < *(int *)(lVar3 + 0x20) * *(int *)(lVar3 + 0x1c)) {
          iVar2 = *(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x8c);
          plVar10 = plVar1;
          plVar9 = plVar1;
          while (plVar7 = plVar10, plVar10 = (long *)*plVar9, plVar10 != (long *)0x0) {
            iVar4 = (int)plVar10[4] * *(int *)((long)plVar10 + 0x1c);
            lVar3 = 0;
            if (iVar4 <= iVar2) {
              lVar3 = 8;
            }
            plVar9 = (long *)((long)plVar10 + lVar3);
            if (iVar4 <= iVar2) {
              plVar10 = plVar7;
            }
          }
          if (((plVar1 == plVar7) ||
              (uVar8 = *(ulong *)((long)plVar7 + 0x34), (uVar8 >> 0x20 & 1) == 0)) ||
             (*(int *)(param_1 + 0xa8) < (int)uVar8)) {
            uVar5 = 0x100000000;
            uVar6 = 1;
          }
          else {
            uVar5 = 0;
            uVar6 = 0;
            *(int *)(param_1 + 0xac) = (int)uVar8;
            *(char *)(param_1 + 0xb0) = (char)(uVar8 >> 0x20);
          }
          goto LAB_10899d130;
        }
        if (*(char *)(param_1 + 0xb0) == '\x01') {
          uVar5 = 0;
          uVar6 = 0;
          *(undefined1 *)(param_1 + 0xb0) = 0;
          goto LAB_10899d130;
        }
      }
    }
    else if (*(int *)(*(long *)(param_1 + 0x50) + 0x20) * *(int *)(*(long *)(param_1 + 0x50) + 0x1c)
             < iVar2) {
      uVar6 = 0;
      *(int *)(param_1 + 0xac) = iVar4;
      *(undefined1 *)(param_1 + 0xb0) = 1;
      uVar5 = 0x100000000;
      goto LAB_10899d130;
    }
  }
  uVar5 = 0;
  uVar6 = 0;
LAB_10899d130:
  return uVar6 | uVar5;
}



/* Entry: 10899d150; end: 10899d237;  */

void FUN_10899d150(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 uVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined1 uStack_89;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 uStack_68;
  long *aplStack_60 [2];
  code *pcStack_50;
  code *pcStack_48;
  
  uVar4 = (undefined1)param_3;
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  lStack_88 = param_1;
  lStack_80 = lVar1;
  lStack_78 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010899d7f0();
      uVar4 = (undefined1)param_3;
    } while (extraout_w10 != 0);
  }
  uStack_68 = CONCAT31(uStack_68._1_3_,uVar4);
  plVar3 = (long *)0x28;
  lStack_70 = param_2;
  __Znwm();
  *plVar3 = param_1;
  plVar3[1] = lVar1;
  lStack_80 = 0;
  lStack_78 = 0;
  plVar3[2] = lVar2;
  plVar3[3] = lStack_70;
  *(undefined4 *)(plVar3 + 4) = uStack_68;
  pcStack_50 = FUN_10899d73c;
  pcStack_48 = FUN_10899d6a0;
  aplStack_60[0] = plVar3;
  FUN_10899d238(uVar5,aplStack_60,&uStack_89);
  func_0x00010899d7d0(pcStack_50);
  FUN_108995798(&lStack_80);
  return;
}



/* Entry: 10899d238; end: 10899d2a3;  */

void FUN_10899d238(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_41;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  FUN_10897dc10(auStack_40);
  (**(code **)(*param_1 + 8))(param_1,auStack_40,&uStack_41,param_3);
  func_0x00010899d7d0(uStack_30);
  return;
}



/* Entry: 10899d2a4; end: 10899d2a7;  */

void FUN_10899d2a4(void)

{
  return;
}



/* Entry: 10899d2a8; end: 10899d2d3;  */

long * FUN_10899d2a8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10899d2d4();
  }
  return param_1;
}



/* Entry: 10899d2d4; end: 10899d377;  */

bool FUN_10899d2d4(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  do {
    iVar1 = *param_1;
    iVar4 = iVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    __ZdlPv();
  }
  return iVar1 != 1;
}



/* Entry: 10899d378; end: 10899d37f;  */

void FUN_10899d378(void)

{
  return;
}



/* Entry: 10899d380; end: 10899d46f;  */

void FUN_10899d380(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  int extraout_w10;
  undefined8 uVar9;
  undefined1 uStack_89;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined4 uStack_68;
  long *aplStack_60 [2];
  code *pcStack_50;
  code *pcStack_48;
  
  if (*(long **)(param_1 + 0x10) == (long *)0x0) {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    if (*(char *)(param_1 + 0x20) == '\x01') {
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    lVar4 = *(long *)(param_1 + 8);
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    plVar3 = *(long **)(param_2 + 8);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
      plVar5 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0x28))();
      plVar5 = *(long **)(param_2 + 8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x30))();
      }
    }
    if (*(char *)(param_1 + 0x20) == '\x01') {
      if (*(int *)(param_1 + 0x18) == (int)plVar3 && *(int *)(param_1 + 0x1c) == (int)plVar5) {
        return;
      }
      uVar6 = (ulong)plVar3 & 0xffffffff | (long)plVar5 << 0x20;
    }
    else {
      uVar6 = (ulong)plVar3 & 0xffffffff | (long)plVar5 << 0x20;
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    *(ulong *)(param_1 + 0x18) = uVar6;
    lVar4 = *(long *)(param_1 + 8);
    uVar8 = 1;
  }
  uVar7 = (undefined1)uVar8;
  uVar9 = *(undefined8 *)(lVar4 + 0xc0);
  lVar1 = *(long *)(lVar4 + 8);
  lVar2 = *(long *)(lVar4 + 0x10);
  lStack_88 = lVar4;
  lStack_80 = lVar1;
  lStack_78 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010899d7f0();
      uVar7 = (undefined1)uVar8;
    } while (extraout_w10 != 0);
  }
  uStack_68 = CONCAT31(uStack_68._1_3_,uVar7);
  plVar3 = (long *)0x28;
  uStack_70 = uVar6;
  __Znwm();
  *plVar3 = lVar4;
  plVar3[1] = lVar1;
  lStack_80 = 0;
  lStack_78 = 0;
  plVar3[2] = lVar2;
  plVar3[3] = uStack_70;
  *(undefined4 *)(plVar3 + 4) = uStack_68;
  pcStack_50 = FUN_10899d73c;
  pcStack_48 = FUN_10899d6a0;
  aplStack_60[0] = plVar3;
  FUN_10899d238(uVar9,aplStack_60,&uStack_89);
  func_0x00010899d7d0(pcStack_50);
  FUN_108995798(&lStack_80);
  return;
}



/* Entry: 10899d470; end: 10899d49f;  */

void FUN_10899d470(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010899d480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
    return;
  }
  return;
}



/* Entry: 10899d4a0; end: 10899d4c3;  */

undefined8 FUN_10899d4a0(undefined8 param_1)

{
  FUN_10899d4c4(param_1,0);
  return param_1;
}



/* Entry: 10899d4c4; end: 10899d4db;  */

void FUN_10899d4c4(long *param_1,long param_2)

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



/* Entry: 10899d4dc; end: 10899d543;  */

void FUN_10899d4dc(long param_1)

{
  long lVar1;
  long *plStack_30;
  long lStack_28;
  
  plStack_30 = (long *)0x0;
  lStack_28 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar1;
    if (lVar1 != 0) {
      plStack_30 = *(long **)(param_1 + 0x18);
      if (plStack_30 != (long *)0x0) {
        (**(code **)(*plStack_30 + 0x30))(plStack_30,param_1 + 0x10);
      }
    }
  }
  func_0x0001089956ac(&plStack_30);
  return;
}



/* Entry: 10899d544; end: 10899d587;  */

long FUN_10899d544(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x10;
}



/* Entry: 10899d588; end: 10899d5a7;  */

void FUN_10899d588(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108995704();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10899d5a8; end: 10899d5bf;  */

void FUN_10899d5a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10899d5c0; end: 10899d69f;  */

undefined8 FUN_10899d5c0(void)

{
  ulong uVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  ulong unaff_x20;
  
  func_0x00010899d820();
  if ((((extraout_x8 & 1) == 0) && ((*(byte *)(unaff_x20 + 0x82) & 1) == 0)) &&
     (*(char *)(unaff_x20 + 0x94) == '\x01')) {
    uVar1 = unaff_x20;
    FUN_10899ce4c();
    if (uVar1 >> 0x20 == 0) {
      unaff_x19 = 0x7fffffffffffffff;
    }
    else {
      FUN_108999400(*(undefined8 *)(unaff_x20 + 0xb8),uVar1);
      FUN_10899ceac(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x98),uVar1);
    }
  }
  return unaff_x19;
}



/* Entry: 10899d6a0; end: 10899d73b;  */

void FUN_10899d6a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_30;
  long lStack_28;
  
  plVar3 = (long *)*param_1;
  lVar2 = *plVar3;
  lStack_30 = 0;
  lStack_28 = 0;
  lVar1 = plVar3[2];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar1;
    if ((lVar1 != 0) && (lStack_30 = plVar3[1], lStack_30 != 0)) {
      if ((char)plVar3[4] == '\x01') {
        lVar1 = lVar2 + 0x68;
        FUN_1089913f4(lVar1,plVar3 + 3);
        *(long *)(lVar2 + 0x8c) = lVar1;
        *(undefined1 *)(lVar2 + 0x94) = 1;
        func_0x00010899cca4(lVar2);
        func_0x00010899cd44(lVar2);
      }
      else {
        *(undefined8 *)(lVar2 + 0x8c) = 0;
        *(undefined1 *)(lVar2 + 0x94) = 0;
      }
    }
  }
  func_0x00010899563c(&lStack_30);
  return;
}



/* Entry: 10899d73c; end: 10899d77b;  */

void FUN_10899d73c(ulong param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if ((param_1 & 1) != 0) {
    if (lVar1 != 0) {
      FUN_108995798(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  *param_3 = lVar1;
  return;
}



/* Entry: 10899d77c; end: 10899d867;  */

/* WARNING: Possible PIC construction at 0x000108afaa98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108afaa9c) */
/* WARNING: Removing unreachable block (ram,0x000108afab20) */
/* WARNING: Removing unreachable block (ram,0x000108afab08) */

undefined1 * FUN_10899d77c(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  long unaff_x29;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_e0 [64];
  int *piStack_a0;
  undefined1 auStack_78 [56];
  
  func_0x000108afaffc(unaff_x29 + -0x18);
  func_0x0001089fa798(&piStack_a0);
  func_0x000108afae64(auStack_e0,&stack0x00000008);
  if (piStack_a0 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piStack_a0,0x10);
      if (bVar2) {
        *piStack_a0 = *piStack_a0 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_120 = param_1;
  func_0x000108afae64(auStack_78,auStack_e0);
  func_0x000108afafd0();
  uStack_128 = param_1;
  func_0x0001089801d4(&uStack_128,0);
  return &stack0xffffffffffffff68;
}



/* Entry: 10899d868; end: 1089a009f;  */

void FUN_10899d868(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010899d8a8(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010899de9c(&uStack_30);
  return;
}



/* Entry: 1089a00a0; end: 1089a00cf;  */

undefined8 * FUN_1089a00a0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1089a00d0(param_1 + 3);
  return param_1;
}



/* Entry: 1089a00d0; end: 1089a00ef;  */

void FUN_1089a00d0(void)

{
  undefined1 uStack_11;
  
  FUN_1089a0190(&uStack_11);
  return;
}



/* Entry: 1089a00f0; end: 1089a018f;  */

ulong FUN_1089a00f0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  plVar4 = (long *)param_1[3];
  (**(code **)(*plVar4 + 0x10))();
  uVar3 = *(uint *)(param_1 + 2);
  if ((uVar3 & 1) == 0) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  lVar1 = *param_1;
  lVar2 = param_1[1];
  *param_1 = param_2;
  param_1[1] = (long)plVar4;
  if (((uVar3 & lVar1 <= param_2) == 1) && (999 < (long)plVar4 - lVar2)) {
    uVar5 = (ulong)((long)plVar4 - lVar2) / 1000;
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = (ulong)((param_2 - lVar1) * 1000000) / uVar5;
    }
    uVar6 = uVar7 & 0xffffff00;
    uVar7 = uVar7 & 0xff;
    uVar5 = 0x100000000;
  }
  else {
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
  return uVar7 | uVar5 | uVar6;
}



/* Entry: 1089a0190; end: 1089a0227;  */

undefined1 * FUN_1089a0190(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_1089a0228(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_FUN_110aa4ea0;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_110a9c628;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x0001089a02a4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_1089a0250();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1089a0228; end: 1089a024f;  */

long FUN_1089a0228(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1089a0250();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1089a0250; end: 1089a026b;  */

void FUN_1089a0250(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110aa4ea0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1089a026c; end: 1089a026f;  */

void FUN_1089a026c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa4ea0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1089a0270; end: 1089a0283;  */

void FUN_1089a0270(void)

{
  func_0x0001089a0294();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089a0284; end: 1089a02bb;  */

void FUN_1089a0284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001089a028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1089a02bc; end: 1089a03b3;  */

void FUN_1089a02bc(ushort *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  
  FUN_1089a045c(param_1);
  if (*param_2 != *param_3) {
    *param_1 = *param_3 | 0x100;
  }
  if (param_2[1] != param_3[1]) {
    param_1[1] = param_3[1] | 0x100;
  }
  if (param_2[2] != param_3[2]) {
    param_1[2] = param_3[2] | 0x100;
  }
  if (param_2[8] != param_3[8]) {
    param_1[4] = param_3[8] | 0x100;
  }
  pbVar1 = param_2 + 0x10;
  FUN_108b81594(pbVar1,param_3 + 0x10);
  if (((ulong)pbVar1 & 1) == 0) {
    FUN_1089a03b4(param_1 + 8,param_3 + 0x10);
  }
  if (param_2[0x38] != param_3[0x38]) {
    param_1[0x20] = param_3[0x38] | 0x100;
  }
  param_2 = param_2 + 0x40;
  func_0x0001089a03ec(param_2,param_3 + 0x40);
  if (((ulong)param_2 & 1) == 0) {
    func_0x0001089a0424(param_1 + 0x24,param_3 + 0x40);
  }
  return;
}



/* Entry: 1089a03b4; end: 1089a045b;  */

long FUN_1089a03b4(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10897a608();
  }
  else {
    FUN_1089a0480();
  }
  return param_1;
}



/* Entry: 1089a045c; end: 1089a047f;  */

void FUN_1089a045c(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}



/* Entry: 1089a0480; end: 1089a049b;  */

void FUN_1089a0480(long param_1)

{
  FUN_108976500();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 1089a049c; end: 1089a1be3;  */

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffffffffffe90 */

void FUN_1089a049c(ulong *****param_1,ulong *****param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *****pppppuVar3;
  ulong **ppuVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined1 uVar8;
  uint uVar9;
  ulong *puVar10;
  char cVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  ulong *****pppppuVar15;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint uVar16;
  uint extraout_w8_02;
  uint extraout_w8_03;
  ulong *****extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong *extraout_x8_02;
  ulong *puVar17;
  long lVar18;
  undefined8 extraout_x8_03;
  ulong uVar19;
  long extraout_x8_04;
  undefined1 *puVar20;
  ulong ***pppuVar21;
  undefined8 extraout_x9;
  ulong ****ppppuVar22;
  ulong ****ppppuVar23;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  ulong extraout_x9_02;
  ulong *****pppppuVar24;
  undefined8 extraout_x9_03;
  undefined8 *puVar25;
  long extraout_x9_04;
  ulong ***pppuVar26;
  ulong *****pppppuVar27;
  ulong *****extraout_x10;
  ulong *****pppppuVar28;
  ulong *****pppppuVar29;
  undefined8 extraout_x12;
  undefined8 extraout_x12_00;
  undefined **unaff_x19;
  ulong *****unaff_x20;
  ulong *****unaff_x21;
  ulong *****unaff_x22;
  ulong *****unaff_x23;
  uint uVar30;
  undefined **unaff_x24;
  ulong *****pppppuVar31;
  undefined8 *unaff_x25;
  uint uVar32;
  ulong *****unaff_x26;
  undefined **unaff_x27;
  undefined **ppuVar33;
  ulong ****unaff_x28;
  undefined8 uVar34;
  ulong uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  ulong ****ppppuVar38;
  ulong ***pppuStack_438;
  ulong ****ppppuStack_430;
  undefined8 uStack_428;
  ulong ***pppuStack_420;
  ulong ***pppuStack_418;
  ulong ****ppppuStack_410;
  undefined8 *puStack_408;
  undefined **ppuStack_400;
  ulong ****ppppuStack_3f8;
  ulong ****ppppuStack_3f0;
  ulong ****ppppuStack_3e8;
  ulong ****ppppuStack_3e0;
  ulong ****ppppuStack_3d8;
  undefined1 *puStack_3d0;
  code *pcStack_3c8;
  ulong ****ppppuStack_3c0;
  ulong ***pppuStack_3b8;
  uint uStack_3ac;
  ulong *puStack_3a8;
  ulong ****ppppuStack_3a0;
  ulong ****ppppuStack_398;
  ulong ****ppppuStack_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  ulong ****ppppuStack_380;
  undefined8 *puStack_378;
  ulong ****ppppuStack_370;
  ulong ****ppppuStack_368;
  ulong ****ppppuStack_360;
  ulong ****ppppuStack_358;
  undefined8 uStack_350;
  ulong ****ppppuStack_348;
  uint uStack_33c;
  ulong ****ppppuStack_338;
  undefined8 *puStack_330;
  ulong ****ppppuStack_328;
  ulong ***pppuStack_320;
  ulong ****ppppuStack_318;
  ulong ****ppppuStack_310;
  ulong ***pppuStack_308;
  ulong ***pppuStack_300;
  ulong **ppuStack_2f8;
  long lStack_2f0;
  ulong ***pppuStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  ulong ****ppppuStack_280;
  ulong ****ppppuStack_278;
  ulong ***pppuStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  ulong ***pppuStack_218;
  undefined8 uStack_210;
  ulong ****ppppuStack_208;
  ulong ****ppppuStack_200;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint auStack_1e8 [2];
  uint uStack_1e0;
  undefined1 uStack_1d8;
  undefined1 auStack_1d0 [9];
  undefined4 uStack_1c7;
  undefined1 auStack_1c0 [8];
  byte abStack_1b8 [16];
  undefined1 uStack_1a8;
  uint uStack_1a0;
  undefined1 uStack_19c;
  char acStack_198 [8];
  ulong ****ppppuStack_190;
  ulong uStack_188;
  char cStack_180;
  ulong ***pppuStack_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  ulong ***pppuStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  ulong ****ppppuStack_138;
  ulong ***pppuStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined1 uStack_d8;
  ulong uStack_d0;
  ulong ****ppppuStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [48];
  undefined8 uStack_88;
  
  func_0x0001089a28e8();
  *(undefined1 *)extraout_x8 = 0;
  *(undefined1 *)(extraout_x8 + 5) = 0;
  *(undefined1 *)(extraout_x8 + 6) = 0;
  ppppuStack_368 = (ulong ****)(extraout_x8 + 9);
  *(undefined1 *)ppppuStack_368 = 0;
  *(undefined1 *)((long)extraout_x8 + 0x44) = 0;
  *(undefined1 *)(extraout_x8 + 0x1d) = 0;
  ppppuStack_338 = (ulong ****)(extraout_x8 + 0x1e);
  *(undefined1 *)ppppuStack_338 = 0;
  *(undefined1 *)(extraout_x8 + 0x27) = 0;
  *(undefined1 *)(extraout_x8 + 0x28) = 0;
  *(undefined1 *)(extraout_x8 + 0x3e) = 0;
  *(undefined1 *)(extraout_x8 + 0x3f) = 0;
  *(undefined1 *)(extraout_x8 + 0x42) = 0;
  *(undefined1 *)(extraout_x8 + 0x43) = 0;
  *(undefined1 *)(extraout_x8 + 0x48) = 0;
  extraout_x8[0x4b] = (ulong ****)0x0;
  extraout_x8[0x4a] = (ulong ****)0x0;
  extraout_x8[0x49] = (ulong ****)(extraout_x8 + 0x4a);
  ppppuStack_310 = (ulong ****)extraout_x8;
  uStack_88 = extraout_x9;
  if (*(int *)(param_1 + 0xc) == 5) {
    ppppuStack_348 = (ulong ****)(extraout_x8 + 0x28);
    ppppuStack_360 = (ulong ****)(extraout_x8 + 0x3f);
    ppppuStack_3c0 = (ulong ****)(extraout_x8 + 0x43);
    ppppuVar22 = param_1[3];
    ppppuStack_328 = (ulong ****)(extraout_x8 + 0x49);
    uStack_3ac = *(uint *)(param_1 + 2);
    unaff_x23 = param_1 + 3;
    if (((ulong)ppppuVar22 & 1) != 0) {
      unaff_x23 = (ulong *****)((long)ppppuVar22 + 7);
    }
    ppppuStack_318 = (ulong ****)(unaff_x23 + *(int *)(param_1 + 4));
    puStack_330 = &uStack_120;
    pppuStack_320 = &ppuStack_2f8;
    ppppuStack_370 = (ulong ****)&ppppuStack_138;
    puStack_378 = &uStack_108;
    ppppuStack_380 = (ulong ****)&ppppuStack_c8;
    ppppuStack_3a0 = (ulong ****)(extraout_x8 + 0x37);
    puStack_3a8 = &uStack_188;
    ppppuStack_398 = (ulong ****)(extraout_x8 + 0x1b);
    pppuStack_3b8 = (ulong ***)&uStack_170;
    unaff_x24 = &PTR_PTR_11337ce98;
    ppppuStack_390 = (ulong ****)param_1;
    ppppuStack_358 = (ulong ****)(extraout_x8 + 0x4a);
    for (; unaff_x25 = &uStack_140, unaff_x23 != (ulong *****)ppppuStack_318;
        unaff_x23 = unaff_x23 + 1) {
      unaff_x21 = (ulong *****)*unaff_x23;
      iVar5 = *(int *)((long)unaff_x21 + 0xb4);
      pppppuVar27 = param_1;
      if (iVar5 == 1) {
        if ((*(char *)(unaff_x21 + 2) < '\0') && (((ulong)unaff_x21[0x13][2] & 1) != 0)) {
          pppuStack_2e8 = unaff_x21[0x13][3];
          func_0x0001089a28a4();
          unaff_x22 = (ulong *****)*param_1;
          pppppuVar27 = param_1;
          if (unaff_x22 == (ulong *****)0x0) {
            unaff_x22 = (ulong *****)0xe8;
            __Znwm();
            uStack_1f8 = (uint)ppppuStack_358;
            uStack_1f4 = (uint)((ulong)ppppuStack_358 >> 0x20);
            uStack_1f0 = 1;
            uStack_1ec = 0;
            func_0x0001089a2878();
            func_0x0001089a20a8(unaff_x22 + 5);
            pppppuVar27 = (ulong *****)ppppuStack_328;
            param_2 = uStack_140;
            FUN_108977200(ppppuStack_328,uStack_140,param_1,unaff_x22);
            func_0x0001089a2954();
          }
          *(uint *)(unaff_x22 + 0x11) = *(byte *)(unaff_x21 + 0x15) ^ 1;
          *(undefined1 *)((long)unaff_x22 + 0x8c) = 1;
          unaff_x26 = param_1;
        }
      }
      else if (iVar5 == 0xc) {
        iVar5 = *(int *)(unaff_x21 + 4);
        if (((iVar5 == 0) && (*(int *)(unaff_x21 + 7) == 0)) && (*(int *)(unaff_x21 + 10) == 0)) {
          func_0x0001089a28f8();
          abStack_1b8[0] = 0;
          uVar16 = extraout_w8_01;
        }
        else {
          *ppppuStack_370 = (ulong ***)0x0;
          ppppuStack_370[1] = (ulong ***)0x0;
          *puStack_330 = 0;
          puStack_330[1] = 0;
          *puStack_378 = 0;
          puStack_378[1] = 0;
          ppppuVar22 = unaff_x21[3];
          unaff_x19 = (undefined **)(unaff_x21 + 3);
          if (((ulong)ppppuVar22 & 1) != 0) {
            unaff_x19 = (undefined **)((long)ppppuVar22 + 7);
          }
          uStack_140 = (ulong *****)ppppuStack_370;
          puStack_128 = puStack_330;
          uStack_110 = puStack_378;
          for (lVar18 = (long)iVar5 << 3; lVar18 != 0; lVar18 = lVar18 + -8) {
            func_0x0001089a2928(*(ulong ****)((long)*unaff_x19 + 0x18),&uStack_140);
            unaff_x19 = unaff_x19 + 1;
          }
          func_0x0001089a2864();
          for (lVar18 = extraout_x8_00 << 3; lVar18 != 0; lVar18 = lVar18 + -8) {
            func_0x0001089a2928(*(ulong ****)((long)*unaff_x19 + 0x18),&puStack_128);
            unaff_x19 = unaff_x19 + 1;
          }
          func_0x0001089a28cc(unaff_x21[9]);
          for (lVar18 = 0; lVar18 != 0; lVar18 = lVar18 + -8) {
            func_0x0001089a2928(*(ulong ****)((long)*unaff_x19 + 0x18),unaff_x21 + 0xf);
            unaff_x19 = unaff_x19 + 1;
          }
          func_0x0001089a2998();
          FUN_1089a1e98();
          abStack_1b8[0] = 1;
          FUN_108976a5c(&uStack_140);
          uVar16 = (uint)abStack_1b8[0];
          unaff_x20 = (ulong *****)0x0;
        }
        bVar7 = *(byte *)(ppppuStack_310 + 0x27);
        if (bVar7 == uVar16) {
          if (bVar7 != 0) {
            func_0x000107c2a6b8(ppppuStack_338,&ppppuStack_200);
            unaff_x19 = (undefined **)ppppuStack_310;
            unaff_x20 = &ppppuStack_200;
            func_0x000107c2a6b8(ppppuStack_310 + 0x21,auStack_1e8);
            param_2 = (ulong *****)auStack_1d0;
            func_0x000107c2a6b8(unaff_x19 + 0x24);
          }
        }
        else if (bVar7 == 0) {
          param_2 = &ppppuStack_200;
          FUN_1089a1e98(ppppuStack_338);
          *(undefined1 *)(ppppuStack_310 + 0x27) = 1;
        }
        else {
          FUN_108976a5c(ppppuStack_338);
          *(undefined1 *)(ppppuStack_310 + 0x27) = 0;
        }
        pppppuVar27 = &ppppuStack_200;
        func_0x000108976e60();
      }
      else if (iVar5 == 0x14) {
        ppppuVar22 = (ulong ****)&PTR_PTR_11337d0f8;
        if (unaff_x21[0x11] != (ulong ****)0x0) {
          ppppuVar22 = unaff_x21[0x11];
        }
        FUN_1089a1be4(&ppppuStack_280,ppppuVar22 + 3);
        puVar25 = puStack_330;
        ppppuStack_138 = (ulong ****)0x0;
        uStack_140 = (ulong *****)0x0;
        puStack_128 = (undefined8 *)0x0;
        pppuStack_130 = (ulong ***)0x0;
        uStack_120 = CONCAT44(uStack_120._4_4_,0x3f800000);
        for (lVar18 = 0; lVar18 != 0x1c; lVar18 = lVar18 + 4) {
          uStack_220 = CONCAT44(uStack_220._4_4_,*(undefined4 *)(&UNK_10df7cea0 + lVar18));
          pppppuVar27 = &ppppuStack_280;
          FUN_1089667f8(pppppuVar27,&uStack_220);
          if (pppppuVar27 != (ulong *****)0x0) {
            pppppuVar27 = &ppppuStack_280;
            FUN_1089806ec(pppppuVar27,&uStack_220);
            unaff_x26 = (ulong *****)ppppuStack_138;
            uVar30 = (uint)uStack_220;
            pppppuVar28 = (ulong *****)(uStack_220 & 0xffffffff);
            uVar16 = *(uint *)pppppuVar27;
            unaff_x28 = (ulong ****)(ulong)uVar16;
            if ((ulong *****)ppppuStack_138 != (ulong *****)0x0) {
              puVar20 = (undefined1 *)((long)ppppuStack_138 + -1);
              uVar32 = (uint)ppppuStack_138;
              if (((ulong)ppppuStack_138 & (ulong)puVar20) == 0) {
                unaff_x19 = (undefined **)(ulong)(uVar32 - 1 & (uint)uStack_220);
              }
              else {
                unaff_x19 = (undefined **)pppppuVar28;
                if (ppppuStack_138 <= pppppuVar28) {
                  uVar9 = 0;
                  if (uVar32 != 0) {
                    uVar9 = (uint)uStack_220 / uVar32;
                  }
                  unaff_x19 = (undefined **)(ulong)((uint)uStack_220 - uVar9 * uVar32);
                }
              }
              ppppuVar23 = uStack_140[(long)unaff_x19];
              if (ppppuVar23 != (ulong ****)0x0) {
                do {
                  while( true ) {
                    ppppuVar23 = (ulong ****)*ppppuVar23;
                    if (ppppuVar23 == (ulong ****)0x0) goto LAB_1089a0720;
                    pppppuVar27 = (ulong *****)ppppuVar23[1];
                    if (pppppuVar27 != pppppuVar28) break;
                    if (*(uint *)(ppppuVar23 + 2) == (uint)uStack_220) goto LAB_1089a084c;
                  }
                  if (((ulong)ppppuStack_138 & (ulong)puVar20) == 0) {
                    pppppuVar27 = (ulong *****)((ulong)pppppuVar27 & (ulong)puVar20);
                  }
                  else if (ppppuStack_138 <= pppppuVar27) {
                    uVar19 = 0;
                    if ((ulong *****)ppppuStack_138 != (ulong *****)0x0) {
                      uVar19 = (ulong)pppppuVar27 / (ulong)ppppuStack_138;
                    }
                    pppppuVar27 = (ulong *****)((long)pppppuVar27 - uVar19 * (long)ppppuStack_138);
                  }
                } while (pppppuVar27 == (ulong *****)unaff_x19);
              }
            }
LAB_1089a0720:
            ppppuVar23 = (ulong ****)0x18;
            __Znwm();
            uStack_2d8 = 1;
            uStack_2d4 = 0;
            *ppppuVar23 = (ulong ***)0x0;
            ppppuVar23[1] = (ulong ***)pppppuVar28;
            *(uint *)(ppppuVar23 + 2) = uVar30;
            *(uint *)((long)ppppuVar23 + 0x14) = uVar16;
            pppuStack_2e8 = (ulong ***)ppppuVar23;
            uStack_2e0 = &pppuStack_130;
            if ((unaff_x26 == (ulong *****)0x0) ||
               ((float)uStack_120 * (float)unaff_x26 < (float)((long)puStack_128 + 1))) {
              func_0x0001089a2910((long)unaff_x26 << 1);
              func_0x00010895aee8(&uStack_140);
              unaff_x26 = (ulong *****)ppppuStack_138;
              if (((ulong)ppppuStack_138 & (ulong)((long)ppppuStack_138 + -1)) == 0) {
                unaff_x19 = (undefined **)(ulong)((int)ppppuStack_138 - 1U & uVar30);
              }
              else {
                unaff_x19 = (undefined **)pppppuVar28;
                if (ppppuStack_138 <= pppppuVar28) {
                  uVar19 = 0;
                  if ((ulong *****)ppppuStack_138 != (ulong *****)0x0) {
                    uVar19 = (ulong)pppppuVar28 / (ulong)ppppuStack_138;
                  }
                  unaff_x19 = (undefined **)((long)pppppuVar28 - uVar19 * (long)ppppuStack_138);
                }
              }
            }
            ppppuVar23 = uStack_140[(long)unaff_x19];
            if (ppppuVar23 == (ulong ****)0x0) {
              *pppuStack_2e8 = (ulong **)pppuStack_130;
              pppuStack_130 = pppuStack_2e8;
              uStack_140[(long)unaff_x19] = &pppuStack_130;
              if ((ulong ***)*pppuStack_2e8 != (ulong ***)0x0) {
                pppppuVar27 = (ulong *****)(*pppuStack_2e8)[1];
                if (((ulong)unaff_x26 & (ulong)((long)unaff_x26 + -1)) == 0) {
                  pppppuVar27 = (ulong *****)((ulong)pppppuVar27 & (ulong)((long)unaff_x26 + -1));
                }
                else if (unaff_x26 <= pppppuVar27) {
                  uVar19 = 0;
                  if (unaff_x26 != (ulong *****)0x0) {
                    uVar19 = (ulong)pppppuVar27 / (ulong)unaff_x26;
                  }
                  pppppuVar27 = (ulong *****)((long)pppppuVar27 - uVar19 * (long)unaff_x26);
                }
                uStack_140[(long)pppppuVar27] = (ulong ****)pppuStack_2e8;
              }
            }
            else {
              *pppuStack_2e8 = (ulong **)*ppppuVar23;
              *ppppuVar23 = pppuStack_2e8;
            }
            pppuStack_2e8 = (ulong ***)0x0;
            puStack_128 = (undefined8 *)((long)puStack_128 + 1);
            FUN_10895b38c(&pppuStack_2e8);
          }
LAB_1089a084c:
        }
        param_2 = (ulong *****)&uStack_140;
        FUN_1089a2764(&ppppuStack_280);
        func_0x000108959364(&uStack_140);
        bVar13 = (*(uint *)(ppppuVar22 + 2) & 1) != 0;
        if (bVar13) {
          pppuVar21 = ppppuVar22[9];
          uStack_384 = *(undefined4 *)((long)pppuVar21 + 0x1c);
          uStack_388 = *(undefined4 *)((long)pppuVar21 + 0x24);
          uStack_350 = CONCAT44(*(undefined4 *)(pppuVar21 + 3),*(undefined4 *)(pppuVar21 + 3)) &
                       0xffffff00000000ff;
        }
        else {
          uStack_350 = 0;
        }
        pppuStack_2e8 = (ulong ***)((ulong)pppuStack_2e8 & 0xffffffffffffff00);
        uStack_2a8 = uStack_2a8 & 0xffffffffffffff00;
        if ((*(uint *)(ppppuVar22 + 2) >> 1 & 1) != 0) {
          unaff_x19 = &PTR_PTR_11337cd10;
          ppuVar4 = (ulong **)unaff_x19;
          if (ppppuVar22[10][3] != (ulong **)0x0) {
            ppuVar4 = ppppuVar22[10][3];
          }
          FUN_1089a1ed0(&uStack_140,ppuVar4);
          pppuVar21 = (ulong ***)unaff_x24;
          if (ppppuVar22[10] != (ulong ***)0x0) {
            pppuVar21 = ppppuVar22[10];
          }
          ppuVar4 = (ulong **)unaff_x19;
          if (pppuVar21[4] != (ulong **)0x0) {
            ppuVar4 = pppuVar21[4];
          }
          FUN_1089a1ed0(puVar25,ppuVar4);
          param_2 = (ulong *****)&uStack_140;
          if ((char)uStack_2a8 == '\x01') {
            FUN_1089a1f6c();
          }
          else {
            FUN_1089a1f98(&pppuStack_2e8);
          }
          FUN_108958e50(&uStack_140);
        }
        uStack_33c = (uint)bVar13;
        *pppuStack_320 = (ulong **)0x0;
        pppuStack_320[1] = (ulong **)0x0;
        pppuStack_300 = pppuStack_320;
        func_0x0001089a2864();
        unaff_x22 = (ulong *****)0x1c;
        uVar16 = uStack_33c;
        for (unaff_x20 = (ulong *****)(extraout_x8_01 << 3); uStack_33c = uVar16,
            unaff_x20 != (ulong *****)0x0; unaff_x20 = unaff_x20 + -1) {
          unaff_x22 = (ulong *****)*unaff_x19;
          if ((((ulong)unaff_x22[2] & 1) == 0) || (((ulong)unaff_x22[3][2] & 1) == 0))
          goto LAB_1089a0fa4;
          pppuStack_308 = unaff_x22[3][3];
          ppppuVar23 = (ulong ****)unaff_x24;
          if (unaff_x22[4] != (ulong ****)0x0) {
            ppppuVar23 = unaff_x22[4];
          }
          pppuVar21 = (ulong ***)&PTR_PTR_11337cd10;
          if (ppppuVar23[3] != (ulong ***)0x0) {
            pppuVar21 = ppppuVar23[3];
          }
          FUN_1089a1ed0(&uStack_140,pppuVar21);
          ppppuVar23 = (ulong ****)unaff_x24;
          if (unaff_x22[4] != (ulong ****)0x0) {
            ppppuVar23 = unaff_x22[4];
          }
          pppuVar21 = (ulong ***)&PTR_PTR_11337cd10;
          if (ppppuVar23[4] != (ulong ***)0x0) {
            pppuVar21 = ppppuVar23[4];
          }
          FUN_1089a1ed0(puVar25,pppuVar21);
          unaff_x22 = (ulong *****)&pppuStack_300;
          param_2 = &ppppuStack_208;
          FUN_10895917c(unaff_x22,param_2,&pppuStack_308);
          pppuVar21 = pppuStack_308;
          unaff_x26 = (ulong *****)unaff_x24;
          unaff_x28 = (ulong ****)&PTR_PTR_11337cd10;
          if (*unaff_x22 == (ulong ****)0x0) {
            unaff_x26 = (ulong *****)0x68;
            __Znwm();
            pppuStack_218 = pppuStack_320;
            uStack_210 = 1;
            unaff_x26[4] = (ulong ****)pppuVar21;
            func_0x0001089a1fdc(unaff_x26 + 5,&uStack_140);
            param_2 = (ulong *****)ppppuStack_208;
            FUN_108959108(&pppuStack_300,ppppuStack_208,unaff_x22,unaff_x26);
            uStack_220 = 0;
            func_0x000108959284(&uStack_220);
            unaff_x28 = (ulong ****)pppuVar21;
          }
          FUN_108958e50(&uStack_140);
          unaff_x19 = unaff_x19 + 1;
          uVar16 = uStack_33c;
        }
        if (*(int *)(ppppuVar22 + 0xb) == 1 && lStack_2f0 == 0) {
LAB_1089a0fa4:
          ppppuStack_200 = (ulong ****)((ulong)ppppuStack_200 & 0xffffffffffffff00);
          uStack_160 = uStack_160 & 0xffffffffffffff00;
        }
        else {
          unaff_x19 = (undefined **)&uStack_140;
          unaff_x20 = (ulong *****)(ulong)uVar16;
          if (((uStack_3ac & 1) != 0) &&
             (((uVar16 == 0 || (puStack_268 == (undefined8 *)0x0)) || ((uStack_2a8 & 1) == 0))))
          goto LAB_1089a0fa4;
          uVar19 = (ulong)uStack_140 >> 0x20;
          uStack_140 = (ulong *****)CONCAT44((int)uVar19,*(int *)(ppppuVar22 + 0xb));
          FUN_10895ae60(ppppuStack_370,&ppppuStack_280);
          uStack_110 = (undefined8 *)CONCAT44(uStack_384,uStack_350._4_4_ | (uint)uStack_350);
          uStack_108._0_5_ = CONCAT14((char)uVar16,uStack_388);
          FUN_108958d70(&uStack_100,&pppuStack_2e8);
          param_2 = (ulong *****)&pppuStack_300;
          FUN_108958e78(auStack_b8);
          func_0x0001089a2998();
          FUN_1089a2020();
          uStack_160 = CONCAT71(uStack_160._1_7_,1);
          FUN_1089593f4(&uStack_140);
        }
        func_0x000108959300(&pppuStack_300);
        FUN_108958e30(&pppuStack_2e8);
        func_0x000108959364(&ppppuStack_280);
        ppppuVar22 = ppppuStack_310;
        cVar11 = *(char *)(ppppuStack_310 + 0x1d);
        if (cVar11 == (char)uStack_160) {
          if (cVar11 != '\0') {
            *(uint *)(ppppuStack_310 + 9) = (uint)ppppuStack_200;
            unaff_x20 = &ppppuStack_200;
            FUN_1089a2764(ppppuStack_310 + 10,&uStack_1f8);
            unaff_x19 = (undefined **)ppppuStack_310;
            ppppuVar22[0xf] = (ulong ***)CONCAT35(auStack_1d0._5_3_,auStack_1d0._0_5_);
            *(ulong *)((long)ppppuVar22 + 0x7d) = CONCAT44(uStack_1c7,auStack_1d0._5_4_);
            cVar11 = *(char *)(ppppuVar22 + 0x19);
            if (cVar11 == cStack_180) {
              if (cVar11 != '\0') {
                FUN_1089a1f6c(ppppuStack_310 + 0x11,auStack_1c0);
              }
            }
            else if (cVar11 == '\0') {
              FUN_1089a1f98(ppppuStack_310 + 0x11,auStack_1c0);
            }
            else {
              FUN_108958e50(ppppuStack_310 + 0x11);
              *(undefined1 *)(unaff_x19 + 0x19) = 0;
            }
            param_2 = (ulong *****)unaff_x19[0x1b];
            func_0x000108959324(unaff_x19 + 0x1a);
            unaff_x19[0x1a] = (undefined *)pppuStack_178;
            unaff_x19[0x1b] = (undefined *)CONCAT71(uStack_16f,uStack_170);
            unaff_x19[0x1c] = (undefined *)pppuStack_168;
            if ((ulong ****)pppuStack_168 == (ulong ****)0x0) {
              unaff_x19[0x1a] = (undefined *)ppppuStack_398;
            }
            else {
              ((ulong ****)CONCAT71(uStack_16f,uStack_170))[2] = (ulong ***)ppppuStack_398;
              pppuStack_178 = pppuStack_3b8;
              *pppuStack_3b8 = (ulong **)0x0;
              pppuStack_3b8[1] = (ulong **)0x0;
            }
          }
        }
        else if (cVar11 == '\0') {
          param_2 = &ppppuStack_200;
          FUN_1089a2020(ppppuStack_368);
          *(undefined1 *)(ppppuStack_310 + 0x1d) = 1;
        }
        else {
          FUN_1089593f4(ppppuStack_368);
          *(undefined1 *)(ppppuStack_310 + 0x1d) = 0;
        }
        pppppuVar27 = &ppppuStack_200;
        func_0x000108976e80();
      }
      else if (iVar5 == 0x15) {
        ppppuVar22 = (ulong ****)&PTR_PTR_11337cff8;
        if (unaff_x21[0x12] != (ulong ****)0x0) {
          ppppuVar22 = unaff_x21[0x12];
        }
        if ((*(uint *)(ppppuVar22 + 2) >> 4 & 1) == 0) {
          func_0x0001089a28f8();
          uStack_150 = uStack_150 & 0xffffffffffffff00;
          uVar16 = extraout_w8_00;
        }
        else {
          cVar11 = '\0';
          cVar12 = '\0';
          if (((*(uint *)(ppppuVar22 + 2) ^ 0xffffffff) & 6) == 0) {
            uVar16 = *(uint *)((long)ppppuVar22 + 0x54);
            unaff_x19 = (undefined **)(ulong)uVar16;
            ppuVar4 = ppppuVar22[7][4];
            func_0x0001089a282c((ulong)ppppuVar22[7][3] & 0xfffffffffffffffc);
            uVar34 = extraout_x12;
            if (cVar11 == cVar12) {
              uVar34 = extraout_x9_00;
            }
            func_0x0001089a28b4(uVar34,&ppppuStack_280);
            func_0x0001089a282c((ulong)ppuVar4 & 0xfffffffffffffffc);
            uVar34 = extraout_x12_00;
            if (cVar11 == cVar12) {
              uVar34 = extraout_x9_01;
            }
            func_0x0001089a28b4(uVar34,&puStack_268);
            uStack_238 = 0;
            uStack_240 = 0;
            uStack_228 = 0;
            uStack_230 = 0;
            uStack_248 = 0;
            puStack_250 = (undefined8 *)0x0;
            pppuVar21 = (ulong ***)&PTR_PTR_11337cdd0;
            if (ppppuVar22[8] != (ulong ***)0x0) {
              pppuVar21 = ppppuVar22[8];
            }
            unaff_x20 = (ulong *****)pppuVar21[4];
            func_0x0001089a282c((ulong)pppuVar21[3] & 0xfffffffffffffffc);
            func_0x0001089a20f8(&puStack_250);
            func_0x0001089a282c((ulong)unaff_x20 & 0xfffffffffffffffc);
            func_0x0001089a20f8(&uStack_238);
            uStack_e8 = uStack_228;
            uStack_f0 = uStack_230;
            uStack_f8 = uStack_238;
            uStack_100 = uStack_240;
            uStack_108 = uStack_248;
            uStack_110 = puStack_250;
            uStack_118 = uStack_258;
            uStack_120 = uStack_260;
            puStack_128 = puStack_268;
            pppuStack_130 = pppuStack_270;
            ppppuStack_138 = ppppuStack_278;
            uStack_140 = (ulong *****)ppppuStack_280;
            uStack_288 = uVar16 == 1;
            ppppuStack_278 = (ulong ****)0x0;
            pppuStack_270 = (ulong ***)0x0;
            ppppuStack_280 = (ulong ****)0x0;
            puStack_268 = (undefined8 *)0x0;
            uStack_260 = 0;
            uStack_248 = 0;
            uStack_240 = 0;
            uStack_258 = 0;
            puStack_250 = (undefined8 *)0x0;
            uStack_238 = 0;
            uStack_230 = 0;
            uStack_228 = 0;
            pppuStack_2e8 = (ulong ***)0x0;
            uStack_2e0._0_4_ = 0;
            uStack_2e0._4_4_ = 0;
            uStack_2d8 = 0;
            uStack_2d4 = 0;
            uStack_2d0 = 0;
            uStack_2cc = 0;
            uStack_2c8 = 0;
            uStack_2c0 = 0;
            uStack_2b8 = 0;
            uStack_2b0 = 0;
            uStack_2a8 = 0;
            uStack_2a0 = 0;
            uStack_298 = 0;
            uStack_290 = 0;
            uStack_d8 = 1;
            uStack_e0 = uStack_288;
            FUN_1089596d8(&pppuStack_2e8);
            FUN_1089596d8(&ppppuStack_280);
          }
          else {
            uStack_140 = (ulong *****)((ulong)uStack_140 & 0xffffffffffffff00);
            uStack_d8 = 0;
          }
          uStack_d0 = 0;
          func_0x0001089a28cc(ppppuVar22[3]);
          unaff_x22 = (ulong *****)ppppuStack_380;
          for (; unaff_x20 != (ulong *****)0x0; unaff_x20 = unaff_x20 + -1) {
            FUN_1089a54a8(&pppuStack_2e8,*unaff_x19);
            if ((char)uStack_2cc == '\x01') {
              uVar19 = 2;
              if ((uStack_d0 & 1) != 0) {
                uVar19 = uStack_c0;
              }
              if (uStack_d0 >> 1 == uVar19) {
                param_2 = (ulong *****)&pppuStack_2e8;
                FUN_1089a2284(ppppuVar22 + 0x11);
              }
              else {
                pppppuVar27 = unaff_x22;
                if ((uStack_d0 & 1) != 0) {
                  pppppuVar27 = (ulong *****)ppppuStack_c8;
                }
                puVar17 = (ulong *)((long)pppppuVar27 + (uStack_d0 >> 1) * 0x1c);
                puVar17[1] = (ulong)uStack_2e0;
                *puVar17 = (ulong)pppuStack_2e8;
                *(ulong *)((long)puVar17 + 0x14) = CONCAT44(uStack_2d0,uStack_2d4);
                *(ulong *)((long)puVar17 + 0xc) = CONCAT44(uStack_2d8,uStack_2e0._4_4_);
                uStack_d0 = uStack_d0 + 2;
              }
            }
            unaff_x19 = unaff_x19 + 1;
          }
          func_0x0001089a2998();
          func_0x0001089a2398();
          uStack_150 = CONCAT71(uStack_150._1_7_,1);
          FUN_108959828(&uStack_140);
          uVar16 = (uint)uStack_150 & 0xff;
        }
        bVar7 = *(byte *)(ppppuStack_310 + 0x3e);
        if (bVar7 == uVar16) {
          if (bVar7 != 0) {
            cVar11 = *(char *)(ppppuStack_310 + 0x35);
            if (cVar11 == acStack_198[0]) {
              if (cVar11 != '\0') {
                func_0x000107c3194c(ppppuStack_348,&ppppuStack_200);
                unaff_x19 = (undefined **)ppppuStack_310;
                unaff_x20 = &ppppuStack_200;
                func_0x000107c3194c(ppppuStack_310 + 0x2b,auStack_1e8);
                func_0x000107c3194c(unaff_x19 + 0x2e,auStack_1d0);
                param_2 = (ulong *****)abStack_1b8;
                func_0x000107c3194c(unaff_x19 + 0x31);
                *(undefined1 *)(unaff_x19 + 0x34) = (undefined1)uStack_1a0;
              }
            }
            else if (cVar11 == '\0') {
              param_2 = &ppppuStack_200;
              FUN_1089a2430(ppppuStack_348);
            }
            else {
              FUN_1089596d8();
              *(undefined1 *)(ppppuStack_310 + 0x35) = 0;
            }
            ppppuVar22 = ppppuStack_190;
            if ((ulong *****)ppppuStack_348 != &ppppuStack_200) {
              unaff_x20 = (ulong *****)ppppuVar22;
              if (((ulong)ppppuStack_190 & 1) == 0) {
                pppppuVar27 = (ulong *****)((ulong)ppppuStack_190 >> 1);
                pppppuVar28 = (ulong *****)ppppuStack_3a0;
                if (((ulong)ppppuStack_310[0x36] & 1) != 0) {
                  pppppuVar28 = (ulong *****)ppppuStack_310[0x37];
                }
                func_0x0001089a2904(pppppuVar28);
                if (extraout_x10 < pppppuVar27) {
                  param_2 = (ulong *****)((long)extraout_x10 * 2);
                  if (param_2 < pppppuVar27 || (long)param_2 - (long)pppppuVar27 == 0) {
                    param_2 = pppppuVar27;
                  }
                  puVar25 = &uStack_140;
                  FUN_1089a2350();
                  pppppuVar28 = (ulong *****)0x0;
                  puVar17 = (ulong *)0x0;
                  puVar10 = puStack_3a8;
                }
                else {
                  pppppuVar24 = (ulong *****)(extraout_x9_02 >> 1);
                  bVar13 = pppppuVar24 <= pppppuVar27;
                  pppppuVar15 = (ulong *****)((long)pppppuVar27 - (long)pppppuVar24);
                  bVar14 = pppppuVar15 != (ulong *****)0x0;
                  pppppuVar28 = pppppuVar27;
                  if (bVar13 && bVar14) {
                    pppppuVar28 = pppppuVar24;
                  }
                  pppppuVar27 = (ulong *****)0x0;
                  if (bVar13 && bVar14) {
                    pppppuVar27 = pppppuVar15;
                  }
                  puVar17 = extraout_x8_02;
                  puVar10 = puStack_3a8;
                  puVar25 = (undefined8 *)0x0;
                  if (bVar13 && bVar14) {
                    puVar25 = (undefined8 *)((long)extraout_x8_02 + (long)pppppuVar24 * 0x1c);
                  }
                }
                for (; pppppuVar28 != (ulong *****)0x0;
                    pppppuVar28 = (ulong *****)((long)pppppuVar28 + -1)) {
                  uVar35 = puVar10[1];
                  uVar19 = *puVar10;
                  uVar34 = *(undefined8 *)((long)puVar10 + 0xc);
                  *(undefined8 *)((long)puVar17 + 0x14) = *(undefined8 *)((long)puVar10 + 0x14);
                  *(undefined8 *)((long)puVar17 + 0xc) = uVar34;
                  puVar17[1] = uVar35;
                  *puVar17 = uVar19;
                  puVar17 = (ulong *)((long)puVar17 + 0x1c);
                  puVar10 = (ulong *)((long)puVar10 + 0x1c);
                }
                lVar18 = 0;
                for (; pppppuVar27 != (ulong *****)0x0;
                    pppppuVar27 = (ulong *****)((long)pppppuVar27 + -1)) {
                  puVar1 = (undefined8 *)((long)puVar10 + lVar18);
                  puVar2 = (undefined8 *)((long)puVar25 + lVar18);
                  uVar36 = puVar1[1];
                  uVar34 = *puVar1;
                  uVar37 = *(undefined8 *)((long)puVar1 + 0xc);
                  *(undefined8 *)((long)puVar2 + 0x14) = *(undefined8 *)((long)puVar1 + 0x14);
                  *(undefined8 *)((long)puVar2 + 0xc) = uVar37;
                  puVar2[1] = uVar36;
                  *puVar2 = uVar34;
                  lVar18 = lVar18 + 0x1c;
                }
                if (uStack_140 == (ulong *****)0x0) {
                  uVar19 = (ulong)ppppuStack_310[0x36] & 1;
                  unaff_x19 = (undefined **)ppppuStack_310;
                }
                else {
                  func_0x0001089a2940();
                  func_0x0001089a2904(uStack_140);
                  uVar19 = 1;
                  unaff_x19 = (undefined **)(ulong *****)0x0;
                  uRam00000000000001b8 = extraout_x8_03;
                  uRam00000000000001c0 = extraout_x9_03;
                }
                unaff_x19[0x36] = (undefined *)(uVar19 | (ulong)ppppuVar22);
                func_0x0001089a2370(&uStack_140);
              }
              else {
                func_0x0001089a2940();
                unaff_x19[0x36] = (undefined *)ppppuStack_190;
                ppppuVar22 = (ulong ****)*puStack_3a8;
                ppppuVar38 = (ulong ****)puStack_3a8[3];
                ppppuVar23 = (ulong ****)puStack_3a8[2];
                ppppuStack_3a0[1] = (ulong ***)puStack_3a8[1];
                *ppppuStack_3a0 = (ulong ***)ppppuVar22;
                ppppuStack_3a0[3] = (ulong ***)ppppuVar38;
                ppppuStack_3a0[2] = (ulong ***)ppppuVar23;
                ppppuVar22 = (ulong ****)puStack_3a8[4];
                ppppuStack_3a0[5] = (ulong ***)puStack_3a8[5];
                ppppuStack_3a0[4] = (ulong ***)ppppuVar22;
                ppppuStack_3a0[6] = (ulong ***)puStack_3a8[6];
                ppppuStack_190 = (ulong ****)0x0;
              }
            }
          }
        }
        else if (bVar7 == 0) {
          param_2 = &ppppuStack_200;
          func_0x0001089a2398(ppppuStack_348);
          *(undefined1 *)(ppppuStack_310 + 0x3e) = 1;
        }
        else {
          FUN_108959828(ppppuStack_348);
          *(undefined1 *)(ppppuStack_310 + 0x3e) = 0;
        }
        pppppuVar27 = &ppppuStack_200;
        func_0x000108976e40();
      }
      else if (iVar5 == 0x17) {
        if ((*(byte *)(unaff_x21 + 2) >> 1 & 1) == 0) {
          func_0x0001089a28f8();
          auStack_1e8[0] = auStack_1e8[0] & 0xffffff00;
          uVar16 = extraout_w8;
        }
        else {
          param_2 = (ulong *****)((ulong)unaff_x21[0xd] & 0xfffffffffffffffc);
          ppppuVar22 = (ulong ****)(long)*(char *)((long)param_2 + 0x17);
          if ((long)ppppuVar22 < 0) {
            ppppuVar22 = param_2[1];
            param_2 = (ulong *****)*param_2;
          }
          unaff_x19 = (undefined **)&uStack_140;
          func_0x0001089a28b4(ppppuVar22,&uStack_140);
          uStack_1f8 = (uint)ppppuStack_138;
          uStack_1f4 = (uint)((ulong)ppppuStack_138 >> 0x20);
          ppppuStack_200 = (ulong ****)uStack_140;
          uStack_1f0 = (uint)pppuStack_130;
          uStack_1ec = (uint)((ulong)pppuStack_130 >> 0x20);
          pppuStack_130 = (ulong ***)0x0;
          func_0x0001089a2904();
          auStack_1e8[0] = CONCAT31(auStack_1e8[0]._1_3_,1);
          func_0x000107c27914(&uStack_140);
          uVar16 = auStack_1e8[0] & 0xff;
        }
        unaff_x20 = &ppppuStack_280;
        bVar7 = *(byte *)(ppppuStack_310 + 0x42);
        if (bVar7 == uVar16) {
          if (bVar7 != 0) {
            param_2 = &ppppuStack_200;
            func_0x000107c3194c(ppppuStack_360);
          }
        }
        else if (bVar7 == 0) {
          ppppuStack_360[1] = (ulong ***)CONCAT44(uStack_1f4,uStack_1f8);
          *ppppuStack_360 = (ulong ***)ppppuStack_200;
          ppppuStack_310[0x41] = (ulong ***)CONCAT44(uStack_1ec,uStack_1f0);
          uStack_1f8 = 0;
          uStack_1f4 = 0;
          uStack_1f0 = 0;
          uStack_1ec = 0;
          ppppuStack_200 = (ulong ****)0x0;
          *(undefined1 *)(ppppuStack_310 + 0x42) = 1;
        }
        else {
          func_0x000107c27914(ppppuStack_360);
          *(undefined1 *)(ppppuStack_310 + 0x42) = 0;
        }
        pppppuVar27 = &ppppuStack_200;
        FUN_108976e20();
      }
      else if (iVar5 == 10) {
        FUN_1089a29a4(&ppppuStack_200,*(undefined4 *)((long)unaff_x21 + 0xac));
        func_0x0001089a2844();
        unaff_x27 = (undefined **)&pppuStack_130;
        goto LAB_1089a1934;
      }
      param_1 = pppppuVar27;
    }
    ppppuVar22 = (ulong ****)ppppuStack_390[6];
    unaff_x21 = (ulong *****)(ppppuStack_390 + 6);
    if (((ulong)ppppuVar22 & 1) != 0) {
      unaff_x21 = (ulong *****)((long)ppppuVar22 + 7);
    }
    unaff_x19 = &PTR_PTR_11337cf98;
    unaff_x26 = (ulong *****)0x1;
    ppuVar33 = &PTR_PTR_11337cd58;
    unaff_x27 = &PTR_PTR_11337cd58;
    pppppuVar27 = (ulong *****)ppppuStack_390;
    for (unaff_x24 = (undefined **)((long)*(int *)(ppppuStack_390 + 7) << 3); pppppuVar28 = param_1,
        ppppuStack_390 = (ulong ****)pppppuVar27, unaff_x24 != (undefined **)0x0;
        unaff_x24 = unaff_x24 + -1) {
      ppppuVar22 = *unaff_x21;
      if ((((ulong)ppppuVar22[2] & 1) == 0) || (((ulong)ppppuVar22[3][2] & 1) == 0)) {
        func_0x0001089a2850();
        func_0x0001089a2844();
        goto LAB_1089a1934;
      }
      pppuStack_2e8 = (ulong ***)ppppuVar22[3][3];
      unaff_x28 = (ulong ****)unaff_x19;
      if ((ulong ****)ppppuVar22[4] != (ulong ****)0x0) {
        unaff_x28 = (ulong ****)ppppuVar22[4];
      }
      func_0x0001089a28a4();
      unaff_x23 = (ulong *****)*pppppuVar28;
      if (unaff_x23 == (ulong *****)0x0) {
        unaff_x23 = (ulong *****)0xe8;
        __Znwm();
        uStack_1f8 = (uint)ppppuStack_358;
        uStack_1f4 = (uint)((ulong)ppppuStack_358 >> 0x20);
        uStack_1f0 = 1;
        uStack_1ec = 0;
        func_0x0001089a2878();
        func_0x0001089a20a8(unaff_x23 + 5);
        FUN_108977200(ppppuStack_328,uStack_140,pppppuVar28,unaff_x23);
        func_0x0001089a2954();
      }
      uVar16 = *(uint *)(unaff_x28 + 2);
      if (((uVar16 >> 1 & 1) != 0) && ((*(byte *)((long)unaff_x23 + 0x2c) & 1) == 0)) {
        *(undefined4 *)(unaff_x23 + 5) = *(undefined4 *)(unaff_x28[7] + 3);
        *(undefined1 *)((long)unaff_x23 + 0x2c) = 1;
        uVar16 = *(uint *)(unaff_x28 + 2);
      }
      if (((uVar16 >> 2 & 1) != 0) && ((*(byte *)((long)unaff_x23 + 0x34) & 1) == 0)) {
        *(undefined4 *)(unaff_x23 + 6) = *(undefined4 *)(unaff_x28[8] + 3);
        *(undefined1 *)((long)unaff_x23 + 0x34) = 1;
        uVar16 = *(uint *)(unaff_x28 + 2);
      }
      if (((uVar16 >> 5 & 1) != 0) && ((*(byte *)((long)unaff_x23 + 0x3c) & 1) == 0)) {
        *(undefined4 *)(unaff_x23 + 7) = *(undefined4 *)(unaff_x28[0xb] + 3);
        *(undefined1 *)((long)unaff_x23 + 0x3c) = 1;
        uVar16 = *(uint *)(unaff_x28 + 2);
      }
      if ((uVar16 >> 3 & 1) != 0) {
        if (((ulong)unaff_x28[9][2] & 1) == 0) {
          ppppuStack_200 = (ulong ****)((ulong)ppppuStack_200 & 0xffffffffffffff00);
          uStack_1e0 = uStack_1e0 & 0xffffff00;
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&uStack_140,(ulong)unaff_x28[9][3] & 0xfffffffffffffffc);
          pppuVar21 = (ulong ***)ppuVar33;
          if (unaff_x28[9] != (ulong ***)0x0) {
            pppuVar21 = unaff_x28[9];
          }
          puStack_128 = (undefined8 *)
                        CONCAT44(puStack_128._4_4_,
                                 (uint)(*(int *)(pppuVar21 + 4) != 0) &
                                 *(uint *)(pppuVar21 + 2) >> 1);
          uStack_1f8 = (uint)ppppuStack_138;
          uStack_1f4 = (uint)((ulong)ppppuStack_138 >> 0x20);
          ppppuStack_200 = (ulong ****)uStack_140;
          uStack_1f0 = (uint)pppuStack_130;
          uStack_1ec = (uint)((ulong)pppuStack_130 >> 0x20);
          func_0x0001089a2904();
          pppuStack_130 = (ulong ***)0x0;
          uStack_1e0 = CONCAT31(uStack_1e0._1_3_,1);
          auStack_1e8[0] = extraout_w8_02;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_140);
        }
        FUN_1089a244c(unaff_x23 + 8,&ppppuStack_200);
        func_0x000108977dbc(&ppppuStack_200);
        uVar16 = *(uint *)(unaff_x28 + 2);
      }
      if ((uVar16 & 1) != 0) {
        puVar25 = (undefined8 *)((ulong)unaff_x28[6] & 0xfffffffffffffffc);
        lVar18 = (long)*(char *)((long)puVar25 + 0x17);
        if (lVar18 < 0) {
          lVar18 = puVar25[1];
          puVar25 = (undefined8 *)*puVar25;
        }
        func_0x0001089a28b4(lVar18,&ppppuStack_200,puVar25);
        FUN_1086554b0(unaff_x23 + 0xd,&ppppuStack_200);
        func_0x000107c27914(&ppppuStack_200);
        uVar16 = *(uint *)(unaff_x28 + 2);
      }
      if ((uVar16 >> 4 & 1) != 0) {
        FUN_1089a5528(&ppppuStack_200,unaff_x28[10]);
        FUN_1089a24cc(unaff_x23 + 0x12,&ppppuStack_200);
        FUN_108977e24(&ppppuStack_200);
      }
      FUN_1089a1be4(&ppppuStack_200,unaff_x28 + 3);
      param_2 = &ppppuStack_200;
      FUN_1089a2764(unaff_x23 + 0x18);
      param_1 = &ppppuStack_200;
      func_0x000108959364();
      unaff_x21 = unaff_x21 + 1;
      unaff_x22 = pppppuVar28;
      pppppuVar27 = (ulong *****)ppppuStack_390;
    }
    if ((*(byte *)(pppppuVar27 + 2) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001089a15b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10df7ce9c)[*(uint *)((long)pppppuVar27[0xb] + 0x1c)] * 4 +
                0x1089a15b4))();
      return;
    }
    func_0x0001089a28f8();
    ppppuVar22 = ppppuStack_310;
    unaff_x21 = (ulong *****)ppppuStack_358;
    unaff_x23 = (ulong *****)ppppuStack_3c0;
    uStack_1d8 = 0;
    bVar7 = *(byte *)(ppppuStack_310 + 0x48);
    if (bVar7 == extraout_w8_03) {
      if ((bVar7 != 0) && (*(int *)(ppppuStack_310 + 0x47) != -1 || uStack_1e0 != 0xffffffff)) {
        if (uStack_1e0 == 0xffffffff) {
          func_0x0001089a2938();
          unaff_x19 = &PTR_PTR_11337cf98;
        }
        else {
          uStack_140 = (ulong *****)ppppuStack_3c0;
          param_2 = (ulong *****)ppppuStack_3c0;
          (*(code *)(&PTR_FUN_110aa4f00)[uStack_1e0])(&uStack_140,ppppuStack_3c0,&ppppuStack_200);
          unaff_x19 = &PTR_PTR_11337cf98;
        }
      }
    }
    else if (bVar7 == 0) {
      *(undefined1 *)(ppppuStack_310 + 0x43) = 0;
      *(undefined4 *)(ppppuStack_310 + 0x47) = 0xffffffff;
      func_0x0001089a2938();
      uVar16 = uStack_1e0;
      unaff_x19 = (undefined **)(ulong)uStack_1e0;
      unaff_x20 = (ulong *****)ppppuVar22;
      if (uStack_1e0 != 0xffffffff) {
        uStack_140 = unaff_x23;
        param_2 = &ppppuStack_200;
        (*(code *)(&PTR_DAT_110aa4f18)[uStack_1e0])(&uStack_140);
        *(uint *)(ppppuStack_310 + 0x47) = uVar16;
        unaff_x20 = (ulong *****)ppppuStack_310;
      }
      *(undefined1 *)(unaff_x20 + 0x48) = 1;
    }
    else {
      func_0x0001089a2938();
      *(undefined1 *)(ppppuStack_310 + 0x48) = 0;
      unaff_x19 = &PTR_PTR_11337cf98;
    }
    func_0x000108976d9c(&ppppuStack_200);
    if ((uStack_3ac & 1) != 0) {
      unaff_x22 = pppppuVar27;
      if ((*(char *)(ppppuStack_310 + 0x1d) != '\x01') || (((ulong)ppppuStack_310[0x27] & 1) == 0))
      {
        func_0x0001089a2850();
        func_0x0001089a2844();
        goto LAB_1089a1934;
      }
      func_0x0001089a2904();
      ppppuVar23 = pppppuVar27[9];
      unaff_x19 = &PTR_PTR_11337cf20;
      ppppuVar22 = (ulong ****)unaff_x19;
      if (ppppuVar23 != (ulong ****)0x0) {
        ppppuVar22 = ppppuVar23;
      }
      if ((*(byte *)(ppppuVar22 + 2) >> 1 & 1) != 0) {
        uVar19 = (ulong)ppppuVar22[4] & 0xfffffffffffffffc;
        lVar18 = (long)*(char *)(uVar19 + 0x17);
        if (lVar18 < 0) {
          lVar18 = *(long *)(uVar19 + 8);
        }
        if (lVar18 != 0x10) {
          func_0x0001089a2850();
          func_0x0001089a2844();
          unaff_x27 = ppuVar33;
          goto LAB_1089a1934;
        }
        param_2 = (ulong *****)&uStack_140;
        __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4copyEPcmm
                  (uVar19,param_2,0x10,0);
        ppppuVar23 = pppppuVar27[9];
      }
      if (ppppuVar23 != (ulong ****)0x0) {
        unaff_x19 = (undefined **)ppppuVar23;
      }
      pppuVar21 = (ulong ***)&PTR_PTR_11337cda8;
      if ((ulong ***)unaff_x19[5] != (ulong ***)0x0) {
        pppuVar21 = (ulong ***)unaff_x19[5];
      }
      uVar6 = *(undefined4 *)(pppuVar21 + 4);
      uVar8 = *(undefined1 *)(unaff_x19 + 7);
      *(ulong *****)((long)ppppuStack_310 + 0x3a) = ppppuStack_138;
      *(ulong ******)((long)ppppuStack_310 + 0x32) = uStack_140;
      if ((*(byte *)((long)ppppuStack_310 + 0x44) & 1) == 0) {
        *(undefined1 *)((long)ppppuStack_310 + 0x44) = 1;
      }
      *(short *)(ppppuStack_310 + 6) = (short)uVar6;
      *(undefined1 *)((long)ppppuStack_310 + 0x42) = uVar8;
    }
    unaff_x20 = (ulong *****)*ppppuStack_328;
    unaff_x19 = (undefined **)0x1;
    while (unaff_x20 != unaff_x21) {
      if (*(char *)((long)unaff_x20 + 0x8c) == '\x01') {
        if (*(int *)(unaff_x20 + 0x11) == 1) {
          *(undefined4 *)(unaff_x20 + 5) = 0;
          *(undefined1 *)((long)unaff_x20 + 0x2c) = 1;
          *(undefined4 *)(unaff_x20 + 6) = 0;
          *(undefined1 *)((long)unaff_x20 + 0x34) = 1;
          *(undefined4 *)(unaff_x20 + 7) = 0;
          *(undefined1 *)((long)unaff_x20 + 0x3c) = 1;
        }
        else if ((*(int *)(unaff_x20 + 0x11) == 0) && (unaff_x20[0x1b] == (ulong ****)0x0)) {
          func_0x0001089a2850();
          func_0x0001089a2844();
          unaff_x19 = (undefined **)&ppppuStack_200;
          func_0x0001089a294c();
          uVar9 = uStack_1f0;
          uVar32 = uStack_1f4;
          uVar30 = uStack_1f8;
          uVar19 = (ulong)ppppuStack_200 >> 0x28;
          ppppuStack_200._0_4_ = (uint)ppppuStack_200 & 0xffffff00;
          ppppuStack_200._0_5_ = (uint5)(uint)ppppuStack_200;
          ppppuStack_200 = (ulong ****)CONCAT35((int3)uVar19,(uint5)ppppuStack_200);
          uStack_1f8 = uStack_1f8 & 0xffffff00;
          uVar16 = uStack_1f4 >> 8;
          uStack_1f4 = uStack_1f4 & 0xffffff00;
          uStack_1f0 = uStack_1f0 & 0xffffff00;
          uStack_1ec = uStack_1ec & 0xffffff00;
          auStack_1e8[0] = auStack_1e8[0] & 0xffffff00;
          auStack_1d0._5_4_ = auStack_1d0._5_4_ & 0xffffff;
          auStack_1c0[0] = 0;
          uStack_1a8 = 0;
          uStack_1a0 = uStack_1a0 & 0xffffff00;
          uStack_19c = 0;
          acStack_198[0] = '\0';
          uStack_170 = 0;
          uStack_160 = 0;
          pppuStack_168 = (ulong ***)0x0;
          uStack_150 = 0;
          uStack_158 = 0;
          uStack_148 = 0x3f800000;
          unaff_x20[6] = (ulong ****)(CONCAT44(uVar32,uVar30) & 0xffffff00ffffff00);
          unaff_x20[5] = ppppuStack_200;
          *(ulong *)((long)unaff_x20 + 0x35) =
               (ulong)CONCAT43(uVar9,(int3)uVar16) & 0xffffffff00ffffff;
          FUN_1089a244c(unaff_x20 + 8,auStack_1e8);
          func_0x0001052b2b60(unaff_x20 + 0xd,auStack_1c0);
          *(uint *)(unaff_x20 + 0x11) = uStack_1a0;
          *(undefined1 *)((long)unaff_x20 + 0x8c) = uStack_19c;
          FUN_1089a24cc(unaff_x20 + 0x12,acStack_198);
          param_2 = (ulong *****)&pppuStack_168;
          FUN_1089a2764(unaff_x20 + 0x18);
          func_0x000108976d60(&ppppuStack_200);
          break;
        }
      }
      func_0x000107c27be0();
    }
  }
  else {
    func_0x0001089a2850();
    func_0x0001089a2844();
LAB_1089a1934:
    func_0x0001089a294c();
    pppppuVar27 = unaff_x22;
    ppuVar33 = unaff_x27;
  }
  func_0x0001089a28e8(uStack_88);
  if (extraout_x9_04 == extraout_x8_04) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001089a2898();
  FUN_108959828();
  func_0x000108976cac(ppppuStack_310);
  pppppuVar15 = unaff_x21;
  __Unwind_Resume();
  pcStack_3c8 = FUN_1089a1be4;
  pppppuVar15[1] = (ulong ****)0x0;
  *pppppuVar15 = (ulong ****)0x0;
  pppppuVar24 = pppppuVar15 + 2;
  pppppuVar15[3] = (ulong ****)0x0;
  *pppppuVar24 = (ulong ****)0x0;
  *(undefined4 *)(pppppuVar15 + 4) = 0x3f800000;
  pppppuVar28 = param_2;
  if (((ulong)*param_2 & 1) != 0) {
    pppppuVar28 = (ulong *****)((long)*param_2 + 7);
  }
  pppppuVar3 = pppppuVar28 + *(int *)(param_2 + 1);
  pppuStack_420 = (ulong ***)unaff_x28;
  pppuStack_418 = (ulong ***)ppuVar33;
  ppppuStack_410 = (ulong ****)unaff_x26;
  puStack_408 = unaff_x25;
  ppuStack_400 = unaff_x24;
  ppppuStack_3f8 = (ulong ****)unaff_x23;
  ppppuStack_3f0 = (ulong ****)pppppuVar27;
  ppppuStack_3e8 = (ulong ****)unaff_x21;
  ppppuStack_3e0 = (ulong ****)unaff_x20;
  ppppuStack_3d8 = (ulong ****)unaff_x19;
  puStack_3d0 = &stack0xfffffffffffffff0;
  do {
    if (pppppuVar28 == pppppuVar3) {
      return;
    }
    uVar16 = *(uint *)(*pppppuVar28 + 3);
    pppppuVar27 = (ulong *****)(ulong)uVar16;
    pppuVar21 = (*pppppuVar28)[3];
    pppppuVar31 = (ulong *****)pppppuVar15[1];
    if (pppppuVar31 != (ulong *****)0x0) {
      puVar20 = (undefined1 *)((long)pppppuVar31 + -1);
      uVar30 = (uint)pppppuVar31;
      if (((ulong)pppppuVar31 & (ulong)puVar20) == 0) {
        unaff_x26 = (ulong *****)(ulong)(uVar30 - 1 & uVar16);
      }
      else {
        unaff_x26 = pppppuVar27;
        if (pppppuVar31 <= pppppuVar27) {
          uVar32 = 0;
          if (uVar30 != 0) {
            uVar32 = uVar16 / uVar30;
          }
          unaff_x26 = (ulong *****)(ulong)(uVar16 - uVar32 * uVar30);
        }
      }
      pppuVar26 = (*pppppuVar15)[(long)unaff_x26];
      if (pppuVar26 != (ulong ***)0x0) {
        do {
          while( true ) {
            pppuVar26 = (ulong ***)*pppuVar26;
            if (pppuVar26 == (ulong ***)0x0) goto LAB_1089a1cd8;
            pppppuVar29 = (ulong *****)pppuVar26[1];
            if (pppppuVar29 != pppppuVar27) break;
            if (*(uint *)(pppuVar26 + 2) == uVar16) goto LAB_1089a1e00;
          }
          if (((ulong)pppppuVar31 & (ulong)puVar20) == 0) {
            pppppuVar29 = (ulong *****)((ulong)pppppuVar29 & (ulong)puVar20);
          }
          else if (pppppuVar31 <= pppppuVar29) {
            uVar19 = 0;
            if (pppppuVar31 != (ulong *****)0x0) {
              uVar19 = (ulong)pppppuVar29 / (ulong)pppppuVar31;
            }
            pppppuVar29 = (ulong *****)((long)pppppuVar29 - uVar19 * (long)pppppuVar31);
          }
        } while (pppppuVar29 == unaff_x26);
      }
    }
LAB_1089a1cd8:
    ppppuVar22 = (ulong ****)0x18;
    __Znwm();
    uStack_428 = 1;
    *ppppuVar22 = (ulong ***)0x0;
    ppppuVar22[1] = (ulong ***)pppppuVar27;
    ppppuVar22[2] = pppuVar21;
    pppuStack_438 = (ulong ***)ppppuVar22;
    ppppuStack_430 = (ulong ****)pppppuVar24;
    if ((pppppuVar31 == (ulong *****)0x0) ||
       (*(float *)(pppppuVar15 + 4) * (float)pppppuVar31 <
        (float)(undefined *)((long)pppppuVar15[3] + 1))) {
      func_0x0001089a2910((long)pppppuVar31 << 1);
      func_0x00010895aee8(pppppuVar15);
      pppppuVar31 = (ulong *****)pppppuVar15[1];
      if (((ulong)pppppuVar31 & (ulong)((long)pppppuVar31 + -1)) == 0) {
        unaff_x26 = (ulong *****)(ulong)((int)pppppuVar31 - 1U & uVar16);
      }
      else {
        unaff_x26 = pppppuVar27;
        if (pppppuVar31 <= pppppuVar27) {
          uVar19 = 0;
          if (pppppuVar31 != (ulong *****)0x0) {
            uVar19 = (ulong)pppppuVar27 / (ulong)pppppuVar31;
          }
          unaff_x26 = (ulong *****)((long)pppppuVar27 - uVar19 * (long)pppppuVar31);
        }
      }
    }
    pppuVar21 = (*pppppuVar15)[(long)unaff_x26];
    if (pppuVar21 == (ulong ***)0x0) {
      *pppuStack_438 = (ulong **)pppppuVar15[2];
      pppppuVar15[2] = (ulong ****)pppuStack_438;
      (*pppppuVar15)[(long)unaff_x26] = (ulong ***)pppppuVar24;
      if ((ulong ***)*pppuStack_438 != (ulong ***)0x0) {
        pppppuVar27 = (ulong *****)(*pppuStack_438)[1];
        if (((ulong)pppppuVar31 & (ulong)((long)pppppuVar31 + -1)) == 0) {
          pppppuVar27 = (ulong *****)((ulong)pppppuVar27 & (ulong)((long)pppppuVar31 + -1));
        }
        else if (pppppuVar31 <= pppppuVar27) {
          uVar19 = 0;
          if (pppppuVar31 != (ulong *****)0x0) {
            uVar19 = (ulong)pppppuVar27 / (ulong)pppppuVar31;
          }
          pppppuVar27 = (ulong *****)((long)pppppuVar27 - uVar19 * (long)pppppuVar31);
        }
        (*pppppuVar15)[(long)pppppuVar27] = pppuStack_438;
      }
    }
    else {
      *pppuStack_438 = *pppuVar21;
      *pppuVar21 = (ulong **)pppuStack_438;
    }
    pppuStack_438 = (ulong ***)0x0;
    pppppuVar15[3] = (ulong ****)((long)pppppuVar15[3] + 1);
    FUN_10895b38c(&pppuStack_438);
LAB_1089a1e00:
    pppppuVar28 = pppppuVar28 + 1;
  } while( true );
}



/* Entry: 1089a1be4; end: 1089a1e4b;  */

void FUN_1089a1be4(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong unaff_x26;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  param_1[1] = 0;
  *param_1 = 0;
  plVar10 = param_1 + 2;
  param_1[3] = 0;
  *plVar10 = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  puVar11 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar11 = (ulong *)(*param_2 + 7);
  }
  puVar1 = puVar11 + (int)param_2[1];
  do {
    if (puVar11 == puVar1) {
      return;
    }
    uVar2 = *(uint *)(*puVar11 + 0x18);
    uVar8 = (ulong)uVar2;
    lVar5 = *(long *)(*puVar11 + 0x18);
    uVar13 = param_1[1];
    if (uVar13 != 0) {
      uVar6 = uVar13 - 1;
      uVar12 = (uint)uVar13;
      if ((uVar13 & uVar6) == 0) {
        unaff_x26 = (ulong)(uVar12 - 1 & uVar2);
      }
      else {
        unaff_x26 = uVar8;
        if (uVar13 <= uVar8) {
          uVar3 = 0;
          if (uVar12 != 0) {
            uVar3 = uVar2 / uVar12;
          }
          unaff_x26 = (ulong)(uVar2 - uVar3 * uVar12);
        }
      }
      plVar7 = *(long **)(*param_1 + unaff_x26 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          while( true ) {
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_1089a1cd8;
            uVar9 = plVar7[1];
            if (uVar9 != uVar8) break;
            if (*(uint *)(plVar7 + 2) == uVar2) goto LAB_1089a1e00;
          }
          if ((uVar13 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar13 <= uVar9) {
            uVar4 = 0;
            if (uVar13 != 0) {
              uVar4 = uVar9 / uVar13;
            }
            uVar9 = uVar9 - uVar4 * uVar13;
          }
        } while (uVar9 == unaff_x26);
      }
    }
LAB_1089a1cd8:
    plVar7 = (long *)0x18;
    __Znwm();
    uStack_68 = 1;
    *plVar7 = 0;
    plVar7[1] = uVar8;
    plVar7[2] = lVar5;
    plStack_78 = plVar7;
    plStack_70 = plVar10;
    if ((uVar13 == 0) || (*(float *)(param_1 + 4) * (float)uVar13 < (float)(param_1[3] + 1))) {
      func_0x0001089a2910(uVar13 << 1);
      func_0x00010895aee8(param_1);
      uVar13 = param_1[1];
      if ((uVar13 & uVar13 - 1) == 0) {
        unaff_x26 = (ulong)((int)uVar13 - 1U & uVar2);
      }
      else {
        unaff_x26 = uVar8;
        if (uVar13 <= uVar8) {
          uVar6 = 0;
          if (uVar13 != 0) {
            uVar6 = uVar8 / uVar13;
          }
          unaff_x26 = uVar8 - uVar6 * uVar13;
        }
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar7 == (long *)0x0) {
      *plStack_78 = param_1[2];
      param_1[2] = (long)plStack_78;
      *(long **)(*param_1 + unaff_x26 * 8) = plVar10;
      if (*plStack_78 != 0) {
        uVar8 = *(ulong *)(*plStack_78 + 8);
        if ((uVar13 & uVar13 - 1) == 0) {
          uVar8 = uVar8 & uVar13 - 1;
        }
        else if (uVar13 <= uVar8) {
          uVar6 = 0;
          if (uVar13 != 0) {
            uVar6 = uVar8 / uVar13;
          }
          uVar8 = uVar8 - uVar6 * uVar13;
        }
        *(long **)(*param_1 + uVar8 * 8) = plStack_78;
      }
    }
    else {
      *plStack_78 = *plVar7;
      *plVar7 = (long)plStack_78;
    }
    plStack_78 = (long *)0x0;
    param_1[3] = param_1[3] + 1;
    FUN_10895b38c(&plStack_78);
LAB_1089a1e00:
    puVar11 = puVar11 + 1;
  } while( true );
}



/* Entry: 1089a1e4c; end: 1089a1e97;  */

void FUN_1089a1e4c(void)

{
  func_0x0001089a1e64();
  return;
}



/* Entry: 1089a1e98; end: 1089a1ecf;  */

void FUN_1089a1e98(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34bd0();
  func_0x000107c2a6b4();
  func_0x000107c2a6b4(param_1 + 0x18,unaff_x19 + 0x18);
  func_0x000107c2a6b4(unaff_x20 + 0x30,unaff_x19 + 0x30);
  return;
}



/* Entry: 1089a1ed0; end: 1089a1f6b;  */

void FUN_1089a1ed0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar2;
  
  func_0x0001089a288c();
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  if (lVar2 != 0) {
    func_0x000107c27998();
    func_0x000100a71e9c();
  }
  func_0x000107c2799c(&stack0xffffffffffffffc0);
  *(undefined4 *)(unaff_x19 + 3) = *(undefined4 *)(unaff_x20 + 0x20);
  return;
}



/* Entry: 1089a1f6c; end: 1089a1f97;  */

void FUN_1089a1f6c(long param_1)

{
  long unaff_x19;
  
  func_0x000107c34bd0();
  FUN_1089a1fb4();
  FUN_1089a1fb4(param_1 + 0x20,unaff_x19 + 0x20);
  return;
}



/* Entry: 1089a1f98; end: 1089a1fb3;  */

void FUN_1089a1f98(long param_1)

{
  func_0x0001089a1fdc();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1089a1fb4; end: 1089a2007;  */

void FUN_1089a1fb4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34bd0();
  func_0x000107c3194c();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1089a2008; end: 1089a201f;  */

void FUN_1089a2008(long param_1,long param_2)

{
  func_0x0001089a2960();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 1089a2020; end: 1089a20a7;  */

void FUN_1089a2020(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x0001089a288c();
  *param_1 = *param_2;
  FUN_1089789a4(param_1 + 2,param_2 + 2);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar5;
  *(undefined1 *)(unaff_x19 + 0x80) = 0;
  if (*(char *)(unaff_x20 + 0x80) == '\x01') {
    FUN_1089a1f98((undefined1 *)(unaff_x19 + 0x40),unaff_x20 + 0x40);
  }
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  plVar1 = (long *)(unaff_x20 + 0x90);
  lVar3 = *plVar1;
  plVar2 = (long *)(unaff_x19 + 0x90);
  *plVar2 = lVar3;
  lVar4 = *(long *)(unaff_x20 + 0x98);
  *(long *)(unaff_x19 + 0x98) = lVar4;
  if (lVar4 == 0) {
    *(long **)(unaff_x19 + 0x88) = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    *(long **)(unaff_x20 + 0x88) = plVar1;
    *plVar1 = 0;
    *(undefined8 *)(unaff_x20 + 0x98) = 0;
  }
  return;
}



/* Entry: 1089a20a8; end: 1089a20ff;  */

void FUN_1089a20a8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x38] = 0;
  param_1[0x40] = 0;
  param_1[0x58] = 0;
  param_1[0x60] = 0;
  param_1[100] = 0;
  param_1[0x68] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  return;
}



/* Entry: 1089a2100; end: 1089a21f3;  */

void FUN_1089a2100(long *param_1,undefined8 param_2,undefined1 *param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  uVar4 = param_4;
  func_0x0001089a288c();
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3) < uVar4) {
    func_0x000107c27d04();
    puVar1 = unaff_x19;
    func_0x000107c27908();
    func_0x000107c27998();
    func_0x0001089a298c();
  }
  else {
    uVar4 = *(long *)(unaff_x19 + 8) - lVar3;
    if (param_4 <= uVar4) {
      if ((long)param_3 - unaff_x20 != 0) {
        _memmove(lVar3);
      }
      *(long *)(unaff_x19 + 8) = lVar3 + ((long)param_3 - unaff_x20);
      return;
    }
    if (*(long *)(unaff_x19 + 8) != lVar3) {
      _memmove(lVar3);
    }
    puVar1 = (undefined1 *)(unaff_x20 + uVar4);
  }
  puVar2 = *(undefined1 **)(unaff_x19 + 8);
  for (; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *puVar2 = *puVar1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 **)(unaff_x19 + 8) = puVar2;
  return;
}



/* Entry: 1089a21f4; end: 1089a2283;  */

void FUN_1089a21f4(long param_1,long param_2)

{
  func_0x0001089a2960();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  return;
}



/* Entry: 1089a2284; end: 1089a234f;  */

void FUN_1089a2284(ulong *param_1)

{
  ulong *puVar1;
  ulong **ppuVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  ulong *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puStack_40;
  ulong uStack_38;
  
  ppuVar2 = &puStack_40;
  func_0x0001089a288c();
  puVar5 = param_1 + 1;
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    lVar3 = 4;
  }
  else {
    puVar5 = (ulong *)unaff_x19[1];
    lVar3 = unaff_x19[2] << 1;
  }
  puStack_40 = (ulong *)0x0;
  uStack_38 = 0;
  FUN_1089a2350(&puStack_40,lVar3);
  uVar6 = uVar6 >> 1;
  puVar4 = (undefined8 *)((long)ppuVar2 + uVar6 * 0x1c);
  uVar9 = *(undefined8 *)((long)unaff_x20 + 0x14);
  uVar7 = *(undefined8 *)((long)unaff_x20 + 0xc);
  uVar11 = *unaff_x20;
  puVar4[1] = unaff_x20[1];
  *puVar4 = uVar11;
  *(undefined8 *)((long)puVar4 + 0x14) = uVar9;
  *(undefined8 *)((long)puVar4 + 0xc) = uVar7;
  puVar1 = puStack_40;
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar10 = puVar5[1];
    uVar8 = *puVar5;
    uVar7 = *(undefined8 *)((long)puVar5 + 0xc);
    *(undefined8 *)((long)puVar1 + 0x14) = *(undefined8 *)((long)puVar5 + 0x14);
    *(undefined8 *)((long)puVar1 + 0xc) = uVar7;
    puVar1[1] = uVar10;
    *puVar1 = uVar8;
    puVar5 = (ulong *)((long)puVar5 + 0x1c);
    puVar1 = (ulong *)((long)puVar1 + 0x1c);
  }
  FUN_108959814();
  uVar6 = uStack_38;
  puVar5 = puStack_40;
  puStack_40 = (ulong *)0x0;
  uStack_38 = 0;
  unaff_x19[1] = (ulong)puVar5;
  unaff_x19[2] = uVar6;
  *unaff_x19 = (*unaff_x19 | 1) + 2;
  func_0x0001089a2370(&puStack_40);
  return;
}



/* Entry: 1089a2350; end: 1089a242f;  */

void FUN_1089a2350(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_1089597c0();
  *param_1 = (long)plVar1;
  param_1[1] = param_2;
  return;
}



/* Entry: 1089a2430; end: 1089a244b;  */

void FUN_1089a2430(long param_1)

{
  FUN_1089a21f4();
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



/* Entry: 1089a244c; end: 1089a24cb;  */

void FUN_1089a244c(long param_1,long param_2)

{
  char cVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001089a288c();
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      func_0x0001089a298c();
      func_0x000107c27b9c();
      *(undefined4 *)(unaff_x19 + 3) = *(undefined4 *)(unaff_x20 + 3);
    }
  }
  else if (cVar1 == '\0') {
    uVar3 = unaff_x20[1];
    uVar2 = *unaff_x20;
    unaff_x19[2] = unaff_x20[2];
    unaff_x19[1] = uVar3;
    *unaff_x19 = uVar2;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = 0;
    *(undefined4 *)(unaff_x19 + 3) = *(undefined4 *)(unaff_x20 + 3);
    *(undefined1 *)(unaff_x19 + 4) = 1;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(unaff_x19 + 4) = 0;
  }
  return;
}



/* Entry: 1089a24cc; end: 1089a255b;  */

undefined4 * FUN_1089a24cc(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  cVar1 = *(char *)(param_1 + 10);
  if (cVar1 == *(char *)(param_2 + 10)) {
    if (cVar1 != '\0') {
      *param_1 = *param_2;
      FUN_1089a255c(&uStack_40,param_2 + 2);
      uVar3 = *(undefined8 *)(param_1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 6);
      uVar5 = *(undefined8 *)(param_1 + 4);
      uVar4 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 4) = uStack_38;
      *(undefined8 *)(param_1 + 2) = uStack_40;
      *(undefined8 *)(param_1 + 8) = uStack_28;
      *(undefined8 *)(param_1 + 6) = uStack_30;
      uStack_40 = uVar4;
      uStack_38 = uVar5;
      uStack_30 = uVar2;
      uStack_28 = uVar3;
      FUN_10893d574(&uStack_40);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10897784c(param_1);
  }
  else {
    FUN_10893d574(param_1 + 2);
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return param_1;
}



/* Entry: 1089a255c; end: 1089a255f;  */

void FUN_1089a255c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1089a2560; end: 1089a2663;  */

long * FUN_1089a2560(long *param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x9;
  long *unaff_x19;
  byte unaff_w20;
  
  func_0x0001089a288c();
  uVar3 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b954();
  lVar4 = *unaff_x19;
  if ((*(long *)(lVar4 + -8) == 0) && (*(char *)(lVar4 + (long)param_1) != -2)) {
    uVar5 = unaff_x19[2];
    param_1 = unaff_x19;
    if ((uVar5 < 9) || (uVar5 * 0x19 < (ulong)(unaff_x19[3] << 5))) {
      param_2 = (uint *)(uVar5 << 1 | 1);
      FUN_108977480();
    }
    else {
      param_2 = (uint *)&UNK_110aa4ee0;
      func_0x00010ae6c914();
    }
    func_0x0001089a298c();
    func_0x000107c2b954();
    lVar4 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  *(ulong *)(lVar4 + -8) =
       *(long *)(lVar4 + -8) - (ulong)(*(char *)(lVar4 + (long)param_1) == -0x80);
  uVar5 = unaff_x19[2];
  lVar4 = *unaff_x19;
  *(byte *)(lVar4 + (long)param_1) = unaff_w20 & 0x7f;
  *(byte *)(lVar4 + (uVar5 & (long)param_1 - 7U) + (uVar5 & 7)) = unaff_w20 & 0x7f;
  func_0x0001089a28e8(uVar3);
  if (extraout_x9 == extraout_x8) {
    return param_1;
  }
  ___stack_chk_fail();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  uVar5 = (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297) + (ulong)param_2[1];
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar5;
  return (long *)(SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar5 * -0x622015f714c7d297);
}



/* Entry: 1089a2664; end: 1089a266b;  */

ulong FUN_1089a2664(undefined8 param_1,uint *param_2)

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



/* Entry: 1089a266c; end: 1089a26cb;  */

void FUN_1089a266c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x20) != 0) {
    FUN_108976dc4(lVar1);
    *(undefined4 *)(lVar1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1089a26cc; end: 1089a274f;  */

void FUN_1089a26cc(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x20) == 2) {
    FUN_1089a2750(&uStack_50,param_3);
    uVar5 = param_2[1];
    uVar4 = *param_2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_2[1] = uStack_48;
    *param_2 = uStack_50;
    param_2[3] = uStack_38;
    param_2[2] = uStack_40;
    uStack_50 = uVar4;
    uStack_48 = uVar5;
    uStack_40 = uVar2;
    uStack_38 = uVar3;
    FUN_108977458(&uStack_50);
  }
  else {
    FUN_108976dc4(lVar1);
    FUN_1089775e8(lVar1,param_3);
    *(undefined4 *)(lVar1 + 0x20) = 2;
  }
  return;
}



/* Entry: 1089a2750; end: 1089a2763;  */

void FUN_1089a2750(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1089a2764; end: 1089a282b;  */

void FUN_1089a2764(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x000107c34bd0();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010895938c();
    unaff_x20[2] = 0;
    lVar3 = unaff_x20[1];
    for (lVar2 = 0; lVar3 != lVar2; lVar2 = lVar2 + 1) {
      *(undefined8 *)(*unaff_x20 + lVar2 * 8) = 0;
    }
    unaff_x20[3] = 0;
  }
  *unaff_x19 = 0;
  FUN_10895b0bc();
  unaff_x20[1] = unaff_x19[1];
  unaff_x19[1] = 0;
  lVar3 = unaff_x19[3];
  unaff_x20[3] = lVar3;
  *(undefined4 *)(unaff_x20 + 4) = *(undefined4 *)(unaff_x19 + 4);
  lVar2 = unaff_x19[2];
  unaff_x20[2] = lVar2;
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = unaff_x20[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*unaff_x20 + uVar4 * 8) = unaff_x20 + 2;
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 1089a282c; end: 1089a29a3;  */

void FUN_1089a282c(void)

{
  return;
}



/* Entry: 1089a29a4; end: 1089a2a9f;  */

void FUN_1089a29a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_48 [40];
  
  FUN_108b80d0c(auStack_48);
  puVar2 = &UNK_10f4ee0c3;
  uVar1 = 0x7d3;
  switch((int)param_2) {
  case 0x1771:
    puVar2 = &UNK_10f4ee09c;
    uVar1 = 0x7d4;
    break;
  case 0x1773:
    puVar2 = &UNK_10f4ee1c7;
    uVar1 = 0x7db;
    break;
  case 0x1775:
    break;
  case 0x1776:
    puVar2 = &UNK_10f4ee17a;
    break;
  case 0x1777:
    puVar2 = &UNK_10f4ee11e;
    break;
  case 0x177a:
    puVar2 = &UNK_10f4ee238;
    uVar1 = param_2;
    break;
  case 0x177b:
    puVar2 = &UNK_10f4ee1ee;
    uVar1 = 0x7e0;
    break;
  default:
    if ((int)param_2 == 0x7df) {
      puVar2 = &UNK_10f4ee216;
      uVar1 = param_2;
      break;
    }
  case 0x1772:
  case 0x1774:
  case 0x1778:
  case 0x1779:
    puVar2 = &UNK_10f4ee252;
    uVar1 = 0x7d7;
  }
  FUN_108b80b94(param_1,uVar1,puVar2);
  func_0x000108b80d84(auStack_48);
  return;
}



/* Entry: 1089a2aa0; end: 1089a2c3b;  */

void FUN_1089a2aa0(long param_1)

{
  long lVar1;
  undefined8 uStack_e8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = param_1;
  func_0x0001089a3a9c();
  if (*(char *)(lVar1 + 0x68) == '\x01') {
    func_0x0001089a3bf8();
    if (uStack_70 == 0) {
      if ((uStack_e8 & 1) != 0) {
        func_0x0001089a3a80();
      }
      FUN_1089a3208();
    }
    FUN_1089a57b4();
    func_0x0001089a3b08();
    func_0x0001089a3b40();
  }
  if ((((((*(byte *)(param_1 + 1) & 1) != 0) || ((*(byte *)(param_1 + 3) & 1) != 0)) ||
       ((*(byte *)(param_1 + 5) & 1) != 0)) ||
      (((*(byte *)(param_1 + 9) & 1) != 0 || ((*(byte *)(param_1 + 0x38) & 1) != 0)))) ||
     ((*(byte *)(param_1 + 0x41) & 1) != 0)) {
    func_0x0001089a3bf8();
    if (uStack_78 == 0) {
      if ((uStack_e8 & 1) != 0) {
        func_0x0001089a3a80();
      }
      func_0x0001089a3248();
      uStack_78 = uStack_e8;
    }
    if (((*(byte *)(param_1 + 1) & 1) != 0) || ((*(byte *)(param_1 + 9) & 1) != 0)) {
      FUN_1089a2c7c(uStack_78);
      FUN_1089a2c3c();
    }
    if (*(char *)(param_1 + 3) == '\x01') {
      func_0x0001089a2c8c(uStack_78);
      if ((*(ushort *)(param_1 + 2) >> 8 & 1) != 0) {
        func_0x0001089a3adc(*(ushort *)(param_1 + 2) & 1);
      }
    }
    if (*(char *)(param_1 + 0x38) == '\x01') {
      FUN_1089a2cf8(uStack_78);
      FUN_1089a2c9c();
    }
    if (((*(byte *)(param_1 + 5) & 1) != 0) || ((*(byte *)(param_1 + 0x41) & 1) != 0)) {
      func_0x0001089a2d08(uStack_78);
      FUN_1089a2c3c();
    }
    func_0x0001089a3b08();
    func_0x0001089a3b40();
  }
  return;
}



/* Entry: 1089a2c3c; end: 1089a2c7b;  */

void FUN_1089a2c3c(long param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_2 >> 8 & 1) != 0) {
    func_0x0001089a3adc(param_2 & 1);
  }
  if ((param_3 >> 8 & 1) != 0) {
    FUN_1089a3288();
    uVar1 = 1;
    if ((param_3 & 1) != 0) {
      uVar1 = 2;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    func_0x0001089a3b5c();
  }
  return;
}



/* Entry: 1089a2c7c; end: 1089a2c9b;  */

void FUN_1089a2c7c(long param_1)

{
  ulong uVar1;
  
  func_0x0001089a3b5c();
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089a3a80();
    }
    func_0x0001089a3340();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1089a2c9c; end: 1089a2cf7;  */

void FUN_1089a2c9c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  uStack_30 = param_1;
  FUN_1089a33ac(param_2);
  uVar1 = (ulong)*(uint *)(param_2 + 0x20);
  if (*(uint *)(param_2 + 0x20) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  puStack_28 = (undefined1 *)&uStack_30;
  (*(code *)(&PTR_FUN_110aa4f30)[uVar1])(&puStack_28,param_2);
  return;
}



/* Entry: 1089a2cf8; end: 1089a2d17;  */

void FUN_1089a2cf8(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089a3a80();
    }
    func_0x0001089a3760();
    *(ulong *)(param_1 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1089a2d18; end: 1089a2eab;  */

void FUN_1089a2d18(long param_1,undefined8 param_2,ulong param_3,undefined1 param_4,
                  undefined1 param_5,long param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  puVar1 = &uStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_3;
  FUN_108b812a4(&uStack_60);
  func_0x0001089a3ba0(*(uint *)(param_1 + 0x10) | 1);
  if ((uVar4 & 1) != 0) {
    func_0x0001089a3b6c();
  }
  func_0x000107c3024c(param_1 + 0x88,&uStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  *(undefined4 *)(param_1 + 0xc0) = 3;
  func_0x0001089a3ba0(*(uint *)(param_1 + 0x10) | 0x82);
  if ((uVar4 & 1) != 0) {
    func_0x0001089a3b6c();
  }
  func_0x000107c30248(param_1 + 0x90,param_2);
  func_0x0001089a3ba0(*(uint *)(param_1 + 0x10) | 4);
  if ((uVar4 & 1) != 0) {
    func_0x0001089a3b6c();
  }
  func_0x000107c30248(param_1 + 0x98,param_3);
  *(undefined1 *)(param_1 + 0xc4) = param_4;
  *(undefined1 *)(param_1 + 0xc9) = param_5;
  *(undefined1 *)(param_1 + 0xc5) = 1;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x2300;
  uStack_58 = 0x100000000;
  uStack_60 = 0x300000002;
  for (lVar8 = 0; lVar8 != 0x10; lVar8 = lVar8 + 4) {
    func_0x000107c2845c(param_1 + 0x48,*(undefined4 *)((long)&uStack_60 + lVar8));
  }
  uVar4 = 0;
  FUN_1089a2eac(param_1,FUN_1089a2f38,0,param_6);
  func_0x0001089a3bcc();
  pcVar3 = (code *)0x1089a2f48;
  puVar5 = (undefined8 *)(param_6 + 0x30);
  func_0x0001089a3bcc();
  *(undefined1 *)(param_1 + 200) = 1;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x1000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001089a3bc4();
  puVar7 = (undefined8 *)*puVar5;
  while (puVar7 != puVar5 + 1) {
    pcVar6 = pcVar3;
    if ((uVar4 & 1) != 0) {
      pcVar6 = *(code **)(*(long *)((long)puVar1 + ((long)uVar4 >> 1)) +
                         ((ulong)pcVar3 & 0xffffffff));
    }
    plVar2 = (long *)((long)puVar1 + ((long)uVar4 >> 1));
    (*pcVar6)();
    func_0x0001089a3b5c();
    if ((plVar2[1] & 1U) != 0) {
      func_0x0001089a3b6c();
    }
    func_0x000107c30248(plVar2 + 3,puVar7 + 4);
    func_0x000107c27be0();
  }
  return;
}



/* Entry: 1089a2eac; end: 1089a2f37;  */

void FUN_1089a2eac(long param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_4;
  plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
  while (puVar4 != param_4 + 1) {
    pcVar3 = param_2;
    if ((param_3 & 1) != 0) {
      pcVar3 = *(code **)(*plVar1 + ((ulong)param_2 & 0xffffffff));
    }
    plVar2 = plVar1;
    (*pcVar3)();
    func_0x0001089a3b5c();
    if ((plVar2[1] & 1U) != 0) {
      func_0x0001089a3b6c();
    }
    func_0x000107c30248(plVar2 + 3,puVar4 + 4);
    func_0x000107c27be0();
  }
  return;
}



/* Entry: 1089a2f38; end: 1089a2f4f;  */

void FUN_1089a2f38(long param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = *(ulong **)(param_1 + 0x18);
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_1089a37dc);
    func_0x000100627e90();
    *(ulong **)(param_1 + 0x18) = puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if (*(int *)(param_1 + 0x20) == 0) {
        func_0x0001000640a4(puVar2,FUN_1089a37dc);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = *(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x24);
      if (bVar1 || *(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x24)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}


