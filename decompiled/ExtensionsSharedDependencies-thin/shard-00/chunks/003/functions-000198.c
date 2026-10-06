/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00475030; end: 00475177;  */

long FUN_00475030(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  char cStack_58;
  
  lVar3 = 0;
  param_3 = param_3 + 0x58;
  do {
    if (param_3 + -0x58 == param_4) {
      return lVar3;
    }
    if (param_2 <= *(long *)(param_3 + -0x40)) {
      auStack_70[0] = 0;
      cStack_58 = '\0';
      if (*(int *)(param_5 + 0x1c) == 2) {
        if (*(char *)(param_3 + 0x38) == '\x01') {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (auStack_88,"bundle_id=",param_3 + 0x20);
          func_0x00475358();
          goto LAB_004750ec;
        }
      }
      else if ((*(int *)(param_5 + 0x1c) == 1) && (*(char *)(param_3 + 0x18) == '\x01')) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_88,"conversation_id=",param_3);
        func_0x00475358();
LAB_004750ec:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
      }
      if (cStack_58 == '\x01') {
        puVar1 = auStack_70;
        FUN_00459c38(puVar1,param_1);
        uVar2 = (ulong)puVar1 & 0xffffffff;
      }
      else {
        uVar2 = 0;
      }
      lVar3 = uVar2 + lVar3;
      FUN_00457530(auStack_70);
    }
    param_3 = param_3 + 0x98;
  } while( true );
}



/* Entry: 00475178; end: 00475207;  */

void FUN_00475178(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined1 uStack_41;
  
  FUN_00475208(param_1,param_6 + param_4,&uStack_41);
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  if (param_4 != 0) {
    _memmove(plVar1,param_3,param_4);
  }
  if (param_6 != 0) {
    _memmove((long)plVar1 + param_4,param_5,param_6);
  }
  *(undefined1 *)((long)plVar1 + param_4 + param_6) = 0;
  return;
}



/* Entry: 00475208; end: 00475283;  */

ulong * FUN_00475208(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (param_2 < (ulong *)0x7ffffffffffffff7) {
    if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < param_2) {
      uVar1 = 0x19;
      if (((ulong)param_2 | 7) != 0x17) {
        uVar1 = ((ulong)param_2 | 7) + 1;
      }
      uVar2 = uVar1;
      __Znwm();
      param_1[1] = (ulong)param_2;
      param_1[2] = uVar1 | 0x8000000000000000;
      *param_1 = uVar2;
    }
    else {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      *(char *)((long)param_1 + 0x17) = (char)param_2;
    }
    return param_1;
  }
  FUN_0040d740();
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar3 = (ulong *)((long)(param_1[2] - *param_1) >> 2);
    if (puVar3 <= param_2) {
      puVar3 = param_2;
    }
    if (0x7ffffffffffffff7 < param_1[2] - *param_1) {
      puVar3 = (ulong *)0x1fffffffffffffff;
    }
    return puVar3;
  }
  FUN_0045cac8();
  FUN_004752f4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00475284; end: 004752c3;  */

long * FUN_00475284(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  FUN_0045cac8();
  FUN_004752f4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 004752c4; end: 004752f3;  */

long * FUN_004752c4(long *param_1)

{
  FUN_004752f4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 004752f4; end: 0047538f;  */

void FUN_004752f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 00475390; end: 00475487;  */

void FUN_00475390(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  ulong uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [16];
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_5 + 0x30) & 1) == 0) {
    func_0x00475488(&uStack_40);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_004755e4(&uStack_40);
  }
  else {
    uVar1 = *(ulong *)(param_5 + 8);
    if (*(char *)(param_5 + 0x10) == '\0') {
      uVar1 = 0;
    }
    uStack_48 = uVar1;
    if (uVar1 <= *(ulong *)(param_5 + 0x20)) {
      uStack_48 = *(ulong *)(param_5 + 0x20);
    }
    if (*(char *)(param_5 + 0x28) == '\0') {
      uStack_48 = uVar1;
    }
    func_0x004754a4(&uStack_40,param_2,param_3,&uStack_48);
    func_0x004754c0(auStack_58,param_5);
    func_0x004754e0(&uStack_70,auStack_58,&uStack_40,param_4);
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_00475ba0(&uStack_70);
    FUN_004759a0(auStack_58);
    FUN_0047585c(&uStack_40);
  }
  return;
}



/* Entry: 00475488; end: 004754fb;  */

void FUN_00475488(void)

{
  undefined1 uStack_11;
  
  FUN_004754fc(&uStack_11);
  return;
}



/* Entry: 004754fc; end: 0047556b;  */

void FUN_004754fc(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  FUN_00475bc4();
  uStack_28 = extraout_x8;
  FUN_0047556c(auStack_40,1);
  *puStack_30 = &PTR_FUN_009e79b8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_009e7968;
  func_0x00475bf4();
  func_0x004755d4();
  func_0x00475bd8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00475c58();
  FUN_0047558c();
  func_0x00475c64();
  return;
}



/* Entry: 0047556c; end: 0047558b;  */

void FUN_0047556c(void)

{
  func_0x00475c58();
  FUN_0047558c();
  func_0x00475c64();
  return;
}



/* Entry: 0047558c; end: 004755a7;  */

void FUN_0047558c(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 << 5);
    return;
  }
  FUN_0040cee8();
  *param_1 = &PTR_FUN_009e79b8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004755a8; end: 004755ab;  */

void FUN_004755a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e79b8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004755ac; end: 004755bf;  */

void FUN_004755ac(void)

{
  func_0x004755c8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004755c0; end: 004755e3;  */

void FUN_004755c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00475c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004755e4; end: 00475607;  */

void FUN_004755e4(long param_1)

{
  func_0x00475c38();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00475608; end: 00475687;  */

void FUN_00475608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_00475bc4();
  uStack_38 = extraout_x8;
  FUN_00475688(auStack_50,1);
  FUN_004756d4(uStack_40,param_2,param_3,param_4);
  func_0x00475bf4();
  FUN_0047584c();
  func_0x00475bd8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_0047584c(auStack_50);
  func_0x00475c44();
  func_0x00475c58();
  FUN_004756a8();
  func_0x00475c64();
  return;
}



/* Entry: 00475688; end: 004756a7;  */

void FUN_00475688(void)

{
  func_0x00475c58();
  FUN_004756a8();
  func_0x00475c64();
  return;
}



/* Entry: 004756a8; end: 004756d3;  */

undefined8 * FUN_004756a8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    puVar1 = (undefined8 *)(param_2 * 0x60);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e7a08;
  FUN_00475770(param_1 + 3);
  return param_1;
}



/* Entry: 004756d4; end: 0047570f;  */

undefined8 * FUN_004756d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e7a08;
  FUN_00475770(param_1 + 3);
  return param_1;
}



/* Entry: 00475710; end: 00475713;  */

void FUN_00475710(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7a08;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00475714; end: 00475727;  */

void FUN_00475714(void)

{
  FUN_00475804();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00475728; end: 0047576b;  */

undefined8 FUN_00475728(long param_1)

{
  undefined8 unaff_x19;
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x40);
  if (*plVar1 != 0) {
    FUN_00475810(plVar1);
    __ZdlPv(*plVar1);
  }
  func_0x0045e760(param_1 + 0x28);
  param_1 = param_1 + 0x18;
  func_0x0045e910();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 0047576c; end: 0047576f;  */

void FUN_0047576c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00475770; end: 00475803;  */

undefined8 *
FUN_00475770(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar8 = param_3[1];
  uVar7 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = *param_4;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[4] = uVar4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  func_0x0045e760(&uStack_40);
  func_0x0045dd5c(&uStack_30);
  return param_1;
}



/* Entry: 00475804; end: 0047580f;  */

void FUN_00475804(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7a08;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00475810; end: 0047584b;  */

void FUN_00475810(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x98;
    FUN_00474ca0();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 0047584c; end: 0047585b;  */

void FUN_0047584c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0047585c; end: 0047587f;  */

void FUN_0047585c(long param_1)

{
  func_0x00475c38();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00475880; end: 00475917;  */

void FUN_00475880(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  FUN_00475bc4();
  uStack_28 = extraout_x8;
  FUN_00475918(auStack_40,1);
  puVar1 = puStack_30;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_009e7a58;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  uVar7 = param_2[1];
  uVar6 = *param_2;
  puStack_30[3] = &PTR_FUN_009e7918;
  puStack_30[5] = uVar7;
  puStack_30[4] = uVar6;
  puStack_30[7] = uVar5;
  puStack_30[6] = uVar4;
  puStack_30[9] = uVar3;
  puStack_30[8] = uVar2;
  puStack_30 = (undefined8 *)0x0;
  *unaff_x19 = (long)(puVar1 + 3);
  unaff_x19[1] = (long)puVar1;
  func_0x00475990(auStack_40);
  func_0x00475bd8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00475c58();
  FUN_00475938();
  func_0x00475c64();
  return;
}



/* Entry: 00475918; end: 00475937;  */

void FUN_00475918(void)

{
  func_0x00475c58();
  FUN_00475938();
  func_0x00475c64();
  return;
}



/* Entry: 00475938; end: 00475963;  */

void FUN_00475938(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x50);
    return;
  }
  FUN_0040cee8();
  *param_1 = &PTR_FUN_009e7a58;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00475964; end: 00475967;  */

void FUN_00475964(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7a58;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00475968; end: 0047597b;  */

void FUN_00475968(void)

{
  func_0x00475984();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0047597c; end: 0047599f;  */

void FUN_0047597c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00475c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004759a0; end: 004759c3;  */

void FUN_004759a0(long param_1)

{
  func_0x00475c38();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004759c4; end: 00475a43;  */

void FUN_004759c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_00475bc4();
  uStack_38 = extraout_x8;
  FUN_00475a44(auStack_50,1);
  FUN_00475a94(uStack_40,param_2,param_3,param_4);
  func_0x00475bf4();
  func_0x00475b90();
  func_0x00475bd8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00475b90(auStack_50);
  func_0x00475c44();
  func_0x00475c58();
  FUN_00475a64();
  func_0x00475c64();
  return;
}



/* Entry: 00475a44; end: 00475a63;  */

void FUN_00475a44(void)

{
  func_0x00475c58();
  FUN_00475a64();
  func_0x00475c64();
  return;
}



/* Entry: 00475a64; end: 00475a93;  */

undefined8 * FUN_00475a64(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    puVar1 = (undefined8 *)(param_2 * 0x58);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e7aa8;
  FUN_00475af0(param_1 + 3);
  return param_1;
}



/* Entry: 00475a94; end: 00475acf;  */

undefined8 * FUN_00475a94(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e7aa8;
  FUN_00475af0(param_1 + 3);
  return param_1;
}



/* Entry: 00475ad0; end: 00475ad3;  */

void FUN_00475ad0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7aa8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00475ad4; end: 00475ae7;  */

void FUN_00475ad4(void)

{
  FUN_00475b84();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00475ae8; end: 00475aef;  */

void FUN_00475ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00475c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00475af0; end: 00475b83;  */

undefined8
FUN_00475af0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  func_0x00475c84(param_1,&uStack_30,&uStack_40,&uStack_50);
  func_0x0045a054(&uStack_50);
  FUN_0047585c(&uStack_40);
  func_0x00475b60(&uStack_30);
  return param_1;
}



/* Entry: 00475b84; end: 00475b9f;  */

void FUN_00475b84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7aa8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00475ba0; end: 00475bc3;  */

void FUN_00475ba0(long param_1)

{
  func_0x00475c38();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00475bc4; end: 00475cbb;  */

void FUN_00475bc4(void)

{
  return;
}



/* Entry: 00475cbc; end: 0047601b;  */

void FUN_00475cbc(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_240 [24];
  char cStack_228;
  undefined1 auStack_220 [80];
  char cStack_1d0;
  byte bStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [16];
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined1 uStack_140;
  undefined1 uStack_138;
  undefined1 uStack_134;
  undefined1 uStack_130;
  byte bStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined1 uStack_110;
  undefined1 uStack_108;
  undefined1 uStack_104;
  undefined1 uStack_100;
  byte bStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d4;
  undefined1 uStack_d0;
  byte bStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a0;
  byte bStack_98;
  
  uStack_178 = *(undefined8 *)(param_2 + 0x30);
  uStack_180 = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x30) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x30) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_00473d60(auStack_168,&uStack_180);
  puVar4 = &uStack_180;
  func_0x0045a054();
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_0045a1e8();
  if ((bStack_128 & 1) == 0) {
    bStack_128 = 1;
  }
  uStack_150 = 0;
  uStack_140 = 1;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  puStack_148 = puVar4;
  FUN_004749a8(auStack_220,param_3);
  puVar5 = auStack_168;
  FUN_0047429c(puVar5,0);
  if ((bStack_188 & 1) == 0) {
    uStack_158 = 1;
    goto LAB_00475ee4;
  }
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    if (cStack_1d0 == '\0') goto LAB_00475ee4;
    *(undefined1 *)(param_2 + 0x38) = 1;
LAB_00475d98:
    FUN_0045a1e8();
    if ((bStack_f8 & 1) == 0) {
      bStack_f8 = 1;
    }
    uStack_120 = 0;
    uStack_110 = 1;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    lVar6 = *(long *)(param_2 + 0x18);
    puStack_118 = puVar5;
    FUN_00462e1c(auStack_240,param_3);
    FUN_004760b8(lVar6,auStack_240);
    FUN_00457530(auStack_240);
    puVar5 = auStack_168;
    FUN_0047429c(puVar5,1);
    FUN_0045a1e8();
    if ((bStack_c8 & 1) == 0) {
      bStack_c8 = 1;
    }
    uStack_f0 = 0;
    uStack_e0 = 1;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    puStack_e8 = puVar5;
    (**(code **)(**(long **)(param_2 + 8) + 0x10))
              (auStack_240,*(long **)(param_2 + 8),auStack_220,lVar6 + 0x28,auStack_168);
    cVar2 = (char)param_1[3];
    if (cVar2 == cStack_228) {
      if (cVar2 != '\0') {
        if (*param_1 != 0) {
          param_1[1] = *param_1;
          __ZdlPv();
        }
        FUN_0047609c();
      }
    }
    else if (cVar2 == '\0') {
      FUN_0047609c();
      *(undefined1 *)(param_1 + 3) = 1;
    }
    else {
      FUN_0045cb80(param_1);
      *(undefined1 *)(param_1 + 3) = 0;
    }
    FUN_0045cb60(auStack_240);
    puVar5 = auStack_168;
    FUN_0047429c(puVar5,2);
  }
  else if (cStack_1d0 != '\0') goto LAB_00475d98;
  FUN_0045a1e8();
  if ((bStack_98 & 1) == 0) {
    bStack_98 = 1;
  }
  uStack_c0 = 0;
  uStack_b0 = 1;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  puStack_b8 = puVar5;
  FUN_00476380(*(undefined8 *)(param_2 + 0x18),auStack_220);
  FUN_0047429c(auStack_168,3);
LAB_00475ee4:
  func_0x00476034(auStack_220);
  FUN_00473dc0(auStack_168);
  return;
}



/* Entry: 0047601c; end: 0047601f;  */

undefined8 * FUN_0047601c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7af8;
  func_0x0045a054(param_1 + 5);
  FUN_0047585c(param_1 + 3);
  func_0x00475b60(param_1 + 1);
  return param_1;
}



/* Entry: 00476020; end: 00476053;  */

void FUN_00476020(void)

{
  FUN_00476054();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00476054; end: 0047609b;  */

undefined8 * FUN_00476054(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7af8;
  func_0x0045a054(param_1 + 5);
  FUN_0047585c(param_1 + 3);
  func_0x00475b60(param_1 + 1);
  return param_1;
}



/* Entry: 0047609c; end: 004760b7;  */

void FUN_0047609c(void)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[2] = in_stack_00000010;
  return;
}



/* Entry: 004760b8; end: 0047637f;  */

void FUN_004760b8(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_288 [24];
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined1 uStack_238;
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  long lStack_170;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  byte bStack_100;
  undefined1 auStack_f8 [8];
  long lStack_f0;
  undefined1 auStack_e8 [104];
  char cStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    func_0x00476adc();
    func_0x00476ab0();
    func_0x00461868(auStack_f8,*unaff_x19,param_1 - unaff_x19[4]);
    lStack_170 = 0;
    auStack_168[0] = 0;
    bStack_100 = 0;
    if (cStack_80 == '\0') {
      lVar4 = 0;
    }
    else {
      FUN_004580a8(auStack_168,auStack_e8);
      FUN_00457fc8(auStack_e8);
      lVar4 = lStack_170;
    }
    lStack_170 = lStack_f0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    lStack_1f0 = 0;
    uStack_180 = 0;
    lStack_f0 = lVar4;
    while ((((bStack_100 & 1) != 0 || ((uStack_180 & 1) != 0)) && (lStack_170 != lStack_1f0))) {
      if ((bStack_100 & 1) == 0) {
        uVar3 = *(undefined8 *)(lStack_170 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_78,lStack_170 + 0x58);
        FUN_00461b38(auStack_288,"expected row but query reported done. sql:",auStack_78);
        FUN_00641f40(uVar3,0x65,auStack_288);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
      }
      if (*(char *)(unaff_x20 + 0x18) == '\x01') {
        uVar1 = 0;
        FUN_00459c38();
        if ((uVar1 & 1) == 0) goto LAB_004761ec;
      }
      else {
LAB_004761ec:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_288,auStack_168);
        uStack_270 = uStack_150;
        uStack_268 = 0;
        uStack_238 = 0;
        FUN_00459e04(auStack_230,auStack_140);
        FUN_00459e04(auStack_210,auStack_120);
        uVar1 = unaff_x19[6];
        if (uVar1 < (ulong)unaff_x19[7]) {
          FUN_00474ba4(uVar1,auStack_288);
          lVar4 = uVar1 + 0x98;
          unaff_x19[6] = lVar4;
        }
        else {
          puVar2 = unaff_x19 + 5;
          FUN_00476670(puVar2,(long)(uVar1 - unaff_x19[5]) / 0x98 + 1);
          FUN_00476770(auStack_78,puVar2,(long)(unaff_x19[6] - unaff_x19[5]) / 0x98,unaff_x19 + 7);
          FUN_00474ba4(lStack_68,auStack_288);
          lStack_68 = lStack_68 + 0x98;
          FUN_004766d0(unaff_x19 + 5,auStack_78);
          lVar4 = unaff_x19[6];
          func_0x004768ec(auStack_78);
        }
        unaff_x19[6] = lVar4;
        FUN_00474ca0(auStack_288);
      }
      FUN_00457f20(&lStack_170);
    }
    func_0x00476ac0();
    FUN_00458184(auStack_168);
    FUN_00476a30(auStack_f8);
    *(undefined1 *)(unaff_x19 + 8) = 1;
  }
  return;
}



/* Entry: 00476380; end: 00476427;  */

void FUN_00476380(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  func_0x00476adc();
  auStack_60[0] = 0;
  uStack_48 = 0;
  FUN_004760b8();
  FUN_00457530(auStack_60);
  uVar3 = *(ulong *)(unaff_x19 + 0x28);
  uVar1 = *(ulong *)(unaff_x19 + 0x30);
  while ((uVar4 = uVar1, uVar3 != uVar1 &&
         (uVar2 = uVar3, FUN_00459c38(), uVar4 = uVar3, (uVar2 & 1) == 0))) {
    uVar3 = uVar3 + 0x98;
  }
  if (uVar4 == *(ulong *)(unaff_x19 + 0x30)) {
    func_0x004764dc((ulong *)(unaff_x19 + 0x28));
    func_0x00476428();
  }
  return;
}



/* Entry: 00476428; end: 00476517;  */

long FUN_00476428(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  if (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x30)) {
    func_0x00476ab0();
    lVar1 = *(long *)(param_1 + 0x28);
    for (lVar4 = lVar1;
        (lVar3 = *(long *)(param_1 + 0x30), lVar4 != *(long *)(param_1 + 0x30) &&
        (lVar3 = lVar4, *(long *)(lVar4 + 0x18) < lVar2 - *(long *)(param_1 + 0x20)));
        lVar4 = lVar4 + 0x98) {
    }
    if (lVar3 != lVar1) {
      if (lVar1 != lVar3) {
        FUN_00476958(lVar3,*(undefined8 *)(param_1 + 0x30),lVar1);
        FUN_00475810((long *)(param_1 + 0x28));
      }
      return lVar1;
    }
  }
  return lVar2;
}



/* Entry: 00476518; end: 0047654b;  */

void FUN_00476518(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_004765f0(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x98;
  return;
}



/* Entry: 0047654c; end: 004765ef;  */

long FUN_0047654c(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00476adc();
  FUN_00476670();
  FUN_00476770(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x98,unaff_x19 + 2);
  FUN_004765f0(lStack_48);
  lStack_48 = lStack_48 + 0x98;
  FUN_004766d0();
  lVar1 = unaff_x19[1];
  func_0x004768ec(auStack_58);
  return lVar1;
}



/* Entry: 004765f0; end: 0047666f;  */

void FUN_004765f0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00476adc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_00474b10(param_1 + 0x20,unaff_x20 + 0x20);
  FUN_00459e04(unaff_x19 + 0x58,unaff_x20 + 0x58);
  FUN_00459e04(unaff_x19 + 0x78,unaff_x20 + 0x78);
  return;
}



/* Entry: 00476670; end: 004766cf;  */

long * FUN_00476670(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0x1af286bca1af287) {
    uVar1 = (param_1[2] - *param_1) / 0x98;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xd79435e50d7942 < uVar1) {
      plVar2 = (long *)0x1af286bca1af286;
    }
    return plVar2;
  }
  FUN_0047675c();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x98) * 0x98;
  FUN_00476810(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 004766d0; end: 0047675b;  */

void FUN_004766d0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x98) * 0x98;
  FUN_00476810(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 0047675c; end: 0047676f;  */

long * FUN_0047675c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = "vector";
  FUN_0040d774();
  *(long *)((long)pcVar1 + 0x18) = 0;
  *(long *)((long)pcVar1 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x004767bc();
  }
  lVar2 = param_4 + param_3 * 0x98;
  *(long *)pcVar1 = param_4;
  *(long *)((long)pcVar1 + 8) = lVar2;
  *(long *)((long)pcVar1 + 0x10) = lVar2;
  *(long *)((long)pcVar1 + 0x18) = param_4 + param_2 * 0x98;
  return (long *)pcVar1;
}



/* Entry: 00476770; end: 004767df;  */

long * FUN_00476770(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x004767bc();
  }
  lVar1 = param_4 + param_3 * 0x98;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x98;
  return param_1;
}



/* Entry: 004767e0; end: 0047680f;  */

void FUN_004767e0(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x1af286bca1af287) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x98);
    return;
  }
  FUN_0040cee8();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x98) {
    FUN_00474ba4(param_4,uVar1);
    param_4 = lStack_48 + 0x98;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    FUN_00474ca0(param_2);
  }
  FUN_004768a8(&uStack_70);
  return;
}



/* Entry: 00476810; end: 004768a7;  */

void FUN_00476810(undefined8 param_1,long param_2,long param_3,long param_4)

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
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x98) {
    FUN_00474ba4(param_4,lVar1);
    param_4 = lStack_38 + 0x98;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    FUN_00474ca0(param_2);
  }
  FUN_004768a8(&uStack_60);
  return;
}



/* Entry: 004768a8; end: 00476917;  */

long FUN_004768a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x98;
      FUN_00474ca0();
    }
  }
  return param_1;
}



/* Entry: 00476918; end: 0047691f;  */

void FUN_00476918(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x98;
    FUN_00474ca0();
  }
  return;
}



/* Entry: 00476920; end: 00476957;  */

void FUN_00476920(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x98;
    FUN_00474ca0();
  }
  return;
}



/* Entry: 00476958; end: 00476983;  */

void FUN_00476958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_00476984(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 00476984; end: 004769df;  */

undefined1  [16] FUN_00476984(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    FUN_004769e0(lVar1,param_2);
    lVar1 = lVar1 + 0x98;
    param_4 = param_4 + 0x98;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 004769e0; end: 00476a2f;  */

long FUN_004769e0(long param_1,long param_2)

{
  FUN_004575b8();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_00473b94(param_1 + 0x20,param_2 + 0x20);
  FUN_004575fc(param_1 + 0x58,param_2 + 0x58);
  FUN_004575fc(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



/* Entry: 00476a30; end: 00476aa7;  */

undefined8 * FUN_00476a30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 0xf) != '\0') {
    FUN_00457fc8(param_1 + 2);
  }
  FUN_00458184((ulong)&uStack_a0 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_00648ea0(uVar1);
  FUN_00458184(param_1 + 2);
  return param_1;
}



/* Entry: 00476aa8; end: 00476ae7;  */

void FUN_00476aa8(void)

{
  return;
}



/* Entry: 00476ae8; end: 00476b1b;  */

undefined8 * FUN_00476ae8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_009e7b38;
  puVar1 = param_1;
  FUN_00478394();
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 00476b1c; end: 00476b6f;  */

void FUN_00476b1c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00476b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 8))
            ((long *)**(undefined8 **)(param_1 + 8),param_2,1);
  return;
}



/* Entry: 00476b70; end: 00476bbb;  */

void FUN_00476b70(long param_1)

{
  long *plVar1;
  undefined1 auStack_80 [96];
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    func_0x004772cc();
    (**(code **)(*plVar1 + 0x10))(plVar1,auStack_80,1);
    func_0x004772bc();
  }
  return;
}



/* Entry: 00476bbc; end: 00476dc7;  */

void FUN_00476bbc(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_130 [40];
  undefined1 uStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  FUN_00425cb4(auStack_e8,"scn_notifications");
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x10))();
  if ((uint)plVar1 < 0x31) {
    pcVar2 = (&PTR_s_api_call_count_009e7be8)[(ulong)plVar1 & 0xffffffff];
  }
  else {
    pcVar2 = "unknown";
  }
  FUN_00425cb4(auStack_100,pcVar2);
  (**(code **)(*param_2 + 0x20))();
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if ((lVar3 == lVar4) || (((lVar4 - lVar3) / 0x18 & 1U) != 0)) {
    auStack_130[0] = 0;
    uStack_108 = 0;
  }
  else {
    lVar5 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0x3f800000;
    for (lVar6 = 0; lVar6 != (lVar4 - lVar3) / 0x18; lVar6 = lVar6 + 2) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_a0,lVar3 + lVar5);
      FUN_00476e9c(auStack_88,auStack_a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_d0,*param_2 + lVar5 + 0x18);
      FUN_00476e9c(auStack_b8,auStack_d0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
      FUN_00476f08(&uStack_70,auStack_88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
      lVar3 = *param_2;
      lVar4 = param_2[1];
      lVar5 = lVar5 + 0x30;
    }
    FUN_00465ac8(auStack_130,&uStack_70);
    func_0x00459d84(&uStack_70);
  }
  FUN_004771f4(param_1,auStack_e8,auStack_100,auStack_130);
  FUN_00459de4(auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  return;
}



/* Entry: 00476dc8; end: 00476e2b;  */

void FUN_00476dc8(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined1 auStack_80 [96];
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    func_0x004772cc();
    (**(code **)(*plVar1 + 0x18))(plVar1,auStack_80,(long)((double)*param_3 / 1000000.0));
    func_0x004772bc();
  }
  return;
}



/* Entry: 00476e2c; end: 00476e7b;  */

void FUN_00476e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_80 [96];
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    func_0x004772cc();
    (**(code **)(*plVar1 + 0x20))(plVar1,auStack_80,param_3);
    func_0x004772bc();
  }
  return;
}



/* Entry: 00476e7c; end: 00476e7f;  */

undefined8 * FUN_00476e7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7ba0;
  func_0x0045eb8c(param_1 + 1);
  return param_1;
}



/* Entry: 00476e80; end: 00476e93;  */

void FUN_00476e80(void)

{
  func_0x00477280();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00476e94; end: 00476e9b;  */

undefined8 FUN_00476e94(void)

{
  return 1;
}



/* Entry: 00476e9c; end: 00476f07;  */

void FUN_00476e9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((long)*(char *)((long)param_2 + 0x17) < 0) {
    puVar3 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)((long)puVar3 + param_2[1]);
  }
  else {
    puVar2 = (undefined8 *)((long)param_2 + (long)*(char *)((long)param_2 + 0x17));
    puVar3 = param_2;
  }
  for (; puVar3 != puVar2; puVar3 = (undefined8 *)((long)puVar3 + 1)) {
    uVar1 = *(undefined1 *)puVar3;
    ___tolower();
    *(undefined1 *)puVar3 = uVar1;
  }
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 00476f08; end: 00476f3b;  */

long FUN_00476f08(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_00476f3c(param_1,param_2,&UNK_008000a0,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 00476f3c; end: 00477177;  */

undefined1  [16]
FUN_00476f3c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1 + 3;
  FUN_004597c4();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    puVar9 = (undefined1 *)((long)plVar8 + -1);
    if (((ulong)plVar8 & (ulong)puVar9) == 0) {
      unaff_x27 = (long *)((ulong)puVar9 & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)unaff_x27 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_0047700c;
          plVar2 = (long *)plVar7[1];
          if (plVar2 != plVar6) break;
          plVar2 = plVar7 + 2;
          FUN_00459c38(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar1 = 0;
            goto LAB_00477144;
          }
        }
        if (((ulong)plVar8 & (ulong)puVar9) == 0) {
          plVar2 = (long *)((ulong)plVar2 & (ulong)puVar9);
        }
        else if (plVar8 <= plVar2) {
          uVar3 = 0;
          if (plVar8 != (long *)0x0) {
            uVar3 = (ulong)plVar2 / (ulong)plVar8;
          }
          plVar2 = (long *)((long)plVar2 - uVar3 * (long)plVar8);
        }
      } while (plVar2 == unaff_x27);
    }
  }
LAB_0047700c:
  FUN_00477178(aplStack_78,param_1,plVar6,param_3,param_4,param_5);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar3 = 1;
    if ((long *)((long)&MACH_HEADER.magic + 2) < plVar8) {
      uVar3 = (ulong)(((ulong)plVar8 & (ulong)((long)plVar8 + -1)) != 0);
    }
    uVar3 = uVar3 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    FUN_00459320(param_1,uVar3);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (ulong)((long)plVar8 + -1)) == 0) {
      unaff_x27 = (long *)((ulong)((long)plVar8 + -1) & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
      }
    }
  }
  plVar7 = aplStack_78[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (ulong)((long)plVar8 + -1)) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (ulong)((long)plVar8 + -1));
      }
      else if (plVar8 <= plVar6) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
      }
      *(long **)(lVar4 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_00459cdc(aplStack_78);
  uVar1 = 1;
LAB_00477144:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 00477178; end: 004771d7;  */

void FUN_00477178(undefined8 *param_1,long param_2,qword param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  qword *pqVar1;
  
  pqVar1 = &segment_command_00000020.vmsize;
  __Znwm();
  *param_1 = pqVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *pqVar1 = 0;
  pqVar1[1] = param_3;
  FUN_004771d8(pqVar1 + 2,*param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 004771d8; end: 004771f3;  */

void FUN_004771d8(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 004771f4; end: 004772af;  */

undefined8 *
FUN_004771f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_00463b54(param_1 + 6,param_4);
  return param_1;
}



/* Entry: 004772b0; end: 00477323;  */

void FUN_004772b0(void)

{
  return;
}



/* Entry: 00477324; end: 0047738b;  */

long FUN_00477324(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x004779f8();
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  FUN_0047738c();
  func_0x00477404(param_1 + 0x100,param_3);
  return param_1;
}



/* Entry: 0047738c; end: 0047745f;  */

long FUN_0047738c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  FUN_00463600(param_1 + 0x48,param_2 + 0x48);
  _memcpy(param_1 + 0x68,param_2 + 0x68,0x58);
  FUN_00463600(param_1 + 0xc0,param_2 + 0xc0);
  FUN_00463600(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



/* Entry: 00477460; end: 004775ef;  */

void FUN_00477460(void)

{
  undefined ***pppuVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x00477a40();
  func_0x004772e0(auStack_60,(ulong)*(uint *)(unaff_x20 + 0x40) | 0x100000000);
  plVar2 = (long *)*unaff_x19;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_FUN_009e5290;
  uStack_80 = 0;
  uStack_68 = 6;
  FUN_00425cb4(auStack_a0,"NotifSource");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b8,auStack_60);
  pppuVar1 = &ppuStack_88;
  FUN_00470964(pppuVar1,auStack_a0,auStack_b8);
  FUN_00425cb4(auStack_d0,"NotifType");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e8,auStack_48);
  FUN_00470964(pppuVar1,auStack_d0,auStack_e8);
  (**(code **)(*plVar2 + 0x18))(plVar2,pppuVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  FUN_004590f8(&ppuStack_88);
  plVar2 = *(long **)(unaff_x20 + 0x100);
  (**(code **)(*plVar2 + 0x10))();
  if ((int)plVar2 != 0) {
    FUN_004775f0();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  func_0x00477a94();
  return;
}



/* Entry: 004775f0; end: 004779c3;  */

void FUN_004775f0(void)

{
  undefined1 *puVar1;
  undefined8 *unaff_x19;
  long *plVar2;
  long unaff_x20;
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [88];
  undefined1 auStack_48 [24];
  
  puVar1 = auStack_230;
  func_0x00477a40();
  FUN_00479ff0(auStack_a0,unaff_x20 + 0x48);
  func_0x00477ab0();
  FUN_00425cb4(auStack_d0);
  func_0x00477aa4();
  func_0x0047a2b8();
  func_0x00477a9c(auStack_b8);
  func_0x00477a84();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  func_0x00477ab0();
  FUN_00425cb4(auStack_e8);
  func_0x00477aa4();
  func_0x0047a2b8();
  func_0x00477a9c(auStack_d0);
  func_0x00477a84();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  func_0x00477ab0();
  FUN_00425cb4(auStack_100);
  func_0x00477aa4();
  func_0x0047a2b8();
  func_0x00477a9c(auStack_e8);
  func_0x00477a84();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  func_0x00477ab0();
  FUN_00425cb4(auStack_118);
  func_0x00477aa4();
  func_0x0047a2b8();
  func_0x00477a9c(auStack_100);
  func_0x00477a84();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  plVar2 = (long *)*unaff_x19;
  uStack_130 = 0;
  uStack_128 = 0;
  ppuStack_140 = &PTR_FUN_009e5290;
  uStack_138 = 0;
  uStack_120 = 7;
  FUN_00425cb4(auStack_158,"NotifType");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_170,auStack_48);
  FUN_00470964(&ppuStack_140,auStack_158,auStack_170);
  FUN_00425cb4(auStack_188,"campaign_type");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1a0,auStack_b8);
  func_0x00477a8c();
  FUN_00425cb4(auStack_1b8,"user_l7");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1d0,auStack_d0);
  func_0x00477a8c();
  FUN_00425cb4(auStack_1e8,"user_region");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_200,auStack_e8);
  func_0x00477a8c();
  FUN_00425cb4(auStack_218,"task_source");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_230,auStack_100);
  func_0x00477a8c();
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_230);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_218);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  FUN_004590f8(&ppuStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  FUN_00463628(auStack_a0);
  func_0x00477a94();
  return;
}



/* Entry: 004779c4; end: 00477abb;  */

ulong * FUN_004779c4(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  char *pcVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  
  if ((char)param_2[3] == '\x01') {
    uVar9 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar9;
    param_1[2] = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    return param_1;
  }
  pcVar5 = "unset";
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < pcVar5) {
    FUN_0040d740();
    plVar8 = *(long **)((long)pcVar5 + 8);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return (ulong *)pcVar5;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pcVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)pcVar5 | 7);
    }
    puVar6 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = (ulong)pcVar5;
    param_1[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)pcVar5;
    puVar6 = param_1;
    if ((ulong *)pcVar5 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,"unset",pcVar5);
LAB_00425d3c:
  *(char *)((long)puVar6 + (long)pcVar5) = '\0';
  return param_1;
}



/* Entry: 00477abc; end: 00477b4f;  */

undefined4 * FUN_00477abc(undefined4 *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  *param_1 = *(undefined4 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 1) = 1;
  uVar2 = *(ulong *)(param_2 + 0x20);
  if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
    uVar2 = (ulong)*(byte *)(param_2 + 0x2f);
  }
  puVar1 = &UNK_00803f20;
  if (uVar2 != 0) {
    puVar1 = (undefined *)(param_2 + 0x18);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 2,puVar1);
  if (*(char *)(param_2 + 0x60) == '\x01') {
    uVar2 = *(ulong *)(param_2 + 0x50);
    if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
      uVar2 = (ulong)*(byte *)(param_2 + 0x5f);
    }
    *(ulong *)(param_1 + 8) = uVar2;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return param_1;
}



/* Entry: 00477b50; end: 00477f1f;  */

void FUN_00477b50(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  long *plVar5;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [32];
  undefined4 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x004772e0(auStack_80,*param_1);
  plVar5 = (long *)*param_2;
  func_0x00477f28();
  uStack_88 = 4;
  FUN_00425cb4(auStack_c0,"NotifSource");
  func_0x00477f38(auStack_d8);
  puVar3 = auStack_a8;
  FUN_00470964(puVar3,auStack_c0,auStack_d8);
  FUN_00425cb4(auStack_f0,"NotifType");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_108,param_1 + 1);
  FUN_00470964(puVar3,auStack_f0,auStack_108);
  uVar1 = *(uint *)(param_1 + 6);
  if (uVar1 >> 0x12 < 3) {
    pcVar4 = (&PTR_s_notifrecvresult_00b04d18)[uVar1 >> 0x10];
  }
  else {
    pcVar4 = "invalid_dim_name";
  }
  FUN_00425cb4(auStack_68,pcVar4);
  if ((uVar1 & 0xffff) < 0x24) {
    pcVar4 = (&PTR_s_ready_00b04d78)[uVar1 & 0xffff];
  }
  else {
    pcVar4 = "invalid_dimension_value";
  }
  FUN_0045a3ec(puVar3,auStack_68,pcVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  (**(code **)(*plVar5 + 0x18))(plVar5,puVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  func_0x00477f20();
  if (*(int *)(param_1 + 6) == 2) {
    plVar5 = (long *)*param_2;
    func_0x00477f28();
    uStack_88 = 5;
    FUN_00425cb4(auStack_120,"NotifSource");
    func_0x00477f38(auStack_138);
    puVar3 = auStack_a8;
    FUN_00470964(puVar3,auStack_120,auStack_138);
    FUN_0047487c();
    FUN_00425cb4(auStack_150,"ErrorCode");
    if (*(char *)((long)param_1 + 0x3c) == '\x01') {
      uVar2 = *(undefined4 *)(param_1 + 7);
    }
    else {
      uVar2 = 0xffffffff;
    }
    __ZNSt3__19to_stringEi(auStack_168,uVar2);
    FUN_00470964(puVar3,auStack_150,auStack_168);
    (**(code **)(*plVar5 + 0x18))(plVar5,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
    func_0x00477f20();
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    plVar5 = (long *)*param_2;
    func_0x00477f28();
    uStack_88 = 0xc;
    FUN_00425cb4(auStack_180,"NotifSource");
    func_0x00477f38(auStack_198);
    puVar3 = auStack_a8;
    FUN_00470964(puVar3,auStack_180,auStack_198);
    FUN_00425cb4(auStack_1b0,"NotifType");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_1c8,param_1 + 1);
    FUN_00470964(puVar3,auStack_1b0,auStack_1c8);
    (**(code **)(*plVar5 + 0x28))(plVar5,puVar3,param_1[4]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
    func_0x00477f20();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  return;
}



/* Entry: 00477f20; end: 00477f3f;  */

undefined8 * FUN_00477f20(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x98) = &PTR_DAT_009e5308;
  func_0x00459128(unaff_x29 + -0x90);
  return (undefined8 *)(unaff_x29 + -0x98);
}



/* Entry: 00477f40; end: 00477f9f;  */

long FUN_00477f40(long param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 8) = 1;
  uVar1 = *(ulong *)(param_2 + 0x20);
  if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x2f);
  }
  puVar2 = &UNK_00803f20;
  if (uVar1 != 0) {
    puVar2 = (undefined *)(param_2 + 0x18);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x10,puVar2);
  return param_1;
}



/* Entry: 00477fa0; end: 00478383;  */

void FUN_00477fa0(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined ***pppuVar3;
  char *pcVar4;
  long *plVar5;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x004772e0(auStack_90,*(undefined8 *)(param_1 + 1));
  plVar5 = (long *)*param_2;
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b8 = &PTR_FUN_009e5290;
  uStack_b0 = 0;
  uStack_98 = 8;
  FUN_00425cb4(auStack_d0,"NotifSource");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e8,auStack_90);
  pppuVar3 = &ppuStack_b8;
  FUN_00470964(pppuVar3,auStack_d0,auStack_e8);
  FUN_00425cb4(auStack_100,"NotifState");
  FUN_0045a3ec(pppuVar3,auStack_100,(&PTR_s_Received_009e7da8)[*param_1]);
  FUN_00425cb4(auStack_118,"NotifType");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_130,param_1 + 4);
  FUN_00470964(pppuVar3,auStack_118,auStack_130);
  uVar1 = param_1[10];
  if (uVar1 >> 0x12 < 3) {
    pcVar4 = (&PTR_s_notifrecvresult_00b04d18)[uVar1 >> 0x10];
  }
  else {
    pcVar4 = "invalid_dim_name";
  }
  FUN_00425cb4(auStack_78,pcVar4);
  if ((uVar1 & 0xffff) < 0x24) {
    pcVar4 = (&PTR_s_ready_00b04d78)[uVar1 & 0xffff];
  }
  else {
    pcVar4 = "invalid_dimension_value";
  }
  FUN_0045a3ec(pppuVar3,auStack_78,pcVar4);
  FUN_00478384();
  (**(code **)(*plVar5 + 0x18))(plVar5,pppuVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  func_0x0047838c();
  if (param_1[10] == 0x2000b) {
    plVar5 = (long *)*param_2;
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b8 = &PTR_FUN_009e5290;
    uStack_b0 = 0;
    uStack_98 = 0xb;
    FUN_00425cb4(auStack_148,"NotifSource");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_160,auStack_90)
    ;
    pppuVar3 = &ppuStack_b8;
    FUN_00470964(pppuVar3,auStack_148,auStack_160);
    FUN_00425cb4(auStack_178,"NotifState");
    FUN_0045a3ec(pppuVar3,auStack_178,(&PTR_s_Received_009e7da8)[*param_1]);
    uVar1 = param_1[0xb];
    if (uVar1 < 0xc0000) {
      pcVar4 = (&PTR_s_notifrecvresult_00b04d18)[uVar1 >> 0x10];
    }
    else {
      pcVar4 = "invalid_dim_name";
    }
    FUN_00425cb4(auStack_78,pcVar4);
    if ((uVar1 & 0xffff) < 0x24) {
      pcVar4 = (&PTR_s_ready_00b04d78)[uVar1 & 0xffff];
    }
    else {
      pcVar4 = "invalid_dimension_value";
    }
    FUN_0045a3ec(pppuVar3,auStack_78,pcVar4);
    FUN_00478384();
    FUN_00425cb4(auStack_190,"ErrorCode");
    if ((char)param_1[0xd] == '\x01') {
      iVar2 = param_1[0xc];
    }
    else {
      iVar2 = -1;
    }
    __ZNSt3__19to_stringEi(auStack_1a8,iVar2);
    FUN_00470964(pppuVar3,auStack_190,auStack_1a8);
    (**(code **)(*plVar5 + 0x18))(plVar5,pppuVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_190);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
    func_0x0047838c();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  return;
}



/* Entry: 00478384; end: 00478393;  */

void FUN_00478384(void)

{
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (unaff_x29 + -0x68);
  return;
}



/* Entry: 00478394; end: 00478433;  */

undefined8 FUN_00478394(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam0000000000b65dc8 & 1) == 0) {
    iVar1 = 0xb65dc8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_00478434(auStack_68);
      puVar2 = auStack_68;
      FUN_00526440();
      puRam0000000000b65dc0 = puVar2;
      FUN_00478914(auStack_68);
      ___cxa_guard_release(0xb65dc8);
    }
  }
  return 0xb65dc0;
}



/* Entry: 00478434; end: 00478913;  */

void FUN_00478434(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 auStack_4d0 [1152];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_00425cb4(&uStack_4e8,"SCN_NOTIFICATIONS");
  FUN_00425cb4(&uStack_500,"");
  FUN_00425cb4(auStack_4d0,"API_CALL_COUNT");
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944();
  FUN_00478944(auStack_4d0);
  func_0x004618e0(&uStack_520,auStack_4d0,0x31);
  param_1[1] = uStack_4e0;
  *param_1 = uStack_4e8;
  param_1[2] = uStack_4d8;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  param_1[4] = uStack_4f8;
  param_1[3] = uStack_500;
  param_1[5] = uStack_4f0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  param_1[7] = uStack_518;
  param_1[6] = uStack_520;
  param_1[8] = uStack_510;
  uStack_518 = 0;
  uStack_510 = 0;
  uStack_520 = 0;
  func_0x00459128(&uStack_520);
  lVar3 = 0x480;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4d0 + lVar3);
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != -0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_500);
  puVar1 = &uStack_4e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = auStack_50;
  lVar3 = -0x498;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
    puVar2 = puVar2 + -0x18;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_500);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_4e8);
  __Unwind_Resume(puVar1);
  func_0x00459128(puVar1 + 6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1 + 3);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (puVar1);
  return;
}


