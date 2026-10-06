/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d0c30c; end: 109d0c53f;  */

long FUN_109d0c30c(long param_1)

{
  return param_1 + 0x20;
}



/* Entry: 109d0c540; end: 109d0c5a7;  */

bool FUN_109d0c540(long param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (((uint)param_2 < 10) && ((1 << (ulong)((uint)param_2 & 0x1f) & 600U) != 0)) {
    if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x10) >> 2 & 1) == 0) {
      return false;
    }
    iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0xd8) + 0x28);
    FUN_109d0c5a8(param_2);
    bVar2 = iVar1 == (int)param_2;
  }
  return bVar2;
}



/* Entry: 109d0c5a8; end: 109d0c5f3;  */

undefined *** FUN_109d0c5a8(int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined *unaff_x19;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuStack_280;
  undefined1 auStack_278 [24];
  uint auStack_260 [96];
  undefined **appuStack_e0 [19];
  long lStack_48;
  
  uVar7 = param_1 - 3;
  if ((uVar7 < 7) && ((0x4bU >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
    return (undefined ***)(ulong)*(uint *)(&UNK_10e0406a4 + ((ulong)uVar7 & 0xff) * 4);
  }
  puVar3 = &UNK_10f5ac0d2;
  puVar6 = (undefined8 *)&UNK_10f5ac0f8;
  puVar5 = puVar3;
  func_0x00010952d0c4(&UNK_10f5ac0d2,&UNK_10f5ac0d2);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*(long *)(puVar3 + 0x10) + 0x10) >> 2 & 1) == 0) {
    func_0x00010952d0c4(&UNK_10e0404bc,&UNK_10f5ac083,&UNK_10f5ac09a);
  }
  else {
    FUN_109d14f44(&ppuStack_280,puVar5,4);
    uVar7 = *(uint *)((long)auStack_260 + (long)ppuStack_280[-3]);
    if ((uVar7 & 5) == 0) {
      ppuVar10 = &PTR_PTR_1132ec980;
      if (*(undefined ***)(*(long *)(puVar3 + 0x10) + 0xd8) != (undefined **)0x0) {
        ppuVar10 = *(undefined ***)(*(long *)(puVar3 + 0x10) + 0xd8);
      }
      puVar8 = (undefined8 *)((ulong)ppuVar10[3] & 0xfffffffffffffffc);
      puVar6 = (undefined8 *)puVar8[1];
      puVar1 = (undefined8 *)*puVar8;
      if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
        puVar6 = (undefined8 *)(ulong)*(byte *)((long)puVar8 + 0x17);
        puVar1 = puVar8;
      }
      func_0x0001092b4db8(&ppuStack_280,puVar1);
      uVar7 = *(uint *)((long)auStack_260 + (long)ppuStack_280[-3]);
    }
    unaff_x19 = puVar5;
    if ((uVar7 & 5) == 0) {
      ppuStack_280 = &PTR_DAT_11087cb40;
      appuStack_e0[0] = &PTR_DAT_11087cb68;
      func_0x000107c28018(auStack_278);
      ppuVar10 = &PTR_PTR_11087cb80;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_280);
      pppuVar4 = appuStack_e0;
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
        ___stack_chk_fail();
        func_0x000107c28010(&ppuStack_280);
        __Unwind_Resume();
        if (*(char *)((long)ppuVar10 + 0x17) < '\0') {
          func_0x000107c3192c(pppuVar4,*ppuVar10,ppuVar10[1]);
        }
        else {
          ppuVar11 = (undefined **)ppuVar10[1];
          ppuVar9 = (undefined **)*ppuVar10;
          pppuVar4[2] = (undefined **)ppuVar10[2];
          pppuVar4[1] = ppuVar11;
          *pppuVar4 = ppuVar9;
        }
        ppuVar10 = (undefined **)*puVar6;
        pppuVar4[4] = (undefined **)puVar6[1];
        pppuVar4[3] = ppuVar10;
        *(undefined4 *)(pppuVar4 + 5) = 1;
        *(undefined8 *)((long)pppuVar4 + 0x2c) = 0;
        *(undefined1 *)(pppuVar4 + 7) = 0;
        *(undefined1 *)(pppuVar4 + 10) = 0;
        return pppuVar4;
      }
      return pppuVar4;
    }
  }
  FUN_109d00278(&UNK_10e0404bc,&UNK_10f5ac083,unaff_x19);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109d0c764);
  (*pcVar2)();
}



/* Entry: 109d0c5f4; end: 109d0c787;  */

undefined *** FUN_109d0c5f4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined ***pppuVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 unaff_x19;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuStack_270;
  undefined1 auStack_268 [24];
  uint auStack_250 [96];
  undefined **appuStack_d0 [19];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x10) >> 2 & 1) == 0) {
    func_0x00010952d0c4(&UNK_10e0404bc,&UNK_10f5ac083,&UNK_10f5ac09a);
  }
  else {
    FUN_109d14f44(&ppuStack_270,param_2,4);
    uVar4 = *(uint *)((long)auStack_250 + (long)ppuStack_270[-3]);
    if ((uVar4 & 5) == 0) {
      ppuVar5 = *(undefined ***)(*(long *)(param_1 + 0x10) + 0xd8);
      ppuVar7 = &PTR_PTR_1132ec980;
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar7 = ppuVar5;
      }
      puVar6 = (undefined8 *)((ulong)ppuVar7[3] & 0xfffffffffffffffc);
      param_3 = (undefined8 *)puVar6[1];
      puVar1 = (undefined8 *)*puVar6;
      if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
        param_3 = (undefined8 *)(ulong)*(byte *)((long)puVar6 + 0x17);
        puVar1 = puVar6;
      }
      func_0x0001092b4db8(&ppuStack_270,puVar1);
      uVar4 = *(uint *)((long)auStack_250 + (long)ppuStack_270[-3]);
    }
    unaff_x19 = param_2;
    if ((uVar4 & 5) == 0) {
      ppuStack_270 = &PTR_DAT_11087cb40;
      appuStack_d0[0] = &PTR_DAT_11087cb68;
      func_0x000107c28018(auStack_268);
      ppuVar7 = &PTR_PTR_11087cb80;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_270);
      pppuVar3 = appuStack_d0;
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
        ___stack_chk_fail();
        func_0x000107c28010(&ppuStack_270);
        __Unwind_Resume();
        if (*(char *)((long)ppuVar7 + 0x17) < '\0') {
          func_0x000107c3192c(pppuVar3,*ppuVar7,ppuVar7[1]);
        }
        else {
          ppuVar8 = (undefined **)ppuVar7[1];
          ppuVar5 = (undefined **)*ppuVar7;
          pppuVar3[2] = (undefined **)ppuVar7[2];
          pppuVar3[1] = ppuVar8;
          *pppuVar3 = ppuVar5;
        }
        ppuVar7 = (undefined **)*param_3;
        pppuVar3[4] = (undefined **)param_3[1];
        pppuVar3[3] = ppuVar7;
        *(undefined4 *)(pppuVar3 + 5) = 1;
        *(undefined8 *)((long)pppuVar3 + 0x2c) = 0;
        *(undefined1 *)(pppuVar3 + 7) = 0;
        *(undefined1 *)(pppuVar3 + 10) = 0;
        return pppuVar3;
      }
      return pppuVar3;
    }
  }
  FUN_109d00278(&UNK_10e0404bc,&UNK_10f5ac083,unaff_x19);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109d0c764);
  (*pcVar2)();
}



/* Entry: 109d0c788; end: 109d0c7f3;  */

undefined8 * FUN_109d0c788(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 109d0c7f4; end: 109d0c863;  */

long FUN_109d0c7f4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x58) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x29);
    uVar1 = *(undefined8 *)(param_1 + 0x21);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_3 + 0x18) = uVar3;
    *(undefined8 *)(param_3 + 0x29) = uVar2;
    *(undefined8 *)(param_3 + 0x21) = uVar1;
    func_0x0001099ae2b0(param_3 + 0x38,param_1 + 0x38);
    param_3 = param_3 + 0x58;
  }
  return param_3;
}



/* Entry: 109d0c864; end: 109d0c8c3;  */

undefined8 * FUN_109d0c864(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110b3e6b0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 109d0c8c4; end: 109d0c8c7;  */

void FUN_109d0c8c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d0c8c8; end: 109d0c8fb;  */

void FUN_109d0c8c8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d0c8fc; end: 109d0c933;  */

undefined8 FUN_109d0c8fc(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b3e700);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d0c934; end: 109d0c937;  */

void FUN_109d0c934(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d0c938; end: 109d0ca5b;  */

undefined8 * FUN_109d0c938(undefined8 *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long alStack_68 [3];
  
  if (param_3 == 6) {
    puVar4 = (undefined8 *)0x48;
    __Znwm();
    *(undefined1 *)(puVar4 + 1) = 6;
    *puVar4 = &PTR_FUN_110b3e5e0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[8] = 0;
    puVar3 = puVar4;
  }
  else if (param_3 == 2) {
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    *(undefined1 *)(puVar3 + 1) = 2;
    *puVar3 = &PTR_FUN_110b3e568;
    puVar4 = (undefined8 *)0x38;
    __Znwm();
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar3[2] = puVar4;
  }
  else {
    if (param_3 != 1) {
      iVar2 = 0xe0406c0;
      func_0x00010952d0c4(&UNK_10e0406c0,&UNK_10f5ac111,&UNK_10f5ac115);
      __ZdlPv();
      __Unwind_Resume();
      if (iVar2 == 2) {
        puVar5 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
        func_0x00010c114d40();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined *)0x0) {
          alStack_68[0] = 0;
          alStack_68[1] = 0;
          alStack_68[2] = 0;
        }
        else {
          func_0x00010c0eb960(alStack_68,puVar5);
        }
        _objc_release(puVar5);
        bVar1 = 10 < alStack_68[0];
      }
      else {
        bVar1 = iVar2 == 1;
      }
      return (undefined8 *)(ulong)bVar1;
    }
    puVar3 = (undefined8 *)0x50;
    __Znwm();
    *(undefined1 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_110b3e648;
    puVar4 = (undefined8 *)&stack0xffffffffffffffdf;
    func_0x000109d000d8(puVar3 + 2,puVar4);
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
  }
  *param_1 = puVar3;
  return puVar4;
}



/* Entry: 109d0ca5c; end: 109d0caef;  */

bool FUN_109d0ca5c(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  long alStack_38 [3];
  
  if (param_1 == 2) {
    puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      alStack_38[0] = 0;
      alStack_38[1] = 0;
      alStack_38[2] = 0;
    }
    else {
      func_0x00010c0eb960(alStack_38,puVar2);
    }
    _objc_release(puVar2);
    bVar1 = 10 < alStack_38[0];
  }
  else {
    bVar1 = param_1 == 1;
  }
  return bVar1;
}



/* Entry: 109d0caf0; end: 109d0cbbb;  */

void FUN_109d0caf0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,&UNK_10f5ac147);
  func_0x000107c31940(auStack_60,&UNK_10f5ac174);
  FUN_109ceaf70(uVar2,auStack_48,auStack_60);
  ___cxa_throw(uVar2,&PTR_DAT_110b3d3f8,FUN_109ceaf6c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d0cb64);
  (*pcVar1)();
}



/* Entry: 109d0cbbc; end: 109d0d6ef;  */

void FUN_109d0cbbc(ulong *param_1,long *param_2,long param_3,long *param_4,ulong param_5)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined *puVar4;
  long *plVar5;
  ulong *puVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 auStack_560 [2];
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined4 uStack_548;
  undefined3 uStack_544;
  char cStack_541;
  undefined8 uStack_540;
  undefined8 ****appppuStack_538 [2];
  char cStack_521;
  undefined8 ***pppuStack_520;
  undefined8 ****ppppuStack_518;
  undefined8 ***pppuStack_510;
  undefined8 ****ppppuStack_500;
  undefined8 **ppuStack_4f8;
  undefined8 uStack_4f0;
  undefined8 ****ppppuStack_4e0;
  undefined8 ***pppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  byte bStack_499;
  undefined8 **ppuStack_498;
  undefined8 ****ppppuStack_490;
  ulong uStack_488;
  ulong uStack_480;
  undefined1 uStack_471;
  ulong uStack_470;
  undefined8 ***pppuStack_468;
  undefined8 ***pppuStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined8 ***)PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_498 = pppuVar3;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfacc00();
  _objc_release(puVar4);
  if (((uint)pppuVar3 & (uint)bStack_499 & 1) == 0) {
    FUN_109cda0d4(&UNK_10f5ac147,&UNK_10f5ac191,&UNK_10f5a8bcd);
    goto LAB_109d0d4c0;
  }
  puVar4 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    ppppuStack_490 = (undefined8 *****)0x0;
    uStack_488 = 0;
    uStack_480 = 0;
  }
  else {
    func_0x00010c0eb960(&ppppuStack_490,puVar4);
  }
  _objc_release(puVar4);
  ppppuVar9 = ppppuStack_490;
  uVar14 = 0;
  while (plVar5 = param_2,
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(param_2,&uStack_470,0x400),
        (*(byte *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x20) & 5) == 0) {
    lVar13 = 0;
    uVar11 = 0;
    do {
      uVar11 = uVar11 * 0x40 + 0x9e3779b9 + (uVar11 >> 2) + *(long *)((long)&uStack_470 + lVar13) ^
               uVar11;
      lVar13 = lVar13 + 8;
    } while (lVar13 != 0x400);
    uVar14 = uVar14 * 0x40 + 0x9e3779b9 + (uVar14 >> 2) + uVar11 ^ uVar14;
  }
  if (param_2[1] != 0) {
    puVar6 = &uStack_470;
    func_0x000109549058();
    uVar14 = uVar14 * 0x40 + 0x9e3779b9 + (uVar14 >> 2) + (long)puVar6 ^ uVar14;
  }
  uStack_470 = uVar14;
  FUN_109d0d770(&uStack_470,param_3);
  FUN_109d0d770(&uStack_470,param_3 + 0x18);
  uVar12 = (long)ppppuVar9 + (uStack_470 >> 2) + uStack_470 * 0x40 + 0x9e3779b9 ^ uStack_470;
  uVar12 = uStack_488 + 0x9e3779b9 + uVar12 * 0x40 + (uVar12 >> 2) ^ uVar12;
  uVar14 = uStack_480 + 0x9e3779b9 + uVar12 * 0x40 + (uVar12 >> 2);
  __ZNSt3__19to_stringEy(&ppppuStack_490,uVar14 ^ uVar12);
  uVar11 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar11 = (ulong)*(byte *)((long)param_4 + 0x17);
  }
  func_0x000104c4f768(&ppppuStack_4e0,uVar11 + 1,&ppppuStack_500);
  pppppuVar8 = (undefined8 *****)ppppuStack_4e0;
  if (-1 < (long)pppuStack_4d0) {
    pppppuVar8 = &ppppuStack_4e0;
  }
  if (uVar11 != 0) {
    plVar5 = (long *)*param_4;
    if (-1 < *(char *)((long)param_4 + 0x17)) {
      plVar5 = param_4;
    }
    _memmove(pppppuVar8,plVar5,uVar11);
  }
  *(undefined2 *)((long)pppppuVar8 + uVar11) = 0x2f;
  uVar11 = uStack_488;
  pppppuVar8 = (undefined8 *****)ppppuStack_490;
  if (-1 < (long)uStack_480) {
    uVar11 = uStack_480 >> 0x38;
    pppppuVar8 = &ppppuStack_490;
  }
  pppppuVar7 = &ppppuStack_4e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar7,pppppuVar8,uVar11);
  pppuStack_468 = pppppuVar7[1];
  uStack_470 = (ulong)*pppppuVar7;
  pppuStack_460 = pppppuVar7[2];
  pppppuVar7[1] = (undefined8 ****)0x0;
  pppppuVar7[2] = (undefined8 ****)0x0;
  *pppppuVar7 = (undefined8 ****)0x0;
  puVar6 = &uStack_470;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,&UNK_10f5ac1dc,0x10);
  uStack_4b8 = puVar6[1];
  uStack_4c0 = *puVar6;
  uStack_4b0 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if ((long)pppuStack_460 < 0) {
    __ZdlPv(uStack_470);
  }
  if ((long)pppuStack_4d0 < 0) {
    __ZdlPv(ppppuStack_4e0);
  }
  uVar14 = uVar14 ^ uVar12;
  FUN_109d13904(uVar14);
  __ZNSt3__15mutex4lockEv();
  pppuVar3 = (undefined8 ***)ppuStack_498;
  if ((param_5 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfacbe0();
    _objc_release(puVar4);
    if ((int)pppuVar3 == 0) goto LAB_109d0cf30;
    if ((long)uStack_4b0 < 0) {
      func_0x000107c3192c(param_1,uStack_4c0,uStack_4b8);
    }
    else {
      param_1[1] = uStack_4b8;
      *param_1 = uStack_4c0;
      param_1[2] = uStack_4b0;
    }
    *(undefined1 *)(param_1 + 3) = 0;
LAB_109d0d36c:
    __ZNSt3__15mutex6unlockEv(uVar14);
    if ((long)uStack_4b0 < 0) {
      __ZdlPv(uStack_4c0);
    }
    if ((long)uStack_480 < 0) {
      __ZdlPv(ppppuStack_490);
    }
    _objc_release(ppuStack_498);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc40(pppuVar3);
    _objc_release(puVar4);
LAB_109d0cf30:
    __ZNSt3__18ios_base5clearEj((long)param_2 + *(long *)(*param_2 + -0x18),0);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(param_2,1,0xffffffff);
    uStack_3f0 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    pppuStack_468 = (undefined8 ***)0x0;
    uStack_470 = 0;
    uStack_458 = 0;
    pppuStack_460 = (undefined8 ***)0x0;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
              (param_2,&uStack_470);
    uVar11 = param_4[1];
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      uVar11 = (ulong)*(byte *)((long)param_4 + 0x17);
    }
    func_0x000104c4f768(&ppppuStack_500,uVar11 + 1,&pppuStack_520);
    pppppuVar8 = (undefined8 *****)ppppuStack_500;
    if (-1 < (long)uStack_4f0) {
      pppppuVar8 = &ppppuStack_500;
    }
    if (uVar11 != 0) {
      plVar5 = (long *)*param_4;
      if (-1 < *(char *)((long)param_4 + 0x17)) {
        plVar5 = param_4;
      }
      _memmove(pppppuVar8,plVar5,uVar11);
    }
    *(undefined2 *)((long)pppppuVar8 + uVar11) = 0x2f;
    uVar11 = uStack_488;
    pppppuVar8 = (undefined8 *****)ppppuStack_490;
    if (-1 < (long)uStack_480) {
      uVar11 = uStack_480 >> 0x38;
      pppppuVar8 = &ppppuStack_490;
    }
    pppppuVar7 = &ppppuStack_500;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar7,pppppuVar8,uVar11);
    pppuStack_4d8 = pppppuVar7[1];
    ppppuStack_4e0 = *pppppuVar7;
    pppuStack_4d0 = pppppuVar7[2];
    pppppuVar7[1] = (undefined8 ****)0x0;
    pppppuVar7[2] = (undefined8 ****)0x0;
    *pppppuVar7 = (undefined8 ****)0x0;
    pppppuVar8 = &ppppuStack_4e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar8,&UNK_10f5ac1ed,0x14);
    pppuStack_468 = pppppuVar8[1];
    uStack_470 = (ulong)*pppppuVar8;
    pppuStack_460 = pppppuVar8[2];
    pppppuVar8[1] = (undefined8 ****)0x0;
    pppppuVar8[2] = (undefined8 ****)0x0;
    *pppppuVar8 = (undefined8 ****)0x0;
    if ((long)pppuStack_4d0 < 0) {
      __ZdlPv(ppppuStack_4e0);
    }
    if (uStack_4f0._7_1_ < '\0') {
      __ZdlPv(ppppuStack_500);
    }
    FUN_109cf4ccc(&ppppuStack_4e0,1,2);
    uVar11 = param_4[1];
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      uVar11 = (ulong)*(byte *)((long)param_4 + 0x17);
    }
    func_0x000104c4f768(appppuStack_538,uVar11 + 1,&uStack_471);
    pppppuVar8 = (undefined8 *****)appppuStack_538[0];
    if (-1 < cStack_521) {
      pppppuVar8 = appppuStack_538;
    }
    if (uVar11 != 0) {
      plVar5 = (long *)*param_4;
      if (-1 < *(char *)((long)param_4 + 0x17)) {
        plVar5 = param_4;
      }
      _memmove(pppppuVar8,plVar5,uVar11);
    }
    *(undefined2 *)((long)pppppuVar8 + uVar11) = 0x2f;
    uVar11 = uStack_488;
    pppppuVar8 = (undefined8 *****)ppppuStack_490;
    if (-1 < (long)uStack_480) {
      uVar11 = uStack_480 >> 0x38;
      pppppuVar8 = &ppppuStack_490;
    }
    pppppuVar7 = appppuStack_538;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar7,pppppuVar8,uVar11);
    ppppuStack_518 = pppppuVar7[1];
    pppuStack_520 = *pppppuVar7;
    pppuStack_510 = pppppuVar7[2];
    pppppuVar7[1] = (undefined8 ****)0x0;
    pppppuVar7[2] = (undefined8 ****)0x0;
    *pppppuVar7 = (undefined8 ****)0x0;
    ppppuVar9 = &pppuStack_520;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppuVar9,&UNK_10f5ac202,0xd);
    ppuStack_4f8 = ppppuVar9[1];
    ppppuStack_500 = (undefined8 ****)*ppppuVar9;
    uStack_4f0 = ppppuVar9[2];
    ppppuVar9[1] = (undefined8 ***)0x0;
    ppppuVar9[2] = (undefined8 ***)0x0;
    *ppppuVar9 = (undefined8 ***)0x0;
    if ((long)pppuStack_510 < 0) {
      __ZdlPv(pppuStack_520);
    }
    if (cStack_521 < '\0') {
      __ZdlPv(appppuStack_538[0]);
    }
    if (lRam00000001137e1c60 != -1) {
      pppuStack_520 = (undefined8 ***)&uStack_471;
      appppuStack_538[0] = &pppuStack_520;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137e1c60,appppuStack_538,FUN_109d0e730);
    }
    auStack_560[0] = 0x50100;
    if (cRam00000001137e1c58 == '\0') {
      auStack_560[0] = 0x100;
    }
    uStack_548 = 0;
    uStack_544 = 0;
    uStack_558 = 0;
    uStack_550 = 0;
    cStack_541 = '\0';
    uStack_540 = 0;
    FUN_109cf4d54(&ppppuStack_4e0,param_2,param_3,&ppppuStack_500,auStack_560);
    if (cStack_541 < '\0') {
      __ZdlPv(uStack_558);
    }
    pppuStack_520 = &ppuStack_498;
    ppppuStack_518 = &ppppuStack_500;
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    FUN_109ce0e30(&ppppuStack_500,&uStack_470);
    _objc_release(puVar4);
    pppuVar3 = (undefined8 ***)ppuStack_498;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d1560();
    _objc_release(puVar10);
    _objc_release(puVar4);
    if (((ulong)pppuVar3 & 1) != 0) {
      if ((long)uStack_4b0 < 0) {
        func_0x000107c3192c(param_1,uStack_4c0,uStack_4b8);
      }
      else {
        param_1[1] = uStack_4b8;
        *param_1 = uStack_4c0;
        param_1[2] = uStack_4b0;
      }
      *(undefined1 *)(param_1 + 3) = 1;
      FUN_109d0d6f0(&pppuStack_520);
      if ((long)uStack_4f0 < 0) {
        __ZdlPv(ppppuStack_500);
      }
      pppuVar3 = pppuStack_4d0;
      pppuStack_4d0 = (undefined8 ****)0x0;
      if ((undefined8 ****)pppuVar3 != (undefined8 ****)0x0) {
        (*(code *)(*pppuVar3)[1])();
      }
      pppuVar3 = pppuStack_4d8;
      pppuStack_4d8 = (undefined8 ****)0x0;
      if ((undefined8 ****)pppuVar3 != (undefined8 ****)0x0) {
        __ZdlPv();
      }
      if ((long)pppuStack_460 < 0) {
        __ZdlPv(uStack_470);
      }
      goto LAB_109d0d36c;
    }
  }
  ppuVar1 = ppuStack_498;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(ppuVar1);
  _objc_release(puVar4);
  func_0x00010952d0c4(&UNK_10f5ac147,&UNK_10f5ac191,&UNK_10f5ac210);
LAB_109d0d4c0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109d0d4c4);
  (*pcVar2)();
}



/* Entry: 109d0d6f0; end: 109d0d76f;  */

undefined8 * FUN_109d0d6f0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)param_1[1];
  uVar3 = *(undefined8 *)*param_1;
  if (*(char *)((long)plVar2 + 0x17) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(uVar3,param_2,puVar1,0);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 109d0d770; end: 109d0e1fb;  */

void FUN_109d0d770(ulong *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piStack_80;
  int *piStack_78;
  long *plStack_68;
  int *piVar5;
  
  func_0x00010925b8c4(&piStack_80,(param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3);
  if (piStack_80 != piStack_78) {
    iVar2 = 0;
    piVar4 = piStack_80;
    do {
      piVar5 = piVar4 + 1;
      *piVar4 = iVar2;
      iVar2 = iVar2 + 1;
      piVar4 = piVar5;
    } while (piVar5 != piStack_78);
  }
  lVar1 = 0;
  if (piStack_78 != piStack_80) {
    lVar1 = LZCOUNT((long)piStack_78 - (long)piStack_80 >> 2) * -2 + 0x7e;
  }
  plStack_68 = param_2;
  func_0x000109d0d918(piStack_80,piStack_78,&plStack_68,lVar1,1);
  if (piStack_80 != piStack_78) {
    uVar8 = *param_1;
    piVar4 = piStack_80;
    do {
      lVar7 = *param_2 + (long)*piVar4 * 0x58;
      lVar1 = 0x1137e1c50;
      func_0x000107c31944(0x1137e1c50,lVar7);
      uVar8 = uVar8 * 0x40 + 0x9e3779b9 + (uVar8 >> 2) + lVar1 ^ uVar8;
      *param_1 = uVar8;
      uVar6 = (ulong)*(uint *)(lVar7 + 0x1c);
      uVar3 = (ulong)*(uint *)(lVar7 + 0x24);
      if (*(uint *)(lVar7 + 0x18) == 0 && *(uint *)(lVar7 + 0x1c) == 0) {
        if (uVar3 != 0) {
LAB_109d0d880:
          uVar6 = 0;
          goto LAB_109d0d884;
        }
        if (*(int *)(lVar7 + 0x20) != 0) {
          uVar3 = 0;
          goto LAB_109d0d880;
        }
      }
      else {
LAB_109d0d884:
        uVar8 = uVar8 * 0x40 + 0x9e3779b9 + (uVar8 >> 2) + uVar6 ^ uVar8;
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18) + 0x9e3779b9 + uVar8 * 0x40 + (uVar8 >> 2) ^ uVar8;
        uVar8 = (ulong)*(uint *)(lVar7 + 0x20) + 0x9e3779b9 + uVar8 * 0x40 + (uVar8 >> 2) ^ uVar8;
        *param_1 = uVar8;
        if (1 < uVar3) {
          uVar8 = uVar3 + 0x9e3779b9 + uVar8 * 0x40 + (uVar8 >> 2) ^ uVar8;
          *param_1 = uVar8;
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piStack_78);
  }
  if (piStack_80 != (int *)0x0) {
    __ZdlPv(piStack_80);
  }
  return;
}



/* Entry: 109d0e1fc; end: 109d0e4cf;  */

void FUN_109d0e1fc(int *param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)*param_4 + (long)*param_2 * 0x58;
  func_0x000107c2abd4(lVar2,*(long *)*param_4 + (long)*param_1 * 0x58);
  lVar3 = *(long *)*param_4 + (long)*param_3 * 0x58;
  func_0x000107c2abd4(lVar3,*(long *)*param_4 + (long)*param_2 * 0x58);
  if (((uint)lVar2 >> 7 & 1) == 0) {
    if ((char)lVar3 < '\0') {
      iVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = iVar1;
      lVar2 = *(long *)*param_4 + (long)*param_2 * 0x58;
      func_0x000107c2abd4(lVar2,*(long *)*param_4 + (long)*param_1 * 0x58);
      if (((uint)lVar2 >> 7 & 1) != 0) {
        iVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  else {
    iVar1 = *param_1;
    if ((char)lVar3 < '\0') {
      *param_1 = *param_3;
      *param_3 = iVar1;
    }
    else {
      *param_1 = *param_2;
      *param_2 = iVar1;
      lVar2 = *(long *)*param_4 + (long)*param_3 * 0x58;
      func_0x000107c2abd4(lVar2,*(long *)*param_4 + (long)iVar1 * 0x58);
      if (((uint)lVar2 >> 7 & 1) != 0) {
        iVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = iVar1;
      }
    }
  }
  return;
}



/* Entry: 109d0e4d0; end: 109d0e72f;  */

bool FUN_109d0e4d0(int *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar6 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 == 2) {
      lVar3 = *(long *)*param_3 + (long)param_2[-1] * 0x58;
      func_0x000107c2abd4(lVar3,*(long *)*param_3 + (long)*param_1 * 0x58);
      if (((uint)lVar3 >> 7 & 1) == 0) {
        return true;
      }
      iVar9 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = iVar9;
      return true;
    }
  }
  else {
    if (uVar6 == 3) {
      FUN_109d0e1fc(param_1,param_1 + 1,param_2 + -1,param_3);
      return true;
    }
    if (uVar6 == 4) {
      FUN_109d0e1fc(param_1,param_1 + 1,param_1 + 2,param_3);
      lVar3 = *(long *)*param_3 + (long)param_2[-1] * 0x58;
      func_0x000107c2abd4(lVar3,*(long *)*param_3 + (long)param_1[2] * 0x58);
      if (((uint)lVar3 >> 7 & 1) == 0) {
        return true;
      }
      iVar9 = param_1[2];
      param_1[2] = param_2[-1];
      param_2[-1] = iVar9;
      lVar3 = *(long *)*param_3 + (long)param_1[2] * 0x58;
      func_0x000107c2abd4(lVar3,*(long *)*param_3 + (long)param_1[1] * 0x58);
      if (((uint)lVar3 >> 7 & 1) == 0) {
        return true;
      }
      iVar9 = param_1[1];
      iVar2 = param_1[2];
      param_1[1] = iVar2;
      param_1[2] = iVar9;
      lVar3 = *(long *)*param_3 + (long)iVar2 * 0x58;
      func_0x000107c2abd4(lVar3,*(long *)*param_3 + (long)*param_1 * 0x58);
      if (((uint)lVar3 >> 7 & 1) == 0) {
        return true;
      }
      uVar11 = NEON_rev64(*(undefined8 *)param_1,4);
      *(undefined8 *)param_1 = uVar11;
      return true;
    }
    if (uVar6 == 5) {
      func_0x000109d0e31c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
      return true;
    }
  }
  FUN_109d0e1fc(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar3 = 0;
    iVar9 = 0;
    piVar7 = param_1 + 2;
    piVar8 = param_1 + 3;
    do {
      lVar4 = *(long *)*param_3 + (long)*piVar8 * 0x58;
      func_0x000107c2abd4(lVar4,*(long *)*param_3 + (long)*piVar7 * 0x58);
      if (((uint)lVar4 >> 7 & 1) != 0) {
        iVar2 = *piVar8;
        lVar4 = lVar3;
        do {
          lVar10 = lVar4;
          *(undefined4 *)((long)param_1 + lVar10 + 0xc) =
               *(undefined4 *)((long)param_1 + lVar10 + 8);
          piVar7 = param_1;
          if (lVar10 == -8) goto LAB_109d0e638;
          lVar5 = *(long *)*param_3 + (long)iVar2 * 0x58;
          func_0x000107c2abd4(lVar5,*(long *)*param_3 +
                                    (long)*(int *)((long)param_1 + lVar10 + 4) * 0x58);
          lVar4 = lVar10 + -4;
        } while (((uint)lVar5 >> 7 & 1) != 0);
        piVar7 = (int *)((long)param_1 + lVar10 + 8);
LAB_109d0e638:
        *piVar7 = iVar2;
        iVar9 = iVar9 + 1;
        if (iVar9 == 8) {
          return piVar8 + 1 == param_2;
        }
      }
      piVar1 = piVar8 + 1;
      lVar3 = lVar3 + 4;
      piVar7 = piVar8;
      piVar8 = piVar1;
    } while (piVar1 != param_2);
  }
  return true;
}



/* Entry: 109d0e730; end: 109d0e73f;  */

void FUN_109d0e730(void)

{
  uRam00000001137e1c58 = 1;
  return;
}



/* Entry: 109d0e740; end: 109d0e7b3;  */

byte * FUN_109d0e740(long param_1)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  
  lVar2 = param_1;
  FUN_109d0e7b4();
  if (param_1 + 0xf0 != lVar2) {
    return (byte *)(lVar2 + 8);
  }
  lVar3 = 0x10;
  ___cxa_allocate_exception();
  func_0x000109262e48();
  lVar2 = lVar3;
  pbVar5 = PTR___ZTISt12out_of_range_110352240;
  ___cxa_throw(lVar3,PTR___ZTISt12out_of_range_110352240,PTR___ZNSt12out_of_rangeD1Ev_110346180);
  ___cxa_free_exception(lVar3);
  __Unwind_Resume();
  uVar6 = 0;
  pbVar1 = (byte *)(lVar2 + 0xf0);
  pbVar4 = pbVar1;
  while( true ) {
    for (; pbVar7 = (byte *)(lVar2 + uVar6 * 0x18), *pbVar5 <= *pbVar7; uVar6 = uVar6 << 1 | 1) {
      if (4 < uVar6) goto LAB_109d0e80c;
      pbVar4 = pbVar7;
    }
    pbVar7 = pbVar4;
    if (3 < uVar6) break;
    uVar6 = uVar6 * 2 + 2;
  }
LAB_109d0e80c:
  if ((pbVar1 == pbVar7) || (*pbVar5 < *pbVar7)) {
    pbVar7 = pbVar1;
  }
  return pbVar7;
}



/* Entry: 109d0e7b4; end: 109d0e827;  */

byte * FUN_109d0e7b4(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  
  uVar3 = 0;
  pbVar1 = (byte *)(param_1 + 0xf0);
  pbVar2 = pbVar1;
  while( true ) {
    for (; pbVar4 = (byte *)(param_1 + uVar3 * 0x18), *param_2 <= *pbVar4; uVar3 = uVar3 << 1 | 1) {
      if (4 < uVar3) goto LAB_109d0e80c;
      pbVar2 = pbVar4;
    }
    pbVar4 = pbVar2;
    if (3 < uVar3) break;
    uVar3 = uVar3 * 2 + 2;
  }
LAB_109d0e80c:
  if ((pbVar1 == pbVar4) || (*param_2 < *pbVar4)) {
    pbVar4 = pbVar1;
  }
  return pbVar4;
}



/* Entry: 109d0e828; end: 109d0eaa3;  */

void FUN_109d0e828(undefined8 *param_1,long param_2,int *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) == 0x10 && param_3[1] == 1) {
      puStack_a8 = (undefined4 *)0x0;
      lStack_a0 = 0;
      uStack_98 = 0;
      func_0x000109378600(&puStack_a8,*(long *)(param_2 + 0x30),*(long *)(param_2 + 0x38),4);
      uStack_90 = 1;
      if (lStack_a0 - (long)puStack_a8 != 0x10) goto LAB_109d0ea24;
      uStack_80 = CONCAT44(*puStack_a8,puStack_a8[3]);
      uStack_88 = CONCAT44(puStack_a8[1],puStack_a8[2]);
      uStack_68 = *(undefined8 *)(param_2 + 0x20);
      lStack_60 = *(long *)(param_2 + 0x28);
      if (lStack_60 != 0) {
        plVar1 = (long *)(lStack_60 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_78 = 0x109d1386c;
      ppuStack_70 = &PTR_DAT_110b3e818;
      FUN_109d0eaa4(param_1,&uStack_88,param_3,uStack_68,&uStack_78);
      (*(code *)*ppuStack_70)(&ppuStack_70);
      FUN_109d0f6ac(&puStack_a8);
      goto LAB_109d0e9dc;
    }
  }
  else {
    if ((*(int *)(param_2 + 0x18) == *param_3) && (*(int *)(param_2 + 0x1c) == param_3[1])) {
      *param_1 = &PTR_DAT_1108a5c28;
      uVar5 = *(undefined8 *)(param_2 + 8);
      param_1[2] = *(undefined8 *)(param_2 + 0x10);
      param_1[1] = uVar5;
      param_1[3] = *(undefined8 *)(param_2 + 0x18);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar5;
      if (*(long *)(param_2 + 0x28) != 0) {
        plVar1 = (long *)(*(long *)(param_2 + 0x28) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000109407928(param_1 + 6,param_2 + 0x30);
    }
    else {
      if (param_4 == 0) {
        FUN_109d0eb9c(param_1,param_2 + 8,param_3);
      }
      else {
        FUN_109cdb604(param_1,param_4,param_2 + 8,param_3);
      }
      FUN_109d0ecd0(param_2,param_1,param_4);
    }
LAB_109d0e9dc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x00010952d0c4(&UNK_10f5ac2e0,&UNK_10f5ac2e0,&UNK_10f5ac2f0);
LAB_109d0ea24:
  func_0x00010952d0c4(&UNK_10e0406f0,&UNK_10f5ac44e,&UNK_10f5ac45c);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109d0ea48);
  (*pcVar4)();
}



/* Entry: 109d0eaa4; end: 109d0eb9b;  */

undefined8 **
FUN_109d0eaa4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 **param_4,
             undefined8 *param_5)

{
  undefined8 **ppuVar1;
  char cVar2;
  undefined8 *******pppppppuVar3;
  undefined1 *****pppppuVar4;
  bool bVar5;
  undefined8 **ppuVar6;
  int *piVar7;
  undefined8 **ppuVar8;
  undefined *puVar9;
  long *plVar10;
  char **ppcVar11;
  undefined *puVar12;
  undefined8 **ppuVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 *extraout_x8;
  uint *puVar17;
  ulong uVar18;
  undefined8 **extraout_x8_00;
  undefined8 **extraout_x8_01;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  float2 *pfVar24;
  double *pdVar25;
  float *pfVar26;
  byte *pbVar27;
  ushort *puVar28;
  char *pcVar29;
  short *psVar30;
  undefined8 *puVar31;
  short *psVar32;
  undefined4 *puVar33;
  undefined1 *puVar34;
  undefined2 *puVar35;
  ulong uVar36;
  long lVar37;
  undefined8 **ppuVar38;
  long lVar39;
  undefined8 unaff_x24;
  undefined1 *****pppppuVar40;
  code *pcVar41;
  uint uVar42;
  undefined4 uVar43;
  undefined8 uVar44;
  undefined8 *puVar45;
  undefined1 ****ppppuStack_200;
  code *pcStack_1f8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined8 *apuStack_1b0 [3];
  undefined4 uStack_198;
  undefined8 ******ppppppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 **ppuStack_158;
  undefined8 uStack_150;
  char *pcStack_148;
  long lStack_140;
  char cStack_131;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 *puStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = *param_5;
  (**(code **)(param_5[1] + 0x10))(apuStack_80,param_5 + 1);
  ppuVar8 = param_4;
  FUN_109cde3b8(&uStack_a0,param_4,&uStack_88);
  *param_1 = &PTR_DAT_1108a5c28;
  uVar44 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar44;
  param_1[3] = *param_3;
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  ppuVar38 = apuStack_80;
  (*(code *)*apuStack_80[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar38;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_80[0])(apuStack_80);
  __Unwind_Resume();
  ppuVar6 = &puStack_f0;
  pcStack_a8 = FUN_109d0eb9c;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (*(uint *)ppuVar8 < 0xf) {
    uVar36 = (ulong)(uint)(*(int *)(ppuVar38 + 1) * *(int *)((long)ppuVar38 + 0xc) *
                           *(int *)((long)ppuVar38 + 4) * *(int *)ppuVar38 *
                          *(int *)(&UNK_10e040de8 + (ulong)*(uint *)ppuVar8 * 4));
    __Znam(uVar36);
    _bzero();
    func_0x00010928e964(&puStack_f0,uVar36);
    if (ppuStack_e8 == (undefined8 **)0x0) {
      ppuVar13 = (undefined8 **)0x0;
    }
    else {
      ppuVar1 = ppuStack_e8 + 1;
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar5) {
          *ppuVar1 = (undefined8 *)((long)*ppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        ppuVar13 = ppuStack_e8;
      } while (cVar2 != '\0');
    }
    *extraout_x8 = &PTR_DAT_1108a5c28;
    puVar22 = *ppuVar38;
    extraout_x8[2] = ppuVar38[1];
    extraout_x8[1] = puVar22;
    extraout_x8[3] = *ppuVar8;
    extraout_x8[5] = ppuStack_e8;
    extraout_x8[4] = puStack_f0;
    *(undefined1 *)(extraout_x8 + 6) = 0;
    *(undefined1 *)(extraout_x8 + 9) = 0;
    if (ppuVar13 != (undefined8 **)0x0) {
      ppuVar38 = ppuVar13 + 1;
      do {
        puVar22 = *ppuVar38;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar38,0x10);
        if (bVar5) {
          *ppuVar38 = (undefined8 *)((long)puVar22 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar22 == (undefined8 *)0x0) {
        (*(code *)(*ppuVar13)[2])(ppuVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
        ppuVar6 = ppuVar13;
      }
    }
    return ppuVar6;
  }
  ppuVar38 = (undefined8 **)&UNK_10dfd21d7;
  puVar12 = &UNK_10f5ac4bc;
  puVar14 = &UNK_10f5ac4cb;
  func_0x00010952d0c4();
  ppuVar8 = apuStack_1b0;
  pcStack_f8 = FUN_109d0ecd0;
  ppuVar13 = (undefined8 **)ppuVar38[4];
  ppuVar6 = *(undefined8 ***)(puVar12 + 0x20);
  if (ppuVar13 == ppuVar6) {
    return ppuVar6;
  }
  uVar42 = *(uint *)(ppuVar38 + 3);
  uVar36 = (ulong)uVar42;
  uVar21 = *(uint *)(puVar12 + 0x18);
  bVar5 = uVar42 - 9 < 6;
  ppuStack_100 = &puStack_b0;
  if ((!bVar5 && 4 < uVar21 - 9) && (bVar5 || uVar21 - 9 != 5)) {
    if (((ulong)ppuVar38[9] & 1) != 0) {
      iVar19 = 1;
      for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1) {
        iVar19 = *piVar7 * iVar19;
      }
LAB_109d0eda0:
      if ((puVar12[0x48] & 1) == 0) {
        iVar20 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) * *(int *)(puVar12 + 0xc) *
                 *(int *)(puVar12 + 8);
      }
      else {
        iVar20 = 1;
        for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
            piVar7 = piVar7 + 1) {
          iVar20 = *piVar7 * iVar20;
        }
      }
      if (iVar19 != iVar20) goto LAB_109d0f120;
      if (*(int *)((long)ppuVar38 + 0x1c) == *(int *)(puVar12 + 0x1c)) {
LAB_109d0eeac:
        pcStack_f8 = FUN_109d0ecd0;
        if ((int)uVar42 < 4) {
          if (1 < (int)uVar42) {
            if (uVar42 == 2) {
              uVar42 = *(uint *)(puVar12 + 0x18);
              uVar36 = (ulong)uVar42;
              if ((int)uVar42 < 4) {
                if ((int)uVar42 < 2) {
                  if (uVar42 == 0) {
                    if (((ulong)ppuVar38[9] & 1) == 0) {
                      uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                               *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                    }
                    else {
                      uVar42 = 1;
                      for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                          piVar7 = piVar7 + 1) {
                        uVar42 = *piVar7 * uVar42;
                      }
                    }
                    if ((puVar12[0x48] & 1) == 0) {
                      uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                               *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                    }
                    else {
                      uVar21 = 1;
                      for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                          piVar7 = piVar7 + 1) {
                        uVar21 = *piVar7 * uVar21;
                      }
                    }
                    if (uVar42 == uVar21) {
                      if (uVar42 == 0) {
                        return ppuVar38;
                      }
                      lVar39 = (ulong)uVar42 << 3;
                      pdVar25 = (double *)ppuVar38[4];
                      psVar30 = *(short **)(puVar12 + 0x20);
                      do {
                        uVar36 = (ulong)((uint)(float)*pdVar25 >> 0x17);
                        *psVar30 = *(short *)(&UNK_10e04070a + uVar36 * 2) +
                                   (short)(((uint)(float)*pdVar25 & 0x7fffff) >>
                                          (ulong)((byte)(&UNK_10e040b0a)[uVar36] & 0x1f));
                        lVar39 = lVar39 + -8;
                        pdVar25 = pdVar25 + 1;
                        psVar30 = psVar30 + 1;
                      } while (lVar39 != 0);
                      return ppuVar38;
                    }
                  }
                  else {
                    if (uVar42 != 1) {
LAB_109d12e00:
                      func_0x000107c31940(&uStack_160,&UNK_10f5ac487);
                      func_0x000109259240(&pcStack_148,&uStack_160,&UNK_10f5a35f2);
                      __ZNSt3__19to_stringEi(&ppppppuStack_178,uVar36);
                      pppppppuVar3 = (undefined8 *******)ppppppuStack_178;
                      if (-1 < (char)bStack_161) {
                        uStack_170 = (ulong)bStack_161;
                        pppppppuVar3 = &ppppppuStack_178;
                      }
                      ppcVar11 = &pcStack_148;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (ppcVar11,pppppppuVar3,uStack_170);
                      ppcVar11[1] = (char *)0x0;
                      ppcVar11[2] = (char *)0x0;
                      *ppcVar11 = (char *)0x0;
                      if ((char)bStack_161 < '\0') {
                        __ZdlPv(ppppppuStack_178);
                      }
                      if (cStack_131 < '\0') {
                        __ZdlPv(pcStack_148);
                      }
                      if (uStack_150._7_1_ < '\0') {
                        __ZdlPv(CONCAT44(uStack_15c,uStack_160));
                      }
                      plVar10 = (long *)0x10;
                      ___cxa_allocate_exception();
                      __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                                ();
                      *plVar10 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                      ___cxa_throw(plVar10,PTR___ZTISt16invalid_argument_110352248,
                                   PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                      goto LAB_109d134dc;
                    }
                    if (((ulong)ppuVar38[9] & 1) == 0) {
                      uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                               *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                    }
                    else {
                      uVar42 = 1;
                      for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                          piVar7 = piVar7 + 1) {
                        uVar42 = *piVar7 * uVar42;
                      }
                    }
                    if ((puVar12[0x48] & 1) == 0) {
                      uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                               *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                    }
                    else {
                      uVar21 = 1;
                      for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                          piVar7 = piVar7 + 1) {
                        uVar21 = *piVar7 * uVar21;
                      }
                    }
                    if (uVar42 == uVar21) {
                      if (uVar42 == 0) {
                        return ppuVar38;
                      }
                      lVar39 = (ulong)uVar42 << 3;
                      pdVar25 = (double *)ppuVar38[4];
                      pfVar26 = *(float **)(puVar12 + 0x20);
                      do {
                        *pfVar26 = (float)*pdVar25;
                        lVar39 = lVar39 + -8;
                        pdVar25 = pdVar25 + 1;
                        pfVar26 = pfVar26 + 1;
                      } while (lVar39 != 0);
                      return ppuVar38;
                    }
                  }
                }
                else if (uVar42 == 2) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    ppuVar13 = (undefined8 **)ppuVar38[4];
                    ppuVar6 = *(undefined8 ***)(puVar12 + 0x20);
                    uVar15 = (ulong)uVar42 << 3;
                    goto code_r0x00010bdbf0a8;
                  }
                }
                else {
                  if (uVar42 != 3) goto LAB_109d12e00;
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    lVar39 = (ulong)uVar42 << 3;
                    pdVar25 = (double *)ppuVar38[4];
                    puVar34 = *(undefined1 **)(puVar12 + 0x20);
                    do {
                      *puVar34 = (char)(int)*pdVar25;
                      lVar39 = lVar39 + -8;
                      pdVar25 = pdVar25 + 1;
                      puVar34 = puVar34 + 1;
                    } while (lVar39 != 0);
                    return ppuVar38;
                  }
                }
              }
              else if ((int)uVar42 < 6) {
                if (uVar42 == 4) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    lVar39 = (ulong)uVar42 << 3;
                    pdVar25 = (double *)ppuVar38[4];
                    puVar35 = *(undefined2 **)(puVar12 + 0x20);
                    do {
                      *puVar35 = (short)(int)*pdVar25;
                      lVar39 = lVar39 + -8;
                      pdVar25 = pdVar25 + 1;
                      puVar35 = puVar35 + 1;
                    } while (lVar39 != 0);
                    return ppuVar38;
                  }
                }
                else {
                  if (uVar42 != 5) goto LAB_109d12e00;
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    lVar39 = (ulong)uVar42 << 3;
                    pdVar25 = (double *)ppuVar38[4];
                    piVar7 = *(int **)(puVar12 + 0x20);
                    do {
                      *piVar7 = (int)*pdVar25;
                      lVar39 = lVar39 + -8;
                      pdVar25 = pdVar25 + 1;
                      piVar7 = piVar7 + 1;
                    } while (lVar39 != 0);
                    return ppuVar38;
                  }
                }
              }
              else if (uVar42 == 6) {
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 3;
                  pdVar25 = (double *)ppuVar38[4];
                  puVar34 = *(undefined1 **)(puVar12 + 0x20);
                  do {
                    *puVar34 = (char)(int)*pdVar25;
                    lVar39 = lVar39 + -8;
                    pdVar25 = pdVar25 + 1;
                    puVar34 = puVar34 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
              else if (uVar42 == 7) {
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 3;
                  pdVar25 = (double *)ppuVar38[4];
                  puVar35 = *(undefined2 **)(puVar12 + 0x20);
                  do {
                    *puVar35 = (short)(int)*pdVar25;
                    lVar39 = lVar39 + -8;
                    pdVar25 = pdVar25 + 1;
                    puVar35 = puVar35 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
              else {
                if (uVar42 != 8) goto LAB_109d12e00;
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 3;
                  pdVar25 = (double *)ppuVar38[4];
                  piVar7 = *(int **)(puVar12 + 0x20);
                  do {
                    *piVar7 = (int)*pdVar25;
                    lVar39 = lVar39 + -8;
                    pdVar25 = pdVar25 + 1;
                    piVar7 = piVar7 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
            }
            else {
              if (uVar42 != 3) goto LAB_109d12c48;
              uVar42 = *(uint *)(puVar12 + 0x18);
              uVar36 = (ulong)uVar42;
              if ((int)uVar42 < 4) {
                if ((int)uVar42 < 2) {
                  if (uVar42 == 0) {
                    if (((ulong)ppuVar38[9] & 1) == 0) {
                      uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                               *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                    }
                    else {
                      uVar42 = 1;
                      for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                          piVar7 = piVar7 + 1) {
                        uVar42 = *piVar7 * uVar42;
                      }
                    }
                    uVar15 = (ulong)uVar42;
                    if ((puVar12[0x48] & 1) == 0) {
                      uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                               *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                    }
                    else {
                      uVar21 = 1;
                      for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                          piVar7 = piVar7 + 1) {
                        uVar21 = *piVar7 * uVar21;
                      }
                    }
                    if (uVar42 == uVar21) {
                      if (uVar42 == 0) {
                        return ppuVar38;
                      }
                      pbVar27 = (byte *)ppuVar38[4];
                      psVar30 = *(short **)(puVar12 + 0x20);
                      do {
                        uVar36 = (ulong)((uint)(float)*pbVar27 >> 0x17);
                        *psVar30 = *(short *)(&UNK_10e04070a + uVar36 * 2) +
                                   (short)(((uint)(float)*pbVar27 & 0x7fffff) >>
                                          (ulong)((byte)(&UNK_10e040b0a)[uVar36] & 0x1f));
                        uVar15 = uVar15 - 1;
                        pbVar27 = pbVar27 + 1;
                        psVar30 = psVar30 + 1;
                      } while (uVar15 != 0);
                      return ppuVar38;
                    }
                  }
                  else {
                    if (uVar42 != 1) goto LAB_109d12fb8;
                    if (((ulong)ppuVar38[9] & 1) == 0) {
                      uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                               *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                    }
                    else {
                      uVar42 = 1;
                      for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                          piVar7 = piVar7 + 1) {
                        uVar42 = *piVar7 * uVar42;
                      }
                    }
                    uVar15 = (ulong)uVar42;
                    if ((puVar12[0x48] & 1) == 0) {
                      uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                               *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                    }
                    else {
                      uVar21 = 1;
                      for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                          piVar7 = piVar7 + 1) {
                        uVar21 = *piVar7 * uVar21;
                      }
                    }
                    if (uVar42 == uVar21) {
                      if (uVar42 == 0) {
                        return ppuVar38;
                      }
                      pbVar27 = (byte *)ppuVar38[4];
                      pfVar26 = *(float **)(puVar12 + 0x20);
                      do {
                        *pfVar26 = (float)*pbVar27;
                        uVar15 = uVar15 - 1;
                        pbVar27 = pbVar27 + 1;
                        pfVar26 = pfVar26 + 1;
                      } while (uVar15 != 0);
                      return ppuVar38;
                    }
                  }
                }
                else {
                  if (uVar42 != 2) {
                    if (uVar42 == 3) {
                      if (((ulong)ppuVar38[9] & 1) == 0) {
                        uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                                 *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                      }
                      else {
                        uVar42 = 1;
                        for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                            piVar7 = piVar7 + 1) {
                          uVar42 = *piVar7 * uVar42;
                        }
                      }
                      uVar15 = (ulong)uVar42;
                      if ((puVar12[0x48] & 1) == 0) goto LAB_109d11e18;
                      iVar19 = 1;
                      for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                          piVar7 = piVar7 + 1) {
                        iVar19 = *piVar7 * iVar19;
                      }
                      goto LAB_109d11e2c;
                    }
LAB_109d12fb8:
                    func_0x000107c31940(&uStack_160,&UNK_10f5ac487);
                    func_0x000109259240(&pcStack_148,&uStack_160,&UNK_10f5a35f2);
                    __ZNSt3__19to_stringEi(&ppppppuStack_178,uVar36);
                    pppppppuVar3 = (undefined8 *******)ppppppuStack_178;
                    if (-1 < (char)bStack_161) {
                      uStack_170 = (ulong)bStack_161;
                      pppppppuVar3 = &ppppppuStack_178;
                    }
                    ppcVar11 = &pcStack_148;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (ppcVar11,pppppppuVar3,uStack_170);
                    ppcVar11[1] = (char *)0x0;
                    ppcVar11[2] = (char *)0x0;
                    *ppcVar11 = (char *)0x0;
                    if ((char)bStack_161 < '\0') {
                      __ZdlPv(ppppppuStack_178);
                    }
                    if (cStack_131 < '\0') {
                      __ZdlPv(pcStack_148);
                    }
                    if (uStack_150._7_1_ < '\0') {
                      __ZdlPv(CONCAT44(uStack_15c,uStack_160));
                    }
                    plVar10 = (long *)0x10;
                    ___cxa_allocate_exception();
                    __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              ();
                    *plVar10 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                    ___cxa_throw(plVar10,PTR___ZTISt16invalid_argument_110352248,
                                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    goto LAB_109d134dc;
                  }
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  uVar15 = (ulong)uVar42;
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    pbVar27 = (byte *)ppuVar38[4];
                    pdVar25 = *(double **)(puVar12 + 0x20);
                    do {
                      *pdVar25 = (double)*pbVar27;
                      uVar15 = uVar15 - 1;
                      pbVar27 = pbVar27 + 1;
                      pdVar25 = pdVar25 + 1;
                    } while (uVar15 != 0);
                    return ppuVar38;
                  }
                }
              }
              else if ((int)uVar42 < 6) {
                if (uVar42 == 4) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  uVar15 = (ulong)uVar42;
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    pbVar27 = (byte *)ppuVar38[4];
                    puVar28 = *(ushort **)(puVar12 + 0x20);
                    do {
                      *puVar28 = (ushort)*pbVar27;
                      uVar15 = uVar15 - 1;
                      pbVar27 = pbVar27 + 1;
                      puVar28 = puVar28 + 1;
                    } while (uVar15 != 0);
                    return ppuVar38;
                  }
                }
                else {
                  if (uVar42 != 5) goto LAB_109d12fb8;
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  uVar15 = (ulong)uVar42;
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    pbVar27 = (byte *)ppuVar38[4];
                    puVar17 = *(uint **)(puVar12 + 0x20);
                    do {
                      *puVar17 = (uint)*pbVar27;
                      uVar15 = uVar15 - 1;
                      pbVar27 = pbVar27 + 1;
                      puVar17 = puVar17 + 1;
                    } while (uVar15 != 0);
                    return ppuVar38;
                  }
                }
              }
              else {
                if (uVar42 == 6) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  uVar15 = (ulong)uVar42;
                  if ((puVar12[0x48] & 1) == 0) goto LAB_109d11e18;
                  iVar19 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    iVar19 = *piVar7 * iVar19;
                  }
                  goto LAB_109d11e2c;
                }
                if (uVar42 == 7) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  uVar15 = (ulong)uVar42;
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    pbVar27 = (byte *)ppuVar38[4];
                    puVar28 = *(ushort **)(puVar12 + 0x20);
                    do {
                      *puVar28 = (ushort)*pbVar27;
                      uVar15 = uVar15 - 1;
                      pbVar27 = pbVar27 + 1;
                      puVar28 = puVar28 + 1;
                    } while (uVar15 != 0);
                    return ppuVar38;
                  }
                }
                else {
                  if (uVar42 != 8) goto LAB_109d12fb8;
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  uVar15 = (ulong)uVar42;
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    pbVar27 = (byte *)ppuVar38[4];
                    puVar17 = *(uint **)(puVar12 + 0x20);
                    do {
                      *puVar17 = (uint)*pbVar27;
                      uVar15 = uVar15 - 1;
                      pbVar27 = pbVar27 + 1;
                      puVar17 = puVar17 + 1;
                    } while (uVar15 != 0);
                    return ppuVar38;
                  }
                }
              }
            }
            goto LAB_109d12c30;
          }
          if (uVar42 == 0) {
            uVar42 = *(uint *)(puVar12 + 0x18);
            uVar36 = (ulong)uVar42;
            if ((int)uVar42 < 4) {
              if ((int)uVar42 < 2) {
                if (uVar42 == 0) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  uVar15 = (ulong)uVar42;
                  if ((puVar12[0x48] & 1) == 0) goto LAB_109d12910;
                  iVar19 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    iVar19 = *piVar7 * iVar19;
                  }
                  goto LAB_109d12924;
                }
                if (uVar42 != 1) {
LAB_109d12d24:
                  func_0x000107c31940(&uStack_160,&UNK_10f5ac487);
                  func_0x000109259240(&pcStack_148,&uStack_160,&UNK_10f5a35f2);
                  __ZNSt3__19to_stringEi(&ppppppuStack_178,uVar36);
                  pppppppuVar3 = (undefined8 *******)ppppppuStack_178;
                  if (-1 < (char)bStack_161) {
                    uStack_170 = (ulong)bStack_161;
                    pppppppuVar3 = &ppppppuStack_178;
                  }
                  ppcVar11 = &pcStack_148;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppcVar11,pppppppuVar3,uStack_170);
                  ppcVar11[1] = (char *)0x0;
                  ppcVar11[2] = (char *)0x0;
                  *ppcVar11 = (char *)0x0;
                  if ((char)bStack_161 < '\0') {
                    __ZdlPv(ppppppuStack_178);
                  }
                  if (cStack_131 < '\0') {
                    __ZdlPv(pcStack_148);
                  }
                  if (uStack_150._7_1_ < '\0') {
                    __ZdlPv(CONCAT44(uStack_15c,uStack_160));
                  }
                  plVar10 = (long *)0x10;
                  ___cxa_allocate_exception();
                  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            ();
                  *plVar10 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                  ___cxa_throw(plVar10,PTR___ZTISt16invalid_argument_110352248,
                               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                  goto LAB_109d134dc;
                }
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                uVar15 = (ulong)uVar42;
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  puVar23 = ppuVar38[4];
                  puVar31 = *(undefined8 **)(puVar12 + 0x20);
                  uVar36 = 0;
                  puVar22 = puVar23;
                  puVar45 = puVar31;
                  if ((uVar42 & 0xfffffffc) != 0) {
                    do {
                      uVar44 = *puVar22;
                      puVar45[1] = CONCAT44((float)(float2)((ulong)uVar44 >> 0x30),
                                            (float)(float2)((ulong)uVar44 >> 0x20));
                      *puVar45 = CONCAT44((float)(float2)((ulong)uVar44 >> 0x10),
                                          (float)(float2)uVar44);
                      uVar36 = uVar36 + 4;
                      puVar22 = puVar22 + 1;
                      puVar45 = puVar45 + 2;
                    } while (uVar36 < (uVar15 & 0xfffffffc));
                  }
                  lVar39 = uVar15 - uVar36;
                  if (uVar15 < uVar36 || lVar39 == 0) {
                    return ppuVar38;
                  }
                  pfVar24 = (float2 *)((long)puVar23 + uVar36 * 2);
                  pfVar26 = (float *)((long)puVar31 + uVar36 * 4);
                  do {
                    *pfVar26 = (float)*pfVar24;
                    lVar39 = lVar39 + -1;
                    pfVar24 = pfVar24 + 1;
                    pfVar26 = pfVar26 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
              else if (uVar42 == 2) {
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar15 = (ulong)(uint)(*(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1));
                }
                else {
                  uVar15 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar15 = (ulong)(uint)(*piVar7 * (int)uVar15);
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  iVar19 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  iVar19 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    iVar19 = *piVar7 * iVar19;
                  }
                }
                if ((int)uVar15 == iVar19) {
                  ppuVar8 = (undefined8 **)ppuVar38[4];
                  ppuVar38 = (undefined8 **)((long)ppuVar8 + uVar15 * 2);
                  pdVar25 = *(double **)(puVar12 + 0x20);
                  for (; ppuVar8 != ppuVar38; ppuVar8 = (undefined8 **)((long)ppuVar8 + 2)) {
                    uVar36 = (ulong)(*(ushort *)ppuVar8 >> 10);
                    *pdVar25 = (double)(float)(*(int *)(&UNK_10e039244 + uVar36 * 4) +
                                              *(int *)(&UNK_10e037244 +
                                                      (ulong)((*(ushort *)ppuVar8 & 0x3ff) +
                                                             (uint)*(ushort *)
                                                                    (&UNK_10e039344 + uVar36 * 2)) *
                                                      4));
                    pdVar25 = pdVar25 + 1;
                  }
                  return ppuVar8;
                }
              }
              else {
                if (uVar42 != 3) goto LAB_109d12d24;
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar15 = (ulong)(uint)(*(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1));
                }
                else {
                  uVar15 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar15 = (ulong)(uint)(*piVar7 * (int)uVar15);
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  iVar19 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  iVar19 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    iVar19 = *piVar7 * iVar19;
                  }
                }
                if ((int)uVar15 == iVar19) {
                  ppuVar8 = (undefined8 **)ppuVar38[4];
                  ppuVar38 = (undefined8 **)((long)ppuVar8 + uVar15 * 2);
                  puVar34 = *(undefined1 **)(puVar12 + 0x20);
                  for (; ppuVar8 != ppuVar38; ppuVar8 = (undefined8 **)((long)ppuVar8 + 2)) {
                    uVar36 = (ulong)(*(ushort *)ppuVar8 >> 10);
                    *puVar34 = (char)(int)(float)(*(int *)(&UNK_10e039244 + uVar36 * 4) +
                                                 *(int *)(&UNK_10e037244 +
                                                         (ulong)((*(ushort *)ppuVar8 & 0x3ff) +
                                                                (uint)*(ushort *)
                                                                       (&UNK_10e039344 + uVar36 * 2)
                                                                ) * 4));
                    puVar34 = puVar34 + 1;
                  }
                  return ppuVar8;
                }
              }
            }
            else if ((int)uVar42 < 6) {
              if (uVar42 == 4) {
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar15 = (ulong)(uint)(*(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1));
                }
                else {
                  uVar15 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar15 = (ulong)(uint)(*piVar7 * (int)uVar15);
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  iVar19 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  iVar19 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    iVar19 = *piVar7 * iVar19;
                  }
                }
                if ((int)uVar15 == iVar19) {
                  ppuVar8 = (undefined8 **)ppuVar38[4];
                  ppuVar38 = (undefined8 **)((long)ppuVar8 + uVar15 * 2);
                  puVar35 = *(undefined2 **)(puVar12 + 0x20);
                  for (; ppuVar8 != ppuVar38; ppuVar8 = (undefined8 **)((long)ppuVar8 + 2)) {
                    uVar36 = (ulong)(*(ushort *)ppuVar8 >> 10);
                    *puVar35 = (short)(int)(float)(*(int *)(&UNK_10e039244 + uVar36 * 4) +
                                                  *(int *)(&UNK_10e037244 +
                                                          (ulong)((*(ushort *)ppuVar8 & 0x3ff) +
                                                                 (uint)*(ushort *)
                                                                        (&UNK_10e039344 + uVar36 * 2
                                                                        )) * 4));
                    puVar35 = puVar35 + 1;
                  }
                  return ppuVar8;
                }
              }
              else {
                if (uVar42 != 5) goto LAB_109d12d24;
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar15 = (ulong)(uint)(*(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1));
                }
                else {
                  uVar15 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar15 = (ulong)(uint)(*piVar7 * (int)uVar15);
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  iVar19 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  iVar19 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    iVar19 = *piVar7 * iVar19;
                  }
                }
                if ((int)uVar15 == iVar19) {
                  ppuVar8 = (undefined8 **)ppuVar38[4];
                  ppuVar38 = (undefined8 **)((long)ppuVar8 + uVar15 * 2);
                  piVar7 = *(int **)(puVar12 + 0x20);
                  for (; ppuVar8 != ppuVar38; ppuVar8 = (undefined8 **)((long)ppuVar8 + 2)) {
                    uVar36 = (ulong)(*(ushort *)ppuVar8 >> 10);
                    *piVar7 = (int)(float)(*(int *)(&UNK_10e039244 + uVar36 * 4) +
                                          *(int *)(&UNK_10e037244 +
                                                  (ulong)((*(ushort *)ppuVar8 & 0x3ff) +
                                                         (uint)*(ushort *)
                                                                (&UNK_10e039344 + uVar36 * 2)) * 4))
                    ;
                    piVar7 = piVar7 + 1;
                  }
                  return ppuVar8;
                }
              }
            }
            else if (uVar42 == 6) {
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar15 = (ulong)(uint)(*(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                                       *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1));
              }
              else {
                uVar15 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar15 = (ulong)(uint)(*piVar7 * (int)uVar15);
                }
              }
              if ((puVar12[0x48] & 1) == 0) {
                iVar19 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                iVar19 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  iVar19 = *piVar7 * iVar19;
                }
              }
              if ((int)uVar15 == iVar19) {
                ppuVar8 = (undefined8 **)ppuVar38[4];
                ppuVar38 = (undefined8 **)((long)ppuVar8 + uVar15 * 2);
                puVar34 = *(undefined1 **)(puVar12 + 0x20);
                for (; ppuVar8 != ppuVar38; ppuVar8 = (undefined8 **)((long)ppuVar8 + 2)) {
                  uVar36 = (ulong)(*(ushort *)ppuVar8 >> 10);
                  *puVar34 = (char)(int)(float)(*(int *)(&UNK_10e039244 + uVar36 * 4) +
                                               *(int *)(&UNK_10e037244 +
                                                       (ulong)((*(ushort *)ppuVar8 & 0x3ff) +
                                                              (uint)*(ushort *)
                                                                     (&UNK_10e039344 + uVar36 * 2))
                                                       * 4));
                  puVar34 = puVar34 + 1;
                }
                return ppuVar8;
              }
            }
            else if (uVar42 == 7) {
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar15 = (ulong)(uint)(*(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                                       *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1));
              }
              else {
                uVar15 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar15 = (ulong)(uint)(*piVar7 * (int)uVar15);
                }
              }
              if ((puVar12[0x48] & 1) == 0) {
                iVar19 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                iVar19 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  iVar19 = *piVar7 * iVar19;
                }
              }
              if ((int)uVar15 == iVar19) {
                ppuVar8 = (undefined8 **)ppuVar38[4];
                ppuVar38 = (undefined8 **)((long)ppuVar8 + uVar15 * 2);
                puVar35 = *(undefined2 **)(puVar12 + 0x20);
                for (; ppuVar8 != ppuVar38; ppuVar8 = (undefined8 **)((long)ppuVar8 + 2)) {
                  uVar36 = (ulong)(*(ushort *)ppuVar8 >> 10);
                  *puVar35 = (short)(int)(float)(*(int *)(&UNK_10e039244 + uVar36 * 4) +
                                                *(int *)(&UNK_10e037244 +
                                                        (ulong)((*(ushort *)ppuVar8 & 0x3ff) +
                                                               (uint)*(ushort *)
                                                                      (&UNK_10e039344 + uVar36 * 2))
                                                        * 4));
                  puVar35 = puVar35 + 1;
                }
                return ppuVar8;
              }
            }
            else {
              if (uVar42 != 8) goto LAB_109d12d24;
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar15 = (ulong)(uint)(*(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                                       *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1));
              }
              else {
                uVar15 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar15 = (ulong)(uint)(*piVar7 * (int)uVar15);
                }
              }
              if ((puVar12[0x48] & 1) == 0) {
                iVar19 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                iVar19 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  iVar19 = *piVar7 * iVar19;
                }
              }
              if ((int)uVar15 == iVar19) {
                ppuVar8 = (undefined8 **)ppuVar38[4];
                ppuVar38 = (undefined8 **)((long)ppuVar8 + uVar15 * 2);
                piVar7 = *(int **)(puVar12 + 0x20);
                for (; ppuVar8 != ppuVar38; ppuVar8 = (undefined8 **)((long)ppuVar8 + 2)) {
                  uVar36 = (ulong)(*(ushort *)ppuVar8 >> 10);
                  *piVar7 = (int)(float)(*(int *)(&UNK_10e039244 + uVar36 * 4) +
                                        *(int *)(&UNK_10e037244 +
                                                (ulong)((*(ushort *)ppuVar8 & 0x3ff) +
                                                       (uint)*(ushort *)
                                                              (&UNK_10e039344 + uVar36 * 2)) * 4));
                  piVar7 = piVar7 + 1;
                }
                return ppuVar8;
              }
            }
            goto LAB_109d12c30;
          }
          if (uVar42 == 1) {
            uVar42 = *(uint *)(puVar12 + 0x18);
            uVar36 = (ulong)uVar42;
            if ((int)uVar42 < 4) {
              if ((int)uVar42 < 2) {
                if (uVar42 != 0) {
                  if (uVar42 == 1) {
                    if (((ulong)ppuVar38[9] & 1) == 0) {
                      uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                               *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                    }
                    else {
                      uVar42 = 1;
                      for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                          piVar7 = piVar7 + 1) {
                        uVar42 = *piVar7 * uVar42;
                      }
                    }
                    uVar15 = (ulong)uVar42;
                    if ((puVar12[0x48] & 1) == 0) goto LAB_109d12be0;
                    iVar19 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      iVar19 = *piVar7 * iVar19;
                    }
                    goto LAB_109d12bf4;
                  }
LAB_109d12edc:
                  func_0x000107c31940(&uStack_160,&UNK_10f5ac487);
                  func_0x000109259240(&pcStack_148,&uStack_160,&UNK_10f5a35f2);
                  __ZNSt3__19to_stringEi(&ppppppuStack_178,uVar36);
                  pppppppuVar3 = (undefined8 *******)ppppppuStack_178;
                  if (-1 < (char)bStack_161) {
                    uStack_170 = (ulong)bStack_161;
                    pppppppuVar3 = &ppppppuStack_178;
                  }
                  ppcVar11 = &pcStack_148;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppcVar11,pppppppuVar3,uStack_170);
                  ppcVar11[1] = (char *)0x0;
                  ppcVar11[2] = (char *)0x0;
                  *ppcVar11 = (char *)0x0;
                  if ((char)bStack_161 < '\0') {
                    __ZdlPv(ppppppuStack_178);
                  }
                  if (cStack_131 < '\0') {
                    __ZdlPv(pcStack_148);
                  }
                  if (uStack_150._7_1_ < '\0') {
                    __ZdlPv(CONCAT44(uStack_15c,uStack_160));
                  }
                  plVar10 = (long *)0x10;
                  ___cxa_allocate_exception();
                  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            ();
                  *plVar10 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                  ___cxa_throw(plVar10,PTR___ZTISt16invalid_argument_110352248,
                               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                  goto LAB_109d134dc;
                }
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 2;
                  puVar17 = (uint *)ppuVar38[4];
                  psVar30 = *(short **)(puVar12 + 0x20);
                  do {
                    uVar36 = (ulong)(*puVar17 >> 0x17);
                    *psVar30 = *(short *)(&UNK_10e04070a + uVar36 * 2) +
                               (short)((*puVar17 & 0x7fffff) >>
                                      (ulong)((byte)(&UNK_10e040b0a)[uVar36] & 0x1f));
                    lVar39 = lVar39 + -4;
                    puVar17 = puVar17 + 1;
                    psVar30 = psVar30 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
              else if (uVar42 == 2) {
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 2;
                  pfVar26 = (float *)ppuVar38[4];
                  pdVar25 = *(double **)(puVar12 + 0x20);
                  do {
                    *pdVar25 = (double)*pfVar26;
                    lVar39 = lVar39 + -4;
                    pfVar26 = pfVar26 + 1;
                    pdVar25 = pdVar25 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
              else {
                if (uVar42 != 3) goto LAB_109d12edc;
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 2;
                  pfVar26 = (float *)ppuVar38[4];
                  puVar34 = *(undefined1 **)(puVar12 + 0x20);
                  do {
                    *puVar34 = (char)(int)*pfVar26;
                    lVar39 = lVar39 + -4;
                    pfVar26 = pfVar26 + 1;
                    puVar34 = puVar34 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
            }
            else if ((int)uVar42 < 6) {
              if (uVar42 == 4) {
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 2;
                  pfVar26 = (float *)ppuVar38[4];
                  puVar35 = *(undefined2 **)(puVar12 + 0x20);
                  do {
                    *puVar35 = (short)(int)*pfVar26;
                    lVar39 = lVar39 + -4;
                    pfVar26 = pfVar26 + 1;
                    puVar35 = puVar35 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
              else {
                if (uVar42 != 5) goto LAB_109d12edc;
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 2;
                  pfVar26 = (float *)ppuVar38[4];
                  piVar7 = *(int **)(puVar12 + 0x20);
                  do {
                    *piVar7 = (int)*pfVar26;
                    lVar39 = lVar39 + -4;
                    pfVar26 = pfVar26 + 1;
                    piVar7 = piVar7 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
            }
            else if (uVar42 == 6) {
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
              }
              else {
                uVar42 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar42 = *piVar7 * uVar42;
                }
              }
              if ((puVar12[0x48] & 1) == 0) {
                uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                uVar21 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  uVar21 = *piVar7 * uVar21;
                }
              }
              if (uVar42 == uVar21) {
                if (uVar42 == 0) {
                  return ppuVar38;
                }
                lVar39 = (ulong)uVar42 << 2;
                pfVar26 = (float *)ppuVar38[4];
                puVar34 = *(undefined1 **)(puVar12 + 0x20);
                do {
                  *puVar34 = (char)(int)*pfVar26;
                  lVar39 = lVar39 + -4;
                  pfVar26 = pfVar26 + 1;
                  puVar34 = puVar34 + 1;
                } while (lVar39 != 0);
                return ppuVar38;
              }
            }
            else if (uVar42 == 7) {
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
              }
              else {
                uVar42 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar42 = *piVar7 * uVar42;
                }
              }
              if ((puVar12[0x48] & 1) == 0) {
                uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                uVar21 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  uVar21 = *piVar7 * uVar21;
                }
              }
              if (uVar42 == uVar21) {
                if (uVar42 == 0) {
                  return ppuVar38;
                }
                lVar39 = (ulong)uVar42 << 2;
                pfVar26 = (float *)ppuVar38[4];
                puVar35 = *(undefined2 **)(puVar12 + 0x20);
                do {
                  *puVar35 = (short)(int)*pfVar26;
                  lVar39 = lVar39 + -4;
                  pfVar26 = pfVar26 + 1;
                  puVar35 = puVar35 + 1;
                } while (lVar39 != 0);
                return ppuVar38;
              }
            }
            else {
              if (uVar42 != 8) goto LAB_109d12edc;
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
              }
              else {
                uVar42 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar42 = *piVar7 * uVar42;
                }
              }
              if ((puVar12[0x48] & 1) == 0) {
                uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                uVar21 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  uVar21 = *piVar7 * uVar21;
                }
              }
              if (uVar42 == uVar21) {
                if (uVar42 == 0) {
                  return ppuVar38;
                }
                lVar39 = (ulong)uVar42 << 2;
                pfVar26 = (float *)ppuVar38[4];
                piVar7 = *(int **)(puVar12 + 0x20);
                do {
                  *piVar7 = (int)*pfVar26;
                  lVar39 = lVar39 + -4;
                  pfVar26 = pfVar26 + 1;
                  piVar7 = piVar7 + 1;
                } while (lVar39 != 0);
                return ppuVar38;
              }
            }
            goto LAB_109d12c30;
          }
        }
        else {
          if ((int)uVar42 < 6) {
            if (uVar42 == 4) {
              uVar42 = *(uint *)(puVar12 + 0x18);
              uVar36 = (ulong)uVar42;
              if ((int)uVar42 < 4) {
                if ((int)uVar42 < 2) {
                  if (uVar42 == 0) {
                    if (((ulong)ppuVar38[9] & 1) == 0) {
                      uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                               *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                    }
                    else {
                      uVar42 = 1;
                      for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                          piVar7 = piVar7 + 1) {
                        uVar42 = *piVar7 * uVar42;
                      }
                    }
                    if ((puVar12[0x48] & 1) == 0) {
                      uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                               *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                    }
                    else {
                      uVar21 = 1;
                      for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                          piVar7 = piVar7 + 1) {
                        uVar21 = *piVar7 * uVar21;
                      }
                    }
                    if (uVar42 == uVar21) {
                      if (uVar42 == 0) {
                        return ppuVar38;
                      }
                      lVar39 = (ulong)uVar42 << 1;
                      puVar28 = (ushort *)ppuVar38[4];
                      psVar30 = *(short **)(puVar12 + 0x20);
                      do {
                        uVar36 = (ulong)((uint)(float)*puVar28 >> 0x17);
                        *psVar30 = *(short *)(&UNK_10e04070a + uVar36 * 2) +
                                   (short)(((uint)(float)*puVar28 & 0x7fffff) >>
                                          (ulong)((byte)(&UNK_10e040b0a)[uVar36] & 0x1f));
                        lVar39 = lVar39 + -2;
                        puVar28 = puVar28 + 1;
                        psVar30 = psVar30 + 1;
                      } while (lVar39 != 0);
                      return ppuVar38;
                    }
                  }
                  else {
                    if (uVar42 != 1) {
LAB_109d13094:
                      func_0x000107c31940(&uStack_160,&UNK_10f5ac487);
                      func_0x000109259240(&pcStack_148,&uStack_160,&UNK_10f5a35f2);
                      __ZNSt3__19to_stringEi(&ppppppuStack_178,uVar36);
                      pppppppuVar3 = (undefined8 *******)ppppppuStack_178;
                      if (-1 < (char)bStack_161) {
                        uStack_170 = (ulong)bStack_161;
                        pppppppuVar3 = &ppppppuStack_178;
                      }
                      ppcVar11 = &pcStack_148;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (ppcVar11,pppppppuVar3,uStack_170);
                      ppcVar11[1] = (char *)0x0;
                      ppcVar11[2] = (char *)0x0;
                      *ppcVar11 = (char *)0x0;
                      if ((char)bStack_161 < '\0') {
                        __ZdlPv(ppppppuStack_178);
                      }
                      if (cStack_131 < '\0') {
                        __ZdlPv(pcStack_148);
                      }
                      if (uStack_150._7_1_ < '\0') {
                        __ZdlPv(CONCAT44(uStack_15c,uStack_160));
                      }
                      plVar10 = (long *)0x10;
                      ___cxa_allocate_exception();
                      __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                                ();
                      *plVar10 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                      ___cxa_throw(plVar10,PTR___ZTISt16invalid_argument_110352248,
                                   PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                      goto LAB_109d134dc;
                    }
                    if (((ulong)ppuVar38[9] & 1) == 0) {
                      uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                               *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                    }
                    else {
                      uVar42 = 1;
                      for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                          piVar7 = piVar7 + 1) {
                        uVar42 = *piVar7 * uVar42;
                      }
                    }
                    if ((puVar12[0x48] & 1) == 0) {
                      uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                               *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                    }
                    else {
                      uVar21 = 1;
                      for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                          piVar7 = piVar7 + 1) {
                        uVar21 = *piVar7 * uVar21;
                      }
                    }
                    if (uVar42 == uVar21) {
                      if (uVar42 == 0) {
                        return ppuVar38;
                      }
                      lVar39 = (ulong)uVar42 << 1;
                      puVar28 = (ushort *)ppuVar38[4];
                      pfVar26 = *(float **)(puVar12 + 0x20);
                      do {
                        *pfVar26 = (float)*puVar28;
                        lVar39 = lVar39 + -2;
                        puVar28 = puVar28 + 1;
                        pfVar26 = pfVar26 + 1;
                      } while (lVar39 != 0);
                      return ppuVar38;
                    }
                  }
                }
                else if (uVar42 == 2) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    lVar39 = (ulong)uVar42 << 1;
                    puVar28 = (ushort *)ppuVar38[4];
                    pdVar25 = *(double **)(puVar12 + 0x20);
                    do {
                      *pdVar25 = (double)*puVar28;
                      lVar39 = lVar39 + -2;
                      puVar28 = puVar28 + 1;
                      pdVar25 = pdVar25 + 1;
                    } while (lVar39 != 0);
                    return ppuVar38;
                  }
                }
                else {
                  if (uVar42 != 3) goto LAB_109d13094;
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    lVar39 = (ulong)uVar42 << 1;
                    puVar22 = ppuVar38[4];
                    puVar34 = *(undefined1 **)(puVar12 + 0x20);
                    do {
                      *puVar34 = *(undefined1 *)puVar22;
                      lVar39 = lVar39 + -2;
                      puVar22 = (undefined8 *)((long)puVar22 + 2);
                      puVar34 = puVar34 + 1;
                    } while (lVar39 != 0);
                    return ppuVar38;
                  }
                }
              }
              else if ((int)uVar42 < 6) {
                if (uVar42 == 4) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  uVar15 = (ulong)uVar42;
                  if ((puVar12[0x48] & 1) == 0) {
LAB_109d12910:
                    iVar19 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    iVar19 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      iVar19 = *piVar7 * iVar19;
                    }
                  }
LAB_109d12924:
                  if ((int)uVar15 == iVar19) {
                    if ((int)uVar15 == 0) {
                      return ppuVar38;
                    }
                    ppuVar13 = (undefined8 **)ppuVar38[4];
                    ppuVar6 = *(undefined8 ***)(puVar12 + 0x20);
                    uVar15 = uVar15 << 1;
                    goto code_r0x00010bdbf0a8;
                  }
                }
                else {
                  if (uVar42 != 5) goto LAB_109d13094;
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    lVar39 = (ulong)uVar42 << 1;
                    puVar28 = (ushort *)ppuVar38[4];
                    puVar17 = *(uint **)(puVar12 + 0x20);
                    do {
                      *puVar17 = (uint)*puVar28;
                      lVar39 = lVar39 + -2;
                      puVar28 = puVar28 + 1;
                      puVar17 = puVar17 + 1;
                    } while (lVar39 != 0);
                    return ppuVar38;
                  }
                }
              }
              else if (uVar42 == 6) {
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 1;
                  puVar22 = ppuVar38[4];
                  puVar34 = *(undefined1 **)(puVar12 + 0x20);
                  do {
                    *puVar34 = *(undefined1 *)puVar22;
                    lVar39 = lVar39 + -2;
                    puVar22 = (undefined8 *)((long)puVar22 + 2);
                    puVar34 = puVar34 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
              else {
                if (uVar42 == 7) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  uVar15 = (ulong)uVar42;
                  if ((puVar12[0x48] & 1) == 0) goto LAB_109d12910;
                  iVar19 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    iVar19 = *piVar7 * iVar19;
                  }
                  goto LAB_109d12924;
                }
                if (uVar42 != 8) goto LAB_109d13094;
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 1;
                  puVar28 = (ushort *)ppuVar38[4];
                  puVar17 = *(uint **)(puVar12 + 0x20);
                  do {
                    *puVar17 = (uint)*puVar28;
                    lVar39 = lVar39 + -2;
                    puVar28 = puVar28 + 1;
                    puVar17 = puVar17 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
            }
            else {
              if (uVar42 != 5) goto LAB_109d12c48;
              uVar42 = *(uint *)(puVar12 + 0x18);
              uVar36 = (ulong)uVar42;
              if ((int)uVar42 < 4) {
                if ((int)uVar42 < 2) {
                  if (uVar42 == 0) {
                    if (((ulong)ppuVar38[9] & 1) == 0) {
                      uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                               *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                    }
                    else {
                      uVar42 = 1;
                      for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                          piVar7 = piVar7 + 1) {
                        uVar42 = *piVar7 * uVar42;
                      }
                    }
                    if ((puVar12[0x48] & 1) == 0) {
                      uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                               *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                    }
                    else {
                      uVar21 = 1;
                      for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                          piVar7 = piVar7 + 1) {
                        uVar21 = *piVar7 * uVar21;
                      }
                    }
                    if (uVar42 == uVar21) {
                      if (uVar42 == 0) {
                        return ppuVar38;
                      }
                      lVar39 = (ulong)uVar42 << 2;
                      puVar22 = ppuVar38[4];
                      psVar30 = *(short **)(puVar12 + 0x20);
                      do {
                        uVar42 = NEON_ucvtf(*(undefined4 *)puVar22);
                        *psVar30 = *(short *)(&UNK_10e04070a + (ulong)(uVar42 >> 0x17) * 2) +
                                   (short)((uVar42 & 0x7fffff) >>
                                          (ulong)((byte)(&UNK_10e040b0a)[uVar42 >> 0x17] & 0x1f));
                        lVar39 = lVar39 + -4;
                        puVar22 = (undefined8 *)((long)puVar22 + 4);
                        psVar30 = psVar30 + 1;
                      } while (lVar39 != 0);
                      return ppuVar38;
                    }
                  }
                  else {
                    if (uVar42 != 1) {
LAB_109d1324c:
                      func_0x000107c31940(&uStack_160,&UNK_10f5ac487);
                      func_0x000109259240(&pcStack_148,&uStack_160,&UNK_10f5a35f2);
                      __ZNSt3__19to_stringEi(&ppppppuStack_178,uVar36);
                      pppppppuVar3 = (undefined8 *******)ppppppuStack_178;
                      if (-1 < (char)bStack_161) {
                        uStack_170 = (ulong)bStack_161;
                        pppppppuVar3 = &ppppppuStack_178;
                      }
                      ppcVar11 = &pcStack_148;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (ppcVar11,pppppppuVar3,uStack_170);
                      ppcVar11[1] = (char *)0x0;
                      ppcVar11[2] = (char *)0x0;
                      *ppcVar11 = (char *)0x0;
                      if ((char)bStack_161 < '\0') {
                        __ZdlPv(ppppppuStack_178);
                      }
                      if (cStack_131 < '\0') {
                        __ZdlPv(pcStack_148);
                      }
                      if (uStack_150._7_1_ < '\0') {
                        __ZdlPv(CONCAT44(uStack_15c,uStack_160));
                      }
                      plVar10 = (long *)0x10;
                      ___cxa_allocate_exception();
                      __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                                ();
                      *plVar10 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                      ___cxa_throw(plVar10,PTR___ZTISt16invalid_argument_110352248,
                                   PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                      goto LAB_109d134dc;
                    }
                    if (((ulong)ppuVar38[9] & 1) == 0) {
                      uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                               *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                    }
                    else {
                      uVar42 = 1;
                      for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                          piVar7 = piVar7 + 1) {
                        uVar42 = *piVar7 * uVar42;
                      }
                    }
                    if ((puVar12[0x48] & 1) == 0) {
                      uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                               *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                    }
                    else {
                      uVar21 = 1;
                      for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                          piVar7 = piVar7 + 1) {
                        uVar21 = *piVar7 * uVar21;
                      }
                    }
                    if (uVar42 == uVar21) {
                      if (uVar42 == 0) {
                        return ppuVar38;
                      }
                      lVar39 = (ulong)uVar42 << 2;
                      puVar22 = ppuVar38[4];
                      puVar33 = *(undefined4 **)(puVar12 + 0x20);
                      do {
                        uVar43 = NEON_ucvtf(*(undefined4 *)puVar22);
                        *puVar33 = uVar43;
                        lVar39 = lVar39 + -4;
                        puVar22 = (undefined8 *)((long)puVar22 + 4);
                        puVar33 = puVar33 + 1;
                      } while (lVar39 != 0);
                      return ppuVar38;
                    }
                  }
                }
                else if (uVar42 == 2) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    lVar39 = (ulong)uVar42 << 2;
                    puVar17 = (uint *)ppuVar38[4];
                    pdVar25 = *(double **)(puVar12 + 0x20);
                    do {
                      *pdVar25 = (double)*puVar17;
                      lVar39 = lVar39 + -4;
                      puVar17 = puVar17 + 1;
                      pdVar25 = pdVar25 + 1;
                    } while (lVar39 != 0);
                    return ppuVar38;
                  }
                }
                else {
                  if (uVar42 != 3) goto LAB_109d1324c;
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    lVar39 = (ulong)uVar42 << 2;
                    puVar22 = ppuVar38[4];
                    puVar34 = *(undefined1 **)(puVar12 + 0x20);
                    do {
                      *puVar34 = (char)*(undefined4 *)puVar22;
                      lVar39 = lVar39 + -4;
                      puVar22 = (undefined8 *)((long)puVar22 + 4);
                      puVar34 = puVar34 + 1;
                    } while (lVar39 != 0);
                    return ppuVar38;
                  }
                }
              }
              else if ((int)uVar42 < 6) {
                if (uVar42 == 4) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    lVar39 = (ulong)uVar42 << 2;
                    puVar22 = ppuVar38[4];
                    puVar35 = *(undefined2 **)(puVar12 + 0x20);
                    do {
                      *puVar35 = (short)*(undefined4 *)puVar22;
                      lVar39 = lVar39 + -4;
                      puVar22 = (undefined8 *)((long)puVar22 + 4);
                      puVar35 = puVar35 + 1;
                    } while (lVar39 != 0);
                    return ppuVar38;
                  }
                }
                else {
                  if (uVar42 != 5) goto LAB_109d1324c;
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  uVar15 = (ulong)uVar42;
                  if ((puVar12[0x48] & 1) == 0) {
LAB_109d12be0:
                    iVar19 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    iVar19 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      iVar19 = *piVar7 * iVar19;
                    }
                  }
LAB_109d12bf4:
                  if ((int)uVar15 == iVar19) {
                    if ((int)uVar15 == 0) {
                      return ppuVar38;
                    }
                    ppuVar13 = (undefined8 **)ppuVar38[4];
                    ppuVar6 = *(undefined8 ***)(puVar12 + 0x20);
                    uVar15 = uVar15 << 2;
                    goto code_r0x00010bdbf0a8;
                  }
                }
              }
              else if (uVar42 == 6) {
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 2;
                  puVar22 = ppuVar38[4];
                  puVar34 = *(undefined1 **)(puVar12 + 0x20);
                  do {
                    *puVar34 = (char)*(undefined4 *)puVar22;
                    lVar39 = lVar39 + -4;
                    puVar22 = (undefined8 *)((long)puVar22 + 4);
                    puVar34 = puVar34 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
              else {
                if (uVar42 != 7) {
                  if (uVar42 != 8) goto LAB_109d1324c;
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  uVar15 = (ulong)uVar42;
                  if ((puVar12[0x48] & 1) == 0) goto LAB_109d12be0;
                  iVar19 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    iVar19 = *piVar7 * iVar19;
                  }
                  goto LAB_109d12bf4;
                }
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 2;
                  puVar22 = ppuVar38[4];
                  puVar35 = *(undefined2 **)(puVar12 + 0x20);
                  do {
                    *puVar35 = (short)*(undefined4 *)puVar22;
                    lVar39 = lVar39 + -4;
                    puVar22 = (undefined8 *)((long)puVar22 + 4);
                    puVar35 = puVar35 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
            }
          }
          else if (uVar42 == 6) {
            uVar42 = *(uint *)(puVar12 + 0x18);
            uVar36 = (ulong)uVar42;
            if ((int)uVar42 < 4) {
              if ((int)uVar42 < 2) {
                if (uVar42 == 0) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  uVar15 = (ulong)uVar42;
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    pcVar29 = (char *)ppuVar38[4];
                    psVar30 = *(short **)(puVar12 + 0x20);
                    do {
                      uVar36 = (ulong)((uint)(float)(int)*pcVar29 >> 0x17);
                      *psVar30 = *(short *)(&UNK_10e04070a + uVar36 * 2) +
                                 (short)(((uint)(float)(int)*pcVar29 & 0x7fffff) >>
                                        (ulong)((byte)(&UNK_10e040b0a)[uVar36] & 0x1f));
                      uVar15 = uVar15 - 1;
                      pcVar29 = pcVar29 + 1;
                      psVar30 = psVar30 + 1;
                    } while (uVar15 != 0);
                    return ppuVar38;
                  }
                }
                else {
                  if (uVar42 != 1) goto LAB_109d13170;
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  uVar15 = (ulong)uVar42;
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    pcVar29 = (char *)ppuVar38[4];
                    pfVar26 = *(float **)(puVar12 + 0x20);
                    do {
                      *pfVar26 = (float)(int)*pcVar29;
                      uVar15 = uVar15 - 1;
                      pcVar29 = pcVar29 + 1;
                      pfVar26 = pfVar26 + 1;
                    } while (uVar15 != 0);
                    return ppuVar38;
                  }
                }
              }
              else {
                if (uVar42 != 2) {
                  if (uVar42 == 3) {
                    if (((ulong)ppuVar38[9] & 1) == 0) {
                      uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                               *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                    }
                    else {
                      uVar42 = 1;
                      for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                          piVar7 = piVar7 + 1) {
                        uVar42 = *piVar7 * uVar42;
                      }
                    }
                    uVar15 = (ulong)uVar42;
                    if ((puVar12[0x48] & 1) == 0) goto LAB_109d11e18;
                    iVar19 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      iVar19 = *piVar7 * iVar19;
                    }
                    goto LAB_109d11e2c;
                  }
LAB_109d13170:
                  func_0x000107c31940(&uStack_160,&UNK_10f5ac487);
                  func_0x000109259240(&pcStack_148,&uStack_160,&UNK_10f5a35f2);
                  __ZNSt3__19to_stringEi(&ppppppuStack_178,uVar36);
                  pppppppuVar3 = (undefined8 *******)ppppppuStack_178;
                  if (-1 < (char)bStack_161) {
                    uStack_170 = (ulong)bStack_161;
                    pppppppuVar3 = &ppppppuStack_178;
                  }
                  ppcVar11 = &pcStack_148;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppcVar11,pppppppuVar3,uStack_170);
                  ppcVar11[1] = (char *)0x0;
                  ppcVar11[2] = (char *)0x0;
                  *ppcVar11 = (char *)0x0;
                  if ((char)bStack_161 < '\0') {
                    __ZdlPv(ppppppuStack_178);
                  }
                  if (cStack_131 < '\0') {
                    __ZdlPv(pcStack_148);
                  }
                  if (uStack_150._7_1_ < '\0') {
                    __ZdlPv(CONCAT44(uStack_15c,uStack_160));
                  }
                  plVar10 = (long *)0x10;
                  ___cxa_allocate_exception();
                  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            ();
                  *plVar10 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                  ___cxa_throw(plVar10,PTR___ZTISt16invalid_argument_110352248,
                               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                  goto LAB_109d134dc;
                }
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                uVar15 = (ulong)uVar42;
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  pcVar29 = (char *)ppuVar38[4];
                  pdVar25 = *(double **)(puVar12 + 0x20);
                  do {
                    *pdVar25 = (double)(int)*pcVar29;
                    uVar15 = uVar15 - 1;
                    pcVar29 = pcVar29 + 1;
                    pdVar25 = pdVar25 + 1;
                  } while (uVar15 != 0);
                  return ppuVar38;
                }
              }
            }
            else if ((int)uVar42 < 6) {
              if (uVar42 == 4) {
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                uVar15 = (ulong)uVar42;
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  pcVar29 = (char *)ppuVar38[4];
                  psVar30 = *(short **)(puVar12 + 0x20);
                  do {
                    *psVar30 = (short)*pcVar29;
                    uVar15 = uVar15 - 1;
                    pcVar29 = pcVar29 + 1;
                    psVar30 = psVar30 + 1;
                  } while (uVar15 != 0);
                  return ppuVar38;
                }
              }
              else {
                if (uVar42 != 5) goto LAB_109d13170;
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                uVar15 = (ulong)uVar42;
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  pcVar29 = (char *)ppuVar38[4];
                  piVar7 = *(int **)(puVar12 + 0x20);
                  do {
                    *piVar7 = (int)*pcVar29;
                    uVar15 = uVar15 - 1;
                    pcVar29 = pcVar29 + 1;
                    piVar7 = piVar7 + 1;
                  } while (uVar15 != 0);
                  return ppuVar38;
                }
              }
            }
            else if (uVar42 == 6) {
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
              }
              else {
                uVar42 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar42 = *piVar7 * uVar42;
                }
              }
              uVar15 = (ulong)uVar42;
              if ((puVar12[0x48] & 1) == 0) {
LAB_109d11e18:
                iVar19 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                iVar19 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  iVar19 = *piVar7 * iVar19;
                }
              }
LAB_109d11e2c:
              if ((int)uVar15 == iVar19) {
                if ((int)uVar15 == 0) {
                  return ppuVar38;
                }
                ppuVar13 = (undefined8 **)ppuVar38[4];
                ppuVar6 = *(undefined8 ***)(puVar12 + 0x20);
                goto code_r0x00010bdbf0a8;
              }
            }
            else if (uVar42 == 7) {
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
              }
              else {
                uVar42 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar42 = *piVar7 * uVar42;
                }
              }
              uVar15 = (ulong)uVar42;
              if ((puVar12[0x48] & 1) == 0) {
                uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                uVar21 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  uVar21 = *piVar7 * uVar21;
                }
              }
              if (uVar42 == uVar21) {
                if (uVar42 == 0) {
                  return ppuVar38;
                }
                pcVar29 = (char *)ppuVar38[4];
                psVar30 = *(short **)(puVar12 + 0x20);
                do {
                  *psVar30 = (short)*pcVar29;
                  uVar15 = uVar15 - 1;
                  pcVar29 = pcVar29 + 1;
                  psVar30 = psVar30 + 1;
                } while (uVar15 != 0);
                return ppuVar38;
              }
            }
            else {
              if (uVar42 != 8) goto LAB_109d13170;
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
              }
              else {
                uVar42 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar42 = *piVar7 * uVar42;
                }
              }
              uVar15 = (ulong)uVar42;
              if ((puVar12[0x48] & 1) == 0) {
                uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                uVar21 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  uVar21 = *piVar7 * uVar21;
                }
              }
              if (uVar42 == uVar21) {
                if (uVar42 == 0) {
                  return ppuVar38;
                }
                pcVar29 = (char *)ppuVar38[4];
                piVar7 = *(int **)(puVar12 + 0x20);
                do {
                  *piVar7 = (int)*pcVar29;
                  uVar15 = uVar15 - 1;
                  pcVar29 = pcVar29 + 1;
                  piVar7 = piVar7 + 1;
                } while (uVar15 != 0);
                return ppuVar38;
              }
            }
          }
          else if (uVar42 == 7) {
            uVar42 = *(uint *)(puVar12 + 0x18);
            uVar36 = (ulong)uVar42;
            if ((int)uVar42 < 4) {
              if ((int)uVar42 < 2) {
                if (uVar42 == 0) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    lVar39 = (ulong)uVar42 << 1;
                    psVar30 = (short *)ppuVar38[4];
                    psVar32 = *(short **)(puVar12 + 0x20);
                    do {
                      uVar36 = (ulong)((uint)(float)(int)*psVar30 >> 0x17);
                      *psVar32 = *(short *)(&UNK_10e04070a + uVar36 * 2) +
                                 (short)(((uint)(float)(int)*psVar30 & 0x7fffff) >>
                                        (ulong)((byte)(&UNK_10e040b0a)[uVar36] & 0x1f));
                      lVar39 = lVar39 + -2;
                      psVar30 = psVar30 + 1;
                      psVar32 = psVar32 + 1;
                    } while (lVar39 != 0);
                    return ppuVar38;
                  }
                }
                else {
                  if (uVar42 != 1) {
LAB_109d13328:
                    func_0x000107c31940(&uStack_160,&UNK_10f5ac487);
                    func_0x000109259240(&pcStack_148,&uStack_160,&UNK_10f5a35f2);
                    __ZNSt3__19to_stringEi(&ppppppuStack_178,uVar36);
                    pppppppuVar3 = (undefined8 *******)ppppppuStack_178;
                    if (-1 < (char)bStack_161) {
                      uStack_170 = (ulong)bStack_161;
                      pppppppuVar3 = &ppppppuStack_178;
                    }
                    ppcVar11 = &pcStack_148;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (ppcVar11,pppppppuVar3,uStack_170);
                    ppcVar11[1] = (char *)0x0;
                    ppcVar11[2] = (char *)0x0;
                    *ppcVar11 = (char *)0x0;
                    if ((char)bStack_161 < '\0') {
                      __ZdlPv(ppppppuStack_178);
                    }
                    if (cStack_131 < '\0') {
                      __ZdlPv(pcStack_148);
                    }
                    if (uStack_150._7_1_ < '\0') {
                      __ZdlPv(CONCAT44(uStack_15c,uStack_160));
                    }
                    plVar10 = (long *)0x10;
                    ___cxa_allocate_exception();
                    __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              ();
                    *plVar10 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                    ___cxa_throw(plVar10,PTR___ZTISt16invalid_argument_110352248,
                                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    goto LAB_109d134dc;
                  }
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    lVar39 = (ulong)uVar42 << 1;
                    psVar30 = (short *)ppuVar38[4];
                    pfVar26 = *(float **)(puVar12 + 0x20);
                    do {
                      *pfVar26 = (float)(int)*psVar30;
                      lVar39 = lVar39 + -2;
                      psVar30 = psVar30 + 1;
                      pfVar26 = pfVar26 + 1;
                    } while (lVar39 != 0);
                    return ppuVar38;
                  }
                }
              }
              else if (uVar42 == 2) {
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 1;
                  psVar30 = (short *)ppuVar38[4];
                  pdVar25 = *(double **)(puVar12 + 0x20);
                  do {
                    *pdVar25 = (double)(int)*psVar30;
                    lVar39 = lVar39 + -2;
                    psVar30 = psVar30 + 1;
                    pdVar25 = pdVar25 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
              else {
                if (uVar42 != 3) goto LAB_109d13328;
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 1;
                  puVar22 = ppuVar38[4];
                  puVar34 = *(undefined1 **)(puVar12 + 0x20);
                  do {
                    *puVar34 = *(undefined1 *)puVar22;
                    lVar39 = lVar39 + -2;
                    puVar22 = (undefined8 *)((long)puVar22 + 2);
                    puVar34 = puVar34 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
            }
            else if ((int)uVar42 < 6) {
              if (uVar42 == 4) {
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                uVar15 = (ulong)uVar42;
                if ((puVar12[0x48] & 1) == 0) goto LAB_109d12910;
                iVar19 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  iVar19 = *piVar7 * iVar19;
                }
                goto LAB_109d12924;
              }
              if (uVar42 != 5) goto LAB_109d13328;
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
              }
              else {
                uVar42 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar42 = *piVar7 * uVar42;
                }
              }
              if ((puVar12[0x48] & 1) == 0) {
                uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                uVar21 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  uVar21 = *piVar7 * uVar21;
                }
              }
              if (uVar42 == uVar21) {
                if (uVar42 == 0) {
                  return ppuVar38;
                }
                lVar39 = (ulong)uVar42 << 1;
                psVar30 = (short *)ppuVar38[4];
                piVar7 = *(int **)(puVar12 + 0x20);
                do {
                  *piVar7 = (int)*psVar30;
                  lVar39 = lVar39 + -2;
                  psVar30 = psVar30 + 1;
                  piVar7 = piVar7 + 1;
                } while (lVar39 != 0);
                return ppuVar38;
              }
            }
            else if (uVar42 == 6) {
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
              }
              else {
                uVar42 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar42 = *piVar7 * uVar42;
                }
              }
              if ((puVar12[0x48] & 1) == 0) {
                uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                uVar21 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  uVar21 = *piVar7 * uVar21;
                }
              }
              if (uVar42 == uVar21) {
                if (uVar42 == 0) {
                  return ppuVar38;
                }
                lVar39 = (ulong)uVar42 << 1;
                puVar22 = ppuVar38[4];
                puVar34 = *(undefined1 **)(puVar12 + 0x20);
                do {
                  *puVar34 = *(undefined1 *)puVar22;
                  lVar39 = lVar39 + -2;
                  puVar22 = (undefined8 *)((long)puVar22 + 2);
                  puVar34 = puVar34 + 1;
                } while (lVar39 != 0);
                return ppuVar38;
              }
            }
            else {
              if (uVar42 == 7) {
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                uVar15 = (ulong)uVar42;
                if ((puVar12[0x48] & 1) == 0) goto LAB_109d12910;
                iVar19 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  iVar19 = *piVar7 * iVar19;
                }
                goto LAB_109d12924;
              }
              if (uVar42 != 8) goto LAB_109d13328;
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
              }
              else {
                uVar42 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar42 = *piVar7 * uVar42;
                }
              }
              if ((puVar12[0x48] & 1) == 0) {
                uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                uVar21 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  uVar21 = *piVar7 * uVar21;
                }
              }
              if (uVar42 == uVar21) {
                if (uVar42 == 0) {
                  return ppuVar38;
                }
                lVar39 = (ulong)uVar42 << 1;
                psVar30 = (short *)ppuVar38[4];
                piVar7 = *(int **)(puVar12 + 0x20);
                do {
                  *piVar7 = (int)*psVar30;
                  lVar39 = lVar39 + -2;
                  psVar30 = psVar30 + 1;
                  piVar7 = piVar7 + 1;
                } while (lVar39 != 0);
                return ppuVar38;
              }
            }
          }
          else {
            if (uVar42 != 8) goto LAB_109d12c48;
            uVar42 = *(uint *)(puVar12 + 0x18);
            uVar36 = (ulong)uVar42;
            if ((int)uVar42 < 4) {
              if ((int)uVar42 < 2) {
                if (uVar42 == 0) {
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    lVar39 = (ulong)uVar42 << 2;
                    piVar7 = (int *)ppuVar38[4];
                    psVar30 = *(short **)(puVar12 + 0x20);
                    do {
                      uVar36 = (ulong)((uint)(float)*piVar7 >> 0x17);
                      *psVar30 = *(short *)(&UNK_10e04070a + uVar36 * 2) +
                                 (short)(((uint)(float)*piVar7 & 0x7fffff) >>
                                        (ulong)((byte)(&UNK_10e040b0a)[uVar36] & 0x1f));
                      lVar39 = lVar39 + -4;
                      piVar7 = piVar7 + 1;
                      psVar30 = psVar30 + 1;
                    } while (lVar39 != 0);
                    return ppuVar38;
                  }
                }
                else {
                  if (uVar42 != 1) {
LAB_109d13404:
                    func_0x000107c31940(&uStack_160,&UNK_10f5ac487);
                    func_0x000109259240(&pcStack_148,&uStack_160,&UNK_10f5a35f2);
                    __ZNSt3__19to_stringEi(&ppppppuStack_178,uVar36);
                    pppppppuVar3 = (undefined8 *******)ppppppuStack_178;
                    if (-1 < (char)bStack_161) {
                      uStack_170 = (ulong)bStack_161;
                      pppppppuVar3 = &ppppppuStack_178;
                    }
                    ppcVar11 = &pcStack_148;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (ppcVar11,pppppppuVar3,uStack_170);
                    ppcVar11[1] = (char *)0x0;
                    ppcVar11[2] = (char *)0x0;
                    *ppcVar11 = (char *)0x0;
                    if ((char)bStack_161 < '\0') {
                      __ZdlPv(ppppppuStack_178);
                    }
                    if (cStack_131 < '\0') {
                      __ZdlPv(pcStack_148);
                    }
                    if (uStack_150._7_1_ < '\0') {
                      __ZdlPv(CONCAT44(uStack_15c,uStack_160));
                    }
                    plVar10 = (long *)0x10;
                    ___cxa_allocate_exception();
                    __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              ();
                    *plVar10 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                    ___cxa_throw(plVar10,PTR___ZTISt16invalid_argument_110352248,
                                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    goto LAB_109d134dc;
                  }
                  if (((ulong)ppuVar38[9] & 1) == 0) {
                    uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                             *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                  }
                  else {
                    uVar42 = 1;
                    for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                        piVar7 = piVar7 + 1) {
                      uVar42 = *piVar7 * uVar42;
                    }
                  }
                  if ((puVar12[0x48] & 1) == 0) {
                    uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                             *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                  }
                  else {
                    uVar21 = 1;
                    for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                        piVar7 = piVar7 + 1) {
                      uVar21 = *piVar7 * uVar21;
                    }
                  }
                  if (uVar42 == uVar21) {
                    if (uVar42 == 0) {
                      return ppuVar38;
                    }
                    lVar39 = (ulong)uVar42 << 2;
                    piVar7 = (int *)ppuVar38[4];
                    pfVar26 = *(float **)(puVar12 + 0x20);
                    do {
                      *pfVar26 = (float)*piVar7;
                      lVar39 = lVar39 + -4;
                      piVar7 = piVar7 + 1;
                      pfVar26 = pfVar26 + 1;
                    } while (lVar39 != 0);
                    return ppuVar38;
                  }
                }
              }
              else if (uVar42 == 2) {
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 2;
                  piVar7 = (int *)ppuVar38[4];
                  pdVar25 = *(double **)(puVar12 + 0x20);
                  do {
                    *pdVar25 = (double)*piVar7;
                    lVar39 = lVar39 + -4;
                    piVar7 = piVar7 + 1;
                    pdVar25 = pdVar25 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
              else {
                if (uVar42 != 3) goto LAB_109d13404;
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                if ((puVar12[0x48] & 1) == 0) {
                  uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                           *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
                }
                else {
                  uVar21 = 1;
                  for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                      piVar7 = piVar7 + 1) {
                    uVar21 = *piVar7 * uVar21;
                  }
                }
                if (uVar42 == uVar21) {
                  if (uVar42 == 0) {
                    return ppuVar38;
                  }
                  lVar39 = (ulong)uVar42 << 2;
                  puVar22 = ppuVar38[4];
                  puVar34 = *(undefined1 **)(puVar12 + 0x20);
                  do {
                    *puVar34 = (char)*(undefined4 *)puVar22;
                    lVar39 = lVar39 + -4;
                    puVar22 = (undefined8 *)((long)puVar22 + 4);
                    puVar34 = puVar34 + 1;
                  } while (lVar39 != 0);
                  return ppuVar38;
                }
              }
            }
            else if ((int)uVar42 < 6) {
              if (uVar42 != 4) {
                if (uVar42 != 5) goto LAB_109d13404;
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                uVar15 = (ulong)uVar42;
                if ((puVar12[0x48] & 1) == 0) goto LAB_109d12be0;
                iVar19 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  iVar19 = *piVar7 * iVar19;
                }
                goto LAB_109d12bf4;
              }
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
              }
              else {
                uVar42 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar42 = *piVar7 * uVar42;
                }
              }
              if ((puVar12[0x48] & 1) == 0) {
                uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                uVar21 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  uVar21 = *piVar7 * uVar21;
                }
              }
              if (uVar42 == uVar21) {
                if (uVar42 == 0) {
                  return ppuVar38;
                }
                lVar39 = (ulong)uVar42 << 2;
                puVar22 = ppuVar38[4];
                puVar35 = *(undefined2 **)(puVar12 + 0x20);
                do {
                  *puVar35 = (short)*(undefined4 *)puVar22;
                  lVar39 = lVar39 + -4;
                  puVar22 = (undefined8 *)((long)puVar22 + 4);
                  puVar35 = puVar35 + 1;
                } while (lVar39 != 0);
                return ppuVar38;
              }
            }
            else if (uVar42 == 6) {
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
              }
              else {
                uVar42 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar42 = *piVar7 * uVar42;
                }
              }
              if ((puVar12[0x48] & 1) == 0) {
                uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                uVar21 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  uVar21 = *piVar7 * uVar21;
                }
              }
              if (uVar42 == uVar21) {
                if (uVar42 == 0) {
                  return ppuVar38;
                }
                lVar39 = (ulong)uVar42 << 2;
                puVar22 = ppuVar38[4];
                puVar34 = *(undefined1 **)(puVar12 + 0x20);
                do {
                  *puVar34 = (char)*(undefined4 *)puVar22;
                  lVar39 = lVar39 + -4;
                  puVar22 = (undefined8 *)((long)puVar22 + 4);
                  puVar34 = puVar34 + 1;
                } while (lVar39 != 0);
                return ppuVar38;
              }
            }
            else {
              if (uVar42 != 7) {
                if (uVar42 != 8) goto LAB_109d13404;
                if (((ulong)ppuVar38[9] & 1) == 0) {
                  uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                           *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
                }
                else {
                  uVar42 = 1;
                  for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7];
                      piVar7 = piVar7 + 1) {
                    uVar42 = *piVar7 * uVar42;
                  }
                }
                uVar15 = (ulong)uVar42;
                if ((puVar12[0x48] & 1) == 0) goto LAB_109d12be0;
                iVar19 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  iVar19 = *piVar7 * iVar19;
                }
                goto LAB_109d12bf4;
              }
              if (((ulong)ppuVar38[9] & 1) == 0) {
                uVar42 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                         *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
              }
              else {
                uVar42 = 1;
                for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1)
                {
                  uVar42 = *piVar7 * uVar42;
                }
              }
              if ((puVar12[0x48] & 1) == 0) {
                uVar21 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) *
                         *(int *)(puVar12 + 0xc) * *(int *)(puVar12 + 8);
              }
              else {
                uVar21 = 1;
                for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
                    piVar7 = piVar7 + 1) {
                  uVar21 = *piVar7 * uVar21;
                }
              }
              if (uVar42 == uVar21) {
                if (uVar42 == 0) {
                  return ppuVar38;
                }
                lVar39 = (ulong)uVar42 << 2;
                puVar22 = ppuVar38[4];
                puVar35 = *(undefined2 **)(puVar12 + 0x20);
                do {
                  *puVar35 = (short)*(undefined4 *)puVar22;
                  lVar39 = lVar39 + -4;
                  puVar22 = (undefined8 *)((long)puVar22 + 4);
                  puVar35 = puVar35 + 1;
                } while (lVar39 != 0);
                return ppuVar38;
              }
            }
          }
LAB_109d12c30:
          func_0x00010952d0c4(&UNK_10f5aa38f,&UNK_10f5aa38f,&UNK_10f5ac492);
        }
LAB_109d12c48:
        func_0x000107c31940(&uStack_160,&UNK_10f5ac487);
        func_0x000109259240(&pcStack_148,&uStack_160,&UNK_10f5a35f2);
        __ZNSt3__19to_stringEi(&ppppppuStack_178,uVar36);
        pppppppuVar3 = (undefined8 *******)ppppppuStack_178;
        if (-1 < (char)bStack_161) {
          uStack_170 = (ulong)bStack_161;
          pppppppuVar3 = &ppppppuStack_178;
        }
        ppcVar11 = &pcStack_148;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppcVar11,pppppppuVar3,uStack_170);
        ppcVar11[1] = (char *)0x0;
        ppcVar11[2] = (char *)0x0;
        *ppcVar11 = (char *)0x0;
        if ((char)bStack_161 < '\0') {
          __ZdlPv(ppppppuStack_178);
        }
        if (cStack_131 < '\0') {
          __ZdlPv(pcStack_148);
        }
        if (uStack_150._7_1_ < '\0') {
          __ZdlPv(CONCAT44(uStack_15c,uStack_160));
        }
        plVar10 = (long *)0x10;
        ___cxa_allocate_exception();
        __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
        *plVar10 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
        ___cxa_throw(plVar10,PTR___ZTISt16invalid_argument_110352248,
                     PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
LAB_109d134dc:
                    /* WARNING: Does not return */
        pcVar41 = (code *)SoftwareBreakpoint(1,0x109d134e0);
        (*pcVar41)();
      }
      goto LAB_109d0f178;
    }
    if (puVar12[0x48] == '\x01') {
      iVar19 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
               *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
      goto LAB_109d0eda0;
    }
    param_4 = ppuVar38 + 1;
    if ((((*(uint *)param_4 != *(uint *)(puVar12 + 8)) ||
         (*(uint *)((long)ppuVar38 + 0xc) != *(uint *)(puVar12 + 0xc))) ||
        (*(uint *)(ppuVar38 + 2) != *(uint *)(puVar12 + 0x10))) ||
       (*(int *)((long)ppuVar38 + 0x14) != *(int *)(puVar12 + 0x14))) goto LAB_109d0f15c;
    iVar19 = *(int *)((long)ppuVar38 + 0x1c);
    iVar20 = *(int *)(puVar12 + 0x1c);
    if (iVar19 == iVar20) goto LAB_109d0eeac;
    cStack_131 = iVar19 == 1 && iVar20 == 0;
    if (((bool)cStack_131) || (iVar19 == 0 && iVar20 == 1)) {
      lStack_140 = (ulong)*(uint *)((long)ppuVar38 + 0xc) * (ulong)*(uint *)param_4 *
                   (ulong)*(uint *)(ppuVar38 + 2);
      uStack_150 = &lStack_140;
      pcStack_148 = &cStack_131;
      ppuStack_158 = param_4;
      if ((uVar42 != uVar21) &&
         (((5 < uVar42 - 3 || (5 < uVar21 - 3)) ||
          (*(int *)(&UNK_10e040d58 + (ulong)(uVar42 - 3) * 4) !=
           *(int *)(&UNK_10e040d58 + (ulong)(uVar21 - 3) * 4))))) {
        FUN_109d0f2ac();
        uVar42 = *(uint *)(puVar12 + 0x18);
        FUN_109d0f2ac();
        if (uVar42 < (uint)uVar36) {
          uStack_160 = *(undefined4 *)(puVar12 + 0x18);
          uStack_15c = *(undefined4 *)((long)ppuVar38 + 0x1c);
          if (puVar14 == (undefined *)0x0) {
            FUN_109d0eb9c(apuStack_1b0,param_4,&uStack_160);
          }
          else {
            FUN_109cdb604(puVar14,param_4,&uStack_160);
          }
          FUN_109d0f718(ppuVar38,apuStack_1b0,*(undefined4 *)(ppuVar38 + 3));
          FUN_109d0f1c8(&ppuStack_158,apuStack_1b0,puVar12);
        }
        else {
          uStack_160 = *(undefined4 *)(ppuVar38 + 3);
          uStack_15c = *(undefined4 *)(puVar12 + 0x1c);
          if (puVar14 == (undefined *)0x0) {
            FUN_109d0eb9c(apuStack_1b0,param_4,&uStack_160);
          }
          else {
            FUN_109cdb604(puVar14,param_4,&uStack_160);
          }
          FUN_109d0f1c8(&ppuStack_158,ppuVar38,apuStack_1b0);
          FUN_109d0f718(apuStack_1b0,puVar12,uStack_198);
        }
        func_0x000105675c90(apuStack_1b0);
        return ppuVar8;
      }
      if (uVar42 < 9) {
        if (*(int *)((long)ppuVar38 + 0x14) == 0) {
          return ppuVar6;
        }
        lVar39 = 0;
        uVar15 = 0;
        lVar37 = *(long *)(&UNK_10e040d10 + uVar36 * 8);
        do {
          uVar18 = (ulong)*(uint *)((long)ppuVar38 + 0xc) * (ulong)*(uint *)(ppuVar38 + 1);
          ppuVar8 = (undefined8 **)((long)ppuVar38[4] + lVar39 * lStack_140);
          uVar36 = (ulong)*(uint *)(ppuVar38 + 2);
          if (cStack_131 == '\x01') {
            uVar36 = uVar18;
            uVar18 = (ulong)*(uint *)(ppuVar38 + 2);
          }
          FUN_109d16334(ppuVar8,*(long *)(puVar12 + 0x20) + lVar39 * lStack_140,uVar36,uVar18,lVar37
                       );
          uVar15 = uVar15 + 1;
          lVar39 = lVar39 + lVar37;
        } while (uVar15 < *(uint *)((long)ppuVar38 + 0x14));
        return ppuVar8;
      }
      goto LAB_109d0f13c;
    }
  }
  else {
    if ((uVar42 == uVar21) && (*(int *)((long)ppuVar38 + 0x1c) == *(int *)(puVar12 + 0x1c))) {
      if (((ulong)ppuVar38[9] & 1) == 0) {
        iVar19 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                 *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
      }
      else {
        iVar19 = 1;
        for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1) {
          iVar19 = *piVar7 * iVar19;
        }
      }
      if ((puVar12[0x48] & 1) == 0) {
        iVar20 = *(int *)(puVar12 + 0x10) * *(int *)(puVar12 + 0x14) * *(int *)(puVar12 + 0xc) *
                 *(int *)(puVar12 + 8);
      }
      else {
        iVar20 = 1;
        for (piVar7 = *(int **)(puVar12 + 0x30); piVar7 != *(int **)(puVar12 + 0x38);
            piVar7 = piVar7 + 1) {
          iVar20 = *piVar7 * iVar20;
        }
      }
      if (iVar19 != iVar20) goto LAB_109d0f120;
      if (((ulong)ppuVar38[9] & 1) == 0) {
        iVar19 = *(int *)(ppuVar38 + 2) * *(int *)((long)ppuVar38 + 0x14) *
                 *(int *)((long)ppuVar38 + 0xc) * *(int *)(ppuVar38 + 1);
      }
      else {
        iVar19 = 1;
        for (piVar7 = (int *)ppuVar38[6]; piVar7 != (int *)ppuVar38[7]; piVar7 = piVar7 + 1) {
          iVar19 = *piVar7 * iVar19;
        }
      }
      if (uVar42 < 0xf) {
        uVar15 = (ulong)(uint)(*(int *)(&UNK_10e040de8 + uVar36 * 4) * iVar19);
        if (*(int *)(&UNK_10e040de8 + uVar36 * 4) * iVar19 == 0) {
          return ppuVar6;
        }
        goto code_r0x00010bdbf0a8;
      }
    }
    else {
      func_0x00010952d0c4(&UNK_10f5ac32c,&UNK_10f5ac2e0,&UNK_10f5ac333);
LAB_109d0f120:
      func_0x00010952d0c4(&UNK_10f5ac32c,&UNK_10f5ac2e0,&UNK_10f5ac3a9);
    }
LAB_109d0f13c:
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
LAB_109d0f15c:
    func_0x00010952d0c4(&UNK_10f5ac32c,&UNK_10f5ac2e0,&UNK_10f5ac400);
LAB_109d0f178:
    func_0x00010952d0c4(&UNK_10f5ac32c,&UNK_10f5ac2e0,&UNK_10f5ac3d1);
  }
  ppuVar38 = (undefined8 **)&UNK_10f5ac32c;
  puVar16 = &UNK_10f5ac2e0;
  puVar9 = &UNK_10f5ac429;
  func_0x00010952d0c4();
  func_0x000105675c90(apuStack_1b0);
  ppuVar8 = ppuVar38;
  __Unwind_Resume();
  pcStack_1b8 = FUN_109d0f1c8;
  pppuStack_1c0 = &ppuStack_100;
  if (*(uint *)(puVar16 + 0x18) < 0xf) {
    puVar17 = (uint *)*ppuVar8;
    ppuVar38 = ppuVar8;
    if (puVar17[3] != 0) {
      lVar39 = 0;
      uVar36 = 0;
      lVar37 = *(long *)(&UNK_10e040d70 + (ulong)*(uint *)(puVar16 + 0x18) * 8);
      do {
        uVar18 = (ulong)puVar17[1] * (ulong)*puVar17;
        ppuVar38 = (undefined8 **)(*(long *)(puVar16 + 0x20) + lVar39 * *ppuVar8[1]);
        uVar15 = (ulong)puVar17[2];
        if (*(char *)ppuVar8[2] == '\x01') {
          uVar15 = uVar18;
          uVar18 = (ulong)puVar17[2];
        }
        FUN_109d16334(ppuVar38,*(long *)(puVar9 + 0x20) + lVar39 * *ppuVar8[1],uVar15,uVar18,lVar37)
        ;
        uVar36 = uVar36 + 1;
        puVar17 = (uint *)*ppuVar8;
        lVar39 = lVar39 + lVar37;
      } while (uVar36 < puVar17[3]);
    }
    return ppuVar38;
  }
  puVar16 = &UNK_10dfd21d7;
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
  if ((uint)puVar16 < 0xf) {
    return (undefined8 **)(ulong)*(uint *)(&UNK_10e040de8 + ((ulong)puVar16 & 0xffffffff) * 4);
  }
  pppppuVar40 = &ppppuStack_200;
  pcStack_1f8 = FUN_109d0f2ac;
  piVar7 = (int *)&UNK_10dfd21d7;
  puVar17 = (uint *)&UNK_10f5ac4bc;
  puVar16 = &UNK_10f5ac4cb;
  pcVar41 = FUN_109d0f2ec;
  ppppuStack_200 = &pppuStack_1c0;
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
  pppppuVar4 = &ppppuStack_200;
  ppuVar8 = extraout_x8_00;
  while( true ) {
    ppuVar6 = ppuVar8;
    ppuVar8 = (undefined8 **)((long)pppppuVar4 + -0x50);
    *(undefined8 *)((long)pppppuVar4 + -0x40) = unaff_x24;
    *(undefined8 **)((long)pppppuVar4 + -0x38) = &uStack_88;
    *(undefined8 ***)((long)pppppuVar4 + -0x30) = param_4;
    *(undefined **)((long)pppppuVar4 + -0x28) = puVar14;
    *(undefined **)((long)pppppuVar4 + -0x20) = puVar12;
    *(undefined8 ***)((long)pppppuVar4 + -0x18) = ppuVar38;
    *(undefined1 ******)((long)pppppuVar4 + -0x10) = pppppuVar40;
    *(code **)((long)pppppuVar4 + -8) = pcVar41;
    pppppuVar40 = (undefined1 *****)((long)pppppuVar4 + -0x10);
    if (*puVar17 < 0xf) {
      uVar42 = piVar7[2] * piVar7[3] * piVar7[1] * *piVar7 *
               *(int *)(&UNK_10e040de8 + (ulong)*puVar17 * 4);
      uVar15 = (ulong)uVar42;
      uVar36 = uVar15;
      __Znam(uVar15);
      _bzero();
      func_0x00010928e964((undefined1 *)((long)pppppuVar4 + -0x50),uVar36);
      if (uVar42 != 0) {
        ppuVar8 = *(undefined8 ***)((long)pppppuVar4 + -0x50);
        _memmove(ppuVar8,puVar16,uVar15);
      }
      puVar45 = *(undefined8 **)((long)pppppuVar4 + -0x48);
      puVar22 = *(undefined8 **)((long)pppppuVar4 + -0x50);
      if (*(long *)((long)pppppuVar4 + -0x48) == 0) {
        ppuVar38 = (undefined8 **)0x0;
      }
      else {
        plVar10 = (long *)(*(long *)((long)pppppuVar4 + -0x48) + 8);
        do {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        ppuVar38 = *(undefined8 ***)((long)pppppuVar4 + -0x48);
      }
      *ppuVar6 = &PTR_DAT_1108a5c28;
      puVar23 = *(undefined8 **)piVar7;
      ppuVar6[2] = *(undefined8 **)(piVar7 + 2);
      ppuVar6[1] = puVar23;
      ppuVar6[3] = *(undefined8 **)puVar17;
      ppuVar6[5] = puVar45;
      ppuVar6[4] = puVar22;
      *(undefined1 *)(ppuVar6 + 6) = 0;
      *(undefined1 *)(ppuVar6 + 9) = 0;
      if (ppuVar38 != (undefined8 **)0x0) {
        ppuVar6 = ppuVar38 + 1;
        do {
          puVar22 = *ppuVar6;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar5) {
            *ppuVar6 = (undefined8 *)((long)puVar22 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar22 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar38)[2])(ppuVar38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar38);
          ppuVar8 = ppuVar38;
        }
      }
      return ppuVar8;
    }
    puVar9 = &UNK_10dfd21d7;
    pcVar41 = FUN_109d0f438;
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
    if ((puVar9[0x48] & 1) != 0) break;
    puVar16 = *(undefined **)(puVar9 + 0x20);
    piVar7 = (int *)(puVar9 + 8);
    puVar17 = (uint *)(puVar9 + 0x18);
    pppppuVar4 = (undefined1 *****)((long)pppppuVar4 + -0x50);
    ppuVar8 = extraout_x8_01;
    ppuVar38 = ppuVar6;
  }
  uVar43 = *(undefined4 *)(puVar9 + 0x18);
  ppuVar13 = *(undefined8 ***)(puVar9 + 0x20);
  ppuVar38 = (undefined8 **)(puVar9 + 0x30);
  *(undefined **)((long)pppppuVar4 + -0x70) = puVar12;
  *(undefined8 ***)((long)pppppuVar4 + -0x68) = ppuVar6;
  *(undefined1 ******)((long)pppppuVar4 + -0x60) = pppppuVar40;
  *(code **)((long)pppppuVar4 + -0x58) = FUN_109d0f438;
  func_0x0001099ae3a4(ppuVar38,uVar43);
  if (((ulong)extraout_x8_01[9] & 1) == 0) {
    iVar19 = *(int *)(extraout_x8_01 + 2) * *(int *)((long)extraout_x8_01 + 0x14) *
             *(int *)((long)extraout_x8_01 + 0xc) * *(int *)(extraout_x8_01 + 1);
  }
  else {
    iVar19 = 1;
    for (piVar7 = (int *)extraout_x8_01[6]; piVar7 != (int *)extraout_x8_01[7]; piVar7 = piVar7 + 1)
    {
      iVar19 = *piVar7 * iVar19;
    }
  }
  if (0xe < *(uint *)(extraout_x8_01 + 3)) {
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
                    /* WARNING: Does not return */
    pcVar41 = (code *)SoftwareBreakpoint(1,0x109d0f518);
    (*pcVar41)();
  }
  uVar15 = (ulong)(uint)(*(int *)(&UNK_10e040de8 + (ulong)*(uint *)(extraout_x8_01 + 3) * 4) *
                        iVar19);
  if (*(int *)(&UNK_10e040de8 + (ulong)*(uint *)(extraout_x8_01 + 3) * 4) * iVar19 == 0) {
    return ppuVar38;
  }
  ppuVar6 = (undefined8 **)extraout_x8_01[4];
code_r0x00010bdbf0a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(ppuVar6,ppuVar13,uVar15);
  return ppuVar6;
}



/* Entry: 109d0eb9c; end: 109d0eccf;  */

ushort * FUN_109d0eb9c(undefined8 *param_1,int *param_2,uint *param_3)

{
  char cVar1;
  undefined8 *******pppppppuVar2;
  undefined1 ****ppppuVar3;
  bool bVar4;
  ushort *puVar5;
  int *piVar6;
  ushort *puVar7;
  undefined *puVar8;
  long *plVar9;
  char **ppcVar10;
  undefined *puVar11;
  ushort *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  uint *puVar16;
  ulong uVar17;
  ushort *extraout_x8;
  ushort *extraout_x8_00;
  int iVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  undefined8 *puVar22;
  float2 *pfVar23;
  double *pdVar24;
  undefined1 *puVar25;
  float *pfVar26;
  byte *pbVar27;
  char *pcVar28;
  short *psVar29;
  undefined4 *puVar30;
  undefined8 *puVar31;
  short *psVar32;
  undefined4 *puVar33;
  undefined1 *puVar34;
  undefined2 *puVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  uint *unaff_x22;
  ulong uVar38;
  long lVar39;
  ushort *puVar40;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 ****ppppuVar41;
  code *pcVar42;
  uint uVar43;
  undefined4 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  ushort auStack_110 [12];
  undefined4 uStack_f8;
  undefined8 ******ppppppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint *puStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  long lStack_a0;
  char cStack_91;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  ushort *puStack_48;
  
  puVar40 = (ushort *)&uStack_50;
  if (*param_3 < 0xf) {
    uVar38 = (ulong)(uint)(param_2[2] * param_2[3] * param_2[1] * *param_2 *
                          *(int *)(&UNK_10e040de8 + (ulong)*param_3 * 4));
    __Znam(uVar38);
    _bzero();
    func_0x00010928e964(&uStack_50,uVar38);
    if (puStack_48 == (ushort *)0x0) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar5 = puStack_48 + 4;
      do {
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *(long *)puVar5 = *(long *)puVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        puVar7 = puStack_48;
      } while (cVar1 != '\0');
    }
    *param_1 = &PTR_DAT_1108a5c28;
    uVar45 = *(undefined8 *)param_2;
    param_1[2] = *(undefined8 *)(param_2 + 2);
    param_1[1] = uVar45;
    param_1[3] = *(undefined8 *)param_3;
    param_1[5] = puStack_48;
    param_1[4] = uStack_50;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    if (puVar7 != (ushort *)0x0) {
      puVar5 = puVar7 + 4;
      do {
        lVar21 = *(long *)puVar5;
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *(long *)puVar5 = lVar21 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*(long *)puVar7 + 0x10))(puVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar7);
        puVar40 = puVar7;
      }
    }
    return puVar40;
  }
  puVar40 = (ushort *)&UNK_10dfd21d7;
  puVar11 = &UNK_10f5ac4bc;
  puVar13 = &UNK_10f5ac4cb;
  func_0x00010952d0c4();
  puVar7 = auStack_110;
  pcStack_58 = FUN_109d0ecd0;
  puVar12 = *(ushort **)(puVar40 + 0x10);
  puVar5 = *(ushort **)(puVar11 + 0x20);
  if (puVar12 == puVar5) {
    return puVar5;
  }
  uVar43 = *(uint *)(puVar40 + 0xc);
  uVar38 = (ulong)uVar43;
  uVar20 = *(uint *)(puVar11 + 0x18);
  bVar4 = uVar43 - 9 < 6;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((!bVar4 && 4 < uVar20 - 9) && (bVar4 || uVar20 - 9 != 5)) {
    if ((puVar40[0x24] & 1) != 0) {
      iVar18 = 1;
      for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
          piVar6 = piVar6 + 1) {
        iVar18 = *piVar6 * iVar18;
      }
LAB_109d0eda0:
      if ((puVar11[0x48] & 1) == 0) {
        iVar19 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) * *(int *)(puVar11 + 0xc) *
                 *(int *)(puVar11 + 8);
      }
      else {
        iVar19 = 1;
        for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
            piVar6 = piVar6 + 1) {
          iVar19 = *piVar6 * iVar19;
        }
      }
      if (iVar18 != iVar19) goto LAB_109d0f120;
      if (*(int *)(puVar40 + 0xe) == *(int *)(puVar11 + 0x1c)) {
LAB_109d0eeac:
        pcStack_58 = FUN_109d0ecd0;
        if ((int)uVar43 < 4) {
          if (1 < (int)uVar43) {
            if (uVar43 == 2) {
              uVar43 = *(uint *)(puVar11 + 0x18);
              uVar38 = (ulong)uVar43;
              if ((int)uVar43 < 4) {
                if ((int)uVar43 < 2) {
                  if (uVar43 == 0) {
                    if ((puVar40[0x24] & 1) == 0) {
                      uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                               *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4);
                    }
                    else {
                      uVar43 = 1;
                      for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar43 = *piVar6 * uVar43;
                      }
                    }
                    if ((puVar11[0x48] & 1) == 0) {
                      uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                               *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                    }
                    else {
                      uVar20 = 1;
                      for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar20 = *piVar6 * uVar20;
                      }
                    }
                    if (uVar43 == uVar20) {
                      if (uVar43 == 0) {
                        return puVar40;
                      }
                      lVar21 = (ulong)uVar43 << 3;
                      pdVar24 = *(double **)(puVar40 + 0x10);
                      psVar29 = *(short **)(puVar11 + 0x20);
                      do {
                        uVar38 = (ulong)((uint)(float)*pdVar24 >> 0x17);
                        *psVar29 = *(short *)(&UNK_10e04070a + uVar38 * 2) +
                                   (short)(((uint)(float)*pdVar24 & 0x7fffff) >>
                                          (ulong)((byte)(&UNK_10e040b0a)[uVar38] & 0x1f));
                        lVar21 = lVar21 + -8;
                        pdVar24 = pdVar24 + 1;
                        psVar29 = psVar29 + 1;
                      } while (lVar21 != 0);
                      return puVar40;
                    }
                  }
                  else {
                    if (uVar43 != 1) {
LAB_109d12e00:
                      func_0x000107c31940(&uStack_c0,&UNK_10f5ac487);
                      func_0x000109259240(&pcStack_a8,&uStack_c0,&UNK_10f5a35f2);
                      __ZNSt3__19to_stringEi(&ppppppuStack_d8,uVar38);
                      pppppppuVar2 = (undefined8 *******)ppppppuStack_d8;
                      if (-1 < (char)bStack_c1) {
                        uStack_d0 = (ulong)bStack_c1;
                        pppppppuVar2 = &ppppppuStack_d8;
                      }
                      ppcVar10 = &pcStack_a8;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (ppcVar10,pppppppuVar2,uStack_d0);
                      ppcVar10[1] = (char *)0x0;
                      ppcVar10[2] = (char *)0x0;
                      *ppcVar10 = (char *)0x0;
                      if ((char)bStack_c1 < '\0') {
                        __ZdlPv(ppppppuStack_d8);
                      }
                      if (cStack_91 < '\0') {
                        __ZdlPv(pcStack_a8);
                      }
                      if (uStack_b0._7_1_ < '\0') {
                        __ZdlPv(CONCAT44(uStack_bc,uStack_c0));
                      }
                      plVar9 = (long *)0x10;
                      ___cxa_allocate_exception();
                      __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                                ();
                      *plVar9 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                      ___cxa_throw(plVar9,PTR___ZTISt16invalid_argument_110352248,
                                   PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                      goto LAB_109d134dc;
                    }
                    if ((puVar40[0x24] & 1) == 0) {
                      uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                               *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4);
                    }
                    else {
                      uVar43 = 1;
                      for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar43 = *piVar6 * uVar43;
                      }
                    }
                    if ((puVar11[0x48] & 1) == 0) {
                      uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                               *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                    }
                    else {
                      uVar20 = 1;
                      for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar20 = *piVar6 * uVar20;
                      }
                    }
                    if (uVar43 == uVar20) {
                      if (uVar43 == 0) {
                        return puVar40;
                      }
                      lVar21 = (ulong)uVar43 << 3;
                      pdVar24 = *(double **)(puVar40 + 0x10);
                      pfVar26 = *(float **)(puVar11 + 0x20);
                      do {
                        *pfVar26 = (float)*pdVar24;
                        lVar21 = lVar21 + -8;
                        pdVar24 = pdVar24 + 1;
                        pfVar26 = pfVar26 + 1;
                      } while (lVar21 != 0);
                      return puVar40;
                    }
                  }
                }
                else if (uVar43 == 2) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    puVar12 = *(ushort **)(puVar40 + 0x10);
                    puVar5 = *(ushort **)(puVar11 + 0x20);
                    uVar14 = (ulong)uVar43 << 3;
                    goto code_r0x00010bdbf0a8;
                  }
                }
                else {
                  if (uVar43 != 3) goto LAB_109d12e00;
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    lVar21 = (ulong)uVar43 << 3;
                    pdVar24 = *(double **)(puVar40 + 0x10);
                    puVar25 = *(undefined1 **)(puVar11 + 0x20);
                    do {
                      *puVar25 = (char)(int)*pdVar24;
                      lVar21 = lVar21 + -8;
                      pdVar24 = pdVar24 + 1;
                      puVar25 = puVar25 + 1;
                    } while (lVar21 != 0);
                    return puVar40;
                  }
                }
              }
              else if ((int)uVar43 < 6) {
                if (uVar43 == 4) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    lVar21 = (ulong)uVar43 << 3;
                    pdVar24 = *(double **)(puVar40 + 0x10);
                    puVar35 = *(undefined2 **)(puVar11 + 0x20);
                    do {
                      *puVar35 = (short)(int)*pdVar24;
                      lVar21 = lVar21 + -8;
                      pdVar24 = pdVar24 + 1;
                      puVar35 = puVar35 + 1;
                    } while (lVar21 != 0);
                    return puVar40;
                  }
                }
                else {
                  if (uVar43 != 5) goto LAB_109d12e00;
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    lVar21 = (ulong)uVar43 << 3;
                    pdVar24 = *(double **)(puVar40 + 0x10);
                    piVar6 = *(int **)(puVar11 + 0x20);
                    do {
                      *piVar6 = (int)*pdVar24;
                      lVar21 = lVar21 + -8;
                      pdVar24 = pdVar24 + 1;
                      piVar6 = piVar6 + 1;
                    } while (lVar21 != 0);
                    return puVar40;
                  }
                }
              }
              else if (uVar43 == 6) {
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 3;
                  pdVar24 = *(double **)(puVar40 + 0x10);
                  puVar25 = *(undefined1 **)(puVar11 + 0x20);
                  do {
                    *puVar25 = (char)(int)*pdVar24;
                    lVar21 = lVar21 + -8;
                    pdVar24 = pdVar24 + 1;
                    puVar25 = puVar25 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
              else if (uVar43 == 7) {
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 3;
                  pdVar24 = *(double **)(puVar40 + 0x10);
                  puVar35 = *(undefined2 **)(puVar11 + 0x20);
                  do {
                    *puVar35 = (short)(int)*pdVar24;
                    lVar21 = lVar21 + -8;
                    pdVar24 = pdVar24 + 1;
                    puVar35 = puVar35 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
              else {
                if (uVar43 != 8) goto LAB_109d12e00;
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 3;
                  pdVar24 = *(double **)(puVar40 + 0x10);
                  piVar6 = *(int **)(puVar11 + 0x20);
                  do {
                    *piVar6 = (int)*pdVar24;
                    lVar21 = lVar21 + -8;
                    pdVar24 = pdVar24 + 1;
                    piVar6 = piVar6 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
            }
            else {
              if (uVar43 != 3) goto LAB_109d12c48;
              uVar43 = *(uint *)(puVar11 + 0x18);
              uVar38 = (ulong)uVar43;
              if ((int)uVar43 < 4) {
                if ((int)uVar43 < 2) {
                  if (uVar43 == 0) {
                    if ((puVar40[0x24] & 1) == 0) {
                      uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                               *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4);
                    }
                    else {
                      uVar43 = 1;
                      for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar43 = *piVar6 * uVar43;
                      }
                    }
                    uVar14 = (ulong)uVar43;
                    if ((puVar11[0x48] & 1) == 0) {
                      uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                               *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                    }
                    else {
                      uVar20 = 1;
                      for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar20 = *piVar6 * uVar20;
                      }
                    }
                    if (uVar43 == uVar20) {
                      if (uVar43 == 0) {
                        return puVar40;
                      }
                      pbVar27 = *(byte **)(puVar40 + 0x10);
                      psVar29 = *(short **)(puVar11 + 0x20);
                      do {
                        uVar38 = (ulong)((uint)(float)*pbVar27 >> 0x17);
                        *psVar29 = *(short *)(&UNK_10e04070a + uVar38 * 2) +
                                   (short)(((uint)(float)*pbVar27 & 0x7fffff) >>
                                          (ulong)((byte)(&UNK_10e040b0a)[uVar38] & 0x1f));
                        uVar14 = uVar14 - 1;
                        pbVar27 = pbVar27 + 1;
                        psVar29 = psVar29 + 1;
                      } while (uVar14 != 0);
                      return puVar40;
                    }
                  }
                  else {
                    if (uVar43 != 1) goto LAB_109d12fb8;
                    if ((puVar40[0x24] & 1) == 0) {
                      uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                               *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4);
                    }
                    else {
                      uVar43 = 1;
                      for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar43 = *piVar6 * uVar43;
                      }
                    }
                    uVar14 = (ulong)uVar43;
                    if ((puVar11[0x48] & 1) == 0) {
                      uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                               *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                    }
                    else {
                      uVar20 = 1;
                      for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar20 = *piVar6 * uVar20;
                      }
                    }
                    if (uVar43 == uVar20) {
                      if (uVar43 == 0) {
                        return puVar40;
                      }
                      pbVar27 = *(byte **)(puVar40 + 0x10);
                      pfVar26 = *(float **)(puVar11 + 0x20);
                      do {
                        *pfVar26 = (float)*pbVar27;
                        uVar14 = uVar14 - 1;
                        pbVar27 = pbVar27 + 1;
                        pfVar26 = pfVar26 + 1;
                      } while (uVar14 != 0);
                      return puVar40;
                    }
                  }
                }
                else {
                  if (uVar43 != 2) {
                    if (uVar43 == 3) {
                      if ((puVar40[0x24] & 1) == 0) {
                        uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                                 *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4);
                      }
                      else {
                        uVar43 = 1;
                        for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c)
                            ; piVar6 = piVar6 + 1) {
                          uVar43 = *piVar6 * uVar43;
                        }
                      }
                      uVar14 = (ulong)uVar43;
                      if ((puVar11[0x48] & 1) == 0) goto LAB_109d11e18;
                      iVar18 = 1;
                      for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                          piVar6 = piVar6 + 1) {
                        iVar18 = *piVar6 * iVar18;
                      }
                      goto LAB_109d11e2c;
                    }
LAB_109d12fb8:
                    func_0x000107c31940(&uStack_c0,&UNK_10f5ac487);
                    func_0x000109259240(&pcStack_a8,&uStack_c0,&UNK_10f5a35f2);
                    __ZNSt3__19to_stringEi(&ppppppuStack_d8,uVar38);
                    pppppppuVar2 = (undefined8 *******)ppppppuStack_d8;
                    if (-1 < (char)bStack_c1) {
                      uStack_d0 = (ulong)bStack_c1;
                      pppppppuVar2 = &ppppppuStack_d8;
                    }
                    ppcVar10 = &pcStack_a8;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (ppcVar10,pppppppuVar2,uStack_d0);
                    ppcVar10[1] = (char *)0x0;
                    ppcVar10[2] = (char *)0x0;
                    *ppcVar10 = (char *)0x0;
                    if ((char)bStack_c1 < '\0') {
                      __ZdlPv(ppppppuStack_d8);
                    }
                    if (cStack_91 < '\0') {
                      __ZdlPv(pcStack_a8);
                    }
                    if (uStack_b0._7_1_ < '\0') {
                      __ZdlPv(CONCAT44(uStack_bc,uStack_c0));
                    }
                    plVar9 = (long *)0x10;
                    ___cxa_allocate_exception();
                    __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              ();
                    *plVar9 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                    ___cxa_throw(plVar9,PTR___ZTISt16invalid_argument_110352248,
                                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    goto LAB_109d134dc;
                  }
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  uVar14 = (ulong)uVar43;
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    pbVar27 = *(byte **)(puVar40 + 0x10);
                    pdVar24 = *(double **)(puVar11 + 0x20);
                    do {
                      *pdVar24 = (double)*pbVar27;
                      uVar14 = uVar14 - 1;
                      pbVar27 = pbVar27 + 1;
                      pdVar24 = pdVar24 + 1;
                    } while (uVar14 != 0);
                    return puVar40;
                  }
                }
              }
              else if ((int)uVar43 < 6) {
                if (uVar43 == 4) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  uVar14 = (ulong)uVar43;
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    pbVar27 = *(byte **)(puVar40 + 0x10);
                    puVar7 = *(ushort **)(puVar11 + 0x20);
                    do {
                      *puVar7 = (ushort)*pbVar27;
                      uVar14 = uVar14 - 1;
                      pbVar27 = pbVar27 + 1;
                      puVar7 = puVar7 + 1;
                    } while (uVar14 != 0);
                    return puVar40;
                  }
                }
                else {
                  if (uVar43 != 5) goto LAB_109d12fb8;
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  uVar14 = (ulong)uVar43;
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    pbVar27 = *(byte **)(puVar40 + 0x10);
                    puVar16 = *(uint **)(puVar11 + 0x20);
                    do {
                      *puVar16 = (uint)*pbVar27;
                      uVar14 = uVar14 - 1;
                      pbVar27 = pbVar27 + 1;
                      puVar16 = puVar16 + 1;
                    } while (uVar14 != 0);
                    return puVar40;
                  }
                }
              }
              else {
                if (uVar43 == 6) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  uVar14 = (ulong)uVar43;
                  if ((puVar11[0x48] & 1) == 0) goto LAB_109d11e18;
                  iVar18 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar18 = *piVar6 * iVar18;
                  }
                  goto LAB_109d11e2c;
                }
                if (uVar43 == 7) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  uVar14 = (ulong)uVar43;
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    pbVar27 = *(byte **)(puVar40 + 0x10);
                    puVar7 = *(ushort **)(puVar11 + 0x20);
                    do {
                      *puVar7 = (ushort)*pbVar27;
                      uVar14 = uVar14 - 1;
                      pbVar27 = pbVar27 + 1;
                      puVar7 = puVar7 + 1;
                    } while (uVar14 != 0);
                    return puVar40;
                  }
                }
                else {
                  if (uVar43 != 8) goto LAB_109d12fb8;
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  uVar14 = (ulong)uVar43;
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    pbVar27 = *(byte **)(puVar40 + 0x10);
                    puVar16 = *(uint **)(puVar11 + 0x20);
                    do {
                      *puVar16 = (uint)*pbVar27;
                      uVar14 = uVar14 - 1;
                      pbVar27 = pbVar27 + 1;
                      puVar16 = puVar16 + 1;
                    } while (uVar14 != 0);
                    return puVar40;
                  }
                }
              }
            }
            goto LAB_109d12c30;
          }
          if (uVar43 == 0) {
            uVar43 = *(uint *)(puVar11 + 0x18);
            uVar38 = (ulong)uVar43;
            if ((int)uVar43 < 4) {
              if ((int)uVar43 < 2) {
                if (uVar43 == 0) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  uVar14 = (ulong)uVar43;
                  if ((puVar11[0x48] & 1) == 0) goto LAB_109d12910;
                  iVar18 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar18 = *piVar6 * iVar18;
                  }
                  goto LAB_109d12924;
                }
                if (uVar43 != 1) {
LAB_109d12d24:
                  func_0x000107c31940(&uStack_c0,&UNK_10f5ac487);
                  func_0x000109259240(&pcStack_a8,&uStack_c0,&UNK_10f5a35f2);
                  __ZNSt3__19to_stringEi(&ppppppuStack_d8,uVar38);
                  pppppppuVar2 = (undefined8 *******)ppppppuStack_d8;
                  if (-1 < (char)bStack_c1) {
                    uStack_d0 = (ulong)bStack_c1;
                    pppppppuVar2 = &ppppppuStack_d8;
                  }
                  ppcVar10 = &pcStack_a8;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppcVar10,pppppppuVar2,uStack_d0);
                  ppcVar10[1] = (char *)0x0;
                  ppcVar10[2] = (char *)0x0;
                  *ppcVar10 = (char *)0x0;
                  if ((char)bStack_c1 < '\0') {
                    __ZdlPv(ppppppuStack_d8);
                  }
                  if (cStack_91 < '\0') {
                    __ZdlPv(pcStack_a8);
                  }
                  if (uStack_b0._7_1_ < '\0') {
                    __ZdlPv(CONCAT44(uStack_bc,uStack_c0));
                  }
                  plVar9 = (long *)0x10;
                  ___cxa_allocate_exception();
                  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            ();
                  *plVar9 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                  ___cxa_throw(plVar9,PTR___ZTISt16invalid_argument_110352248,
                               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                  goto LAB_109d134dc;
                }
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                uVar14 = (ulong)uVar43;
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  puVar22 = *(undefined8 **)(puVar40 + 0x10);
                  puVar31 = *(undefined8 **)(puVar11 + 0x20);
                  uVar38 = 0;
                  puVar36 = puVar22;
                  puVar37 = puVar31;
                  if ((uVar43 & 0xfffffffc) != 0) {
                    do {
                      uVar45 = *puVar36;
                      puVar37[1] = CONCAT44((float)(float2)((ulong)uVar45 >> 0x30),
                                            (float)(float2)((ulong)uVar45 >> 0x20));
                      *puVar37 = CONCAT44((float)(float2)((ulong)uVar45 >> 0x10),
                                          (float)(float2)uVar45);
                      uVar38 = uVar38 + 4;
                      puVar36 = puVar36 + 1;
                      puVar37 = puVar37 + 2;
                    } while (uVar38 < (uVar14 & 0xfffffffc));
                  }
                  lVar21 = uVar14 - uVar38;
                  if (uVar14 < uVar38 || lVar21 == 0) {
                    return puVar40;
                  }
                  pfVar23 = (float2 *)((long)puVar22 + uVar38 * 2);
                  pfVar26 = (float *)((long)puVar31 + uVar38 * 4);
                  do {
                    *pfVar26 = (float)*pfVar23;
                    lVar21 = lVar21 + -1;
                    pfVar23 = pfVar23 + 1;
                    pfVar26 = pfVar26 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
              else if (uVar43 == 2) {
                if ((puVar40[0x24] & 1) == 0) {
                  uVar14 = (ulong)(uint)(*(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                                         *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4));
                }
                else {
                  uVar14 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar14 = (ulong)(uint)(*piVar6 * (int)uVar14);
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  iVar18 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  iVar18 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar18 = *piVar6 * iVar18;
                  }
                }
                if ((int)uVar14 == iVar18) {
                  puVar7 = *(ushort **)(puVar40 + 0x10);
                  puVar40 = puVar7 + uVar14;
                  pdVar24 = *(double **)(puVar11 + 0x20);
                  for (; puVar7 != puVar40; puVar7 = puVar7 + 1) {
                    uVar38 = (ulong)(*puVar7 >> 10);
                    *pdVar24 = (double)(float)(*(int *)(&UNK_10e039244 + uVar38 * 4) +
                                              *(int *)(&UNK_10e037244 +
                                                      (ulong)((*puVar7 & 0x3ff) +
                                                             (uint)*(ushort *)
                                                                    (&UNK_10e039344 + uVar38 * 2)) *
                                                      4));
                    pdVar24 = pdVar24 + 1;
                  }
                  return puVar7;
                }
              }
              else {
                if (uVar43 != 3) goto LAB_109d12d24;
                if ((puVar40[0x24] & 1) == 0) {
                  uVar14 = (ulong)(uint)(*(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                                         *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4));
                }
                else {
                  uVar14 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar14 = (ulong)(uint)(*piVar6 * (int)uVar14);
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  iVar18 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  iVar18 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar18 = *piVar6 * iVar18;
                  }
                }
                if ((int)uVar14 == iVar18) {
                  puVar7 = *(ushort **)(puVar40 + 0x10);
                  puVar40 = puVar7 + uVar14;
                  puVar25 = *(undefined1 **)(puVar11 + 0x20);
                  for (; puVar7 != puVar40; puVar7 = puVar7 + 1) {
                    uVar38 = (ulong)(*puVar7 >> 10);
                    *puVar25 = (char)(int)(float)(*(int *)(&UNK_10e039244 + uVar38 * 4) +
                                                 *(int *)(&UNK_10e037244 +
                                                         (ulong)((*puVar7 & 0x3ff) +
                                                                (uint)*(ushort *)
                                                                       (&UNK_10e039344 + uVar38 * 2)
                                                                ) * 4));
                    puVar25 = puVar25 + 1;
                  }
                  return puVar7;
                }
              }
            }
            else if ((int)uVar43 < 6) {
              if (uVar43 == 4) {
                if ((puVar40[0x24] & 1) == 0) {
                  uVar14 = (ulong)(uint)(*(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                                         *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4));
                }
                else {
                  uVar14 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar14 = (ulong)(uint)(*piVar6 * (int)uVar14);
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  iVar18 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  iVar18 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar18 = *piVar6 * iVar18;
                  }
                }
                if ((int)uVar14 == iVar18) {
                  puVar7 = *(ushort **)(puVar40 + 0x10);
                  puVar40 = puVar7 + uVar14;
                  puVar35 = *(undefined2 **)(puVar11 + 0x20);
                  for (; puVar7 != puVar40; puVar7 = puVar7 + 1) {
                    uVar38 = (ulong)(*puVar7 >> 10);
                    *puVar35 = (short)(int)(float)(*(int *)(&UNK_10e039244 + uVar38 * 4) +
                                                  *(int *)(&UNK_10e037244 +
                                                          (ulong)((*puVar7 & 0x3ff) +
                                                                 (uint)*(ushort *)
                                                                        (&UNK_10e039344 + uVar38 * 2
                                                                        )) * 4));
                    puVar35 = puVar35 + 1;
                  }
                  return puVar7;
                }
              }
              else {
                if (uVar43 != 5) goto LAB_109d12d24;
                if ((puVar40[0x24] & 1) == 0) {
                  uVar14 = (ulong)(uint)(*(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                                         *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4));
                }
                else {
                  uVar14 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar14 = (ulong)(uint)(*piVar6 * (int)uVar14);
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  iVar18 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  iVar18 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar18 = *piVar6 * iVar18;
                  }
                }
                if ((int)uVar14 == iVar18) {
                  puVar7 = *(ushort **)(puVar40 + 0x10);
                  puVar40 = puVar7 + uVar14;
                  piVar6 = *(int **)(puVar11 + 0x20);
                  for (; puVar7 != puVar40; puVar7 = puVar7 + 1) {
                    uVar38 = (ulong)(*puVar7 >> 10);
                    *piVar6 = (int)(float)(*(int *)(&UNK_10e039244 + uVar38 * 4) +
                                          *(int *)(&UNK_10e037244 +
                                                  (ulong)((*puVar7 & 0x3ff) +
                                                         (uint)*(ushort *)
                                                                (&UNK_10e039344 + uVar38 * 2)) * 4))
                    ;
                    piVar6 = piVar6 + 1;
                  }
                  return puVar7;
                }
              }
            }
            else if (uVar43 == 6) {
              if ((puVar40[0x24] & 1) == 0) {
                uVar14 = (ulong)(uint)(*(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                                       *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4));
              }
              else {
                uVar14 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar14 = (ulong)(uint)(*piVar6 * (int)uVar14);
                }
              }
              if ((puVar11[0x48] & 1) == 0) {
                iVar18 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                iVar18 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar18 = *piVar6 * iVar18;
                }
              }
              if ((int)uVar14 == iVar18) {
                puVar7 = *(ushort **)(puVar40 + 0x10);
                puVar40 = puVar7 + uVar14;
                puVar25 = *(undefined1 **)(puVar11 + 0x20);
                for (; puVar7 != puVar40; puVar7 = puVar7 + 1) {
                  uVar38 = (ulong)(*puVar7 >> 10);
                  *puVar25 = (char)(int)(float)(*(int *)(&UNK_10e039244 + uVar38 * 4) +
                                               *(int *)(&UNK_10e037244 +
                                                       (ulong)((*puVar7 & 0x3ff) +
                                                              (uint)*(ushort *)
                                                                     (&UNK_10e039344 + uVar38 * 2))
                                                       * 4));
                  puVar25 = puVar25 + 1;
                }
                return puVar7;
              }
            }
            else if (uVar43 == 7) {
              if ((puVar40[0x24] & 1) == 0) {
                uVar14 = (ulong)(uint)(*(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                                       *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4));
              }
              else {
                uVar14 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar14 = (ulong)(uint)(*piVar6 * (int)uVar14);
                }
              }
              if ((puVar11[0x48] & 1) == 0) {
                iVar18 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                iVar18 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar18 = *piVar6 * iVar18;
                }
              }
              if ((int)uVar14 == iVar18) {
                puVar7 = *(ushort **)(puVar40 + 0x10);
                puVar40 = puVar7 + uVar14;
                puVar35 = *(undefined2 **)(puVar11 + 0x20);
                for (; puVar7 != puVar40; puVar7 = puVar7 + 1) {
                  uVar38 = (ulong)(*puVar7 >> 10);
                  *puVar35 = (short)(int)(float)(*(int *)(&UNK_10e039244 + uVar38 * 4) +
                                                *(int *)(&UNK_10e037244 +
                                                        (ulong)((*puVar7 & 0x3ff) +
                                                               (uint)*(ushort *)
                                                                      (&UNK_10e039344 + uVar38 * 2))
                                                        * 4));
                  puVar35 = puVar35 + 1;
                }
                return puVar7;
              }
            }
            else {
              if (uVar43 != 8) goto LAB_109d12d24;
              if ((puVar40[0x24] & 1) == 0) {
                uVar14 = (ulong)(uint)(*(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                                       *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4));
              }
              else {
                uVar14 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar14 = (ulong)(uint)(*piVar6 * (int)uVar14);
                }
              }
              if ((puVar11[0x48] & 1) == 0) {
                iVar18 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                iVar18 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar18 = *piVar6 * iVar18;
                }
              }
              if ((int)uVar14 == iVar18) {
                puVar7 = *(ushort **)(puVar40 + 0x10);
                puVar40 = puVar7 + uVar14;
                piVar6 = *(int **)(puVar11 + 0x20);
                for (; puVar7 != puVar40; puVar7 = puVar7 + 1) {
                  uVar38 = (ulong)(*puVar7 >> 10);
                  *piVar6 = (int)(float)(*(int *)(&UNK_10e039244 + uVar38 * 4) +
                                        *(int *)(&UNK_10e037244 +
                                                (ulong)((*puVar7 & 0x3ff) +
                                                       (uint)*(ushort *)
                                                              (&UNK_10e039344 + uVar38 * 2)) * 4));
                  piVar6 = piVar6 + 1;
                }
                return puVar7;
              }
            }
            goto LAB_109d12c30;
          }
          if (uVar43 == 1) {
            uVar43 = *(uint *)(puVar11 + 0x18);
            uVar38 = (ulong)uVar43;
            if ((int)uVar43 < 4) {
              if ((int)uVar43 < 2) {
                if (uVar43 != 0) {
                  if (uVar43 == 1) {
                    if ((puVar40[0x24] & 1) == 0) {
                      uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                               *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4);
                    }
                    else {
                      uVar43 = 1;
                      for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar43 = *piVar6 * uVar43;
                      }
                    }
                    uVar14 = (ulong)uVar43;
                    if ((puVar11[0x48] & 1) == 0) goto LAB_109d12be0;
                    iVar18 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      iVar18 = *piVar6 * iVar18;
                    }
                    goto LAB_109d12bf4;
                  }
LAB_109d12edc:
                  func_0x000107c31940(&uStack_c0,&UNK_10f5ac487);
                  func_0x000109259240(&pcStack_a8,&uStack_c0,&UNK_10f5a35f2);
                  __ZNSt3__19to_stringEi(&ppppppuStack_d8,uVar38);
                  pppppppuVar2 = (undefined8 *******)ppppppuStack_d8;
                  if (-1 < (char)bStack_c1) {
                    uStack_d0 = (ulong)bStack_c1;
                    pppppppuVar2 = &ppppppuStack_d8;
                  }
                  ppcVar10 = &pcStack_a8;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppcVar10,pppppppuVar2,uStack_d0);
                  ppcVar10[1] = (char *)0x0;
                  ppcVar10[2] = (char *)0x0;
                  *ppcVar10 = (char *)0x0;
                  if ((char)bStack_c1 < '\0') {
                    __ZdlPv(ppppppuStack_d8);
                  }
                  if (cStack_91 < '\0') {
                    __ZdlPv(pcStack_a8);
                  }
                  if (uStack_b0._7_1_ < '\0') {
                    __ZdlPv(CONCAT44(uStack_bc,uStack_c0));
                  }
                  plVar9 = (long *)0x10;
                  ___cxa_allocate_exception();
                  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            ();
                  *plVar9 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                  ___cxa_throw(plVar9,PTR___ZTISt16invalid_argument_110352248,
                               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                  goto LAB_109d134dc;
                }
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 2;
                  puVar16 = *(uint **)(puVar40 + 0x10);
                  psVar29 = *(short **)(puVar11 + 0x20);
                  do {
                    uVar38 = (ulong)(*puVar16 >> 0x17);
                    *psVar29 = *(short *)(&UNK_10e04070a + uVar38 * 2) +
                               (short)((*puVar16 & 0x7fffff) >>
                                      (ulong)((byte)(&UNK_10e040b0a)[uVar38] & 0x1f));
                    lVar21 = lVar21 + -4;
                    puVar16 = puVar16 + 1;
                    psVar29 = psVar29 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
              else if (uVar43 == 2) {
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 2;
                  pfVar26 = *(float **)(puVar40 + 0x10);
                  pdVar24 = *(double **)(puVar11 + 0x20);
                  do {
                    *pdVar24 = (double)*pfVar26;
                    lVar21 = lVar21 + -4;
                    pfVar26 = pfVar26 + 1;
                    pdVar24 = pdVar24 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
              else {
                if (uVar43 != 3) goto LAB_109d12edc;
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 2;
                  pfVar26 = *(float **)(puVar40 + 0x10);
                  puVar25 = *(undefined1 **)(puVar11 + 0x20);
                  do {
                    *puVar25 = (char)(int)*pfVar26;
                    lVar21 = lVar21 + -4;
                    pfVar26 = pfVar26 + 1;
                    puVar25 = puVar25 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
            }
            else if ((int)uVar43 < 6) {
              if (uVar43 == 4) {
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 2;
                  pfVar26 = *(float **)(puVar40 + 0x10);
                  puVar35 = *(undefined2 **)(puVar11 + 0x20);
                  do {
                    *puVar35 = (short)(int)*pfVar26;
                    lVar21 = lVar21 + -4;
                    pfVar26 = pfVar26 + 1;
                    puVar35 = puVar35 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
              else {
                if (uVar43 != 5) goto LAB_109d12edc;
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 2;
                  pfVar26 = *(float **)(puVar40 + 0x10);
                  piVar6 = *(int **)(puVar11 + 0x20);
                  do {
                    *piVar6 = (int)*pfVar26;
                    lVar21 = lVar21 + -4;
                    pfVar26 = pfVar26 + 1;
                    piVar6 = piVar6 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
            }
            else if (uVar43 == 6) {
              if ((puVar40[0x24] & 1) == 0) {
                uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                         *(int *)(puVar40 + 4);
              }
              else {
                uVar43 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar43 = *piVar6 * uVar43;
                }
              }
              if ((puVar11[0x48] & 1) == 0) {
                uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                uVar20 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar20 = *piVar6 * uVar20;
                }
              }
              if (uVar43 == uVar20) {
                if (uVar43 == 0) {
                  return puVar40;
                }
                lVar21 = (ulong)uVar43 << 2;
                pfVar26 = *(float **)(puVar40 + 0x10);
                puVar25 = *(undefined1 **)(puVar11 + 0x20);
                do {
                  *puVar25 = (char)(int)*pfVar26;
                  lVar21 = lVar21 + -4;
                  pfVar26 = pfVar26 + 1;
                  puVar25 = puVar25 + 1;
                } while (lVar21 != 0);
                return puVar40;
              }
            }
            else if (uVar43 == 7) {
              if ((puVar40[0x24] & 1) == 0) {
                uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                         *(int *)(puVar40 + 4);
              }
              else {
                uVar43 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar43 = *piVar6 * uVar43;
                }
              }
              if ((puVar11[0x48] & 1) == 0) {
                uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                uVar20 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar20 = *piVar6 * uVar20;
                }
              }
              if (uVar43 == uVar20) {
                if (uVar43 == 0) {
                  return puVar40;
                }
                lVar21 = (ulong)uVar43 << 2;
                pfVar26 = *(float **)(puVar40 + 0x10);
                puVar35 = *(undefined2 **)(puVar11 + 0x20);
                do {
                  *puVar35 = (short)(int)*pfVar26;
                  lVar21 = lVar21 + -4;
                  pfVar26 = pfVar26 + 1;
                  puVar35 = puVar35 + 1;
                } while (lVar21 != 0);
                return puVar40;
              }
            }
            else {
              if (uVar43 != 8) goto LAB_109d12edc;
              if ((puVar40[0x24] & 1) == 0) {
                uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                         *(int *)(puVar40 + 4);
              }
              else {
                uVar43 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar43 = *piVar6 * uVar43;
                }
              }
              if ((puVar11[0x48] & 1) == 0) {
                uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                uVar20 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar20 = *piVar6 * uVar20;
                }
              }
              if (uVar43 == uVar20) {
                if (uVar43 == 0) {
                  return puVar40;
                }
                lVar21 = (ulong)uVar43 << 2;
                pfVar26 = *(float **)(puVar40 + 0x10);
                piVar6 = *(int **)(puVar11 + 0x20);
                do {
                  *piVar6 = (int)*pfVar26;
                  lVar21 = lVar21 + -4;
                  pfVar26 = pfVar26 + 1;
                  piVar6 = piVar6 + 1;
                } while (lVar21 != 0);
                return puVar40;
              }
            }
            goto LAB_109d12c30;
          }
        }
        else {
          if ((int)uVar43 < 6) {
            if (uVar43 == 4) {
              uVar43 = *(uint *)(puVar11 + 0x18);
              uVar38 = (ulong)uVar43;
              if ((int)uVar43 < 4) {
                if ((int)uVar43 < 2) {
                  if (uVar43 == 0) {
                    if ((puVar40[0x24] & 1) == 0) {
                      uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                               *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4);
                    }
                    else {
                      uVar43 = 1;
                      for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar43 = *piVar6 * uVar43;
                      }
                    }
                    if ((puVar11[0x48] & 1) == 0) {
                      uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                               *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                    }
                    else {
                      uVar20 = 1;
                      for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar20 = *piVar6 * uVar20;
                      }
                    }
                    if (uVar43 == uVar20) {
                      if (uVar43 == 0) {
                        return puVar40;
                      }
                      lVar21 = (ulong)uVar43 << 1;
                      puVar7 = *(ushort **)(puVar40 + 0x10);
                      psVar29 = *(short **)(puVar11 + 0x20);
                      do {
                        uVar38 = (ulong)((uint)(float)*puVar7 >> 0x17);
                        *psVar29 = *(short *)(&UNK_10e04070a + uVar38 * 2) +
                                   (short)(((uint)(float)*puVar7 & 0x7fffff) >>
                                          (ulong)((byte)(&UNK_10e040b0a)[uVar38] & 0x1f));
                        lVar21 = lVar21 + -2;
                        puVar7 = puVar7 + 1;
                        psVar29 = psVar29 + 1;
                      } while (lVar21 != 0);
                      return puVar40;
                    }
                  }
                  else {
                    if (uVar43 != 1) {
LAB_109d13094:
                      func_0x000107c31940(&uStack_c0,&UNK_10f5ac487);
                      func_0x000109259240(&pcStack_a8,&uStack_c0,&UNK_10f5a35f2);
                      __ZNSt3__19to_stringEi(&ppppppuStack_d8,uVar38);
                      pppppppuVar2 = (undefined8 *******)ppppppuStack_d8;
                      if (-1 < (char)bStack_c1) {
                        uStack_d0 = (ulong)bStack_c1;
                        pppppppuVar2 = &ppppppuStack_d8;
                      }
                      ppcVar10 = &pcStack_a8;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (ppcVar10,pppppppuVar2,uStack_d0);
                      ppcVar10[1] = (char *)0x0;
                      ppcVar10[2] = (char *)0x0;
                      *ppcVar10 = (char *)0x0;
                      if ((char)bStack_c1 < '\0') {
                        __ZdlPv(ppppppuStack_d8);
                      }
                      if (cStack_91 < '\0') {
                        __ZdlPv(pcStack_a8);
                      }
                      if (uStack_b0._7_1_ < '\0') {
                        __ZdlPv(CONCAT44(uStack_bc,uStack_c0));
                      }
                      plVar9 = (long *)0x10;
                      ___cxa_allocate_exception();
                      __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                                ();
                      *plVar9 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                      ___cxa_throw(plVar9,PTR___ZTISt16invalid_argument_110352248,
                                   PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                      goto LAB_109d134dc;
                    }
                    if ((puVar40[0x24] & 1) == 0) {
                      uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                               *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4);
                    }
                    else {
                      uVar43 = 1;
                      for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar43 = *piVar6 * uVar43;
                      }
                    }
                    if ((puVar11[0x48] & 1) == 0) {
                      uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                               *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                    }
                    else {
                      uVar20 = 1;
                      for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar20 = *piVar6 * uVar20;
                      }
                    }
                    if (uVar43 == uVar20) {
                      if (uVar43 == 0) {
                        return puVar40;
                      }
                      lVar21 = (ulong)uVar43 << 1;
                      puVar7 = *(ushort **)(puVar40 + 0x10);
                      pfVar26 = *(float **)(puVar11 + 0x20);
                      do {
                        *pfVar26 = (float)*puVar7;
                        lVar21 = lVar21 + -2;
                        puVar7 = puVar7 + 1;
                        pfVar26 = pfVar26 + 1;
                      } while (lVar21 != 0);
                      return puVar40;
                    }
                  }
                }
                else if (uVar43 == 2) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    lVar21 = (ulong)uVar43 << 1;
                    puVar7 = *(ushort **)(puVar40 + 0x10);
                    pdVar24 = *(double **)(puVar11 + 0x20);
                    do {
                      *pdVar24 = (double)*puVar7;
                      lVar21 = lVar21 + -2;
                      puVar7 = puVar7 + 1;
                      pdVar24 = pdVar24 + 1;
                    } while (lVar21 != 0);
                    return puVar40;
                  }
                }
                else {
                  if (uVar43 != 3) goto LAB_109d13094;
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    lVar21 = (ulong)uVar43 << 1;
                    puVar25 = *(undefined1 **)(puVar40 + 0x10);
                    puVar34 = *(undefined1 **)(puVar11 + 0x20);
                    do {
                      *puVar34 = *puVar25;
                      lVar21 = lVar21 + -2;
                      puVar25 = puVar25 + 2;
                      puVar34 = puVar34 + 1;
                    } while (lVar21 != 0);
                    return puVar40;
                  }
                }
              }
              else if ((int)uVar43 < 6) {
                if (uVar43 == 4) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  uVar14 = (ulong)uVar43;
                  if ((puVar11[0x48] & 1) == 0) {
LAB_109d12910:
                    iVar18 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    iVar18 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      iVar18 = *piVar6 * iVar18;
                    }
                  }
LAB_109d12924:
                  if ((int)uVar14 == iVar18) {
                    if ((int)uVar14 == 0) {
                      return puVar40;
                    }
                    puVar12 = *(ushort **)(puVar40 + 0x10);
                    puVar5 = *(ushort **)(puVar11 + 0x20);
                    uVar14 = uVar14 << 1;
                    goto code_r0x00010bdbf0a8;
                  }
                }
                else {
                  if (uVar43 != 5) goto LAB_109d13094;
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    lVar21 = (ulong)uVar43 << 1;
                    puVar7 = *(ushort **)(puVar40 + 0x10);
                    puVar16 = *(uint **)(puVar11 + 0x20);
                    do {
                      *puVar16 = (uint)*puVar7;
                      lVar21 = lVar21 + -2;
                      puVar7 = puVar7 + 1;
                      puVar16 = puVar16 + 1;
                    } while (lVar21 != 0);
                    return puVar40;
                  }
                }
              }
              else if (uVar43 == 6) {
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 1;
                  puVar25 = *(undefined1 **)(puVar40 + 0x10);
                  puVar34 = *(undefined1 **)(puVar11 + 0x20);
                  do {
                    *puVar34 = *puVar25;
                    lVar21 = lVar21 + -2;
                    puVar25 = puVar25 + 2;
                    puVar34 = puVar34 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
              else {
                if (uVar43 == 7) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  uVar14 = (ulong)uVar43;
                  if ((puVar11[0x48] & 1) == 0) goto LAB_109d12910;
                  iVar18 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar18 = *piVar6 * iVar18;
                  }
                  goto LAB_109d12924;
                }
                if (uVar43 != 8) goto LAB_109d13094;
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 1;
                  puVar7 = *(ushort **)(puVar40 + 0x10);
                  puVar16 = *(uint **)(puVar11 + 0x20);
                  do {
                    *puVar16 = (uint)*puVar7;
                    lVar21 = lVar21 + -2;
                    puVar7 = puVar7 + 1;
                    puVar16 = puVar16 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
            }
            else {
              if (uVar43 != 5) goto LAB_109d12c48;
              uVar43 = *(uint *)(puVar11 + 0x18);
              uVar38 = (ulong)uVar43;
              if ((int)uVar43 < 4) {
                if ((int)uVar43 < 2) {
                  if (uVar43 == 0) {
                    if ((puVar40[0x24] & 1) == 0) {
                      uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                               *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4);
                    }
                    else {
                      uVar43 = 1;
                      for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar43 = *piVar6 * uVar43;
                      }
                    }
                    if ((puVar11[0x48] & 1) == 0) {
                      uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                               *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                    }
                    else {
                      uVar20 = 1;
                      for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar20 = *piVar6 * uVar20;
                      }
                    }
                    if (uVar43 == uVar20) {
                      if (uVar43 == 0) {
                        return puVar40;
                      }
                      lVar21 = (ulong)uVar43 << 2;
                      puVar30 = *(undefined4 **)(puVar40 + 0x10);
                      psVar29 = *(short **)(puVar11 + 0x20);
                      do {
                        uVar43 = NEON_ucvtf(*puVar30);
                        *psVar29 = *(short *)(&UNK_10e04070a + (ulong)(uVar43 >> 0x17) * 2) +
                                   (short)((uVar43 & 0x7fffff) >>
                                          (ulong)((byte)(&UNK_10e040b0a)[uVar43 >> 0x17] & 0x1f));
                        lVar21 = lVar21 + -4;
                        puVar30 = puVar30 + 1;
                        psVar29 = psVar29 + 1;
                      } while (lVar21 != 0);
                      return puVar40;
                    }
                  }
                  else {
                    if (uVar43 != 1) {
LAB_109d1324c:
                      func_0x000107c31940(&uStack_c0,&UNK_10f5ac487);
                      func_0x000109259240(&pcStack_a8,&uStack_c0,&UNK_10f5a35f2);
                      __ZNSt3__19to_stringEi(&ppppppuStack_d8,uVar38);
                      pppppppuVar2 = (undefined8 *******)ppppppuStack_d8;
                      if (-1 < (char)bStack_c1) {
                        uStack_d0 = (ulong)bStack_c1;
                        pppppppuVar2 = &ppppppuStack_d8;
                      }
                      ppcVar10 = &pcStack_a8;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (ppcVar10,pppppppuVar2,uStack_d0);
                      ppcVar10[1] = (char *)0x0;
                      ppcVar10[2] = (char *)0x0;
                      *ppcVar10 = (char *)0x0;
                      if ((char)bStack_c1 < '\0') {
                        __ZdlPv(ppppppuStack_d8);
                      }
                      if (cStack_91 < '\0') {
                        __ZdlPv(pcStack_a8);
                      }
                      if (uStack_b0._7_1_ < '\0') {
                        __ZdlPv(CONCAT44(uStack_bc,uStack_c0));
                      }
                      plVar9 = (long *)0x10;
                      ___cxa_allocate_exception();
                      __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                                ();
                      *plVar9 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                      ___cxa_throw(plVar9,PTR___ZTISt16invalid_argument_110352248,
                                   PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                      goto LAB_109d134dc;
                    }
                    if ((puVar40[0x24] & 1) == 0) {
                      uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                               *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4);
                    }
                    else {
                      uVar43 = 1;
                      for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar43 = *piVar6 * uVar43;
                      }
                    }
                    if ((puVar11[0x48] & 1) == 0) {
                      uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                               *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                    }
                    else {
                      uVar20 = 1;
                      for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar20 = *piVar6 * uVar20;
                      }
                    }
                    if (uVar43 == uVar20) {
                      if (uVar43 == 0) {
                        return puVar40;
                      }
                      lVar21 = (ulong)uVar43 << 2;
                      puVar30 = *(undefined4 **)(puVar40 + 0x10);
                      puVar33 = *(undefined4 **)(puVar11 + 0x20);
                      do {
                        uVar44 = NEON_ucvtf(*puVar30);
                        *puVar33 = uVar44;
                        lVar21 = lVar21 + -4;
                        puVar30 = puVar30 + 1;
                        puVar33 = puVar33 + 1;
                      } while (lVar21 != 0);
                      return puVar40;
                    }
                  }
                }
                else if (uVar43 == 2) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    lVar21 = (ulong)uVar43 << 2;
                    puVar16 = *(uint **)(puVar40 + 0x10);
                    pdVar24 = *(double **)(puVar11 + 0x20);
                    do {
                      *pdVar24 = (double)*puVar16;
                      lVar21 = lVar21 + -4;
                      puVar16 = puVar16 + 1;
                      pdVar24 = pdVar24 + 1;
                    } while (lVar21 != 0);
                    return puVar40;
                  }
                }
                else {
                  if (uVar43 != 3) goto LAB_109d1324c;
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    lVar21 = (ulong)uVar43 << 2;
                    puVar30 = *(undefined4 **)(puVar40 + 0x10);
                    puVar25 = *(undefined1 **)(puVar11 + 0x20);
                    do {
                      *puVar25 = (char)*puVar30;
                      lVar21 = lVar21 + -4;
                      puVar30 = puVar30 + 1;
                      puVar25 = puVar25 + 1;
                    } while (lVar21 != 0);
                    return puVar40;
                  }
                }
              }
              else if ((int)uVar43 < 6) {
                if (uVar43 == 4) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    lVar21 = (ulong)uVar43 << 2;
                    puVar30 = *(undefined4 **)(puVar40 + 0x10);
                    puVar35 = *(undefined2 **)(puVar11 + 0x20);
                    do {
                      *puVar35 = (short)*puVar30;
                      lVar21 = lVar21 + -4;
                      puVar30 = puVar30 + 1;
                      puVar35 = puVar35 + 1;
                    } while (lVar21 != 0);
                    return puVar40;
                  }
                }
                else {
                  if (uVar43 != 5) goto LAB_109d1324c;
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  uVar14 = (ulong)uVar43;
                  if ((puVar11[0x48] & 1) == 0) {
LAB_109d12be0:
                    iVar18 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    iVar18 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      iVar18 = *piVar6 * iVar18;
                    }
                  }
LAB_109d12bf4:
                  if ((int)uVar14 == iVar18) {
                    if ((int)uVar14 == 0) {
                      return puVar40;
                    }
                    puVar12 = *(ushort **)(puVar40 + 0x10);
                    puVar5 = *(ushort **)(puVar11 + 0x20);
                    uVar14 = uVar14 << 2;
                    goto code_r0x00010bdbf0a8;
                  }
                }
              }
              else if (uVar43 == 6) {
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 2;
                  puVar30 = *(undefined4 **)(puVar40 + 0x10);
                  puVar25 = *(undefined1 **)(puVar11 + 0x20);
                  do {
                    *puVar25 = (char)*puVar30;
                    lVar21 = lVar21 + -4;
                    puVar30 = puVar30 + 1;
                    puVar25 = puVar25 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
              else {
                if (uVar43 != 7) {
                  if (uVar43 != 8) goto LAB_109d1324c;
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  uVar14 = (ulong)uVar43;
                  if ((puVar11[0x48] & 1) == 0) goto LAB_109d12be0;
                  iVar18 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar18 = *piVar6 * iVar18;
                  }
                  goto LAB_109d12bf4;
                }
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 2;
                  puVar30 = *(undefined4 **)(puVar40 + 0x10);
                  puVar35 = *(undefined2 **)(puVar11 + 0x20);
                  do {
                    *puVar35 = (short)*puVar30;
                    lVar21 = lVar21 + -4;
                    puVar30 = puVar30 + 1;
                    puVar35 = puVar35 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
            }
          }
          else if (uVar43 == 6) {
            uVar43 = *(uint *)(puVar11 + 0x18);
            uVar38 = (ulong)uVar43;
            if ((int)uVar43 < 4) {
              if ((int)uVar43 < 2) {
                if (uVar43 == 0) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  uVar14 = (ulong)uVar43;
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    pcVar28 = *(char **)(puVar40 + 0x10);
                    psVar29 = *(short **)(puVar11 + 0x20);
                    do {
                      uVar38 = (ulong)((uint)(float)(int)*pcVar28 >> 0x17);
                      *psVar29 = *(short *)(&UNK_10e04070a + uVar38 * 2) +
                                 (short)(((uint)(float)(int)*pcVar28 & 0x7fffff) >>
                                        (ulong)((byte)(&UNK_10e040b0a)[uVar38] & 0x1f));
                      uVar14 = uVar14 - 1;
                      pcVar28 = pcVar28 + 1;
                      psVar29 = psVar29 + 1;
                    } while (uVar14 != 0);
                    return puVar40;
                  }
                }
                else {
                  if (uVar43 != 1) goto LAB_109d13170;
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  uVar14 = (ulong)uVar43;
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    pcVar28 = *(char **)(puVar40 + 0x10);
                    pfVar26 = *(float **)(puVar11 + 0x20);
                    do {
                      *pfVar26 = (float)(int)*pcVar28;
                      uVar14 = uVar14 - 1;
                      pcVar28 = pcVar28 + 1;
                      pfVar26 = pfVar26 + 1;
                    } while (uVar14 != 0);
                    return puVar40;
                  }
                }
              }
              else {
                if (uVar43 != 2) {
                  if (uVar43 == 3) {
                    if ((puVar40[0x24] & 1) == 0) {
                      uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) *
                               *(int *)(puVar40 + 6) * *(int *)(puVar40 + 4);
                    }
                    else {
                      uVar43 = 1;
                      for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar43 = *piVar6 * uVar43;
                      }
                    }
                    uVar14 = (ulong)uVar43;
                    if ((puVar11[0x48] & 1) == 0) goto LAB_109d11e18;
                    iVar18 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      iVar18 = *piVar6 * iVar18;
                    }
                    goto LAB_109d11e2c;
                  }
LAB_109d13170:
                  func_0x000107c31940(&uStack_c0,&UNK_10f5ac487);
                  func_0x000109259240(&pcStack_a8,&uStack_c0,&UNK_10f5a35f2);
                  __ZNSt3__19to_stringEi(&ppppppuStack_d8,uVar38);
                  pppppppuVar2 = (undefined8 *******)ppppppuStack_d8;
                  if (-1 < (char)bStack_c1) {
                    uStack_d0 = (ulong)bStack_c1;
                    pppppppuVar2 = &ppppppuStack_d8;
                  }
                  ppcVar10 = &pcStack_a8;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppcVar10,pppppppuVar2,uStack_d0);
                  ppcVar10[1] = (char *)0x0;
                  ppcVar10[2] = (char *)0x0;
                  *ppcVar10 = (char *)0x0;
                  if ((char)bStack_c1 < '\0') {
                    __ZdlPv(ppppppuStack_d8);
                  }
                  if (cStack_91 < '\0') {
                    __ZdlPv(pcStack_a8);
                  }
                  if (uStack_b0._7_1_ < '\0') {
                    __ZdlPv(CONCAT44(uStack_bc,uStack_c0));
                  }
                  plVar9 = (long *)0x10;
                  ___cxa_allocate_exception();
                  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            ();
                  *plVar9 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                  ___cxa_throw(plVar9,PTR___ZTISt16invalid_argument_110352248,
                               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                  goto LAB_109d134dc;
                }
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                uVar14 = (ulong)uVar43;
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  pcVar28 = *(char **)(puVar40 + 0x10);
                  pdVar24 = *(double **)(puVar11 + 0x20);
                  do {
                    *pdVar24 = (double)(int)*pcVar28;
                    uVar14 = uVar14 - 1;
                    pcVar28 = pcVar28 + 1;
                    pdVar24 = pdVar24 + 1;
                  } while (uVar14 != 0);
                  return puVar40;
                }
              }
            }
            else if ((int)uVar43 < 6) {
              if (uVar43 == 4) {
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                uVar14 = (ulong)uVar43;
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  pcVar28 = *(char **)(puVar40 + 0x10);
                  psVar29 = *(short **)(puVar11 + 0x20);
                  do {
                    *psVar29 = (short)*pcVar28;
                    uVar14 = uVar14 - 1;
                    pcVar28 = pcVar28 + 1;
                    psVar29 = psVar29 + 1;
                  } while (uVar14 != 0);
                  return puVar40;
                }
              }
              else {
                if (uVar43 != 5) goto LAB_109d13170;
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                uVar14 = (ulong)uVar43;
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  pcVar28 = *(char **)(puVar40 + 0x10);
                  piVar6 = *(int **)(puVar11 + 0x20);
                  do {
                    *piVar6 = (int)*pcVar28;
                    uVar14 = uVar14 - 1;
                    pcVar28 = pcVar28 + 1;
                    piVar6 = piVar6 + 1;
                  } while (uVar14 != 0);
                  return puVar40;
                }
              }
            }
            else if (uVar43 == 6) {
              if ((puVar40[0x24] & 1) == 0) {
                uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                         *(int *)(puVar40 + 4);
              }
              else {
                uVar43 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar43 = *piVar6 * uVar43;
                }
              }
              uVar14 = (ulong)uVar43;
              if ((puVar11[0x48] & 1) == 0) {
LAB_109d11e18:
                iVar18 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                iVar18 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar18 = *piVar6 * iVar18;
                }
              }
LAB_109d11e2c:
              if ((int)uVar14 == iVar18) {
                if ((int)uVar14 == 0) {
                  return puVar40;
                }
                puVar12 = *(ushort **)(puVar40 + 0x10);
                puVar5 = *(ushort **)(puVar11 + 0x20);
                goto code_r0x00010bdbf0a8;
              }
            }
            else if (uVar43 == 7) {
              if ((puVar40[0x24] & 1) == 0) {
                uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                         *(int *)(puVar40 + 4);
              }
              else {
                uVar43 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar43 = *piVar6 * uVar43;
                }
              }
              uVar14 = (ulong)uVar43;
              if ((puVar11[0x48] & 1) == 0) {
                uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                uVar20 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar20 = *piVar6 * uVar20;
                }
              }
              if (uVar43 == uVar20) {
                if (uVar43 == 0) {
                  return puVar40;
                }
                pcVar28 = *(char **)(puVar40 + 0x10);
                psVar29 = *(short **)(puVar11 + 0x20);
                do {
                  *psVar29 = (short)*pcVar28;
                  uVar14 = uVar14 - 1;
                  pcVar28 = pcVar28 + 1;
                  psVar29 = psVar29 + 1;
                } while (uVar14 != 0);
                return puVar40;
              }
            }
            else {
              if (uVar43 != 8) goto LAB_109d13170;
              if ((puVar40[0x24] & 1) == 0) {
                uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                         *(int *)(puVar40 + 4);
              }
              else {
                uVar43 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar43 = *piVar6 * uVar43;
                }
              }
              uVar14 = (ulong)uVar43;
              if ((puVar11[0x48] & 1) == 0) {
                uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                uVar20 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar20 = *piVar6 * uVar20;
                }
              }
              if (uVar43 == uVar20) {
                if (uVar43 == 0) {
                  return puVar40;
                }
                pcVar28 = *(char **)(puVar40 + 0x10);
                piVar6 = *(int **)(puVar11 + 0x20);
                do {
                  *piVar6 = (int)*pcVar28;
                  uVar14 = uVar14 - 1;
                  pcVar28 = pcVar28 + 1;
                  piVar6 = piVar6 + 1;
                } while (uVar14 != 0);
                return puVar40;
              }
            }
          }
          else if (uVar43 == 7) {
            uVar43 = *(uint *)(puVar11 + 0x18);
            uVar38 = (ulong)uVar43;
            if ((int)uVar43 < 4) {
              if ((int)uVar43 < 2) {
                if (uVar43 == 0) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    lVar21 = (ulong)uVar43 << 1;
                    psVar29 = *(short **)(puVar40 + 0x10);
                    psVar32 = *(short **)(puVar11 + 0x20);
                    do {
                      uVar38 = (ulong)((uint)(float)(int)*psVar29 >> 0x17);
                      *psVar32 = *(short *)(&UNK_10e04070a + uVar38 * 2) +
                                 (short)(((uint)(float)(int)*psVar29 & 0x7fffff) >>
                                        (ulong)((byte)(&UNK_10e040b0a)[uVar38] & 0x1f));
                      lVar21 = lVar21 + -2;
                      psVar29 = psVar29 + 1;
                      psVar32 = psVar32 + 1;
                    } while (lVar21 != 0);
                    return puVar40;
                  }
                }
                else {
                  if (uVar43 != 1) {
LAB_109d13328:
                    func_0x000107c31940(&uStack_c0,&UNK_10f5ac487);
                    func_0x000109259240(&pcStack_a8,&uStack_c0,&UNK_10f5a35f2);
                    __ZNSt3__19to_stringEi(&ppppppuStack_d8,uVar38);
                    pppppppuVar2 = (undefined8 *******)ppppppuStack_d8;
                    if (-1 < (char)bStack_c1) {
                      uStack_d0 = (ulong)bStack_c1;
                      pppppppuVar2 = &ppppppuStack_d8;
                    }
                    ppcVar10 = &pcStack_a8;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (ppcVar10,pppppppuVar2,uStack_d0);
                    ppcVar10[1] = (char *)0x0;
                    ppcVar10[2] = (char *)0x0;
                    *ppcVar10 = (char *)0x0;
                    if ((char)bStack_c1 < '\0') {
                      __ZdlPv(ppppppuStack_d8);
                    }
                    if (cStack_91 < '\0') {
                      __ZdlPv(pcStack_a8);
                    }
                    if (uStack_b0._7_1_ < '\0') {
                      __ZdlPv(CONCAT44(uStack_bc,uStack_c0));
                    }
                    plVar9 = (long *)0x10;
                    ___cxa_allocate_exception();
                    __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              ();
                    *plVar9 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                    ___cxa_throw(plVar9,PTR___ZTISt16invalid_argument_110352248,
                                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    goto LAB_109d134dc;
                  }
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    lVar21 = (ulong)uVar43 << 1;
                    psVar29 = *(short **)(puVar40 + 0x10);
                    pfVar26 = *(float **)(puVar11 + 0x20);
                    do {
                      *pfVar26 = (float)(int)*psVar29;
                      lVar21 = lVar21 + -2;
                      psVar29 = psVar29 + 1;
                      pfVar26 = pfVar26 + 1;
                    } while (lVar21 != 0);
                    return puVar40;
                  }
                }
              }
              else if (uVar43 == 2) {
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 1;
                  psVar29 = *(short **)(puVar40 + 0x10);
                  pdVar24 = *(double **)(puVar11 + 0x20);
                  do {
                    *pdVar24 = (double)(int)*psVar29;
                    lVar21 = lVar21 + -2;
                    psVar29 = psVar29 + 1;
                    pdVar24 = pdVar24 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
              else {
                if (uVar43 != 3) goto LAB_109d13328;
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 1;
                  puVar25 = *(undefined1 **)(puVar40 + 0x10);
                  puVar34 = *(undefined1 **)(puVar11 + 0x20);
                  do {
                    *puVar34 = *puVar25;
                    lVar21 = lVar21 + -2;
                    puVar25 = puVar25 + 2;
                    puVar34 = puVar34 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
            }
            else if ((int)uVar43 < 6) {
              if (uVar43 == 4) {
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                uVar14 = (ulong)uVar43;
                if ((puVar11[0x48] & 1) == 0) goto LAB_109d12910;
                iVar18 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar18 = *piVar6 * iVar18;
                }
                goto LAB_109d12924;
              }
              if (uVar43 != 5) goto LAB_109d13328;
              if ((puVar40[0x24] & 1) == 0) {
                uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                         *(int *)(puVar40 + 4);
              }
              else {
                uVar43 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar43 = *piVar6 * uVar43;
                }
              }
              if ((puVar11[0x48] & 1) == 0) {
                uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                uVar20 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar20 = *piVar6 * uVar20;
                }
              }
              if (uVar43 == uVar20) {
                if (uVar43 == 0) {
                  return puVar40;
                }
                lVar21 = (ulong)uVar43 << 1;
                psVar29 = *(short **)(puVar40 + 0x10);
                piVar6 = *(int **)(puVar11 + 0x20);
                do {
                  *piVar6 = (int)*psVar29;
                  lVar21 = lVar21 + -2;
                  psVar29 = psVar29 + 1;
                  piVar6 = piVar6 + 1;
                } while (lVar21 != 0);
                return puVar40;
              }
            }
            else if (uVar43 == 6) {
              if ((puVar40[0x24] & 1) == 0) {
                uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                         *(int *)(puVar40 + 4);
              }
              else {
                uVar43 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar43 = *piVar6 * uVar43;
                }
              }
              if ((puVar11[0x48] & 1) == 0) {
                uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                uVar20 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar20 = *piVar6 * uVar20;
                }
              }
              if (uVar43 == uVar20) {
                if (uVar43 == 0) {
                  return puVar40;
                }
                lVar21 = (ulong)uVar43 << 1;
                puVar25 = *(undefined1 **)(puVar40 + 0x10);
                puVar34 = *(undefined1 **)(puVar11 + 0x20);
                do {
                  *puVar34 = *puVar25;
                  lVar21 = lVar21 + -2;
                  puVar25 = puVar25 + 2;
                  puVar34 = puVar34 + 1;
                } while (lVar21 != 0);
                return puVar40;
              }
            }
            else {
              if (uVar43 == 7) {
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                uVar14 = (ulong)uVar43;
                if ((puVar11[0x48] & 1) == 0) goto LAB_109d12910;
                iVar18 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar18 = *piVar6 * iVar18;
                }
                goto LAB_109d12924;
              }
              if (uVar43 != 8) goto LAB_109d13328;
              if ((puVar40[0x24] & 1) == 0) {
                uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                         *(int *)(puVar40 + 4);
              }
              else {
                uVar43 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar43 = *piVar6 * uVar43;
                }
              }
              if ((puVar11[0x48] & 1) == 0) {
                uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                uVar20 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar20 = *piVar6 * uVar20;
                }
              }
              if (uVar43 == uVar20) {
                if (uVar43 == 0) {
                  return puVar40;
                }
                lVar21 = (ulong)uVar43 << 1;
                psVar29 = *(short **)(puVar40 + 0x10);
                piVar6 = *(int **)(puVar11 + 0x20);
                do {
                  *piVar6 = (int)*psVar29;
                  lVar21 = lVar21 + -2;
                  psVar29 = psVar29 + 1;
                  piVar6 = piVar6 + 1;
                } while (lVar21 != 0);
                return puVar40;
              }
            }
          }
          else {
            if (uVar43 != 8) goto LAB_109d12c48;
            uVar43 = *(uint *)(puVar11 + 0x18);
            uVar38 = (ulong)uVar43;
            if ((int)uVar43 < 4) {
              if ((int)uVar43 < 2) {
                if (uVar43 == 0) {
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    lVar21 = (ulong)uVar43 << 2;
                    piVar6 = *(int **)(puVar40 + 0x10);
                    psVar29 = *(short **)(puVar11 + 0x20);
                    do {
                      uVar38 = (ulong)((uint)(float)*piVar6 >> 0x17);
                      *psVar29 = *(short *)(&UNK_10e04070a + uVar38 * 2) +
                                 (short)(((uint)(float)*piVar6 & 0x7fffff) >>
                                        (ulong)((byte)(&UNK_10e040b0a)[uVar38] & 0x1f));
                      lVar21 = lVar21 + -4;
                      piVar6 = piVar6 + 1;
                      psVar29 = psVar29 + 1;
                    } while (lVar21 != 0);
                    return puVar40;
                  }
                }
                else {
                  if (uVar43 != 1) {
LAB_109d13404:
                    func_0x000107c31940(&uStack_c0,&UNK_10f5ac487);
                    func_0x000109259240(&pcStack_a8,&uStack_c0,&UNK_10f5a35f2);
                    __ZNSt3__19to_stringEi(&ppppppuStack_d8,uVar38);
                    pppppppuVar2 = (undefined8 *******)ppppppuStack_d8;
                    if (-1 < (char)bStack_c1) {
                      uStack_d0 = (ulong)bStack_c1;
                      pppppppuVar2 = &ppppppuStack_d8;
                    }
                    ppcVar10 = &pcStack_a8;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (ppcVar10,pppppppuVar2,uStack_d0);
                    ppcVar10[1] = (char *)0x0;
                    ppcVar10[2] = (char *)0x0;
                    *ppcVar10 = (char *)0x0;
                    if ((char)bStack_c1 < '\0') {
                      __ZdlPv(ppppppuStack_d8);
                    }
                    if (cStack_91 < '\0') {
                      __ZdlPv(pcStack_a8);
                    }
                    if (uStack_b0._7_1_ < '\0') {
                      __ZdlPv(CONCAT44(uStack_bc,uStack_c0));
                    }
                    plVar9 = (long *)0x10;
                    ___cxa_allocate_exception();
                    __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              ();
                    *plVar9 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                    ___cxa_throw(plVar9,PTR___ZTISt16invalid_argument_110352248,
                                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    goto LAB_109d134dc;
                  }
                  if ((puVar40[0x24] & 1) == 0) {
                    uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6)
                             * *(int *)(puVar40 + 4);
                  }
                  else {
                    uVar43 = 1;
                    for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar43 = *piVar6 * uVar43;
                    }
                  }
                  if ((puVar11[0x48] & 1) == 0) {
                    uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                             *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                  }
                  else {
                    uVar20 = 1;
                    for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar20 = *piVar6 * uVar20;
                    }
                  }
                  if (uVar43 == uVar20) {
                    if (uVar43 == 0) {
                      return puVar40;
                    }
                    lVar21 = (ulong)uVar43 << 2;
                    piVar6 = *(int **)(puVar40 + 0x10);
                    pfVar26 = *(float **)(puVar11 + 0x20);
                    do {
                      *pfVar26 = (float)*piVar6;
                      lVar21 = lVar21 + -4;
                      piVar6 = piVar6 + 1;
                      pfVar26 = pfVar26 + 1;
                    } while (lVar21 != 0);
                    return puVar40;
                  }
                }
              }
              else if (uVar43 == 2) {
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 2;
                  piVar6 = *(int **)(puVar40 + 0x10);
                  pdVar24 = *(double **)(puVar11 + 0x20);
                  do {
                    *pdVar24 = (double)*piVar6;
                    lVar21 = lVar21 + -4;
                    piVar6 = piVar6 + 1;
                    pdVar24 = pdVar24 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
              else {
                if (uVar43 != 3) goto LAB_109d13404;
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                if ((puVar11[0x48] & 1) == 0) {
                  uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                           *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
                }
                else {
                  uVar20 = 1;
                  for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar20 = *piVar6 * uVar20;
                  }
                }
                if (uVar43 == uVar20) {
                  if (uVar43 == 0) {
                    return puVar40;
                  }
                  lVar21 = (ulong)uVar43 << 2;
                  puVar30 = *(undefined4 **)(puVar40 + 0x10);
                  puVar25 = *(undefined1 **)(puVar11 + 0x20);
                  do {
                    *puVar25 = (char)*puVar30;
                    lVar21 = lVar21 + -4;
                    puVar30 = puVar30 + 1;
                    puVar25 = puVar25 + 1;
                  } while (lVar21 != 0);
                  return puVar40;
                }
              }
            }
            else if ((int)uVar43 < 6) {
              if (uVar43 != 4) {
                if (uVar43 != 5) goto LAB_109d13404;
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                uVar14 = (ulong)uVar43;
                if ((puVar11[0x48] & 1) == 0) goto LAB_109d12be0;
                iVar18 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar18 = *piVar6 * iVar18;
                }
                goto LAB_109d12bf4;
              }
              if ((puVar40[0x24] & 1) == 0) {
                uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                         *(int *)(puVar40 + 4);
              }
              else {
                uVar43 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar43 = *piVar6 * uVar43;
                }
              }
              if ((puVar11[0x48] & 1) == 0) {
                uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                uVar20 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar20 = *piVar6 * uVar20;
                }
              }
              if (uVar43 == uVar20) {
                if (uVar43 == 0) {
                  return puVar40;
                }
                lVar21 = (ulong)uVar43 << 2;
                puVar30 = *(undefined4 **)(puVar40 + 0x10);
                puVar35 = *(undefined2 **)(puVar11 + 0x20);
                do {
                  *puVar35 = (short)*puVar30;
                  lVar21 = lVar21 + -4;
                  puVar30 = puVar30 + 1;
                  puVar35 = puVar35 + 1;
                } while (lVar21 != 0);
                return puVar40;
              }
            }
            else if (uVar43 == 6) {
              if ((puVar40[0x24] & 1) == 0) {
                uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                         *(int *)(puVar40 + 4);
              }
              else {
                uVar43 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar43 = *piVar6 * uVar43;
                }
              }
              if ((puVar11[0x48] & 1) == 0) {
                uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                uVar20 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar20 = *piVar6 * uVar20;
                }
              }
              if (uVar43 == uVar20) {
                if (uVar43 == 0) {
                  return puVar40;
                }
                lVar21 = (ulong)uVar43 << 2;
                puVar30 = *(undefined4 **)(puVar40 + 0x10);
                puVar25 = *(undefined1 **)(puVar11 + 0x20);
                do {
                  *puVar25 = (char)*puVar30;
                  lVar21 = lVar21 + -4;
                  puVar30 = puVar30 + 1;
                  puVar25 = puVar25 + 1;
                } while (lVar21 != 0);
                return puVar40;
              }
            }
            else {
              if (uVar43 != 7) {
                if (uVar43 != 8) goto LAB_109d13404;
                if ((puVar40[0x24] & 1) == 0) {
                  uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                           *(int *)(puVar40 + 4);
                }
                else {
                  uVar43 = 1;
                  for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar43 = *piVar6 * uVar43;
                  }
                }
                uVar14 = (ulong)uVar43;
                if ((puVar11[0x48] & 1) == 0) goto LAB_109d12be0;
                iVar18 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar18 = *piVar6 * iVar18;
                }
                goto LAB_109d12bf4;
              }
              if ((puVar40[0x24] & 1) == 0) {
                uVar43 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                         *(int *)(puVar40 + 4);
              }
              else {
                uVar43 = 1;
                for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar43 = *piVar6 * uVar43;
                }
              }
              if ((puVar11[0x48] & 1) == 0) {
                uVar20 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) *
                         *(int *)(puVar11 + 0xc) * *(int *)(puVar11 + 8);
              }
              else {
                uVar20 = 1;
                for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar20 = *piVar6 * uVar20;
                }
              }
              if (uVar43 == uVar20) {
                if (uVar43 == 0) {
                  return puVar40;
                }
                lVar21 = (ulong)uVar43 << 2;
                puVar30 = *(undefined4 **)(puVar40 + 0x10);
                puVar35 = *(undefined2 **)(puVar11 + 0x20);
                do {
                  *puVar35 = (short)*puVar30;
                  lVar21 = lVar21 + -4;
                  puVar30 = puVar30 + 1;
                  puVar35 = puVar35 + 1;
                } while (lVar21 != 0);
                return puVar40;
              }
            }
          }
LAB_109d12c30:
          func_0x00010952d0c4(&UNK_10f5aa38f,&UNK_10f5aa38f,&UNK_10f5ac492);
        }
LAB_109d12c48:
        func_0x000107c31940(&uStack_c0,&UNK_10f5ac487);
        func_0x000109259240(&pcStack_a8,&uStack_c0,&UNK_10f5a35f2);
        __ZNSt3__19to_stringEi(&ppppppuStack_d8,uVar38);
        pppppppuVar2 = (undefined8 *******)ppppppuStack_d8;
        if (-1 < (char)bStack_c1) {
          uStack_d0 = (ulong)bStack_c1;
          pppppppuVar2 = &ppppppuStack_d8;
        }
        ppcVar10 = &pcStack_a8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppcVar10,pppppppuVar2,uStack_d0);
        ppcVar10[1] = (char *)0x0;
        ppcVar10[2] = (char *)0x0;
        *ppcVar10 = (char *)0x0;
        if ((char)bStack_c1 < '\0') {
          __ZdlPv(ppppppuStack_d8);
        }
        if (cStack_91 < '\0') {
          __ZdlPv(pcStack_a8);
        }
        if (uStack_b0._7_1_ < '\0') {
          __ZdlPv(CONCAT44(uStack_bc,uStack_c0));
        }
        plVar9 = (long *)0x10;
        ___cxa_allocate_exception();
        __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
        *plVar9 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
        ___cxa_throw(plVar9,PTR___ZTISt16invalid_argument_110352248,
                     PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
LAB_109d134dc:
                    /* WARNING: Does not return */
        pcVar42 = (code *)SoftwareBreakpoint(1,0x109d134e0);
        (*pcVar42)();
      }
      goto LAB_109d0f178;
    }
    if (puVar11[0x48] == '\x01') {
      iVar18 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
               *(int *)(puVar40 + 4);
      goto LAB_109d0eda0;
    }
    unaff_x22 = (uint *)(puVar40 + 4);
    if ((((*unaff_x22 != *(uint *)(puVar11 + 8)) ||
         (*(uint *)(puVar40 + 6) != *(uint *)(puVar11 + 0xc))) ||
        (*(uint *)(puVar40 + 8) != *(uint *)(puVar11 + 0x10))) ||
       (*(int *)(puVar40 + 10) != *(int *)(puVar11 + 0x14))) goto LAB_109d0f15c;
    iVar18 = *(int *)(puVar40 + 0xe);
    iVar19 = *(int *)(puVar11 + 0x1c);
    if (iVar18 == iVar19) goto LAB_109d0eeac;
    cStack_91 = iVar18 == 1 && iVar19 == 0;
    if (((bool)cStack_91) || (iVar18 == 0 && iVar19 == 1)) {
      lStack_a0 = (ulong)*(uint *)(puVar40 + 6) * (ulong)*unaff_x22 * (ulong)*(uint *)(puVar40 + 8);
      uStack_b0 = &lStack_a0;
      pcStack_a8 = &cStack_91;
      puStack_b8 = unaff_x22;
      if ((uVar43 != uVar20) &&
         (((5 < uVar43 - 3 || (5 < uVar20 - 3)) ||
          (*(int *)(&UNK_10e040d58 + (ulong)(uVar43 - 3) * 4) !=
           *(int *)(&UNK_10e040d58 + (ulong)(uVar20 - 3) * 4))))) {
        FUN_109d0f2ac();
        uVar43 = *(uint *)(puVar11 + 0x18);
        FUN_109d0f2ac();
        if (uVar43 < (uint)uVar38) {
          uStack_c0 = *(undefined4 *)(puVar11 + 0x18);
          uStack_bc = *(undefined4 *)(puVar40 + 0xe);
          if (puVar13 == (undefined *)0x0) {
            FUN_109d0eb9c(auStack_110,unaff_x22,&uStack_c0);
          }
          else {
            FUN_109cdb604(puVar13,unaff_x22,&uStack_c0);
          }
          FUN_109d0f718(puVar40,auStack_110,*(undefined4 *)(puVar40 + 0xc));
          FUN_109d0f1c8(&puStack_b8,auStack_110,puVar11);
        }
        else {
          uStack_c0 = *(undefined4 *)(puVar40 + 0xc);
          uStack_bc = *(undefined4 *)(puVar11 + 0x1c);
          if (puVar13 == (undefined *)0x0) {
            FUN_109d0eb9c(auStack_110,unaff_x22,&uStack_c0);
          }
          else {
            FUN_109cdb604(puVar13,unaff_x22,&uStack_c0);
          }
          FUN_109d0f1c8(&puStack_b8,puVar40,auStack_110);
          FUN_109d0f718(auStack_110,puVar11,uStack_f8);
        }
        func_0x000105675c90(auStack_110);
        return puVar7;
      }
      if (uVar43 < 9) {
        if (*(int *)(puVar40 + 10) == 0) {
          return puVar5;
        }
        lVar21 = 0;
        uVar14 = 0;
        lVar39 = *(long *)(&UNK_10e040d10 + uVar38 * 8);
        do {
          uVar17 = (ulong)*(uint *)(puVar40 + 6) * (ulong)*(uint *)(puVar40 + 4);
          puVar7 = (ushort *)(*(long *)(puVar40 + 0x10) + lVar21 * lStack_a0);
          uVar38 = (ulong)*(uint *)(puVar40 + 8);
          if (cStack_91 == '\x01') {
            uVar38 = uVar17;
            uVar17 = (ulong)*(uint *)(puVar40 + 8);
          }
          FUN_109d16334(puVar7,*(long *)(puVar11 + 0x20) + lVar21 * lStack_a0,uVar38,uVar17,lVar39);
          uVar14 = uVar14 + 1;
          lVar21 = lVar21 + lVar39;
        } while (uVar14 < *(uint *)(puVar40 + 10));
        return puVar7;
      }
      goto LAB_109d0f13c;
    }
  }
  else {
    if ((uVar43 == uVar20) && (*(int *)(puVar40 + 0xe) == *(int *)(puVar11 + 0x1c))) {
      if ((puVar40[0x24] & 1) == 0) {
        iVar18 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                 *(int *)(puVar40 + 4);
      }
      else {
        iVar18 = 1;
        for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
            piVar6 = piVar6 + 1) {
          iVar18 = *piVar6 * iVar18;
        }
      }
      if ((puVar11[0x48] & 1) == 0) {
        iVar19 = *(int *)(puVar11 + 0x10) * *(int *)(puVar11 + 0x14) * *(int *)(puVar11 + 0xc) *
                 *(int *)(puVar11 + 8);
      }
      else {
        iVar19 = 1;
        for (piVar6 = *(int **)(puVar11 + 0x30); piVar6 != *(int **)(puVar11 + 0x38);
            piVar6 = piVar6 + 1) {
          iVar19 = *piVar6 * iVar19;
        }
      }
      if (iVar18 != iVar19) goto LAB_109d0f120;
      if ((puVar40[0x24] & 1) == 0) {
        iVar18 = *(int *)(puVar40 + 8) * *(int *)(puVar40 + 10) * *(int *)(puVar40 + 6) *
                 *(int *)(puVar40 + 4);
      }
      else {
        iVar18 = 1;
        for (piVar6 = *(int **)(puVar40 + 0x18); piVar6 != *(int **)(puVar40 + 0x1c);
            piVar6 = piVar6 + 1) {
          iVar18 = *piVar6 * iVar18;
        }
      }
      if (uVar43 < 0xf) {
        uVar14 = (ulong)(uint)(*(int *)(&UNK_10e040de8 + uVar38 * 4) * iVar18);
        if (*(int *)(&UNK_10e040de8 + uVar38 * 4) * iVar18 == 0) {
          return puVar5;
        }
        goto code_r0x00010bdbf0a8;
      }
    }
    else {
      func_0x00010952d0c4(&UNK_10f5ac32c,&UNK_10f5ac2e0,&UNK_10f5ac333);
LAB_109d0f120:
      func_0x00010952d0c4(&UNK_10f5ac32c,&UNK_10f5ac2e0,&UNK_10f5ac3a9);
    }
LAB_109d0f13c:
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
LAB_109d0f15c:
    func_0x00010952d0c4(&UNK_10f5ac32c,&UNK_10f5ac2e0,&UNK_10f5ac400);
LAB_109d0f178:
    func_0x00010952d0c4(&UNK_10f5ac32c,&UNK_10f5ac2e0,&UNK_10f5ac3d1);
  }
  puVar40 = (ushort *)&UNK_10f5ac32c;
  puVar15 = &UNK_10f5ac2e0;
  puVar8 = &UNK_10f5ac429;
  func_0x00010952d0c4();
  func_0x000105675c90(auStack_110);
  puVar7 = puVar40;
  __Unwind_Resume();
  pcStack_118 = FUN_109d0f1c8;
  ppuStack_120 = &puStack_60;
  if (*(uint *)(puVar15 + 0x18) < 0xf) {
    puVar16 = *(uint **)puVar7;
    puVar40 = puVar7;
    if (puVar16[3] != 0) {
      lVar21 = 0;
      uVar38 = 0;
      lVar39 = *(long *)(&UNK_10e040d70 + (ulong)*(uint *)(puVar15 + 0x18) * 8);
      do {
        uVar17 = (ulong)puVar16[1] * (ulong)*puVar16;
        puVar40 = (ushort *)(*(long *)(puVar15 + 0x20) + lVar21 * **(long **)(puVar7 + 4));
        uVar14 = (ulong)puVar16[2];
        if (**(char **)(puVar7 + 8) == '\x01') {
          uVar14 = uVar17;
          uVar17 = (ulong)puVar16[2];
        }
        FUN_109d16334(puVar40,*(long *)(puVar8 + 0x20) + lVar21 * **(long **)(puVar7 + 4),uVar14,
                      uVar17,lVar39);
        uVar38 = uVar38 + 1;
        puVar16 = *(uint **)puVar7;
        lVar21 = lVar21 + lVar39;
      } while (uVar38 < puVar16[3]);
    }
    return puVar40;
  }
  puVar15 = &UNK_10dfd21d7;
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
  if ((uint)puVar15 < 0xf) {
    return (ushort *)(ulong)*(uint *)(&UNK_10e040de8 + ((ulong)puVar15 & 0xffffffff) * 4);
  }
  ppppuVar41 = &pppuStack_160;
  pcStack_158 = FUN_109d0f2ac;
  piVar6 = (int *)&UNK_10dfd21d7;
  puVar16 = (uint *)&UNK_10f5ac4bc;
  puVar15 = &UNK_10f5ac4cb;
  pcVar42 = FUN_109d0f2ec;
  pppuStack_160 = &ppuStack_120;
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
  ppppuVar3 = &pppuStack_160;
  puVar7 = extraout_x8;
  while( true ) {
    puVar5 = puVar7;
    puVar7 = (ushort *)((long)ppppuVar3 + -0x50);
    *(undefined8 *)((long)ppppuVar3 + -0x40) = unaff_x24;
    *(undefined8 *)((long)ppppuVar3 + -0x38) = unaff_x23;
    *(uint **)((long)ppppuVar3 + -0x30) = unaff_x22;
    *(undefined **)((long)ppppuVar3 + -0x28) = puVar13;
    *(undefined **)((long)ppppuVar3 + -0x20) = puVar11;
    *(ushort **)((long)ppppuVar3 + -0x18) = puVar40;
    *(undefined1 *****)((long)ppppuVar3 + -0x10) = ppppuVar41;
    *(code **)((long)ppppuVar3 + -8) = pcVar42;
    ppppuVar41 = (undefined1 ****)((long)ppppuVar3 + -0x10);
    if (*puVar16 < 0xf) {
      uVar43 = piVar6[2] * piVar6[3] * piVar6[1] * *piVar6 *
               *(int *)(&UNK_10e040de8 + (ulong)*puVar16 * 4);
      uVar14 = (ulong)uVar43;
      uVar38 = uVar14;
      __Znam(uVar14);
      _bzero();
      func_0x00010928e964((undefined1 *)((long)ppppuVar3 + -0x50),uVar38);
      if (uVar43 != 0) {
        puVar7 = *(ushort **)((long)ppppuVar3 + -0x50);
        _memmove(puVar7,puVar15,uVar14);
      }
      uVar46 = *(undefined8 *)((long)ppppuVar3 + -0x48);
      uVar45 = *(undefined8 *)((long)ppppuVar3 + -0x50);
      if (*(long *)((long)ppppuVar3 + -0x48) == 0) {
        puVar40 = (ushort *)0x0;
      }
      else {
        plVar9 = (long *)(*(long *)((long)ppppuVar3 + -0x48) + 8);
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar40 = *(ushort **)((long)ppppuVar3 + -0x48);
      }
      *(undefined ***)puVar5 = &PTR_DAT_1108a5c28;
      uVar47 = *(undefined8 *)piVar6;
      *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(piVar6 + 2);
      *(undefined8 *)(puVar5 + 4) = uVar47;
      *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)puVar16;
      *(undefined8 *)(puVar5 + 0x14) = uVar46;
      *(undefined8 *)(puVar5 + 0x10) = uVar45;
      *(undefined1 *)(puVar5 + 0x18) = 0;
      *(undefined1 *)(puVar5 + 0x24) = 0;
      if (puVar40 != (ushort *)0x0) {
        puVar5 = puVar40 + 4;
        do {
          lVar21 = *(long *)puVar5;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar4) {
            *(long *)puVar5 = lVar21 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*(long *)puVar40 + 0x10))(puVar40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(puVar40);
          puVar7 = puVar40;
        }
      }
      return puVar7;
    }
    puVar8 = &UNK_10dfd21d7;
    pcVar42 = FUN_109d0f438;
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
    if ((puVar8[0x48] & 1) != 0) break;
    puVar15 = *(undefined **)(puVar8 + 0x20);
    piVar6 = (int *)(puVar8 + 8);
    puVar16 = (uint *)(puVar8 + 0x18);
    ppppuVar3 = (undefined1 ****)((long)ppppuVar3 + -0x50);
    puVar7 = extraout_x8_00;
    puVar40 = puVar5;
  }
  uVar44 = *(undefined4 *)(puVar8 + 0x18);
  puVar12 = *(ushort **)(puVar8 + 0x20);
  puVar40 = (ushort *)(puVar8 + 0x30);
  *(undefined **)((long)ppppuVar3 + -0x70) = puVar11;
  *(ushort **)((long)ppppuVar3 + -0x68) = puVar5;
  *(undefined1 *****)((long)ppppuVar3 + -0x60) = ppppuVar41;
  *(code **)((long)ppppuVar3 + -0x58) = FUN_109d0f438;
  func_0x0001099ae3a4(puVar40,uVar44);
  if ((extraout_x8_00[0x24] & 1) == 0) {
    iVar18 = *(int *)(extraout_x8_00 + 8) * *(int *)(extraout_x8_00 + 10) *
             *(int *)(extraout_x8_00 + 6) * *(int *)(extraout_x8_00 + 4);
  }
  else {
    iVar18 = 1;
    for (piVar6 = *(int **)(extraout_x8_00 + 0x18); piVar6 != *(int **)(extraout_x8_00 + 0x1c);
        piVar6 = piVar6 + 1) {
      iVar18 = *piVar6 * iVar18;
    }
  }
  if (0xe < *(uint *)(extraout_x8_00 + 0xc)) {
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
                    /* WARNING: Does not return */
    pcVar42 = (code *)SoftwareBreakpoint(1,0x109d0f518);
    (*pcVar42)();
  }
  uVar14 = (ulong)(uint)(*(int *)(&UNK_10e040de8 + (ulong)*(uint *)(extraout_x8_00 + 0xc) * 4) *
                        iVar18);
  if (*(int *)(&UNK_10e040de8 + (ulong)*(uint *)(extraout_x8_00 + 0xc) * 4) * iVar18 == 0) {
    return puVar40;
  }
  puVar5 = *(ushort **)(extraout_x8_00 + 0x10);
code_r0x00010bdbf0a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(puVar5,puVar12,uVar14);
  return puVar5;
}



/* Entry: 109d0ecd0; end: 109d0f1c7;  */

ushort * FUN_109d0ecd0(ushort *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 *******pppppppuVar2;
  undefined1 ***pppuVar3;
  bool bVar4;
  ushort *puVar5;
  int *piVar6;
  undefined *puVar7;
  long *plVar8;
  char **ppcVar9;
  ushort *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  uint *puVar14;
  ulong uVar15;
  ushort *extraout_x8;
  ushort *puVar16;
  ushort *extraout_x8_00;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined8 *puVar20;
  float2 *pfVar21;
  double *pdVar22;
  undefined1 *puVar23;
  float *pfVar24;
  byte *pbVar25;
  char *pcVar26;
  short *psVar27;
  undefined4 *puVar28;
  undefined8 *puVar29;
  short *psVar30;
  undefined4 *puVar31;
  undefined1 *puVar32;
  undefined2 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  uint *unaff_x22;
  long lVar36;
  ushort *puVar37;
  undefined8 unaff_x23;
  long lVar38;
  undefined8 unaff_x24;
  undefined1 ***pppuVar39;
  code *pcVar40;
  uint uVar41;
  undefined4 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ushort auStack_c0 [12];
  undefined4 uStack_a8;
  undefined8 ******ppppppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint *puStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  long lStack_50;
  char cStack_41;
  
  puVar37 = auStack_c0;
  puVar10 = *(ushort **)(param_1 + 0x10);
  puVar5 = *(ushort **)(param_2 + 0x20);
  if (puVar10 == puVar5) {
    return puVar5;
  }
  uVar41 = *(uint *)(param_1 + 0xc);
  uVar11 = (ulong)uVar41;
  uVar19 = *(uint *)(param_2 + 0x18);
  bVar4 = uVar41 - 9 < 6;
  if ((!bVar4 && 4 < uVar19 - 9) && (bVar4 || uVar19 - 9 != 5)) {
    if ((param_1[0x24] & 1) != 0) {
      iVar17 = 1;
      for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
          piVar6 = piVar6 + 1) {
        iVar17 = *piVar6 * iVar17;
      }
LAB_109d0eda0:
      if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
        iVar18 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                 *(int *)(param_2 + 8);
      }
      else {
        iVar18 = 1;
        for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
            piVar6 = piVar6 + 1) {
          iVar18 = *piVar6 * iVar18;
        }
      }
      if (iVar17 != iVar18) goto LAB_109d0f120;
      if (*(int *)(param_1 + 0xe) == *(int *)(param_2 + 0x1c)) {
LAB_109d0eeac:
        if ((int)uVar41 < 4) {
          if (1 < (int)uVar41) {
            if (uVar41 == 2) {
              uVar41 = *(uint *)(param_2 + 0x18);
              uVar11 = (ulong)uVar41;
              if ((int)uVar41 < 4) {
                if ((int)uVar41 < 2) {
                  if (uVar41 == 0) {
                    if ((param_1[0x24] & 1) == 0) {
                      uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                               *(int *)(param_1 + 6) * *(int *)(param_1 + 4);
                    }
                    else {
                      uVar41 = 1;
                      for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar41 = *piVar6 * uVar41;
                      }
                    }
                    if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                      uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                               *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                    }
                    else {
                      uVar19 = 1;
                      for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar19 = *piVar6 * uVar19;
                      }
                    }
                    if (uVar41 == uVar19) {
                      if (uVar41 == 0) {
                        return param_1;
                      }
                      lVar38 = (ulong)uVar41 << 3;
                      pdVar22 = *(double **)(param_1 + 0x10);
                      psVar27 = *(short **)(param_2 + 0x20);
                      do {
                        uVar11 = (ulong)((uint)(float)*pdVar22 >> 0x17);
                        *psVar27 = *(short *)(&UNK_10e04070a + uVar11 * 2) +
                                   (short)(((uint)(float)*pdVar22 & 0x7fffff) >>
                                          (ulong)((byte)(&UNK_10e040b0a)[uVar11] & 0x1f));
                        lVar38 = lVar38 + -8;
                        pdVar22 = pdVar22 + 1;
                        psVar27 = psVar27 + 1;
                      } while (lVar38 != 0);
                      return param_1;
                    }
                  }
                  else {
                    if (uVar41 != 1) {
LAB_109d12e00:
                      func_0x000107c31940(&uStack_70,&UNK_10f5ac487);
                      func_0x000109259240(&pcStack_58,&uStack_70,&UNK_10f5a35f2);
                      __ZNSt3__19to_stringEi(&ppppppuStack_88,uVar11);
                      pppppppuVar2 = (undefined8 *******)ppppppuStack_88;
                      if (-1 < (char)bStack_71) {
                        uStack_80 = (ulong)bStack_71;
                        pppppppuVar2 = &ppppppuStack_88;
                      }
                      ppcVar9 = &pcStack_58;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (ppcVar9,pppppppuVar2,uStack_80);
                      ppcVar9[1] = (char *)0x0;
                      ppcVar9[2] = (char *)0x0;
                      *ppcVar9 = (char *)0x0;
                      if ((char)bStack_71 < '\0') {
                        __ZdlPv(ppppppuStack_88);
                      }
                      if (cStack_41 < '\0') {
                        __ZdlPv(pcStack_58);
                      }
                      if (uStack_60._7_1_ < '\0') {
                        __ZdlPv(CONCAT44(uStack_6c,uStack_70));
                      }
                      plVar8 = (long *)0x10;
                      ___cxa_allocate_exception();
                      __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                                ();
                      *plVar8 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                      ___cxa_throw(plVar8,PTR___ZTISt16invalid_argument_110352248,
                                   PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                      goto LAB_109d134dc;
                    }
                    if ((param_1[0x24] & 1) == 0) {
                      uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                               *(int *)(param_1 + 6) * *(int *)(param_1 + 4);
                    }
                    else {
                      uVar41 = 1;
                      for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar41 = *piVar6 * uVar41;
                      }
                    }
                    if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                      uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                               *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                    }
                    else {
                      uVar19 = 1;
                      for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar19 = *piVar6 * uVar19;
                      }
                    }
                    if (uVar41 == uVar19) {
                      if (uVar41 == 0) {
                        return param_1;
                      }
                      lVar38 = (ulong)uVar41 << 3;
                      pdVar22 = *(double **)(param_1 + 0x10);
                      pfVar24 = *(float **)(param_2 + 0x20);
                      do {
                        *pfVar24 = (float)*pdVar22;
                        lVar38 = lVar38 + -8;
                        pdVar22 = pdVar22 + 1;
                        pfVar24 = pfVar24 + 1;
                      } while (lVar38 != 0);
                      return param_1;
                    }
                  }
                }
                else if (uVar41 == 2) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    puVar10 = *(ushort **)(param_1 + 0x10);
                    puVar5 = *(ushort **)(param_2 + 0x20);
                    uVar12 = (ulong)uVar41 << 3;
                    goto code_r0x00010bdbf0a8;
                  }
                }
                else {
                  if (uVar41 != 3) goto LAB_109d12e00;
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    lVar38 = (ulong)uVar41 << 3;
                    pdVar22 = *(double **)(param_1 + 0x10);
                    puVar23 = *(undefined1 **)(param_2 + 0x20);
                    do {
                      *puVar23 = (char)(int)*pdVar22;
                      lVar38 = lVar38 + -8;
                      pdVar22 = pdVar22 + 1;
                      puVar23 = puVar23 + 1;
                    } while (lVar38 != 0);
                    return param_1;
                  }
                }
              }
              else if ((int)uVar41 < 6) {
                if (uVar41 == 4) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    lVar38 = (ulong)uVar41 << 3;
                    pdVar22 = *(double **)(param_1 + 0x10);
                    puVar33 = *(undefined2 **)(param_2 + 0x20);
                    do {
                      *puVar33 = (short)(int)*pdVar22;
                      lVar38 = lVar38 + -8;
                      pdVar22 = pdVar22 + 1;
                      puVar33 = puVar33 + 1;
                    } while (lVar38 != 0);
                    return param_1;
                  }
                }
                else {
                  if (uVar41 != 5) goto LAB_109d12e00;
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    lVar38 = (ulong)uVar41 << 3;
                    pdVar22 = *(double **)(param_1 + 0x10);
                    piVar6 = *(int **)(param_2 + 0x20);
                    do {
                      *piVar6 = (int)*pdVar22;
                      lVar38 = lVar38 + -8;
                      pdVar22 = pdVar22 + 1;
                      piVar6 = piVar6 + 1;
                    } while (lVar38 != 0);
                    return param_1;
                  }
                }
              }
              else if (uVar41 == 6) {
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 3;
                  pdVar22 = *(double **)(param_1 + 0x10);
                  puVar23 = *(undefined1 **)(param_2 + 0x20);
                  do {
                    *puVar23 = (char)(int)*pdVar22;
                    lVar38 = lVar38 + -8;
                    pdVar22 = pdVar22 + 1;
                    puVar23 = puVar23 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
              else if (uVar41 == 7) {
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 3;
                  pdVar22 = *(double **)(param_1 + 0x10);
                  puVar33 = *(undefined2 **)(param_2 + 0x20);
                  do {
                    *puVar33 = (short)(int)*pdVar22;
                    lVar38 = lVar38 + -8;
                    pdVar22 = pdVar22 + 1;
                    puVar33 = puVar33 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
              else {
                if (uVar41 != 8) goto LAB_109d12e00;
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 3;
                  pdVar22 = *(double **)(param_1 + 0x10);
                  piVar6 = *(int **)(param_2 + 0x20);
                  do {
                    *piVar6 = (int)*pdVar22;
                    lVar38 = lVar38 + -8;
                    pdVar22 = pdVar22 + 1;
                    piVar6 = piVar6 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
            }
            else {
              if (uVar41 != 3) goto LAB_109d12c48;
              uVar41 = *(uint *)(param_2 + 0x18);
              uVar11 = (ulong)uVar41;
              if ((int)uVar41 < 4) {
                if ((int)uVar41 < 2) {
                  if (uVar41 == 0) {
                    if ((param_1[0x24] & 1) == 0) {
                      uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                               *(int *)(param_1 + 6) * *(int *)(param_1 + 4);
                    }
                    else {
                      uVar41 = 1;
                      for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar41 = *piVar6 * uVar41;
                      }
                    }
                    uVar12 = (ulong)uVar41;
                    if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                      uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                               *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                    }
                    else {
                      uVar19 = 1;
                      for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar19 = *piVar6 * uVar19;
                      }
                    }
                    if (uVar41 == uVar19) {
                      if (uVar41 == 0) {
                        return param_1;
                      }
                      pbVar25 = *(byte **)(param_1 + 0x10);
                      psVar27 = *(short **)(param_2 + 0x20);
                      do {
                        uVar11 = (ulong)((uint)(float)*pbVar25 >> 0x17);
                        *psVar27 = *(short *)(&UNK_10e04070a + uVar11 * 2) +
                                   (short)(((uint)(float)*pbVar25 & 0x7fffff) >>
                                          (ulong)((byte)(&UNK_10e040b0a)[uVar11] & 0x1f));
                        uVar12 = uVar12 - 1;
                        pbVar25 = pbVar25 + 1;
                        psVar27 = psVar27 + 1;
                      } while (uVar12 != 0);
                      return param_1;
                    }
                  }
                  else {
                    if (uVar41 != 1) goto LAB_109d12fb8;
                    if ((param_1[0x24] & 1) == 0) {
                      uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                               *(int *)(param_1 + 6) * *(int *)(param_1 + 4);
                    }
                    else {
                      uVar41 = 1;
                      for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar41 = *piVar6 * uVar41;
                      }
                    }
                    uVar12 = (ulong)uVar41;
                    if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                      uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                               *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                    }
                    else {
                      uVar19 = 1;
                      for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar19 = *piVar6 * uVar19;
                      }
                    }
                    if (uVar41 == uVar19) {
                      if (uVar41 == 0) {
                        return param_1;
                      }
                      pbVar25 = *(byte **)(param_1 + 0x10);
                      pfVar24 = *(float **)(param_2 + 0x20);
                      do {
                        *pfVar24 = (float)*pbVar25;
                        uVar12 = uVar12 - 1;
                        pbVar25 = pbVar25 + 1;
                        pfVar24 = pfVar24 + 1;
                      } while (uVar12 != 0);
                      return param_1;
                    }
                  }
                }
                else {
                  if (uVar41 != 2) {
                    if (uVar41 == 3) {
                      if ((param_1[0x24] & 1) == 0) {
                        uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                                 *(int *)(param_1 + 6) * *(int *)(param_1 + 4);
                      }
                      else {
                        uVar41 = 1;
                        for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c)
                            ; piVar6 = piVar6 + 1) {
                          uVar41 = *piVar6 * uVar41;
                        }
                      }
                      uVar12 = (ulong)uVar41;
                      if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d11e18;
                      iVar17 = 1;
                      for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                          piVar6 = piVar6 + 1) {
                        iVar17 = *piVar6 * iVar17;
                      }
                      goto LAB_109d11e2c;
                    }
LAB_109d12fb8:
                    func_0x000107c31940(&uStack_70,&UNK_10f5ac487);
                    func_0x000109259240(&pcStack_58,&uStack_70,&UNK_10f5a35f2);
                    __ZNSt3__19to_stringEi(&ppppppuStack_88,uVar11);
                    pppppppuVar2 = (undefined8 *******)ppppppuStack_88;
                    if (-1 < (char)bStack_71) {
                      uStack_80 = (ulong)bStack_71;
                      pppppppuVar2 = &ppppppuStack_88;
                    }
                    ppcVar9 = &pcStack_58;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (ppcVar9,pppppppuVar2,uStack_80);
                    ppcVar9[1] = (char *)0x0;
                    ppcVar9[2] = (char *)0x0;
                    *ppcVar9 = (char *)0x0;
                    if ((char)bStack_71 < '\0') {
                      __ZdlPv(ppppppuStack_88);
                    }
                    if (cStack_41 < '\0') {
                      __ZdlPv(pcStack_58);
                    }
                    if (uStack_60._7_1_ < '\0') {
                      __ZdlPv(CONCAT44(uStack_6c,uStack_70));
                    }
                    plVar8 = (long *)0x10;
                    ___cxa_allocate_exception();
                    __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              ();
                    *plVar8 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                    ___cxa_throw(plVar8,PTR___ZTISt16invalid_argument_110352248,
                                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    goto LAB_109d134dc;
                  }
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  uVar12 = (ulong)uVar41;
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    pbVar25 = *(byte **)(param_1 + 0x10);
                    pdVar22 = *(double **)(param_2 + 0x20);
                    do {
                      *pdVar22 = (double)*pbVar25;
                      uVar12 = uVar12 - 1;
                      pbVar25 = pbVar25 + 1;
                      pdVar22 = pdVar22 + 1;
                    } while (uVar12 != 0);
                    return param_1;
                  }
                }
              }
              else if ((int)uVar41 < 6) {
                if (uVar41 == 4) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  uVar12 = (ulong)uVar41;
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    pbVar25 = *(byte **)(param_1 + 0x10);
                    puVar37 = *(ushort **)(param_2 + 0x20);
                    do {
                      *puVar37 = (ushort)*pbVar25;
                      uVar12 = uVar12 - 1;
                      pbVar25 = pbVar25 + 1;
                      puVar37 = puVar37 + 1;
                    } while (uVar12 != 0);
                    return param_1;
                  }
                }
                else {
                  if (uVar41 != 5) goto LAB_109d12fb8;
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  uVar12 = (ulong)uVar41;
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    pbVar25 = *(byte **)(param_1 + 0x10);
                    puVar14 = *(uint **)(param_2 + 0x20);
                    do {
                      *puVar14 = (uint)*pbVar25;
                      uVar12 = uVar12 - 1;
                      pbVar25 = pbVar25 + 1;
                      puVar14 = puVar14 + 1;
                    } while (uVar12 != 0);
                    return param_1;
                  }
                }
              }
              else {
                if (uVar41 == 6) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  uVar12 = (ulong)uVar41;
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d11e18;
                  iVar17 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar17 = *piVar6 * iVar17;
                  }
                  goto LAB_109d11e2c;
                }
                if (uVar41 == 7) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  uVar12 = (ulong)uVar41;
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    pbVar25 = *(byte **)(param_1 + 0x10);
                    puVar37 = *(ushort **)(param_2 + 0x20);
                    do {
                      *puVar37 = (ushort)*pbVar25;
                      uVar12 = uVar12 - 1;
                      pbVar25 = pbVar25 + 1;
                      puVar37 = puVar37 + 1;
                    } while (uVar12 != 0);
                    return param_1;
                  }
                }
                else {
                  if (uVar41 != 8) goto LAB_109d12fb8;
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  uVar12 = (ulong)uVar41;
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    pbVar25 = *(byte **)(param_1 + 0x10);
                    puVar14 = *(uint **)(param_2 + 0x20);
                    do {
                      *puVar14 = (uint)*pbVar25;
                      uVar12 = uVar12 - 1;
                      pbVar25 = pbVar25 + 1;
                      puVar14 = puVar14 + 1;
                    } while (uVar12 != 0);
                    return param_1;
                  }
                }
              }
            }
            goto LAB_109d12c30;
          }
          if (uVar41 == 0) {
            uVar41 = *(uint *)(param_2 + 0x18);
            uVar11 = (ulong)uVar41;
            if ((int)uVar41 < 4) {
              if ((int)uVar41 < 2) {
                if (uVar41 == 0) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  uVar12 = (ulong)uVar41;
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12910;
                  iVar17 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar17 = *piVar6 * iVar17;
                  }
                  goto LAB_109d12924;
                }
                if (uVar41 != 1) {
LAB_109d12d24:
                  func_0x000107c31940(&uStack_70,&UNK_10f5ac487);
                  func_0x000109259240(&pcStack_58,&uStack_70,&UNK_10f5a35f2);
                  __ZNSt3__19to_stringEi(&ppppppuStack_88,uVar11);
                  pppppppuVar2 = (undefined8 *******)ppppppuStack_88;
                  if (-1 < (char)bStack_71) {
                    uStack_80 = (ulong)bStack_71;
                    pppppppuVar2 = &ppppppuStack_88;
                  }
                  ppcVar9 = &pcStack_58;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppcVar9,pppppppuVar2,uStack_80);
                  ppcVar9[1] = (char *)0x0;
                  ppcVar9[2] = (char *)0x0;
                  *ppcVar9 = (char *)0x0;
                  if ((char)bStack_71 < '\0') {
                    __ZdlPv(ppppppuStack_88);
                  }
                  if (cStack_41 < '\0') {
                    __ZdlPv(pcStack_58);
                  }
                  if (uStack_60._7_1_ < '\0') {
                    __ZdlPv(CONCAT44(uStack_6c,uStack_70));
                  }
                  plVar8 = (long *)0x10;
                  ___cxa_allocate_exception();
                  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            ();
                  *plVar8 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                  ___cxa_throw(plVar8,PTR___ZTISt16invalid_argument_110352248,
                               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                  goto LAB_109d134dc;
                }
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                uVar12 = (ulong)uVar41;
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  puVar20 = *(undefined8 **)(param_1 + 0x10);
                  puVar29 = *(undefined8 **)(param_2 + 0x20);
                  uVar11 = 0;
                  puVar34 = puVar20;
                  puVar35 = puVar29;
                  if ((uVar41 & 0xfffffffc) != 0) {
                    do {
                      uVar43 = *puVar34;
                      puVar35[1] = CONCAT44((float)(float2)((ulong)uVar43 >> 0x30),
                                            (float)(float2)((ulong)uVar43 >> 0x20));
                      *puVar35 = CONCAT44((float)(float2)((ulong)uVar43 >> 0x10),
                                          (float)(float2)uVar43);
                      uVar11 = uVar11 + 4;
                      puVar34 = puVar34 + 1;
                      puVar35 = puVar35 + 2;
                    } while (uVar11 < (uVar12 & 0xfffffffc));
                  }
                  lVar38 = uVar12 - uVar11;
                  if (uVar12 < uVar11 || lVar38 == 0) {
                    return param_1;
                  }
                  pfVar21 = (float2 *)((long)puVar20 + uVar11 * 2);
                  pfVar24 = (float *)((long)puVar29 + uVar11 * 4);
                  do {
                    *pfVar24 = (float)*pfVar21;
                    lVar38 = lVar38 + -1;
                    pfVar21 = pfVar21 + 1;
                    pfVar24 = pfVar24 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
              else if (uVar41 == 2) {
                if ((param_1[0x24] & 1) == 0) {
                  uVar12 = (ulong)(uint)(*(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                                         *(int *)(param_1 + 6) * *(int *)(param_1 + 4));
                }
                else {
                  uVar12 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar12 = (ulong)(uint)(*piVar6 * (int)uVar12);
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  iVar17 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  iVar17 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar17 = *piVar6 * iVar17;
                  }
                }
                if ((int)uVar12 == iVar17) {
                  puVar5 = *(ushort **)(param_1 + 0x10);
                  puVar37 = puVar5 + uVar12;
                  pdVar22 = *(double **)(param_2 + 0x20);
                  for (; puVar5 != puVar37; puVar5 = puVar5 + 1) {
                    uVar11 = (ulong)(*puVar5 >> 10);
                    *pdVar22 = (double)(float)(*(int *)(&UNK_10e039244 + uVar11 * 4) +
                                              *(int *)(&UNK_10e037244 +
                                                      (ulong)((*puVar5 & 0x3ff) +
                                                             (uint)*(ushort *)
                                                                    (&UNK_10e039344 + uVar11 * 2)) *
                                                      4));
                    pdVar22 = pdVar22 + 1;
                  }
                  return puVar5;
                }
              }
              else {
                if (uVar41 != 3) goto LAB_109d12d24;
                if ((param_1[0x24] & 1) == 0) {
                  uVar12 = (ulong)(uint)(*(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                                         *(int *)(param_1 + 6) * *(int *)(param_1 + 4));
                }
                else {
                  uVar12 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar12 = (ulong)(uint)(*piVar6 * (int)uVar12);
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  iVar17 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  iVar17 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar17 = *piVar6 * iVar17;
                  }
                }
                if ((int)uVar12 == iVar17) {
                  puVar5 = *(ushort **)(param_1 + 0x10);
                  puVar37 = puVar5 + uVar12;
                  puVar23 = *(undefined1 **)(param_2 + 0x20);
                  for (; puVar5 != puVar37; puVar5 = puVar5 + 1) {
                    uVar11 = (ulong)(*puVar5 >> 10);
                    *puVar23 = (char)(int)(float)(*(int *)(&UNK_10e039244 + uVar11 * 4) +
                                                 *(int *)(&UNK_10e037244 +
                                                         (ulong)((*puVar5 & 0x3ff) +
                                                                (uint)*(ushort *)
                                                                       (&UNK_10e039344 + uVar11 * 2)
                                                                ) * 4));
                    puVar23 = puVar23 + 1;
                  }
                  return puVar5;
                }
              }
            }
            else if ((int)uVar41 < 6) {
              if (uVar41 == 4) {
                if ((param_1[0x24] & 1) == 0) {
                  uVar12 = (ulong)(uint)(*(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                                         *(int *)(param_1 + 6) * *(int *)(param_1 + 4));
                }
                else {
                  uVar12 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar12 = (ulong)(uint)(*piVar6 * (int)uVar12);
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  iVar17 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  iVar17 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar17 = *piVar6 * iVar17;
                  }
                }
                if ((int)uVar12 == iVar17) {
                  puVar5 = *(ushort **)(param_1 + 0x10);
                  puVar37 = puVar5 + uVar12;
                  puVar33 = *(undefined2 **)(param_2 + 0x20);
                  for (; puVar5 != puVar37; puVar5 = puVar5 + 1) {
                    uVar11 = (ulong)(*puVar5 >> 10);
                    *puVar33 = (short)(int)(float)(*(int *)(&UNK_10e039244 + uVar11 * 4) +
                                                  *(int *)(&UNK_10e037244 +
                                                          (ulong)((*puVar5 & 0x3ff) +
                                                                 (uint)*(ushort *)
                                                                        (&UNK_10e039344 + uVar11 * 2
                                                                        )) * 4));
                    puVar33 = puVar33 + 1;
                  }
                  return puVar5;
                }
              }
              else {
                if (uVar41 != 5) goto LAB_109d12d24;
                if ((param_1[0x24] & 1) == 0) {
                  uVar12 = (ulong)(uint)(*(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                                         *(int *)(param_1 + 6) * *(int *)(param_1 + 4));
                }
                else {
                  uVar12 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar12 = (ulong)(uint)(*piVar6 * (int)uVar12);
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  iVar17 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  iVar17 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar17 = *piVar6 * iVar17;
                  }
                }
                if ((int)uVar12 == iVar17) {
                  puVar5 = *(ushort **)(param_1 + 0x10);
                  puVar37 = puVar5 + uVar12;
                  piVar6 = *(int **)(param_2 + 0x20);
                  for (; puVar5 != puVar37; puVar5 = puVar5 + 1) {
                    uVar11 = (ulong)(*puVar5 >> 10);
                    *piVar6 = (int)(float)(*(int *)(&UNK_10e039244 + uVar11 * 4) +
                                          *(int *)(&UNK_10e037244 +
                                                  (ulong)((*puVar5 & 0x3ff) +
                                                         (uint)*(ushort *)
                                                                (&UNK_10e039344 + uVar11 * 2)) * 4))
                    ;
                    piVar6 = piVar6 + 1;
                  }
                  return puVar5;
                }
              }
            }
            else if (uVar41 == 6) {
              if ((param_1[0x24] & 1) == 0) {
                uVar12 = (ulong)(uint)(*(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                                       *(int *)(param_1 + 6) * *(int *)(param_1 + 4));
              }
              else {
                uVar12 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar12 = (ulong)(uint)(*piVar6 * (int)uVar12);
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                iVar17 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                iVar17 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar17 = *piVar6 * iVar17;
                }
              }
              if ((int)uVar12 == iVar17) {
                puVar5 = *(ushort **)(param_1 + 0x10);
                puVar37 = puVar5 + uVar12;
                puVar23 = *(undefined1 **)(param_2 + 0x20);
                for (; puVar5 != puVar37; puVar5 = puVar5 + 1) {
                  uVar11 = (ulong)(*puVar5 >> 10);
                  *puVar23 = (char)(int)(float)(*(int *)(&UNK_10e039244 + uVar11 * 4) +
                                               *(int *)(&UNK_10e037244 +
                                                       (ulong)((*puVar5 & 0x3ff) +
                                                              (uint)*(ushort *)
                                                                     (&UNK_10e039344 + uVar11 * 2))
                                                       * 4));
                  puVar23 = puVar23 + 1;
                }
                return puVar5;
              }
            }
            else if (uVar41 == 7) {
              if ((param_1[0x24] & 1) == 0) {
                uVar12 = (ulong)(uint)(*(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                                       *(int *)(param_1 + 6) * *(int *)(param_1 + 4));
              }
              else {
                uVar12 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar12 = (ulong)(uint)(*piVar6 * (int)uVar12);
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                iVar17 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                iVar17 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar17 = *piVar6 * iVar17;
                }
              }
              if ((int)uVar12 == iVar17) {
                puVar5 = *(ushort **)(param_1 + 0x10);
                puVar37 = puVar5 + uVar12;
                puVar33 = *(undefined2 **)(param_2 + 0x20);
                for (; puVar5 != puVar37; puVar5 = puVar5 + 1) {
                  uVar11 = (ulong)(*puVar5 >> 10);
                  *puVar33 = (short)(int)(float)(*(int *)(&UNK_10e039244 + uVar11 * 4) +
                                                *(int *)(&UNK_10e037244 +
                                                        (ulong)((*puVar5 & 0x3ff) +
                                                               (uint)*(ushort *)
                                                                      (&UNK_10e039344 + uVar11 * 2))
                                                        * 4));
                  puVar33 = puVar33 + 1;
                }
                return puVar5;
              }
            }
            else {
              if (uVar41 != 8) goto LAB_109d12d24;
              if ((param_1[0x24] & 1) == 0) {
                uVar12 = (ulong)(uint)(*(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                                       *(int *)(param_1 + 6) * *(int *)(param_1 + 4));
              }
              else {
                uVar12 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar12 = (ulong)(uint)(*piVar6 * (int)uVar12);
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                iVar17 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                iVar17 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar17 = *piVar6 * iVar17;
                }
              }
              if ((int)uVar12 == iVar17) {
                puVar5 = *(ushort **)(param_1 + 0x10);
                puVar37 = puVar5 + uVar12;
                piVar6 = *(int **)(param_2 + 0x20);
                for (; puVar5 != puVar37; puVar5 = puVar5 + 1) {
                  uVar11 = (ulong)(*puVar5 >> 10);
                  *piVar6 = (int)(float)(*(int *)(&UNK_10e039244 + uVar11 * 4) +
                                        *(int *)(&UNK_10e037244 +
                                                (ulong)((*puVar5 & 0x3ff) +
                                                       (uint)*(ushort *)
                                                              (&UNK_10e039344 + uVar11 * 2)) * 4));
                  piVar6 = piVar6 + 1;
                }
                return puVar5;
              }
            }
            goto LAB_109d12c30;
          }
          if (uVar41 == 1) {
            uVar41 = *(uint *)(param_2 + 0x18);
            uVar11 = (ulong)uVar41;
            if ((int)uVar41 < 4) {
              if ((int)uVar41 < 2) {
                if (uVar41 != 0) {
                  if (uVar41 == 1) {
                    if ((param_1[0x24] & 1) == 0) {
                      uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                               *(int *)(param_1 + 6) * *(int *)(param_1 + 4);
                    }
                    else {
                      uVar41 = 1;
                      for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar41 = *piVar6 * uVar41;
                      }
                    }
                    uVar12 = (ulong)uVar41;
                    if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12be0;
                    iVar17 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      iVar17 = *piVar6 * iVar17;
                    }
                    goto LAB_109d12bf4;
                  }
LAB_109d12edc:
                  func_0x000107c31940(&uStack_70,&UNK_10f5ac487);
                  func_0x000109259240(&pcStack_58,&uStack_70,&UNK_10f5a35f2);
                  __ZNSt3__19to_stringEi(&ppppppuStack_88,uVar11);
                  pppppppuVar2 = (undefined8 *******)ppppppuStack_88;
                  if (-1 < (char)bStack_71) {
                    uStack_80 = (ulong)bStack_71;
                    pppppppuVar2 = &ppppppuStack_88;
                  }
                  ppcVar9 = &pcStack_58;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppcVar9,pppppppuVar2,uStack_80);
                  ppcVar9[1] = (char *)0x0;
                  ppcVar9[2] = (char *)0x0;
                  *ppcVar9 = (char *)0x0;
                  if ((char)bStack_71 < '\0') {
                    __ZdlPv(ppppppuStack_88);
                  }
                  if (cStack_41 < '\0') {
                    __ZdlPv(pcStack_58);
                  }
                  if (uStack_60._7_1_ < '\0') {
                    __ZdlPv(CONCAT44(uStack_6c,uStack_70));
                  }
                  plVar8 = (long *)0x10;
                  ___cxa_allocate_exception();
                  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            ();
                  *plVar8 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                  ___cxa_throw(plVar8,PTR___ZTISt16invalid_argument_110352248,
                               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                  goto LAB_109d134dc;
                }
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 2;
                  puVar14 = *(uint **)(param_1 + 0x10);
                  psVar27 = *(short **)(param_2 + 0x20);
                  do {
                    uVar11 = (ulong)(*puVar14 >> 0x17);
                    *psVar27 = *(short *)(&UNK_10e04070a + uVar11 * 2) +
                               (short)((*puVar14 & 0x7fffff) >>
                                      (ulong)((byte)(&UNK_10e040b0a)[uVar11] & 0x1f));
                    lVar38 = lVar38 + -4;
                    puVar14 = puVar14 + 1;
                    psVar27 = psVar27 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
              else if (uVar41 == 2) {
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 2;
                  pfVar24 = *(float **)(param_1 + 0x10);
                  pdVar22 = *(double **)(param_2 + 0x20);
                  do {
                    *pdVar22 = (double)*pfVar24;
                    lVar38 = lVar38 + -4;
                    pfVar24 = pfVar24 + 1;
                    pdVar22 = pdVar22 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
              else {
                if (uVar41 != 3) goto LAB_109d12edc;
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 2;
                  pfVar24 = *(float **)(param_1 + 0x10);
                  puVar23 = *(undefined1 **)(param_2 + 0x20);
                  do {
                    *puVar23 = (char)(int)*pfVar24;
                    lVar38 = lVar38 + -4;
                    pfVar24 = pfVar24 + 1;
                    puVar23 = puVar23 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
            }
            else if ((int)uVar41 < 6) {
              if (uVar41 == 4) {
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 2;
                  pfVar24 = *(float **)(param_1 + 0x10);
                  puVar33 = *(undefined2 **)(param_2 + 0x20);
                  do {
                    *puVar33 = (short)(int)*pfVar24;
                    lVar38 = lVar38 + -4;
                    pfVar24 = pfVar24 + 1;
                    puVar33 = puVar33 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
              else {
                if (uVar41 != 5) goto LAB_109d12edc;
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 2;
                  pfVar24 = *(float **)(param_1 + 0x10);
                  piVar6 = *(int **)(param_2 + 0x20);
                  do {
                    *piVar6 = (int)*pfVar24;
                    lVar38 = lVar38 + -4;
                    pfVar24 = pfVar24 + 1;
                    piVar6 = piVar6 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
            }
            else if (uVar41 == 6) {
              if ((param_1[0x24] & 1) == 0) {
                uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                         *(int *)(param_1 + 4);
              }
              else {
                uVar41 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar41 = *piVar6 * uVar41;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar19 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar19 = *piVar6 * uVar19;
                }
              }
              if (uVar41 == uVar19) {
                if (uVar41 == 0) {
                  return param_1;
                }
                lVar38 = (ulong)uVar41 << 2;
                pfVar24 = *(float **)(param_1 + 0x10);
                puVar23 = *(undefined1 **)(param_2 + 0x20);
                do {
                  *puVar23 = (char)(int)*pfVar24;
                  lVar38 = lVar38 + -4;
                  pfVar24 = pfVar24 + 1;
                  puVar23 = puVar23 + 1;
                } while (lVar38 != 0);
                return param_1;
              }
            }
            else if (uVar41 == 7) {
              if ((param_1[0x24] & 1) == 0) {
                uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                         *(int *)(param_1 + 4);
              }
              else {
                uVar41 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar41 = *piVar6 * uVar41;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar19 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar19 = *piVar6 * uVar19;
                }
              }
              if (uVar41 == uVar19) {
                if (uVar41 == 0) {
                  return param_1;
                }
                lVar38 = (ulong)uVar41 << 2;
                pfVar24 = *(float **)(param_1 + 0x10);
                puVar33 = *(undefined2 **)(param_2 + 0x20);
                do {
                  *puVar33 = (short)(int)*pfVar24;
                  lVar38 = lVar38 + -4;
                  pfVar24 = pfVar24 + 1;
                  puVar33 = puVar33 + 1;
                } while (lVar38 != 0);
                return param_1;
              }
            }
            else {
              if (uVar41 != 8) goto LAB_109d12edc;
              if ((param_1[0x24] & 1) == 0) {
                uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                         *(int *)(param_1 + 4);
              }
              else {
                uVar41 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar41 = *piVar6 * uVar41;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar19 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar19 = *piVar6 * uVar19;
                }
              }
              if (uVar41 == uVar19) {
                if (uVar41 == 0) {
                  return param_1;
                }
                lVar38 = (ulong)uVar41 << 2;
                pfVar24 = *(float **)(param_1 + 0x10);
                piVar6 = *(int **)(param_2 + 0x20);
                do {
                  *piVar6 = (int)*pfVar24;
                  lVar38 = lVar38 + -4;
                  pfVar24 = pfVar24 + 1;
                  piVar6 = piVar6 + 1;
                } while (lVar38 != 0);
                return param_1;
              }
            }
            goto LAB_109d12c30;
          }
        }
        else {
          if ((int)uVar41 < 6) {
            if (uVar41 == 4) {
              uVar41 = *(uint *)(param_2 + 0x18);
              uVar11 = (ulong)uVar41;
              if ((int)uVar41 < 4) {
                if ((int)uVar41 < 2) {
                  if (uVar41 == 0) {
                    if ((param_1[0x24] & 1) == 0) {
                      uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                               *(int *)(param_1 + 6) * *(int *)(param_1 + 4);
                    }
                    else {
                      uVar41 = 1;
                      for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar41 = *piVar6 * uVar41;
                      }
                    }
                    if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                      uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                               *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                    }
                    else {
                      uVar19 = 1;
                      for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar19 = *piVar6 * uVar19;
                      }
                    }
                    if (uVar41 == uVar19) {
                      if (uVar41 == 0) {
                        return param_1;
                      }
                      lVar38 = (ulong)uVar41 << 1;
                      puVar37 = *(ushort **)(param_1 + 0x10);
                      psVar27 = *(short **)(param_2 + 0x20);
                      do {
                        uVar11 = (ulong)((uint)(float)*puVar37 >> 0x17);
                        *psVar27 = *(short *)(&UNK_10e04070a + uVar11 * 2) +
                                   (short)(((uint)(float)*puVar37 & 0x7fffff) >>
                                          (ulong)((byte)(&UNK_10e040b0a)[uVar11] & 0x1f));
                        lVar38 = lVar38 + -2;
                        puVar37 = puVar37 + 1;
                        psVar27 = psVar27 + 1;
                      } while (lVar38 != 0);
                      return param_1;
                    }
                  }
                  else {
                    if (uVar41 != 1) {
LAB_109d13094:
                      func_0x000107c31940(&uStack_70,&UNK_10f5ac487);
                      func_0x000109259240(&pcStack_58,&uStack_70,&UNK_10f5a35f2);
                      __ZNSt3__19to_stringEi(&ppppppuStack_88,uVar11);
                      pppppppuVar2 = (undefined8 *******)ppppppuStack_88;
                      if (-1 < (char)bStack_71) {
                        uStack_80 = (ulong)bStack_71;
                        pppppppuVar2 = &ppppppuStack_88;
                      }
                      ppcVar9 = &pcStack_58;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (ppcVar9,pppppppuVar2,uStack_80);
                      ppcVar9[1] = (char *)0x0;
                      ppcVar9[2] = (char *)0x0;
                      *ppcVar9 = (char *)0x0;
                      if ((char)bStack_71 < '\0') {
                        __ZdlPv(ppppppuStack_88);
                      }
                      if (cStack_41 < '\0') {
                        __ZdlPv(pcStack_58);
                      }
                      if (uStack_60._7_1_ < '\0') {
                        __ZdlPv(CONCAT44(uStack_6c,uStack_70));
                      }
                      plVar8 = (long *)0x10;
                      ___cxa_allocate_exception();
                      __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                                ();
                      *plVar8 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                      ___cxa_throw(plVar8,PTR___ZTISt16invalid_argument_110352248,
                                   PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                      goto LAB_109d134dc;
                    }
                    if ((param_1[0x24] & 1) == 0) {
                      uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                               *(int *)(param_1 + 6) * *(int *)(param_1 + 4);
                    }
                    else {
                      uVar41 = 1;
                      for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar41 = *piVar6 * uVar41;
                      }
                    }
                    if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                      uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                               *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                    }
                    else {
                      uVar19 = 1;
                      for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar19 = *piVar6 * uVar19;
                      }
                    }
                    if (uVar41 == uVar19) {
                      if (uVar41 == 0) {
                        return param_1;
                      }
                      lVar38 = (ulong)uVar41 << 1;
                      puVar37 = *(ushort **)(param_1 + 0x10);
                      pfVar24 = *(float **)(param_2 + 0x20);
                      do {
                        *pfVar24 = (float)*puVar37;
                        lVar38 = lVar38 + -2;
                        puVar37 = puVar37 + 1;
                        pfVar24 = pfVar24 + 1;
                      } while (lVar38 != 0);
                      return param_1;
                    }
                  }
                }
                else if (uVar41 == 2) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    lVar38 = (ulong)uVar41 << 1;
                    puVar37 = *(ushort **)(param_1 + 0x10);
                    pdVar22 = *(double **)(param_2 + 0x20);
                    do {
                      *pdVar22 = (double)*puVar37;
                      lVar38 = lVar38 + -2;
                      puVar37 = puVar37 + 1;
                      pdVar22 = pdVar22 + 1;
                    } while (lVar38 != 0);
                    return param_1;
                  }
                }
                else {
                  if (uVar41 != 3) goto LAB_109d13094;
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    lVar38 = (ulong)uVar41 << 1;
                    puVar23 = *(undefined1 **)(param_1 + 0x10);
                    puVar32 = *(undefined1 **)(param_2 + 0x20);
                    do {
                      *puVar32 = *puVar23;
                      lVar38 = lVar38 + -2;
                      puVar23 = puVar23 + 2;
                      puVar32 = puVar32 + 1;
                    } while (lVar38 != 0);
                    return param_1;
                  }
                }
              }
              else if ((int)uVar41 < 6) {
                if (uVar41 == 4) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  uVar12 = (ulong)uVar41;
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
LAB_109d12910:
                    iVar17 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    iVar17 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      iVar17 = *piVar6 * iVar17;
                    }
                  }
LAB_109d12924:
                  if ((int)uVar12 == iVar17) {
                    if ((int)uVar12 == 0) {
                      return param_1;
                    }
                    puVar10 = *(ushort **)(param_1 + 0x10);
                    puVar5 = *(ushort **)(param_2 + 0x20);
                    uVar12 = uVar12 << 1;
                    goto code_r0x00010bdbf0a8;
                  }
                }
                else {
                  if (uVar41 != 5) goto LAB_109d13094;
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    lVar38 = (ulong)uVar41 << 1;
                    puVar37 = *(ushort **)(param_1 + 0x10);
                    puVar14 = *(uint **)(param_2 + 0x20);
                    do {
                      *puVar14 = (uint)*puVar37;
                      lVar38 = lVar38 + -2;
                      puVar37 = puVar37 + 1;
                      puVar14 = puVar14 + 1;
                    } while (lVar38 != 0);
                    return param_1;
                  }
                }
              }
              else if (uVar41 == 6) {
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 1;
                  puVar23 = *(undefined1 **)(param_1 + 0x10);
                  puVar32 = *(undefined1 **)(param_2 + 0x20);
                  do {
                    *puVar32 = *puVar23;
                    lVar38 = lVar38 + -2;
                    puVar23 = puVar23 + 2;
                    puVar32 = puVar32 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
              else {
                if (uVar41 == 7) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  uVar12 = (ulong)uVar41;
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12910;
                  iVar17 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar17 = *piVar6 * iVar17;
                  }
                  goto LAB_109d12924;
                }
                if (uVar41 != 8) goto LAB_109d13094;
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 1;
                  puVar37 = *(ushort **)(param_1 + 0x10);
                  puVar14 = *(uint **)(param_2 + 0x20);
                  do {
                    *puVar14 = (uint)*puVar37;
                    lVar38 = lVar38 + -2;
                    puVar37 = puVar37 + 1;
                    puVar14 = puVar14 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
            }
            else {
              if (uVar41 != 5) goto LAB_109d12c48;
              uVar41 = *(uint *)(param_2 + 0x18);
              uVar11 = (ulong)uVar41;
              if ((int)uVar41 < 4) {
                if ((int)uVar41 < 2) {
                  if (uVar41 == 0) {
                    if ((param_1[0x24] & 1) == 0) {
                      uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                               *(int *)(param_1 + 6) * *(int *)(param_1 + 4);
                    }
                    else {
                      uVar41 = 1;
                      for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar41 = *piVar6 * uVar41;
                      }
                    }
                    if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                      uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                               *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                    }
                    else {
                      uVar19 = 1;
                      for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar19 = *piVar6 * uVar19;
                      }
                    }
                    if (uVar41 == uVar19) {
                      if (uVar41 == 0) {
                        return param_1;
                      }
                      lVar38 = (ulong)uVar41 << 2;
                      puVar28 = *(undefined4 **)(param_1 + 0x10);
                      psVar27 = *(short **)(param_2 + 0x20);
                      do {
                        uVar41 = NEON_ucvtf(*puVar28);
                        *psVar27 = *(short *)(&UNK_10e04070a + (ulong)(uVar41 >> 0x17) * 2) +
                                   (short)((uVar41 & 0x7fffff) >>
                                          (ulong)((byte)(&UNK_10e040b0a)[uVar41 >> 0x17] & 0x1f));
                        lVar38 = lVar38 + -4;
                        puVar28 = puVar28 + 1;
                        psVar27 = psVar27 + 1;
                      } while (lVar38 != 0);
                      return param_1;
                    }
                  }
                  else {
                    if (uVar41 != 1) {
LAB_109d1324c:
                      func_0x000107c31940(&uStack_70,&UNK_10f5ac487);
                      func_0x000109259240(&pcStack_58,&uStack_70,&UNK_10f5a35f2);
                      __ZNSt3__19to_stringEi(&ppppppuStack_88,uVar11);
                      pppppppuVar2 = (undefined8 *******)ppppppuStack_88;
                      if (-1 < (char)bStack_71) {
                        uStack_80 = (ulong)bStack_71;
                        pppppppuVar2 = &ppppppuStack_88;
                      }
                      ppcVar9 = &pcStack_58;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (ppcVar9,pppppppuVar2,uStack_80);
                      ppcVar9[1] = (char *)0x0;
                      ppcVar9[2] = (char *)0x0;
                      *ppcVar9 = (char *)0x0;
                      if ((char)bStack_71 < '\0') {
                        __ZdlPv(ppppppuStack_88);
                      }
                      if (cStack_41 < '\0') {
                        __ZdlPv(pcStack_58);
                      }
                      if (uStack_60._7_1_ < '\0') {
                        __ZdlPv(CONCAT44(uStack_6c,uStack_70));
                      }
                      plVar8 = (long *)0x10;
                      ___cxa_allocate_exception();
                      __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                                ();
                      *plVar8 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                      ___cxa_throw(plVar8,PTR___ZTISt16invalid_argument_110352248,
                                   PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                      goto LAB_109d134dc;
                    }
                    if ((param_1[0x24] & 1) == 0) {
                      uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                               *(int *)(param_1 + 6) * *(int *)(param_1 + 4);
                    }
                    else {
                      uVar41 = 1;
                      for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar41 = *piVar6 * uVar41;
                      }
                    }
                    if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                      uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                               *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                    }
                    else {
                      uVar19 = 1;
                      for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                          piVar6 = piVar6 + 1) {
                        uVar19 = *piVar6 * uVar19;
                      }
                    }
                    if (uVar41 == uVar19) {
                      if (uVar41 == 0) {
                        return param_1;
                      }
                      lVar38 = (ulong)uVar41 << 2;
                      puVar28 = *(undefined4 **)(param_1 + 0x10);
                      puVar31 = *(undefined4 **)(param_2 + 0x20);
                      do {
                        uVar42 = NEON_ucvtf(*puVar28);
                        *puVar31 = uVar42;
                        lVar38 = lVar38 + -4;
                        puVar28 = puVar28 + 1;
                        puVar31 = puVar31 + 1;
                      } while (lVar38 != 0);
                      return param_1;
                    }
                  }
                }
                else if (uVar41 == 2) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    lVar38 = (ulong)uVar41 << 2;
                    puVar14 = *(uint **)(param_1 + 0x10);
                    pdVar22 = *(double **)(param_2 + 0x20);
                    do {
                      *pdVar22 = (double)*puVar14;
                      lVar38 = lVar38 + -4;
                      puVar14 = puVar14 + 1;
                      pdVar22 = pdVar22 + 1;
                    } while (lVar38 != 0);
                    return param_1;
                  }
                }
                else {
                  if (uVar41 != 3) goto LAB_109d1324c;
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    lVar38 = (ulong)uVar41 << 2;
                    puVar28 = *(undefined4 **)(param_1 + 0x10);
                    puVar23 = *(undefined1 **)(param_2 + 0x20);
                    do {
                      *puVar23 = (char)*puVar28;
                      lVar38 = lVar38 + -4;
                      puVar28 = puVar28 + 1;
                      puVar23 = puVar23 + 1;
                    } while (lVar38 != 0);
                    return param_1;
                  }
                }
              }
              else if ((int)uVar41 < 6) {
                if (uVar41 == 4) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    lVar38 = (ulong)uVar41 << 2;
                    puVar28 = *(undefined4 **)(param_1 + 0x10);
                    puVar33 = *(undefined2 **)(param_2 + 0x20);
                    do {
                      *puVar33 = (short)*puVar28;
                      lVar38 = lVar38 + -4;
                      puVar28 = puVar28 + 1;
                      puVar33 = puVar33 + 1;
                    } while (lVar38 != 0);
                    return param_1;
                  }
                }
                else {
                  if (uVar41 != 5) goto LAB_109d1324c;
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  uVar12 = (ulong)uVar41;
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
LAB_109d12be0:
                    iVar17 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    iVar17 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      iVar17 = *piVar6 * iVar17;
                    }
                  }
LAB_109d12bf4:
                  if ((int)uVar12 == iVar17) {
                    if ((int)uVar12 == 0) {
                      return param_1;
                    }
                    puVar10 = *(ushort **)(param_1 + 0x10);
                    puVar5 = *(ushort **)(param_2 + 0x20);
                    uVar12 = uVar12 << 2;
                    goto code_r0x00010bdbf0a8;
                  }
                }
              }
              else if (uVar41 == 6) {
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 2;
                  puVar28 = *(undefined4 **)(param_1 + 0x10);
                  puVar23 = *(undefined1 **)(param_2 + 0x20);
                  do {
                    *puVar23 = (char)*puVar28;
                    lVar38 = lVar38 + -4;
                    puVar28 = puVar28 + 1;
                    puVar23 = puVar23 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
              else {
                if (uVar41 != 7) {
                  if (uVar41 != 8) goto LAB_109d1324c;
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  uVar12 = (ulong)uVar41;
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12be0;
                  iVar17 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    iVar17 = *piVar6 * iVar17;
                  }
                  goto LAB_109d12bf4;
                }
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 2;
                  puVar28 = *(undefined4 **)(param_1 + 0x10);
                  puVar33 = *(undefined2 **)(param_2 + 0x20);
                  do {
                    *puVar33 = (short)*puVar28;
                    lVar38 = lVar38 + -4;
                    puVar28 = puVar28 + 1;
                    puVar33 = puVar33 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
            }
          }
          else if (uVar41 == 6) {
            uVar41 = *(uint *)(param_2 + 0x18);
            uVar11 = (ulong)uVar41;
            if ((int)uVar41 < 4) {
              if ((int)uVar41 < 2) {
                if (uVar41 == 0) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  uVar12 = (ulong)uVar41;
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    pcVar26 = *(char **)(param_1 + 0x10);
                    psVar27 = *(short **)(param_2 + 0x20);
                    do {
                      uVar11 = (ulong)((uint)(float)(int)*pcVar26 >> 0x17);
                      *psVar27 = *(short *)(&UNK_10e04070a + uVar11 * 2) +
                                 (short)(((uint)(float)(int)*pcVar26 & 0x7fffff) >>
                                        (ulong)((byte)(&UNK_10e040b0a)[uVar11] & 0x1f));
                      uVar12 = uVar12 - 1;
                      pcVar26 = pcVar26 + 1;
                      psVar27 = psVar27 + 1;
                    } while (uVar12 != 0);
                    return param_1;
                  }
                }
                else {
                  if (uVar41 != 1) goto LAB_109d13170;
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  uVar12 = (ulong)uVar41;
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    pcVar26 = *(char **)(param_1 + 0x10);
                    pfVar24 = *(float **)(param_2 + 0x20);
                    do {
                      *pfVar24 = (float)(int)*pcVar26;
                      uVar12 = uVar12 - 1;
                      pcVar26 = pcVar26 + 1;
                      pfVar24 = pfVar24 + 1;
                    } while (uVar12 != 0);
                    return param_1;
                  }
                }
              }
              else {
                if (uVar41 != 2) {
                  if (uVar41 == 3) {
                    if ((param_1[0x24] & 1) == 0) {
                      uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) *
                               *(int *)(param_1 + 6) * *(int *)(param_1 + 4);
                    }
                    else {
                      uVar41 = 1;
                      for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                          piVar6 = piVar6 + 1) {
                        uVar41 = *piVar6 * uVar41;
                      }
                    }
                    uVar12 = (ulong)uVar41;
                    if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d11e18;
                    iVar17 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      iVar17 = *piVar6 * iVar17;
                    }
                    goto LAB_109d11e2c;
                  }
LAB_109d13170:
                  func_0x000107c31940(&uStack_70,&UNK_10f5ac487);
                  func_0x000109259240(&pcStack_58,&uStack_70,&UNK_10f5a35f2);
                  __ZNSt3__19to_stringEi(&ppppppuStack_88,uVar11);
                  pppppppuVar2 = (undefined8 *******)ppppppuStack_88;
                  if (-1 < (char)bStack_71) {
                    uStack_80 = (ulong)bStack_71;
                    pppppppuVar2 = &ppppppuStack_88;
                  }
                  ppcVar9 = &pcStack_58;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppcVar9,pppppppuVar2,uStack_80);
                  ppcVar9[1] = (char *)0x0;
                  ppcVar9[2] = (char *)0x0;
                  *ppcVar9 = (char *)0x0;
                  if ((char)bStack_71 < '\0') {
                    __ZdlPv(ppppppuStack_88);
                  }
                  if (cStack_41 < '\0') {
                    __ZdlPv(pcStack_58);
                  }
                  if (uStack_60._7_1_ < '\0') {
                    __ZdlPv(CONCAT44(uStack_6c,uStack_70));
                  }
                  plVar8 = (long *)0x10;
                  ___cxa_allocate_exception();
                  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            ();
                  *plVar8 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                  ___cxa_throw(plVar8,PTR___ZTISt16invalid_argument_110352248,
                               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                  goto LAB_109d134dc;
                }
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                uVar12 = (ulong)uVar41;
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  pcVar26 = *(char **)(param_1 + 0x10);
                  pdVar22 = *(double **)(param_2 + 0x20);
                  do {
                    *pdVar22 = (double)(int)*pcVar26;
                    uVar12 = uVar12 - 1;
                    pcVar26 = pcVar26 + 1;
                    pdVar22 = pdVar22 + 1;
                  } while (uVar12 != 0);
                  return param_1;
                }
              }
            }
            else if ((int)uVar41 < 6) {
              if (uVar41 == 4) {
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                uVar12 = (ulong)uVar41;
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  pcVar26 = *(char **)(param_1 + 0x10);
                  psVar27 = *(short **)(param_2 + 0x20);
                  do {
                    *psVar27 = (short)*pcVar26;
                    uVar12 = uVar12 - 1;
                    pcVar26 = pcVar26 + 1;
                    psVar27 = psVar27 + 1;
                  } while (uVar12 != 0);
                  return param_1;
                }
              }
              else {
                if (uVar41 != 5) goto LAB_109d13170;
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                uVar12 = (ulong)uVar41;
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  pcVar26 = *(char **)(param_1 + 0x10);
                  piVar6 = *(int **)(param_2 + 0x20);
                  do {
                    *piVar6 = (int)*pcVar26;
                    uVar12 = uVar12 - 1;
                    pcVar26 = pcVar26 + 1;
                    piVar6 = piVar6 + 1;
                  } while (uVar12 != 0);
                  return param_1;
                }
              }
            }
            else if (uVar41 == 6) {
              if ((param_1[0x24] & 1) == 0) {
                uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                         *(int *)(param_1 + 4);
              }
              else {
                uVar41 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar41 = *piVar6 * uVar41;
                }
              }
              uVar12 = (ulong)uVar41;
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
LAB_109d11e18:
                iVar17 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                iVar17 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar17 = *piVar6 * iVar17;
                }
              }
LAB_109d11e2c:
              if ((int)uVar12 == iVar17) {
                if ((int)uVar12 == 0) {
                  return param_1;
                }
                puVar10 = *(ushort **)(param_1 + 0x10);
                puVar5 = *(ushort **)(param_2 + 0x20);
                goto code_r0x00010bdbf0a8;
              }
            }
            else if (uVar41 == 7) {
              if ((param_1[0x24] & 1) == 0) {
                uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                         *(int *)(param_1 + 4);
              }
              else {
                uVar41 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar41 = *piVar6 * uVar41;
                }
              }
              uVar12 = (ulong)uVar41;
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar19 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar19 = *piVar6 * uVar19;
                }
              }
              if (uVar41 == uVar19) {
                if (uVar41 == 0) {
                  return param_1;
                }
                pcVar26 = *(char **)(param_1 + 0x10);
                psVar27 = *(short **)(param_2 + 0x20);
                do {
                  *psVar27 = (short)*pcVar26;
                  uVar12 = uVar12 - 1;
                  pcVar26 = pcVar26 + 1;
                  psVar27 = psVar27 + 1;
                } while (uVar12 != 0);
                return param_1;
              }
            }
            else {
              if (uVar41 != 8) goto LAB_109d13170;
              if ((param_1[0x24] & 1) == 0) {
                uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                         *(int *)(param_1 + 4);
              }
              else {
                uVar41 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar41 = *piVar6 * uVar41;
                }
              }
              uVar12 = (ulong)uVar41;
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar19 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar19 = *piVar6 * uVar19;
                }
              }
              if (uVar41 == uVar19) {
                if (uVar41 == 0) {
                  return param_1;
                }
                pcVar26 = *(char **)(param_1 + 0x10);
                piVar6 = *(int **)(param_2 + 0x20);
                do {
                  *piVar6 = (int)*pcVar26;
                  uVar12 = uVar12 - 1;
                  pcVar26 = pcVar26 + 1;
                  piVar6 = piVar6 + 1;
                } while (uVar12 != 0);
                return param_1;
              }
            }
          }
          else if (uVar41 == 7) {
            uVar41 = *(uint *)(param_2 + 0x18);
            uVar11 = (ulong)uVar41;
            if ((int)uVar41 < 4) {
              if ((int)uVar41 < 2) {
                if (uVar41 == 0) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    lVar38 = (ulong)uVar41 << 1;
                    psVar27 = *(short **)(param_1 + 0x10);
                    psVar30 = *(short **)(param_2 + 0x20);
                    do {
                      uVar11 = (ulong)((uint)(float)(int)*psVar27 >> 0x17);
                      *psVar30 = *(short *)(&UNK_10e04070a + uVar11 * 2) +
                                 (short)(((uint)(float)(int)*psVar27 & 0x7fffff) >>
                                        (ulong)((byte)(&UNK_10e040b0a)[uVar11] & 0x1f));
                      lVar38 = lVar38 + -2;
                      psVar27 = psVar27 + 1;
                      psVar30 = psVar30 + 1;
                    } while (lVar38 != 0);
                    return param_1;
                  }
                }
                else {
                  if (uVar41 != 1) {
LAB_109d13328:
                    func_0x000107c31940(&uStack_70,&UNK_10f5ac487);
                    func_0x000109259240(&pcStack_58,&uStack_70,&UNK_10f5a35f2);
                    __ZNSt3__19to_stringEi(&ppppppuStack_88,uVar11);
                    pppppppuVar2 = (undefined8 *******)ppppppuStack_88;
                    if (-1 < (char)bStack_71) {
                      uStack_80 = (ulong)bStack_71;
                      pppppppuVar2 = &ppppppuStack_88;
                    }
                    ppcVar9 = &pcStack_58;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (ppcVar9,pppppppuVar2,uStack_80);
                    ppcVar9[1] = (char *)0x0;
                    ppcVar9[2] = (char *)0x0;
                    *ppcVar9 = (char *)0x0;
                    if ((char)bStack_71 < '\0') {
                      __ZdlPv(ppppppuStack_88);
                    }
                    if (cStack_41 < '\0') {
                      __ZdlPv(pcStack_58);
                    }
                    if (uStack_60._7_1_ < '\0') {
                      __ZdlPv(CONCAT44(uStack_6c,uStack_70));
                    }
                    plVar8 = (long *)0x10;
                    ___cxa_allocate_exception();
                    __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              ();
                    *plVar8 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                    ___cxa_throw(plVar8,PTR___ZTISt16invalid_argument_110352248,
                                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    goto LAB_109d134dc;
                  }
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    lVar38 = (ulong)uVar41 << 1;
                    psVar27 = *(short **)(param_1 + 0x10);
                    pfVar24 = *(float **)(param_2 + 0x20);
                    do {
                      *pfVar24 = (float)(int)*psVar27;
                      lVar38 = lVar38 + -2;
                      psVar27 = psVar27 + 1;
                      pfVar24 = pfVar24 + 1;
                    } while (lVar38 != 0);
                    return param_1;
                  }
                }
              }
              else if (uVar41 == 2) {
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 1;
                  psVar27 = *(short **)(param_1 + 0x10);
                  pdVar22 = *(double **)(param_2 + 0x20);
                  do {
                    *pdVar22 = (double)(int)*psVar27;
                    lVar38 = lVar38 + -2;
                    psVar27 = psVar27 + 1;
                    pdVar22 = pdVar22 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
              else {
                if (uVar41 != 3) goto LAB_109d13328;
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 1;
                  puVar23 = *(undefined1 **)(param_1 + 0x10);
                  puVar32 = *(undefined1 **)(param_2 + 0x20);
                  do {
                    *puVar32 = *puVar23;
                    lVar38 = lVar38 + -2;
                    puVar23 = puVar23 + 2;
                    puVar32 = puVar32 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
            }
            else if ((int)uVar41 < 6) {
              if (uVar41 == 4) {
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                uVar12 = (ulong)uVar41;
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12910;
                iVar17 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar17 = *piVar6 * iVar17;
                }
                goto LAB_109d12924;
              }
              if (uVar41 != 5) goto LAB_109d13328;
              if ((param_1[0x24] & 1) == 0) {
                uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                         *(int *)(param_1 + 4);
              }
              else {
                uVar41 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar41 = *piVar6 * uVar41;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar19 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar19 = *piVar6 * uVar19;
                }
              }
              if (uVar41 == uVar19) {
                if (uVar41 == 0) {
                  return param_1;
                }
                lVar38 = (ulong)uVar41 << 1;
                psVar27 = *(short **)(param_1 + 0x10);
                piVar6 = *(int **)(param_2 + 0x20);
                do {
                  *piVar6 = (int)*psVar27;
                  lVar38 = lVar38 + -2;
                  psVar27 = psVar27 + 1;
                  piVar6 = piVar6 + 1;
                } while (lVar38 != 0);
                return param_1;
              }
            }
            else if (uVar41 == 6) {
              if ((param_1[0x24] & 1) == 0) {
                uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                         *(int *)(param_1 + 4);
              }
              else {
                uVar41 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar41 = *piVar6 * uVar41;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar19 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar19 = *piVar6 * uVar19;
                }
              }
              if (uVar41 == uVar19) {
                if (uVar41 == 0) {
                  return param_1;
                }
                lVar38 = (ulong)uVar41 << 1;
                puVar23 = *(undefined1 **)(param_1 + 0x10);
                puVar32 = *(undefined1 **)(param_2 + 0x20);
                do {
                  *puVar32 = *puVar23;
                  lVar38 = lVar38 + -2;
                  puVar23 = puVar23 + 2;
                  puVar32 = puVar32 + 1;
                } while (lVar38 != 0);
                return param_1;
              }
            }
            else {
              if (uVar41 == 7) {
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                uVar12 = (ulong)uVar41;
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12910;
                iVar17 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar17 = *piVar6 * iVar17;
                }
                goto LAB_109d12924;
              }
              if (uVar41 != 8) goto LAB_109d13328;
              if ((param_1[0x24] & 1) == 0) {
                uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                         *(int *)(param_1 + 4);
              }
              else {
                uVar41 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar41 = *piVar6 * uVar41;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar19 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar19 = *piVar6 * uVar19;
                }
              }
              if (uVar41 == uVar19) {
                if (uVar41 == 0) {
                  return param_1;
                }
                lVar38 = (ulong)uVar41 << 1;
                psVar27 = *(short **)(param_1 + 0x10);
                piVar6 = *(int **)(param_2 + 0x20);
                do {
                  *piVar6 = (int)*psVar27;
                  lVar38 = lVar38 + -2;
                  psVar27 = psVar27 + 1;
                  piVar6 = piVar6 + 1;
                } while (lVar38 != 0);
                return param_1;
              }
            }
          }
          else {
            if (uVar41 != 8) goto LAB_109d12c48;
            uVar41 = *(uint *)(param_2 + 0x18);
            uVar11 = (ulong)uVar41;
            if ((int)uVar41 < 4) {
              if ((int)uVar41 < 2) {
                if (uVar41 == 0) {
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    lVar38 = (ulong)uVar41 << 2;
                    piVar6 = *(int **)(param_1 + 0x10);
                    psVar27 = *(short **)(param_2 + 0x20);
                    do {
                      uVar11 = (ulong)((uint)(float)*piVar6 >> 0x17);
                      *psVar27 = *(short *)(&UNK_10e04070a + uVar11 * 2) +
                                 (short)(((uint)(float)*piVar6 & 0x7fffff) >>
                                        (ulong)((byte)(&UNK_10e040b0a)[uVar11] & 0x1f));
                      lVar38 = lVar38 + -4;
                      piVar6 = piVar6 + 1;
                      psVar27 = psVar27 + 1;
                    } while (lVar38 != 0);
                    return param_1;
                  }
                }
                else {
                  if (uVar41 != 1) {
LAB_109d13404:
                    func_0x000107c31940(&uStack_70,&UNK_10f5ac487);
                    func_0x000109259240(&pcStack_58,&uStack_70,&UNK_10f5a35f2);
                    __ZNSt3__19to_stringEi(&ppppppuStack_88,uVar11);
                    pppppppuVar2 = (undefined8 *******)ppppppuStack_88;
                    if (-1 < (char)bStack_71) {
                      uStack_80 = (ulong)bStack_71;
                      pppppppuVar2 = &ppppppuStack_88;
                    }
                    ppcVar9 = &pcStack_58;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (ppcVar9,pppppppuVar2,uStack_80);
                    ppcVar9[1] = (char *)0x0;
                    ppcVar9[2] = (char *)0x0;
                    *ppcVar9 = (char *)0x0;
                    if ((char)bStack_71 < '\0') {
                      __ZdlPv(ppppppuStack_88);
                    }
                    if (cStack_41 < '\0') {
                      __ZdlPv(pcStack_58);
                    }
                    if (uStack_60._7_1_ < '\0') {
                      __ZdlPv(CONCAT44(uStack_6c,uStack_70));
                    }
                    plVar8 = (long *)0x10;
                    ___cxa_allocate_exception();
                    __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              ();
                    *plVar8 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                    ___cxa_throw(plVar8,PTR___ZTISt16invalid_argument_110352248,
                                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    goto LAB_109d134dc;
                  }
                  if ((param_1[0x24] & 1) == 0) {
                    uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6)
                             * *(int *)(param_1 + 4);
                  }
                  else {
                    uVar41 = 1;
                    for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                        piVar6 = piVar6 + 1) {
                      uVar41 = *piVar6 * uVar41;
                    }
                  }
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                             *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                  }
                  else {
                    uVar19 = 1;
                    for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                        piVar6 = piVar6 + 1) {
                      uVar19 = *piVar6 * uVar19;
                    }
                  }
                  if (uVar41 == uVar19) {
                    if (uVar41 == 0) {
                      return param_1;
                    }
                    lVar38 = (ulong)uVar41 << 2;
                    piVar6 = *(int **)(param_1 + 0x10);
                    pfVar24 = *(float **)(param_2 + 0x20);
                    do {
                      *pfVar24 = (float)*piVar6;
                      lVar38 = lVar38 + -4;
                      piVar6 = piVar6 + 1;
                      pfVar24 = pfVar24 + 1;
                    } while (lVar38 != 0);
                    return param_1;
                  }
                }
              }
              else if (uVar41 == 2) {
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 2;
                  piVar6 = *(int **)(param_1 + 0x10);
                  pdVar22 = *(double **)(param_2 + 0x20);
                  do {
                    *pdVar22 = (double)*piVar6;
                    lVar38 = lVar38 + -4;
                    piVar6 = piVar6 + 1;
                    pdVar22 = pdVar22 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
              else {
                if (uVar41 != 3) goto LAB_109d13404;
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                  uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                           *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
                }
                else {
                  uVar19 = 1;
                  for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                      piVar6 = piVar6 + 1) {
                    uVar19 = *piVar6 * uVar19;
                  }
                }
                if (uVar41 == uVar19) {
                  if (uVar41 == 0) {
                    return param_1;
                  }
                  lVar38 = (ulong)uVar41 << 2;
                  puVar28 = *(undefined4 **)(param_1 + 0x10);
                  puVar23 = *(undefined1 **)(param_2 + 0x20);
                  do {
                    *puVar23 = (char)*puVar28;
                    lVar38 = lVar38 + -4;
                    puVar28 = puVar28 + 1;
                    puVar23 = puVar23 + 1;
                  } while (lVar38 != 0);
                  return param_1;
                }
              }
            }
            else if ((int)uVar41 < 6) {
              if (uVar41 != 4) {
                if (uVar41 != 5) goto LAB_109d13404;
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                uVar12 = (ulong)uVar41;
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12be0;
                iVar17 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar17 = *piVar6 * iVar17;
                }
                goto LAB_109d12bf4;
              }
              if ((param_1[0x24] & 1) == 0) {
                uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                         *(int *)(param_1 + 4);
              }
              else {
                uVar41 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar41 = *piVar6 * uVar41;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar19 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar19 = *piVar6 * uVar19;
                }
              }
              if (uVar41 == uVar19) {
                if (uVar41 == 0) {
                  return param_1;
                }
                lVar38 = (ulong)uVar41 << 2;
                puVar28 = *(undefined4 **)(param_1 + 0x10);
                puVar33 = *(undefined2 **)(param_2 + 0x20);
                do {
                  *puVar33 = (short)*puVar28;
                  lVar38 = lVar38 + -4;
                  puVar28 = puVar28 + 1;
                  puVar33 = puVar33 + 1;
                } while (lVar38 != 0);
                return param_1;
              }
            }
            else if (uVar41 == 6) {
              if ((param_1[0x24] & 1) == 0) {
                uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                         *(int *)(param_1 + 4);
              }
              else {
                uVar41 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar41 = *piVar6 * uVar41;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar19 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar19 = *piVar6 * uVar19;
                }
              }
              if (uVar41 == uVar19) {
                if (uVar41 == 0) {
                  return param_1;
                }
                lVar38 = (ulong)uVar41 << 2;
                puVar28 = *(undefined4 **)(param_1 + 0x10);
                puVar23 = *(undefined1 **)(param_2 + 0x20);
                do {
                  *puVar23 = (char)*puVar28;
                  lVar38 = lVar38 + -4;
                  puVar28 = puVar28 + 1;
                  puVar23 = puVar23 + 1;
                } while (lVar38 != 0);
                return param_1;
              }
            }
            else {
              if (uVar41 != 7) {
                if (uVar41 != 8) goto LAB_109d13404;
                if ((param_1[0x24] & 1) == 0) {
                  uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                           *(int *)(param_1 + 4);
                }
                else {
                  uVar41 = 1;
                  for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                      piVar6 = piVar6 + 1) {
                    uVar41 = *piVar6 * uVar41;
                  }
                }
                uVar12 = (ulong)uVar41;
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12be0;
                iVar17 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  iVar17 = *piVar6 * iVar17;
                }
                goto LAB_109d12bf4;
              }
              if ((param_1[0x24] & 1) == 0) {
                uVar41 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                         *(int *)(param_1 + 4);
              }
              else {
                uVar41 = 1;
                for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
                    piVar6 = piVar6 + 1) {
                  uVar41 = *piVar6 * uVar41;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar19 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar19 = 1;
                for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
                    piVar6 = piVar6 + 1) {
                  uVar19 = *piVar6 * uVar19;
                }
              }
              if (uVar41 == uVar19) {
                if (uVar41 == 0) {
                  return param_1;
                }
                lVar38 = (ulong)uVar41 << 2;
                puVar28 = *(undefined4 **)(param_1 + 0x10);
                puVar33 = *(undefined2 **)(param_2 + 0x20);
                do {
                  *puVar33 = (short)*puVar28;
                  lVar38 = lVar38 + -4;
                  puVar28 = puVar28 + 1;
                  puVar33 = puVar33 + 1;
                } while (lVar38 != 0);
                return param_1;
              }
            }
          }
LAB_109d12c30:
          func_0x00010952d0c4(&UNK_10f5aa38f,&UNK_10f5aa38f,&UNK_10f5ac492);
        }
LAB_109d12c48:
        func_0x000107c31940(&uStack_70,&UNK_10f5ac487);
        func_0x000109259240(&pcStack_58,&uStack_70,&UNK_10f5a35f2);
        __ZNSt3__19to_stringEi(&ppppppuStack_88,uVar11);
        pppppppuVar2 = (undefined8 *******)ppppppuStack_88;
        if (-1 < (char)bStack_71) {
          uStack_80 = (ulong)bStack_71;
          pppppppuVar2 = &ppppppuStack_88;
        }
        ppcVar9 = &pcStack_58;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppcVar9,pppppppuVar2,uStack_80);
        ppcVar9[1] = (char *)0x0;
        ppcVar9[2] = (char *)0x0;
        *ppcVar9 = (char *)0x0;
        if ((char)bStack_71 < '\0') {
          __ZdlPv(ppppppuStack_88);
        }
        if (cStack_41 < '\0') {
          __ZdlPv(pcStack_58);
        }
        if (uStack_60._7_1_ < '\0') {
          __ZdlPv(CONCAT44(uStack_6c,uStack_70));
        }
        plVar8 = (long *)0x10;
        ___cxa_allocate_exception();
        __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
        *plVar8 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
        ___cxa_throw(plVar8,PTR___ZTISt16invalid_argument_110352248,
                     PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
LAB_109d134dc:
                    /* WARNING: Does not return */
        pcVar40 = (code *)SoftwareBreakpoint(1,0x109d134e0);
        (*pcVar40)();
      }
      goto LAB_109d0f178;
    }
    if (*(char *)(param_2 + 0x48) == '\x01') {
      iVar17 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
               *(int *)(param_1 + 4);
      goto LAB_109d0eda0;
    }
    unaff_x22 = (uint *)(param_1 + 4);
    if ((((*unaff_x22 != *(uint *)(param_2 + 8)) ||
         (*(uint *)(param_1 + 6) != *(uint *)(param_2 + 0xc))) ||
        (*(uint *)(param_1 + 8) != *(uint *)(param_2 + 0x10))) ||
       (*(int *)(param_1 + 10) != *(int *)(param_2 + 0x14))) goto LAB_109d0f15c;
    iVar17 = *(int *)(param_1 + 0xe);
    iVar18 = *(int *)(param_2 + 0x1c);
    if (iVar17 == iVar18) goto LAB_109d0eeac;
    cStack_41 = iVar17 == 1 && iVar18 == 0;
    if (((bool)cStack_41) || (iVar17 == 0 && iVar18 == 1)) {
      lStack_50 = (ulong)*(uint *)(param_1 + 6) * (ulong)*unaff_x22 * (ulong)*(uint *)(param_1 + 8);
      uStack_60 = &lStack_50;
      pcStack_58 = &cStack_41;
      puStack_68 = unaff_x22;
      if ((uVar41 != uVar19) &&
         (((5 < uVar41 - 3 || (5 < uVar19 - 3)) ||
          (*(int *)(&UNK_10e040d58 + (ulong)(uVar41 - 3) * 4) !=
           *(int *)(&UNK_10e040d58 + (ulong)(uVar19 - 3) * 4))))) {
        FUN_109d0f2ac();
        uVar41 = *(uint *)(param_2 + 0x18);
        FUN_109d0f2ac();
        if (uVar41 < (uint)uVar11) {
          uStack_70 = *(undefined4 *)(param_2 + 0x18);
          uStack_6c = *(undefined4 *)(param_1 + 0xe);
          if (param_3 == 0) {
            FUN_109d0eb9c(auStack_c0,unaff_x22,&uStack_70);
          }
          else {
            FUN_109cdb604(param_3,unaff_x22,&uStack_70);
          }
          FUN_109d0f718(param_1,auStack_c0,*(undefined4 *)(param_1 + 0xc));
          FUN_109d0f1c8(&puStack_68,auStack_c0,param_2);
        }
        else {
          uStack_70 = *(undefined4 *)(param_1 + 0xc);
          uStack_6c = *(undefined4 *)(param_2 + 0x1c);
          if (param_3 == 0) {
            FUN_109d0eb9c(auStack_c0,unaff_x22,&uStack_70);
          }
          else {
            FUN_109cdb604(param_3,unaff_x22,&uStack_70);
          }
          FUN_109d0f1c8(&puStack_68,param_1,auStack_c0);
          FUN_109d0f718(auStack_c0,param_2,uStack_a8);
        }
        func_0x000105675c90(auStack_c0);
        return puVar37;
      }
      if (uVar41 < 9) {
        if (*(int *)(param_1 + 10) == 0) {
          return puVar5;
        }
        lVar38 = 0;
        uVar12 = 0;
        lVar36 = *(long *)(&UNK_10e040d10 + uVar11 * 8);
        do {
          uVar15 = (ulong)*(uint *)(param_1 + 6) * (ulong)*(uint *)(param_1 + 4);
          puVar37 = (ushort *)(*(long *)(param_1 + 0x10) + lVar38 * lStack_50);
          uVar11 = (ulong)*(uint *)(param_1 + 8);
          if (cStack_41 == '\x01') {
            uVar11 = uVar15;
            uVar15 = (ulong)*(uint *)(param_1 + 8);
          }
          FUN_109d16334(puVar37,*(long *)(param_2 + 0x20) + lVar38 * lStack_50,uVar11,uVar15,lVar36)
          ;
          uVar12 = uVar12 + 1;
          lVar38 = lVar38 + lVar36;
        } while (uVar12 < *(uint *)(param_1 + 10));
        return puVar37;
      }
      goto LAB_109d0f13c;
    }
  }
  else {
    if ((uVar41 == uVar19) && (*(int *)(param_1 + 0xe) == *(int *)(param_2 + 0x1c))) {
      if ((param_1[0x24] & 1) == 0) {
        iVar17 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                 *(int *)(param_1 + 4);
      }
      else {
        iVar17 = 1;
        for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
            piVar6 = piVar6 + 1) {
          iVar17 = *piVar6 * iVar17;
        }
      }
      if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
        iVar18 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                 *(int *)(param_2 + 8);
      }
      else {
        iVar18 = 1;
        for (piVar6 = *(int **)(param_2 + 0x30); piVar6 != *(int **)(param_2 + 0x38);
            piVar6 = piVar6 + 1) {
          iVar18 = *piVar6 * iVar18;
        }
      }
      if (iVar17 != iVar18) goto LAB_109d0f120;
      if ((param_1[0x24] & 1) == 0) {
        iVar17 = *(int *)(param_1 + 8) * *(int *)(param_1 + 10) * *(int *)(param_1 + 6) *
                 *(int *)(param_1 + 4);
      }
      else {
        iVar17 = 1;
        for (piVar6 = *(int **)(param_1 + 0x18); piVar6 != *(int **)(param_1 + 0x1c);
            piVar6 = piVar6 + 1) {
          iVar17 = *piVar6 * iVar17;
        }
      }
      if (uVar41 < 0xf) {
        uVar12 = (ulong)(uint)(*(int *)(&UNK_10e040de8 + uVar11 * 4) * iVar17);
        if (*(int *)(&UNK_10e040de8 + uVar11 * 4) * iVar17 == 0) {
          return puVar5;
        }
        goto code_r0x00010bdbf0a8;
      }
    }
    else {
      func_0x00010952d0c4(&UNK_10f5ac32c,&UNK_10f5ac2e0,&UNK_10f5ac333);
LAB_109d0f120:
      func_0x00010952d0c4(&UNK_10f5ac32c,&UNK_10f5ac2e0,&UNK_10f5ac3a9);
    }
LAB_109d0f13c:
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
LAB_109d0f15c:
    func_0x00010952d0c4(&UNK_10f5ac32c,&UNK_10f5ac2e0,&UNK_10f5ac400);
LAB_109d0f178:
    func_0x00010952d0c4(&UNK_10f5ac32c,&UNK_10f5ac2e0,&UNK_10f5ac3d1);
  }
  puVar37 = (ushort *)&UNK_10f5ac32c;
  puVar13 = &UNK_10f5ac2e0;
  puVar7 = &UNK_10f5ac429;
  func_0x00010952d0c4();
  func_0x000105675c90(auStack_c0);
  puVar5 = puVar37;
  __Unwind_Resume();
  pcStack_c8 = FUN_109d0f1c8;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (*(uint *)(puVar13 + 0x18) < 0xf) {
    puVar14 = *(uint **)puVar5;
    puVar37 = puVar5;
    if (puVar14[3] != 0) {
      lVar38 = 0;
      uVar11 = 0;
      lVar36 = *(long *)(&UNK_10e040d70 + (ulong)*(uint *)(puVar13 + 0x18) * 8);
      do {
        uVar15 = (ulong)puVar14[1] * (ulong)*puVar14;
        puVar37 = (ushort *)(*(long *)(puVar13 + 0x20) + lVar38 * **(long **)(puVar5 + 4));
        uVar12 = (ulong)puVar14[2];
        if (**(char **)(puVar5 + 8) == '\x01') {
          uVar12 = uVar15;
          uVar15 = (ulong)puVar14[2];
        }
        FUN_109d16334(puVar37,*(long *)(puVar7 + 0x20) + lVar38 * **(long **)(puVar5 + 4),uVar12,
                      uVar15,lVar36);
        uVar11 = uVar11 + 1;
        puVar14 = *(uint **)puVar5;
        lVar38 = lVar38 + lVar36;
      } while (uVar11 < puVar14[3]);
    }
    return puVar37;
  }
  puVar13 = &UNK_10dfd21d7;
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
  if ((uint)puVar13 < 0xf) {
    return (ushort *)(ulong)*(uint *)(&UNK_10e040de8 + ((ulong)puVar13 & 0xffffffff) * 4);
  }
  pppuVar39 = &ppuStack_110;
  pcStack_108 = FUN_109d0f2ac;
  piVar6 = (int *)&UNK_10dfd21d7;
  puVar14 = (uint *)&UNK_10f5ac4bc;
  puVar13 = &UNK_10f5ac4cb;
  pcVar40 = FUN_109d0f2ec;
  ppuStack_110 = &puStack_d0;
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
  pppuVar3 = &ppuStack_110;
  puVar5 = extraout_x8;
  while( true ) {
    puVar16 = puVar5;
    puVar5 = (ushort *)((long)pppuVar3 + -0x50);
    *(undefined8 *)((long)pppuVar3 + -0x40) = unaff_x24;
    *(undefined8 *)((long)pppuVar3 + -0x38) = unaff_x23;
    *(uint **)((long)pppuVar3 + -0x30) = unaff_x22;
    *(long *)((long)pppuVar3 + -0x28) = param_3;
    *(long *)((long)pppuVar3 + -0x20) = param_2;
    *(ushort **)((long)pppuVar3 + -0x18) = puVar37;
    *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar39;
    *(code **)((long)pppuVar3 + -8) = pcVar40;
    pppuVar39 = (undefined1 ***)((long)pppuVar3 + -0x10);
    if (*puVar14 < 0xf) {
      uVar41 = piVar6[2] * piVar6[3] * piVar6[1] * *piVar6 *
               *(int *)(&UNK_10e040de8 + (ulong)*puVar14 * 4);
      uVar12 = (ulong)uVar41;
      uVar11 = uVar12;
      __Znam(uVar12);
      _bzero();
      func_0x00010928e964((undefined1 *)((long)pppuVar3 + -0x50),uVar11);
      if (uVar41 != 0) {
        puVar5 = *(ushort **)((long)pppuVar3 + -0x50);
        _memmove(puVar5,puVar13,uVar12);
      }
      uVar44 = *(undefined8 *)((long)pppuVar3 + -0x48);
      uVar43 = *(undefined8 *)((long)pppuVar3 + -0x50);
      if (*(long *)((long)pppuVar3 + -0x48) == 0) {
        puVar37 = (ushort *)0x0;
      }
      else {
        plVar8 = (long *)(*(long *)((long)pppuVar3 + -0x48) + 8);
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar37 = *(ushort **)((long)pppuVar3 + -0x48);
      }
      *(undefined ***)puVar16 = &PTR_DAT_1108a5c28;
      uVar45 = *(undefined8 *)piVar6;
      *(undefined8 *)(puVar16 + 8) = *(undefined8 *)(piVar6 + 2);
      *(undefined8 *)(puVar16 + 4) = uVar45;
      *(undefined8 *)(puVar16 + 0xc) = *(undefined8 *)puVar14;
      *(undefined8 *)(puVar16 + 0x14) = uVar44;
      *(undefined8 *)(puVar16 + 0x10) = uVar43;
      *(undefined1 *)(puVar16 + 0x18) = 0;
      *(undefined1 *)(puVar16 + 0x24) = 0;
      if (puVar37 != (ushort *)0x0) {
        puVar10 = puVar37 + 4;
        do {
          lVar38 = *(long *)puVar10;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar10,0x10);
          if (bVar4) {
            *(long *)puVar10 = lVar38 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar38 == 0) {
          (**(code **)(*(long *)puVar37 + 0x10))(puVar37);
          __ZNSt3__119__shared_weak_count14__release_weakEv(puVar37);
          puVar5 = puVar37;
        }
      }
      return puVar5;
    }
    puVar7 = &UNK_10dfd21d7;
    pcVar40 = FUN_109d0f438;
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
    if ((puVar7[0x48] & 1) != 0) break;
    puVar13 = *(undefined **)(puVar7 + 0x20);
    piVar6 = (int *)(puVar7 + 8);
    puVar14 = (uint *)(puVar7 + 0x18);
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x50);
    puVar5 = extraout_x8_00;
    puVar37 = puVar16;
  }
  uVar42 = *(undefined4 *)(puVar7 + 0x18);
  puVar10 = *(ushort **)(puVar7 + 0x20);
  puVar37 = (ushort *)(puVar7 + 0x30);
  *(long *)((long)pppuVar3 + -0x70) = param_2;
  *(ushort **)((long)pppuVar3 + -0x68) = puVar16;
  *(undefined1 ****)((long)pppuVar3 + -0x60) = pppuVar39;
  *(code **)((long)pppuVar3 + -0x58) = FUN_109d0f438;
  func_0x0001099ae3a4(puVar37,uVar42);
  if ((extraout_x8_00[0x24] & 1) == 0) {
    iVar17 = *(int *)(extraout_x8_00 + 8) * *(int *)(extraout_x8_00 + 10) *
             *(int *)(extraout_x8_00 + 6) * *(int *)(extraout_x8_00 + 4);
  }
  else {
    iVar17 = 1;
    for (piVar6 = *(int **)(extraout_x8_00 + 0x18); piVar6 != *(int **)(extraout_x8_00 + 0x1c);
        piVar6 = piVar6 + 1) {
      iVar17 = *piVar6 * iVar17;
    }
  }
  if (0xe < *(uint *)(extraout_x8_00 + 0xc)) {
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
                    /* WARNING: Does not return */
    pcVar40 = (code *)SoftwareBreakpoint(1,0x109d0f518);
    (*pcVar40)();
  }
  uVar12 = (ulong)(uint)(*(int *)(&UNK_10e040de8 + (ulong)*(uint *)(extraout_x8_00 + 0xc) * 4) *
                        iVar17);
  if (*(int *)(&UNK_10e040de8 + (ulong)*(uint *)(extraout_x8_00 + 0xc) * 4) * iVar17 == 0) {
    return puVar37;
  }
  puVar5 = *(ushort **)(extraout_x8_00 + 0x10);
code_r0x00010bdbf0a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(puVar5,puVar10,uVar12);
  return puVar5;
}



/* Entry: 109d0f1c8; end: 109d0f2ab;  */

long * FUN_109d0f1c8(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  int *piVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  int iVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 *extraout_x8;
  undefined8 *puVar16;
  undefined8 *extraout_x8_00;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar17;
  long *plVar18;
  undefined8 unaff_x23;
  long lVar19;
  ulong uVar20;
  undefined8 unaff_x24;
  ulong uVar21;
  undefined1 **ppuVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if (*(uint *)(param_2 + 0x18) < 0xf) {
    puVar14 = (uint *)*param_1;
    plVar9 = param_1;
    if (puVar14[3] != 0) {
      lVar19 = 0;
      uVar21 = 0;
      lVar17 = *(long *)(&UNK_10e040d70 + (ulong)*(uint *)(param_2 + 0x18) * 8);
      do {
        uVar15 = (ulong)puVar14[1] * (ulong)*puVar14;
        plVar9 = (long *)(*(long *)(param_2 + 0x20) + lVar19 * *(long *)param_1[1]);
        uVar20 = (ulong)puVar14[2];
        if (*(char *)param_1[2] == '\x01') {
          uVar20 = uVar15;
          uVar15 = (ulong)puVar14[2];
        }
        FUN_109d16334(plVar9,*(long *)(param_3 + 0x20) + lVar19 * *(long *)param_1[1],uVar20,uVar15,
                      lVar17);
        uVar21 = uVar21 + 1;
        puVar14 = (uint *)*param_1;
        lVar19 = lVar19 + lVar17;
      } while (uVar21 < puVar14[3]);
    }
    return plVar9;
  }
  puVar12 = &UNK_10dfd21d7;
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
  if ((uint)puVar12 < 0xf) {
    return (long *)(ulong)*(uint *)(&UNK_10e040de8 + ((ulong)puVar12 & 0xffffffff) * 4);
  }
  ppuVar22 = &puStack_50;
  pcStack_48 = FUN_109d0f2ac;
  piVar8 = (int *)&UNK_10dfd21d7;
  puVar14 = (uint *)&UNK_10f5ac4bc;
  puVar12 = &UNK_10f5ac4cb;
  pcVar23 = FUN_109d0f2ec;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
  ppuVar7 = &puStack_50;
  puVar6 = extraout_x8;
  while( true ) {
    puVar16 = puVar6;
    plVar9 = (long *)((long)ppuVar7 + -0x50);
    *(undefined8 *)((long)ppuVar7 + -0x40) = unaff_x24;
    *(undefined8 *)((long)ppuVar7 + -0x38) = unaff_x23;
    *(undefined8 *)((long)ppuVar7 + -0x30) = unaff_x22;
    *(undefined8 *)((long)ppuVar7 + -0x28) = unaff_x21;
    *(undefined8 *)((long)ppuVar7 + -0x20) = unaff_x20;
    *(undefined8 **)((long)ppuVar7 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar7 + -0x10) = ppuVar22;
    *(code **)((long)ppuVar7 + -8) = pcVar23;
    ppuVar22 = (undefined1 **)((long)ppuVar7 + -0x10);
    if (*puVar14 < 0xf) {
      uVar3 = piVar8[2] * piVar8[3] * piVar8[1] * *piVar8 *
              *(int *)(&UNK_10e040de8 + (ulong)*puVar14 * 4);
      uVar20 = (ulong)uVar3;
      uVar21 = uVar20;
      __Znam(uVar20);
      _bzero();
      func_0x00010928e964((undefined1 *)((long)ppuVar7 + -0x50),uVar21);
      if (uVar3 != 0) {
        plVar9 = *(long **)((long)ppuVar7 + -0x50);
        _memmove(plVar9,puVar12,uVar20);
      }
      uVar24 = *(undefined8 *)((long)ppuVar7 + -0x48);
      uVar11 = *(undefined8 *)((long)ppuVar7 + -0x50);
      if (*(long *)((long)ppuVar7 + -0x48) == 0) {
        plVar18 = (long *)0x0;
      }
      else {
        plVar18 = (long *)(*(long *)((long)ppuVar7 + -0x48) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar18 = *(long **)((long)ppuVar7 + -0x48);
      }
      *puVar16 = &PTR_DAT_1108a5c28;
      uVar25 = *(undefined8 *)piVar8;
      puVar16[2] = *(undefined8 *)(piVar8 + 2);
      puVar16[1] = uVar25;
      puVar16[3] = *(undefined8 *)puVar14;
      puVar16[5] = uVar24;
      puVar16[4] = uVar11;
      *(undefined1 *)(puVar16 + 6) = 0;
      *(undefined1 *)(puVar16 + 9) = 0;
      if (plVar18 != (long *)0x0) {
        plVar1 = plVar18 + 1;
        do {
          lVar19 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          plVar9 = plVar18;
        }
      }
      return plVar9;
    }
    puVar10 = &UNK_10dfd21d7;
    pcVar23 = FUN_109d0f438;
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
    if ((puVar10[0x48] & 1) != 0) break;
    puVar12 = *(undefined **)(puVar10 + 0x20);
    piVar8 = (int *)(puVar10 + 8);
    puVar14 = (uint *)(puVar10 + 0x18);
    ppuVar7 = (undefined1 **)((long)ppuVar7 + -0x50);
    puVar6 = extraout_x8_00;
    unaff_x19 = puVar16;
  }
  uVar2 = *(undefined4 *)(puVar10 + 0x18);
  uVar11 = *(undefined8 *)(puVar10 + 0x20);
  plVar9 = (long *)(puVar10 + 0x30);
  *(undefined8 *)((long)ppuVar7 + -0x70) = unaff_x20;
  *(undefined8 **)((long)ppuVar7 + -0x68) = puVar16;
  *(undefined1 ***)((long)ppuVar7 + -0x60) = ppuVar22;
  *(code **)((long)ppuVar7 + -0x58) = FUN_109d0f438;
  func_0x0001099ae3a4(plVar9,uVar2);
  if ((*(byte *)(extraout_x8_00 + 9) & 1) == 0) {
    iVar13 = *(int *)(extraout_x8_00 + 2) * *(int *)((long)extraout_x8_00 + 0x14) *
             *(int *)((long)extraout_x8_00 + 0xc) * *(int *)(extraout_x8_00 + 1);
  }
  else {
    iVar13 = 1;
    for (piVar8 = (int *)extraout_x8_00[6]; piVar8 != (int *)extraout_x8_00[7]; piVar8 = piVar8 + 1)
    {
      iVar13 = *piVar8 * iVar13;
    }
  }
  if (0xe < *(uint *)(extraout_x8_00 + 3)) {
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x109d0f518);
    (*pcVar23)();
  }
  if (*(int *)(&UNK_10e040de8 + (ulong)*(uint *)(extraout_x8_00 + 3) * 4) * iVar13 == 0) {
    return plVar9;
  }
  plVar9 = (long *)extraout_x8_00[4];
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(plVar9,uVar11);
  return plVar9;
}



/* Entry: 109d0f2ac; end: 109d0f2eb;  */

long * FUN_109d0f2ac(uint param_1)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  int *piVar8;
  ulong uVar9;
  long *plVar10;
  undefined *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  int iVar15;
  undefined8 *extraout_x8;
  undefined8 *puVar16;
  undefined8 *extraout_x8_00;
  long lVar17;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *plVar18;
  undefined8 unaff_x23;
  ulong uVar19;
  undefined8 unaff_x24;
  undefined1 *puVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if (param_1 < 0xf) {
    return (long *)(ulong)*(uint *)(&UNK_10e040de8 + (ulong)param_1 * 4);
  }
  puVar20 = &stack0xfffffffffffffff0;
  piVar8 = (int *)&UNK_10dfd21d7;
  puVar12 = (uint *)&UNK_10f5ac4bc;
  puVar14 = &UNK_10f5ac4cb;
  pcVar21 = FUN_109d0f2ec;
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
  puVar7 = &stack0xfffffffffffffff0;
  puVar6 = extraout_x8;
  while( true ) {
    puVar16 = puVar6;
    plVar10 = (long *)(puVar7 + -0x50);
    *(undefined8 *)(puVar7 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar7 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar7 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x10) = puVar20;
    *(code **)(puVar7 + -8) = pcVar21;
    puVar20 = puVar7 + -0x10;
    if (*puVar12 < 0xf) {
      uVar3 = piVar8[2] * piVar8[3] * piVar8[1] * *piVar8 *
              *(int *)(&UNK_10e040de8 + (ulong)*puVar12 * 4);
      uVar19 = (ulong)uVar3;
      uVar9 = uVar19;
      __Znam(uVar19);
      _bzero();
      func_0x00010928e964(puVar7 + -0x50,uVar9);
      if (uVar3 != 0) {
        plVar10 = *(long **)(puVar7 + -0x50);
        _memmove(plVar10,puVar14,uVar19);
      }
      uVar22 = *(undefined8 *)(puVar7 + -0x48);
      uVar13 = *(undefined8 *)(puVar7 + -0x50);
      if (*(long *)(puVar7 + -0x48) == 0) {
        plVar18 = (long *)0x0;
      }
      else {
        plVar18 = (long *)(*(long *)(puVar7 + -0x48) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar18 = *(long **)(puVar7 + -0x48);
      }
      *puVar16 = &PTR_DAT_1108a5c28;
      uVar23 = *(undefined8 *)piVar8;
      puVar16[2] = *(undefined8 *)(piVar8 + 2);
      puVar16[1] = uVar23;
      puVar16[3] = *(undefined8 *)puVar12;
      puVar16[5] = uVar22;
      puVar16[4] = uVar13;
      *(undefined1 *)(puVar16 + 6) = 0;
      *(undefined1 *)(puVar16 + 9) = 0;
      if (plVar18 != (long *)0x0) {
        plVar1 = plVar18 + 1;
        do {
          lVar17 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          plVar10 = plVar18;
        }
      }
      return plVar10;
    }
    puVar11 = &UNK_10dfd21d7;
    pcVar21 = FUN_109d0f438;
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
    if ((puVar11[0x48] & 1) != 0) break;
    puVar14 = *(undefined **)(puVar11 + 0x20);
    piVar8 = (int *)(puVar11 + 8);
    puVar12 = (uint *)(puVar11 + 0x18);
    puVar7 = puVar7 + -0x50;
    puVar6 = extraout_x8_00;
    unaff_x19 = puVar16;
  }
  uVar2 = *(undefined4 *)(puVar11 + 0x18);
  uVar13 = *(undefined8 *)(puVar11 + 0x20);
  plVar10 = (long *)(puVar11 + 0x30);
  *(undefined8 *)(puVar7 + -0x70) = unaff_x20;
  *(undefined8 **)(puVar7 + -0x68) = puVar16;
  *(undefined1 **)(puVar7 + -0x60) = puVar20;
  *(code **)(puVar7 + -0x58) = FUN_109d0f438;
  func_0x0001099ae3a4(plVar10,uVar2);
  if ((*(byte *)(extraout_x8_00 + 9) & 1) == 0) {
    iVar15 = *(int *)(extraout_x8_00 + 2) * *(int *)((long)extraout_x8_00 + 0x14) *
             *(int *)((long)extraout_x8_00 + 0xc) * *(int *)(extraout_x8_00 + 1);
  }
  else {
    iVar15 = 1;
    for (piVar8 = (int *)extraout_x8_00[6]; piVar8 != (int *)extraout_x8_00[7]; piVar8 = piVar8 + 1)
    {
      iVar15 = *piVar8 * iVar15;
    }
  }
  if (*(uint *)(extraout_x8_00 + 3) < 0xf) {
    if (*(int *)(&UNK_10e040de8 + (ulong)*(uint *)(extraout_x8_00 + 3) * 4) * iVar15 != 0) {
      plVar10 = (long *)extraout_x8_00[4];
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(plVar10,uVar13);
      return plVar10;
    }
    return plVar10;
  }
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x109d0f518);
  (*pcVar21)();
}



/* Entry: 109d0f2ec; end: 109d0f437;  */

void FUN_109d0f2ec(undefined8 *param_1,int *param_2,uint *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x8;
  long lVar12;
  int *piVar13;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *plVar14;
  undefined8 unaff_x23;
  ulong uVar15;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar16;
  undefined8 uVar17;
  
  while( true ) {
    puVar11 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*param_3 < 0xf) {
      uVar3 = param_2[2] * param_2[3] * param_2[1] * *param_2 *
              *(int *)(&UNK_10e040de8 + (ulong)*param_3 * 4);
      uVar15 = (ulong)uVar3;
      uVar7 = uVar15;
      __Znam(uVar15);
      _bzero();
      func_0x00010928e964((undefined1 *)((long)register0x00000008 + -0x50),uVar7);
      if (uVar3 != 0) {
        _memmove(*(undefined8 *)((long)register0x00000008 + -0x50),param_4,uVar15);
      }
      uVar16 = *(undefined8 *)((long)register0x00000008 + -0x48);
      uVar9 = *(undefined8 *)((long)register0x00000008 + -0x50);
      if (*(long *)((long)register0x00000008 + -0x48) == 0) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)(*(long *)((long)register0x00000008 + -0x48) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = *plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar14 = *(long **)((long)register0x00000008 + -0x48);
      }
      *puVar11 = &PTR_DAT_1108a5c28;
      uVar17 = *(undefined8 *)param_2;
      puVar11[2] = *(undefined8 *)(param_2 + 2);
      puVar11[1] = uVar17;
      puVar11[3] = *(undefined8 *)param_3;
      puVar11[5] = uVar16;
      puVar11[4] = uVar9;
      *(undefined1 *)(puVar11 + 6) = 0;
      *(undefined1 *)(puVar11 + 9) = 0;
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      return;
    }
    puVar8 = &UNK_10dfd21d7;
    unaff_x30 = FUN_109d0f438;
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
    if ((puVar8[0x48] & 1) != 0) break;
    param_4 = *(undefined8 *)(puVar8 + 0x20);
    param_2 = (int *)(puVar8 + 8);
    param_3 = (uint *)(puVar8 + 0x18);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = extraout_x8;
    unaff_x19 = puVar11;
  }
  uVar2 = *(undefined4 *)(puVar8 + 0x18);
  uVar9 = *(undefined8 *)(puVar8 + 0x20);
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x68) = puVar11;
  *(undefined1 **)((long)register0x00000008 + -0x60) = unaff_x29;
  *(code **)((long)register0x00000008 + -0x58) = FUN_109d0f438;
  func_0x0001099ae3a4(puVar8 + 0x30,uVar2);
  if ((*(byte *)(extraout_x8 + 9) & 1) == 0) {
    iVar10 = *(int *)(extraout_x8 + 2) * *(int *)((long)extraout_x8 + 0x14) *
             *(int *)((long)extraout_x8 + 0xc) * *(int *)(extraout_x8 + 1);
  }
  else {
    iVar10 = 1;
    for (piVar13 = (int *)extraout_x8[6]; piVar13 != (int *)extraout_x8[7]; piVar13 = piVar13 + 1) {
      iVar10 = *piVar13 * iVar10;
    }
  }
  if (*(uint *)(extraout_x8 + 3) < 0xf) {
    if (*(int *)(&UNK_10e040de8 + (ulong)*(uint *)(extraout_x8 + 3) * 4) * iVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(extraout_x8[4],uVar9);
      return;
    }
    return;
  }
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109d0f518);
  (*pcVar6)();
}



/* Entry: 109d0f438; end: 109d0f463;  */

void FUN_109d0f438(undefined8 *param_1,undefined *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *extraout_x8;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *plVar13;
  undefined8 unaff_x22;
  ulong uVar14;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar15;
  undefined8 uVar16;
  
  while (puVar10 = param_1, (param_2[0x48] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar2 = *(uint *)(param_2 + 0x18);
    if (uVar2 < 0xf) {
      uVar2 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
              *(int *)(param_2 + 8) * *(int *)(&UNK_10e040de8 + (ulong)uVar2 * 4);
      uVar14 = (ulong)uVar2;
      uVar7 = uVar14;
      __Znam(uVar14);
      _bzero();
      func_0x00010928e964((undefined1 *)((long)register0x00000008 + -0x50),uVar7);
      if (uVar2 != 0) {
        _memmove(*(undefined8 *)((long)register0x00000008 + -0x50),uVar8,uVar14);
      }
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x48);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x50);
      if (*(long *)((long)register0x00000008 + -0x48) == 0) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = (long *)(*(long *)((long)register0x00000008 + -0x48) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar13 = *(long **)((long)register0x00000008 + -0x48);
      }
      *puVar10 = &PTR_DAT_1108a5c28;
      uVar16 = *(undefined8 *)(param_2 + 8);
      puVar10[2] = *(undefined8 *)(param_2 + 0x10);
      puVar10[1] = uVar16;
      puVar10[3] = *(undefined8 *)(param_2 + 0x18);
      puVar10[5] = uVar15;
      puVar10[4] = uVar8;
      *(undefined1 *)(puVar10 + 6) = 0;
      *(undefined1 *)(puVar10 + 9) = 0;
      if (plVar13 != (long *)0x0) {
        plVar1 = plVar13 + 1;
        do {
          lVar11 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      return;
    }
    param_2 = &UNK_10dfd21d7;
    unaff_x30 = FUN_109d0f438;
    func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = extraout_x8;
    unaff_x19 = puVar10;
  }
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001099ae3a4(param_2 + 0x30,uVar3);
  if ((*(byte *)(puVar10 + 9) & 1) == 0) {
    iVar9 = *(int *)(puVar10 + 2) * *(int *)((long)puVar10 + 0x14) * *(int *)((long)puVar10 + 0xc) *
            *(int *)(puVar10 + 1);
  }
  else {
    iVar9 = 1;
    for (piVar12 = (int *)puVar10[6]; piVar12 != (int *)puVar10[7]; piVar12 = piVar12 + 1) {
      iVar9 = *piVar12 * iVar9;
    }
  }
  if (*(uint *)(puVar10 + 3) < 0xf) {
    if (*(int *)(&UNK_10e040de8 + (ulong)*(uint *)(puVar10 + 3) * 4) * iVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(puVar10[4],uVar8);
      return;
    }
    return;
  }
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109d0f518);
  (*pcVar6)();
}



/* Entry: 109d0f464; end: 109d0f52b;  */

void FUN_109d0f464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  func_0x0001099ae3a4();
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
            *(int *)(param_1 + 8);
  }
  else {
    iVar2 = 1;
    for (piVar3 = *(int **)(param_1 + 0x30); piVar3 != *(int **)(param_1 + 0x38);
        piVar3 = piVar3 + 1) {
      iVar2 = *piVar3 * iVar2;
    }
  }
  if (*(uint *)(param_1 + 0x18) < 0xf) {
    if (*(int *)(&UNK_10e040de8 + (ulong)*(uint *)(param_1 + 0x18) * 4) * iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(*(undefined8 *)(param_1 + 0x20),param_4);
      return;
    }
    return;
  }
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f5ac4bc,&UNK_10f5ac4cb);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d0f518);
  (*pcVar1)();
}



/* Entry: 109d0f52c; end: 109d0f5ff;  */

void FUN_109d0f52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 **ppuVar2;
  undefined ***pppuVar3;
  undefined **ppuStack_f0;
  code *pcStack_e8;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_4;
  uStack_88 = param_4[1];
  *param_4 = 0;
  (**(code **)(param_4[2] + 0x18))(apuStack_80,param_4 + 2);
  FUN_109d0eaa4(param_1,param_2,param_3,uVar1,&uStack_88);
  ppuVar2 = apuStack_80;
  (*(code *)*apuStack_80[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_80[0])(apuStack_80);
  __Unwind_Resume(ppuVar2);
  pcStack_98 = FUN_109d0f600;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f0 = &PTR_DAT_110b3e838;
  pcStack_e8 = FUN_109d0f6a8;
  uStack_b0 = param_2;
  ppuStack_a8 = ppuVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_109d0eaa4();
  pppuVar3 = &ppuStack_f0;
  (*(code *)*ppuStack_f0)(pppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  __Unwind_Resume(pppuVar3);
  return;
}



/* Entry: 109d0f600; end: 109d0f6a7;  */

void FUN_109d0f600(void)

{
  undefined ***pppuVar1;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_60 = &PTR_DAT_110b3e838;
  pcStack_58 = FUN_109d0f6a8;
  FUN_109d0eaa4();
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)(pppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  return;
}



/* Entry: 109d0f6a8; end: 109d0f6ab;  */

void FUN_109d0f6a8(void)

{
  return;
}



/* Entry: 109d0f6ac; end: 109d0f6ff;  */

void FUN_109d0f6ac(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110b3e808)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 109d0f700; end: 109d0f717;  */

void FUN_109d0f700(void)

{
  return;
}



/* Entry: 109d0f718; end: 109d13603;  */

void FUN_109d0f718(long param_1,long param_2,ulong param_3)

{
  undefined8 *******pppppppuVar1;
  code *pcVar2;
  ushort *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  float2 *pfVar12;
  uint *puVar13;
  double *pdVar14;
  undefined1 *puVar15;
  float *pfVar16;
  byte *pbVar17;
  int *piVar18;
  ushort *puVar19;
  char *pcVar20;
  short *psVar21;
  undefined4 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  short *psVar25;
  undefined4 *puVar26;
  undefined1 *puVar27;
  undefined2 *puVar28;
  undefined8 *puVar29;
  ulong uVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined8 ******ppppppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  iVar7 = (int)param_3;
  if (iVar7 < 4) {
    if (1 < iVar7) {
      if (iVar7 == 2) {
        uVar31 = *(uint *)(param_2 + 0x18);
        param_3 = (ulong)uVar31;
        if ((int)uVar31 < 4) {
          if ((int)uVar31 < 2) {
            if (uVar31 == 0) {
              if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
                uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                         *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
              }
              else {
                uVar31 = 1;
                for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar31 = *piVar18 * uVar31;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar10 = 1;
                for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar10 = *piVar18 * uVar10;
                }
              }
              if (uVar31 == uVar10) {
                if (uVar31 == 0) {
                  return;
                }
                lVar8 = (ulong)uVar31 << 3;
                pdVar14 = *(double **)(param_1 + 0x20);
                psVar21 = *(short **)(param_2 + 0x20);
                do {
                  uVar23 = (ulong)((uint)(float)*pdVar14 >> 0x17);
                  *psVar21 = *(short *)(&UNK_10e04070a + uVar23 * 2) +
                             (short)(((uint)(float)*pdVar14 & 0x7fffff) >>
                                    (ulong)((byte)(&UNK_10e040b0a)[uVar23] & 0x1f));
                  lVar8 = lVar8 + -8;
                  pdVar14 = pdVar14 + 1;
                  psVar21 = psVar21 + 1;
                } while (lVar8 != 0);
                return;
              }
            }
            else {
              if (uVar31 != 1) {
LAB_109d12e00:
                func_0x000107c31940(auStack_70,&UNK_10f5ac487);
                func_0x000109259240(auStack_58,auStack_70,&UNK_10f5a35f2);
                __ZNSt3__19to_stringEi(&ppppppuStack_88,param_3);
                pppppppuVar1 = (undefined8 *******)ppppppuStack_88;
                if (-1 < (char)bStack_71) {
                  uStack_80 = (ulong)bStack_71;
                  pppppppuVar1 = &ppppppuStack_88;
                }
                puVar6 = auStack_58;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (puVar6,pppppppuVar1,uStack_80);
                uStack_38 = puVar6[1];
                uStack_40 = *puVar6;
                uStack_30 = puVar6[2];
                puVar6[1] = 0;
                puVar6[2] = 0;
                *puVar6 = 0;
                if ((char)bStack_71 < '\0') {
                  __ZdlPv(ppppppuStack_88);
                }
                if (cStack_41 < '\0') {
                  __ZdlPv(auStack_58[0]);
                }
                if (cStack_59 < '\0') {
                  __ZdlPv(auStack_70[0]);
                }
                plVar5 = (long *)0x10;
                ___cxa_allocate_exception();
                __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                          ();
                *plVar5 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                ___cxa_throw(plVar5,PTR___ZTISt16invalid_argument_110352248,
                             PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                goto LAB_109d134dc;
              }
              if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
                uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                         *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
              }
              else {
                uVar31 = 1;
                for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar31 = *piVar18 * uVar31;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar10 = 1;
                for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar10 = *piVar18 * uVar10;
                }
              }
              if (uVar31 == uVar10) {
                if (uVar31 == 0) {
                  return;
                }
                lVar8 = (ulong)uVar31 << 3;
                pdVar14 = *(double **)(param_1 + 0x20);
                pfVar16 = *(float **)(param_2 + 0x20);
                do {
                  *pfVar16 = (float)*pdVar14;
                  lVar8 = lVar8 + -8;
                  pdVar14 = pdVar14 + 1;
                  pfVar16 = pfVar16 + 1;
                } while (lVar8 != 0);
                return;
              }
            }
          }
          else if (uVar31 == 2) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              uVar9 = *(undefined8 *)(param_1 + 0x20);
              uVar4 = *(undefined8 *)(param_2 + 0x20);
              uVar23 = (ulong)uVar31 << 3;
              goto LAB_109d12c0c;
            }
          }
          else {
            if (uVar31 != 3) goto LAB_109d12e00;
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              lVar8 = (ulong)uVar31 << 3;
              pdVar14 = *(double **)(param_1 + 0x20);
              puVar15 = *(undefined1 **)(param_2 + 0x20);
              do {
                *puVar15 = (char)(int)*pdVar14;
                lVar8 = lVar8 + -8;
                pdVar14 = pdVar14 + 1;
                puVar15 = puVar15 + 1;
              } while (lVar8 != 0);
              return;
            }
          }
        }
        else if ((int)uVar31 < 6) {
          if (uVar31 == 4) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              lVar8 = (ulong)uVar31 << 3;
              pdVar14 = *(double **)(param_1 + 0x20);
              puVar28 = *(undefined2 **)(param_2 + 0x20);
              do {
                *puVar28 = (short)(int)*pdVar14;
                lVar8 = lVar8 + -8;
                pdVar14 = pdVar14 + 1;
                puVar28 = puVar28 + 1;
              } while (lVar8 != 0);
              return;
            }
          }
          else {
            if (uVar31 != 5) goto LAB_109d12e00;
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              lVar8 = (ulong)uVar31 << 3;
              pdVar14 = *(double **)(param_1 + 0x20);
              piVar18 = *(int **)(param_2 + 0x20);
              do {
                *piVar18 = (int)*pdVar14;
                lVar8 = lVar8 + -8;
                pdVar14 = pdVar14 + 1;
                piVar18 = piVar18 + 1;
              } while (lVar8 != 0);
              return;
            }
          }
        }
        else if (uVar31 == 6) {
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 3;
            pdVar14 = *(double **)(param_1 + 0x20);
            puVar15 = *(undefined1 **)(param_2 + 0x20);
            do {
              *puVar15 = (char)(int)*pdVar14;
              lVar8 = lVar8 + -8;
              pdVar14 = pdVar14 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
        else if (uVar31 == 7) {
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 3;
            pdVar14 = *(double **)(param_1 + 0x20);
            puVar28 = *(undefined2 **)(param_2 + 0x20);
            do {
              *puVar28 = (short)(int)*pdVar14;
              lVar8 = lVar8 + -8;
              pdVar14 = pdVar14 + 1;
              puVar28 = puVar28 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
        else {
          if (uVar31 != 8) goto LAB_109d12e00;
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 3;
            pdVar14 = *(double **)(param_1 + 0x20);
            piVar18 = *(int **)(param_2 + 0x20);
            do {
              *piVar18 = (int)*pdVar14;
              lVar8 = lVar8 + -8;
              pdVar14 = pdVar14 + 1;
              piVar18 = piVar18 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
      }
      else {
        if (iVar7 != 3) goto LAB_109d12c48;
        uVar31 = *(uint *)(param_2 + 0x18);
        param_3 = (ulong)uVar31;
        if ((int)uVar31 < 4) {
          if ((int)uVar31 < 2) {
            if (uVar31 == 0) {
              if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
                uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                         *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
              }
              else {
                uVar31 = 1;
                for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar31 = *piVar18 * uVar31;
                }
              }
              uVar23 = (ulong)uVar31;
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar10 = 1;
                for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar10 = *piVar18 * uVar10;
                }
              }
              if (uVar31 == uVar10) {
                if (uVar31 == 0) {
                  return;
                }
                pbVar17 = *(byte **)(param_1 + 0x20);
                psVar21 = *(short **)(param_2 + 0x20);
                do {
                  uVar30 = (ulong)((uint)(float)*pbVar17 >> 0x17);
                  *psVar21 = *(short *)(&UNK_10e04070a + uVar30 * 2) +
                             (short)(((uint)(float)*pbVar17 & 0x7fffff) >>
                                    (ulong)((byte)(&UNK_10e040b0a)[uVar30] & 0x1f));
                  uVar23 = uVar23 - 1;
                  pbVar17 = pbVar17 + 1;
                  psVar21 = psVar21 + 1;
                } while (uVar23 != 0);
                return;
              }
            }
            else {
              if (uVar31 != 1) goto LAB_109d12fb8;
              if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
                uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                         *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
              }
              else {
                uVar31 = 1;
                for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar31 = *piVar18 * uVar31;
                }
              }
              uVar23 = (ulong)uVar31;
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar10 = 1;
                for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar10 = *piVar18 * uVar10;
                }
              }
              if (uVar31 == uVar10) {
                if (uVar31 == 0) {
                  return;
                }
                pbVar17 = *(byte **)(param_1 + 0x20);
                pfVar16 = *(float **)(param_2 + 0x20);
                do {
                  *pfVar16 = (float)*pbVar17;
                  uVar23 = uVar23 - 1;
                  pbVar17 = pbVar17 + 1;
                  pfVar16 = pfVar16 + 1;
                } while (uVar23 != 0);
                return;
              }
            }
          }
          else {
            if (uVar31 != 2) {
              if (uVar31 == 3) {
                if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
                  uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                           *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
                }
                else {
                  uVar31 = 1;
                  for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                      piVar18 = piVar18 + 1) {
                    uVar31 = *piVar18 * uVar31;
                  }
                }
                uVar23 = (ulong)uVar31;
                if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d11e18;
                iVar7 = 1;
                for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                    piVar18 = piVar18 + 1) {
                  iVar7 = *piVar18 * iVar7;
                }
                goto LAB_109d11e2c;
              }
LAB_109d12fb8:
              func_0x000107c31940(auStack_70,&UNK_10f5ac487);
              func_0x000109259240(auStack_58,auStack_70,&UNK_10f5a35f2);
              __ZNSt3__19to_stringEi(&ppppppuStack_88,param_3);
              pppppppuVar1 = (undefined8 *******)ppppppuStack_88;
              if (-1 < (char)bStack_71) {
                uStack_80 = (ulong)bStack_71;
                pppppppuVar1 = &ppppppuStack_88;
              }
              puVar6 = auStack_58;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (puVar6,pppppppuVar1,uStack_80);
              uStack_38 = puVar6[1];
              uStack_40 = *puVar6;
              uStack_30 = puVar6[2];
              puVar6[1] = 0;
              puVar6[2] = 0;
              *puVar6 = 0;
              if ((char)bStack_71 < '\0') {
                __ZdlPv(ppppppuStack_88);
              }
              if (cStack_41 < '\0') {
                __ZdlPv(auStack_58[0]);
              }
              if (cStack_59 < '\0') {
                __ZdlPv(auStack_70[0]);
              }
              plVar5 = (long *)0x10;
              ___cxa_allocate_exception();
              __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                        ();
              *plVar5 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
              ___cxa_throw(plVar5,PTR___ZTISt16invalid_argument_110352248,
                           PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
              goto LAB_109d134dc;
            }
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            uVar23 = (ulong)uVar31;
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              pbVar17 = *(byte **)(param_1 + 0x20);
              pdVar14 = *(double **)(param_2 + 0x20);
              do {
                *pdVar14 = (double)*pbVar17;
                uVar23 = uVar23 - 1;
                pbVar17 = pbVar17 + 1;
                pdVar14 = pdVar14 + 1;
              } while (uVar23 != 0);
              return;
            }
          }
        }
        else if ((int)uVar31 < 6) {
          if (uVar31 == 4) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            uVar23 = (ulong)uVar31;
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              pbVar17 = *(byte **)(param_1 + 0x20);
              puVar19 = *(ushort **)(param_2 + 0x20);
              do {
                *puVar19 = (ushort)*pbVar17;
                uVar23 = uVar23 - 1;
                pbVar17 = pbVar17 + 1;
                puVar19 = puVar19 + 1;
              } while (uVar23 != 0);
              return;
            }
          }
          else {
            if (uVar31 != 5) goto LAB_109d12fb8;
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            uVar23 = (ulong)uVar31;
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              pbVar17 = *(byte **)(param_1 + 0x20);
              puVar13 = *(uint **)(param_2 + 0x20);
              do {
                *puVar13 = (uint)*pbVar17;
                uVar23 = uVar23 - 1;
                pbVar17 = pbVar17 + 1;
                puVar13 = puVar13 + 1;
              } while (uVar23 != 0);
              return;
            }
          }
        }
        else {
          if (uVar31 == 6) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            uVar23 = (ulong)uVar31;
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d11e18;
            iVar7 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              iVar7 = *piVar18 * iVar7;
            }
            goto LAB_109d11e2c;
          }
          if (uVar31 == 7) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            uVar23 = (ulong)uVar31;
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              pbVar17 = *(byte **)(param_1 + 0x20);
              puVar19 = *(ushort **)(param_2 + 0x20);
              do {
                *puVar19 = (ushort)*pbVar17;
                uVar23 = uVar23 - 1;
                pbVar17 = pbVar17 + 1;
                puVar19 = puVar19 + 1;
              } while (uVar23 != 0);
              return;
            }
          }
          else {
            if (uVar31 != 8) goto LAB_109d12fb8;
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            uVar23 = (ulong)uVar31;
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              pbVar17 = *(byte **)(param_1 + 0x20);
              puVar13 = *(uint **)(param_2 + 0x20);
              do {
                *puVar13 = (uint)*pbVar17;
                uVar23 = uVar23 - 1;
                pbVar17 = pbVar17 + 1;
                puVar13 = puVar13 + 1;
              } while (uVar23 != 0);
              return;
            }
          }
        }
      }
      goto LAB_109d12c30;
    }
    if (iVar7 == 0) {
      uVar31 = *(uint *)(param_2 + 0x18);
      param_3 = (ulong)uVar31;
      if ((int)uVar31 < 4) {
        if ((int)uVar31 < 2) {
          if (uVar31 == 0) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            uVar23 = (ulong)uVar31;
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12910;
            iVar7 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              iVar7 = *piVar18 * iVar7;
            }
            goto LAB_109d12924;
          }
          if (uVar31 != 1) {
LAB_109d12d24:
            func_0x000107c31940(auStack_70,&UNK_10f5ac487);
            func_0x000109259240(auStack_58,auStack_70,&UNK_10f5a35f2);
            __ZNSt3__19to_stringEi(&ppppppuStack_88,param_3);
            pppppppuVar1 = (undefined8 *******)ppppppuStack_88;
            if (-1 < (char)bStack_71) {
              uStack_80 = (ulong)bStack_71;
              pppppppuVar1 = &ppppppuStack_88;
            }
            puVar6 = auStack_58;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar6,pppppppuVar1,uStack_80);
            uStack_38 = puVar6[1];
            uStack_40 = *puVar6;
            uStack_30 = puVar6[2];
            puVar6[1] = 0;
            puVar6[2] = 0;
            *puVar6 = 0;
            if ((char)bStack_71 < '\0') {
              __ZdlPv(ppppppuStack_88);
            }
            if (cStack_41 < '\0') {
              __ZdlPv(auStack_58[0]);
            }
            if (cStack_59 < '\0') {
              __ZdlPv(auStack_70[0]);
            }
            plVar5 = (long *)0x10;
            ___cxa_allocate_exception();
            __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      ();
            *plVar5 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
            ___cxa_throw(plVar5,PTR___ZTISt16invalid_argument_110352248,
                         PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
            goto LAB_109d134dc;
          }
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          uVar23 = (ulong)uVar31;
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            puVar11 = *(undefined8 **)(param_1 + 0x20);
            puVar24 = *(undefined8 **)(param_2 + 0x20);
            uVar30 = 0;
            puVar6 = puVar11;
            puVar29 = puVar24;
            if ((uVar31 & 0xfffffffc) != 0) {
              do {
                uVar4 = *puVar6;
                puVar29[1] = CONCAT44((float)(float2)((ulong)uVar4 >> 0x30),
                                      (float)(float2)((ulong)uVar4 >> 0x20));
                *puVar29 = CONCAT44((float)(float2)((ulong)uVar4 >> 0x10),(float)(float2)uVar4);
                uVar30 = uVar30 + 4;
                puVar6 = puVar6 + 1;
                puVar29 = puVar29 + 2;
              } while (uVar30 < (uVar23 & 0xfffffffc));
            }
            lVar8 = uVar23 - uVar30;
            if (uVar23 < uVar30 || lVar8 == 0) {
              return;
            }
            pfVar12 = (float2 *)((long)puVar11 + uVar30 * 2);
            pfVar16 = (float *)((long)puVar24 + uVar30 * 4);
            do {
              *pfVar16 = (float)*pfVar12;
              lVar8 = lVar8 + -1;
              pfVar12 = pfVar12 + 1;
              pfVar16 = pfVar16 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
        else if (uVar31 == 2) {
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar23 = (ulong)(uint)(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                                   *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8));
          }
          else {
            uVar23 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar23 = (ulong)(uint)(*piVar18 * (int)uVar23);
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            iVar7 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                    *(int *)(param_2 + 8);
          }
          else {
            iVar7 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              iVar7 = *piVar18 * iVar7;
            }
          }
          if ((int)uVar23 == iVar7) {
            puVar3 = *(ushort **)(param_1 + 0x20);
            puVar19 = puVar3 + uVar23;
            pdVar14 = *(double **)(param_2 + 0x20);
            for (; puVar3 != puVar19; puVar3 = puVar3 + 1) {
              uVar23 = (ulong)(*puVar3 >> 10);
              *pdVar14 = (double)(float)(*(int *)(&UNK_10e039244 + uVar23 * 4) +
                                        *(int *)(&UNK_10e037244 +
                                                (ulong)((*puVar3 & 0x3ff) +
                                                       (uint)*(ushort *)
                                                              (&UNK_10e039344 + uVar23 * 2)) * 4));
              pdVar14 = pdVar14 + 1;
            }
            return;
          }
        }
        else {
          if (uVar31 != 3) goto LAB_109d12d24;
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar23 = (ulong)(uint)(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                                   *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8));
          }
          else {
            uVar23 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar23 = (ulong)(uint)(*piVar18 * (int)uVar23);
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            iVar7 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                    *(int *)(param_2 + 8);
          }
          else {
            iVar7 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              iVar7 = *piVar18 * iVar7;
            }
          }
          if ((int)uVar23 == iVar7) {
            puVar3 = *(ushort **)(param_1 + 0x20);
            puVar19 = puVar3 + uVar23;
            puVar15 = *(undefined1 **)(param_2 + 0x20);
            for (; puVar3 != puVar19; puVar3 = puVar3 + 1) {
              uVar23 = (ulong)(*puVar3 >> 10);
              *puVar15 = (char)(int)(float)(*(int *)(&UNK_10e039244 + uVar23 * 4) +
                                           *(int *)(&UNK_10e037244 +
                                                   (ulong)((*puVar3 & 0x3ff) +
                                                          (uint)*(ushort *)
                                                                 (&UNK_10e039344 + uVar23 * 2)) * 4)
                                           );
              puVar15 = puVar15 + 1;
            }
            return;
          }
        }
      }
      else if ((int)uVar31 < 6) {
        if (uVar31 == 4) {
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar23 = (ulong)(uint)(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                                   *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8));
          }
          else {
            uVar23 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar23 = (ulong)(uint)(*piVar18 * (int)uVar23);
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            iVar7 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                    *(int *)(param_2 + 8);
          }
          else {
            iVar7 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              iVar7 = *piVar18 * iVar7;
            }
          }
          if ((int)uVar23 == iVar7) {
            puVar3 = *(ushort **)(param_1 + 0x20);
            puVar19 = puVar3 + uVar23;
            puVar28 = *(undefined2 **)(param_2 + 0x20);
            for (; puVar3 != puVar19; puVar3 = puVar3 + 1) {
              uVar23 = (ulong)(*puVar3 >> 10);
              *puVar28 = (short)(int)(float)(*(int *)(&UNK_10e039244 + uVar23 * 4) +
                                            *(int *)(&UNK_10e037244 +
                                                    (ulong)((*puVar3 & 0x3ff) +
                                                           (uint)*(ushort *)
                                                                  (&UNK_10e039344 + uVar23 * 2)) * 4
                                                    ));
              puVar28 = puVar28 + 1;
            }
            return;
          }
        }
        else {
          if (uVar31 != 5) goto LAB_109d12d24;
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar23 = (ulong)(uint)(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                                   *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8));
          }
          else {
            uVar23 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar23 = (ulong)(uint)(*piVar18 * (int)uVar23);
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            iVar7 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                    *(int *)(param_2 + 8);
          }
          else {
            iVar7 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              iVar7 = *piVar18 * iVar7;
            }
          }
          if ((int)uVar23 == iVar7) {
            puVar3 = *(ushort **)(param_1 + 0x20);
            puVar19 = puVar3 + uVar23;
            piVar18 = *(int **)(param_2 + 0x20);
            for (; puVar3 != puVar19; puVar3 = puVar3 + 1) {
              uVar23 = (ulong)(*puVar3 >> 10);
              *piVar18 = (int)(float)(*(int *)(&UNK_10e039244 + uVar23 * 4) +
                                     *(int *)(&UNK_10e037244 +
                                             (ulong)((*puVar3 & 0x3ff) +
                                                    (uint)*(ushort *)(&UNK_10e039344 + uVar23 * 2))
                                             * 4));
              piVar18 = piVar18 + 1;
            }
            return;
          }
        }
      }
      else if (uVar31 == 6) {
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar23 = (ulong)(uint)(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                                 *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8));
        }
        else {
          uVar23 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar23 = (ulong)(uint)(*piVar18 * (int)uVar23);
          }
        }
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          iVar7 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                  *(int *)(param_2 + 8);
        }
        else {
          iVar7 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            iVar7 = *piVar18 * iVar7;
          }
        }
        if ((int)uVar23 == iVar7) {
          puVar3 = *(ushort **)(param_1 + 0x20);
          puVar19 = puVar3 + uVar23;
          puVar15 = *(undefined1 **)(param_2 + 0x20);
          for (; puVar3 != puVar19; puVar3 = puVar3 + 1) {
            uVar23 = (ulong)(*puVar3 >> 10);
            *puVar15 = (char)(int)(float)(*(int *)(&UNK_10e039244 + uVar23 * 4) +
                                         *(int *)(&UNK_10e037244 +
                                                 (ulong)((*puVar3 & 0x3ff) +
                                                        (uint)*(ushort *)
                                                               (&UNK_10e039344 + uVar23 * 2)) * 4));
            puVar15 = puVar15 + 1;
          }
          return;
        }
      }
      else if (uVar31 == 7) {
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar23 = (ulong)(uint)(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                                 *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8));
        }
        else {
          uVar23 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar23 = (ulong)(uint)(*piVar18 * (int)uVar23);
          }
        }
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          iVar7 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                  *(int *)(param_2 + 8);
        }
        else {
          iVar7 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            iVar7 = *piVar18 * iVar7;
          }
        }
        if ((int)uVar23 == iVar7) {
          puVar3 = *(ushort **)(param_1 + 0x20);
          puVar19 = puVar3 + uVar23;
          puVar28 = *(undefined2 **)(param_2 + 0x20);
          for (; puVar3 != puVar19; puVar3 = puVar3 + 1) {
            uVar23 = (ulong)(*puVar3 >> 10);
            *puVar28 = (short)(int)(float)(*(int *)(&UNK_10e039244 + uVar23 * 4) +
                                          *(int *)(&UNK_10e037244 +
                                                  (ulong)((*puVar3 & 0x3ff) +
                                                         (uint)*(ushort *)
                                                                (&UNK_10e039344 + uVar23 * 2)) * 4))
            ;
            puVar28 = puVar28 + 1;
          }
          return;
        }
      }
      else {
        if (uVar31 != 8) goto LAB_109d12d24;
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar23 = (ulong)(uint)(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                                 *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8));
        }
        else {
          uVar23 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar23 = (ulong)(uint)(*piVar18 * (int)uVar23);
          }
        }
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          iVar7 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                  *(int *)(param_2 + 8);
        }
        else {
          iVar7 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            iVar7 = *piVar18 * iVar7;
          }
        }
        if ((int)uVar23 == iVar7) {
          puVar3 = *(ushort **)(param_1 + 0x20);
          puVar19 = puVar3 + uVar23;
          piVar18 = *(int **)(param_2 + 0x20);
          for (; puVar3 != puVar19; puVar3 = puVar3 + 1) {
            uVar23 = (ulong)(*puVar3 >> 10);
            *piVar18 = (int)(float)(*(int *)(&UNK_10e039244 + uVar23 * 4) +
                                   *(int *)(&UNK_10e037244 +
                                           (ulong)((*puVar3 & 0x3ff) +
                                                  (uint)*(ushort *)(&UNK_10e039344 + uVar23 * 2)) *
                                           4));
            piVar18 = piVar18 + 1;
          }
          return;
        }
      }
      goto LAB_109d12c30;
    }
    if (iVar7 == 1) {
      uVar31 = *(uint *)(param_2 + 0x18);
      param_3 = (ulong)uVar31;
      if ((int)uVar31 < 4) {
        if ((int)uVar31 < 2) {
          if (uVar31 != 0) {
            if (uVar31 == 1) {
              if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
                uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                         *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
              }
              else {
                uVar31 = 1;
                for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar31 = *piVar18 * uVar31;
                }
              }
              uVar23 = (ulong)uVar31;
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12be0;
              iVar7 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                iVar7 = *piVar18 * iVar7;
              }
              goto LAB_109d12bf4;
            }
LAB_109d12edc:
            func_0x000107c31940(auStack_70,&UNK_10f5ac487);
            func_0x000109259240(auStack_58,auStack_70,&UNK_10f5a35f2);
            __ZNSt3__19to_stringEi(&ppppppuStack_88,param_3);
            pppppppuVar1 = (undefined8 *******)ppppppuStack_88;
            if (-1 < (char)bStack_71) {
              uStack_80 = (ulong)bStack_71;
              pppppppuVar1 = &ppppppuStack_88;
            }
            puVar6 = auStack_58;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar6,pppppppuVar1,uStack_80);
            uStack_38 = puVar6[1];
            uStack_40 = *puVar6;
            uStack_30 = puVar6[2];
            puVar6[1] = 0;
            puVar6[2] = 0;
            *puVar6 = 0;
            if ((char)bStack_71 < '\0') {
              __ZdlPv(ppppppuStack_88);
            }
            if (cStack_41 < '\0') {
              __ZdlPv(auStack_58[0]);
            }
            if (cStack_59 < '\0') {
              __ZdlPv(auStack_70[0]);
            }
            plVar5 = (long *)0x10;
            ___cxa_allocate_exception();
            __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      ();
            *plVar5 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
            ___cxa_throw(plVar5,PTR___ZTISt16invalid_argument_110352248,
                         PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
            goto LAB_109d134dc;
          }
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 2;
            puVar13 = *(uint **)(param_1 + 0x20);
            psVar21 = *(short **)(param_2 + 0x20);
            do {
              uVar23 = (ulong)(*puVar13 >> 0x17);
              *psVar21 = *(short *)(&UNK_10e04070a + uVar23 * 2) +
                         (short)((*puVar13 & 0x7fffff) >>
                                (ulong)((byte)(&UNK_10e040b0a)[uVar23] & 0x1f));
              lVar8 = lVar8 + -4;
              puVar13 = puVar13 + 1;
              psVar21 = psVar21 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
        else if (uVar31 == 2) {
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 2;
            pfVar16 = *(float **)(param_1 + 0x20);
            pdVar14 = *(double **)(param_2 + 0x20);
            do {
              *pdVar14 = (double)*pfVar16;
              lVar8 = lVar8 + -4;
              pfVar16 = pfVar16 + 1;
              pdVar14 = pdVar14 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
        else {
          if (uVar31 != 3) goto LAB_109d12edc;
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 2;
            pfVar16 = *(float **)(param_1 + 0x20);
            puVar15 = *(undefined1 **)(param_2 + 0x20);
            do {
              *puVar15 = (char)(int)*pfVar16;
              lVar8 = lVar8 + -4;
              pfVar16 = pfVar16 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
      }
      else if ((int)uVar31 < 6) {
        if (uVar31 == 4) {
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 2;
            pfVar16 = *(float **)(param_1 + 0x20);
            puVar28 = *(undefined2 **)(param_2 + 0x20);
            do {
              *puVar28 = (short)(int)*pfVar16;
              lVar8 = lVar8 + -4;
              pfVar16 = pfVar16 + 1;
              puVar28 = puVar28 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
        else {
          if (uVar31 != 5) goto LAB_109d12edc;
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 2;
            pfVar16 = *(float **)(param_1 + 0x20);
            piVar18 = *(int **)(param_2 + 0x20);
            do {
              *piVar18 = (int)*pfVar16;
              lVar8 = lVar8 + -4;
              pfVar16 = pfVar16 + 1;
              piVar18 = piVar18 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
      }
      else if (uVar31 == 6) {
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                   *(int *)(param_1 + 8);
        }
        else {
          uVar31 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar31 = *piVar18 * uVar31;
          }
        }
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                   *(int *)(param_2 + 8);
        }
        else {
          uVar10 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar10 = *piVar18 * uVar10;
          }
        }
        if (uVar31 == uVar10) {
          if (uVar31 == 0) {
            return;
          }
          lVar8 = (ulong)uVar31 << 2;
          pfVar16 = *(float **)(param_1 + 0x20);
          puVar15 = *(undefined1 **)(param_2 + 0x20);
          do {
            *puVar15 = (char)(int)*pfVar16;
            lVar8 = lVar8 + -4;
            pfVar16 = pfVar16 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar8 != 0);
          return;
        }
      }
      else if (uVar31 == 7) {
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                   *(int *)(param_1 + 8);
        }
        else {
          uVar31 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar31 = *piVar18 * uVar31;
          }
        }
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                   *(int *)(param_2 + 8);
        }
        else {
          uVar10 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar10 = *piVar18 * uVar10;
          }
        }
        if (uVar31 == uVar10) {
          if (uVar31 == 0) {
            return;
          }
          lVar8 = (ulong)uVar31 << 2;
          pfVar16 = *(float **)(param_1 + 0x20);
          puVar28 = *(undefined2 **)(param_2 + 0x20);
          do {
            *puVar28 = (short)(int)*pfVar16;
            lVar8 = lVar8 + -4;
            pfVar16 = pfVar16 + 1;
            puVar28 = puVar28 + 1;
          } while (lVar8 != 0);
          return;
        }
      }
      else {
        if (uVar31 != 8) goto LAB_109d12edc;
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                   *(int *)(param_1 + 8);
        }
        else {
          uVar31 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar31 = *piVar18 * uVar31;
          }
        }
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                   *(int *)(param_2 + 8);
        }
        else {
          uVar10 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar10 = *piVar18 * uVar10;
          }
        }
        if (uVar31 == uVar10) {
          if (uVar31 == 0) {
            return;
          }
          lVar8 = (ulong)uVar31 << 2;
          pfVar16 = *(float **)(param_1 + 0x20);
          piVar18 = *(int **)(param_2 + 0x20);
          do {
            *piVar18 = (int)*pfVar16;
            lVar8 = lVar8 + -4;
            pfVar16 = pfVar16 + 1;
            piVar18 = piVar18 + 1;
          } while (lVar8 != 0);
          return;
        }
      }
      goto LAB_109d12c30;
    }
  }
  else {
    if (iVar7 < 6) {
      if (iVar7 == 4) {
        uVar31 = *(uint *)(param_2 + 0x18);
        param_3 = (ulong)uVar31;
        if ((int)uVar31 < 4) {
          if ((int)uVar31 < 2) {
            if (uVar31 == 0) {
              if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
                uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                         *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
              }
              else {
                uVar31 = 1;
                for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar31 = *piVar18 * uVar31;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar10 = 1;
                for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar10 = *piVar18 * uVar10;
                }
              }
              if (uVar31 == uVar10) {
                if (uVar31 == 0) {
                  return;
                }
                lVar8 = (ulong)uVar31 << 1;
                puVar19 = *(ushort **)(param_1 + 0x20);
                psVar21 = *(short **)(param_2 + 0x20);
                do {
                  uVar23 = (ulong)((uint)(float)*puVar19 >> 0x17);
                  *psVar21 = *(short *)(&UNK_10e04070a + uVar23 * 2) +
                             (short)(((uint)(float)*puVar19 & 0x7fffff) >>
                                    (ulong)((byte)(&UNK_10e040b0a)[uVar23] & 0x1f));
                  lVar8 = lVar8 + -2;
                  puVar19 = puVar19 + 1;
                  psVar21 = psVar21 + 1;
                } while (lVar8 != 0);
                return;
              }
            }
            else {
              if (uVar31 != 1) {
LAB_109d13094:
                func_0x000107c31940(auStack_70,&UNK_10f5ac487);
                func_0x000109259240(auStack_58,auStack_70,&UNK_10f5a35f2);
                __ZNSt3__19to_stringEi(&ppppppuStack_88,param_3);
                pppppppuVar1 = (undefined8 *******)ppppppuStack_88;
                if (-1 < (char)bStack_71) {
                  uStack_80 = (ulong)bStack_71;
                  pppppppuVar1 = &ppppppuStack_88;
                }
                puVar6 = auStack_58;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (puVar6,pppppppuVar1,uStack_80);
                uStack_38 = puVar6[1];
                uStack_40 = *puVar6;
                uStack_30 = puVar6[2];
                puVar6[1] = 0;
                puVar6[2] = 0;
                *puVar6 = 0;
                if ((char)bStack_71 < '\0') {
                  __ZdlPv(ppppppuStack_88);
                }
                if (cStack_41 < '\0') {
                  __ZdlPv(auStack_58[0]);
                }
                if (cStack_59 < '\0') {
                  __ZdlPv(auStack_70[0]);
                }
                plVar5 = (long *)0x10;
                ___cxa_allocate_exception();
                __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                          ();
                *plVar5 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                ___cxa_throw(plVar5,PTR___ZTISt16invalid_argument_110352248,
                             PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                goto LAB_109d134dc;
              }
              if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
                uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                         *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
              }
              else {
                uVar31 = 1;
                for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar31 = *piVar18 * uVar31;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar10 = 1;
                for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar10 = *piVar18 * uVar10;
                }
              }
              if (uVar31 == uVar10) {
                if (uVar31 == 0) {
                  return;
                }
                lVar8 = (ulong)uVar31 << 1;
                puVar19 = *(ushort **)(param_1 + 0x20);
                pfVar16 = *(float **)(param_2 + 0x20);
                do {
                  *pfVar16 = (float)*puVar19;
                  lVar8 = lVar8 + -2;
                  puVar19 = puVar19 + 1;
                  pfVar16 = pfVar16 + 1;
                } while (lVar8 != 0);
                return;
              }
            }
          }
          else if (uVar31 == 2) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              lVar8 = (ulong)uVar31 << 1;
              puVar19 = *(ushort **)(param_1 + 0x20);
              pdVar14 = *(double **)(param_2 + 0x20);
              do {
                *pdVar14 = (double)*puVar19;
                lVar8 = lVar8 + -2;
                puVar19 = puVar19 + 1;
                pdVar14 = pdVar14 + 1;
              } while (lVar8 != 0);
              return;
            }
          }
          else {
            if (uVar31 != 3) goto LAB_109d13094;
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              lVar8 = (ulong)uVar31 << 1;
              puVar15 = *(undefined1 **)(param_1 + 0x20);
              puVar27 = *(undefined1 **)(param_2 + 0x20);
              do {
                *puVar27 = *puVar15;
                lVar8 = lVar8 + -2;
                puVar15 = puVar15 + 2;
                puVar27 = puVar27 + 1;
              } while (lVar8 != 0);
              return;
            }
          }
        }
        else if ((int)uVar31 < 6) {
          if (uVar31 == 4) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            uVar23 = (ulong)uVar31;
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
LAB_109d12910:
              iVar7 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                      * *(int *)(param_2 + 8);
            }
            else {
              iVar7 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                iVar7 = *piVar18 * iVar7;
              }
            }
LAB_109d12924:
            if ((int)uVar23 == iVar7) {
              if ((int)uVar23 == 0) {
                return;
              }
              uVar9 = *(undefined8 *)(param_1 + 0x20);
              uVar4 = *(undefined8 *)(param_2 + 0x20);
              uVar23 = uVar23 << 1;
LAB_109d12c0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__memmove_11034c660)(uVar4,uVar9,uVar23);
              return;
            }
          }
          else {
            if (uVar31 != 5) goto LAB_109d13094;
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              lVar8 = (ulong)uVar31 << 1;
              puVar19 = *(ushort **)(param_1 + 0x20);
              puVar13 = *(uint **)(param_2 + 0x20);
              do {
                *puVar13 = (uint)*puVar19;
                lVar8 = lVar8 + -2;
                puVar19 = puVar19 + 1;
                puVar13 = puVar13 + 1;
              } while (lVar8 != 0);
              return;
            }
          }
        }
        else if (uVar31 == 6) {
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 1;
            puVar15 = *(undefined1 **)(param_1 + 0x20);
            puVar27 = *(undefined1 **)(param_2 + 0x20);
            do {
              *puVar27 = *puVar15;
              lVar8 = lVar8 + -2;
              puVar15 = puVar15 + 2;
              puVar27 = puVar27 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
        else {
          if (uVar31 == 7) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            uVar23 = (ulong)uVar31;
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12910;
            iVar7 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              iVar7 = *piVar18 * iVar7;
            }
            goto LAB_109d12924;
          }
          if (uVar31 != 8) goto LAB_109d13094;
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 1;
            puVar19 = *(ushort **)(param_1 + 0x20);
            puVar13 = *(uint **)(param_2 + 0x20);
            do {
              *puVar13 = (uint)*puVar19;
              lVar8 = lVar8 + -2;
              puVar19 = puVar19 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
      }
      else {
        if (iVar7 != 5) goto LAB_109d12c48;
        uVar31 = *(uint *)(param_2 + 0x18);
        param_3 = (ulong)uVar31;
        if ((int)uVar31 < 4) {
          if ((int)uVar31 < 2) {
            if (uVar31 == 0) {
              if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
                uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                         *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
              }
              else {
                uVar31 = 1;
                for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar31 = *piVar18 * uVar31;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar10 = 1;
                for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar10 = *piVar18 * uVar10;
                }
              }
              if (uVar31 == uVar10) {
                if (uVar31 == 0) {
                  return;
                }
                lVar8 = (ulong)uVar31 << 2;
                puVar22 = *(undefined4 **)(param_1 + 0x20);
                psVar21 = *(short **)(param_2 + 0x20);
                do {
                  uVar31 = NEON_ucvtf(*puVar22);
                  *psVar21 = *(short *)(&UNK_10e04070a + (ulong)(uVar31 >> 0x17) * 2) +
                             (short)((uVar31 & 0x7fffff) >>
                                    (ulong)((byte)(&UNK_10e040b0a)[uVar31 >> 0x17] & 0x1f));
                  lVar8 = lVar8 + -4;
                  puVar22 = puVar22 + 1;
                  psVar21 = psVar21 + 1;
                } while (lVar8 != 0);
                return;
              }
            }
            else {
              if (uVar31 != 1) {
LAB_109d1324c:
                func_0x000107c31940(auStack_70,&UNK_10f5ac487);
                func_0x000109259240(auStack_58,auStack_70,&UNK_10f5a35f2);
                __ZNSt3__19to_stringEi(&ppppppuStack_88,param_3);
                pppppppuVar1 = (undefined8 *******)ppppppuStack_88;
                if (-1 < (char)bStack_71) {
                  uStack_80 = (ulong)bStack_71;
                  pppppppuVar1 = &ppppppuStack_88;
                }
                puVar6 = auStack_58;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (puVar6,pppppppuVar1,uStack_80);
                uStack_38 = puVar6[1];
                uStack_40 = *puVar6;
                uStack_30 = puVar6[2];
                puVar6[1] = 0;
                puVar6[2] = 0;
                *puVar6 = 0;
                if ((char)bStack_71 < '\0') {
                  __ZdlPv(ppppppuStack_88);
                }
                if (cStack_41 < '\0') {
                  __ZdlPv(auStack_58[0]);
                }
                if (cStack_59 < '\0') {
                  __ZdlPv(auStack_70[0]);
                }
                plVar5 = (long *)0x10;
                ___cxa_allocate_exception();
                __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                          ();
                *plVar5 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
                ___cxa_throw(plVar5,PTR___ZTISt16invalid_argument_110352248,
                             PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                goto LAB_109d134dc;
              }
              if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
                uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                         *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
              }
              else {
                uVar31 = 1;
                for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar31 = *piVar18 * uVar31;
                }
              }
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) *
                         *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8);
              }
              else {
                uVar10 = 1;
                for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar10 = *piVar18 * uVar10;
                }
              }
              if (uVar31 == uVar10) {
                if (uVar31 == 0) {
                  return;
                }
                lVar8 = (ulong)uVar31 << 2;
                puVar22 = *(undefined4 **)(param_1 + 0x20);
                puVar26 = *(undefined4 **)(param_2 + 0x20);
                do {
                  uVar32 = NEON_ucvtf(*puVar22);
                  *puVar26 = uVar32;
                  lVar8 = lVar8 + -4;
                  puVar22 = puVar22 + 1;
                  puVar26 = puVar26 + 1;
                } while (lVar8 != 0);
                return;
              }
            }
          }
          else if (uVar31 == 2) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              lVar8 = (ulong)uVar31 << 2;
              puVar13 = *(uint **)(param_1 + 0x20);
              pdVar14 = *(double **)(param_2 + 0x20);
              do {
                *pdVar14 = (double)*puVar13;
                lVar8 = lVar8 + -4;
                puVar13 = puVar13 + 1;
                pdVar14 = pdVar14 + 1;
              } while (lVar8 != 0);
              return;
            }
          }
          else {
            if (uVar31 != 3) goto LAB_109d1324c;
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              lVar8 = (ulong)uVar31 << 2;
              puVar22 = *(undefined4 **)(param_1 + 0x20);
              puVar15 = *(undefined1 **)(param_2 + 0x20);
              do {
                *puVar15 = (char)*puVar22;
                lVar8 = lVar8 + -4;
                puVar22 = puVar22 + 1;
                puVar15 = puVar15 + 1;
              } while (lVar8 != 0);
              return;
            }
          }
        }
        else if ((int)uVar31 < 6) {
          if (uVar31 == 4) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              lVar8 = (ulong)uVar31 << 2;
              puVar22 = *(undefined4 **)(param_1 + 0x20);
              puVar28 = *(undefined2 **)(param_2 + 0x20);
              do {
                *puVar28 = (short)*puVar22;
                lVar8 = lVar8 + -4;
                puVar22 = puVar22 + 1;
                puVar28 = puVar28 + 1;
              } while (lVar8 != 0);
              return;
            }
          }
          else {
            if (uVar31 != 5) goto LAB_109d1324c;
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            uVar23 = (ulong)uVar31;
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
LAB_109d12be0:
              iVar7 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                      * *(int *)(param_2 + 8);
            }
            else {
              iVar7 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                iVar7 = *piVar18 * iVar7;
              }
            }
LAB_109d12bf4:
            if ((int)uVar23 == iVar7) {
              if ((int)uVar23 == 0) {
                return;
              }
              uVar9 = *(undefined8 *)(param_1 + 0x20);
              uVar4 = *(undefined8 *)(param_2 + 0x20);
              uVar23 = uVar23 << 2;
              goto LAB_109d12c0c;
            }
          }
        }
        else if (uVar31 == 6) {
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 2;
            puVar22 = *(undefined4 **)(param_1 + 0x20);
            puVar15 = *(undefined1 **)(param_2 + 0x20);
            do {
              *puVar15 = (char)*puVar22;
              lVar8 = lVar8 + -4;
              puVar22 = puVar22 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
        else {
          if (uVar31 != 7) {
            if (uVar31 != 8) goto LAB_109d1324c;
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            uVar23 = (ulong)uVar31;
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12be0;
            iVar7 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              iVar7 = *piVar18 * iVar7;
            }
            goto LAB_109d12bf4;
          }
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 2;
            puVar22 = *(undefined4 **)(param_1 + 0x20);
            puVar28 = *(undefined2 **)(param_2 + 0x20);
            do {
              *puVar28 = (short)*puVar22;
              lVar8 = lVar8 + -4;
              puVar22 = puVar22 + 1;
              puVar28 = puVar28 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
      }
    }
    else if (iVar7 == 6) {
      uVar31 = *(uint *)(param_2 + 0x18);
      param_3 = (ulong)uVar31;
      if ((int)uVar31 < 4) {
        if ((int)uVar31 < 2) {
          if (uVar31 == 0) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            uVar23 = (ulong)uVar31;
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              pcVar20 = *(char **)(param_1 + 0x20);
              psVar21 = *(short **)(param_2 + 0x20);
              do {
                uVar30 = (ulong)((uint)(float)(int)*pcVar20 >> 0x17);
                *psVar21 = *(short *)(&UNK_10e04070a + uVar30 * 2) +
                           (short)(((uint)(float)(int)*pcVar20 & 0x7fffff) >>
                                  (ulong)((byte)(&UNK_10e040b0a)[uVar30] & 0x1f));
                uVar23 = uVar23 - 1;
                pcVar20 = pcVar20 + 1;
                psVar21 = psVar21 + 1;
              } while (uVar23 != 0);
              return;
            }
          }
          else {
            if (uVar31 != 1) goto LAB_109d13170;
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            uVar23 = (ulong)uVar31;
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              pcVar20 = *(char **)(param_1 + 0x20);
              pfVar16 = *(float **)(param_2 + 0x20);
              do {
                *pfVar16 = (float)(int)*pcVar20;
                uVar23 = uVar23 - 1;
                pcVar20 = pcVar20 + 1;
                pfVar16 = pfVar16 + 1;
              } while (uVar23 != 0);
              return;
            }
          }
        }
        else {
          if (uVar31 != 2) {
            if (uVar31 == 3) {
              if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
                uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) *
                         *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
              }
              else {
                uVar31 = 1;
                for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                    piVar18 = piVar18 + 1) {
                  uVar31 = *piVar18 * uVar31;
                }
              }
              uVar23 = (ulong)uVar31;
              if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d11e18;
              iVar7 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                iVar7 = *piVar18 * iVar7;
              }
              goto LAB_109d11e2c;
            }
LAB_109d13170:
            func_0x000107c31940(auStack_70,&UNK_10f5ac487);
            func_0x000109259240(auStack_58,auStack_70,&UNK_10f5a35f2);
            __ZNSt3__19to_stringEi(&ppppppuStack_88,param_3);
            pppppppuVar1 = (undefined8 *******)ppppppuStack_88;
            if (-1 < (char)bStack_71) {
              uStack_80 = (ulong)bStack_71;
              pppppppuVar1 = &ppppppuStack_88;
            }
            puVar6 = auStack_58;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar6,pppppppuVar1,uStack_80);
            uStack_38 = puVar6[1];
            uStack_40 = *puVar6;
            uStack_30 = puVar6[2];
            puVar6[1] = 0;
            puVar6[2] = 0;
            *puVar6 = 0;
            if ((char)bStack_71 < '\0') {
              __ZdlPv(ppppppuStack_88);
            }
            if (cStack_41 < '\0') {
              __ZdlPv(auStack_58[0]);
            }
            if (cStack_59 < '\0') {
              __ZdlPv(auStack_70[0]);
            }
            plVar5 = (long *)0x10;
            ___cxa_allocate_exception();
            __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      ();
            *plVar5 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
            ___cxa_throw(plVar5,PTR___ZTISt16invalid_argument_110352248,
                         PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
            goto LAB_109d134dc;
          }
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          uVar23 = (ulong)uVar31;
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            pcVar20 = *(char **)(param_1 + 0x20);
            pdVar14 = *(double **)(param_2 + 0x20);
            do {
              *pdVar14 = (double)(int)*pcVar20;
              uVar23 = uVar23 - 1;
              pcVar20 = pcVar20 + 1;
              pdVar14 = pdVar14 + 1;
            } while (uVar23 != 0);
            return;
          }
        }
      }
      else if ((int)uVar31 < 6) {
        if (uVar31 == 4) {
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          uVar23 = (ulong)uVar31;
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            pcVar20 = *(char **)(param_1 + 0x20);
            psVar21 = *(short **)(param_2 + 0x20);
            do {
              *psVar21 = (short)*pcVar20;
              uVar23 = uVar23 - 1;
              pcVar20 = pcVar20 + 1;
              psVar21 = psVar21 + 1;
            } while (uVar23 != 0);
            return;
          }
        }
        else {
          if (uVar31 != 5) goto LAB_109d13170;
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          uVar23 = (ulong)uVar31;
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            pcVar20 = *(char **)(param_1 + 0x20);
            piVar18 = *(int **)(param_2 + 0x20);
            do {
              *piVar18 = (int)*pcVar20;
              uVar23 = uVar23 - 1;
              pcVar20 = pcVar20 + 1;
              piVar18 = piVar18 + 1;
            } while (uVar23 != 0);
            return;
          }
        }
      }
      else if (uVar31 == 6) {
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                   *(int *)(param_1 + 8);
        }
        else {
          uVar31 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar31 = *piVar18 * uVar31;
          }
        }
        uVar23 = (ulong)uVar31;
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
LAB_109d11e18:
          iVar7 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                  *(int *)(param_2 + 8);
        }
        else {
          iVar7 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            iVar7 = *piVar18 * iVar7;
          }
        }
LAB_109d11e2c:
        if ((int)uVar23 == iVar7) {
          if ((int)uVar23 == 0) {
            return;
          }
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          uVar4 = *(undefined8 *)(param_2 + 0x20);
          goto LAB_109d12c0c;
        }
      }
      else if (uVar31 == 7) {
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                   *(int *)(param_1 + 8);
        }
        else {
          uVar31 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar31 = *piVar18 * uVar31;
          }
        }
        uVar23 = (ulong)uVar31;
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                   *(int *)(param_2 + 8);
        }
        else {
          uVar10 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar10 = *piVar18 * uVar10;
          }
        }
        if (uVar31 == uVar10) {
          if (uVar31 == 0) {
            return;
          }
          pcVar20 = *(char **)(param_1 + 0x20);
          psVar21 = *(short **)(param_2 + 0x20);
          do {
            *psVar21 = (short)*pcVar20;
            uVar23 = uVar23 - 1;
            pcVar20 = pcVar20 + 1;
            psVar21 = psVar21 + 1;
          } while (uVar23 != 0);
          return;
        }
      }
      else {
        if (uVar31 != 8) goto LAB_109d13170;
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                   *(int *)(param_1 + 8);
        }
        else {
          uVar31 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar31 = *piVar18 * uVar31;
          }
        }
        uVar23 = (ulong)uVar31;
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                   *(int *)(param_2 + 8);
        }
        else {
          uVar10 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar10 = *piVar18 * uVar10;
          }
        }
        if (uVar31 == uVar10) {
          if (uVar31 == 0) {
            return;
          }
          pcVar20 = *(char **)(param_1 + 0x20);
          piVar18 = *(int **)(param_2 + 0x20);
          do {
            *piVar18 = (int)*pcVar20;
            uVar23 = uVar23 - 1;
            pcVar20 = pcVar20 + 1;
            piVar18 = piVar18 + 1;
          } while (uVar23 != 0);
          return;
        }
      }
    }
    else if (iVar7 == 7) {
      uVar31 = *(uint *)(param_2 + 0x18);
      param_3 = (ulong)uVar31;
      if ((int)uVar31 < 4) {
        if ((int)uVar31 < 2) {
          if (uVar31 == 0) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              lVar8 = (ulong)uVar31 << 1;
              psVar21 = *(short **)(param_1 + 0x20);
              psVar25 = *(short **)(param_2 + 0x20);
              do {
                uVar23 = (ulong)((uint)(float)(int)*psVar21 >> 0x17);
                *psVar25 = *(short *)(&UNK_10e04070a + uVar23 * 2) +
                           (short)(((uint)(float)(int)*psVar21 & 0x7fffff) >>
                                  (ulong)((byte)(&UNK_10e040b0a)[uVar23] & 0x1f));
                lVar8 = lVar8 + -2;
                psVar21 = psVar21 + 1;
                psVar25 = psVar25 + 1;
              } while (lVar8 != 0);
              return;
            }
          }
          else {
            if (uVar31 != 1) {
LAB_109d13328:
              func_0x000107c31940(auStack_70,&UNK_10f5ac487);
              func_0x000109259240(auStack_58,auStack_70,&UNK_10f5a35f2);
              __ZNSt3__19to_stringEi(&ppppppuStack_88,param_3);
              pppppppuVar1 = (undefined8 *******)ppppppuStack_88;
              if (-1 < (char)bStack_71) {
                uStack_80 = (ulong)bStack_71;
                pppppppuVar1 = &ppppppuStack_88;
              }
              puVar6 = auStack_58;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (puVar6,pppppppuVar1,uStack_80);
              uStack_38 = puVar6[1];
              uStack_40 = *puVar6;
              uStack_30 = puVar6[2];
              puVar6[1] = 0;
              puVar6[2] = 0;
              *puVar6 = 0;
              if ((char)bStack_71 < '\0') {
                __ZdlPv(ppppppuStack_88);
              }
              if (cStack_41 < '\0') {
                __ZdlPv(auStack_58[0]);
              }
              if (cStack_59 < '\0') {
                __ZdlPv(auStack_70[0]);
              }
              plVar5 = (long *)0x10;
              ___cxa_allocate_exception();
              __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                        ();
              *plVar5 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
              ___cxa_throw(plVar5,PTR___ZTISt16invalid_argument_110352248,
                           PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
              goto LAB_109d134dc;
            }
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              lVar8 = (ulong)uVar31 << 1;
              psVar21 = *(short **)(param_1 + 0x20);
              pfVar16 = *(float **)(param_2 + 0x20);
              do {
                *pfVar16 = (float)(int)*psVar21;
                lVar8 = lVar8 + -2;
                psVar21 = psVar21 + 1;
                pfVar16 = pfVar16 + 1;
              } while (lVar8 != 0);
              return;
            }
          }
        }
        else if (uVar31 == 2) {
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 1;
            psVar21 = *(short **)(param_1 + 0x20);
            pdVar14 = *(double **)(param_2 + 0x20);
            do {
              *pdVar14 = (double)(int)*psVar21;
              lVar8 = lVar8 + -2;
              psVar21 = psVar21 + 1;
              pdVar14 = pdVar14 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
        else {
          if (uVar31 != 3) goto LAB_109d13328;
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 1;
            puVar15 = *(undefined1 **)(param_1 + 0x20);
            puVar27 = *(undefined1 **)(param_2 + 0x20);
            do {
              *puVar27 = *puVar15;
              lVar8 = lVar8 + -2;
              puVar15 = puVar15 + 2;
              puVar27 = puVar27 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
      }
      else if ((int)uVar31 < 6) {
        if (uVar31 == 4) {
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          uVar23 = (ulong)uVar31;
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12910;
          iVar7 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            iVar7 = *piVar18 * iVar7;
          }
          goto LAB_109d12924;
        }
        if (uVar31 != 5) goto LAB_109d13328;
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                   *(int *)(param_1 + 8);
        }
        else {
          uVar31 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar31 = *piVar18 * uVar31;
          }
        }
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                   *(int *)(param_2 + 8);
        }
        else {
          uVar10 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar10 = *piVar18 * uVar10;
          }
        }
        if (uVar31 == uVar10) {
          if (uVar31 == 0) {
            return;
          }
          lVar8 = (ulong)uVar31 << 1;
          psVar21 = *(short **)(param_1 + 0x20);
          piVar18 = *(int **)(param_2 + 0x20);
          do {
            *piVar18 = (int)*psVar21;
            lVar8 = lVar8 + -2;
            psVar21 = psVar21 + 1;
            piVar18 = piVar18 + 1;
          } while (lVar8 != 0);
          return;
        }
      }
      else if (uVar31 == 6) {
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                   *(int *)(param_1 + 8);
        }
        else {
          uVar31 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar31 = *piVar18 * uVar31;
          }
        }
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                   *(int *)(param_2 + 8);
        }
        else {
          uVar10 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar10 = *piVar18 * uVar10;
          }
        }
        if (uVar31 == uVar10) {
          if (uVar31 == 0) {
            return;
          }
          lVar8 = (ulong)uVar31 << 1;
          puVar15 = *(undefined1 **)(param_1 + 0x20);
          puVar27 = *(undefined1 **)(param_2 + 0x20);
          do {
            *puVar27 = *puVar15;
            lVar8 = lVar8 + -2;
            puVar15 = puVar15 + 2;
            puVar27 = puVar27 + 1;
          } while (lVar8 != 0);
          return;
        }
      }
      else {
        if (uVar31 == 7) {
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          uVar23 = (ulong)uVar31;
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12910;
          iVar7 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            iVar7 = *piVar18 * iVar7;
          }
          goto LAB_109d12924;
        }
        if (uVar31 != 8) goto LAB_109d13328;
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                   *(int *)(param_1 + 8);
        }
        else {
          uVar31 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar31 = *piVar18 * uVar31;
          }
        }
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                   *(int *)(param_2 + 8);
        }
        else {
          uVar10 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar10 = *piVar18 * uVar10;
          }
        }
        if (uVar31 == uVar10) {
          if (uVar31 == 0) {
            return;
          }
          lVar8 = (ulong)uVar31 << 1;
          psVar21 = *(short **)(param_1 + 0x20);
          piVar18 = *(int **)(param_2 + 0x20);
          do {
            *piVar18 = (int)*psVar21;
            lVar8 = lVar8 + -2;
            psVar21 = psVar21 + 1;
            piVar18 = piVar18 + 1;
          } while (lVar8 != 0);
          return;
        }
      }
    }
    else {
      if (iVar7 != 8) goto LAB_109d12c48;
      uVar31 = *(uint *)(param_2 + 0x18);
      param_3 = (ulong)uVar31;
      if ((int)uVar31 < 4) {
        if ((int)uVar31 < 2) {
          if (uVar31 == 0) {
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              lVar8 = (ulong)uVar31 << 2;
              piVar18 = *(int **)(param_1 + 0x20);
              psVar21 = *(short **)(param_2 + 0x20);
              do {
                uVar23 = (ulong)((uint)(float)*piVar18 >> 0x17);
                *psVar21 = *(short *)(&UNK_10e04070a + uVar23 * 2) +
                           (short)(((uint)(float)*piVar18 & 0x7fffff) >>
                                  (ulong)((byte)(&UNK_10e040b0a)[uVar23] & 0x1f));
                lVar8 = lVar8 + -4;
                piVar18 = piVar18 + 1;
                psVar21 = psVar21 + 1;
              } while (lVar8 != 0);
              return;
            }
          }
          else {
            if (uVar31 != 1) {
LAB_109d13404:
              func_0x000107c31940(auStack_70,&UNK_10f5ac487);
              func_0x000109259240(auStack_58,auStack_70,&UNK_10f5a35f2);
              __ZNSt3__19to_stringEi(&ppppppuStack_88,param_3);
              pppppppuVar1 = (undefined8 *******)ppppppuStack_88;
              if (-1 < (char)bStack_71) {
                uStack_80 = (ulong)bStack_71;
                pppppppuVar1 = &ppppppuStack_88;
              }
              puVar6 = auStack_58;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (puVar6,pppppppuVar1,uStack_80);
              uStack_38 = puVar6[1];
              uStack_40 = *puVar6;
              uStack_30 = puVar6[2];
              puVar6[1] = 0;
              puVar6[2] = 0;
              *puVar6 = 0;
              if ((char)bStack_71 < '\0') {
                __ZdlPv(ppppppuStack_88);
              }
              if (cStack_41 < '\0') {
                __ZdlPv(auStack_58[0]);
              }
              if (cStack_59 < '\0') {
                __ZdlPv(auStack_70[0]);
              }
              plVar5 = (long *)0x10;
              ___cxa_allocate_exception();
              __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                        ();
              *plVar5 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
              ___cxa_throw(plVar5,PTR___ZTISt16invalid_argument_110352248,
                           PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
              goto LAB_109d134dc;
            }
            if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
              uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc)
                       * *(int *)(param_1 + 8);
            }
            else {
              uVar31 = 1;
              for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar31 = *piVar18 * uVar31;
              }
            }
            if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
              uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc)
                       * *(int *)(param_2 + 8);
            }
            else {
              uVar10 = 1;
              for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                  piVar18 = piVar18 + 1) {
                uVar10 = *piVar18 * uVar10;
              }
            }
            if (uVar31 == uVar10) {
              if (uVar31 == 0) {
                return;
              }
              lVar8 = (ulong)uVar31 << 2;
              piVar18 = *(int **)(param_1 + 0x20);
              pfVar16 = *(float **)(param_2 + 0x20);
              do {
                *pfVar16 = (float)*piVar18;
                lVar8 = lVar8 + -4;
                piVar18 = piVar18 + 1;
                pfVar16 = pfVar16 + 1;
              } while (lVar8 != 0);
              return;
            }
          }
        }
        else if (uVar31 == 2) {
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 2;
            piVar18 = *(int **)(param_1 + 0x20);
            pdVar14 = *(double **)(param_2 + 0x20);
            do {
              *pdVar14 = (double)*piVar18;
              lVar8 = lVar8 + -4;
              piVar18 = piVar18 + 1;
              pdVar14 = pdVar14 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
        else {
          if (uVar31 != 3) goto LAB_109d13404;
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                     *(int *)(param_2 + 8);
          }
          else {
            uVar10 = 1;
            for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar10 = *piVar18 * uVar10;
            }
          }
          if (uVar31 == uVar10) {
            if (uVar31 == 0) {
              return;
            }
            lVar8 = (ulong)uVar31 << 2;
            puVar22 = *(undefined4 **)(param_1 + 0x20);
            puVar15 = *(undefined1 **)(param_2 + 0x20);
            do {
              *puVar15 = (char)*puVar22;
              lVar8 = lVar8 + -4;
              puVar22 = puVar22 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar8 != 0);
            return;
          }
        }
      }
      else if ((int)uVar31 < 6) {
        if (uVar31 != 4) {
          if (uVar31 != 5) goto LAB_109d13404;
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          uVar23 = (ulong)uVar31;
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12be0;
          iVar7 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            iVar7 = *piVar18 * iVar7;
          }
          goto LAB_109d12bf4;
        }
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                   *(int *)(param_1 + 8);
        }
        else {
          uVar31 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar31 = *piVar18 * uVar31;
          }
        }
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                   *(int *)(param_2 + 8);
        }
        else {
          uVar10 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar10 = *piVar18 * uVar10;
          }
        }
        if (uVar31 == uVar10) {
          if (uVar31 == 0) {
            return;
          }
          lVar8 = (ulong)uVar31 << 2;
          puVar22 = *(undefined4 **)(param_1 + 0x20);
          puVar28 = *(undefined2 **)(param_2 + 0x20);
          do {
            *puVar28 = (short)*puVar22;
            lVar8 = lVar8 + -4;
            puVar22 = puVar22 + 1;
            puVar28 = puVar28 + 1;
          } while (lVar8 != 0);
          return;
        }
      }
      else if (uVar31 == 6) {
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                   *(int *)(param_1 + 8);
        }
        else {
          uVar31 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar31 = *piVar18 * uVar31;
          }
        }
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                   *(int *)(param_2 + 8);
        }
        else {
          uVar10 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar10 = *piVar18 * uVar10;
          }
        }
        if (uVar31 == uVar10) {
          if (uVar31 == 0) {
            return;
          }
          lVar8 = (ulong)uVar31 << 2;
          puVar22 = *(undefined4 **)(param_1 + 0x20);
          puVar15 = *(undefined1 **)(param_2 + 0x20);
          do {
            *puVar15 = (char)*puVar22;
            lVar8 = lVar8 + -4;
            puVar22 = puVar22 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar8 != 0);
          return;
        }
      }
      else {
        if (uVar31 != 7) {
          if (uVar31 != 8) goto LAB_109d13404;
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                     *(int *)(param_1 + 8);
          }
          else {
            uVar31 = 1;
            for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
                piVar18 = piVar18 + 1) {
              uVar31 = *piVar18 * uVar31;
            }
          }
          uVar23 = (ulong)uVar31;
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_109d12be0;
          iVar7 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            iVar7 = *piVar18 * iVar7;
          }
          goto LAB_109d12bf4;
        }
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar31 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) *
                   *(int *)(param_1 + 8);
        }
        else {
          uVar31 = 1;
          for (piVar18 = *(int **)(param_1 + 0x30); piVar18 != *(int **)(param_1 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar31 = *piVar18 * uVar31;
          }
        }
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          uVar10 = *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0xc) *
                   *(int *)(param_2 + 8);
        }
        else {
          uVar10 = 1;
          for (piVar18 = *(int **)(param_2 + 0x30); piVar18 != *(int **)(param_2 + 0x38);
              piVar18 = piVar18 + 1) {
            uVar10 = *piVar18 * uVar10;
          }
        }
        if (uVar31 == uVar10) {
          if (uVar31 == 0) {
            return;
          }
          lVar8 = (ulong)uVar31 << 2;
          puVar22 = *(undefined4 **)(param_1 + 0x20);
          puVar28 = *(undefined2 **)(param_2 + 0x20);
          do {
            *puVar28 = (short)*puVar22;
            lVar8 = lVar8 + -4;
            puVar22 = puVar22 + 1;
            puVar28 = puVar28 + 1;
          } while (lVar8 != 0);
          return;
        }
      }
    }
LAB_109d12c30:
    func_0x00010952d0c4(&UNK_10f5aa38f,&UNK_10f5aa38f,&UNK_10f5ac492);
  }
LAB_109d12c48:
  func_0x000107c31940(auStack_70,&UNK_10f5ac487);
  func_0x000109259240(auStack_58,auStack_70,&UNK_10f5a35f2);
  __ZNSt3__19to_stringEi(&ppppppuStack_88,param_3);
  pppppppuVar1 = (undefined8 *******)ppppppuStack_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    pppppppuVar1 = &ppppppuStack_88;
  }
  puVar6 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,pppppppuVar1,uStack_80);
  uStack_38 = puVar6[1];
  uStack_40 = *puVar6;
  uStack_30 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if ((char)bStack_71 < '\0') {
    __ZdlPv(ppppppuStack_88);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  plVar5 = (long *)0x10;
  ___cxa_allocate_exception();
  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *plVar5 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
  ___cxa_throw(plVar5,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
LAB_109d134dc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109d134e0);
  (*pcVar2)();
}



/* Entry: 109d13604; end: 109d13903;  */

void FUN_109d13604(ushort *param_1,ushort *param_2,double *param_3)

{
  ulong uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = (ulong)(*param_1 >> 10);
    *param_3 = (double)(float)(*(int *)(&UNK_10e039244 + uVar1 * 4) +
                              *(int *)(&UNK_10e037244 +
                                      (ulong)((*param_1 & 0x3ff) +
                                             (uint)*(ushort *)(&UNK_10e039344 + uVar1 * 2)) * 4));
    param_3 = param_3 + 1;
  }
  return;
}



/* Entry: 109d13904; end: 109d13a27;  */

long FUN_109d13904(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  uStack_38 = param_1;
  if ((bRam00000001138333e0 & 1) == 0) {
    iVar1 = 0x138333e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138333c0 = 0;
      uRam00000001138333b8 = 0;
      uRam00000001138333d0 = 0;
      uRam00000001138333c8 = 0;
      uRam00000001138333d8 = 0x3f800000;
      ___cxa_guard_release(0x1138333e0);
    }
  }
  if ((bRam0000000113833428 & 1) == 0) {
    iVar1 = 0x13833428;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138333e8 = 0x32aaaba7;
      uRam00000001138333f8 = 0;
      uRam00000001138333f0 = 0;
      uRam0000000113833408 = 0;
      uRam0000000113833400 = 0;
      uRam0000000113833418 = 0;
      uRam0000000113833410 = 0;
      uRam0000000113833420 = 0;
      ___cxa_guard_release(0x113833428);
    }
  }
  __ZNSt3__15mutex4lockEv(0x1138333e8);
  puStack_28 = &uStack_38;
  lVar2 = 0x1138333b8;
  FUN_109d13b48(0x1138333b8,&uStack_38,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  __ZNSt3__15mutex6unlockEv(0x1138333e8);
  return lVar2 + 0x18;
}



/* Entry: 109d13a28; end: 109d13b47;  */

long FUN_109d13a28(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  if ((bRam0000000113833458 & 1) == 0) {
    iVar1 = 0x13833458;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113833438 = 0;
      uRam0000000113833430 = 0;
      uRam0000000113833448 = 0;
      uRam0000000113833440 = 0;
      uRam0000000113833450 = 0x3f800000;
      ___cxa_guard_release(0x113833458);
    }
  }
  if ((bRam00000001138334a0 & 1) == 0) {
    iVar1 = 0x138334a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113833460 = 0x32aaaba7;
      uRam0000000113833470 = 0;
      uRam0000000113833468 = 0;
      uRam0000000113833480 = 0;
      uRam0000000113833478 = 0;
      uRam0000000113833490 = 0;
      uRam0000000113833488 = 0;
      uRam0000000113833498 = 0;
      ___cxa_guard_release(0x1138334a0);
    }
  }
  __ZNSt3__15mutex4lockEv(0x113833460);
  lVar2 = 0x113833430;
  uStack_28 = param_1;
  FUN_109d13f78(0x113833430,param_1,&UNK_10dd5b8f9,&uStack_28,&uStack_29);
  __ZNSt3__15mutex6unlockEv(0x113833460);
  return lVar2 + 0x28;
}



/* Entry: 109d13b48; end: 109d13f2f;  */

undefined1  [16] FUN_109d13b48(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  
  uVar15 = *param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar6 = uVar16 - 1;
    if ((uVar16 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar16 <= uVar15) {
        uVar9 = 0;
        if (uVar16 != 0) {
          uVar9 = uVar15 / uVar16;
        }
        unaff_x24 = uVar15 - uVar9 * uVar16;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar8; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        uVar9 = plVar14[1];
        if (uVar9 == uVar15) {
          if (plVar14[2] == uVar15) {
            uVar5 = 0;
            goto LAB_109d13eb4;
          }
        }
        else {
          if ((uVar16 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar16 <= uVar9) {
            uVar7 = 0;
            if (uVar16 != 0) {
              uVar7 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar7 * uVar16;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar14 = (long *)0x58;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = uVar15;
  plVar14[2] = *(long *)*param_4;
  plVar14[3] = 0x32aaaba7;
  plVar14[10] = 0;
  plVar14[7] = 0;
  plVar14[6] = 0;
  plVar14[9] = 0;
  plVar14[8] = 0;
  plVar14[5] = 0;
  plVar14[4] = 0;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar16) {
      uVar6 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar6 = uVar6 | uVar16 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar6) {
LAB_109d13cc4:
      if (uVar6 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109d13f1c);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar6 != uVar16);
      plVar10 = (long *)param_1[2];
      uVar16 = uVar6;
      if (plVar10 != (long *)0x0) {
        uVar9 = plVar10[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar6 <= uVar9) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar9 / uVar6;
          }
          uVar9 = uVar9 - uVar13 * uVar6;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar10;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar6 & uVar7) == 0) {
            uVar13 = uVar13 & uVar7;
          }
          else if (uVar6 <= uVar13) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar1 * uVar6;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar13 * 8) == 0) {
              *(long **)(lVar3 + uVar13 * 8) = plVar10;
              uVar9 = uVar13;
            }
            else {
              *plVar10 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + uVar13 * 8);
              **(long **)(lVar3 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar10;
            }
          }
          plVar10 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar6 < uVar16) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar9) {
        uVar6 = uVar9;
      }
      if (uVar6 < uVar16) {
        if (uVar6 != 0) goto LAB_109d13cc4;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = uVar16 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar16 <= uVar15) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = uVar15 / uVar16;
        }
        unaff_x24 = uVar15 - uVar6 * uVar16;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar14 = *plVar10;
    *plVar10 = (long)plVar14;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar10;
    if (*plVar14 == 0) goto LAB_109d13ea4;
    uVar15 = *(ulong *)(*plVar14 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar15 = uVar15 & uVar16 - 1;
    }
    else if (uVar16 <= uVar15) {
      uVar6 = 0;
      if (uVar16 != 0) {
        uVar6 = uVar15 / uVar16;
      }
      uVar15 = uVar15 - uVar6 * uVar16;
    }
    plVar10 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar14 = *plVar10;
  }
  *plVar10 = (long)plVar14;
LAB_109d13ea4:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_109d13eb4:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 109d13f30; end: 109d13f77;  */

void FUN_109d13f30(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__15mutexD1Ev(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109d13f78; end: 109d143a3;  */

undefined1  [16]
FUN_109d13f78(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x25;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  plVar9 = param_1;
  func_0x000107c31944();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x25 = (long *)(uVar16 & (ulong)plVar9);
    }
    else {
      unaff_x25 = plVar9;
      if (plVar15 <= plVar9) {
        uVar1 = 0;
        if (plVar15 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar9 - uVar1 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar6; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        plVar7 = (long *)plVar14[1];
        if (plVar7 == plVar9) {
          plVar7 = param_1;
          func_0x000104c4fbc4(param_1,plVar14 + 2,param_2);
          if (((ulong)plVar7 & 1) != 0) {
            uVar5 = 0;
            goto LAB_109d14320;
          }
        }
        else {
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar16);
          }
          else if (plVar15 <= plVar7) {
            uVar1 = 0;
            if (plVar15 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar15);
          }
          if (plVar7 != unaff_x25) break;
        }
      }
    }
  }
  plVar7 = (long *)*param_4;
  plVar14 = (long *)0x68;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = (long)plVar9;
  if (*(char *)((long)plVar7 + 0x17) < '\0') {
    func_0x000107c3192c(plVar14 + 2,*plVar7,plVar7[1]);
  }
  else {
    lVar4 = plVar7[1];
    lVar3 = *plVar7;
    plVar14[4] = plVar7[2];
    plVar14[3] = lVar4;
    plVar14[2] = lVar3;
  }
  plVar14[5] = 0x32aaaba7;
  plVar14[7] = 0;
  plVar14[6] = 0;
  plVar14[9] = 0;
  plVar14[8] = 0;
  plVar14[0xb] = 0;
  plVar14[10] = 0;
  plVar14[0xc] = 0;
  if ((plVar15 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar15)) goto LAB_109d142a8;
  uVar16 = 1;
  if ((long *)0x2 < plVar15) {
    uVar16 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
  }
  plVar7 = (long *)(uVar16 | (long)plVar15 << 1);
  plVar15 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar7 <= plVar15) {
    plVar7 = plVar15;
  }
  if ((long)plVar7 - 1U == 0) {
    plVar7 = (long *)0x2;
  }
  else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = (long *)param_1[1];
  if (plVar15 < plVar7) {
LAB_109d14130:
    if ((ulong)plVar7 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109d1438c);
      (*pcVar2)();
    }
    lVar3 = (long)plVar7 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar15 = (long *)0x0;
    param_1[1] = (long)plVar7;
    do {
      *(undefined8 *)(*param_1 + (long)plVar15 * 8) = 0;
      plVar15 = (long *)((long)plVar15 + 1);
    } while (plVar7 != plVar15);
    plVar8 = (long *)param_1[2];
    plVar15 = plVar7;
    if (plVar8 != (long *)0x0) {
      plVar10 = (long *)plVar8[1];
      uVar16 = (long)plVar7 - 1;
      if (((ulong)plVar7 & uVar16) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar16);
      }
      else if (plVar7 <= plVar10) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar10 / (ulong)plVar7;
        }
        plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar7);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar8;
      while (plVar11 != (long *)0x0) {
        plVar13 = (long *)plVar11[1];
        if (((ulong)plVar7 & uVar16) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar16);
        }
        else if (plVar7 <= plVar13) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar13 / (ulong)plVar7;
          }
          plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar7);
        }
        plVar12 = plVar11;
        if (plVar13 != plVar10) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar13 * 8) = plVar8;
            plVar10 = plVar13;
          }
          else {
            *plVar8 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
            **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
            plVar12 = plVar8;
          }
        }
        plVar8 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (plVar7 < plVar15) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (plVar7 <= plVar8) {
      plVar7 = plVar8;
    }
    if (plVar7 < plVar15) {
      if (plVar7 != (long *)0x0) goto LAB_109d14130;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar15 - 1U & (ulong)plVar9);
  }
  else {
    unaff_x25 = plVar9;
    if (plVar15 <= plVar9) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar9 / (ulong)plVar15;
      }
      unaff_x25 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
    }
  }
LAB_109d142a8:
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar9;
    if (*plVar14 != 0) {
      plVar9 = *(long **)(*plVar14 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar9) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar9 / (ulong)plVar15;
        }
        plVar9 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
  }
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_109d14320:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 109d143a4; end: 109d143fb;  */

void FUN_109d143a4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__15mutexD1Ev(lVar1 + 0x28);
      if (*(char *)(lVar1 + 0x27) < '\0') {
        __ZdlPv(*(undefined8 *)(lVar1 + 0x10));
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109d143fc; end: 109d145ef;  */

undefined ****** FUN_109d143fc(ulong param_1)

{
  long lVar1;
  undefined **ppuVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined1 **ppuVar7;
  undefined8 *puVar8;
  undefined1 **ppuVar9;
  undefined ******ppppppuVar10;
  undefined8 *puVar11;
  code **ppcVar12;
  undefined8 *extraout_x8;
  undefined ******ppppppuVar13;
  long lVar14;
  undefined *****pppppuVar15;
  undefined *****pppppuVar16;
  undefined *****pppppuStack_1e0;
  ulong uStack_1d8;
  byte bStack_1c9;
  undefined *****pppppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined7 uStack_1b8;
  char cStack_1b1;
  undefined *****pppppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 *puStack_1a0;
  undefined *****pppppuStack_198;
  code *pcStack_168;
  undefined ****ppppuStack_160;
  undefined1 *puStack_158;
  undefined *****pppppuStack_150;
  long lStack_128;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  long lStack_38;
  
  puStack_68 = (undefined1 *)&lStack_d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  puStack_78 = (undefined1 *)0x109d15398;
  ppuStack_70 = &PTR_FUN_110b3e858;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  pcStack_b8 = FUN_109d15388;
  ppuStack_b0 = &PTR_DAT_110ae9180;
  uVar5 = param_1;
  FUN_109d14a74(param_1,&puStack_78,&pcStack_b8);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if ((uVar5 & 1) == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&puStack_78,&UNK_10f5ac581,param_1);
    func_0x000109c61b6c(&puStack_78);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109d14588);
    (*pcVar3)();
  }
  lVar1 = 0;
  if (lStack_c8 != lStack_d0) {
    lVar1 = LZCOUNT((lStack_c8 - lStack_d0 >> 3) * -0x5555555555555555) * -2 + 0x7e;
  }
  func_0x000107c281b4(lStack_d0,lStack_c8,&puStack_78,lVar1,1);
  lVar1 = lStack_c8;
  if (lStack_d0 == lStack_c8) {
    ppppppuVar13 = (undefined ******)0x0;
  }
  else {
    ppppppuVar13 = (undefined ******)0x0;
    lVar14 = lStack_d0;
    do {
      lVar6 = lVar14;
      func_0x000109549100(lVar14);
      ppppppuVar13 = (undefined ******)
                     ((long)ppppppuVar13 * 0x40 + ((ulong)ppppppuVar13 >> 2) + lVar6 + 0x9e3779b9 ^
                     (ulong)ppppppuVar13);
      lVar14 = lVar14 + 0x18;
    } while (lVar14 != lVar1);
  }
  ppuVar7 = &puStack_78;
  puStack_78 = (undefined1 *)&lStack_d0;
  func_0x000104c607c8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if ((long)puStack_68 < 0) {
      __ZdlPv(puStack_78);
    }
    pcStack_b8 = (code *)&lStack_d0;
    func_0x000104c607c8(&pcStack_b8);
    __Unwind_Resume();
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = (undefined8 *)0x20;
    __Znwm();
    func_0x0001092b2830(&pcStack_168,ppuVar7,0);
    __ZNKSt3__14__fs10filesystem4path16lexically_normalEv(&pppppuStack_1c8,&pcStack_168);
    if (cStack_1b1 < '\0') {
      func_0x000107c3192c(&pppppuStack_1b0,pppppuStack_1c8,ppuStack_1c0);
      if (cStack_1b1 < '\0') {
        __ZdlPv(pppppuStack_1c8);
      }
    }
    else {
      ppuStack_1a8 = ppuStack_1c0;
      pppppuStack_1b0 = pppppuStack_1c8;
      puStack_1a0 = (undefined1 *)CONCAT17(cStack_1b1,uStack_1b8);
    }
    ppuVar9 = ppuVar7;
    FUN_109d143fc(ppuVar7);
    ppuVar2 = ppuStack_1a8;
    if (-1 < (long)puStack_1a0) {
      ppuVar2 = (undefined **)((ulong)puStack_1a0 >> 0x38);
    }
    func_0x000104c4f768(&pppppuStack_1c8,(long)ppuVar2 + 1,&pppppuStack_1e0);
    ppppppuVar13 = (undefined ******)pppppuStack_1c8;
    if (-1 < cStack_1b1) {
      ppppppuVar13 = &pppppuStack_1c8;
    }
    if (ppuVar2 != (undefined **)0x0) {
      ppppppuVar10 = (undefined ******)pppppuStack_1b0;
      if (-1 < (long)puStack_1a0) {
        ppppppuVar10 = &pppppuStack_1b0;
      }
      _memmove(ppppppuVar13,ppppppuVar10,ppuVar2);
    }
    *(undefined2 *)((long)ppppppuVar13 + (long)ppuVar2) = 0x5f;
    __ZNSt3__19to_stringEy(&pppppuStack_1e0,ppuVar9);
    ppppppuVar13 = (undefined ******)pppppuStack_1e0;
    if (-1 < (char)bStack_1c9) {
      uStack_1d8 = (ulong)bStack_1c9;
      ppppppuVar13 = &pppppuStack_1e0;
    }
    ppppppuVar10 = &pppppuStack_1c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppuVar10,ppppppuVar13,uStack_1d8);
    pppppuVar16 = ppppppuVar10[1];
    pppppuVar15 = *ppppppuVar10;
    puVar8[2] = ppppppuVar10[2];
    puVar8[1] = pppppuVar16;
    *puVar8 = pppppuVar15;
    ppppppuVar10[1] = (undefined *****)0x0;
    ppppppuVar10[2] = (undefined *****)0x0;
    *ppppppuVar10 = (undefined *****)0x0;
    if ((char)bStack_1c9 < '\0') {
      __ZdlPv(pppppuStack_1e0);
    }
    if (cStack_1b1 < '\0') {
      __ZdlPv(pppppuStack_1c8);
    }
    if ((long)puStack_1a0 < 0) {
      __ZdlPv(pppppuStack_1b0);
    }
    if ((long)puStack_158 < 0) {
      __ZdlPv(pcStack_168);
    }
    puVar11 = puVar8;
    FUN_109d13a28();
    puVar8[3] = puVar11;
    __ZNSt3__15mutex4lockEv();
    *extraout_x8 = puVar8;
    func_0x0001092b2830(&pppppuStack_1c8,puVar8,0);
    func_0x0001092b2830(&pppppuStack_1e0,ppuVar7,0);
    func_0x0001092ac3b8(&pcStack_168,&pppppuStack_1c8);
    func_0x0001092ac3b8(&pppppuStack_1b0,&pppppuStack_1e0);
    ppcVar12 = &pcStack_168;
    FUN_109d14a3c(ppcVar12,&pppppuStack_1b0);
    if ((long)puStack_1a0 < 0) {
      __ZdlPv(pppppuStack_1b0);
    }
    if ((long)puStack_158 < 0) {
      __ZdlPv(pcStack_168);
    }
    if (((ulong)ppcVar12 & 1) == 0) {
      func_0x00010952d0c4(&UNK_10f5ac523,&UNK_10f5ac531,&UNK_10f5ac4e3);
    }
    else {
      pcStack_168 = FUN_109d153d8;
      ppppuStack_160 = (undefined ****)&PTR_FUN_110b3e870;
      pppppuStack_198 = (undefined *****)&pppppuStack_1c8;
      pppppuStack_1b0 = (undefined *****)FUN_109d156a0;
      ppuStack_1a8 = &PTR_FUN_110b3e888;
      puStack_1a0 = (undefined1 *)&pppppuStack_1e0;
      puStack_158 = (undefined1 *)&pppppuStack_1e0;
      pppppuStack_150 = pppppuStack_198;
      FUN_109d14a74(ppuVar7,&pcStack_168,&pppppuStack_1b0);
      (*(code *)*ppuStack_1a8)(&ppuStack_1a8);
      ppppppuVar13 = (undefined ******)&ppppuStack_160;
      (*(code *)*ppppuStack_160)(ppppppuVar13);
      if (((ulong)ppuVar7 & 1) != 0) {
        if ((char)bStack_1c9 < '\0') {
          __ZdlPv(pppppuStack_1e0);
          ppppppuVar13 = (undefined ******)pppppuStack_1e0;
        }
        if (cStack_1b1 < '\0') {
          ppppppuVar13 = (undefined ******)pppppuStack_1c8;
          __ZdlPv(pppppuStack_1c8);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
          ___stack_chk_fail();
          if (cStack_1b1 < '\0') {
            __ZdlPv(pppppuStack_1c8);
          }
          if ((long)puStack_158 < 0) {
            __ZdlPv(pcStack_168);
          }
          __ZdlPv(puVar8);
          __Unwind_Resume(ppppppuVar13);
          iVar4 = (int)ppppppuVar13;
          __ZNKSt3__14__fs10filesystem4path9__compareENS_17basic_string_viewIcNS_11char_traitsIcEEEE
                    ();
          return (undefined ******)(ulong)(iVar4 == 0);
        }
        return ppppppuVar13;
      }
      func_0x00010952d0c4(&UNK_10f5ac523,&UNK_10f5ac531,&UNK_10f5ac54f);
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109d14908);
    (*pcVar3)();
  }
  return ppppppuVar13;
}



/* Entry: 109d145f0; end: 109d14a3b;  */

undefined ****** FUN_109d145f0(undefined8 *param_1,ulong param_2)

{
  undefined **ppuVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined ******ppppppuVar6;
  undefined8 *puVar7;
  code **ppcVar8;
  undefined ******ppppppuVar9;
  undefined *****pppppuVar10;
  undefined *****pppppuVar11;
  undefined *****pppppuStack_110;
  ulong uStack_108;
  byte bStack_f9;
  undefined *****pppppuStack_f8;
  undefined **ppuStack_f0;
  undefined7 uStack_e8;
  char cStack_e1;
  undefined *****pppppuStack_e0;
  undefined **ppuStack_d8;
  undefined1 *puStack_d0;
  undefined *****pppppuStack_c8;
  code *pcStack_98;
  undefined ****ppppuStack_90;
  undefined1 *puStack_88;
  undefined *****pppppuStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  func_0x0001092b2830(&pcStack_98,param_2,0);
  __ZNKSt3__14__fs10filesystem4path16lexically_normalEv(&pppppuStack_f8,&pcStack_98);
  if (cStack_e1 < '\0') {
    func_0x000107c3192c(&pppppuStack_e0,pppppuStack_f8,ppuStack_f0);
    if (cStack_e1 < '\0') {
      __ZdlPv(pppppuStack_f8);
    }
  }
  else {
    ppuStack_d8 = ppuStack_f0;
    pppppuStack_e0 = pppppuStack_f8;
    puStack_d0 = (undefined1 *)CONCAT17(cStack_e1,uStack_e8);
  }
  uVar5 = param_2;
  FUN_109d143fc(param_2);
  ppuVar1 = ppuStack_d8;
  if (-1 < (long)puStack_d0) {
    ppuVar1 = (undefined **)((ulong)puStack_d0 >> 0x38);
  }
  func_0x000104c4f768(&pppppuStack_f8,(long)ppuVar1 + 1,&pppppuStack_110);
  ppppppuVar9 = (undefined ******)pppppuStack_f8;
  if (-1 < cStack_e1) {
    ppppppuVar9 = &pppppuStack_f8;
  }
  if (ppuVar1 != (undefined **)0x0) {
    ppppppuVar6 = (undefined ******)pppppuStack_e0;
    if (-1 < (long)puStack_d0) {
      ppppppuVar6 = &pppppuStack_e0;
    }
    _memmove(ppppppuVar9,ppppppuVar6,ppuVar1);
  }
  *(undefined2 *)((long)ppppppuVar9 + (long)ppuVar1) = 0x5f;
  __ZNSt3__19to_stringEy(&pppppuStack_110,uVar5);
  ppppppuVar9 = (undefined ******)pppppuStack_110;
  if (-1 < (char)bStack_f9) {
    uStack_108 = (ulong)bStack_f9;
    ppppppuVar9 = &pppppuStack_110;
  }
  ppppppuVar6 = &pppppuStack_f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar6,ppppppuVar9,uStack_108);
  pppppuVar11 = ppppppuVar6[1];
  pppppuVar10 = *ppppppuVar6;
  puVar4[2] = ppppppuVar6[2];
  puVar4[1] = pppppuVar11;
  *puVar4 = pppppuVar10;
  ppppppuVar6[1] = (undefined *****)0x0;
  ppppppuVar6[2] = (undefined *****)0x0;
  *ppppppuVar6 = (undefined *****)0x0;
  if ((char)bStack_f9 < '\0') {
    __ZdlPv(pppppuStack_110);
  }
  if (cStack_e1 < '\0') {
    __ZdlPv(pppppuStack_f8);
  }
  if ((long)puStack_d0 < 0) {
    __ZdlPv(pppppuStack_e0);
  }
  if ((long)puStack_88 < 0) {
    __ZdlPv(pcStack_98);
  }
  puVar7 = puVar4;
  FUN_109d13a28();
  puVar4[3] = puVar7;
  __ZNSt3__15mutex4lockEv();
  *param_1 = puVar4;
  func_0x0001092b2830(&pppppuStack_f8,puVar4,0);
  func_0x0001092b2830(&pppppuStack_110,param_2,0);
  func_0x0001092ac3b8(&pcStack_98,&pppppuStack_f8);
  func_0x0001092ac3b8(&pppppuStack_e0,&pppppuStack_110);
  ppcVar8 = &pcStack_98;
  FUN_109d14a3c(ppcVar8,&pppppuStack_e0);
  if ((long)puStack_d0 < 0) {
    __ZdlPv(pppppuStack_e0);
  }
  if ((long)puStack_88 < 0) {
    __ZdlPv(pcStack_98);
  }
  if (((ulong)ppcVar8 & 1) == 0) {
    func_0x00010952d0c4(&UNK_10f5ac523,&UNK_10f5ac531,&UNK_10f5ac4e3);
  }
  else {
    pcStack_98 = FUN_109d153d8;
    ppppuStack_90 = (undefined ****)&PTR_FUN_110b3e870;
    pppppuStack_c8 = (undefined *****)&pppppuStack_f8;
    pppppuStack_e0 = (undefined *****)FUN_109d156a0;
    ppuStack_d8 = &PTR_FUN_110b3e888;
    puStack_d0 = (undefined1 *)&pppppuStack_110;
    puStack_88 = (undefined1 *)&pppppuStack_110;
    pppppuStack_80 = pppppuStack_c8;
    FUN_109d14a74(param_2,&pcStack_98,&pppppuStack_e0);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
    ppppppuVar9 = (undefined ******)&ppppuStack_90;
    (*(code *)*ppppuStack_90)(ppppppuVar9);
    if ((param_2 & 1) != 0) {
      if ((char)bStack_f9 < '\0') {
        __ZdlPv(pppppuStack_110);
        ppppppuVar9 = (undefined ******)pppppuStack_110;
      }
      if (cStack_e1 < '\0') {
        ppppppuVar9 = (undefined ******)pppppuStack_f8;
        __ZdlPv(pppppuStack_f8);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
        ___stack_chk_fail();
        if (cStack_e1 < '\0') {
          __ZdlPv(pppppuStack_f8);
        }
        if ((long)puStack_88 < 0) {
          __ZdlPv(pcStack_98);
        }
        __ZdlPv(puVar4);
        __Unwind_Resume(ppppppuVar9);
        iVar3 = (int)ppppppuVar9;
        __ZNKSt3__14__fs10filesystem4path9__compareENS_17basic_string_viewIcNS_11char_traitsIcEEEE()
        ;
        return (undefined ******)(ulong)(iVar3 == 0);
      }
      return ppppppuVar9;
    }
    func_0x00010952d0c4(&UNK_10f5ac523,&UNK_10f5ac531,&UNK_10f5ac54f);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109d14908);
  (*pcVar2)();
}



/* Entry: 109d14a3c; end: 109d14a73;  */

bool FUN_109d14a3c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  __ZNKSt3__14__fs10filesystem4path9__compareENS_17basic_string_viewIcNS_11char_traitsIcEEEE
            (param_1,puVar2,uVar1);
  return (int)param_1 == 0;
}



/* Entry: 109d14a74; end: 109d14e6b;  */

/* WARNING: Removing unreachable block (ram,0x000109d14cfc) */
/* WARNING: Removing unreachable block (ram,0x000109d14d00) */
/* WARNING: Removing unreachable block (ram,0x000109d14d08) */
/* WARNING: Removing unreachable block (ram,0x000109d14d10) */
/* WARNING: Removing unreachable block (ram,0x000109d14d14) */

ulong FUN_109d14a74(ulong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined7 uStack_48;
  char cStack_41;
  
  func_0x0001092b2830(&lStack_58,param_1,0);
  __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE(&lStack_70,&lStack_58,0);
  if ((char)lStack_70 != '\x02') {
    (*(code *)*param_2)(param_1,param_2);
    goto LAB_109d14db0;
  }
  if (*(char *)(param_3[1] + 8) == '\x01') {
    if (cStack_41 < '\0') {
      func_0x000107c3192c(&lStack_70,lStack_58,lStack_50);
    }
    else {
      lStack_68 = lStack_50;
      lStack_70 = lStack_58;
      lStack_60 = CONCAT17(cStack_41,uStack_48);
    }
    plVar3 = &lStack_70;
    (*(code *)*param_3)(plVar3,param_3);
    if (lStack_60 < 0) {
      __ZdlPv(lStack_70);
    }
    if (((ulong)plVar3 & 1) == 0) {
      param_1 = 0;
      goto LAB_109d14db0;
    }
  }
  __ZNSt3__14__fs10filesystem18directory_iteratorC1ERKNS1_4pathEPNS_10error_codeENS1_17directory_optionsE
            (&lStack_80,&lStack_58,0,0);
  plVar3 = plStack_78;
  if (plStack_78 == (long *)0x0) {
    plStack_88 = (long *)0x0;
LAB_109d14bbc:
    lStack_90 = lStack_80;
  }
  else {
    plVar4 = plStack_78 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lStack_90 = lStack_80;
    plStack_88 = plStack_78;
    if (plStack_78 == (long *)0x0) goto LAB_109d14bbc;
    plVar4 = plStack_78 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  while (param_1 = (ulong)(lStack_90 == 0), lStack_90 != 0) {
    plVar3 = &lStack_90;
    __ZNKSt3__14__fs10filesystem18directory_iterator13__dereferenceEv();
    __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE(&lStack_70);
    if ((char)lStack_70 == '\x02') {
      if (*(char *)(param_3[1] + 8) == '\x01') {
        if (*(char *)((long)plVar3 + 0x17) < '\0') {
          func_0x000107c3192c(&lStack_70,*plVar3,plVar3[1]);
        }
        else {
          lStack_68 = plVar3[1];
          lStack_70 = *plVar3;
          lStack_60 = plVar3[2];
        }
        plVar4 = &lStack_70;
        (*(code *)*param_3)(plVar4,param_3);
        if (lStack_60 < 0) {
          __ZdlPv(lStack_70);
        }
        if (((ulong)plVar4 & 1) == 0) break;
      }
      if (*(char *)((long)plVar3 + 0x17) < '\0') {
        func_0x000107c3192c(&lStack_70,*plVar3,plVar3[1]);
      }
      else {
        lStack_68 = plVar3[1];
        lStack_70 = *plVar3;
        lStack_60 = plVar3[2];
      }
      plVar3 = &lStack_70;
      FUN_109d14a74(plVar3,param_2,param_3);
    }
    else {
      if (*(char *)((long)plVar3 + 0x17) < '\0') {
        func_0x000107c3192c(&lStack_70,*plVar3,plVar3[1]);
      }
      else {
        lStack_68 = plVar3[1];
        lStack_70 = *plVar3;
        lStack_60 = plVar3[2];
      }
      plVar3 = &lStack_70;
      (*(code *)*param_2)(plVar3,param_2);
    }
    if (lStack_60 < 0) {
      __ZdlPv(lStack_70);
    }
    if (((ulong)plVar3 & 1) == 0) break;
    __ZNSt3__14__fs10filesystem18directory_iterator11__incrementEPNS_10error_codeE(&lStack_90,0);
  }
  plVar3 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar4 = plStack_88 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar3 = plStack_78 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
LAB_109d14db0:
  if (cStack_41 < '\0') {
    __ZdlPv(lStack_58);
  }
  return param_1;
}



/* Entry: 109d14e6c; end: 109d14f43;  */

void FUN_109d14e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char acStack_60 [24];
  undefined8 auStack_48 [2];
  char cStack_31;
  
  func_0x0001092b2830(auStack_48,param_2,0);
  __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE(acStack_60,auStack_48,0);
  if (acStack_60[0] != '\x02') {
    func_0x000109260128(param_1,auStack_48,param_3);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    return;
  }
  func_0x0001094ce860(acStack_60,param_2,&UNK_10f5ac565);
  FUN_109cd8934(acStack_60);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d14f0c);
  (*pcVar1)();
}



/* Entry: 109d14f44; end: 109d14fc3;  */

void FUN_109d14f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  func_0x0001092b2830(auStack_48,param_2,0);
  func_0x000107c2800c(param_1,param_2,param_3);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 109d14fc4; end: 109d15063;  */

bool FUN_109d14fc4(undefined8 param_1)

{
  bool bVar1;
  undefined8 auStack_40 [2];
  char cStack_29;
  char acStack_28 [8];
  
  func_0x0001092b2830(auStack_40,param_1,0);
  __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE(acStack_28,auStack_40,0);
  bVar1 = false;
  if ((acStack_28[0] != '\0') && (acStack_28[0] != -1)) {
    __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE(acStack_28,auStack_40,0);
    bVar1 = acStack_28[0] == '\x02';
  }
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return bVar1;
}



/* Entry: 109d15064; end: 109d1518f;  */

undefined8 FUN_109d15064(long *param_1,int param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  plVar1 = param_1;
  FUN_109d14fc4();
  if (((ulong)plVar1 & 1) == 0) {
    if (param_2 != 0) {
      plVar1 = (long *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        plVar1 = param_1;
      }
      FUN_10ae030a0(0,plVar1);
      ppuVar2 = &PTR_PTR_1132fec60;
      FUN_10ae079a0();
      FUN_10ae030d8();
      FUN_10ae07cd4(ppuVar2,&PTR_PTR_1132fec60);
    }
  }
  else {
    func_0x0001092b2830(auStack_48,param_1,0);
    __ZNSt3__14__fs10filesystem12__remove_allERKNS1_4pathEPNS_10error_codeE(auStack_48,0);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
  return 1;
}



/* Entry: 109d15190; end: 109d151f7;  */

undefined * FUN_109d15190(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  FUN_10ae030a0(0,*param_1);
  FUN_10ae030a0();
  ppuVar6 = &PTR_PTR_1132fec98;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 109d151f8; end: 109d152c7;  */

undefined8 FUN_109d151f8(ulong param_1)

{
  ulong uVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  uVar1 = param_1;
  FUN_109d14fc4();
  if ((uVar1 & 1) == 0) {
    func_0x0001092b2830(auStack_38,param_1,0);
    __ZNSt3__14__fs10filesystem18__create_directoryERKNS1_4pathEPNS_10error_codeE(auStack_38,0);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return 1;
}



/* Entry: 109d152c8; end: 109d1532f;  */

undefined * FUN_109d152c8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  FUN_10ae030a0(0,param_1);
  FUN_10ae030a0();
  ppuVar6 = &PTR_PTR_1132fecd0;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 109d15330; end: 109d15387;  */

long FUN_109d15330(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 109d15388; end: 109d153bb;  */

undefined8 FUN_109d15388(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x000105277f8c(param_2);
  func_0x000107c2ac70(*(undefined8 *)(lVar1 + 0x10),param_2);
  return 1;
}



/* Entry: 109d153bc; end: 109d153d7;  */

void FUN_109d153bc(void)

{
  return;
}



/* Entry: 109d153d8; end: 109d15683;  */

undefined *** FUN_109d153d8(undefined8 param_1,long param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  char cStack_4f9;
  undefined ***pppuStack_4f8;
  undefined8 uStack_4f0;
  char cStack_4e1;
  undefined ***apppuStack_4e0 [2];
  char cStack_4c9;
  undefined ***pppuStack_4c8;
  undefined8 uStack_4c0;
  char cStack_4b1;
  undefined ***pppuStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  char cStack_499;
  undefined **appuStack_310 [19];
  undefined **appuStack_278 [2];
  undefined1 auStack_268 [7];
  char cStack_261;
  undefined **appuStack_d0 [19];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001092b2830(&pppuStack_4c8,param_1,0);
  __ZNKSt3__14__fs10filesystem4path18lexically_relativeERKS2_
            (apppuStack_4e0,&pppuStack_4c8,*(undefined8 *)(param_2 + 0x10));
  func_0x0001092b4910(appuStack_278,*(undefined8 *)(param_2 + 0x18),apppuStack_4e0);
  __ZNKSt3__14__fs10filesystem4path16lexically_normalEv(&pppuStack_4f8,appuStack_278);
  if (cStack_261 < '\0') {
    __ZdlPv(appuStack_278[0]);
  }
  if (cStack_4b1 < '\0') {
    func_0x000107c3192c(&pppuStack_4b0,pppuStack_4c8,uStack_4c0);
  }
  else {
    uStack_4a8 = uStack_4c0;
    pppuStack_4b0 = pppuStack_4c8;
    cStack_499 = cStack_4b1;
  }
  FUN_109d14e6c(appuStack_278,&pppuStack_4b0,0xc);
  if (cStack_499 < '\0') {
    __ZdlPv(pppuStack_4b0);
  }
  if (cStack_4e1 < '\0') {
    func_0x000107c3192c(&pppuStack_510,pppuStack_4f8,uStack_4f0);
  }
  else {
    uStack_508 = uStack_4f0;
    pppuStack_510 = pppuStack_4f8;
    cStack_4f9 = cStack_4e1;
  }
  FUN_109d14f44(&pppuStack_4b0,&pppuStack_510,0x14);
  if (cStack_4f9 < '\0') {
    __ZdlPv(pppuStack_510);
  }
  FUN_109d15960(appuStack_278,&pppuStack_4b0);
  pppuStack_4b0 = (undefined ***)&PTR_DAT_11087cb40;
  appuStack_310[0] = &PTR_DAT_11087cb68;
  func_0x000107c28018(&uStack_4a8);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&pppuStack_4b0,&PTR_PTR_11087cb80);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_310);
  appuStack_278[0] = &PTR_DAT_11087cf48;
  appuStack_d0[0] = &PTR_DAT_11087cf70;
  func_0x000107c28018(auStack_268);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_278,&PTR_PTR_11087cf88);
  pppuVar1 = appuStack_d0;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(pppuVar1);
  if (cStack_4e1 < '\0') {
    pppuVar1 = pppuStack_4f8;
    __ZdlPv(pppuStack_4f8);
  }
  if (cStack_4c9 < '\0') {
    pppuVar1 = apppuStack_4e0[0];
    __ZdlPv(apppuStack_4e0[0]);
  }
  if (cStack_4b1 < '\0') {
    pppuVar1 = pppuStack_4c8;
    __ZdlPv(pppuStack_4c8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined ***)0x1;
  }
  ___stack_chk_fail();
  func_0x000107c2803c(appuStack_278);
  if (cStack_4e1 < '\0') {
    __ZdlPv(pppuStack_4f8);
  }
  if (cStack_4c9 < '\0') {
    __ZdlPv(apppuStack_4e0[0]);
  }
  if (cStack_4b1 < '\0') {
    __ZdlPv(pppuStack_4c8);
  }
  __Unwind_Resume(pppuVar1);
  return pppuVar1;
}



/* Entry: 109d15684; end: 109d1569f;  */

void FUN_109d15684(void)

{
  return;
}



/* Entry: 109d156a0; end: 109d15943;  */

/* WARNING: Removing unreachable block (ram,0x000109d15890) */

undefined1 * FUN_109d156a0(undefined8 param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 ****ppppuVar5;
  uint uVar6;
  undefined8 ***pppuStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 ***pppuStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 auStack_48 [24];
  
  uVar6 = (uint)&pppuStack_90;
  ppppuVar5 = &pppuStack_90;
  func_0x0001092b2830(auStack_48,param_1,0);
  __ZNKSt3__14__fs10filesystem4path18lexically_relativeERKS2_(auStack_60);
  pppuStack_78 = (undefined8 ****)0x0;
  lStack_70 = 0;
  lStack_68 = 0;
  func_0x0001092b2894(&pppuStack_78,&DAT_10f62a9de,&UNK_10f62a9df);
  puVar2 = auStack_60;
  FUN_109d14a3c(puVar2,&pppuStack_78);
  if ((int)puVar2 == 0) {
    uVar6 = 0;
  }
  else {
    plVar4 = *(long **)(param_2 + 0x18);
    if (*(char *)((long)plVar4 + 0x17) < '\0') {
      func_0x000107c3192c(&pppuStack_90,*plVar4,plVar4[1]);
    }
    else {
      lStack_88 = plVar4[1];
      pppuStack_90 = (undefined8 ***)*plVar4;
      lStack_80 = plVar4[2];
    }
    FUN_109d151f8();
    uVar6 = uVar6 ^ 1;
    if (lStack_80 < 0) {
      __ZdlPv(pppuStack_90);
    }
  }
  if (lStack_68 < 0) {
    __ZdlPv(pppuStack_78);
  }
  if (uVar6 == 0) {
    func_0x0001092b4910(&pppuStack_90,*(undefined8 *)(param_2 + 0x18),auStack_60);
    __ZNKSt3__14__fs10filesystem4path16lexically_normalEv(&pppuStack_78,&pppuStack_90);
    if (lStack_80 < 0) {
      __ZdlPv(pppuStack_90);
    }
    if (lStack_68 < 0) {
      func_0x000107c3192c(&pppuStack_90,pppuStack_78,lStack_70);
    }
    else {
      lStack_88 = lStack_70;
      pppuStack_90 = pppuStack_78;
      lStack_80 = lStack_68;
    }
    FUN_109d151f8();
    if (lStack_80 < 0) {
      __ZdlPv(pppuStack_90);
    }
    if (((ulong)ppppuVar5 & 1) == 0) {
      ppppuVar1 = (undefined8 ****)pppuStack_78;
      if (-1 < lStack_68) {
        ppppuVar1 = &pppuStack_78;
      }
      FUN_10ae030a0(0,ppppuVar1);
      ppuVar3 = &PTR_PTR_1132fec20;
      FUN_10ae079a0();
      FUN_10ae030d8();
      FUN_10ae07cd4(ppuVar3,&PTR_PTR_1132fec20);
    }
    if (lStack_68 < 0) {
      __ZdlPv(pppuStack_78);
    }
  }
  else {
    plVar4 = *(long **)(param_2 + 0x18);
    if (*(char *)((long)plVar4 + 0x17) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    FUN_10ae030a0(0,plVar4);
    ppuVar3 = &PTR_PTR_1132fec20;
    FUN_10ae079a0();
    FUN_10ae030d8();
    FUN_10ae07cd4(ppuVar3,&PTR_PTR_1132fec20);
    ppppuVar5 = (undefined8 ****)0x0;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  return (undefined1 *)ppppuVar5;
}



/* Entry: 109d15944; end: 109d1595f;  */

void FUN_109d15944(void)

{
  return;
}



/* Entry: 109d15960; end: 109d15b07;  */

/* WARNING: Possible PIC construction at 0x000109d15a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109d15a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109d15c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109d15bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d15c40) */
/* WARNING: Removing unreachable block (ram,0x000109d15aa0) */
/* WARNING: Removing unreachable block (ram,0x000109d15aa8) */
/* WARNING: Removing unreachable block (ram,0x000109d15ac0) */
/* WARNING: Removing unreachable block (ram,0x000109d15a34) */
/* WARNING: Removing unreachable block (ram,0x000109d15a3c) */
/* WARNING: Removing unreachable block (ram,0x000109d15a54) */
/* WARNING: Removing unreachable block (ram,0x000109d15bc4) */
/* WARNING: Removing unreachable block (ram,0x000109d15bcc) */
/* WARNING: Removing unreachable block (ram,0x000109d15be4) */
/* WARNING: Removing unreachable block (ram,0x000109d15c18) */

uint * FUN_109d15960(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  long *extraout_x8;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 *****pppppuVar16;
  undefined8 uVar17;
  undefined1 auStack_25e0 [12];
  uint uStack_25d4;
  uint auStack_25d0 [34];
  long lStack_2548;
  uint *puStack_2540;
  uint *puStack_2538;
  uint *puStack_2530;
  undefined8 ****ppppuStack_2520;
  undefined8 uStack_2518;
  undefined1 auStack_2510 [128];
  uint *puStack_2490;
  long lStack_2488;
  uint *puStack_2480;
  uint *puStack_2478;
  uint *puStack_2470;
  uint *puStack_2468;
  undefined8 ****ppppuStack_2460;
  code *pcStack_2458;
  uint auStack_2450 [624];
  undefined8 uStack_1a90;
  byte abStack_1a88 [8];
  undefined8 ****ppppuStack_1a30;
  code *pcStack_1a28;
  undefined1 auStack_1a20 [8];
  uint auStack_1a18 [624];
  undefined8 uStack_1058;
  byte abStack_1050 [8];
  uint auStack_1048 [1024];
  long lStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = 0x81113ed5;
  auStack_1a18[0] = 0x81113ed5;
  lVar13 = 1;
  do {
    uVar10 = (int)lVar13 + (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965;
    auStack_1a18[lVar13] = uVar10;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x270);
  uStack_1058 = 0;
  abStack_1050[0] = 0;
  abStack_1050[1] = 0xff;
  puVar7 = auStack_1048;
  _bzero(auStack_1048,0x1000);
  puVar5 = auStack_1048;
  puVar8 = (uint *)0x1000;
  puVar15 = param_1;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl();
  pppppuVar16 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((*(byte *)((long)puVar15 + *(long *)(*(long *)puVar15 + -0x18) + 0x20) & 5) == 0) {
    pbVar9 = abStack_1050;
    uVar17 = 0x109d15a34;
    puVar3 = (uint *)auStack_1a20;
    puVar6 = auStack_1a18;
    puVar5 = param_2;
    puVar8 = param_1;
    puVar15 = auStack_1a18;
  }
  else if (*(uint **)(param_1 + 2) == (uint *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return puVar15;
    }
    ___stack_chk_fail();
    pcStack_1a28 = FUN_109d15b08;
    pppppuVar16 = &ppppuStack_1a30;
    puVar3 = auStack_2450;
    puVar6 = auStack_2450;
    uVar10 = 0x81113ed5;
    auStack_2450[0] = 0x81113ed5;
    lVar13 = 1;
    do {
      uVar10 = (int)lVar13 + (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965;
      auStack_2450[lVar13] = uVar10;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x270);
    uStack_1a90 = 0;
    abStack_1a88[0] = 0;
    abStack_1a88[1] = 0xff;
    puVar4 = puVar15;
    ppppuStack_1a30 = (undefined8 ****)&stack0xfffffffffffffff0;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(puVar15,puVar5,0x1000);
    if ((*(byte *)((long)puVar4 + *(long *)(*(long *)puVar4 + -0x18) + 0x20) & 5) == 0) {
      pbVar9 = abStack_1a88;
      uVar17 = 0x109d15bc4;
    }
    else {
      puVar15 = *(uint **)(puVar15 + 2);
      if (puVar15 == (uint *)0x0) {
        return puVar4;
      }
      if (puVar15 == puVar8) {
        pbVar9 = abStack_1a88;
        uVar17 = 0x109d15c40;
        puVar3 = auStack_2450;
        puVar6 = auStack_2450;
      }
      else {
        puVar4 = (uint *)&UNK_10f5ac5af;
        func_0x00010952d0c4(&UNK_10f5ac5af,&UNK_10f57c13b,&UNK_10f5ac5c0);
        pcStack_2458 = FUN_109d15c90;
        lStack_2488 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_2480 = puVar7;
        puStack_2478 = puVar15;
        puStack_2470 = puVar8;
        puStack_2468 = puVar5;
        ppppuStack_2460 = pppppuVar16;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5tellgEv(auStack_2510);
        puVar7 = puStack_2490;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE(puVar4,0,2);
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5tellgEv(auStack_2510,puVar4);
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE
                  (puVar4,puVar7,0);
        func_0x0001092a38dc(extraout_x8,(long)puStack_2490 - (long)puVar7);
        FUN_109d15b08(puVar4,*extraout_x8,extraout_x8[1] - *extraout_x8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2488) {
          return puVar4;
        }
        ___stack_chk_fail();
        if (*extraout_x8 != 0) {
          extraout_x8[1] = *extraout_x8;
          __ZdlPv();
        }
        puVar5 = puVar4;
        __Unwind_Resume();
        puVar3 = (uint *)auStack_25e0;
        puStack_2540 = puStack_2490;
        puStack_2538 = puVar7;
        uStack_2518 = 0x109d15d68;
        pppppuVar16 = &ppppuStack_2520;
        lStack_2548 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uStack_25d4 = 0;
        puVar6 = &uStack_25d4;
        pbVar9 = (byte *)0x4;
        puStack_2530 = puVar4;
        ppppuStack_2520 = &ppppuStack_2460;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl();
        uVar10 = uStack_25d4;
        puVar8 = (uint *)(ulong)uStack_25d4;
        puVar15 = (uint *)0x7366626f;
        puVar7 = puStack_2490;
        if (uStack_25d4 != 0x7366626f) {
          puVar7 = auStack_25d0;
          __ZNSt3__18ios_base5clearEj
                    ((undefined *)((long)puVar5 + *(long *)(*(long *)puVar5 + -0x18)),0);
          pbVar9 = (byte *)0xffffffff;
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(puVar5,1);
          auStack_25d0[0x20] = 0;
          auStack_25d0[0x21] = 0;
          auStack_25d0[0x1a] = 0;
          auStack_25d0[0x1b] = 0;
          auStack_25d0[0x18] = 0;
          auStack_25d0[0x19] = 0;
          auStack_25d0[0x1e] = 0;
          auStack_25d0[0x1f] = 0;
          auStack_25d0[0x1c] = 0;
          auStack_25d0[0x1d] = 0;
          auStack_25d0[0x12] = 0;
          auStack_25d0[0x13] = 0;
          auStack_25d0[0x10] = 0;
          auStack_25d0[0x11] = 0;
          auStack_25d0[0x16] = 0;
          auStack_25d0[0x17] = 0;
          auStack_25d0[0x14] = 0;
          auStack_25d0[0x15] = 0;
          auStack_25d0[10] = 0;
          auStack_25d0[0xb] = 0;
          auStack_25d0[8] = 0;
          auStack_25d0[9] = 0;
          auStack_25d0[0xe] = 0;
          auStack_25d0[0xf] = 0;
          auStack_25d0[0xc] = 0;
          auStack_25d0[0xd] = 0;
          auStack_25d0[2] = 0;
          auStack_25d0[3] = 0;
          auStack_25d0[0] = 0;
          auStack_25d0[1] = 0;
          auStack_25d0[6] = 0;
          auStack_25d0[7] = 0;
          auStack_25d0[4] = 0;
          auStack_25d0[5] = 0;
          puVar6 = auStack_25d0;
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE(puVar5);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2548) {
          return (uint *)(ulong)(uVar10 == 0x7366626f);
        }
        uVar17 = 0x109d15e38;
        ___stack_chk_fail((uint *)(ulong)(uVar10 == 0x7366626f));
      }
    }
  }
  else {
    pbVar9 = abStack_1050;
    uVar17 = 0x109d15aa0;
    puVar3 = (uint *)auStack_1a20;
    puVar6 = auStack_1a18;
    puVar5 = param_2;
    puVar8 = *(uint **)(param_1 + 2);
    puVar15 = auStack_1a18;
  }
  uVar10 = (uint)pbVar9[1];
  iVar11 = (uint)pbVar9[1] - (uint)*pbVar9;
  if (iVar11 != 0) {
    *(uint **)((long)puVar3 + -0x30) = puVar7;
    *(uint **)((long)puVar3 + -0x28) = puVar15;
    *(uint **)((long)puVar3 + -0x20) = puVar8;
    *(uint **)((long)puVar3 + -0x18) = puVar5;
    *(undefined8 ******)((long)puVar3 + -0x10) = pppppuVar16;
    *(undefined8 *)((long)puVar3 + -8) = uVar17;
    uVar2 = iVar11 + 1;
    if (uVar2 == 0) {
      func_0x000107c284a0(puVar6);
      uVar10 = (uint)puVar6;
    }
    else {
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = 0;
        uVar10 = 0x80000000;
        do {
          iVar11 = iVar11 + 1;
          uVar1 = uVar10 >> 1;
          uVar10 = uVar10 >> 1;
        } while ((uVar2 & uVar1) == 0);
      }
      lVar13 = 0x1f;
      if (uVar2 << (ulong)(iVar11 + 1U & 0x1f) != 0) {
        lVar13 = 0x20;
      }
      uVar12 = lVar13 - iVar11;
      uVar14 = uVar12 >> 5;
      if ((uVar12 & 0x1f) != 0) {
        uVar14 = uVar14 + 1;
      }
      iVar11 = 0;
      if (uVar14 != 0) {
        iVar11 = (int)(uVar12 / uVar14);
      }
      uVar1 = 0;
      if (uVar14 <= uVar12) {
        uVar1 = 0xffffffff >> (ulong)(-iVar11 & 0x1f);
      }
      do {
        puVar7 = puVar6;
        func_0x000107c284a0();
        uVar10 = (uint)puVar7 & uVar1;
      } while (uVar2 <= uVar10);
      uVar10 = *pbVar9 + uVar10;
    }
  }
  return (uint *)(ulong)(uVar10 & 0xff);
}



/* Entry: 109d15b08; end: 109d15c8f;  */

/* WARNING: Possible PIC construction at 0x000109d15c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109d15bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d15c40) */
/* WARNING: Removing unreachable block (ram,0x000109d15bc4) */
/* WARNING: Removing unreachable block (ram,0x000109d15bcc) */
/* WARNING: Removing unreachable block (ram,0x000109d15be4) */
/* WARNING: Removing unreachable block (ram,0x000109d15c18) */

long * FUN_109d15b08(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  long *extraout_x8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint *unaff_x22;
  undefined8 *****pppppuVar12;
  undefined8 uVar13;
  undefined1 auStack_bc0 [12];
  uint uStack_bb4;
  uint auStack_bb0 [34];
  long lStack_b28;
  uint *puStack_b20;
  uint *puStack_b18;
  long *plStack_b10;
  undefined8 ****ppppuStack_b00;
  undefined8 uStack_af8;
  undefined1 auStack_af0 [128];
  uint *puStack_a70;
  long lStack_a68;
  undefined8 ****ppppuStack_a40;
  code *pcStack_a38;
  uint auStack_a30 [624];
  undefined8 uStack_70;
  byte abStack_68 [8];
  
  pppppuVar12 = (undefined8 *****)&stack0xfffffffffffffff0;
  puVar3 = auStack_a30;
  puVar5 = auStack_a30;
  uVar7 = 0x81113ed5;
  auStack_a30[0] = 0x81113ed5;
  lVar10 = 1;
  do {
    uVar7 = (int)lVar10 + (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965;
    auStack_a30[lVar10] = uVar7;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x270);
  uStack_70 = 0;
  abStack_68[0] = 0;
  abStack_68[1] = 0xff;
  plVar4 = param_1;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(param_1,param_2,0x1000);
  if ((*(byte *)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 0x20) & 5) == 0) {
    pbVar6 = abStack_68;
    uVar13 = 0x109d15bc4;
  }
  else {
    param_1 = (long *)param_1[1];
    if (param_1 == (long *)0x0) {
      return plVar4;
    }
    if (param_1 == param_3) {
      pbVar6 = abStack_68;
      uVar13 = 0x109d15c40;
      puVar3 = auStack_a30;
      puVar5 = auStack_a30;
    }
    else {
      plVar4 = (long *)&UNK_10f5ac5af;
      func_0x00010952d0c4(&UNK_10f5ac5af,&UNK_10f57c13b,&UNK_10f5ac5c0);
      pcStack_a38 = FUN_109d15c90;
      lStack_a68 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppppuStack_a40 = pppppuVar12;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5tellgEv(auStack_af0);
      puVar5 = puStack_a70;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE(plVar4,0,2);
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5tellgEv(auStack_af0,plVar4);
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE(plVar4,puVar5,0)
      ;
      func_0x0001092a38dc(extraout_x8,(long)puStack_a70 - (long)puVar5);
      FUN_109d15b08(plVar4,*extraout_x8,extraout_x8[1] - *extraout_x8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a68) {
        return plVar4;
      }
      ___stack_chk_fail();
      if (*extraout_x8 != 0) {
        extraout_x8[1] = *extraout_x8;
        __ZdlPv();
      }
      param_2 = plVar4;
      __Unwind_Resume();
      puVar3 = (uint *)auStack_bc0;
      puStack_b20 = puStack_a70;
      puStack_b18 = puVar5;
      uStack_af8 = 0x109d15d68;
      pppppuVar12 = &ppppuStack_b00;
      lStack_b28 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_bb4 = 0;
      puVar5 = &uStack_bb4;
      pbVar6 = (byte *)0x4;
      plStack_b10 = plVar4;
      ppppuStack_b00 = &ppppuStack_a40;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl();
      uVar7 = uStack_bb4;
      param_3 = (long *)(ulong)uStack_bb4;
      param_1 = (long *)0x7366626f;
      unaff_x22 = puStack_a70;
      if (uStack_bb4 != 0x7366626f) {
        unaff_x22 = auStack_bb0;
        __ZNSt3__18ios_base5clearEj((undefined *)((long)param_2 + *(long *)(*param_2 + -0x18)),0);
        pbVar6 = (byte *)0xffffffff;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(param_2,1);
        auStack_bb0[0x20] = 0;
        auStack_bb0[0x21] = 0;
        auStack_bb0[0x1a] = 0;
        auStack_bb0[0x1b] = 0;
        auStack_bb0[0x18] = 0;
        auStack_bb0[0x19] = 0;
        auStack_bb0[0x1e] = 0;
        auStack_bb0[0x1f] = 0;
        auStack_bb0[0x1c] = 0;
        auStack_bb0[0x1d] = 0;
        auStack_bb0[0x12] = 0;
        auStack_bb0[0x13] = 0;
        auStack_bb0[0x10] = 0;
        auStack_bb0[0x11] = 0;
        auStack_bb0[0x16] = 0;
        auStack_bb0[0x17] = 0;
        auStack_bb0[0x14] = 0;
        auStack_bb0[0x15] = 0;
        auStack_bb0[10] = 0;
        auStack_bb0[0xb] = 0;
        auStack_bb0[8] = 0;
        auStack_bb0[9] = 0;
        auStack_bb0[0xe] = 0;
        auStack_bb0[0xf] = 0;
        auStack_bb0[0xc] = 0;
        auStack_bb0[0xd] = 0;
        auStack_bb0[2] = 0;
        auStack_bb0[3] = 0;
        auStack_bb0[0] = 0;
        auStack_bb0[1] = 0;
        auStack_bb0[6] = 0;
        auStack_bb0[7] = 0;
        auStack_bb0[4] = 0;
        auStack_bb0[5] = 0;
        puVar5 = auStack_bb0;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE(param_2);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b28) {
        return (long *)(ulong)(uVar7 == 0x7366626f);
      }
      uVar13 = 0x109d15e38;
      ___stack_chk_fail((long *)(ulong)(uVar7 == 0x7366626f));
    }
  }
  uVar7 = (uint)pbVar6[1];
  iVar8 = (uint)pbVar6[1] - (uint)*pbVar6;
  if (iVar8 != 0) {
    *(uint **)((long)puVar3 + -0x30) = unaff_x22;
    *(long **)((long)puVar3 + -0x28) = param_1;
    *(long **)((long)puVar3 + -0x20) = param_3;
    *(long **)((long)puVar3 + -0x18) = param_2;
    *(undefined8 ******)((long)puVar3 + -0x10) = pppppuVar12;
    *(undefined8 *)((long)puVar3 + -8) = uVar13;
    uVar2 = iVar8 + 1;
    if (uVar2 == 0) {
      func_0x000107c284a0(puVar5);
      uVar7 = (uint)puVar5;
    }
    else {
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = 0;
        uVar7 = 0x80000000;
        do {
          iVar8 = iVar8 + 1;
          uVar1 = uVar7 >> 1;
          uVar7 = uVar7 >> 1;
        } while ((uVar2 & uVar1) == 0);
      }
      lVar10 = 0x1f;
      if (uVar2 << (ulong)(iVar8 + 1U & 0x1f) != 0) {
        lVar10 = 0x20;
      }
      uVar9 = lVar10 - iVar8;
      uVar11 = uVar9 >> 5;
      if ((uVar9 & 0x1f) != 0) {
        uVar11 = uVar11 + 1;
      }
      iVar8 = 0;
      if (uVar11 != 0) {
        iVar8 = (int)(uVar9 / uVar11);
      }
      uVar1 = 0;
      if (uVar11 <= uVar9) {
        uVar1 = 0xffffffff >> (ulong)(-iVar8 & 0x1f);
      }
      do {
        puVar3 = puVar5;
        func_0x000107c284a0();
        uVar7 = (uint)puVar3 & uVar1;
      } while (uVar2 <= uVar7);
      uVar7 = *pbVar6 + uVar7;
    }
  }
  return (long *)(ulong)(uVar7 & 0xff);
}



/* Entry: 109d15c90; end: 109d15d67;  */

long * FUN_109d15c90(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  int iStack_184;
  int aiStack_180 [34];
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_c0 [128];
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5tellgEv(auStack_c0);
  lVar3 = lStack_40;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE(param_2,0,2);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5tellgEv(auStack_c0,param_2);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE(param_2,lVar3,0);
  func_0x0001092a38dc(param_1,lStack_40 - lVar3);
  FUN_109d15b08(param_2,*param_1,param_1[1] - *param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_2;
  }
  ___stack_chk_fail();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  plVar4 = param_2;
  __Unwind_Resume();
  lStack_f0 = lStack_40;
  lStack_e8 = lVar3;
  pcStack_c8 = FUN_109d15d68;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_184 = 0;
  piVar5 = &iStack_184;
  pbVar7 = (byte *)0x4;
  plStack_e0 = param_2;
  plStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl();
  iVar8 = iStack_184;
  if (iStack_184 != 0x7366626f) {
    __ZNSt3__18ios_base5clearEj((long)plVar4 + *(long *)(*plVar4 + -0x18),0);
    pbVar7 = (byte *)0xffffffff;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(plVar4,1);
    aiStack_180[0x20] = 0;
    aiStack_180[0x21] = 0;
    aiStack_180[0x1a] = 0;
    aiStack_180[0x1b] = 0;
    aiStack_180[0x18] = 0;
    aiStack_180[0x19] = 0;
    aiStack_180[0x1e] = 0;
    aiStack_180[0x1f] = 0;
    aiStack_180[0x1c] = 0;
    aiStack_180[0x1d] = 0;
    aiStack_180[0x12] = 0;
    aiStack_180[0x13] = 0;
    aiStack_180[0x10] = 0;
    aiStack_180[0x11] = 0;
    aiStack_180[0x16] = 0;
    aiStack_180[0x17] = 0;
    aiStack_180[0x14] = 0;
    aiStack_180[0x15] = 0;
    aiStack_180[10] = 0;
    aiStack_180[0xb] = 0;
    aiStack_180[8] = 0;
    aiStack_180[9] = 0;
    aiStack_180[0xe] = 0;
    aiStack_180[0xf] = 0;
    aiStack_180[0xc] = 0;
    aiStack_180[0xd] = 0;
    aiStack_180[2] = 0;
    aiStack_180[3] = 0;
    aiStack_180[0] = 0;
    aiStack_180[1] = 0;
    aiStack_180[6] = 0;
    aiStack_180[7] = 0;
    aiStack_180[4] = 0;
    aiStack_180[5] = 0;
    piVar5 = aiStack_180;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE(plVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail((long *)(ulong)(iVar8 == 0x7366626f));
    uVar10 = (uint)pbVar7[1];
    iVar8 = (uint)pbVar7[1] - (uint)*pbVar7;
    if (iVar8 != 0) {
      uVar2 = iVar8 + 1;
      if (uVar2 == 0) {
        func_0x000107c284a0(piVar5);
        uVar10 = (uint)piVar5;
      }
      else {
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = 0;
          uVar10 = 0x80000000;
          do {
            iVar8 = iVar8 + 1;
            uVar1 = uVar10 >> 1;
            uVar10 = uVar10 >> 1;
          } while ((uVar2 & uVar1) == 0);
        }
        lVar3 = 0x1f;
        if (uVar2 << (ulong)(iVar8 + 1U & 0x1f) != 0) {
          lVar3 = 0x20;
        }
        uVar9 = lVar3 - iVar8;
        uVar11 = uVar9 >> 5;
        if ((uVar9 & 0x1f) != 0) {
          uVar11 = uVar11 + 1;
        }
        iVar8 = 0;
        if (uVar11 != 0) {
          iVar8 = (int)(uVar9 / uVar11);
        }
        uVar1 = 0;
        if (uVar11 <= uVar9) {
          uVar1 = 0xffffffff >> (ulong)(-iVar8 & 0x1f);
        }
        do {
          piVar6 = piVar5;
          func_0x000107c284a0();
          uVar10 = (uint)piVar6 & uVar1;
        } while (uVar2 <= uVar10);
        uVar10 = *pbVar7 + uVar10;
      }
    }
    return (long *)(ulong)(uVar10 & 0xff);
  }
  return (long *)(ulong)(iVar8 == 0x7366626f);
}



/* Entry: 109d15d68; end: 109d15f03;  */

uint FUN_109d15d68(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  int iStack_c4;
  int aiStack_c0 [34];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_c4 = 0;
  piVar4 = &iStack_c4;
  pbVar6 = (byte *)0x4;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl();
  iVar7 = iStack_c4;
  if (iStack_c4 != 0x7366626f) {
    __ZNSt3__18ios_base5clearEj((long)param_1 + *(long *)(*param_1 + -0x18),0);
    pbVar6 = (byte *)0xffffffff;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(param_1,1);
    aiStack_c0[0x20] = 0;
    aiStack_c0[0x21] = 0;
    aiStack_c0[0x1a] = 0;
    aiStack_c0[0x1b] = 0;
    aiStack_c0[0x18] = 0;
    aiStack_c0[0x19] = 0;
    aiStack_c0[0x1e] = 0;
    aiStack_c0[0x1f] = 0;
    aiStack_c0[0x1c] = 0;
    aiStack_c0[0x1d] = 0;
    aiStack_c0[0x12] = 0;
    aiStack_c0[0x13] = 0;
    aiStack_c0[0x10] = 0;
    aiStack_c0[0x11] = 0;
    aiStack_c0[0x16] = 0;
    aiStack_c0[0x17] = 0;
    aiStack_c0[0x14] = 0;
    aiStack_c0[0x15] = 0;
    aiStack_c0[10] = 0;
    aiStack_c0[0xb] = 0;
    aiStack_c0[8] = 0;
    aiStack_c0[9] = 0;
    aiStack_c0[0xe] = 0;
    aiStack_c0[0xf] = 0;
    aiStack_c0[0xc] = 0;
    aiStack_c0[0xd] = 0;
    aiStack_c0[2] = 0;
    aiStack_c0[3] = 0;
    aiStack_c0[0] = 0;
    aiStack_c0[1] = 0;
    aiStack_c0[6] = 0;
    aiStack_c0[7] = 0;
    aiStack_c0[4] = 0;
    aiStack_c0[5] = 0;
    piVar4 = aiStack_c0;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail((uint)(iVar7 == 0x7366626f));
    uVar9 = (uint)pbVar6[1];
    iVar7 = (uint)pbVar6[1] - (uint)*pbVar6;
    if (iVar7 != 0) {
      uVar2 = iVar7 + 1;
      if (uVar2 == 0) {
        func_0x000107c284a0(piVar4);
        uVar9 = (uint)piVar4;
      }
      else {
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = 0;
          uVar9 = 0x80000000;
          do {
            iVar7 = iVar7 + 1;
            uVar1 = uVar9 >> 1;
            uVar9 = uVar9 >> 1;
          } while ((uVar2 & uVar1) == 0);
        }
        lVar3 = 0x1f;
        if (uVar2 << (ulong)(iVar7 + 1U & 0x1f) != 0) {
          lVar3 = 0x20;
        }
        uVar8 = lVar3 - iVar7;
        uVar10 = uVar8 >> 5;
        if ((uVar8 & 0x1f) != 0) {
          uVar10 = uVar10 + 1;
        }
        iVar7 = 0;
        if (uVar10 != 0) {
          iVar7 = (int)(uVar8 / uVar10);
        }
        uVar1 = 0;
        if (uVar10 <= uVar8) {
          uVar1 = 0xffffffff >> (ulong)(-iVar7 & 0x1f);
        }
        do {
          piVar5 = piVar4;
          func_0x000107c284a0();
          uVar9 = (uint)piVar5 & uVar1;
        } while (uVar2 <= uVar9);
        uVar9 = *pbVar6 + uVar9;
      }
    }
    return uVar9 & 0xff;
  }
  return (uint)(iVar7 == 0x7366626f);
}



/* Entry: 109d15f04; end: 109d15f93;  */

bool FUN_109d15f04(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110b3e8a0;
  pppuVar1 = &ppuStack_28;
  uStack_38 = param_1;
  uStack_30 = param_2;
  FUN_109d15f94(pppuVar1,&uStack_38);
  return pppuVar1 != (undefined ***)&PTR_DAT_110b3e990;
}



/* Entry: 109d15f94; end: 109d16003;  */

undefined8 * FUN_109d15f94(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_109d16004(puVar1,puVar1 + 0x1e,10,0,param_2);
  lVar3 = *param_1;
  if ((undefined8 *)(lVar3 + 0xf0) != puVar1) {
    uVar2 = *param_2;
    func_0x000107c2abd8(uVar2,param_2[1],*puVar1,puVar1[1]);
    if (((uint)uVar2 >> 7 & 1) == 0) {
      return puVar1;
    }
    lVar3 = *param_1;
  }
  return (undefined8 *)(lVar3 + 0xf0);
}



/* Entry: 109d16004; end: 109d160ab;  */

undefined1  [16]
FUN_109d16004(long param_1,undefined8 *param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  if (param_3 != 0) {
    puVar2 = param_2;
    while( true ) {
      while( true ) {
        param_2 = (undefined8 *)(param_1 + param_4 * 0x18);
        uVar1 = *param_2;
        func_0x000107c2abd8(uVar1,param_2[1],*param_5,param_5[1]);
        if (((uint)uVar1 >> 7 & 1) != 0) break;
        if (param_3 >> 1 <= param_4) goto LAB_109d16088;
        param_4 = param_4 << 1 | 1;
        puVar2 = param_2;
      }
      param_2 = puVar2;
      if (param_3 - 1 >> 1 <= param_4) break;
      param_4 = param_4 * 2 + 2;
    }
  }
LAB_109d16088:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_2;
  return auVar3;
}



/* Entry: 109d160ac; end: 109d1611b;  */

undefined8 * FUN_109d160ac(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_109d1611c(puVar1,puVar1 + 0xc,4,0,param_2);
  lVar3 = *param_1;
  if ((undefined8 *)(lVar3 + 0x60) != puVar1) {
    uVar2 = *param_2;
    func_0x000107c2abd8(uVar2,param_2[1],*puVar1,puVar1[1]);
    if (((uint)uVar2 >> 7 & 1) == 0) {
      return puVar1;
    }
    lVar3 = *param_1;
  }
  return (undefined8 *)(lVar3 + 0x60);
}



/* Entry: 109d1611c; end: 109d161c3;  */

undefined1  [16]
FUN_109d1611c(long param_1,undefined8 *param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  if (param_3 != 0) {
    puVar2 = param_2;
    while( true ) {
      while( true ) {
        param_2 = (undefined8 *)(param_1 + param_4 * 0x18);
        uVar1 = *param_2;
        func_0x000107c2abd8(uVar1,param_2[1],*param_5,param_5[1]);
        if (((uint)uVar1 >> 7 & 1) != 0) break;
        if (param_3 >> 1 <= param_4) goto LAB_109d161a0;
        param_4 = param_4 << 1 | 1;
        puVar2 = param_2;
      }
      param_2 = puVar2;
      if (param_3 - 1 >> 1 <= param_4) break;
      param_4 = param_4 * 2 + 2;
    }
  }
LAB_109d161a0:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_2;
  return auVar3;
}



/* Entry: 109d161c4; end: 109d16233;  */

undefined1  [16]
FUN_109d161c4(int param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  if (param_1 - 1U < 6) {
    auVar21._4_4_ = 0;
    auVar21._0_4_ = (uint)(0x90504030201 >> ((ulong)((param_1 - 1U) * 8) & 0x3f)) & 0xf;
    auVar21._8_8_ = param_2;
    return auVar21;
  }
  puVar4 = &UNK_10f5ac676;
  func_0x000105688514();
  if ((int)puVar4 == 1) {
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = puVar4;
    return auVar22;
  }
  if ((int)puVar4 == 0) {
    func_0x000105688514(&UNK_10f5ac6ab);
  }
  puVar5 = (uint *)&UNK_10f5ac695;
  func_0x000105688514();
  if ((long)param_2 < 3) {
    if (param_2 == (undefined8 *)0x1) {
      uVar13 = *puVar5;
      uVar12 = 1;
      uVar10 = 1;
    }
    else {
      if (param_2 != (undefined8 *)0x2) {
LAB_109d162c8:
        __ZNSt3__19to_stringEm(auStack_70,param_2);
        func_0x00010928a5e0(auStack_58,&UNK_10f5ac6ef,auStack_70);
        func_0x000105687ee0(auStack_58);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109d162f4);
        (*pcVar3)();
      }
      uVar10 = (ulong)*puVar5;
      uVar12 = puVar5[1];
      uVar13 = 1;
    }
  }
  else if (param_2 == (undefined8 *)0x3) {
    uVar10 = (ulong)*puVar5;
    uVar12 = puVar5[1];
    uVar13 = puVar5[2];
  }
  else {
    if (param_2 != (undefined8 *)0x4) goto LAB_109d162c8;
    if (*puVar5 != 1) {
      puVar6 = (undefined8 *)&UNK_10f5ac6bd;
      func_0x000105688514();
      if (cStack_41 < '\0') {
        __ZdlPv(auStack_58[0]);
      }
      if (cStack_59 < '\0') {
        __ZdlPv(auStack_70[0]);
      }
      __Unwind_Resume();
      if ((param_3 == 1) || (param_4 == (undefined8 *)0x1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_2,puVar6,(long)param_4 * param_3 * param_5);
        auVar25._8_8_ = puVar6;
        auVar25._0_8_ = param_2;
        return auVar25;
      }
      if (param_5 < 4) {
        if (param_5 == 1) {
          if (param_3 != 0) {
            uVar10 = 0;
            uVar14 = 0x10;
            puVar11 = puVar6;
            do {
              uVar1 = param_3;
              if (uVar14 <= param_3) {
                uVar1 = uVar14;
              }
              if (param_4 != (undefined8 *)0x0) {
                lVar15 = 0;
                puVar16 = (undefined8 *)0x0;
                puVar6 = (undefined8 *)0x10;
                puVar8 = puVar11;
                puVar7 = param_2;
                do {
                  puVar2 = param_4;
                  if (puVar6 <= param_4) {
                    puVar2 = puVar6;
                  }
                  puVar17 = puVar8;
                  puVar19 = puVar7;
                  puVar4 = (undefined *)((long)puVar2 + lVar15);
                  uVar20 = uVar10;
                  puVar18 = puVar7;
                  puVar9 = puVar8;
                  do {
                    do {
                      *(undefined1 *)puVar19 = *(undefined1 *)puVar17;
                      puVar4 = puVar4 + -1;
                      puVar17 = (undefined8 *)((long)puVar17 + 1);
                      puVar19 = (undefined8 *)((long)puVar19 + param_3);
                    } while (puVar4 != (undefined *)0x0);
                    uVar20 = uVar20 + 1;
                    puVar19 = (undefined8 *)((long)puVar18 + 1);
                    puVar17 = (undefined8 *)((long)puVar9 + (long)param_4);
                    puVar4 = (undefined *)((long)puVar2 + lVar15);
                    puVar18 = puVar19;
                    puVar9 = puVar17;
                  } while (uVar20 != uVar1);
                  puVar16 = puVar16 + 2;
                  puVar6 = puVar6 + 2;
                  lVar15 = lVar15 + -0x10;
                  puVar7 = puVar7 + param_3 * 2;
                  puVar8 = puVar8 + 2;
                } while (puVar16 < param_4);
              }
              uVar10 = uVar10 + 0x10;
              uVar14 = uVar14 + 0x10;
              param_2 = param_2 + 2;
              puVar11 = puVar11 + (long)param_4 * 2;
            } while (uVar10 < param_3);
          }
        }
        else {
          if (param_5 != 2) {
LAB_109d166bc:
            __ZNSt3__19to_stringEm(auStack_e0,param_5);
            func_0x00010928a5e0(auStack_c8,&UNK_10f5ac719,auStack_e0);
            FUN_109cd45b4(&UNK_10f5ac709,&UNK_10f5ac709,auStack_c8);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x109d166f4);
            (*pcVar3)();
          }
          if (param_3 != 0) {
            uVar10 = 0;
            uVar14 = 0x10;
            puVar11 = puVar6;
            do {
              uVar1 = param_3;
              if (uVar14 <= param_3) {
                uVar1 = uVar14;
              }
              if (param_4 != (undefined8 *)0x0) {
                lVar15 = 0;
                puVar16 = (undefined8 *)0x0;
                puVar8 = (undefined8 *)0x10;
                puVar6 = puVar11;
                puVar7 = param_2;
                do {
                  puVar2 = param_4;
                  if (puVar8 <= param_4) {
                    puVar2 = puVar8;
                  }
                  puVar17 = puVar6;
                  puVar19 = puVar7;
                  puVar4 = (undefined *)((long)puVar2 + lVar15);
                  uVar20 = uVar10;
                  puVar18 = puVar7;
                  puVar9 = puVar6;
                  do {
                    do {
                      *(undefined2 *)puVar19 = *(undefined2 *)puVar17;
                      puVar4 = puVar4 + -1;
                      puVar17 = (undefined8 *)((long)puVar17 + 2);
                      puVar19 = (undefined8 *)((long)puVar19 + param_3 * 2);
                    } while (puVar4 != (undefined *)0x0);
                    uVar20 = uVar20 + 1;
                    puVar19 = (undefined8 *)((long)puVar18 + 2);
                    puVar17 = (undefined8 *)((long)puVar9 + (long)param_4 * 2);
                    puVar4 = (undefined *)((long)puVar2 + lVar15);
                    puVar18 = puVar19;
                    puVar9 = puVar17;
                  } while (uVar20 != uVar1);
                  puVar16 = puVar16 + 2;
                  puVar8 = puVar8 + 2;
                  lVar15 = lVar15 + -0x10;
                  puVar7 = puVar7 + param_3 * 4;
                  puVar6 = puVar6 + 4;
                } while (puVar16 < param_4);
              }
              uVar10 = uVar10 + 0x10;
              uVar14 = uVar14 + 0x10;
              param_2 = param_2 + 4;
              puVar11 = puVar11 + (long)param_4 * 4;
            } while (uVar10 < param_3);
          }
        }
      }
      else if (param_5 == 4) {
        if (param_3 != 0) {
          uVar10 = 0;
          uVar14 = 0x10;
          puVar11 = puVar6;
          do {
            uVar1 = param_3;
            if (uVar14 <= param_3) {
              uVar1 = uVar14;
            }
            if (param_4 != (undefined8 *)0x0) {
              lVar15 = 0;
              puVar16 = (undefined8 *)0x0;
              puVar8 = (undefined8 *)0x10;
              puVar6 = puVar11;
              puVar7 = param_2;
              do {
                puVar2 = param_4;
                if (puVar8 <= param_4) {
                  puVar2 = puVar8;
                }
                puVar17 = puVar6;
                puVar19 = puVar7;
                puVar4 = (undefined *)((long)puVar2 + lVar15);
                uVar20 = uVar10;
                puVar18 = puVar7;
                puVar9 = puVar6;
                do {
                  do {
                    *(undefined4 *)puVar19 = *(undefined4 *)puVar17;
                    puVar4 = puVar4 + -1;
                    puVar17 = (undefined8 *)((long)puVar17 + 4);
                    puVar19 = (undefined8 *)((long)puVar19 + param_3 * 4);
                  } while (puVar4 != (undefined *)0x0);
                  uVar20 = uVar20 + 1;
                  puVar19 = (undefined8 *)((long)puVar18 + 4);
                  puVar17 = (undefined8 *)((long)puVar9 + (long)param_4 * 4);
                  puVar4 = (undefined *)((long)puVar2 + lVar15);
                  puVar18 = puVar19;
                  puVar9 = puVar17;
                } while (uVar20 != uVar1);
                puVar16 = puVar16 + 2;
                puVar8 = puVar8 + 2;
                lVar15 = lVar15 + -0x10;
                puVar7 = puVar7 + param_3 * 8;
                puVar6 = puVar6 + 8;
              } while (puVar16 < param_4);
            }
            uVar10 = uVar10 + 0x10;
            uVar14 = uVar14 + 0x10;
            param_2 = param_2 + 8;
            puVar11 = puVar11 + (long)param_4 * 8;
          } while (uVar10 < param_3);
        }
      }
      else {
        if (param_5 != 8) goto LAB_109d166bc;
        if (param_3 != 0) {
          uVar10 = 0;
          uVar14 = 0x10;
          puVar11 = puVar6;
          do {
            uVar1 = param_3;
            if (uVar14 <= param_3) {
              uVar1 = uVar14;
            }
            if (param_4 != (undefined8 *)0x0) {
              lVar15 = 0;
              puVar16 = (undefined8 *)0x0;
              puVar8 = (undefined8 *)0x10;
              puVar6 = puVar11;
              puVar7 = param_2;
              do {
                puVar2 = param_4;
                if (puVar8 <= param_4) {
                  puVar2 = puVar8;
                }
                puVar17 = puVar6;
                puVar19 = puVar7;
                puVar4 = (undefined *)((long)puVar2 + lVar15);
                uVar20 = uVar10;
                puVar18 = puVar7;
                puVar9 = puVar6;
                do {
                  do {
                    *puVar19 = *puVar17;
                    puVar4 = puVar4 + -1;
                    puVar17 = puVar17 + 1;
                    puVar19 = puVar19 + param_3;
                  } while (puVar4 != (undefined *)0x0);
                  uVar20 = uVar20 + 1;
                  puVar19 = puVar18 + 1;
                  puVar17 = puVar9 + (long)param_4;
                  puVar4 = (undefined *)((long)puVar2 + lVar15);
                  puVar18 = puVar19;
                  puVar9 = puVar17;
                } while (uVar20 != uVar1);
                puVar16 = puVar16 + 2;
                puVar8 = puVar8 + 2;
                lVar15 = lVar15 + -0x10;
                puVar7 = puVar7 + param_3 * 0x10;
                puVar6 = puVar6 + 0x10;
              } while (puVar16 < param_4);
            }
            uVar10 = uVar10 + 0x10;
            uVar14 = uVar14 + 0x10;
            param_2 = param_2 + 0x10;
            puVar11 = puVar11 + (long)param_4 * 0x10;
          } while (uVar10 < param_3);
        }
      }
      auVar24._8_8_ = param_2;
      auVar24._0_8_ = puVar6;
      return auVar24;
    }
    uVar10 = (ulong)puVar5[1];
    uVar12 = puVar5[2];
    uVar13 = puVar5[3];
  }
  auVar23._0_8_ = (ulong)uVar12 | uVar10 << 0x20;
  auVar23._8_8_ = (ulong)uVar13 | 0x100000000;
  return auVar23;
}



/* Entry: 109d16234; end: 109d16333;  */

undefined1  [16]
FUN_109d16234(uint *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if ((long)param_2 < 3) {
    if (param_2 == (undefined8 *)0x1) {
      uVar11 = *param_1;
      uVar10 = 1;
      uVar8 = 1;
    }
    else {
      if (param_2 != (undefined8 *)0x2) {
LAB_109d162c8:
        __ZNSt3__19to_stringEm(auStack_50,param_2);
        func_0x00010928a5e0(auStack_38,&UNK_10f5ac6ef,auStack_50);
        func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109d162f4);
        (*pcVar3)();
      }
      uVar8 = (ulong)*param_1;
      uVar10 = param_1[1];
      uVar11 = 1;
    }
  }
  else if (param_2 == (undefined8 *)0x3) {
    uVar8 = (ulong)*param_1;
    uVar10 = param_1[1];
    uVar11 = param_1[2];
  }
  else {
    if (param_2 != (undefined8 *)0x4) goto LAB_109d162c8;
    if (*param_1 != 1) {
      puVar4 = (undefined8 *)&UNK_10f5ac6bd;
      func_0x000105688514();
      if (cStack_21 < '\0') {
        __ZdlPv(auStack_38[0]);
      }
      if (cStack_39 < '\0') {
        __ZdlPv(auStack_50[0]);
      }
      __Unwind_Resume();
      if ((param_3 == 1) || (param_4 == (undefined8 *)0x1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_2,puVar4,(long)param_4 * param_3 * param_5);
        auVar22._8_8_ = puVar4;
        auVar22._0_8_ = param_2;
        return auVar22;
      }
      if (param_5 < 4) {
        if (param_5 == 1) {
          if (param_3 != 0) {
            uVar8 = 0;
            uVar12 = 0x10;
            puVar9 = puVar4;
            do {
              uVar1 = param_3;
              if (uVar12 <= param_3) {
                uVar1 = uVar12;
              }
              if (param_4 != (undefined8 *)0x0) {
                lVar13 = 0;
                puVar14 = (undefined8 *)0x0;
                puVar4 = (undefined8 *)0x10;
                puVar6 = puVar9;
                puVar5 = param_2;
                do {
                  puVar2 = param_4;
                  if (puVar4 <= param_4) {
                    puVar2 = puVar4;
                  }
                  puVar15 = puVar6;
                  puVar17 = puVar5;
                  puVar19 = (undefined *)((long)puVar2 + lVar13);
                  uVar18 = uVar8;
                  puVar16 = puVar5;
                  puVar7 = puVar6;
                  do {
                    do {
                      *(undefined1 *)puVar17 = *(undefined1 *)puVar15;
                      puVar19 = puVar19 + -1;
                      puVar15 = (undefined8 *)((long)puVar15 + 1);
                      puVar17 = (undefined8 *)((long)puVar17 + param_3);
                    } while (puVar19 != (undefined *)0x0);
                    uVar18 = uVar18 + 1;
                    puVar17 = (undefined8 *)((long)puVar16 + 1);
                    puVar15 = (undefined8 *)((long)puVar7 + (long)param_4);
                    puVar19 = (undefined *)((long)puVar2 + lVar13);
                    puVar16 = puVar17;
                    puVar7 = puVar15;
                  } while (uVar18 != uVar1);
                  puVar14 = puVar14 + 2;
                  puVar4 = puVar4 + 2;
                  lVar13 = lVar13 + -0x10;
                  puVar5 = puVar5 + param_3 * 2;
                  puVar6 = puVar6 + 2;
                } while (puVar14 < param_4);
              }
              uVar8 = uVar8 + 0x10;
              uVar12 = uVar12 + 0x10;
              param_2 = param_2 + 2;
              puVar9 = puVar9 + (long)param_4 * 2;
            } while (uVar8 < param_3);
          }
        }
        else {
          if (param_5 != 2) {
LAB_109d166bc:
            __ZNSt3__19to_stringEm(auStack_c0,param_5);
            func_0x00010928a5e0(auStack_a8,&UNK_10f5ac719,auStack_c0);
            FUN_109cd45b4(&UNK_10f5ac709,&UNK_10f5ac709,auStack_a8);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x109d166f4);
            (*pcVar3)();
          }
          if (param_3 != 0) {
            uVar8 = 0;
            uVar12 = 0x10;
            puVar9 = puVar4;
            do {
              uVar1 = param_3;
              if (uVar12 <= param_3) {
                uVar1 = uVar12;
              }
              if (param_4 != (undefined8 *)0x0) {
                lVar13 = 0;
                puVar14 = (undefined8 *)0x0;
                puVar6 = (undefined8 *)0x10;
                puVar4 = puVar9;
                puVar5 = param_2;
                do {
                  puVar2 = param_4;
                  if (puVar6 <= param_4) {
                    puVar2 = puVar6;
                  }
                  puVar15 = puVar4;
                  puVar17 = puVar5;
                  puVar19 = (undefined *)((long)puVar2 + lVar13);
                  uVar18 = uVar8;
                  puVar16 = puVar5;
                  puVar7 = puVar4;
                  do {
                    do {
                      *(undefined2 *)puVar17 = *(undefined2 *)puVar15;
                      puVar19 = puVar19 + -1;
                      puVar15 = (undefined8 *)((long)puVar15 + 2);
                      puVar17 = (undefined8 *)((long)puVar17 + param_3 * 2);
                    } while (puVar19 != (undefined *)0x0);
                    uVar18 = uVar18 + 1;
                    puVar17 = (undefined8 *)((long)puVar16 + 2);
                    puVar15 = (undefined8 *)((long)puVar7 + (long)param_4 * 2);
                    puVar19 = (undefined *)((long)puVar2 + lVar13);
                    puVar16 = puVar17;
                    puVar7 = puVar15;
                  } while (uVar18 != uVar1);
                  puVar14 = puVar14 + 2;
                  puVar6 = puVar6 + 2;
                  lVar13 = lVar13 + -0x10;
                  puVar5 = puVar5 + param_3 * 4;
                  puVar4 = puVar4 + 4;
                } while (puVar14 < param_4);
              }
              uVar8 = uVar8 + 0x10;
              uVar12 = uVar12 + 0x10;
              param_2 = param_2 + 4;
              puVar9 = puVar9 + (long)param_4 * 4;
            } while (uVar8 < param_3);
          }
        }
      }
      else if (param_5 == 4) {
        if (param_3 != 0) {
          uVar8 = 0;
          uVar12 = 0x10;
          puVar9 = puVar4;
          do {
            uVar1 = param_3;
            if (uVar12 <= param_3) {
              uVar1 = uVar12;
            }
            if (param_4 != (undefined8 *)0x0) {
              lVar13 = 0;
              puVar14 = (undefined8 *)0x0;
              puVar6 = (undefined8 *)0x10;
              puVar4 = puVar9;
              puVar5 = param_2;
              do {
                puVar2 = param_4;
                if (puVar6 <= param_4) {
                  puVar2 = puVar6;
                }
                puVar15 = puVar4;
                puVar17 = puVar5;
                puVar19 = (undefined *)((long)puVar2 + lVar13);
                uVar18 = uVar8;
                puVar16 = puVar5;
                puVar7 = puVar4;
                do {
                  do {
                    *(undefined4 *)puVar17 = *(undefined4 *)puVar15;
                    puVar19 = puVar19 + -1;
                    puVar15 = (undefined8 *)((long)puVar15 + 4);
                    puVar17 = (undefined8 *)((long)puVar17 + param_3 * 4);
                  } while (puVar19 != (undefined *)0x0);
                  uVar18 = uVar18 + 1;
                  puVar17 = (undefined8 *)((long)puVar16 + 4);
                  puVar15 = (undefined8 *)((long)puVar7 + (long)param_4 * 4);
                  puVar19 = (undefined *)((long)puVar2 + lVar13);
                  puVar16 = puVar17;
                  puVar7 = puVar15;
                } while (uVar18 != uVar1);
                puVar14 = puVar14 + 2;
                puVar6 = puVar6 + 2;
                lVar13 = lVar13 + -0x10;
                puVar5 = puVar5 + param_3 * 8;
                puVar4 = puVar4 + 8;
              } while (puVar14 < param_4);
            }
            uVar8 = uVar8 + 0x10;
            uVar12 = uVar12 + 0x10;
            param_2 = param_2 + 8;
            puVar9 = puVar9 + (long)param_4 * 8;
          } while (uVar8 < param_3);
        }
      }
      else {
        if (param_5 != 8) goto LAB_109d166bc;
        if (param_3 != 0) {
          uVar8 = 0;
          uVar12 = 0x10;
          puVar9 = puVar4;
          do {
            uVar1 = param_3;
            if (uVar12 <= param_3) {
              uVar1 = uVar12;
            }
            if (param_4 != (undefined8 *)0x0) {
              lVar13 = 0;
              puVar14 = (undefined8 *)0x0;
              puVar6 = (undefined8 *)0x10;
              puVar4 = puVar9;
              puVar5 = param_2;
              do {
                puVar2 = param_4;
                if (puVar6 <= param_4) {
                  puVar2 = puVar6;
                }
                puVar15 = puVar4;
                puVar17 = puVar5;
                puVar19 = (undefined *)((long)puVar2 + lVar13);
                uVar18 = uVar8;
                puVar16 = puVar5;
                puVar7 = puVar4;
                do {
                  do {
                    *puVar17 = *puVar15;
                    puVar19 = puVar19 + -1;
                    puVar15 = puVar15 + 1;
                    puVar17 = puVar17 + param_3;
                  } while (puVar19 != (undefined *)0x0);
                  uVar18 = uVar18 + 1;
                  puVar17 = puVar16 + 1;
                  puVar15 = puVar7 + (long)param_4;
                  puVar19 = (undefined *)((long)puVar2 + lVar13);
                  puVar16 = puVar17;
                  puVar7 = puVar15;
                } while (uVar18 != uVar1);
                puVar14 = puVar14 + 2;
                puVar6 = puVar6 + 2;
                lVar13 = lVar13 + -0x10;
                puVar5 = puVar5 + param_3 * 0x10;
                puVar4 = puVar4 + 0x10;
              } while (puVar14 < param_4);
            }
            uVar8 = uVar8 + 0x10;
            uVar12 = uVar12 + 0x10;
            param_2 = param_2 + 0x10;
            puVar9 = puVar9 + (long)param_4 * 0x10;
          } while (uVar8 < param_3);
        }
      }
      auVar21._8_8_ = param_2;
      auVar21._0_8_ = puVar4;
      return auVar21;
    }
    uVar8 = (ulong)param_1[1];
    uVar10 = param_1[2];
    uVar11 = param_1[3];
  }
  auVar20._0_8_ = (ulong)uVar10 | uVar8 << 0x20;
  auVar20._8_8_ = (ulong)uVar11 | 0x100000000;
  return auVar20;
}



/* Entry: 109d16334; end: 109d16727;  */

void FUN_109d16334(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if ((param_3 == 1) || (param_4 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_2,param_1,param_4 * param_3 * param_5);
    return;
  }
  if (param_5 < 4) {
    if (param_5 == 1) {
      if (param_3 != 0) {
        uVar8 = 0;
        uVar9 = 0x10;
        do {
          uVar1 = param_3;
          if (uVar9 <= param_3) {
            uVar1 = uVar9;
          }
          if (param_4 != 0) {
            lVar10 = 0;
            uVar11 = 0;
            uVar6 = 0x10;
            puVar4 = param_1;
            puVar5 = param_2;
            do {
              uVar2 = param_4;
              if (uVar6 <= param_4) {
                uVar2 = uVar6;
              }
              puVar12 = puVar4;
              puVar14 = puVar5;
              lVar16 = uVar2 + lVar10;
              uVar15 = uVar8;
              puVar13 = puVar5;
              puVar7 = puVar4;
              do {
                do {
                  *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
                  lVar16 = lVar16 + -1;
                  puVar12 = (undefined8 *)((long)puVar12 + 1);
                  puVar14 = (undefined8 *)((long)puVar14 + param_3);
                } while (lVar16 != 0);
                uVar15 = uVar15 + 1;
                puVar14 = (undefined8 *)((long)puVar13 + 1);
                puVar12 = (undefined8 *)((long)puVar7 + param_4);
                lVar16 = uVar2 + lVar10;
                puVar13 = puVar14;
                puVar7 = puVar12;
              } while (uVar15 != uVar1);
              uVar11 = uVar11 + 0x10;
              uVar6 = uVar6 + 0x10;
              lVar10 = lVar10 + -0x10;
              puVar5 = puVar5 + param_3 * 2;
              puVar4 = puVar4 + 2;
            } while (uVar11 < param_4);
          }
          uVar8 = uVar8 + 0x10;
          uVar9 = uVar9 + 0x10;
          param_2 = param_2 + 2;
          param_1 = param_1 + param_4 * 2;
        } while (uVar8 < param_3);
      }
    }
    else {
      if (param_5 != 2) {
LAB_109d166bc:
        __ZNSt3__19to_stringEm(auStack_70,param_5);
        func_0x00010928a5e0(auStack_58,&UNK_10f5ac719,auStack_70);
        FUN_109cd45b4(&UNK_10f5ac709,&UNK_10f5ac709,auStack_58);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109d166f4);
        (*pcVar3)();
      }
      if (param_3 != 0) {
        uVar8 = 0;
        uVar9 = 0x10;
        do {
          uVar1 = param_3;
          if (uVar9 <= param_3) {
            uVar1 = uVar9;
          }
          if (param_4 != 0) {
            lVar10 = 0;
            uVar11 = 0;
            uVar6 = 0x10;
            puVar4 = param_1;
            puVar5 = param_2;
            do {
              uVar2 = param_4;
              if (uVar6 <= param_4) {
                uVar2 = uVar6;
              }
              puVar12 = puVar4;
              puVar14 = puVar5;
              lVar16 = uVar2 + lVar10;
              uVar15 = uVar8;
              puVar13 = puVar5;
              puVar7 = puVar4;
              do {
                do {
                  *(undefined2 *)puVar14 = *(undefined2 *)puVar12;
                  lVar16 = lVar16 + -1;
                  puVar12 = (undefined8 *)((long)puVar12 + 2);
                  puVar14 = (undefined8 *)((long)puVar14 + param_3 * 2);
                } while (lVar16 != 0);
                uVar15 = uVar15 + 1;
                puVar14 = (undefined8 *)((long)puVar13 + 2);
                puVar12 = (undefined8 *)((long)puVar7 + param_4 * 2);
                lVar16 = uVar2 + lVar10;
                puVar13 = puVar14;
                puVar7 = puVar12;
              } while (uVar15 != uVar1);
              uVar11 = uVar11 + 0x10;
              uVar6 = uVar6 + 0x10;
              lVar10 = lVar10 + -0x10;
              puVar5 = puVar5 + param_3 * 4;
              puVar4 = puVar4 + 4;
            } while (uVar11 < param_4);
          }
          uVar8 = uVar8 + 0x10;
          uVar9 = uVar9 + 0x10;
          param_2 = param_2 + 4;
          param_1 = param_1 + param_4 * 4;
        } while (uVar8 < param_3);
      }
    }
  }
  else if (param_5 == 4) {
    if (param_3 != 0) {
      uVar8 = 0;
      uVar9 = 0x10;
      do {
        uVar1 = param_3;
        if (uVar9 <= param_3) {
          uVar1 = uVar9;
        }
        if (param_4 != 0) {
          lVar10 = 0;
          uVar11 = 0;
          uVar6 = 0x10;
          puVar4 = param_1;
          puVar5 = param_2;
          do {
            uVar2 = param_4;
            if (uVar6 <= param_4) {
              uVar2 = uVar6;
            }
            puVar12 = puVar4;
            puVar14 = puVar5;
            lVar16 = uVar2 + lVar10;
            uVar15 = uVar8;
            puVar13 = puVar5;
            puVar7 = puVar4;
            do {
              do {
                *(undefined4 *)puVar14 = *(undefined4 *)puVar12;
                lVar16 = lVar16 + -1;
                puVar12 = (undefined8 *)((long)puVar12 + 4);
                puVar14 = (undefined8 *)((long)puVar14 + param_3 * 4);
              } while (lVar16 != 0);
              uVar15 = uVar15 + 1;
              puVar14 = (undefined8 *)((long)puVar13 + 4);
              puVar12 = (undefined8 *)((long)puVar7 + param_4 * 4);
              lVar16 = uVar2 + lVar10;
              puVar13 = puVar14;
              puVar7 = puVar12;
            } while (uVar15 != uVar1);
            uVar11 = uVar11 + 0x10;
            uVar6 = uVar6 + 0x10;
            lVar10 = lVar10 + -0x10;
            puVar5 = puVar5 + param_3 * 8;
            puVar4 = puVar4 + 8;
          } while (uVar11 < param_4);
        }
        uVar8 = uVar8 + 0x10;
        uVar9 = uVar9 + 0x10;
        param_2 = param_2 + 8;
        param_1 = param_1 + param_4 * 8;
      } while (uVar8 < param_3);
    }
  }
  else {
    if (param_5 != 8) goto LAB_109d166bc;
    if (param_3 != 0) {
      uVar8 = 0;
      uVar9 = 0x10;
      do {
        uVar1 = param_3;
        if (uVar9 <= param_3) {
          uVar1 = uVar9;
        }
        if (param_4 != 0) {
          lVar10 = 0;
          uVar11 = 0;
          uVar6 = 0x10;
          puVar4 = param_1;
          puVar5 = param_2;
          do {
            uVar2 = param_4;
            if (uVar6 <= param_4) {
              uVar2 = uVar6;
            }
            puVar12 = puVar4;
            puVar14 = puVar5;
            lVar16 = uVar2 + lVar10;
            uVar15 = uVar8;
            puVar13 = puVar5;
            puVar7 = puVar4;
            do {
              do {
                *puVar14 = *puVar12;
                lVar16 = lVar16 + -1;
                puVar12 = puVar12 + 1;
                puVar14 = puVar14 + param_3;
              } while (lVar16 != 0);
              uVar15 = uVar15 + 1;
              puVar14 = puVar13 + 1;
              puVar12 = puVar7 + param_4;
              lVar16 = uVar2 + lVar10;
              puVar13 = puVar14;
              puVar7 = puVar12;
            } while (uVar15 != uVar1);
            uVar11 = uVar11 + 0x10;
            uVar6 = uVar6 + 0x10;
            lVar10 = lVar10 + -0x10;
            puVar5 = puVar5 + param_3 * 0x10;
            puVar4 = puVar4 + 0x10;
          } while (uVar11 < param_4);
        }
        uVar8 = uVar8 + 0x10;
        uVar9 = uVar9 + 0x10;
        param_2 = param_2 + 0x10;
        param_1 = param_1 + param_4 * 0x10;
      } while (uVar8 < param_3);
    }
  }
  return;
}



/* Entry: 109d16728; end: 109d1680b;  */

void FUN_109d16728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  FUN_109d17d64(&plStack_28,param_3,param_4);
  func_0x0001098ad440(param_1,param_2,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
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
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  return;
}



/* Entry: 109d1680c; end: 109d16cc3;  */

void FUN_109d1680c(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcStack_a8;
  long *plStack_a0;
  undefined **ppuStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  code *pcStack_70;
  long *plStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined **ppuStack_48;
  
  lVar8 = *param_2;
  if (lVar8 != 0) {
    plVar5 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar9 = *param_3;
  if (lVar9 != 0) {
    plVar5 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)0xf8;
  __Znwm();
  plVar5[2] = 0;
  plVar5[1] = 0x200000006;
  *(undefined2 *)(plVar5 + 3) = 4;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xf] = 0;
  plVar5[0xe] = 0;
  plVar5[0x10] = 0;
  plVar5[0x11] = (long)(plVar5 + 3);
  *plVar5 = (long)&PTR_DAT_110b3ea00;
  plStack_80 = plVar5 + 0x12;
  *plStack_80 = lVar8;
  plVar5[0x13] = 0;
  plVar5[0x14] = lVar9;
  plVar5[0x15] = 0;
  plVar6 = plVar5 + 0x16;
  *plVar6 = 0;
  plVar5[0x17] = 0x32aaaba7;
  plVar5[0x1e] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x1d] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x19] = 0;
  plVar5[0x18] = 0;
  plStack_90 = plVar5;
  plStack_88 = plVar5;
  func_0x000109d16dac(plVar6,(ulong)&plStack_90 | 8);
  plVar4 = plStack_80;
  pcStack_a8 = FUN_109d16e44;
  plStack_a0 = plStack_80;
  ppuStack_98 = &PTR_PTR_1132fed68;
  __ZNSt3__15mutex4lockEv(plStack_80 + 5);
  lVar8 = *plVar4;
  plVar5 = (long *)(lVar8 + 0x10);
  plStack_68 = plStack_a0;
  pcStack_70 = pcStack_a8;
  ppuStack_60 = ppuStack_98;
  do {
    lVar9 = *plVar5;
    if (lVar9 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar9 = lVar8 + 0x18;
        func_0x000109d1b588(lVar9,&pcStack_70);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plVar4[1] = lVar9;
        lVar8 = plVar4[2];
        plVar5 = (long *)(lVar8 + 0x10);
        goto LAB_109d169bc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar9 >> 1 & 1) == 0);
  plVar4[1] = 0;
  lVar8 = *plVar6;
  plVar5 = (long *)(lVar8 + 0x10);
  do {
    lVar9 = *plVar5;
    if (lVar9 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar8 + 0x18);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar9 >> 1 & 1) == 0);
  plVar5 = (long *)*plVar4;
  *plVar4 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)plVar4[2];
  plVar4[2] = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
LAB_109d16b98:
  plVar5 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
LAB_109d16be8:
  param_1[1] = plStack_88;
  *param_1 = plStack_90;
  plStack_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  __ZNSt3__15mutex6unlockEv(plVar4 + 5);
  if (plStack_88 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_88 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plStack_88 + 8))();
      }
    }
  }
  plVar5 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_90 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
LAB_109d169bc:
  do {
    lVar9 = *plVar5;
    if (lVar9 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar9 = lVar8 + 0x18;
        pcStack_58 = FUN_109d16fa0;
        plStack_50 = plVar4;
        ppuStack_48 = &PTR_PTR_1132fed68;
        func_0x000109d1b588(lVar9,&pcStack_58);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plVar4[3] = lVar9;
        goto LAB_109d16be8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar9 >> 1 & 1) == 0);
  plVar4[3] = 0;
  lVar8 = *plVar6;
  plVar5 = (long *)(lVar8 + 0x10);
  do {
    lVar9 = *plVar5;
    if (lVar9 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar8 + 0x18);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar9 >> 1 & 1) == 0);
  plVar5 = (long *)plVar4[2];
  plVar4[2] = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = plVar4;
  FUN_109d170fc(plVar4,&pcStack_a8);
  if ((int)plVar5 == 0) goto LAB_109d16be8;
  goto LAB_109d16b98;
}



/* Entry: 109d16cc4; end: 109d16e43;  */

void FUN_109d16cc4(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plStack_30;
  long *plStack_28;
  
  FUN_109d1680c(&plStack_30);
  *param_1 = plStack_30;
  plStack_30 = (long *)0x0;
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
    plVar4 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_30 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000109d16d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 8))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 109d16e44; end: 109d16f9f;  */

void FUN_109d16e44(undefined8 *param_1)

{
  ulong *puVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  code *pcStack_48;
  undefined8 *puStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_48 = FUN_109d16fa0;
  ppuStack_38 = &PTR_PTR_1132fed68;
  puStack_40 = param_1;
  FUN_109d170fc(param_1 + 2,&pcStack_48);
  plVar8 = (long *)*param_1;
  *param_1 = 0;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  param_1[1] = 0;
  func_0x000109d17568(&pcStack_48,param_1);
  pcVar5 = pcStack_48;
  pcVar2 = pcStack_48 + 0x10;
  do {
    lVar7 = *(long *)pcVar2;
    if (lVar7 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar4) {
        *(long *)pcVar2 = 2;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        FUN_109d1b4dc(pcStack_48 + 0x18);
        goto LAB_109d16f40;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) {
      if (pcStack_48 != (code *)0x0) {
LAB_109d16f40:
        pcVar2 = pcVar5 + 8;
        do {
          uVar6 = *(ulong *)pcVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar4) {
            *(ulong *)pcVar2 = uVar6 - 0x200000000;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 >> 0x21 == 1) {
          do {
            uVar6 = *(ulong *)pcVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar4) {
              *(ulong *)pcVar2 = uVar6 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*(long *)pcVar5 + 8))(pcVar5);
          }
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 109d16fa0; end: 109d170fb;  */

void FUN_109d16fa0(long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_109d16e44;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lStack_40 = param_1;
  FUN_109d170fc(param_1,&pcStack_48);
  plVar8 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x000109d17568(&pcStack_48,param_1);
  pcVar5 = pcStack_48;
  pcVar2 = pcStack_48 + 0x10;
  do {
    lVar7 = *(long *)pcVar2;
    if (lVar7 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar4) {
        *(long *)pcVar2 = 2;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        FUN_109d1b4dc(pcStack_48 + 0x18);
        goto LAB_109d1709c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) {
      if (pcStack_48 != (code *)0x0) {
LAB_109d1709c:
        pcVar2 = pcVar5 + 8;
        do {
          uVar6 = *(ulong *)pcVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar4) {
            *(ulong *)pcVar2 = uVar6 - 0x200000000;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 >> 0x21 == 1) {
          do {
            uVar6 = *(ulong *)pcVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar4) {
              *(ulong *)pcVar2 = uVar6 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*(long *)pcVar5 + 8))(pcVar5);
          }
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 109d170fc; end: 109d1747f;  */

undefined8 FUN_109d170fc(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 0x10);
    lVar4 = param_1[1];
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    uStack_40 = param_2[2];
    do {
      lVar6 = *plVar8;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          FUN_109d1b624(lVar7 + 0x18,&uStack_50,lVar4);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          plVar8 = (long *)*param_1;
          *param_1 = 0;
          if (plVar8 != (long *)0x0) {
            puVar1 = (ulong *)(plVar8 + 1);
            do {
              uVar5 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar5 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar5 & 0x1fffffffc) == 4) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              do {
                uVar5 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar5 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar5 - 1 == 0) {
                (**(code **)(*plVar8 + 8))(plVar8);
              }
            }
          }
          param_1[1] = 0;
          return 1;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
  }
  return 0;
}



/* Entry: 109d17480; end: 109d17553;  */

void FUN_109d17480(long param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0xb8);
  lVar1 = param_1 + 0x90;
  pcStack_48 = FUN_109d16e44;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lStack_40 = lVar1;
  FUN_109d170fc(lVar1,&pcStack_48);
  pcStack_48 = FUN_109d16fa0;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lStack_40 = lVar1;
  FUN_109d170fc(param_1 + 0xa0,&pcStack_48);
  func_0x000109d17568(&pcStack_48,lVar1);
  if (pcStack_48 != (code *)0x0) {
    pcVar2 = pcStack_48 + 8;
    do {
      uVar5 = *(ulong *)pcVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar4) {
        *(ulong *)pcVar2 = uVar5 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar5 >> 0x21 == 1) {
      do {
        uVar5 = *(ulong *)pcVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar4) {
          *(ulong *)pcVar2 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*(long *)pcStack_48 + 8))();
      }
    }
  }
  return;
}



/* Entry: 109d17554; end: 109d175b3;  */

void FUN_109d17554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3ea50;
  return;
}



/* Entry: 109d175b4; end: 109d17667;  */

void FUN_109d175b4(undefined8 *param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_1;
  *param_1 = 0;
  plVar1 = plVar7 + 2;
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 2;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        FUN_109d1b4dc(plVar7 + 3);
        goto LAB_109d1760c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
      if (plVar7 != (long *)0x0) {
LAB_109d1760c:
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar6 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar6 - 0x200000000;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 >> 0x21 == 1) {
          do {
            uVar6 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar6 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar6 - 1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000109d17658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar7 + 8))(plVar7);
            return;
          }
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 109d17668; end: 109d17977;  */

void FUN_109d17668(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined **ppuStack_48;
  
  lVar9 = *param_2;
  if (lVar9 != 0) {
    plVar5 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)0xe8;
  __Znwm();
  plVar5[2] = 0;
  plVar5[1] = 0x200000006;
  *(undefined2 *)(plVar5 + 3) = 4;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xf] = 0;
  plVar5[0xe] = 0;
  plVar5[0x10] = 0;
  plVar5[0x11] = (long)(plVar5 + 3);
  *plVar5 = (long)&PTR_FUN_110b3ea70;
  plVar11 = plVar5 + 0x12;
  *plVar11 = lVar9;
  plVar10 = plVar5 + 0x13;
  *plVar10 = 0;
  plVar6 = plVar5 + 0x14;
  *plVar6 = 0;
  plVar5[0x15] = 0x32aaaba7;
  plVar5[0x17] = 0;
  plVar5[0x16] = 0;
  plVar5[0x19] = 0;
  plVar5[0x18] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x1c] = 0;
  plStack_70 = plVar5;
  plStack_68 = plVar5;
  plStack_60 = plVar11;
  func_0x000109d16dac(plVar6,(ulong)&plStack_70 | 8);
  plVar4 = plStack_60;
  __ZNSt3__15mutex4lockEv(plStack_60 + 3);
  lVar9 = *plVar11;
  plVar5 = (long *)(lVar9 + 0x10);
  do {
    lVar8 = *plVar5;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar8 = lVar9 + 0x18;
        pcStack_58 = FUN_109d17978;
        plStack_50 = plVar4;
        ppuStack_48 = &PTR_PTR_1132fed68;
        func_0x000109d1b588(lVar8,&pcStack_58);
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *plVar10 = lVar8;
        goto LAB_109d1789c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar8 >> 1 & 1) == 0);
  *plVar10 = 0;
  plVar5 = plStack_68 + 2;
  do {
    lVar9 = *plVar5;
    if (lVar9 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(plStack_68 + 3);
        goto LAB_109d177ec;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_109d177ec:
      plVar5 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      plVar5 = (long *)*plVar6;
      *plVar6 = 0;
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 0x200000000;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 >> 0x21 == 1) {
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
LAB_109d1789c:
      plVar6 = plStack_68;
      plVar5 = plStack_70;
      plStack_70 = (long *)0x0;
      plStack_68 = (long *)0x0;
      param_1[1] = plVar6;
      *param_1 = plVar5;
      __ZNSt3__15mutex6unlockEv(plVar4 + 3);
      if (plStack_68 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_68 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 0x200000000;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 >> 0x21 == 1) {
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plStack_68 + 8))();
          }
        }
      }
      plVar5 = plStack_70;
      if (plStack_70 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_70 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 109d17978; end: 109d17aaf;  */

void FUN_109d17978(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  __ZNSt3__15mutex4lockEv(param_1 + 3);
  plVar6 = (long *)*param_1;
  *param_1 = 0;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
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
  plVar7 = (long *)param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__15mutex6unlockEv(param_1 + 3);
  plVar6 = plVar7 + 2;
  do {
    lVar5 = *plVar6;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(plVar7 + 3);
        goto LAB_109d17a48;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
      if (plVar7 != (long *)0x0) {
LAB_109d17a48:
        puVar1 = (ulong *)(plVar7 + 1);
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
                    /* WARNING: Could not recover jumptable at 0x000109d17a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar7 + 8))(plVar7);
            return;
          }
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 109d17ab0; end: 109d17c7b;  */

undefined8 * FUN_109d17ab0(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_110b3ea70;
  __ZNSt3__15mutexD1Ev(param_1 + 0x15);
  plVar4 = (long *)param_1[0x14];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  plVar4 = (long *)param_1[0x12];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  *param_1 = &PTR_FUN_110b3ea50;
  return param_1;
}



/* Entry: 109d17c7c; end: 109d17d63;  */

void FUN_109d17c7c(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0xa8);
  lStack_30 = param_1 + 0x90;
  pcStack_38 = FUN_109d17978;
  ppuStack_28 = &PTR_PTR_1132fed68;
  FUN_109d170fc(lStack_30,&pcStack_38);
  plVar3 = *(long **)(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x98) == 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0xa8);
    if (plVar3 == (long *)0x0) {
      return;
    }
  }
  else {
    if (plVar3 == (long *)0x0) {
      __ZNSt3__15mutex6unlockEv(param_1 + 0xa8);
      return;
    }
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    __ZNSt3__15mutex6unlockEv(param_1 + 0xa8);
  }
  puVar2 = (ulong *)(plVar3 + 1);
  do {
    uVar6 = *puVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = uVar6 - 0x200000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (uVar6 >> 0x21 == 1) {
    do {
      uVar6 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar6 - 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (uVar6 - 1 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  return;
}



/* Entry: 109d17d64; end: 109d17ed7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109d17d64(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined **appuStack_e0 [2];
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long alStack_a8 [2];
  long *plStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d1a6fc(&plStack_98);
  lStack_78 = lStack_90;
  alStack_a8[0] = 0;
  alStack_a8[1] = 0;
  lStack_90 = 0;
  pcStack_88 = FUN_109d18554;
  ppuStack_80 = &PTR_DAT_110b3eae0;
  (**(code **)*param_3)(param_3,param_2,&pcStack_88);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  plVar5 = alStack_a8 + 1;
  FUN_109d17ed8();
  if (alStack_a8[0] != 0) {
    plVar5 = alStack_a8;
    func_0x0001092b4274();
  }
  *param_1 = plStack_98;
  plStack_98 = (long *)0x0;
  if (lStack_90 != 0) {
    func_0x0001092b4274(&lStack_90);
    plVar5 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_98 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plStack_98 + 8))();
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar5;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  FUN_109d17ed8(alStack_a8 + 1);
  if (alStack_a8[0] != 0) {
    func_0x0001092b4274(alStack_a8);
  }
  func_0x0001098b4850(&plStack_98);
  plVar6 = plVar5;
  __Unwind_Resume();
  pcStack_b8 = FUN_109d17ed8;
  if (*plVar6 != 0) {
    puStack_d0 = param_3;
    plStack_c8 = plVar5;
    puStack_c0 = &stack0xfffffffffffffff0;
    if ((bRam00000001138334b0 & 1) == 0) {
      iVar4 = 0x138334b0;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        __ZNSt13runtime_errorC2EPKc(appuStack_e0,&UNK_10f5ac734);
        appuStack_e0[0] = &PTR_FUN_110b3eac8;
        FUN_109d18484(0x1138334a8,appuStack_e0);
        __ZNSt13runtime_errorD2Ev(appuStack_e0);
        ___cxa_atexit(PTR___ZNSt13exception_ptrD1Ev_110346198,0x1138334a8,0x100000000);
        ___cxa_guard_release(0x1138334b0);
      }
    }
    __ZNSt13exception_ptrC1ERKS_(appuStack_e0,0x1138334a8);
    FUN_109d1a6b8(plVar6,appuStack_e0);
    __ZNSt13exception_ptrD1Ev(appuStack_e0);
    if (*plVar6 != 0) {
      func_0x0001092b4274(plVar6);
    }
  }
  return plVar6;
}



/* Entry: 109d17ed8; end: 109d17fd3;  */

long * FUN_109d17ed8(long *param_1)

{
  int iVar1;
  undefined **appuStack_30 [2];
  
  if (*param_1 != 0) {
    if ((bRam00000001138334b0 & 1) == 0) {
      iVar1 = 0x138334b0;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        __ZNSt13runtime_errorC2EPKc(appuStack_30,&UNK_10f5ac734);
        appuStack_30[0] = &PTR_FUN_110b3eac8;
        FUN_109d18484(0x1138334a8,appuStack_30);
        __ZNSt13runtime_errorD2Ev(appuStack_30);
        ___cxa_atexit(PTR___ZNSt13exception_ptrD1Ev_110346198,0x1138334a8,0x100000000);
        ___cxa_guard_release(0x1138334b0);
      }
    }
    __ZNSt13exception_ptrC1ERKS_(appuStack_30,0x1138334a8);
    FUN_109d1a6b8(param_1,appuStack_30);
    __ZNSt13exception_ptrD1Ev(appuStack_30);
    if (*param_1 != 0) {
      func_0x0001092b4274(param_1);
    }
  }
  return param_1;
}



/* Entry: 109d17fd4; end: 109d180db;  */

void FUN_109d17fd4(long param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lStack_50;
  long lStack_48;
  undefined **ppuStack_40;
  
  lStack_48 = param_2[2];
  lStack_50 = param_2[1];
  lVar8 = *param_2;
  plVar4 = (long *)(lVar8 + 0x10);
  lVar5 = param_2[3];
  do {
    lVar7 = *plVar4;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        ppuStack_40 = &PTR_PTR_1132fed68;
        FUN_109d1b624(lVar8 + 0x18,&lStack_50,lVar5);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plVar4 = (long *)(param_1 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar4 = (long *)*param_2;
        *param_2 = 0;
        if (plVar4 != (long *)0x0) {
          puVar1 = (ulong *)(plVar4 + 1);
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar6 & 0x1fffffffc) == 4) {
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
                    /* WARNING: Could not recover jumptable at 0x000109d180c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar4 + 8))();
              return;
            }
          }
        }
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) {
      return;
    }
  } while( true );
}



/* Entry: 109d180dc; end: 109d182ab;  */

void FUN_109d180dc(ulong *param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uStack_48;
  
  plVar8 = param_3 + param_2 * 5;
  uVar2 = *param_1;
  uVar6 = param_1[1];
  plVar5 = (long *)(uVar6 + 0x10);
  do {
    lVar7 = *plVar5;
    if (lVar7 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        *(ulong *)(uVar6 + 0x98) = param_2;
        *(undefined1 *)(uVar6 + 0xa0) = 1;
        *(undefined8 *)(uVar6 + 0x10) = 2;
        FUN_109d1b4dc(uVar6 + 0x18);
        __ZNSt3__15mutex4lockEv(param_1 + 3);
        plVar5 = (long *)*plVar8;
        *plVar8 = 0;
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar6 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar6 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar6 & 0x1fffffffc) == 4) {
            do {
              uVar6 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar6 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar6 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
        uVar6 = *param_1;
        if (uVar6 != 0) {
          uVar9 = 0;
          do {
            if ((param_2 != uVar9) && (*param_3 != 0)) {
              FUN_109d17fd4(param_1,param_3);
              uVar6 = *param_1;
            }
            uVar9 = uVar9 + 1;
            param_3 = param_3 + 5;
          } while (uVar9 < uVar6);
        }
        goto LAB_109d18254;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) {
      __ZNSt3__15mutex4lockEv(param_1 + 3);
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar6 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
LAB_109d18254:
      __ZNSt3__15mutex6unlockEv(param_1 + 3);
      puVar1 = param_1 + 2;
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 == uVar2 - 1) {
        uStack_48 = param_1[1];
        param_1[1] = 0;
        if (uStack_48 != 0) {
          func_0x0001092b4274(&uStack_48);
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 109d182ac; end: 109d183eb;  */

void FUN_109d182ac(long *param_1,long param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lStack_38;
  
  plVar4 = *(long **)(param_3 + param_2 * 0x28);
  *(undefined8 *)(param_3 + param_2 * 0x28) = 0;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  lVar5 = param_1[1];
  plVar4 = (long *)(lVar5 + 0x10);
  do {
    lVar7 = *plVar4;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        *(long *)(lVar5 + 0x98) = param_2;
        *(undefined1 *)(lVar5 + 0xa0) = 1;
        *(undefined8 *)(lVar5 + 0x10) = 2;
        FUN_109d1b4dc(lVar5 + 0x18);
        for (lVar5 = param_2; lVar5 != 0; lVar5 = lVar5 + -1) {
          FUN_109d17fd4(param_1,param_3);
          param_3 = param_3 + 0x28;
        }
LAB_109d1839c:
        plVar4 = param_1 + 2;
        do {
          lVar5 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar5 + (*param_1 - param_2);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == param_2) {
          lStack_38 = param_1[1];
          param_1[1] = 0;
          if (lStack_38 != 0) {
            func_0x0001092b4274(&lStack_38);
          }
        }
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_109d1839c;
  } while( true );
}



/* Entry: 109d183ec; end: 109d18483;  */

void FUN_109d183ec(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lStack_18;
  
  plVar3 = param_1 + 2;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 == *param_1 + -1) {
    lStack_18 = param_1[1];
    param_1[1] = 0;
    plVar3 = (long *)(lStack_18 + 0x10);
    do {
      lVar4 = *plVar3;
      if (lVar4 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = 2;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          FUN_109d1b4dc(lStack_18 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar4 >> 1 & 1) == 0);
    if (lStack_18 != 0) {
      func_0x0001092b4274(&lStack_18);
    }
  }
  return;
}



/* Entry: 109d18484; end: 109d184d3;  */

void FUN_109d18484(undefined8 param_1,undefined8 param_2)

{
  undefined **appuStack_30 [2];
  
  __ZNSt13runtime_errorC2ERKS_(appuStack_30,param_2);
  appuStack_30[0] = &PTR_FUN_110b3eac8;
  FUN_109d184d8(param_1,appuStack_30);
  __ZNSt13runtime_errorD2Ev(appuStack_30);
  return;
}



/* Entry: 109d184d4; end: 109d184d7;  */

void FUN_109d184d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109d184d8; end: 109d1853f;  */

void FUN_109d184d8(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC2ERKS_();
  *puVar2 = &PTR_FUN_110b3eac8;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d18520);
  (*pcVar1)();
}



/* Entry: 109d18540; end: 109d18553;  */

void FUN_109d18540(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d18554; end: 109d1857b;  */

void FUN_109d18554(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lStack_28;
  
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = 0;
  plVar1 = (long *)(lVar5 + 0x10);
  do {
    lVar4 = *plVar1;
    lStack_28 = lVar5;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar5 + 0x18);
        goto LAB_109d1a7c8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      if (lVar5 != 0) {
LAB_109d1a7c8:
        func_0x0001092b4274(&lStack_28,lVar5);
      }
      return;
    }
  } while( true );
}



/* Entry: 109d1857c; end: 109d1863b;  */

undefined8 FUN_109d1857c(void)

{
  int iVar1;
  undefined **appuStack_30 [2];
  
  if ((bRam00000001138334c0 & 1) == 0) {
    iVar1 = 0x138334c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      __ZNSt13runtime_errorC2EPKc(appuStack_30,&UNK_10f5ac742);
      appuStack_30[0] = &PTR_FUN_110b3eb08;
      FUN_109d1863c(0x1138334b8,appuStack_30);
      __ZNSt13runtime_errorD2Ev(appuStack_30);
      ___cxa_atexit(PTR___ZNSt13exception_ptrD1Ev_110346198,0x1138334b8,0x100000000);
      ___cxa_guard_release(0x1138334c0);
    }
  }
  return 0x1138334b8;
}



/* Entry: 109d1863c; end: 109d1868b;  */

void FUN_109d1863c(undefined8 param_1,undefined8 param_2)

{
  undefined **appuStack_30 [2];
  
  __ZNSt13runtime_errorC2ERKS_(appuStack_30,param_2);
  appuStack_30[0] = &PTR_FUN_110b3eb08;
  FUN_109d187cc(param_1,appuStack_30);
  __ZNSt13runtime_errorD2Ev(appuStack_30);
  return;
}


