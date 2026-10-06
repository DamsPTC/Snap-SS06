/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10729f2a0; end: 10729f437;  */

void FUN_10729f2a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined ***pppuStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined ***pppuStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined8 **)(param_1 + 8);
  uStack_98 = *param_3;
  lStack_90 = param_3[1];
  if (lStack_90 == 0) {
    lStack_78 = 0;
    lStack_a0 = 0;
    uStack_a8 = uStack_98;
  }
  else {
    plVar1 = (long *)(lStack_90 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_a0 = param_3[1];
    uStack_a8 = *param_3;
    lStack_78 = lStack_90;
  }
  pppuStack_70 = &ppuStack_88;
  ppuStack_88 = &PTR_SUB_110998da8;
  pppuStack_50 = &ppuStack_68;
  if (lStack_a0 != 0) {
    plVar1 = (long *)(lStack_a0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_68 = &PTR_FUN_110998e28;
  if (lStack_a0 != 0) {
    plVar1 = (long *)(lStack_a0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pppuStack_30 = &ppuStack_48;
  uStack_b8 = *param_3;
  lStack_b0 = param_3[1];
  if (lStack_b0 != 0) {
    plVar1 = (long *)(lStack_b0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_48 = &PTR_FUN_110998ea8;
  if (lStack_b0 != 0) {
    plVar1 = (long *)(lStack_b0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_80 = uStack_98;
  uStack_60 = uStack_a8;
  lStack_58 = lStack_a0;
  uStack_40 = uStack_b8;
  lStack_38 = lStack_b0;
  (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,&ppuStack_88);
  FUN_10729f578(&ppuStack_88);
  func_0x00010729f5a8(&uStack_b8);
  func_0x00010729f5a8(&uStack_a8);
  puVar4 = &uStack_98;
  func_0x00010729f5a8();
  func_0x00010729fca0(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10729f578(&ppuStack_88);
    func_0x00010729f5a8(&uStack_b8);
    func_0x00010729f5a8(&uStack_a8);
    func_0x00010729f5a8(&uStack_98);
    __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010729fc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)puVar4[1] + 0x18))();
    return;
  }
  return;
}



/* Entry: 10729f438; end: 10729f443;  */

void FUN_10729f438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010729fc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x18))();
  return;
}



/* Entry: 10729f444; end: 10729f55f;  */

void FUN_10729f444(undefined8 param_1,long param_2)

{
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  undefined1 auStack_38 [24];
  
  (**(code **)(*(long *)**(undefined8 **)(param_2 + 8) + 0x48))(auStack_38);
  func_0x0001078d97f0(&uStack_c0,auStack_38,3);
  uStack_78 = uStack_b8;
  uStack_80 = uStack_c0;
  uStack_68 = uStack_a8;
  uStack_70 = uStack_b0;
  uStack_60 = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_50 = uStack_90;
  uStack_58 = uStack_98;
  uStack_48 = uStack_88;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x00010729f5d0(&uStack_c0);
  func_0x0001078786d8(auStack_f0,&uStack_80,1);
  func_0x0001078a910c(auStack_d8,auStack_f0);
  func_0x00010bd48068(param_1,auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  FUN_10729fbac(auStack_f0);
  func_0x00010729f5d0(&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10729f560; end: 10729f563;  */

undefined8 * FUN_10729f560(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_110998cf8;
  puVar2 = param_1;
  func_0x00010785f1f4();
  uVar1 = (int)puVar2 + 0x5b0;
  FUN_10724e330();
  if ((uVar1 & 0x101) != 0x100) {
    (**(code **)(**(long **)param_1[1] + 0x18))();
  }
  return param_1;
}



/* Entry: 10729f564; end: 10729f577;  */

void FUN_10729f564(void)

{
  FUN_10729f6b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10729f578; end: 10729f66f;  */

long * FUN_10729f578(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x0001006393ec(param_1 + 8);
  func_0x0001006393ec(param_1 + 4);
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10729f670; end: 10729f677;  */

void FUN_10729f670(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000104be7d74();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10729f678; end: 10729f6b3;  */

void FUN_10729f678(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x18;
    func_0x000104be7d74();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10729f6b4; end: 10729f70f;  */

undefined8 * FUN_10729f6b4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_110998cf8;
  puVar2 = param_1;
  func_0x00010785f1f4();
  uVar1 = (int)puVar2 + 0x5b0;
  FUN_10724e330();
  if ((uVar1 & 0x101) != 0x100) {
    (**(code **)(**(long **)param_1[1] + 0x18))();
  }
  return param_1;
}



/* Entry: 10729f710; end: 10729f79f;  */

undefined1 * FUN_10729f710(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_10729f7a0(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_FUN_110998d58;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_110998cf8;
  puStack_30[4] = param_3;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x00010729f82c();
  func_0x00010729fca0(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_10729f7c8();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10729f7a0; end: 10729f7c7;  */

long FUN_10729f7a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10729f7c8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10729f7c8; end: 10729f7f3;  */

void FUN_10729f7c8(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110998d58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10729f7f4; end: 10729f7f7;  */

void FUN_10729f7f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110998d58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10729f7f8; end: 10729f80b;  */

void FUN_10729f7f8(void)

{
  func_0x00010729f81c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10729f80c; end: 10729f83b;  */

void FUN_10729f80c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010729f814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10729f83c; end: 10729f8cf;  */

long FUN_10729f83c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10729f8d0; end: 10729f8e3;  */

void FUN_10729f8d0(void)

{
  func_0x00010729f8a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10729f8e4; end: 10729f917;  */

void FUN_10729f8e4(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010729fc40();
  func_0x00010729fc4c(&PTR_SUB_110998da8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010729fcb4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10729f918; end: 10729f973;  */

void FUN_10729f918(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_110998da8;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010729fcb4(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10729f974; end: 10729f99f;  */

void FUN_10729f974(undefined8 param_1,undefined8 param_2)

{
  func_0x00010729fc84(param_2,param_1,&PTR_DAT_110998e08);
  func_0x00010729fc6c();
  return;
}



/* Entry: 10729f9a0; end: 10729f9ab;  */

undefined ** FUN_10729f9a0(void)

{
  return &PTR_DAT_110998e08;
}



/* Entry: 10729f9ac; end: 10729f9d3;  */

undefined8 FUN_10729f9ac(undefined8 param_1)

{
  func_0x00010729fc7c(&PTR_FUN_110998e28);
  return param_1;
}



/* Entry: 10729f9d4; end: 10729f9e7;  */

void FUN_10729f9d4(void)

{
  FUN_10729f9ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10729f9e8; end: 10729fa1b;  */

void FUN_10729f9e8(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010729fc40();
  func_0x00010729fc4c(&PTR_FUN_110998e28);
  if (extraout_x8 != 0) {
    do {
      func_0x00010729fcb4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10729fa1c; end: 10729fa6f;  */

void FUN_10729fa1c(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110998e28;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010729fcb4(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10729fa70; end: 10729fa9b;  */

void FUN_10729fa70(undefined8 param_1,undefined8 param_2)

{
  func_0x00010729fc84(param_2,param_1,&PTR_DAT_110998e88);
  func_0x00010729fc6c();
  return;
}



/* Entry: 10729fa9c; end: 10729faa7;  */

undefined ** FUN_10729fa9c(void)

{
  return &PTR_DAT_110998e88;
}



/* Entry: 10729faa8; end: 10729facf;  */

undefined8 FUN_10729faa8(undefined8 param_1)

{
  func_0x00010729fc7c(&PTR_FUN_110998ea8);
  return param_1;
}



/* Entry: 10729fad0; end: 10729fae3;  */

void FUN_10729fad0(void)

{
  FUN_10729faa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10729fae4; end: 10729fb17;  */

void FUN_10729fae4(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010729fc40();
  func_0x00010729fc4c(&PTR_FUN_110998ea8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010729fcb4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10729fb18; end: 10729fb73;  */

void FUN_10729fb18(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110998ea8;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010729fcb4(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10729fb74; end: 10729fb9f;  */

void FUN_10729fb74(undefined8 param_1,undefined8 param_2)

{
  func_0x00010729fc84(param_2,param_1,&PTR_DAT_110998f08);
  func_0x00010729fc6c();
  return;
}



/* Entry: 10729fba0; end: 10729fbab;  */

undefined ** FUN_10729fba0(void)

{
  return &PTR_DAT_110998f08;
}



/* Entry: 10729fbac; end: 10729fc37;  */

uint * FUN_10729fbac(uint *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (((ulong)*param_1 * (ulong)param_1[1] & 0x3fffffffffffffff) != 0) {
    lVar4 = (ulong)param_1[1] * (ulong)*param_1;
    lVar5 = lVar4 * 4;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        lRam0000000113823db0 = lRam0000000113823db0 + lVar4 * -4;
      }
    } while (cVar2 != '\0');
    lVar4 = 0;
    if (lVar5 != 0) {
      lVar4 = (long)(0x1f - (int)LZCOUNT((int)lVar5));
    }
    piVar1 = (int *)(lVar4 * 4 + 0x113823db8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10724e5b8(param_1 + 2);
  return param_1;
}



/* Entry: 10729fc38; end: 10729fcc3;  */

void FUN_10729fc38(void)

{
  return;
}



/* Entry: 10729fcc4; end: 10729fd0b;  */

undefined8 *
FUN_10729fcc4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  puVar1 = param_1 + 2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1072a03f4(puVar1,param_3);
  param_1[6] = param_4;
  *(undefined1 *)(param_1 + 7) = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[8] = puVar1;
  return param_1;
}



/* Entry: 10729fd0c; end: 1072a02ab;  */

void FUN_10729fd0c(ulong *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  code *pcVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  byte *pbVar17;
  undefined4 uVar18;
  int iVar19;
  long *plVar20;
  long lVar21;
  uint uVar22;
  byte bVar23;
  double dVar24;
  double dVar25;
  uint6 uVar26;
  double dVar27;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  undefined8 uVar28;
  byte bVar34;
  undefined1 auStack_1d8 [24];
  ulong uStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [24];
  undefined8 uStack_170;
  undefined4 uStack_168;
  int aiStack_160 [2];
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined1 auStack_138 [24];
  long lStack_120;
  int iStack_118;
  undefined4 uStack_114;
  undefined4 uStack_108;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1[7] & 1) == 0) {
    plVar16 = (long *)*param_1;
    func_0x00010002b838(&lStack_120,PTR_DAT_1131acfe0);
    (**(code **)(*plVar16 + 0x38))(plVar16,&lStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_120);
    plVar20 = (long *)*param_1;
    func_0x00010002b838(&uStack_1c0,PTR_DAT_1131acfe8);
    (**(code **)(*plVar20 + 0x68))(&lStack_120,plVar20,&uStack_1c0);
    FUN_1072a02ac(auStack_188,&lStack_120,&UNK_10de2a1e0);
    func_0x0001001148fc(&lStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1c0);
    lStack_1a0 = 0;
    lStack_198 = 0;
    uStack_190 = 0;
    FUN_106886424(auStack_a8,&DAT_10f68e8ee);
    FUN_106886398(&lStack_1a0,auStack_188,auStack_a8,1);
    FUN_10688c9f8(auStack_a8);
    lVar2 = lStack_198;
    lVar21 = lStack_1a0;
    if (lStack_198 - lStack_1a0 == 0xa8) {
      lVar13 = 8;
    }
    else {
      lVar13 = (lStack_198 - lStack_1a0) / 0x18;
      lVar13 = (lVar13 + -1) / 7 + lVar13;
    }
    puVar10 = &uStack_1c0;
    FUN_10726207c(puVar10,lVar13,&lStack_120,auStack_138,&uStack_150);
    for (; lVar21 != lVar2; lVar21 = lVar21 + 0x18) {
      Hint_Prefetch(uStack_1c0,0,2,0);
      puVar9 = &uStack_1c0;
      FUN_1072a02f8(uStack_1c0,puVar9,lVar21);
      uVar6 = uStack_1b0;
      uVar11 = uStack_1c0;
      lVar13 = 0;
      uVar14 = uStack_1c0 >> 0xc ^ (ulong)puVar9 >> 7;
      bVar5 = (byte)puVar9;
      uVar26 = CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(bVar5,CONCAT12(bVar5,CONCAT11(bVar5,bVar5)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar14 = uVar14 & uVar6;
        uVar28 = *(undefined8 *)(uVar11 + uVar14);
        cVar29 = (char)((ulong)uVar28 >> 8);
        cVar30 = (char)((ulong)uVar28 >> 0x10);
        cVar31 = (char)((ulong)uVar28 >> 0x18);
        cVar32 = (char)((ulong)uVar28 >> 0x20);
        cVar33 = (char)((ulong)uVar28 >> 0x28);
        bVar23 = (byte)((ulong)uVar28 >> 0x30);
        bVar34 = (byte)((ulong)uVar28 >> 0x38);
        for (uVar15 = CONCAT17(-(bVar34 == (bVar5 & 0x7f)),
                               CONCAT16(-(bVar23 == (bVar5 & 0x7f)),
                                        CONCAT15(-(cVar33 == (char)(uVar26 >> 0x28)),
                                                 CONCAT14(-(cVar32 == (char)(uVar26 >> 0x20)),
                                                          CONCAT13(-(cVar31 ==
                                                                    (char)(uVar26 >> 0x18)),
                                                                   CONCAT12(-(cVar30 ==
                                                                             (char)(uVar26 >> 0x10))
                                                                            ,CONCAT11(-(cVar29 ==
                                                                                       (char)(uVar26
                                                                                             >> 8)),
                                                                                      -((char)uVar28
                                                                                       == (char)
                                                  uVar26)))))))) & 0x8080808080808080; uVar15 != 0;
            uVar15 = uVar15 - 1 & uVar15) {
          uVar4 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          puVar10 = (ulong *)(lStack_1b8 +
                             (uVar14 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar6)
                             * 0x38);
          FUN_107283140(puVar10,lVar21);
          if (((ulong)puVar10 & 1) != 0) goto LAB_10729ff20;
        }
        bVar23 = NEON_umaxv(CONCAT17(-(bVar34 == 0x80),
                                     CONCAT16(-(bVar23 == 0x80),
                                              CONCAT15(-(cVar33 == -0x80),
                                                       CONCAT14(-(cVar32 == -0x80),
                                                                CONCAT13(-(cVar31 == -0x80),
                                                                         CONCAT12(-(cVar30 == -0x80)
                                                                                  ,CONCAT11(-(cVar29
                                                                                             == 
                                                  -0x80),-((char)uVar28 == -0x80)))))))),1);
        if ((bVar23 & 1) != 0) break;
        lVar13 = lVar13 + 8;
        uVar14 = lVar13 + uVar14;
      }
      puVar10 = &uStack_1c0;
      FUN_107262a38(puVar10,puVar9);
      puVar10 = (ulong *)(lStack_1b8 + (long)puVar10 * 0x38);
      FUN_107262e9c(puVar10,lVar21);
LAB_10729ff20:
    }
    uVar22 = 0;
    lVar2 = param_2[1];
    for (lVar21 = *param_2; lVar21 != lVar2; lVar21 = lVar21 + 0x58) {
      func_0x0001072a05d0();
      uVar7 = uVar22;
      if (((int)puVar10 != 0) &&
         (uVar7 = *(uint *)(lVar21 + 0x3c), (int)*(uint *)(lVar21 + 0x3c) <= (int)uVar22)) {
        uVar7 = uVar22;
      }
      uVar22 = uVar7;
    }
    lVar2 = param_2[1];
    dVar25 = 0.0;
    uVar18 = 0xffffffff;
    for (lVar21 = *param_2; lVar21 != lVar2; lVar21 = lVar21 + 0x58) {
      func_0x0001072a05d0();
      if (((ulong)puVar10 & 1) != 0) {
        pbVar3 = *(byte **)(lVar21 + 0x48);
        dVar27 = 0.0;
        for (pbVar17 = *(byte **)(lVar21 + 0x40); pbVar17 != pbVar3; pbVar17 = pbVar17 + 0x10) {
          if (pbVar17[0xc] == 1) {
            puVar10 = (ulong *)(ulong)(*(int *)(lVar21 + 0x38) - (uint)*pbVar17);
            dVar24 = 1.0;
            _ldexp();
            dVar27 = dVar27 + dVar24;
          }
        }
        uVar18 = *(undefined4 *)(lVar21 + 0x38);
        iVar19 = 0;
        if (*(int *)(lVar21 + 0x3c) != 0) {
          iVar19 = (int)uVar22 / *(int *)(lVar21 + 0x3c);
        }
        dVar25 = dVar25 + (double)iVar19 * dVar27;
      }
    }
    if (0 < (int)uVar22) {
      dVar27 = 0.66;
      if (((ulong)plVar16 & 0x100000000) != 0) {
        dVar27 = (double)(int)plVar16 / 100.0;
      }
      if ((double)(long)(dVar27 * (double)uVar22) <= dVar25) {
        *(undefined1 *)(param_1 + 7) = 1;
        __ZNSt3__16chrono12steady_clock3nowEv();
        uVar14 = param_1[8];
        uVar11 = param_1[6];
        func_0x0001077c3744(auStack_1d8);
        lVar21 = (long)((long)puVar10 - uVar14) / 1000;
        lStack_b0 = lVar21;
        func_0x0001077f3c4c();
        func_0x0001077f3790();
        lStack_120._0_4_ = 0xc;
        uStack_108 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uVar14 = uVar11;
        func_0x0001072a0588();
        func_0x0001072a05ac();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_138,auStack_1d8);
        FUN_10726e300(uVar14,&UNK_10f408c1e,auStack_138);
        puVar1 = (undefined8 *)(uVar11 + 8);
        uStack_150 = *puVar1;
        uStack_148 = 3;
        func_0x00010743f9dc(puVar1,uVar14,&lStack_b0,&uStack_150,7);
        puVar12 = auStack_138;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12);
        func_0x0001072a05c0();
        lStack_120 = CONCAT44(lStack_120._4_4_,0x23);
        uStack_108 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        func_0x0001072a0588();
        func_0x0001072a05ac();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&uStack_150,auStack_1d8);
        FUN_10726e300(puVar12,&UNK_10f408c1e,&uStack_150);
        iVar19 = (int)((dVar25 / (double)uVar22) * 100.0);
        uStack_158 = 0;
        uStack_170 = *puVar1;
        uStack_168 = 3;
        aiStack_160[0] = iVar19;
        func_0x00010743fa44(puVar1,puVar12,aiStack_160,&uStack_170,7);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
        func_0x0001072a05c0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d8);
        lStack_120 = lVar21 * 1000;
        iStack_118 = 0;
        if (iVar19 != -1) {
          iStack_118 = iVar19;
        }
        plVar16 = (long *)param_1[5];
        uStack_114 = uVar18;
        if (plVar16 == (long *)0x0) goto LAB_1072a01e0;
        (**(code **)(*plVar16 + 0x30))(plVar16,&lStack_120);
      }
    }
    FUN_107261dac(&uStack_1c0);
    func_0x0001000e30f4(&lStack_1a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
LAB_1072a01e0:
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1072a01e8);
  (*pcVar8)();
}



/* Entry: 1072a02ac; end: 1072a02db;  */

void FUN_1072a02ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1);
  return;
}



/* Entry: 1072a02dc; end: 1072a02f7;  */

bool FUN_1072a02dc(long param_1)

{
  FUN_1072a0454();
  return param_1 != 0;
}



/* Entry: 1072a02f8; end: 1072a0317;  */

void FUN_1072a02f8(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uStack_11;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  func_0x0001000df1ac(&uStack_11,puVar2,uVar1);
  return;
}



/* Entry: 1072a0318; end: 1072a0373;  */

long FUN_1072a0318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x00010002b838(auStack_38);
  FUN_1072a0374(param_1 + 0x20,auStack_38,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return param_1;
}



/* Entry: 1072a0374; end: 1072a03f3;  */

undefined8 FUN_1072a0374(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  __ZNSt3__19to_stringEi(auStack_58,param_3);
  FUN_10726e37c(param_1,&uStack_40,auStack_58);
  FUN_1072a057c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  return param_1;
}



/* Entry: 1072a03f4; end: 1072a0453;  */

long FUN_1072a03f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1072a0454; end: 1072a048f;  */

long FUN_1072a0454(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  Hint_Prefetch(*param_1,0,2,0);
  uVar8 = param_2;
  func_0x000104c2fe38(*param_1);
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ uVar8 >> 7;
  bVar3 = (byte)uVar8;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      lVar4 = uVar1 + uVar9 * 0x38;
      func_0x000104c32db4(lVar4,param_2);
      if ((int)lVar4 != 0) {
        return *param_1 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 1072a0490; end: 1072a057b;  */

long FUN_1072a0490(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ param_3 >> 7;
  bVar3 = (byte)param_3;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      lVar4 = uVar1 + uVar9 * 0x38;
      func_0x000104c32db4(lVar4,param_2);
      if ((int)lVar4 != 0) {
        return *param_1 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 1072a057c; end: 1072a05db;  */

void FUN_1072a057c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 1072a05dc; end: 1072a0747;  */

void FUN_1072a05dc(float param_1,float param_2,undefined8 *param_3,undefined8 param_4,uint param_5,
                  undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 extraout_x8;
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x0001072aff9c();
  *param_3 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_3 + 1);
  *(float *)(unaff_x19 + 0x20) = param_1;
  *(float *)(unaff_x19 + 0x24) = param_2;
  uVar1 = (ulong)(param_1 / (float)param_5);
  uVar3 = (ulong)(param_2 / (float)param_5);
  *(ulong *)(unaff_x19 + 0x28) = uVar1;
  *(ulong *)(unaff_x19 + 0x30) = uVar3;
  *(double *)(unaff_x19 + 0x38) = (double)((float)uVar1 / param_1);
  *(double *)(unaff_x19 + 0x40) = (double)((float)uVar3 / param_2);
  FUN_1072ab680(unaff_x19 + 0x48,param_8);
  uVar2 = *param_6;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
  uVar2 = *param_6;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
  uVar2 = *param_6;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = uVar2;
  uVar2 = *param_6;
  *(undefined8 *)(unaff_x19 + 0xd0) = 0;
  *(undefined8 *)(unaff_x19 + 0xd8) = 0;
  *(undefined8 *)(unaff_x19 + 0xe0) = 0;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0xf0) = 0;
  *(undefined8 *)(unaff_x19 + 0x108) = 0;
  *(undefined8 *)(unaff_x19 + 0x100) = 0;
  *(undefined8 *)(unaff_x19 + 0x118) = 0;
  *(undefined8 *)(unaff_x19 + 0x110) = 0;
  FUN_1072a0748((undefined8 *)(unaff_x19 + 0x90),
                *(long *)(unaff_x19 + 0x30) * *(long *)(unaff_x19 + 0x28));
  FUN_1072a0748((undefined8 *)(unaff_x19 + 0xb0),
                *(long *)(unaff_x19 + 0x30) * *(long *)(unaff_x19 + 0x28));
  FUN_1072a0748((undefined8 *)(unaff_x19 + 0xd0),
                *(long *)(unaff_x19 + 0x30) * *(long *)(unaff_x19 + 0x28));
  func_0x0001072afd70();
  FUN_1072a0778();
  FUN_1072a07f4();
  FUN_1072a0860();
  return;
}



/* Entry: 1072a0748; end: 1072a0777;  */

void FUN_1072a0748(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auStack_48 [40];
  
  uVar4 = param_1[1] - *param_1 >> 5;
  if (param_2 <= uVar4) {
    if (uVar4 <= param_2) {
      return;
    }
    func_0x0001072af9fc(param_1,*param_1 + param_2 * 0x20);
    while (param_1 != unaff_x19) {
      param_1 = param_1 + -4;
      FUN_1072a65f8();
    }
    *(long **)(unaff_x20 + 8) = unaff_x19;
    return;
  }
  param_2 = param_2 - uVar4;
  func_0x0001072afc24();
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 5)) {
    func_0x0001072afc30();
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = puVar3 + param_2 * 4;
    for (lVar5 = param_2 << 5; lVar5 != 0; lVar5 = lVar5 + -0x20) {
      lVar6 = param_1[3];
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = lVar6;
      puVar3 = puVar3 + 4;
    }
    param_1[1] = (long)puVar1;
    return;
  }
  plVar2 = unaff_x19;
  FUN_1072a61b4();
  FUN_1072a6268(auStack_48,plVar2,unaff_x19[1] - *unaff_x19 >> 5,unaff_x19 + 3);
  FUN_1072a61f4(auStack_48);
  func_0x0001072afc08();
  FUN_1072a6228();
  func_0x0001072a6684(auStack_48);
  return;
}



/* Entry: 1072a0778; end: 1072a07f3;  */

long * FUN_1072a0778(long *param_1,ulong param_2)

{
  int iVar1;
  long alStack_48 [5];
  
  if ((ulong)((param_1[2] - *param_1) / 0x140) < param_2) {
    if (0xcccccccccccccc < param_2) {
      FUN_1072a6730();
      func_0x0001072afbb0();
      func_0x0001072a6be8();
      func_0x0001072afaac();
      if ((bRam00000001131ad1c0 & 1) == 0) {
        iVar1 = 0x131ad1c0;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          FUN_1072a6c6c(0x1131ad0f0);
          ___cxa_guard_release(0x1131ad1c0);
        }
      }
      return (long *)0x1131ad0f0;
    }
    func_0x0001072affb0();
    param_1 = alStack_48;
    FUN_1072a6778(param_1);
    func_0x0001072afc08();
    FUN_1072a673c();
    func_0x0001072afd68();
  }
  return param_1;
}



/* Entry: 1072a07f4; end: 1072a085f;  */

undefined8 FUN_1072a07f4(void)

{
  int iVar1;
  
  if ((bRam00000001131ad1c0 & 1) == 0) {
    iVar1 = 0x131ad1c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1072a6c6c(0x1131ad0f0);
      ___cxa_guard_release(0x1131ad1c0);
    }
  }
  return 0x1131ad0f0;
}



/* Entry: 1072a0860; end: 1072a08c3;  */

void FUN_1072a0860(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  long *unaff_x20;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001072afc24();
  uStack_30 = 1;
  uStack_38 = param_1;
  uStack_28 = param_2;
  __ZNSt3__119__shared_mutex_base4lockEv();
  (**(code **)(*unaff_x20 + 0x10))();
  FUN_1072a6c94(unaff_x19 + 0xa8,unaff_x20,&uStack_28);
  func_0x000104c305a0(&uStack_38);
  return;
}



/* Entry: 1072a08c4; end: 1072a091b;  */

void FUN_1072a08c4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x0001072aff9c();
  *param_1 = extraout_x8;
  FUN_1072a07f4();
  FUN_1072a091c();
  func_0x0001072a70c8(unaff_x19 + 0xd0);
  func_0x0001072a70c8(unaff_x19 + 0xb0);
  func_0x0001072a70c8(unaff_x19 + 0x90);
  FUN_1072a712c(unaff_x19 + 0x70);
  func_0x0001072b0570();
  func_0x0001072b0504();
  return;
}



/* Entry: 1072a091c; end: 1072a098f;  */

void FUN_1072a091c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 auStack_30 [2];
  
  func_0x0001072afc24();
  auStack_30[0] = param_1;
  func_0x0001072b01dc();
  __ZNSt3__119__shared_mutex_base4lockEv();
  plVar1 = unaff_x20;
  (**(code **)(*unaff_x20 + 0x10))();
  lVar2 = unaff_x19 + 0xa8;
  FUN_1072a71c4(lVar2,plVar1);
  if ((lVar2 != 0) && (*(long **)(lVar2 + 0x28) == unaff_x20)) {
    FUN_1072a7288(unaff_x19 + 0xa8);
  }
  func_0x000104c305a0(auStack_30);
  return;
}



/* Entry: 1072a0990; end: 1072a0993;  */

void FUN_1072a0990(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x0001072aff9c();
  *param_1 = extraout_x8;
  FUN_1072a07f4();
  FUN_1072a091c();
  func_0x0001072a70c8(unaff_x19 + 0xd0);
  func_0x0001072a70c8(unaff_x19 + 0xb0);
  func_0x0001072a70c8(unaff_x19 + 0x90);
  FUN_1072a712c(unaff_x19 + 0x70);
  func_0x0001072b0570();
  func_0x0001072b0504();
  return;
}



/* Entry: 1072a0994; end: 1072a09a7;  */

void FUN_1072a0994(void)

{
  FUN_1072a08c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072a09a8; end: 1072a09af;  */

long FUN_1072a09a8(long param_1)

{
  return param_1 + 8;
}



/* Entry: 1072a09b0; end: 1072a0a73;  */

void FUN_1072a09b0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  ulong extraout_x9;
  ulong uVar4;
  long unaff_x21;
  long unaff_x22;
  ulong uVar5;
  
  func_0x0001072b0014();
  func_0x0001072afd90();
  FUN_1072a0a74();
  uVar1 = param_1;
  func_0x0001072b0248(*(undefined4 *)(unaff_x21 + 4));
  uVar2 = uVar1;
  func_0x0001072b0548(*(undefined4 *)(unaff_x21 + 8));
  uVar3 = uVar2;
  func_0x0001072b0248(*(undefined4 *)(unaff_x21 + 0xc));
  for (; uVar5 = uVar1, param_1 <= uVar2; param_1 = param_1 + 1) {
    for (; uVar5 <= uVar3; uVar5 = uVar5 + 1) {
      func_0x0001072afea0(*(undefined8 *)(unaff_x22 + 0x90));
      func_0x0001072afeac(*(undefined8 *)(unaff_x22 + 0x90));
      func_0x0001072afe8c(*(undefined8 *)(unaff_x22 + 0x90));
      uVar4 = *(ulong *)(unaff_x22 + 0xf0);
      if (uVar4 <= (ulong)(extraout_x8 >> 3)) {
        uVar4 = extraout_x9;
      }
      *(ulong *)(unaff_x22 + 0xf0) = uVar4;
    }
  }
  *(long *)(unaff_x22 + 0xf8) = *(long *)(unaff_x22 + 0xf8) + 1;
  FUN_1072a0b18();
  return;
}



/* Entry: 1072a0a74; end: 1072a0a9b;  */

uint FUN_1072a0a74(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(param_2 + 0x28) - 1;
  uVar2 = (uint)(*(double *)(param_2 + 0x38) * (double)param_1);
  if ((int)uVar1 <= (int)uVar2) {
    uVar2 = uVar1;
  }
  return uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 1072a0a9c; end: 1072a0b17;  */

long *** FUN_1072a0a9c(long ***param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long **pplVar3;
  long **pplVar4;
  long unaff_x19;
  long unaff_x20;
  long **pplStack_48;
  long lStack_40;
  long lStack_38;
  long **pplStack_30;
  long **pplStack_28;
  
  pplVar3 = *param_1;
  uVar1 = (long)param_1[2] - (long)pplVar3 >> 3;
  uVar2 = uVar1 <= param_2;
  if (uVar1 < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_1072a6528();
      func_0x0001072afbb0();
      FUN_1072a73e0();
      func_0x0001072afaac();
      func_0x0001072afa9c();
      if ((bool)uVar2) {
        FUN_1072a7570();
      }
      else {
        FUN_1072a7544();
        param_1 = (long ***)(unaff_x20 + 0x140);
      }
      *(long ****)(unaff_x19 + 8) = param_1;
      return param_1 + -0x28;
    }
    pplVar4 = param_1[1];
    param_1 = param_1 + 3;
    pplStack_28 = (long **)param_1;
    FUN_1072a6534();
    lStack_40 = (long)param_1 + ((long)pplVar4 - (long)pplVar3);
    pplStack_30 = (long **)(param_1 + param_2);
    pplStack_48 = (long **)param_1;
    lStack_38 = lStack_40;
    func_0x0001072afc08();
    FUN_1072a73ac();
    param_1 = &pplStack_48;
    FUN_1072a73e0(param_1);
  }
  return param_1;
}



/* Entry: 1072a0b18; end: 1072a0b4b;  */

long FUN_1072a0b18(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072afa9c();
  if ((bool)in_CY) {
    FUN_1072a7570();
  }
  else {
    FUN_1072a7544();
    param_1 = unaff_x20 + 0x140;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x140;
}



/* Entry: 1072a0b4c; end: 1072a0c2f;  */

void FUN_1072a0b4c(float param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  ulong extraout_x9;
  ulong uVar4;
  float *unaff_x21;
  long unaff_x22;
  ulong uVar5;
  
  func_0x0001072b0014();
  func_0x0001072afd90();
  FUN_1072a0a74(param_1 - *(float *)(param_4 + 8));
  uVar1 = param_2;
  func_0x0001072b0248(unaff_x21[1] - unaff_x21[2]);
  uVar2 = uVar1;
  func_0x0001072b0548(*unaff_x21 + unaff_x21[2]);
  uVar3 = uVar2;
  func_0x0001072b0248(unaff_x21[1] + unaff_x21[2]);
  for (; uVar5 = uVar1, param_2 <= uVar2; param_2 = param_2 + 1) {
    for (; uVar5 <= uVar3; uVar5 = uVar5 + 1) {
      func_0x0001072afea0(*(undefined8 *)(unaff_x22 + 0xb0));
      func_0x0001072afeac(*(undefined8 *)(unaff_x22 + 0xb0));
      func_0x0001072afe8c(*(undefined8 *)(unaff_x22 + 0xb0));
      uVar4 = *(ulong *)(unaff_x22 + 0x100);
      if (uVar4 <= (ulong)(extraout_x8 >> 3)) {
        uVar4 = extraout_x9;
      }
      *(ulong *)(unaff_x22 + 0x100) = uVar4;
    }
  }
  *(long *)(unaff_x22 + 0x108) = *(long *)(unaff_x22 + 0x108) + 1;
  FUN_1072a0c30();
  return;
}



/* Entry: 1072a0c30; end: 1072a0c63;  */

long FUN_1072a0c30(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072afa9c();
  if ((bool)in_CY) {
    FUN_1072a7660();
  }
  else {
    FUN_1072a7634();
    param_1 = unaff_x20 + 0x140;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x140;
}



/* Entry: 1072a0c64; end: 1072a0db7;  */

void FUN_1072a0c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  ulong extraout_x9;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_a0 [24];
  long lStack_88;
  
  uVar1 = param_5;
  FUN_1072a0db8(param_5,param_7);
  lStack_88 = (*(long *)(param_5 + 0x78) - *(long *)(param_5 + 0x70)) / 0x140;
  func_0x0001072b04fc();
  func_0x0001072b0548();
  uVar2 = param_5;
  func_0x0001072a0a88(param_2);
  uVar3 = param_5;
  func_0x0001072a0a74(param_3);
  uVar4 = param_5;
  func_0x0001072a0a88(param_4);
  for (; uVar6 = uVar2, uVar1 <= uVar3; uVar1 = uVar1 + 1) {
    for (; uVar6 <= uVar4; uVar6 = uVar6 + 1) {
      func_0x0001072afea0(*(undefined8 *)(param_5 + 0xd0));
      func_0x0001072afeac(*(undefined8 *)(param_5 + 0xd0));
      func_0x0001072afe8c(*(undefined8 *)(param_5 + 0xd0));
      uVar5 = *(ulong *)(param_5 + 0x110);
      if (uVar5 <= (ulong)(extraout_x8 >> 3)) {
        uVar5 = extraout_x9;
      }
      *(ulong *)(param_5 + 0x110) = uVar5;
    }
  }
  *(long *)(param_5 + 0x118) = *(long *)(param_5 + 0x118) + 1;
  FUN_1072a77dc(auStack_a0,param_7);
  FUN_1072a0ea4((long *)(param_5 + 0x70),param_6,auStack_a0);
  FUN_1072a7938(auStack_a0);
  return;
}



/* Entry: 1072a0db8; end: 1072a0e5f;  */

bool FUN_1072a0db8(undefined8 param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  
  lVar3 = *param_2;
  uVar8 = param_2[1] - lVar3 >> 3;
  if (uVar8 < 3) {
    return false;
  }
  bVar6 = 0;
  pfVar9 = (float *)(lVar3 + 4);
  uVar10 = 1;
  fVar11 = 0.0;
  do {
    bVar7 = uVar10 - uVar8 == 1;
    if (bVar7) {
      return bVar7;
    }
    uVar4 = 0;
    if (uVar10 != uVar8) {
      uVar4 = uVar10;
    }
    pfVar1 = (float *)(lVar3 + uVar4 * 8);
    uVar10 = uVar10 + 1;
    uVar4 = 0;
    if (uVar8 != 0) {
      uVar4 = uVar10 / uVar8;
    }
    pfVar2 = (float *)(lVar3 + (uVar10 - uVar4 * uVar8) * 8);
    fVar12 = -((*pfVar1 - pfVar9[-1]) * (pfVar2[1] - *pfVar9)) +
             (pfVar1[1] - *pfVar9) * (*pfVar2 - pfVar9[-1]);
    bVar5 = (bool)(bVar6 & fVar11 * fVar12 < 0.0);
    pfVar9 = pfVar9 + 2;
    bVar6 = 1;
    fVar11 = fVar12;
  } while (!bVar5);
  return bVar7;
}



/* Entry: 1072a0e60; end: 1072a0ea3;  */

ulong FUN_1072a0e60(undefined8 param_1)

{
  ulong *puStack_30;
  undefined8 *puStack_28;
  undefined8 uStack_20;
  ulong uStack_18;
  
  uStack_18 = 0x7f8000007f800000;
  uStack_20 = 0xff800000ff800000;
  puStack_30 = &uStack_18;
  puStack_28 = &uStack_20;
  FUN_1072ab700(param_1,&puStack_30);
  return uStack_18 & 0xffffffff;
}



/* Entry: 1072a0ea4; end: 1072a0ed7;  */

long FUN_1072a0ea4(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072afa9c();
  if ((bool)in_CY) {
    FUN_1072a7714();
  }
  else {
    FUN_1072a76e8();
    param_1 = unaff_x20 + 0x140;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x140;
}



/* Entry: 1072a0ed8; end: 1072a0f4f;  */

void FUN_1072a0ed8(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long extraout_x9;
  ulong uVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  long unaff_x28;
  ulong uStack_180;
  undefined1 auStack_150 [48];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_48 [40];
  
  func_0x0001072afe1c();
  if ((ulong)(extraout_x9 / 0x120) < param_2) {
    if (0xe38e38e38e38e3 < param_2) {
      FUN_1072a795c();
      func_0x0001072afbb0();
      func_0x0001072a7b1c();
      func_0x0001072afaac();
      uVar12 = param_1;
      FUN_1072a1a88();
      if ((uVar12 & 1) == 0) {
        uVar12 = param_1;
        func_0x0001072a1ad0(param_1,param_2);
        if ((int)uVar12 == 0) {
          uVar12 = param_1;
          FUN_1072a0a74();
          uVar5 = param_1;
          func_0x0001072a0a88();
          uVar6 = param_1;
          FUN_1072a0a74();
          uVar7 = param_1;
          func_0x0001072a0a88();
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_d0 = 0x3f800000;
          func_0x0001072abda8(&uStack_f0,*(undefined8 *)(param_1 + 0xf8));
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_100 = 0x3f800000;
          func_0x0001072abda8(&uStack_120,*(undefined8 *)(param_1 + 0x108));
          func_0x0001072b0660();
          func_0x0001072abda8(auStack_150,*(undefined8 *)(param_1 + 0x118));
          while (uStack_180 = uVar5, uVar12 <= uVar6) {
            for (; uStack_180 <= uVar7; uStack_180 = uStack_180 + 1) {
              bVar13 = false;
              lVar15 = uVar12 + *(long *)(param_1 + 0x28) * uStack_180;
              plVar1 = (long *)(*(long *)(param_1 + 0x90) + lVar15 * 0x20);
              lVar2 = plVar1[1];
              for (lVar14 = *plVar1; lVar14 != lVar2; lVar14 = lVar14 + 8) {
                if (param_5 == 0) {
LAB_1072a10cc:
                  puVar9 = &uStack_f0;
                  func_0x0001072b0558(puVar9);
                  func_0x0001072b0550();
                  func_0x0001072b0530();
                  uVar10 = param_2;
                  func_0x0001078756d8(param_2,puVar9);
                  if ((int)uVar10 != 0) {
                    func_0x0001072b0320();
                    uVar8 = param_3;
                    func_0x0001072a1bc0();
                    if ((int)uVar8 == 1) goto LAB_1072a123c;
                    bVar13 = true;
                  }
                }
                else {
                  puVar9 = &uStack_f0;
                  func_0x0001072b0560();
                  if (puVar9 == (undefined8 *)0x0) goto LAB_1072a10cc;
                }
              }
              func_0x0001072b025c(*(undefined8 *)(param_1 + 0xb0));
              for (; lVar14 != unaff_x28; lVar14 = lVar14 + 8) {
                func_0x0001072b0270();
                if (param_5 == 0) {
LAB_1072a1140:
                  puVar9 = &uStack_120;
                  func_0x0001072aff48(puVar9);
                  func_0x0001072b0550();
                  func_0x0001072b0540();
                  uVar10 = param_1;
                  FUN_1072a1be4(param_1,puVar9,param_2);
                  if ((int)uVar10 != 0) {
                    uVar10 = param_1;
                    func_0x0001072a1b1c(param_1,puVar9);
                    iVar3 = (int)uVar10;
                    func_0x0001072af934();
                    func_0x0001072b005c();
                    if (iVar3 == 1) goto LAB_1072a123c;
                    bVar13 = true;
                  }
                }
                else {
                  puVar9 = &uStack_120;
                  func_0x0001072aff50();
                  if (puVar9 == (undefined8 *)0x0) goto LAB_1072a1140;
                }
              }
              func_0x0001072b025c(*(undefined8 *)(param_1 + 0xd0));
              for (; lVar14 != unaff_x28; lVar14 = lVar14 + 8) {
                func_0x0001072b0270();
                if (param_5 == 0) {
LAB_1072a11bc:
                  iVar3 = (int)auStack_150;
                  func_0x0001072aff48();
                  func_0x0001072b0550();
                  func_0x0001072b0538();
                  iVar4 = iVar3;
                  func_0x000107875848();
                  if (iVar4 != 0) {
                    FUN_1072a0e60();
                    func_0x0001072af934();
                    func_0x0001072b005c();
                    if (iVar3 == 1) goto LAB_1072a123c;
                    bVar13 = true;
                  }
                }
                else {
                  puVar11 = auStack_150;
                  func_0x0001072aff50();
                  if (puVar11 == (undefined1 *)0x0) goto LAB_1072a11bc;
                }
              }
              if (!bVar13) {
                FUN_1072a1bf4(param_4,uVar12,uStack_180,lVar15);
              }
            }
            func_0x0001072b0340();
          }
LAB_1072a123c:
          func_0x0001072b027c();
          func_0x0001072b0290();
          func_0x0001072b0298();
        }
        else {
          uVar12 = 0;
          lVar14 = 0x120;
          do {
            if ((ulong)((*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70)) / 0x140) <= uVar12)
            {
              return;
            }
            uVar5 = param_1;
            FUN_1072a1b38(param_1,uVar12,*(long *)(param_1 + 0x70) + lVar14,param_3);
            uVar12 = uVar12 + 1;
            lVar14 = lVar14 + 0x140;
          } while ((uVar5 & 1) == 0);
        }
      }
      return;
    }
    func_0x0001072affb0();
    FUN_1072a799c(auStack_48);
    func_0x0001072afc08();
    FUN_1072a7968();
    func_0x0001072a7b1c(auStack_48);
  }
  return;
}



/* Entry: 1072a0f50; end: 1072a12c7;  */

void FUN_1072a0f50(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  long unaff_x28;
  ulong uStack_130;
  undefined1 auStack_100 [48];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  uVar12 = param_1;
  FUN_1072a1a88();
  if ((uVar12 & 1) == 0) {
    uVar12 = param_1;
    func_0x0001072a1ad0(param_1,param_2);
    if ((int)uVar12 == 0) {
      uVar12 = param_1;
      FUN_1072a0a74();
      uVar5 = param_1;
      func_0x0001072a0a88();
      uVar6 = param_1;
      FUN_1072a0a74();
      uVar7 = param_1;
      func_0x0001072a0a88();
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = 0x3f800000;
      func_0x0001072abda8(&uStack_a0,*(undefined8 *)(param_1 + 0xf8));
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0x3f800000;
      func_0x0001072abda8(&uStack_d0,*(undefined8 *)(param_1 + 0x108));
      func_0x0001072b0660();
      func_0x0001072abda8(auStack_100,*(undefined8 *)(param_1 + 0x118));
      while (uStack_130 = uVar5, uVar12 <= uVar6) {
        for (; uStack_130 <= uVar7; uStack_130 = uStack_130 + 1) {
          bVar13 = false;
          lVar15 = uVar12 + *(long *)(param_1 + 0x28) * uStack_130;
          plVar1 = (long *)(*(long *)(param_1 + 0x90) + lVar15 * 0x20);
          lVar2 = plVar1[1];
          for (lVar14 = *plVar1; lVar14 != lVar2; lVar14 = lVar14 + 8) {
            if (param_5 == 0) {
LAB_1072a10cc:
              puVar9 = &uStack_a0;
              func_0x0001072b0558(puVar9);
              func_0x0001072b0550();
              func_0x0001072b0530();
              uVar8 = param_2;
              func_0x0001078756d8(param_2,puVar9);
              if ((int)uVar8 != 0) {
                func_0x0001072b0320();
                uVar8 = param_3;
                func_0x0001072a1bc0();
                if ((int)uVar8 == 1) goto LAB_1072a123c;
                bVar13 = true;
              }
            }
            else {
              puVar9 = &uStack_a0;
              func_0x0001072b0560();
              if (puVar9 == (undefined8 *)0x0) goto LAB_1072a10cc;
            }
          }
          func_0x0001072b025c(*(undefined8 *)(param_1 + 0xb0));
          for (; lVar14 != unaff_x28; lVar14 = lVar14 + 8) {
            func_0x0001072b0270();
            if (param_5 == 0) {
LAB_1072a1140:
              puVar9 = &uStack_d0;
              func_0x0001072aff48(puVar9);
              func_0x0001072b0550();
              func_0x0001072b0540();
              uVar10 = param_1;
              FUN_1072a1be4(param_1,puVar9,param_2);
              if ((int)uVar10 != 0) {
                uVar10 = param_1;
                func_0x0001072a1b1c(param_1,puVar9);
                iVar3 = (int)uVar10;
                func_0x0001072af934();
                func_0x0001072b005c();
                if (iVar3 == 1) goto LAB_1072a123c;
                bVar13 = true;
              }
            }
            else {
              puVar9 = &uStack_d0;
              func_0x0001072aff50();
              if (puVar9 == (undefined8 *)0x0) goto LAB_1072a1140;
            }
          }
          func_0x0001072b025c(*(undefined8 *)(param_1 + 0xd0));
          for (; lVar14 != unaff_x28; lVar14 = lVar14 + 8) {
            func_0x0001072b0270();
            if (param_5 == 0) {
LAB_1072a11bc:
              iVar3 = (int)auStack_100;
              func_0x0001072aff48();
              func_0x0001072b0550();
              func_0x0001072b0538();
              iVar4 = iVar3;
              func_0x000107875848();
              if (iVar4 != 0) {
                FUN_1072a0e60();
                func_0x0001072af934();
                func_0x0001072b005c();
                if (iVar3 == 1) goto LAB_1072a123c;
                bVar13 = true;
              }
            }
            else {
              puVar11 = auStack_100;
              func_0x0001072aff50();
              if (puVar11 == (undefined1 *)0x0) goto LAB_1072a11bc;
            }
          }
          if (!bVar13) {
            FUN_1072a1bf4(param_4,uVar12,uStack_130,lVar15);
          }
        }
        func_0x0001072b0340();
      }
LAB_1072a123c:
      func_0x0001072b027c();
      func_0x0001072b0290();
      func_0x0001072b0298();
    }
    else {
      uVar12 = 0;
      lVar14 = 0x120;
      do {
        if ((ulong)((*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70)) / 0x140) <= uVar12) {
          return;
        }
        uVar5 = param_1;
        FUN_1072a1b38(param_1,uVar12,*(long *)(param_1 + 0x70) + lVar14,param_3);
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0x140;
      } while ((uVar5 & 1) == 0);
    }
  }
  return;
}



/* Entry: 1072a12c8; end: 1072a135f;  */

void FUN_1072a12c8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  long extraout_x9;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uStack_330;
  undefined1 auStack_300 [48];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined1 auStack_270 [4];
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 auStack_1e8 [31];
  byte bStack_1c9;
  undefined1 auStack_1a8 [32];
  undefined8 uStack_188;
  ulong uStack_178;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  undefined1 auStack_158 [31];
  byte bStack_139;
  undefined1 auStack_118 [32];
  undefined8 uStack_f8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined1 auStack_c8 [48];
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [48];
  undefined8 uStack_38;
  
  func_0x0001072afcec();
  func_0x0001072af784();
  func_0x0001072afabc();
  FUN_1072a1360();
  func_0x0001072b0350(&UNK_110999260);
  func_0x0001072b061c(&UNK_1109992e0);
  puVar13 = auStack_78;
  func_0x0001072afd70();
  iVar14 = 1;
  FUN_1072a0f50();
  func_0x0001072aff28();
  func_0x0001072afe30();
  func_0x0001072af6ec(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072aff28();
  func_0x0001072afe30();
  func_0x0001072a7e50();
  func_0x0001072afb9c();
  pcStack_88 = FUN_1072a1360;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001072afe1c();
  if ((ulong)(extraout_x9 / 0x130) < param_6) {
    uVar1 = 0xd79435e50d7943 < param_6;
    uVar2 = param_6 == 0xd79435e50d7944;
    if ((bool)uVar1) {
      FUN_1072a7c08();
      func_0x0001072afbb0();
      func_0x0001072a7dec();
      func_0x0001072afaac();
      pcStack_d8 = FUN_1072a13d8;
      ppuStack_e0 = &puStack_90;
      func_0x0001072afba4();
      func_0x0001072af7b0();
      func_0x0001072b03c4();
      FUN_1072abdbc(auStack_118,auStack_158);
      func_0x0001072aff74(&UNK_1109993e0);
      func_0x0001072afeb8();
      FUN_1072a0f50();
      func_0x0001072afe38();
      func_0x0001072b01b4();
      uVar4 = (ulong)bStack_139;
      func_0x0001072af6ec(uStack_f8);
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        func_0x0001072afe38();
        func_0x0001072b01b4();
        func_0x0001072afaac();
        pcStack_168 = FUN_1072a1454;
        uStack_178 = uVar4;
        ppuStack_170 = &ppuStack_e0;
        func_0x0001072afba4();
        func_0x0001072af7b0();
        func_0x0001072b03c4();
        puVar12 = auStack_1e8;
        FUN_1072abf3c(auStack_1a8);
        func_0x0001072aff74(&UNK_1109994e0);
        func_0x0001072afeb8();
        FUN_1072a14d0();
        func_0x0001072afe38();
        func_0x0001072b01b4();
        uVar4 = (ulong)bStack_1c9;
        func_0x0001072af6ec(uStack_188);
        if (!(bool)uVar2) {
          ___stack_chk_fail();
          func_0x0001072afe38();
          func_0x0001072b01b4();
          func_0x0001072afaac();
          func_0x0001072a1b1c();
          uVar5 = uVar4;
          uStack_26c = param_2;
          uStack_268 = param_3;
          uStack_264 = param_4;
          func_0x0001072a1a88(uVar4,auStack_270);
          if ((uVar5 & 1) == 0) {
            uVar5 = uVar4;
            func_0x0001072a1ad0(uVar4,auStack_270);
            if ((int)uVar5 == 0) {
LAB_1072a1558:
              func_0x0001072b0238();
              uVar6 = uVar5;
              func_0x0001072b0240();
              uVar7 = uVar6;
              func_0x0001072b0238();
              uVar8 = uVar7;
              func_0x0001072b0240();
              uStack_298 = 0;
              uStack_2a0 = 0;
              uStack_288 = 0;
              uStack_290 = 0;
              uVar15 = 0x3f800000;
              uStack_280 = 0x3f800000;
              func_0x0001072abda8(&uStack_2a0,*(undefined8 *)(uVar4 + 0xf8));
              uStack_2c8 = 0;
              uStack_2d0 = 0;
              uStack_2b8 = 0;
              uStack_2c0 = 0;
              uStack_2b0 = 0x3f800000;
              func_0x0001072abda8(&uStack_2d0,*(undefined8 *)(uVar4 + 0x108));
              func_0x0001072b0660();
              func_0x0001072abda8(auStack_300,*(undefined8 *)(uVar4 + 0x118));
              while (uVar16 = uVar6, uStack_330 = uVar6, uVar5 <= uVar7) {
                while (uStack_330 <= uVar8) {
                  func_0x0001072b00c4();
                  for (; uVar15 != uVar16; uVar15 = uVar15 + 8) {
                    if (iVar14 == 0) {
LAB_1072a1634:
                      puVar10 = &uStack_2a0;
                      func_0x0001072b0558(puVar10);
                      func_0x0001072afe84();
                      func_0x0001072b0530();
                      uVar9 = uVar4;
                      FUN_1072a1be4(uVar4,puVar12,puVar10);
                      iVar3 = (int)uVar9;
                      if (iVar3 != 0) {
                        func_0x0001072b0320();
                        func_0x0001072b021c();
                        if (iVar3 == 1) goto LAB_1072a1778;
                        unaff_x27 = 1;
                      }
                    }
                    else {
                      puVar10 = &uStack_2a0;
                      func_0x0001072b0560();
                      if (puVar10 == (undefined8 *)0x0) goto LAB_1072a1634;
                    }
                  }
                  func_0x0001072b025c(*(undefined8 *)(uVar4 + 0xb0));
                  for (; uVar16 != unaff_x28; uVar16 = uVar16 + 8) {
                    func_0x0001072b0270();
                    if (iVar14 == 0) {
LAB_1072a16a0:
                      iVar3 = (int)&uStack_2d0;
                      func_0x0001072aff48();
                      func_0x0001072afe84();
                      func_0x0001072b0540();
                      func_0x0001072b0608();
                      FUN_1072a1c20();
                      if (iVar3 != 0) {
                        func_0x0001072b0524();
                        func_0x0001072af934();
                        func_0x0001072af8e0();
                        if (iVar3 == 1) goto LAB_1072a1778;
                        unaff_x27 = 1;
                      }
                    }
                    else {
                      puVar10 = &uStack_2d0;
                      func_0x0001072aff50();
                      if (puVar10 == (undefined8 *)0x0) goto LAB_1072a16a0;
                    }
                  }
                  func_0x0001072b025c(*(undefined8 *)(uVar4 + 0xd0));
                  for (; uVar16 != unaff_x28; uVar16 = uVar16 + 8) {
                    func_0x0001072b0270();
                    if (iVar14 == 0) {
LAB_1072a1708:
                      iVar3 = (int)auStack_300;
                      func_0x0001072aff48();
                      func_0x0001072afe84();
                      func_0x0001072b0538();
                      func_0x0001072b0608();
                      func_0x0001072a1c34();
                      if (iVar3 != 0) {
                        func_0x0001072b04fc();
                        func_0x0001072af934();
                        func_0x0001072af8e0();
                        if (iVar3 == 1) goto LAB_1072a1778;
                        unaff_x27 = 1;
                      }
                    }
                    else {
                      puVar11 = auStack_300;
                      func_0x0001072aff50();
                      if (puVar11 == (undefined1 *)0x0) goto LAB_1072a1708;
                    }
                  }
                  if ((unaff_x27 & 1) == 0) {
                    func_0x0001072b0460(puVar13,uVar5);
                  }
                  uVar15 = uStack_330 + 1;
                  uStack_330 = uVar15;
                }
                func_0x0001072b0340();
              }
LAB_1072a1778:
              func_0x0001072b027c();
              func_0x0001072b0290();
              FUN_1072a8888(&uStack_2a0);
            }
            else {
              do {
                func_0x0001072b05ac();
                if ((bool)uVar1) goto LAB_1072a1558;
                func_0x0001072b0040();
              } while ((uVar5 & 1) == 0);
            }
          }
          return;
        }
      }
      return;
    }
    func_0x0001072affb0();
    FUN_1072a7c48(auStack_c8);
    func_0x0001072afc08();
    FUN_1072a7c14();
    func_0x0001072a7dec(auStack_c8);
  }
  return;
}



/* Entry: 1072a1360; end: 1072a13d7;  */

void FUN_1072a1360(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,int param_9
                  )

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long extraout_x9;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uStack_2b0;
  undefined1 auStack_280 [48];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined1 auStack_1f0 [4];
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 auStack_168 [31];
  byte bStack_149;
  undefined1 auStack_128 [32];
  undefined8 uStack_108;
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  undefined1 auStack_48 [40];
  
  func_0x0001072afe1c();
  if ((ulong)(extraout_x9 / 0x130) < param_6) {
    uVar1 = 0xd79435e50d7943 < param_6;
    uVar2 = param_6 == 0xd79435e50d7944;
    if ((bool)uVar1) {
      FUN_1072a7c08();
      func_0x0001072afbb0();
      func_0x0001072a7dec();
      func_0x0001072afaac();
      func_0x0001072afba4();
      func_0x0001072af7b0();
      func_0x0001072b03c4();
      FUN_1072abdbc(auStack_98,auStack_d8);
      func_0x0001072aff74(&UNK_1109993e0);
      func_0x0001072afeb8();
      FUN_1072a0f50();
      func_0x0001072afe38();
      func_0x0001072b01b4();
      func_0x0001072af6ec(uStack_78);
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        func_0x0001072afe38();
        func_0x0001072b01b4();
        func_0x0001072afaac();
        func_0x0001072afba4();
        func_0x0001072af7b0();
        func_0x0001072b03c4();
        puVar12 = auStack_168;
        FUN_1072abf3c(auStack_128);
        func_0x0001072aff74(&UNK_1109994e0);
        func_0x0001072afeb8();
        FUN_1072a14d0();
        func_0x0001072afe38();
        func_0x0001072b01b4();
        uVar4 = (ulong)bStack_149;
        func_0x0001072af6ec(uStack_108);
        if (!(bool)uVar2) {
          ___stack_chk_fail();
          func_0x0001072afe38();
          func_0x0001072b01b4();
          func_0x0001072afaac();
          func_0x0001072a1b1c();
          uVar5 = uVar4;
          uStack_1ec = param_2;
          uStack_1e8 = param_3;
          uStack_1e4 = param_4;
          func_0x0001072a1a88(uVar4,auStack_1f0);
          if ((uVar5 & 1) == 0) {
            uVar5 = uVar4;
            func_0x0001072a1ad0(uVar4,auStack_1f0);
            if ((int)uVar5 == 0) {
LAB_1072a1558:
              func_0x0001072b0238();
              uVar6 = uVar5;
              func_0x0001072b0240();
              uVar7 = uVar6;
              func_0x0001072b0238();
              uVar8 = uVar7;
              func_0x0001072b0240();
              uStack_218 = 0;
              uStack_220 = 0;
              uStack_208 = 0;
              uStack_210 = 0;
              uVar13 = 0x3f800000;
              uStack_200 = 0x3f800000;
              func_0x0001072abda8(&uStack_220,*(undefined8 *)(uVar4 + 0xf8));
              uStack_248 = 0;
              uStack_250 = 0;
              uStack_238 = 0;
              uStack_240 = 0;
              uStack_230 = 0x3f800000;
              func_0x0001072abda8(&uStack_250,*(undefined8 *)(uVar4 + 0x108));
              func_0x0001072b0660();
              func_0x0001072abda8(auStack_280,*(undefined8 *)(uVar4 + 0x118));
              while (uVar14 = uVar6, uStack_2b0 = uVar6, uVar5 <= uVar7) {
                while (uStack_2b0 <= uVar8) {
                  func_0x0001072b00c4();
                  for (; uVar13 != uVar14; uVar13 = uVar13 + 8) {
                    if (param_9 == 0) {
LAB_1072a1634:
                      puVar10 = &uStack_220;
                      func_0x0001072b0558(puVar10);
                      func_0x0001072afe84();
                      func_0x0001072b0530();
                      uVar9 = uVar4;
                      FUN_1072a1be4(uVar4,puVar12,puVar10);
                      iVar3 = (int)uVar9;
                      if (iVar3 != 0) {
                        func_0x0001072b0320();
                        func_0x0001072b021c();
                        if (iVar3 == 1) goto LAB_1072a1778;
                        unaff_x27 = 1;
                      }
                    }
                    else {
                      puVar10 = &uStack_220;
                      func_0x0001072b0560();
                      if (puVar10 == (undefined8 *)0x0) goto LAB_1072a1634;
                    }
                  }
                  func_0x0001072b025c(*(undefined8 *)(uVar4 + 0xb0));
                  for (; uVar14 != unaff_x28; uVar14 = uVar14 + 8) {
                    func_0x0001072b0270();
                    if (param_9 == 0) {
LAB_1072a16a0:
                      iVar3 = (int)&uStack_250;
                      func_0x0001072aff48();
                      func_0x0001072afe84();
                      func_0x0001072b0540();
                      func_0x0001072b0608();
                      FUN_1072a1c20();
                      if (iVar3 != 0) {
                        func_0x0001072b0524();
                        func_0x0001072af934();
                        func_0x0001072af8e0();
                        if (iVar3 == 1) goto LAB_1072a1778;
                        unaff_x27 = 1;
                      }
                    }
                    else {
                      puVar10 = &uStack_250;
                      func_0x0001072aff50();
                      if (puVar10 == (undefined8 *)0x0) goto LAB_1072a16a0;
                    }
                  }
                  func_0x0001072b025c(*(undefined8 *)(uVar4 + 0xd0));
                  for (; uVar14 != unaff_x28; uVar14 = uVar14 + 8) {
                    func_0x0001072b0270();
                    if (param_9 == 0) {
LAB_1072a1708:
                      iVar3 = (int)auStack_280;
                      func_0x0001072aff48();
                      func_0x0001072afe84();
                      func_0x0001072b0538();
                      func_0x0001072b0608();
                      func_0x0001072a1c34();
                      if (iVar3 != 0) {
                        func_0x0001072b04fc();
                        func_0x0001072af934();
                        func_0x0001072af8e0();
                        if (iVar3 == 1) goto LAB_1072a1778;
                        unaff_x27 = 1;
                      }
                    }
                    else {
                      puVar11 = auStack_280;
                      func_0x0001072aff50();
                      if (puVar11 == (undefined1 *)0x0) goto LAB_1072a1708;
                    }
                  }
                  if ((unaff_x27 & 1) == 0) {
                    func_0x0001072b0460(param_8,uVar5);
                  }
                  uVar13 = uStack_2b0 + 1;
                  uStack_2b0 = uVar13;
                }
                func_0x0001072b0340();
              }
LAB_1072a1778:
              func_0x0001072b027c();
              func_0x0001072b0290();
              FUN_1072a8888(&uStack_220);
            }
            else {
              do {
                func_0x0001072b05ac();
                if ((bool)uVar1) goto LAB_1072a1558;
                func_0x0001072b0040();
              } while ((uVar5 & 1) == 0);
            }
          }
          return;
        }
      }
      return;
    }
    func_0x0001072affb0();
    FUN_1072a7c48(auStack_48);
    func_0x0001072afc08();
    FUN_1072a7c14();
    func_0x0001072a7dec(auStack_48);
  }
  return;
}



/* Entry: 1072a13d8; end: 1072a1453;  */

void FUN_1072a13d8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 in_x3;
  int in_w4;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uStack_260;
  undefined1 auStack_230 [48];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined1 auStack_1a0 [4];
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 auStack_118 [31];
  byte bStack_f9;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x0001072afba4();
  func_0x0001072af7b0();
  func_0x0001072b03c4();
  FUN_1072abdbc(auStack_48,auStack_88);
  func_0x0001072aff74(&UNK_1109993e0);
  func_0x0001072afeb8();
  FUN_1072a0f50();
  func_0x0001072afe38();
  func_0x0001072b01b4();
  func_0x0001072af6ec(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001072afe38();
    func_0x0001072b01b4();
    func_0x0001072afaac();
    func_0x0001072afba4();
    func_0x0001072af7b0();
    func_0x0001072b03c4();
    puVar10 = auStack_118;
    FUN_1072abf3c(auStack_d8);
    func_0x0001072aff74(&UNK_1109994e0);
    func_0x0001072afeb8();
    FUN_1072a14d0();
    func_0x0001072afe38();
    func_0x0001072b01b4();
    uVar2 = (ulong)bStack_f9;
    func_0x0001072af6ec(uStack_b8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001072afe38();
      func_0x0001072b01b4();
      func_0x0001072afaac();
      func_0x0001072a1b1c();
      uVar3 = uVar2;
      uStack_19c = param_2;
      uStack_198 = param_3;
      uStack_194 = param_4;
      func_0x0001072a1a88(uVar2,auStack_1a0);
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar2;
        func_0x0001072a1ad0(uVar2,auStack_1a0);
        if ((int)uVar3 == 0) {
LAB_1072a1558:
          func_0x0001072b0238();
          uVar4 = uVar3;
          func_0x0001072b0240();
          uVar5 = uVar4;
          func_0x0001072b0238();
          uVar6 = uVar5;
          func_0x0001072b0240();
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uVar11 = 0x3f800000;
          uStack_1b0 = 0x3f800000;
          func_0x0001072abda8(&uStack_1d0,*(undefined8 *)(uVar2 + 0xf8));
          uStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1e0 = 0x3f800000;
          func_0x0001072abda8(&uStack_200,*(undefined8 *)(uVar2 + 0x108));
          func_0x0001072b0660();
          func_0x0001072abda8(auStack_230,*(undefined8 *)(uVar2 + 0x118));
          while (uVar12 = uVar4, uStack_260 = uVar4, uVar3 <= uVar5) {
            while (uStack_260 <= uVar6) {
              func_0x0001072b00c4();
              for (; uVar11 != uVar12; uVar11 = uVar11 + 8) {
                if (in_w4 == 0) {
LAB_1072a1634:
                  puVar8 = &uStack_1d0;
                  func_0x0001072b0558(puVar8);
                  func_0x0001072afe84();
                  func_0x0001072b0530();
                  uVar7 = uVar2;
                  FUN_1072a1be4(uVar2,puVar10,puVar8);
                  iVar1 = (int)uVar7;
                  if (iVar1 != 0) {
                    func_0x0001072b0320();
                    func_0x0001072b021c();
                    if (iVar1 == 1) goto LAB_1072a1778;
                    unaff_x27 = 1;
                  }
                }
                else {
                  puVar8 = &uStack_1d0;
                  func_0x0001072b0560();
                  if (puVar8 == (undefined8 *)0x0) goto LAB_1072a1634;
                }
              }
              func_0x0001072b025c(*(undefined8 *)(uVar2 + 0xb0));
              for (; uVar12 != unaff_x28; uVar12 = uVar12 + 8) {
                func_0x0001072b0270();
                if (in_w4 == 0) {
LAB_1072a16a0:
                  iVar1 = (int)&uStack_200;
                  func_0x0001072aff48();
                  func_0x0001072afe84();
                  func_0x0001072b0540();
                  func_0x0001072b0608();
                  FUN_1072a1c20();
                  if (iVar1 != 0) {
                    func_0x0001072b0524();
                    func_0x0001072af934();
                    func_0x0001072af8e0();
                    if (iVar1 == 1) goto LAB_1072a1778;
                    unaff_x27 = 1;
                  }
                }
                else {
                  puVar8 = &uStack_200;
                  func_0x0001072aff50();
                  if (puVar8 == (undefined8 *)0x0) goto LAB_1072a16a0;
                }
              }
              func_0x0001072b025c(*(undefined8 *)(uVar2 + 0xd0));
              for (; uVar12 != unaff_x28; uVar12 = uVar12 + 8) {
                func_0x0001072b0270();
                if (in_w4 == 0) {
LAB_1072a1708:
                  iVar1 = (int)auStack_230;
                  func_0x0001072aff48();
                  func_0x0001072afe84();
                  func_0x0001072b0538();
                  func_0x0001072b0608();
                  func_0x0001072a1c34();
                  if (iVar1 != 0) {
                    func_0x0001072b04fc();
                    func_0x0001072af934();
                    func_0x0001072af8e0();
                    if (iVar1 == 1) goto LAB_1072a1778;
                    unaff_x27 = 1;
                  }
                }
                else {
                  puVar9 = auStack_230;
                  func_0x0001072aff50();
                  if (puVar9 == (undefined1 *)0x0) goto LAB_1072a1708;
                }
              }
              if ((unaff_x27 & 1) == 0) {
                func_0x0001072b0460(in_x3,uVar3);
              }
              uVar11 = uStack_260 + 1;
              uStack_260 = uVar11;
            }
            func_0x0001072b0340();
          }
LAB_1072a1778:
          func_0x0001072b027c();
          func_0x0001072b0290();
          FUN_1072a8888(&uStack_1d0);
        }
        else {
          do {
            func_0x0001072b05ac();
            if ((bool)in_CY) goto LAB_1072a1558;
            func_0x0001072b0040();
          } while ((uVar3 & 1) == 0);
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 1072a1454; end: 1072a14cf;  */

void FUN_1072a1454(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 in_x3;
  int in_w4;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uStack_1d0;
  undefined1 auStack_1a0 [48];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined1 auStack_110 [4];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_88 [31];
  byte bStack_69;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x0001072afba4();
  func_0x0001072af7b0();
  func_0x0001072b03c4();
  puVar10 = auStack_88;
  FUN_1072abf3c(auStack_48);
  func_0x0001072aff74(&UNK_1109994e0);
  func_0x0001072afeb8();
  FUN_1072a14d0();
  func_0x0001072afe38();
  func_0x0001072b01b4();
  uVar2 = (ulong)bStack_69;
  func_0x0001072af6ec(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072afe38();
  func_0x0001072b01b4();
  func_0x0001072afaac();
  func_0x0001072a1b1c();
  uVar3 = uVar2;
  uStack_10c = param_2;
  uStack_108 = param_3;
  uStack_104 = param_4;
  func_0x0001072a1a88(uVar2,auStack_110);
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar2;
    func_0x0001072a1ad0(uVar2,auStack_110);
    if ((int)uVar3 == 0) {
LAB_1072a1558:
      func_0x0001072b0238();
      uVar4 = uVar3;
      func_0x0001072b0240();
      uVar5 = uVar4;
      func_0x0001072b0238();
      uVar6 = uVar5;
      func_0x0001072b0240();
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uVar11 = 0x3f800000;
      uStack_120 = 0x3f800000;
      func_0x0001072abda8(&uStack_140,*(undefined8 *)(uVar2 + 0xf8));
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_150 = 0x3f800000;
      func_0x0001072abda8(&uStack_170,*(undefined8 *)(uVar2 + 0x108));
      func_0x0001072b0660();
      func_0x0001072abda8(auStack_1a0,*(undefined8 *)(uVar2 + 0x118));
      while (uVar12 = uVar4, uStack_1d0 = uVar4, uVar3 <= uVar5) {
        while (uStack_1d0 <= uVar6) {
          func_0x0001072b00c4();
          for (; uVar11 != uVar12; uVar11 = uVar11 + 8) {
            if (in_w4 == 0) {
LAB_1072a1634:
              puVar8 = &uStack_140;
              func_0x0001072b0558(puVar8);
              func_0x0001072afe84();
              func_0x0001072b0530();
              uVar7 = uVar2;
              FUN_1072a1be4(uVar2,puVar10,puVar8);
              iVar1 = (int)uVar7;
              if (iVar1 != 0) {
                func_0x0001072b0320();
                func_0x0001072b021c();
                if (iVar1 == 1) goto LAB_1072a1778;
                unaff_x27 = 1;
              }
            }
            else {
              puVar8 = &uStack_140;
              func_0x0001072b0560();
              if (puVar8 == (undefined8 *)0x0) goto LAB_1072a1634;
            }
          }
          func_0x0001072b025c(*(undefined8 *)(uVar2 + 0xb0));
          for (; uVar12 != unaff_x28; uVar12 = uVar12 + 8) {
            func_0x0001072b0270();
            if (in_w4 == 0) {
LAB_1072a16a0:
              iVar1 = (int)&uStack_170;
              func_0x0001072aff48();
              func_0x0001072afe84();
              func_0x0001072b0540();
              func_0x0001072b0608();
              FUN_1072a1c20();
              if (iVar1 != 0) {
                func_0x0001072b0524();
                func_0x0001072af934();
                func_0x0001072af8e0();
                if (iVar1 == 1) goto LAB_1072a1778;
                unaff_x27 = 1;
              }
            }
            else {
              puVar8 = &uStack_170;
              func_0x0001072aff50();
              if (puVar8 == (undefined8 *)0x0) goto LAB_1072a16a0;
            }
          }
          func_0x0001072b025c(*(undefined8 *)(uVar2 + 0xd0));
          for (; uVar12 != unaff_x28; uVar12 = uVar12 + 8) {
            func_0x0001072b0270();
            if (in_w4 == 0) {
LAB_1072a1708:
              iVar1 = (int)auStack_1a0;
              func_0x0001072aff48();
              func_0x0001072afe84();
              func_0x0001072b0538();
              func_0x0001072b0608();
              func_0x0001072a1c34();
              if (iVar1 != 0) {
                func_0x0001072b04fc();
                func_0x0001072af934();
                func_0x0001072af8e0();
                if (iVar1 == 1) goto LAB_1072a1778;
                unaff_x27 = 1;
              }
            }
            else {
              puVar9 = auStack_1a0;
              func_0x0001072aff50();
              if (puVar9 == (undefined1 *)0x0) goto LAB_1072a1708;
            }
          }
          if ((unaff_x27 & 1) == 0) {
            func_0x0001072b0460(in_x3,uVar3);
          }
          uVar11 = uStack_1d0 + 1;
          uStack_1d0 = uVar11;
        }
        func_0x0001072b0340();
      }
LAB_1072a1778:
      func_0x0001072b027c();
      func_0x0001072b0290();
      FUN_1072a8888(&uStack_140);
    }
    else {
      do {
        func_0x0001072b05ac();
        if ((bool)in_CY) goto LAB_1072a1558;
        func_0x0001072b0040();
      } while ((uVar3 & 1) == 0);
    }
  }
  return;
}



/* Entry: 1072a14d0; end: 1072a17f3;  */

void FUN_1072a14d0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9
                  )

{
  undefined1 in_CY;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uStack_140;
  undefined1 auStack_110 [48];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 auStack_80 [4];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  func_0x0001072a1b1c();
  uVar2 = param_5;
  uStack_7c = param_2;
  uStack_78 = param_3;
  uStack_74 = param_4;
  func_0x0001072a1a88(param_5,auStack_80);
  if ((uVar2 & 1) == 0) {
    uVar2 = param_5;
    func_0x0001072a1ad0(param_5,auStack_80);
    if ((int)uVar2 == 0) {
LAB_1072a1558:
      func_0x0001072b0238();
      uVar3 = uVar2;
      func_0x0001072b0240();
      uVar4 = uVar3;
      func_0x0001072b0238();
      uVar5 = uVar4;
      func_0x0001072b0240();
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uVar9 = 0x3f800000;
      uStack_90 = 0x3f800000;
      func_0x0001072abda8(&uStack_b0,*(undefined8 *)(param_5 + 0xf8));
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_c0 = 0x3f800000;
      func_0x0001072abda8(&uStack_e0,*(undefined8 *)(param_5 + 0x108));
      func_0x0001072b0660();
      func_0x0001072abda8(auStack_110,*(undefined8 *)(param_5 + 0x118));
      while (uVar10 = uVar3, uStack_140 = uVar3, uVar2 <= uVar4) {
        while (uStack_140 <= uVar5) {
          func_0x0001072b00c4();
          for (; uVar9 != uVar10; uVar9 = uVar9 + 8) {
            if (param_9 == 0) {
LAB_1072a1634:
              puVar7 = &uStack_b0;
              func_0x0001072b0558(puVar7);
              func_0x0001072afe84();
              func_0x0001072b0530();
              uVar6 = param_5;
              FUN_1072a1be4(param_5,param_6,puVar7);
              iVar1 = (int)uVar6;
              if (iVar1 != 0) {
                func_0x0001072b0320();
                func_0x0001072b021c();
                if (iVar1 == 1) goto LAB_1072a1778;
                unaff_x27 = 1;
              }
            }
            else {
              puVar7 = &uStack_b0;
              func_0x0001072b0560();
              if (puVar7 == (undefined8 *)0x0) goto LAB_1072a1634;
            }
          }
          func_0x0001072b025c(*(undefined8 *)(param_5 + 0xb0));
          for (; uVar10 != unaff_x28; uVar10 = uVar10 + 8) {
            func_0x0001072b0270();
            if (param_9 == 0) {
LAB_1072a16a0:
              iVar1 = (int)&uStack_e0;
              func_0x0001072aff48();
              func_0x0001072afe84();
              func_0x0001072b0540();
              func_0x0001072b0608();
              FUN_1072a1c20();
              if (iVar1 != 0) {
                func_0x0001072b0524();
                func_0x0001072af934();
                func_0x0001072af8e0();
                if (iVar1 == 1) goto LAB_1072a1778;
                unaff_x27 = 1;
              }
            }
            else {
              puVar7 = &uStack_e0;
              func_0x0001072aff50();
              if (puVar7 == (undefined8 *)0x0) goto LAB_1072a16a0;
            }
          }
          func_0x0001072b025c(*(undefined8 *)(param_5 + 0xd0));
          for (; uVar10 != unaff_x28; uVar10 = uVar10 + 8) {
            func_0x0001072b0270();
            if (param_9 == 0) {
LAB_1072a1708:
              iVar1 = (int)auStack_110;
              func_0x0001072aff48();
              func_0x0001072afe84();
              func_0x0001072b0538();
              func_0x0001072b0608();
              func_0x0001072a1c34();
              if (iVar1 != 0) {
                func_0x0001072b04fc();
                func_0x0001072af934();
                func_0x0001072af8e0();
                if (iVar1 == 1) goto LAB_1072a1778;
                unaff_x27 = 1;
              }
            }
            else {
              puVar8 = auStack_110;
              func_0x0001072aff50();
              if (puVar8 == (undefined1 *)0x0) goto LAB_1072a1708;
            }
          }
          if ((unaff_x27 & 1) == 0) {
            func_0x0001072b0460(param_8,uVar2);
          }
          uVar9 = uStack_140 + 1;
          uStack_140 = uVar9;
        }
        func_0x0001072b0340();
      }
LAB_1072a1778:
      func_0x0001072b027c();
      func_0x0001072b0290();
      FUN_1072a8888(&uStack_b0);
    }
    else {
      do {
        func_0x0001072b05ac();
        if ((bool)in_CY) goto LAB_1072a1558;
        func_0x0001072b0040();
      } while ((uVar2 & 1) == 0);
    }
  }
  return;
}



/* Entry: 1072a17f4; end: 1072a1817;  */

undefined8 FUN_1072a17f4(long param_1)

{
  return CONCAT44((int)*(float *)(param_1 + 0x24),(int)*(float *)(param_1 + 0x20));
}



/* Entry: 1072a1818; end: 1072a190b;  */

void FUN_1072a1818(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  uStack_50 = 0x3f800000;
  for (uVar2 = 0; uVar2 < *(ulong *)(param_2 + 0x28); uVar2 = uVar2 + 1) {
    for (uVar3 = 0; uVar3 < *(ulong *)(param_2 + 0x30); uVar3 = uVar3 + 1) {
      func_0x0001072afb68();
      func_0x0001072afb68();
      func_0x0001072afb68();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (plVar1 = (long *)lStack_60; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_1072a19bc(param_1,plVar1 + 3);
  }
  FUN_1072ac0a4(&uStack_70);
  return;
}



/* Entry: 1072a190c; end: 1072a19bb;  */

void FUN_1072a190c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [40];
  
  if (*param_5 != param_5[1]) {
    lVar1 = *param_1;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0x3f800000;
    uStack_a8 = param_2;
    uStack_a0 = param_3;
    uStack_70 = param_4;
    func_0x0001072a813c(auStack_68,&uStack_a8);
    FUN_1072a7ed8(lVar1,&uStack_70);
    FUN_1072a8888(auStack_58);
    FUN_1072a8888(&uStack_98);
    FUN_1072a7ef0(lVar1 + 0x28,*param_5,param_5[1]);
  }
  return;
}



/* Entry: 1072a19bc; end: 1072a19ef;  */

long FUN_1072a19bc(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072afa9c();
  if ((bool)in_CY) {
    FUN_1072a8734();
  }
  else {
    FUN_1072a8708();
    param_1 = unaff_x20 + 0x38;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x38;
}



/* Entry: 1072a19f0; end: 1072a1a87;  */

undefined1 * FUN_1072a19f0(long param_1,float *param_2)

{
  float *pfVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *unaff_x19;
  float *pfVar4;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  func_0x0001072af784();
  func_0x0001072afabc();
  puVar3 = unaff_x19;
  FUN_1072ac134();
  pfVar1 = *(float **)(param_1 + 0x78);
  for (pfVar4 = *(float **)(param_1 + 0x70); bVar2 = pfVar4 == pfVar1, !bVar2;
      pfVar4 = pfVar4 + 0x50) {
    param_2 = pfVar4;
    FUN_1072ac190(auStack_78,param_1 + 0x48);
    func_0x0001072afc08();
    func_0x0001072aad1c();
    puVar3 = auStack_78;
    func_0x000104c3323c(puVar3);
  }
  func_0x0001072af6ec(uStack_38);
  if (bVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107269124();
  func_0x0001072afb9c();
  if (param_2[2] < 0.0) {
    return (undefined1 *)0x1;
  }
  puVar3 = (undefined1 *)0x1;
  if ((*param_2 < *(float *)(unaff_x19 + 0x20)) && (0.0 <= param_2[3])) {
    puVar3 = (undefined1 *)(ulong)(*(float *)(unaff_x19 + 0x24) <= param_2[1]);
  }
  return puVar3;
}



/* Entry: 1072a1a88; end: 1072a1b37;  */

bool FUN_1072a1a88(long param_1,float *param_2)

{
  bool bVar1;
  
  if (param_2[2] < 0.0) {
    return true;
  }
  bVar1 = true;
  if ((*param_2 < *(float *)(param_1 + 0x20)) && (0.0 <= param_2[3])) {
    bVar1 = *(float *)(param_1 + 0x24) <= param_2[1];
  }
  return bVar1;
}



/* Entry: 1072a1b38; end: 1072a1be3;  */

void FUN_1072a1b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  puStack_48 = &uStack_18;
  uStack_50 = param_4;
  uStack_40 = param_4;
  puStack_38 = puStack_48;
  uStack_30 = param_1;
  uStack_28 = param_4;
  puStack_20 = puStack_48;
  uStack_18 = param_2;
  FUN_1072a1c40(param_3,&uStack_28,&uStack_40,&uStack_50);
  return;
}



/* Entry: 1072a1be4; end: 1072a1bf3;  */

bool FUN_1072a1be4(undefined8 param_1,float *param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = param_2[2];
  fVar4 = (param_3[2] - *param_3) * 0.5;
  fVar5 = ABS(*param_2 - (*param_3 + fVar4));
  if (fVar5 <= fVar3 + fVar4) {
    fVar6 = (param_3[3] - param_3[1]) * 0.5;
    fVar7 = ABS(param_2[1] - (param_3[1] + fVar6));
    if (fVar7 <= fVar3 + fVar6) {
      bVar1 = false;
      bVar2 = false;
      if (fVar4 < fVar5) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar7) && !NAN(fVar6)) {
          bVar1 = fVar7 == fVar6;
          bVar2 = fVar6 <= fVar7;
        }
      }
      if (!bVar2 || bVar1) {
        return true;
      }
      return (fVar7 - fVar6) * (fVar7 - fVar6) + (fVar5 - fVar4) * (fVar5 - fVar4) <= fVar3 * fVar3;
    }
  }
  return false;
}



/* Entry: 1072a1bf4; end: 1072a1c1f;  */

void FUN_1072a1bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_4;
  uStack_20 = param_3;
  uStack_18 = param_2;
  func_0x0001072ac398(param_1,&uStack_18,&uStack_20,&uStack_28);
  return;
}



/* Entry: 1072a1c20; end: 1072a1c3f;  */

bool FUN_1072a1c20(undefined8 param_1,float *param_2,float *param_3)

{
  return (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]) +
         (*param_3 - *param_2) * (*param_3 - *param_2) <
         (param_2[2] + param_3[2]) * (param_2[2] + param_3[2]);
}



/* Entry: 1072a1c40; end: 1072a1c7b;  */

void FUN_1072a1c40(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  uStack_20 = param_4[1];
  uStack_28 = *param_4;
  FUN_1072ac3b0(param_1,&uStack_50);
  return;
}



/* Entry: 1072a1c7c; end: 1072a1ca3;  */

void FUN_1072a1c7c(void)

{
  undefined1 auStack_30 [16];
  
  FUN_1072a1ca4(auStack_30);
  func_0x0001072b0078();
  return;
}



/* Entry: 1072a1ca4; end: 1072a1cbf;  */

void FUN_1072a1ca4(void)

{
  undefined1 uStack_11;
  
  FUN_1072ac500(&uStack_11);
  return;
}



/* Entry: 1072a1cc0; end: 1072a1d4f;  */

void FUN_1072a1cc0(long *param_1)

{
  long lVar1;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  if (lRam0000000113822068 == 0) {
    FUN_1072a1c7c(auStack_30);
    func_0x0001072a1d2c(0x113822068,auStack_30);
    func_0x00010725afa0(auStack_30);
  }
  lVar1 = lRam0000000113822070;
  *param_1 = lRam0000000113822068;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072a1d50; end: 1072a1d5f;  */

void FUN_1072a1d50(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001072afb0c(0x113822068,param_1);
  if (extraout_x8 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  func_0x0001072af848();
  func_0x00010725afa0();
  return;
}



/* Entry: 1072a1d60; end: 1072a1d97;  */

void FUN_1072a1d60(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001072afb0c();
  if (extraout_x8 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  func_0x0001072af848();
  func_0x00010725afa0();
  return;
}



/* Entry: 1072a1d98; end: 1072a1da3;  */

void FUN_1072a1d98(void)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = uRam0000000113822070;
  uStack_20 = uRam0000000113822068;
  uRam0000000113822068 = 0;
  uRam0000000113822070 = 0;
  func_0x00010725afa0(&uStack_20);
  return;
}



/* Entry: 1072a1da4; end: 1072a1dcb;  */

void FUN_1072a1da4(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010725afa0(&uStack_20);
  return;
}



/* Entry: 1072a1dcc; end: 1072a1e1f;  */

undefined8 FUN_1072a1dcc(void)

{
  undefined8 unaff_x19;
  
  FUN_107285e74();
  func_0x0001072b03dc();
  func_0x0001072b0360();
  FUN_1072a8c44();
  return unaff_x19;
}



/* Entry: 1072a1e20; end: 1072a220f;  */

long FUN_1072a1e20(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  func_0x0001072b0014();
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar2 = param_1;
  func_0x0001072b05e0();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  FUN_107248824(lVar2 + 0x30);
  FUN_1072ac748(param_1 + 0x40,param_2);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  func_0x00010785f2c0(param_1 + 0x60);
  func_0x00010785f28c(param_1 + 0x60);
  in_stack_00000018 = *(undefined8 *)(param_1 + 0x48);
  in_stack_00000010 = *(undefined8 *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  func_0x0001077f3644(param_1 + 0xc48,&stack0x00000010);
  FUN_1072ac768(&stack0x00000010);
  puVar3 = (undefined8 *)(param_1 + 0xc48);
  func_0x0001077f3840();
  func_0x0001072aff20();
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar1 = puVar3 + 3;
  *puVar3 = &PTR_FUN_1109995c0;
  FUN_1072903a8(puVar1,param_1 + 0x60);
  *(undefined8 **)(param_1 + 0xe18) = puVar1;
  *(undefined8 **)(param_1 + 0xe20) = puVar3;
  FUN_10729f220(param_1 + 0xe28);
  uVar4 = 0;
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0xe40) = 0;
  *(undefined8 *)(param_1 + 0xe38) = 0;
  *(undefined8 *)(param_1 + 0xe48) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0xe98) = 0;
  *(undefined8 *)(param_1 + 0xe90) = 0;
  *(undefined8 *)(param_1 + 0xea8) = 0;
  *(undefined8 *)(param_1 + 0xea0) = 0;
  *(undefined8 *)(param_1 + 0xe58) = 0;
  *(undefined8 *)(param_1 + 0xe50) = 0;
  *(undefined8 *)(param_1 + 0xe68) = 0;
  *(undefined8 *)(param_1 + 0xe60) = 0;
  *(undefined8 *)(param_1 + 0xe78) = 0;
  *(undefined8 *)(param_1 + 0xe70) = 0;
  *(undefined8 *)(param_1 + 0xe84) = 0;
  *(undefined8 *)(param_1 + 0xe7c) = 0;
  *(undefined4 *)(param_1 + 0xeb0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xec0) = 0;
  *(undefined8 *)(param_1 + 0xeb8) = 0;
  *(undefined8 *)(param_1 + 0xed0) = 0;
  *(undefined8 *)(param_1 + 0xec8) = 0;
  lVar2 = 0x68;
  __Znwm();
  *(undefined8 *)(lVar2 + 8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  func_0x0001072affd8(&PTR_FUN_110999610);
  *(undefined8 *)(param_1 + 0xed8) = extraout_x8;
  *(long *)(param_1 + 0xee0) = lVar2;
  *(undefined8 *)(param_1 + 0xef0) = 0;
  *(undefined ***)(param_1 + 0xee8) = &PTR_DAT_1109ec830;
  *(undefined **)(param_1 + 0xef8) = &DAT_11383d918;
  *(undefined **)(param_1 + 0xf00) = &DAT_11383d918;
  *(undefined4 *)(param_1 + 0xf08) = 0;
  *(undefined8 *)(param_1 + 0xf28) = uVar5;
  *(undefined8 *)(param_1 + 0xf20) = uVar4;
  *(undefined8 *)(param_1 + 0xf18) = uVar5;
  *(undefined8 *)(param_1 + 0xf10) = uVar4;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 0xf30);
  uVar4 = 0;
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  *(undefined8 *)(param_1 + 0xfd8) = 0;
  *(undefined8 *)(param_1 + 0xff0) = 0;
  *(undefined8 *)(param_1 + 0xfe8) = 0;
  *(undefined4 *)(param_1 + 0xff8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1020) = 0;
  *(undefined8 *)(param_1 + 0x1008) = 0;
  *(undefined8 *)(param_1 + 0x1000) = 0;
  *(undefined1 *)(param_1 + 0x1010) = 0;
  lVar2 = 0x68;
  __Znwm();
  *(undefined8 *)(lVar2 + 8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  func_0x0001072affd8(&PTR_FUN_110999660);
  *(undefined8 *)(param_1 + 0x1028) = extraout_x8_00;
  *(long *)(param_1 + 0x1030) = lVar2;
  *(undefined8 *)(param_1 + 0x1040) = uVar5;
  *(undefined8 *)(param_1 + 0x1038) = uVar4;
  *(undefined8 *)(param_1 + 0x1050) = uVar5;
  *(undefined8 *)(param_1 + 0x1048) = uVar4;
  *(undefined8 *)(param_1 + 0x1060) = uVar5;
  *(undefined8 *)(param_1 + 0x1058) = uVar4;
  puVar3 = (undefined8 *)0x120;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar1 = puVar3 + 3;
  *puVar3 = &PTR_FUN_1109996b0;
  FUN_1072d03e8();
  *(undefined8 **)(param_1 + 0x1068) = puVar1;
  *(undefined8 **)(param_1 + 0x1070) = puVar3;
  *(undefined1 *)(param_1 + 0x10b8) = 0;
  *(undefined8 *)(param_1 + 0x10c8) = 0;
  *(undefined8 *)(param_1 + 0x10c0) = 0;
  *(undefined8 *)(param_1 + 0x1080) = 0;
  *(undefined8 *)(param_1 + 0x1078) = 0;
  *(undefined8 *)(param_1 + 0x1090) = 0;
  *(undefined8 *)(param_1 + 0x1088) = 0;
  *(undefined8 *)(param_1 + 0x10a0) = 0;
  *(undefined8 *)(param_1 + 0x1098) = 0;
  *(undefined1 *)(param_1 + 0x10a8) = 0;
  FUN_10726ed14(param_1 + 0x10d0);
  *(long *)(param_1 + 0x10e0) = param_1;
  func_0x00010786565c(param_1 + 0x60);
  return param_1;
}



/* Entry: 1072a2210; end: 1072a237f;  */

long FUN_1072a2210(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = param_1;
  func_0x0001072b05e0();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  while ((lVar2 != *(long *)(lVar1 + 0x20) &&
         ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))) {
    lVar2 = lVar2 + 0x10;
  }
  func_0x0001072aca48(param_1 + 0x10d0);
  func_0x0001072aca24(param_1 + 0x10c0);
  func_0x00010725afe8(param_1 + 0x1098);
  func_0x0001072aca00(param_1 + 0x1088);
  func_0x0001072ac9dc(param_1 + 0x1078);
  func_0x0001072ac8e0(param_1 + 0x1068);
  func_0x000100450be4(param_1 + 0x1058);
  func_0x0001072ac9b8(param_1 + 0x1048);
  func_0x0001072ac994(param_1 + 0x1038);
  FUN_1072ac890(param_1 + 0x1028);
  FUN_1072a8dcc(param_1 + 0x1010);
  func_0x0001072ac970(param_1 + 0x1000);
  func_0x0001072a8e10(param_1 + 0xf30);
  func_0x00010724bd50(param_1 + 0xf20);
  func_0x00010724bd74(param_1 + 0xf10);
  func_0x00010793c520(param_1 + 0xee8);
  FUN_1072ac824(param_1 + 0xed8);
  func_0x00010726ee28(param_1 + 0xec8);
  func_0x0001072ac4dc(param_1 + 0xeb8);
  func_0x00010028ad98(param_1 + 0xe90);
  __ZNSt3__15mutexD1Ev(param_1 + 0xe48);
  func_0x0001072ac94c(param_1 + 0xe38);
  FUN_1072ac7b8(param_1 + 0xe28);
  func_0x00010726eedc(param_1 + 0xe18);
  FUN_1072a8ef4(param_1 + 0xc48);
  func_0x00010786508c(param_1 + 0x60);
  func_0x0001072ac928(param_1 + 0x50);
  FUN_1072ac768(param_1 + 0x40);
  FUN_1072488f0(param_1 + 0x30);
  FUN_1072a989c((long *)(unaff_x20 + 0x18));
  FUN_1072ac6d8(param_1 + 8);
  return param_1;
}



/* Entry: 1072a2380; end: 1072a2383;  */

long FUN_1072a2380(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = param_1;
  func_0x0001072b05e0();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  while ((lVar2 != *(long *)(lVar1 + 0x20) &&
         ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))) {
    lVar2 = lVar2 + 0x10;
  }
  func_0x0001072aca48(param_1 + 0x10d0);
  func_0x0001072aca24(param_1 + 0x10c0);
  func_0x00010725afe8(param_1 + 0x1098);
  func_0x0001072aca00(param_1 + 0x1088);
  func_0x0001072ac9dc(param_1 + 0x1078);
  func_0x0001072ac8e0(param_1 + 0x1068);
  func_0x000100450be4(param_1 + 0x1058);
  func_0x0001072ac9b8(param_1 + 0x1048);
  func_0x0001072ac994(param_1 + 0x1038);
  FUN_1072ac890(param_1 + 0x1028);
  FUN_1072a8dcc(param_1 + 0x1010);
  func_0x0001072ac970(param_1 + 0x1000);
  func_0x0001072a8e10(param_1 + 0xf30);
  func_0x00010724bd50(param_1 + 0xf20);
  func_0x00010724bd74(param_1 + 0xf10);
  func_0x00010793c520(param_1 + 0xee8);
  FUN_1072ac824(param_1 + 0xed8);
  func_0x00010726ee28(param_1 + 0xec8);
  func_0x0001072ac4dc(param_1 + 0xeb8);
  func_0x00010028ad98(param_1 + 0xe90);
  __ZNSt3__15mutexD1Ev(param_1 + 0xe48);
  func_0x0001072ac94c(param_1 + 0xe38);
  FUN_1072ac7b8(param_1 + 0xe28);
  func_0x00010726eedc(param_1 + 0xe18);
  FUN_1072a8ef4(param_1 + 0xc48);
  func_0x00010786508c(param_1 + 0x60);
  func_0x0001072ac928(param_1 + 0x50);
  FUN_1072ac768(param_1 + 0x40);
  FUN_1072488f0(param_1 + 0x30);
  FUN_1072a989c((long *)(unaff_x20 + 0x18));
  FUN_1072ac6d8(param_1 + 8);
  return param_1;
}



/* Entry: 1072a2384; end: 1072a2397;  */

void FUN_1072a2384(void)

{
  FUN_1072a2210();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072a2398; end: 1072a240f;  */

void FUN_1072a2398(void)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1072a2410();
  func_0x0001072aca24(&uStack_50);
  FUN_1072ab65c(&uStack_40);
  func_0x0001072ac994(&uStack_30);
  return;
}



/* Entry: 1072a2410; end: 1072a4cd7;  */

void FUN_1072a2410(long param_1,long param_2,long ******param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                  long *param_9,undefined8 *param_10,long *param_11,undefined8 param_12)

{
  long ***ppplVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  byte bVar4;
  char cVar5;
  long **pplVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long ******pppppplVar14;
  long *****ppppplVar15;
  float *pfVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  long ******pppppplVar19;
  long *plVar20;
  long *plVar21;
  undefined1 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined8 extraout_x8;
  long *****ppppplVar25;
  long *****extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *****extraout_x8_03;
  long *plVar26;
  long *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x9;
  ulong uVar27;
  long *****extraout_x9_00;
  long *****extraout_x9_01;
  ulong uVar28;
  ulong extraout_x9_02;
  long ***ppplVar29;
  long *extraout_x9_03;
  long *extraout_x9_04;
  ulong extraout_x9_05;
  long *plVar30;
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
  long ******extraout_x10;
  long ***ppplVar31;
  long *extraout_x10_00;
  int extraout_w11;
  long *****extraout_x11;
  long *extraout_x11_00;
  long ******pppppplVar32;
  long *plVar33;
  long lVar34;
  long *****ppppplVar35;
  long lVar36;
  long ****pppplVar37;
  long *plVar38;
  long ****pppplVar39;
  undefined8 uVar40;
  undefined4 uVar41;
  undefined8 *unaff_x22;
  long *plVar42;
  long *****ppppplVar43;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  long lStack_f18;
  undefined8 uStack_f10;
  long lStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined1 auStack_ee0 [24];
  undefined1 auStack_ec8 [24];
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined4 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  long ****pppplStack_e50;
  long lStack_e48;
  long lStack_e40;
  long ****pppplStack_e38;
  long *****ppppplStack_e30;
  ulong uStack_e28;
  float afStack_e20 [4];
  long ****pppplStack_e10;
  undefined1 auStack_e00 [24];
  undefined1 auStack_de8 [24];
  undefined1 auStack_dd0 [24];
  undefined1 auStack_db8 [24];
  undefined1 auStack_da0 [24];
  undefined1 auStack_d88 [24];
  undefined1 auStack_d70 [24];
  undefined1 auStack_d58 [24];
  undefined1 auStack_d40 [24];
  undefined1 auStack_d28 [24];
  undefined1 auStack_d10 [24];
  undefined1 auStack_cf8 [24];
  undefined1 auStack_ce0 [24];
  undefined1 auStack_cc8 [24];
  undefined1 auStack_cb0 [24];
  undefined1 auStack_c98 [24];
  undefined1 auStack_c80 [24];
  undefined1 auStack_c68 [24];
  undefined1 auStack_c50 [24];
  undefined1 auStack_c38 [24];
  undefined1 auStack_c20 [24];
  undefined1 auStack_c08 [24];
  undefined1 auStack_bf0 [24];
  undefined1 auStack_bd8 [24];
  undefined1 auStack_bc0 [24];
  undefined1 auStack_ba8 [24];
  undefined1 auStack_b90 [24];
  undefined1 auStack_b78 [24];
  undefined1 auStack_b60 [24];
  undefined1 auStack_b48 [24];
  undefined1 auStack_b30 [24];
  undefined1 auStack_b18 [24];
  undefined1 auStack_b00 [24];
  undefined1 auStack_ae8 [24];
  undefined1 auStack_ad0 [24];
  undefined1 auStack_ab8 [24];
  undefined1 auStack_aa0 [24];
  undefined1 auStack_a88 [24];
  undefined1 auStack_a70 [24];
  undefined1 auStack_a58 [24];
  long **pplStack_a40;
  long **pplStack_a38;
  long **pplStack_a30;
  long *plStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined1 auStack_a10 [24];
  undefined8 *puStack_9f8;
  undefined1 auStack_9f0 [264];
  undefined **appuStack_8e8 [3];
  undefined ***pppuStack_8d0;
  undefined4 uStack_8c8;
  undefined1 uStack_8c0;
  undefined1 uStack_8b8;
  undefined1 auStack_8b0 [32];
  undefined4 uStack_890;
  undefined1 uStack_888;
  undefined1 uStack_880;
  undefined1 auStack_878 [32];
  undefined4 uStack_858;
  undefined1 uStack_850;
  undefined1 uStack_848;
  undefined1 auStack_840 [32];
  undefined4 uStack_820;
  undefined1 uStack_818;
  undefined1 uStack_810;
  undefined8 *puStack_808;
  undefined8 *puStack_800;
  undefined4 uStack_7e8;
  undefined1 uStack_7e0;
  undefined1 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined4 uStack_7b0;
  undefined1 uStack_7a8;
  undefined1 uStack_7a0;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined4 uStack_770;
  undefined8 uStack_768;
  undefined1 uStack_760;
  undefined8 uStack_750;
  long lStack_748;
  undefined4 uStack_730;
  undefined1 uStack_728;
  undefined1 uStack_720;
  long *****ppppplStack_710;
  long *****ppppplStack_708;
  long *plStack_700;
  undefined4 auStack_6f8 [4];
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined4 uStack_6c8;
  undefined1 uStack_6c4;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_290;
  undefined1 uStack_288;
  undefined1 uStack_280;
  undefined4 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined4 uStack_220;
  undefined1 uStack_218;
  undefined1 uStack_210;
  long *****ppppplStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1e0;
  undefined1 uStack_1d8;
  undefined1 uStack_1d0;
  long ****apppplStack_188 [4];
  undefined4 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_158;
  long ***ppplStack_150;
  long ***ppplStack_148;
  long ***ppplStack_140;
  undefined4 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_120;
  long *****ppppplStack_e0;
  long *****ppppplStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  
  func_0x0001072af7b0();
  ppppplStack_e0 = (long *****)CONCAT44(ppppplStack_e0._4_4_,0x104);
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_70 = extraout_x8;
  func_0x0001072afe50();
  uStack_b8 = 0;
  uStack_98 = 0;
  uStack_94 = 1;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_c0 = extraout_x9;
  func_0x00010743cc34(&ppppplStack_710,&ppppplStack_e0,7);
  func_0x00010743d7bc(auStack_9f0,&ppppplStack_710);
  FUN_107288cd8(&ppppplStack_710);
  FUN_107262330(&ppppplStack_e0);
  puVar12 = (undefined8 *)(param_1 + 0xe48);
  FUN_1072ab574();
  lVar36 = *param_11;
  if (lVar36 == 0) {
    func_0x0001072afe48();
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_DAT_110999a10;
    ppppplVar15 = (long *****)(puVar12 + 3);
    *ppppplVar15 = (long ****)&PTR_DAT_110999a60;
    puVar12[5] = 0;
    puVar12[4] = 0;
    func_0x000100100ed0();
    puVar13 = (undefined8 *)0x90;
    pppplStack_e10 = (long ****)ppppplVar15;
    __Znwm();
  }
  else {
    lVar34 = param_11[1];
    func_0x0001072afe48();
    func_0x0001072b03b8();
    *puVar12 = &PTR_DAT_1109998d0;
    if (lVar34 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10 != 0);
    }
    ppppplVar15 = (long *****)(unaff_x22 + 3);
    *ppppplVar15 = (long ****)&PTR_DAT_110999920;
    unaff_x22[4] = lVar36;
    unaff_x22[5] = lVar34;
    ppppplStack_708 = (long *****)0x0;
    ppppplStack_710 = (long *****)0x0;
    FUN_1072ab65c(&ppppplStack_710);
    puVar13 = (undefined8 *)0x90;
    pppplStack_e10 = (long ****)ppppplVar15;
    __Znwm();
    puVar12 = unaff_x22;
  }
  func_0x0001072b0370();
  *puVar13 = &PTR_FUN_1109999c0;
  puVar13[3] = ppppplVar15;
  puVar13[4] = puVar12;
  pppplStack_e10 = (long ****)0x0;
  ppppplStack_708 = (long *****)0x0;
  ppppplStack_710 = (long *****)0x0;
  puVar13[6] = 0;
  puVar13[5] = 0;
  puVar13[8] = 0;
  puVar13[7] = 0;
  *(undefined4 *)(puVar13 + 9) = 0x3f800000;
  puVar13[10] = 0x32aaaba7;
  puVar13[0xc] = 0;
  puVar13[0xb] = 0;
  puVar13[0xe] = 0;
  puVar13[0xd] = 0;
  puVar13[0x10] = 0;
  puVar13[0xf] = 0;
  puVar13[0x11] = 0;
  FUN_1072ad714(&ppppplStack_710);
  ppppplStack_e0 = (long *****)0x0;
  ppppplStack_d8 = (long *****)0x0;
  ppppplStack_708 = *(long ******)(param_1 + 0x58);
  ppppplStack_710 = *(long ******)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x50) = puVar13 + 3;
  *(long *******)(param_1 + 0x58) = param_3;
  func_0x0001072ac928(&ppppplStack_710);
  func_0x0001072ac928(&ppppplStack_e0);
  pppppplVar32 = (long ******)&pppplStack_e10;
  if (lVar36 == 0) {
    func_0x0001072ad99c();
  }
  else {
    FUN_1072ad6a4();
  }
  puVar12 = (undefined8 *)(param_1 + 0xe18);
  pppplStack_e38 = (long ****)0x0;
  lStack_e40 = 0;
  uStack_e28 = 0;
  ppppplStack_e30 = (long *****)0x0;
  afStack_e20[0] = 1.0;
  uVar27 = *(ulong *)(param_2 + 0x48);
  puVar18 = (ulong *)(param_2 + 0x48);
  if ((uVar27 & 1) != 0) {
    puVar18 = (ulong *)(uVar27 + 7);
  }
  puVar2 = puVar18 + *(int *)(param_2 + 0x50);
  pppppplVar19 = param_3;
  for (; pppppplVar14 = pppppplVar32, puVar18 != puVar2; puVar18 = puVar18 + 1) {
    ppppplVar35 = (long *****)*puVar18;
    pppplVar37 = ppppplVar35[2];
    func_0x0001072aff20();
    ppppplVar25 = (long *****)((ulong)pppplVar37 & 0xfffffffffffffffc);
    plStack_700 = (long *)0x1;
    ppppplStack_710 = (long *****)pppppplVar14;
    ppppplStack_708 = (long *****)&ppppplStack_e30;
    *pppppplVar14 = (long *****)0x0;
    pppppplVar14[1] = (long *****)0x0;
    bVar4 = *(byte *)((long)ppppplVar25 + 0x17);
    ppppplVar43 = (long *****)ppppplVar25[1];
    uVar9 = (char)bVar4 < '\0';
    ppppplVar15 = (long *****)*ppppplVar25;
    if (!(bool)uVar9) {
      ppppplVar15 = ppppplVar25;
    }
    pppppplVar32 = pppppplVar14 + 2;
    *pppppplVar32 = ppppplVar15;
    if (!(bool)uVar9) {
      ppppplVar43 = (long *****)(ulong)bVar4;
    }
    pppppplVar14[3] = ppppplVar43;
    pppppplVar14[4] = ppppplVar35;
    func_0x0001001030f4(ppppplVar15,(long)ppppplVar15 + (long)ppppplVar43);
    pppppplVar14[1] = ppppplVar15;
    ppppplVar15 = *pppppplVar32;
    func_0x0001001030f4(ppppplVar15,(long)ppppplVar15 + (long)pppppplVar14[3]);
    pppplVar37 = pppplStack_e38;
    pppppplVar14[1] = ppppplVar15;
    if ((long *****)pppplStack_e38 != (long *****)0x0) {
      uVar27 = (long)pppplStack_e38 - 1;
      if (((ulong)pppplStack_e38 & uVar27) == 0) {
        ppppplVar43 = (long *****)(uVar27 & (ulong)ppppplVar15);
        uVar9 = false;
      }
      else {
        uVar9 = (long)ppppplVar15 - (long)pppplStack_e38 < 0;
        ppppplVar43 = ppppplVar15;
        if (pppplStack_e38 <= ppppplVar15) {
          uVar28 = 0;
          if ((long *****)pppplStack_e38 != (long *****)0x0) {
            uVar28 = (ulong)ppppplVar15 / (ulong)pppplStack_e38;
          }
          ppppplVar43 = (long *****)((long)ppppplVar15 - uVar28 * (long)pppplStack_e38);
        }
      }
      plVar38 = *(long **)(lStack_e40 + (long)ppppplVar43 * 8);
      if (plVar38 != (long *)0x0) {
        do {
          while( true ) {
            plVar38 = (long *)*plVar38;
            if (plVar38 == (long *)0x0) goto LAB_1072a2758;
            ppppplVar25 = (long *****)plVar38[1];
            uVar9 = (long)ppppplVar25 - (long)ppppplVar15 < 0;
            if (ppppplVar25 != ppppplVar15) break;
            pfVar16 = afStack_e20;
            FUN_10728905c(pfVar16,plVar38 + 2,pppppplVar32);
            if (((ulong)pfVar16 & 1) != 0) goto LAB_1072a295c;
          }
          if (((ulong)pppplVar37 & uVar27) == 0) {
            ppppplVar25 = (long *****)((ulong)ppppplVar25 & uVar27);
          }
          else if (pppplVar37 <= ppppplVar25) {
            uVar28 = 0;
            if ((long *****)pppplVar37 != (long *****)0x0) {
              uVar28 = (ulong)ppppplVar25 / (ulong)pppplVar37;
            }
            ppppplVar25 = (long *****)((long)ppppplVar25 - uVar28 * (long)pppplVar37);
          }
          uVar9 = (long)ppppplVar25 - (long)ppppplVar43 < 0;
        } while (ppppplVar25 == ppppplVar43);
      }
    }
LAB_1072a2758:
    if (((long *****)pppplVar37 == (long *****)0x0) ||
       (func_0x0001002ab830((float)(uStack_e28 + 1),afStack_e20[0],(float)pppplVar37), (bool)uVar9))
    {
      bVar8 = (long *****)0x2 < pppplVar37;
      bVar10 = (long *****)pppplVar37 == (long *****)0x3;
      func_0x0001072af7c0((long)pppplVar37 << 1);
      ppppplVar15 = extraout_x8_00;
      if (!bVar8 || bVar10) {
        ppppplVar15 = extraout_x9_00;
      }
      if ((long)ppppplVar15 - 1U == 0) {
        ppppplVar15 = (long *****)0x2;
      }
      else if (((ulong)ppppplVar15 & (long)ppppplVar15 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      pppplVar37 = pppplStack_e38;
      if (pppplStack_e38 < ppppplVar15) {
LAB_1072a284c:
        if ((ulong)ppppplVar15 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_1072a4454;
        }
        lVar36 = (long)ppppplVar15 << 3;
        __Znwm(lVar36);
        FUN_1072ada04(&lStack_e40,lVar36);
        ppppplVar43 = (long *****)0x0;
        lVar36 = lStack_e40;
        pppplStack_e38 = (long ****)ppppplVar15;
        while (ppppplVar15 != ppppplVar43) {
          func_0x0001072afffc();
          lVar36 = extraout_x8_01;
          ppppplVar43 = extraout_x9_01;
        }
        if ((long ******)ppppplStack_e30 != (long ******)0x0) {
          ppppplVar43 = (long *****)ppppplStack_e30[1];
          uVar28 = (long)ppppplVar15 - 1;
          uVar27 = 0;
          if (ppppplVar15 != (long *****)0x0) {
            uVar27 = (ulong)ppppplVar43 / (ulong)ppppplVar15;
          }
          ppppplVar25 = ppppplVar43;
          if (ppppplVar15 <= ppppplVar43) {
            ppppplVar25 = (long *****)((long)ppppplVar43 - uVar27 * (long)ppppplVar15);
          }
          if (((ulong)ppppplVar15 & uVar28) == 0) {
            ppppplVar25 = (long *****)((ulong)ppppplVar43 & uVar28);
          }
          *(long *******)(lVar36 + (long)ppppplVar25 * 8) = &ppppplStack_e30;
          pppppplVar32 = (long ******)ppppplStack_e30;
          while (pppppplVar19 = pppppplVar32, pppppplVar32 = (long ******)*pppppplVar19,
                pppppplVar32 != (long ******)0x0) {
            ppppplVar43 = pppppplVar32[1];
            if (((ulong)ppppplVar15 & uVar28) == 0) {
              ppppplVar43 = (long *****)((ulong)ppppplVar43 & uVar28);
            }
            else if (ppppplVar15 <= ppppplVar43) {
              uVar27 = 0;
              if (ppppplVar15 != (long *****)0x0) {
                uVar27 = (ulong)ppppplVar43 / (ulong)ppppplVar15;
              }
              ppppplVar43 = (long *****)((long)ppppplVar43 - uVar27 * (long)ppppplVar15);
            }
            if (ppppplVar43 != ppppplVar25) {
              if (*(long *)(lVar36 + (long)ppppplVar43 * 8) == 0) {
                *(long *******)(lVar36 + (long)ppppplVar43 * 8) = pppppplVar19;
                ppppplVar25 = ppppplVar43;
              }
              else {
                *pppppplVar19 = *pppppplVar32;
                func_0x0001072af75c();
                lVar36 = extraout_x8_02;
                uVar28 = extraout_x9_02;
                pppppplVar32 = extraout_x10;
                ppppplVar25 = extraout_x11;
              }
            }
          }
        }
      }
      else if (ppppplVar15 < pppplStack_e38) {
        ppppplVar43 = (long *****)(long)((float)uStack_e28 / afStack_e20[0]);
        if ((pppplStack_e38 < (long *****)0x3) ||
           (((ulong)pppplStack_e38 & (long)pppplStack_e38 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x0001072af6cc();
        }
        if (ppppplVar15 <= ppppplVar43) {
          ppppplVar15 = ppppplVar43;
        }
        if (ppppplVar15 < pppplVar37) {
          if (ppppplVar15 != (long *****)0x0) goto LAB_1072a284c;
          FUN_1072ada04(&lStack_e40,0);
          pppplStack_e38 = (long ****)0x0;
        }
      }
    }
    ppppplVar15 = pppppplVar14[1];
    uVar27 = (long)pppplStack_e38 - 1;
    if (((ulong)pppplStack_e38 & uVar27) == 0) {
      ppppplVar15 = (long *****)(uVar27 & (ulong)ppppplVar15);
    }
    else if (pppplStack_e38 <= ppppplVar15) {
      uVar28 = 0;
      if ((long *****)pppplStack_e38 != (long *****)0x0) {
        uVar28 = (ulong)ppppplVar15 / (ulong)pppplStack_e38;
      }
      ppppplVar15 = (long *****)((long)ppppplVar15 - uVar28 * (long)pppplStack_e38);
    }
    puVar13 = *(undefined8 **)(lStack_e40 + (long)ppppplVar15 * 8);
    if (puVar13 == (undefined8 *)0x0) {
      *pppppplVar14 = ppppplStack_e30;
      *(long *******)(lStack_e40 + (long)ppppplVar15 * 8) = &ppppplStack_e30;
      ppppplStack_e30 = (long *****)pppppplVar14;
      if (*pppppplVar14 != (long *****)0x0) {
        ppppplVar15 = (long *****)(*pppppplVar14)[1];
        if (((ulong)pppplStack_e38 & uVar27) == 0) {
          ppppplVar15 = (long *****)((ulong)ppppplVar15 & uVar27);
        }
        else if (pppplStack_e38 <= ppppplVar15) {
          uVar27 = 0;
          if ((long *****)pppplStack_e38 != (long *****)0x0) {
            uVar27 = (ulong)ppppplVar15 / (ulong)pppplStack_e38;
          }
          ppppplVar15 = (long *****)((long)ppppplVar15 - uVar27 * (long)pppplStack_e38);
        }
        *(long *******)(lStack_e40 + (long)ppppplVar15 * 8) = pppppplVar14;
      }
    }
    else {
      *pppppplVar14 = (long *****)*puVar13;
      *puVar13 = pppppplVar14;
    }
    uStack_e28 = uStack_e28 + 1;
    ppppplStack_710 = (long *****)0x0;
LAB_1072a295c:
    pppppplVar32 = &ppppplStack_710;
    FUN_1072ada1c();
    pppppplVar19 = pppppplVar14;
  }
  ppppplVar15 = *(long ******)(param_1 + 0x50);
  lStack_e48 = *(long *)(param_1 + 0x58);
  lVar36 = lStack_e48;
  pppplStack_e50 = (long ****)ppppplVar15;
  if (lStack_e48 != 0) {
    do {
      func_0x0001072afaec();
      ppppplVar15 = extraout_x8_03;
      lVar36 = lStack_e48;
    } while (extraout_w11 != 0);
  }
  plStack_700 = (long *)0x0;
  if (uStack_e28 != 0) {
    plStack_700 = &lStack_e40;
  }
  pppplStack_e50 = (long ****)0x0;
  lStack_e48 = 0;
  ppppplStack_710 = ppppplVar15;
  ppppplStack_708 = (long *****)lVar36;
  FUN_107286be8(&ppppplStack_710,param_1 + 0x60);
  func_0x0001072ac928(&ppppplStack_710);
  ppppplVar15 = &pppplStack_e50;
  func_0x0001072ac928();
  ppppplVar43 = (long *****)*param_10;
  ppppplVar25 = (long *****)param_10[1];
  func_0x0001072afe48();
  func_0x0001072b0370();
  *ppppplVar15 = (long ****)&PTR_FUN_110999af0;
  ppppplStack_710 = ppppplVar43;
  ppppplStack_708 = ppppplVar25;
  if (ppppplVar25 != (long *****)0x0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_00 != 0);
    do {
      func_0x0001072af838();
    } while (extraout_w10_01 != 0);
  }
  pppppplVar19[3] = (long *****)&PTR_DAT_110999b40;
  pppppplVar19[4] = ppppplVar43;
  pppppplVar19[5] = ppppplVar25;
  func_0x0001072adad8(&ppppplStack_710);
  ppplStack_148 = (long ***)0x0;
  ppplStack_150 = (long ***)0x0;
  ppppplStack_e0 = (long *****)(pppppplVar19 + 3);
  ppppplStack_d8 = (long *****)pppppplVar19;
  func_0x0001078bbff8(param_1 + 0xe08,&ppppplStack_e0);
  func_0x0001072adb2c(&ppppplStack_e0);
  func_0x0001072adb08(&ppplStack_150);
  uStack_e68 = 0;
  uStack_e60 = 0;
  uVar27 = *(ulong *)(param_2 + 0x18);
  uStack_e58 = 0;
  puVar18 = (ulong *)(param_2 + 0x18);
  if ((uVar27 & 1) != 0) {
    puVar18 = (ulong *)(uVar27 + 7);
  }
  for (lVar36 = (long)*(int *)(param_2 + 0x20) << 3; lVar36 != 0; lVar36 = lVar36 + -8) {
    func_0x000107933210(&ppppplStack_710,0,*puVar18);
    FUN_1072aa360(&uStack_e68,&ppppplStack_710);
    func_0x0001079332b0(&ppppplStack_710);
    puVar18 = puVar18 + 1;
  }
  uStack_e88 = 0;
  uStack_e90 = 0;
  uStack_e78 = 0;
  uStack_e80 = 0;
  uVar27 = *(ulong *)(param_2 + 0x30);
  uStack_e70 = 0x3f800000;
  puVar18 = (ulong *)(param_2 + 0x30);
  if ((uVar27 & 1) != 0) {
    puVar18 = (ulong *)(uVar27 + 7);
  }
  for (lVar36 = (long)*(int *)(param_2 + 0x38) << 3; lVar36 != 0; lVar36 = lVar36 + -8) {
    func_0x0001002a9bd4(&ppppplStack_710,*(ulong *)(*puVar18 + 0x10) & 0xfffffffffffffffc,
                        *(ulong *)(*puVar18 + 0x18) & 0xfffffffffffffffc);
    func_0x0001002a9e14(&uStack_e90,&ppppplStack_710);
    func_0x0001002aa0bc(&ppppplStack_710);
    puVar18 = puVar18 + 1;
  }
  (**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,&uStack_e68);
  func_0x0001072adb50(param_1 + 0xe90,&uStack_e90);
  puVar13 = (undefined8 *)0xe8;
  __Znwm();
  func_0x0001072b0370();
  ppppplVar15 = (long *****)(puVar13 + 3);
  *puVar13 = &PTR_FUN_1109990b0;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  pppppplVar19[0x19] = (long *****)0x0;
  pppppplVar19[0x18] = (long *****)0x0;
  pppppplVar19[0x1b] = (long *****)0x0;
  pppppplVar19[0x1a] = (long *****)0x0;
  *(undefined4 *)(pppppplVar19 + 0x1c) = 0x3f800000;
  param_3 = param_3 + 2;
  ppppplStack_710 = ppppplVar15;
  ppppplStack_708 = (long *****)pppppplVar19;
  while (param_3 = (long ******)*param_3, param_3 != (long ******)0x0) {
    FUN_1072aa740(ppppplStack_710,param_3 + 2,param_3 + 5);
  }
  func_0x0001072a5d60(param_1 + 0xeb8,&ppppplStack_710);
  func_0x0001072ac4dc(&ppppplStack_710);
  func_0x0001072a5d84(param_1 + 0xec8,param_4);
  lVar36 = *(long *)(param_1 + 0xed8);
  uStack_e98 = param_6[1];
  uStack_ea0 = *param_6;
  if (param_6[1] != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_02 != 0);
  }
  FUN_1072ab574(lVar36 + 0x10);
  uVar40 = uStack_ea0;
  uStack_ea0 = 0;
  uStack_e98 = 0;
  func_0x0001072b05f4(uVar40);
  func_0x00010726ee4c();
  __ZNSt3__15mutex6unlockEv(lVar36 + 0x10);
  func_0x0001072b01a0();
  lVar36 = *(long *)(param_1 + 0x1028);
  uStack_ea8 = param_7[1];
  uStack_eb0 = *param_7;
  if (param_7[1] != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_03 != 0);
  }
  FUN_1072ab574(lVar36 + 0x10);
  uVar40 = uStack_eb0;
  uStack_eb0 = 0;
  uStack_ea8 = 0;
  func_0x0001072b05f4(uVar40);
  func_0x0001072adb8c();
  __ZNSt3__15mutex6unlockEv(lVar36 + 0x10);
  func_0x0001072adb8c(&uStack_eb0);
  func_0x0001072a5dbc(param_1 + 0x1038,param_8);
  *(int *)(param_1 + 0xe88) = *(int *)(param_1 + 0xe88) + 1;
  func_0x0001072a5df4(param_1 + 0xe38,param_5);
  ppuVar3 = &PTR_PTR_113233e38;
  if (*(undefined ***)(param_2 + 0x78) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 0x78);
  }
  func_0x00010793c744(param_1 + 0xee8,ppuVar3);
  lVar36 = *(long *)(param_1 + 0x18);
  while ((lVar36 != *(long *)(param_1 + 0x20) &&
         ((*(long *)(lVar36 + 8) == 0 || (*(long *)(*(long *)(lVar36 + 8) + 8) == -1))))) {
    lVar36 = lVar36 + 0x10;
  }
  FUN_1072a6080(&uStack_750);
  puVar17 = (undefined8 *)(*(ulong *)(param_1 + 0xf00) & 0xfffffffffffffffc);
  lVar36 = (long)*(char *)((long)puVar17 + 0x17);
  puVar13 = puVar17;
  if (lVar36 < 0) {
    puVar13 = (undefined8 *)*puVar17;
    lVar36 = puVar17[1];
  }
  func_0x000107859b70(puVar13,lVar36);
  uStack_2b0._0_5_ = SUB85(puVar13,0);
  if ((ulong)puVar13 >> 0x20 != 0) {
    func_0x000100060964(&ppppplStack_e0,&UNK_10f408c56);
    func_0x000107859d40(&ppppplStack_200,&uStack_2b0);
    FUN_1072625b4(&ppplStack_150,&ppppplStack_200);
    FUN_107277488(&ppppplStack_710,&ppplStack_150);
    func_0x0001072b008c();
    func_0x0001072afd08();
    func_0x0001072b04a0();
    func_0x0001072b018c();
    func_0x000104c2f714(&ppppplStack_e0);
    func_0x000100060964(&ppplStack_150,&UNK_10f408c62);
    puVar18 = &uStack_2b0;
    func_0x000107859da8();
    ppppplStack_d8 = (long *****)(double)((ulong)puVar18 & 0xffffffff);
    uStack_78 = 2;
    func_0x0001072b008c();
    func_0x0001072afd08();
    func_0x0001072b04a0();
  }
  func_0x000100060964(&ppppplStack_200,&UNK_10f408c72);
  func_0x0001072b0458(*(undefined8 *)(param_1 + 0xef8),&uStack_2b0);
  FUN_107277488(&ppplStack_150,&uStack_2b0);
  func_0x0001072b008c();
  func_0x0001072afd08();
  func_0x0001072b046c();
  func_0x000104c2f714(&ppppplStack_200);
  func_0x000104c2f64c(apppplStack_188);
  func_0x000100060964(&ppppplStack_200,&DAT_10f36707f);
  func_0x000104c2f1f0(apppplStack_188,&ppppplStack_200);
  func_0x000104c2f714(&ppppplStack_200);
  func_0x000100060964(&uStack_2b0,&UNK_10f408c7b);
  FUN_107277488(&ppppplStack_200,apppplStack_188);
  func_0x0001072b008c();
  func_0x0001072afd08();
  func_0x0001072b046c();
  func_0x000100060964(&uStack_240,&UNK_10f408c88);
  uStack_2a8 = uStack_2a8 & 0xffffffffffffff00;
  uStack_248 = 1;
  func_0x0001072b008c();
  func_0x0001072afd08();
  func_0x000104c2f714(&uStack_240);
  func_0x000107879b50(uStack_750);
  lStack_238 = lStack_748;
  uStack_240 = uStack_750;
  lStack_748 = 0;
  uStack_750 = 0;
  func_0x000107879b34(&uStack_240);
  FUN_1072ae334(&uStack_240);
  func_0x000104c2f714(apppplStack_188);
  FUN_1072ae334(&uStack_750);
  if (*param_9 != 0) {
    if (*(char *)(param_1 + 0x1020) == '\x01') {
      func_0x0001072aacbc(param_1 + 0x1010);
    }
    else {
      *(long *)(param_1 + 0x1010) = *param_9;
      lVar36 = param_9[1];
      *(long *)(param_1 + 0x1018) = lVar36;
      if (lVar36 != 0) {
        do {
          func_0x0001072af838();
        } while (extraout_w10_04 != 0);
      }
      *(undefined1 *)(param_1 + 0x1020) = 1;
    }
  }
  lVar36 = param_1 + 0x10c0;
  func_0x0001072a5e2c(lVar36,param_12);
  func_0x00010785f1f4();
  ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
  lVar36 = lVar36 + 0x820;
  func_0x0001072afbf4(lVar36);
  func_0x00010785f1f4();
  ppppplStack_e0 = (long *****)((ulong)ppppplStack_e0 & 0xffffffffffffff00);
  lVar36 = lVar36 + 0x830;
  FUN_10724e2c8(lVar36,&ppppplStack_e0);
  func_0x00010785f1f4();
  ppplStack_150 = (long ***)((ulong)ppplStack_150 & 0xffffffffffffff00);
  FUN_10724e2c8(lVar36 + 0x840,&ppplStack_150);
  ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
  iVar11 = (int)param_1 + 400;
  func_0x0001072afbf4();
  uRam00000001131ada68 = (undefined1)iVar11;
  if (iVar11 != 0) {
    puRam00000001138369a8 = &UNK_10785e688;
  }
  ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
  cVar5 = (char)param_1 + -0x50;
  func_0x0001072afbf4();
  cRam00000001138369b0 = cVar5;
  ppppplStack_710 = (long *****)CONCAT44(ppppplStack_710._4_4_,0xffffffff);
  lVar36 = param_1 + 0x9c0;
  func_0x0001072a5e64(lVar36,&ppppplStack_710);
  uRam0000000113230840 = (undefined4)lVar36;
  ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
  func_0x0001072afbf4(param_1 + 0x370);
  func_0x0001072affcc(0x113822cb8);
  func_0x0001072afbf4(param_1 + 0x620);
  func_0x0001072affcc(0x113822cb9);
  func_0x0001072afbf4(param_1 + 0x6a0);
  func_0x0001072affcc(0x113822cba);
  func_0x0001072afbf4(param_1 + 0x900);
  func_0x0001072affcc(0x113822cbb);
  func_0x0001072afbf4(param_1 + 0x8b0);
  func_0x0001072affcc(0x1138369b8);
  func_0x0001072afbf4(param_1 + 0x8c0);
  func_0x0001072affcc(0x1138369b9);
  func_0x0001072afbf4(param_1 + 0x8d0);
  func_0x0001072affcc(0x1138369ba);
  func_0x0001072afbf4(param_1 + 0x9a0);
  func_0x0001072affcc(0x113822c88);
  cVar5 = (char)param_1 + -0x50;
  func_0x0001072afbf4();
  cRam0000000113822c89 = cVar5;
  func_0x0001072b0418();
  pppplVar37 = (long ****)(param_1 + 0x60);
  func_0x00010785eeac(pppplVar37,&ppppplStack_710);
  func_0x0001072b0030();
  if ((((uint)pppplVar37 ^ 0xffffffff) & 0x101) == 0) {
    ppplStack_148 = (long ***)0x0;
    ppplStack_150 = (long ***)0x0;
    ppplStack_140 = (long ***)0x0;
    ppppplStack_710 = (long *****)&ppplStack_150;
    ppppplStack_708 = (long *****)((ulong)ppppplStack_708 & 0xffffffffffffff00);
    pppplVar37 = (long ****)0x48;
    __Znwm();
    ppplStack_140 = (long ***)(pppplVar37 + 9);
    ppplStack_148 = (long ***)pppplVar37;
    for (lVar36 = 0; lVar36 != 0x48; lVar36 = lVar36 + 8) {
      *ppplStack_148 = (long **)*(long ****)(&UNK_10de2a3a8 + lVar36);
      ppplStack_148 = ppplStack_148 + 1;
    }
    ppppplStack_708 = (long *****)CONCAT71(ppppplStack_708._1_7_,1);
    ppplStack_150 = (long ***)pppplVar37;
    FUN_1072aadf0(&ppppplStack_710);
    FUN_107289330(&ppppplStack_200);
    ppppplStack_e0 = (long *****)((ulong)ppppplStack_e0 & 0xffffffff00000000);
    uStack_d0 = uStack_1f8;
    ppppplStack_d8 = ppppplStack_200;
    ppppplStack_200 = (long *****)0x0;
    uStack_1f8 = 0;
    func_0x000104c33108(&ppppplStack_200);
    pppplVar37 = (long ****)ppplStack_148;
    pppplVar39 = (long ****)ppplStack_150;
    while (pppplVar39 != pppplVar37) {
      ppppplStack_708 = (long *****)(long)*(int *)pppplVar39;
      iVar11 = *(int *)((long)pppplVar39 + 4);
      pppppplVar32 = (long ******)0x0;
      if (6 < (int)ppppplStack_e0 - 1U) {
        pppppplVar32 = &ppppplStack_d8;
      }
      ppppplStack_710._0_4_ = 4;
      func_0x0001072aacf4(pppppplVar32,&ppppplStack_710);
      func_0x0001072b0038();
      pppppplVar32 = (long ******)0x0;
      if (6 < (int)ppppplStack_e0 - 1U) {
        pppppplVar32 = &ppppplStack_d8;
      }
      ppppplStack_710 = (long *****)CONCAT44(ppppplStack_710._4_4_,4);
      ppppplStack_708 = (long *****)(long)iVar11;
      func_0x0001072aacf4(pppppplVar32,&ppppplStack_710);
      func_0x0001072b0038();
      pppplVar39 = pppplVar39 + 1;
    }
    FUN_1072aae18(&ppplStack_150);
    func_0x00010002b838(&ppplStack_150,&UNK_10f40859c);
    FUN_107268350(&ppppplStack_710,&ppppplStack_e0);
    func_0x00010785edd4(param_1 + 0x60,&ppplStack_150,&ppppplStack_710);
    func_0x0001072b0038();
    func_0x0001072b01d4();
    func_0x0001072b0420();
  }
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) {
    lVar36 = *(long *)(param_1 + 0x1000);
    if (lVar36 == 0) {
      uVar27 = *(ulong *)(*(long *)(param_2 + 0x80) + 0x10);
      puVar13 = (undefined8 *)0x58;
      __Znwm();
      func_0x0001072b0370();
      *puVar13 = &PTR_FUN_110999b98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&pplStack_a40,uVar27 & 0xfffffffffffffffc);
      pplVar6 = pplStack_a30;
      ppplVar31 = *(long ****)(param_1 + 0xe18);
      ppplVar29 = *(long ****)(param_1 + 0xe20);
      if (ppplVar29 != (long ***)0x0) {
        ppplVar1 = ppplVar29 + 1;
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
          if (bVar10) {
            *ppplVar1 = (long **)((long)*ppplVar1 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pppplVar37[3] = (long ***)&PTR_DAT_11099f738;
      pppplVar37[5] = (long ***)pplStack_a38;
      pppplVar37[4] = (long ***)pplStack_a40;
      pplStack_a38 = (long **)0x0;
      pplStack_a40 = (long **)0x0;
      pplStack_a30 = (long **)0x0;
      pppplVar37[6] = (long ***)pplVar6;
      pppplVar37[7] = (long ***)(param_1 + 0xc50);
      pppplVar37[8] = ppplVar31;
      pppplVar37[9] = ppplVar29;
      ppppplStack_708 = (long *****)0x0;
      ppppplStack_710 = (long *****)0x0;
      pppplVar37[10] = (long ***)0x0;
      func_0x00010726eedc(&ppppplStack_710);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pplStack_a40);
      ppppplStack_e0 = (long *****)0x0;
      ppppplStack_d8 = (long *****)0x0;
      ppppplStack_708 = *(long ******)(param_1 + 0x1008);
      ppppplStack_710 = *(long ******)(param_1 + 0x1000);
      *(long *****)(param_1 + 0x1000) = pppplVar37 + 3;
      *(long *****)(param_1 + 0x1008) = pppplVar37;
      func_0x0001072ac970(&ppppplStack_710);
      func_0x0001072ac970(&ppppplStack_e0);
      func_0x00010b217494();
      func_0x0001072b0418();
      func_0x0001072b0030();
      lVar36 = *(long *)(param_1 + 0x1000);
    }
    FUN_1073119ec(lVar36,*(undefined1 *)(param_2 + 0xac));
  }
  FUN_1072a5e8c(param_1);
  if (((*(uint *)(param_2 + 0x10) >> 2 & 1) != 0) || ((*(uint *)(param_2 + 0x10) >> 1 & 1) != 0)) {
    func_0x000107527e54(&ppppplStack_710);
    uVar23 = *(uint *)(param_2 + 0x10);
    if ((uVar23 >> 2 & 1) != 0) {
      func_0x0001072b0178(*(undefined8 *)(*(long *)(param_2 + 0x88) + 0x10),auStack_ec8);
      func_0x000100066230(ppppplStack_710 + 9,auStack_ec8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ec8);
      uVar23 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar23 >> 1 & 1) != 0) {
      func_0x0001072b0178(*(undefined8 *)(*(long *)(param_2 + 0x80) + 0x10),auStack_ee0);
      func_0x000100066230(ppppplStack_710 + 6,auStack_ee0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ee0);
    }
    FUN_1072a5c64(param_1,&ppppplStack_710);
    func_0x000107527f90(&ppppplStack_710);
  }
  plVar38 = (long *)*puVar12;
  func_0x0001072b0418();
  (**(code **)(*plVar38 + 0x20))(plVar38,&ppppplStack_710,*(int *)(param_2 + 0xb0) == 1);
  func_0x0001072b0030();
  puVar13 = (undefined8 *)0x1e0;
  __Znwm();
  func_0x0001072b0370();
  puVar17 = puVar13 + 3;
  *puVar13 = &PTR_DAT_110999be8;
  func_0x000107362174(puVar17,param_1 + 0x1000);
  ppppplStack_e0 = (long *****)0x0;
  ppppplStack_d8 = (long *****)0x0;
  ppppplStack_708 = *(long ******)(param_1 + 0x1050);
  ppppplStack_710 = *(long ******)(param_1 + 0x1048);
  *(undefined8 **)(param_1 + 0x1048) = puVar17;
  *(long **)(param_1 + 0x1050) = plVar38;
  func_0x0001072ac9b8(&ppppplStack_710);
  func_0x0001072ac9b8(&ppppplStack_e0);
  ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
  plVar38 = (long *)(param_1 + 0x3d0);
  func_0x0001072afbf4();
  ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
  iVar11 = (int)param_1 + 0x3e0;
  func_0x0001072afbf4();
  uVar24 = 1;
  if (iVar11 == 0) {
    uVar24 = 2;
  }
  if ((bRam00000001136ca1c8 & 1) == 0) {
    iVar11 = 0x136ca1c8;
    ___cxa_guard_acquire();
    if (iVar11 != 0) {
      func_0x00010002b838(auStack_a58,"annotations");
      func_0x00010002b838(auStack_a88,"annotations");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_a70,auStack_a88);
      FUN_1072aae30(&ppppplStack_e0,auStack_a70);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,1);
      uStack_b8 = uStack_b8 & 0xffffffffffffff00;
      uStack_b0 = uStack_b0 & 0xffffffffffffff00;
      FUN_1072ab170(&ppppplStack_710,auStack_a58,&ppppplStack_e0);
      func_0x00010002b838(auStack_aa0,&UNK_10f408cb5);
      func_0x00010002b838(auStack_ad0,&UNK_10f408cb5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_ab8,auStack_ad0);
      FUN_1072aae30(&ppplStack_150,auStack_ab8);
      uStack_130 = 1;
      uStack_128 = 0;
      uStack_120 = 0;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_ae8,&DAT_10f391e20);
      func_0x00010002b838(auStack_b18,&DAT_10f391e20);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_b00,auStack_b18);
      FUN_1072aae30(&ppppplStack_200,auStack_b00);
      uStack_1e0 = 1;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_b30,&DAT_10f408cc1);
      func_0x00010002b838(auStack_b60,&DAT_10f408cc1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_b48,auStack_b60);
      FUN_1072aae30(&uStack_2b0,auStack_b48);
      uStack_290 = 1;
      uStack_288 = 0;
      uStack_280 = 0;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_b78,&UNK_10f408cca);
      func_0x00010002b838(auStack_ba8,&UNK_10f408cca);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_b90,auStack_ba8);
      FUN_1072aae30(apppplStack_188,auStack_b90);
      uStack_168 = 1;
      uStack_160 = 0;
      uStack_158 = 0;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_bc0,"memories");
      func_0x00010002b838(auStack_bf0,"memories");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_bd8,auStack_bf0);
      FUN_1072aae30(&uStack_240,auStack_bd8);
      uStack_220 = 1;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_c08,&DAT_10f391daa);
      func_0x00010002b838(auStack_c38,&DAT_10f391daa);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_c20,auStack_c38);
      FUN_1072aae30(&uStack_750,auStack_c20);
      uStack_730 = 1;
      uStack_728 = 0;
      uStack_720 = 0;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_c50,&DAT_10f391e33);
      func_0x00010002b838(auStack_c80,&DAT_10f391e33);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_c68,auStack_c80);
      FUN_1072aae30(&uStack_790,auStack_c68);
      uStack_770 = 1;
      uStack_768 = 0x8cd0e3a000;
      uStack_760 = 1;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_c98,"favorites");
      func_0x00010002b838(auStack_cc8,"favorites");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_cb0,auStack_cc8);
      FUN_1072aae30(&uStack_7d0,auStack_cb0);
      uVar41 = SUB84(plVar38,0);
      uStack_7a8 = 0;
      uStack_7a0 = 0;
      uStack_7b0 = uVar41;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_ce0,&DAT_10f301a6d);
      func_0x00010002b838(auStack_d10,&DAT_10f301a6d);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_cf8,auStack_d10);
      FUN_1072aae30(&puStack_808,auStack_cf8);
      uStack_7e0 = 0;
      uStack_7d8 = 0;
      uStack_7e8 = uVar41;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_d28,&DAT_10f391dce);
      func_0x00010002b838(auStack_d58,&DAT_10f391dce);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_d40,auStack_d58);
      FUN_1072aae30(auStack_840,auStack_d40);
      uStack_818 = 0;
      uStack_810 = 0;
      uStack_820 = uVar41;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_d70,&DAT_10f391db3);
      func_0x00010002b838(auStack_da0,&DAT_10f391db3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_d88,auStack_da0);
      FUN_1072aae30(auStack_878,auStack_d88);
      uStack_850 = 0;
      uStack_848 = 0;
      uStack_858 = uVar41;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_db8,&UNK_10f408cdf);
      func_0x00010002b838(auStack_de8,&UNK_10f408cdf);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_dd0,auStack_de8);
      FUN_1072aae30(auStack_8b0,auStack_dd0);
      uStack_888 = 0;
      uStack_880 = 0;
      uStack_890 = uVar41;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_e00,&DAT_10f34b957);
      pppuStack_8d0 = appuStack_8e8;
      appuStack_8e8[0] = &PTR_FUN_110999180;
      uStack_8c0 = 0;
      uStack_8b8 = 0;
      uStack_8c8 = uVar24;
      func_0x0001072afc14();
      lVar36 = 0;
      plRam00000001136ca1d8 = (long *)0x0;
      lRam00000001136ca1d0 = 0;
      uRam00000001136ca1e8 = 0;
      plRam00000001136ca1e0 = (long *)0x0;
      fRam00000001136ca1f0 = 1.0;
      do {
        uVar9 = lVar36 + -0x460 < 0;
        if (lVar36 == 0x460) goto LAB_1072a4274;
        lVar34 = (long)&ppppplStack_710 + lVar36;
        plVar30 = (long *)0x1136ca1e8;
        func_0x000100102e7c(0x1136ca1e8,lVar34);
        plVar21 = plRam00000001136ca1d8;
        plVar20 = plVar30;
        if (plRam00000001136ca1d8 != (long *)0x0) {
          uVar27 = (long)plRam00000001136ca1d8 - 1;
          if (((ulong)plRam00000001136ca1d8 & uVar27) == 0) {
            plVar38 = (long *)(uVar27 & (ulong)plVar30);
            uVar9 = false;
          }
          else {
            uVar9 = (long)plVar30 - (long)plRam00000001136ca1d8 < 0;
            plVar38 = plVar30;
            if (plRam00000001136ca1d8 <= plVar30) {
              uVar28 = 0;
              if (plRam00000001136ca1d8 != (long *)0x0) {
                uVar28 = (ulong)plVar30 / (ulong)plRam00000001136ca1d8;
              }
              plVar38 = (long *)((long)plVar30 - uVar28 * (long)plRam00000001136ca1d8);
            }
          }
          plVar42 = *(long **)(lRam00000001136ca1d0 + (long)plVar38 * 8);
          if (plVar42 != (long *)0x0) {
            do {
              while( true ) {
                plVar42 = (long *)*plVar42;
                if (plVar42 == (long *)0x0) goto LAB_1072a3fd4;
                plVar26 = (long *)plVar42[1];
                uVar9 = (long)plVar26 - (long)plVar30 < 0;
                if (plVar26 != plVar30) break;
                plVar20 = plVar42 + 2;
                func_0x0001000e107c(plVar20,lVar34);
                if (((ulong)plVar20 & 1) != 0) goto LAB_1072a4268;
              }
              if (((ulong)plVar21 & uVar27) == 0) {
                plVar26 = (long *)((ulong)plVar26 & uVar27);
              }
              else if (plVar21 <= plVar26) {
                uVar28 = 0;
                if (plVar21 != (long *)0x0) {
                  uVar28 = (ulong)plVar26 / (ulong)plVar21;
                }
                plVar26 = (long *)((long)plVar26 - uVar28 * (long)plVar21);
              }
              uVar9 = (long)plVar26 - (long)plVar38 < 0;
            } while (plVar26 == plVar38);
          }
        }
LAB_1072a3fd4:
        func_0x0001072b058c();
        uStack_a20 = 0x1136ca1e0;
        uStack_a18 = 0;
        *plVar20 = 0;
        plVar20[1] = (long)plVar30;
        plStack_a28 = plVar20;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar20 + 2,lVar34)
        ;
        func_0x0001072ab3b0(plVar20 + 5,(long)auStack_6f8 + lVar36);
        uStack_a18 = CONCAT71(uStack_a18._1_7_,1);
        if ((plVar21 == (long *)0x0) ||
           (func_0x0001002ab830((float)(uRam00000001136ca1e8 + 1),fRam00000001136ca1f0,
                                (float)plVar21), (bool)uVar9)) {
          bVar8 = (long *)0x2 < plVar21;
          bVar10 = plVar21 == (long *)0x3;
          func_0x0001072af7c0((long)plVar21 << 1);
          plVar38 = extraout_x8_04;
          if (!bVar8 || bVar10) {
            plVar38 = extraout_x9_03;
          }
          if ((long)plVar38 - 1U == 0) {
            plVar38 = (long *)0x2;
          }
          else if (((ulong)plVar38 & (long)plVar38 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          plVar42 = plRam00000001136ca1d8;
          plVar21 = plVar38;
          if (plRam00000001136ca1d8 < plVar38) {
LAB_1072a4080:
            if ((ulong)plVar21 >> 0x3d != 0) {
              func_0x000104bd35f4();
LAB_1072a4454:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1072a4458);
              (*pcVar7)();
            }
            __Znwm((long)plVar21 << 3);
            func_0x0001072ab2fc();
            plVar38 = (long *)0x0;
            lVar34 = lRam00000001136ca1d0;
            plRam00000001136ca1d8 = plVar21;
            while (plVar42 = plRam00000001136ca1e0, plVar21 != plVar38) {
              func_0x0001072afffc();
              lVar34 = extraout_x8_05;
              plVar38 = extraout_x9_04;
            }
            if (plRam00000001136ca1e0 != (long *)0x0) {
              plVar38 = (long *)plRam00000001136ca1e0[1];
              uVar28 = (long)plVar21 - 1;
              uVar27 = 0;
              if (plVar21 != (long *)0x0) {
                uVar27 = (ulong)plVar38 / (ulong)plVar21;
              }
              plVar26 = plVar38;
              if (plVar21 <= plVar38) {
                plVar26 = (long *)((long)plVar38 - uVar27 * (long)plVar21);
              }
              if (((ulong)plVar21 & uVar28) == 0) {
                plVar26 = (long *)((ulong)plVar38 & uVar28);
              }
              *(undefined8 *)(lVar34 + (long)plVar26 * 8) = 0x1136ca1e0;
              while (plVar38 = plVar42, plVar42 = (long *)*plVar38, plVar42 != (long *)0x0) {
                plVar33 = (long *)plVar42[1];
                if (((ulong)plVar21 & uVar28) == 0) {
                  plVar33 = (long *)((ulong)plVar33 & uVar28);
                }
                else if (plVar21 <= plVar33) {
                  uVar27 = 0;
                  if (plVar21 != (long *)0x0) {
                    uVar27 = (ulong)plVar33 / (ulong)plVar21;
                  }
                  plVar33 = (long *)((long)plVar33 - uVar27 * (long)plVar21);
                }
                if (plVar33 != plVar26) {
                  if (*(long *)(lVar34 + (long)plVar33 * 8) == 0) {
                    *(long **)(lVar34 + (long)plVar33 * 8) = plVar38;
                    plVar26 = plVar33;
                  }
                  else {
                    *plVar38 = *plVar42;
                    func_0x0001072af75c();
                    lVar34 = extraout_x8_06;
                    uVar28 = extraout_x9_05;
                    plVar42 = extraout_x10_00;
                    plVar26 = extraout_x11_00;
                  }
                }
              }
            }
          }
          else {
            plVar21 = plRam00000001136ca1d8;
            if (plVar38 < plRam00000001136ca1d8) {
              plVar21 = (long *)(long)((float)uRam00000001136ca1e8 / fRam00000001136ca1f0);
              if ((plRam00000001136ca1d8 < (long *)0x3) ||
                 (((ulong)plRam00000001136ca1d8 & (long)plRam00000001136ca1d8 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else {
                func_0x0001072af6cc();
              }
              if (plVar38 <= plVar21) {
                plVar38 = plVar21;
              }
              plVar21 = plRam00000001136ca1d8;
              if (plVar38 < plVar42) {
                plVar21 = plVar38;
                if (plVar38 != (long *)0x0) goto LAB_1072a4080;
                func_0x0001072ab2fc(0);
                plRam00000001136ca1d8 = (long *)0x0;
                plVar21 = (long *)0x0;
              }
            }
          }
          if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
            plVar38 = (long *)((long)plVar21 - 1U & (ulong)plVar30);
          }
          else {
            plVar38 = plVar30;
            if (plVar21 <= plVar30) {
              uVar27 = 0;
              if (plVar21 != (long *)0x0) {
                uVar27 = (ulong)plVar30 / (ulong)plVar21;
              }
              plVar38 = (long *)((long)plVar30 - uVar27 * (long)plVar21);
            }
          }
        }
        lVar34 = lRam00000001136ca1d0;
        plVar30 = *(long **)(lRam00000001136ca1d0 + (long)plVar38 * 8);
        if (plVar30 == (long *)0x0) {
          *plVar20 = (long)plRam00000001136ca1e0;
          plRam00000001136ca1e0 = plVar20;
          *(undefined8 *)(lVar34 + (long)plVar38 * 8) = 0x1136ca1e0;
          if (*plVar20 != 0) {
            plVar30 = *(long **)(*plVar20 + 8);
            if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
              plVar30 = (long *)((ulong)plVar30 & (long)plVar21 - 1U);
            }
            else if (plVar21 <= plVar30) {
              uVar27 = 0;
              if (plVar21 != (long *)0x0) {
                uVar27 = (ulong)plVar30 / (ulong)plVar21;
              }
              plVar30 = (long *)((long)plVar30 - uVar27 * (long)plVar21);
            }
            *(long **)(lVar34 + (long)plVar30 * 8) = plVar20;
          }
        }
        else {
          *plVar20 = *plVar30;
          *plVar30 = (long)plVar20;
        }
        plStack_a28 = (long *)0x0;
        uRam00000001136ca1e8 = uRam00000001136ca1e8 + 1;
        func_0x0001072ab318(&plStack_a28);
LAB_1072a4268:
        lVar36 = lVar36 + 0x50;
      } while( true );
    }
  }
  do {
    plVar38 = (long *)0x1136ca1e0;
    while (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0) {
      uVar40 = *(undefined8 *)(param_1 + 0x1048);
      FUN_107262e9c(&ppppplStack_710,plVar38 + 2);
      func_0x0001072ab3b0(&ppppplStack_e0,plVar38 + 5);
      func_0x000107362428(uVar40,&ppppplStack_710,&ppppplStack_e0);
      func_0x0001072b0154();
      func_0x000104c2f714(&ppppplStack_710);
    }
    func_0x000104bfec6c(&ppppplStack_710);
    func_0x000100450bb4(param_1 + 0x1058,&ppppplStack_710);
    func_0x000100450be4(&ppppplStack_710);
    (**(code **)(**(long **)(param_1 + 0x1068) + 0x20))
              (*(long **)(param_1 + 0x1068),*(undefined4 *)(param_2 + 0xa8),0);
    plVar38 = *(long **)(param_1 + 0x1068);
    uVar23 = *(uint *)(param_2 + 0xa8);
    uVar9 = *(undefined ***)(param_2 + 0xa0) == (undefined **)0x0;
    ppuVar3 = &PTR_PTR_113234360;
    if (!(bool)uVar9) {
      ppuVar3 = *(undefined ***)(param_2 + 0xa0);
    }
    FUN_1072a4d9c(&ppppplStack_710,ppuVar3);
    (**(code **)(*plVar38 + 0x28))(plVar38,(ulong)uVar23,&ppppplStack_710,0);
    FUN_1072a9f04(&ppppplStack_710);
    (**(code **)(**(long **)(param_1 + 0x1068) + 0x40))
              (*(long **)(param_1 + 0x1068),*(undefined1 *)(param_2 + 0xad),0);
    if ((*(byte *)(param_2 + 0x10) >> 4 & 1) == 0) {
      uVar9 = *(undefined ***)(param_2 + 0x80) == (undefined **)0x0;
      ppuVar3 = &PTR_PTR_1134054b0;
      if (!(bool)uVar9) {
        ppuVar3 = *(undefined ***)(param_2 + 0x80);
      }
      func_0x0001000da6e0(&ppppplStack_710,(ulong)ppuVar3[2] & 0xfffffffffffffffc,0);
      func_0x0001072ab410(&ppppplStack_e0,&ppppplStack_710);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (apppplStack_188,&ppppplStack_e0);
      pppppplVar32 = &ppppplStack_e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0001072b0030();
    }
    else {
      pppppplVar32 = (long ******)apppplStack_188;
      func_0x0001072b0178(*(undefined8 *)(*(long *)(param_2 + 0x98) + 0x10));
    }
    func_0x0001072b0070();
    func_0x0001072b03b8();
    pppppplVar19 = pppppplVar32 + 3;
    *pppppplVar32 = (long *****)&PTR_DAT_110999c38;
    FUN_1072f9e10(pppppplVar19,apppplStack_188);
    ppppplStack_e0 = (long *****)0x0;
    ppppplStack_d8 = (long *****)0x0;
    ppppplStack_708 = *(long ******)(param_1 + 0x1080);
    ppppplStack_710 = *(long ******)(param_1 + 0x1078);
    *(long *******)(param_1 + 0x1078) = pppppplVar19;
    *(ulong *)(param_1 + 0x1080) = (ulong)uVar23;
    func_0x0001072ac9dc(&ppppplStack_710);
    func_0x0001072ac9dc(&ppppplStack_e0);
    if ((*(byte *)(param_2 + 0x10) >> 3 & 1) == 0) {
      uVar27 = *(ulong *)(param_2 + 0x70) & 0xfffffffffffffffc;
      lVar36 = (long)*(char *)(uVar27 + 0x17);
      if (lVar36 < 0) {
        lVar36 = *(long *)(uVar27 + 8);
      }
      if (lVar36 == 0) {
        uVar22 = 0;
        ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
        goto LAB_1072a3638;
      }
      FUN_10728a260();
      FUN_10728f0c8(&ppppplStack_710);
    }
    else {
      FUN_107246514(*(undefined8 *)(*(long *)(param_2 + 0x90) + 0x10),
                    *(undefined8 *)(*(long *)(param_2 + 0x90) + 0x18),&ppppplStack_710,0);
      uVar22 = 1;
LAB_1072a3638:
      plStack_700 = (long *)CONCAT71(plStack_700._1_7_,uVar22);
    }
    *(long ******)(param_1 + 0x10b0) = ppppplStack_708;
    *(ulong *)(param_1 + 0x10a8) = (ulong)ppppplStack_710;
    *(undefined1 *)(param_1 + 0x10b8) = plStack_700._0_1_;
    uStack_f28 = *(undefined8 *)(param_1 + 0xe20);
    uStack_f30 = *puVar12;
    if (*(long *)(param_1 + 0xe20) != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_05 != 0);
    }
    uStack_f20 = *(undefined8 *)(param_1 + 0xeb8);
    lStack_f18 = *(long *)(param_1 + 0xec0);
    if (lStack_f18 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_06 != 0);
    }
    uStack_f10 = *(undefined8 *)(param_1 + 0x1058);
    lStack_f08 = *(long *)(param_1 + 0x1060);
    if (lStack_f08 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_07 != 0);
    }
    puVar13 = &uStack_f00;
    func_0x0001072b0178(*(undefined8 *)(param_1 + 0xf00));
    puStack_9f8 = (undefined8 *)0x0;
    func_0x0001072b01f0();
    puVar13[2] = uStack_f28;
    puVar13[1] = uStack_f30;
    *puVar13 = &PTR_FUN_110999c88;
    uStack_f30 = 0;
    uStack_f28 = 0;
    puVar13[4] = lStack_f18;
    puVar13[3] = uStack_f20;
    uStack_f20 = 0;
    lStack_f18 = 0;
    puVar13[6] = lStack_f08;
    puVar13[5] = uStack_f10;
    uStack_f10 = 0;
    lStack_f08 = 0;
    puVar13[8] = uStack_ef8;
    puVar13[7] = uStack_f00;
    puVar13[9] = uStack_ef0;
    uStack_f00 = 0;
    uStack_ef8 = 0;
    uStack_ef0 = 0;
    puStack_9f8 = puVar13;
    FUN_1072adfec(&ppppplStack_e0,auStack_a10);
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    uStack_a8 = 0;
    puVar17 = (undefined8 *)(*(ulong *)(param_1 + 0xf00) & 0xfffffffffffffffc);
    lVar36 = (long)*(char *)((long)puVar17 + 0x17);
    puVar13 = puVar17;
    if (lVar36 < 0) {
      puVar13 = (undefined8 *)*puVar17;
      lVar36 = puVar17[1];
    }
    uVar27 = *(ulong *)(param_2 + 0x60);
    uVar28 = *(ulong *)(param_2 + 0x68);
    func_0x000107859b70(puVar13,lVar36);
    lVar36 = *(long *)(param_1 + 0xe20);
    lVar34 = *(long *)(param_1 + 0xe20);
    uVar40 = *puVar12;
    puVar17 = (undefined8 *)0x230;
    __Znwm();
    puVar17[1] = 0;
    puVar17[2] = 0;
    *puVar17 = &PTR_FUN_110999d18;
    uStack_240 = uVar40;
    lStack_238 = lVar34;
    if (lVar36 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_08 != 0);
    }
    uStack_750 = *(undefined8 *)(param_1 + 0x1068);
    lStack_748 = *(long *)(param_1 + 0x1070);
    if (lStack_748 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_09 != 0);
    }
    uStack_788 = *(undefined8 *)(param_1 + 0x1080);
    uStack_790 = *(undefined8 *)(param_1 + 0x1078);
    if (*(long *)(param_1 + 0x1080) != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_10 != 0);
    }
    FUN_1072ae058(&ppppplStack_710,&ppppplStack_e0);
    uStack_7c8 = *(undefined8 *)(param_1 + 0xf28);
    uStack_7d0 = *(undefined8 *)(param_1 + 0xf20);
    if (*(long *)(param_1 + 0xf28) != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_11 != 0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppplStack_150,uVar27 & 0xfffffffffffffffc);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppppplStack_200,uVar28 & 0xfffffffffffffffc);
    uStack_2a8 = *(ulong *)(param_1 + 0x10b0);
    uStack_2b0 = *(ulong *)(param_1 + 0x10a8);
    uStack_2a0 = *(undefined8 *)(param_1 + 0x10b8);
    func_0x00010734bd14(puVar17 + 3,&uStack_240,&uStack_750,&uStack_790,&ppppplStack_710,&uStack_7d0
                        ,&ppplStack_150,&ppppplStack_200,&uStack_2b0,param_1 + 0xc50,puVar13);
    func_0x0001072b018c();
    func_0x0001072b01d4();
    func_0x00010724bd50(&uStack_7d0);
    func_0x0001072ab460(&ppppplStack_710);
    func_0x0001072ac9dc(&uStack_790);
    func_0x0001072ac8e0(&uStack_750);
    func_0x00010726eedc(&uStack_240);
    puStack_808 = puVar17 + 3;
    puStack_800 = puVar17;
    FUN_1072a6024(param_1 + 0x1088,&puStack_808);
    func_0x0001072aca00(&puStack_808);
    func_0x0001072ab460(&ppppplStack_e0);
    FUN_1072adfb8(auStack_a10);
    func_0x0001072a6048(&uStack_f30);
    ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
    uVar27 = param_1 + 0xa00;
    func_0x0001072afbf4();
    if ((uVar27 & 1) == 0) {
      ppppplStack_e0 = (long *****)((ulong)ppppplStack_e0 & 0xffffffffffffff00);
      uVar27 = param_1 + 0x9b0;
      FUN_10724e2c8(uVar27,&ppppplStack_e0);
      if ((uVar27 & 1) != 0) goto LAB_1072a38d8;
    }
    else {
LAB_1072a38d8:
      puVar13 = (undefined8 *)0xc8;
      __Znwm();
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = &PTR_DAT_110999d68;
      _bzero(puVar13 + 3,0xb0);
      __ZNSt3__119__shared_mutex_baseC1Ev(puVar13 + 4);
      ppppplStack_e0 = (long *****)0x0;
      ppppplStack_d8 = (long *****)0x0;
      ppppplStack_708 = *(long ******)(param_1 + 0x10a0);
      ppppplStack_710 = *(long ******)(param_1 + 0x1098);
      *(undefined8 **)(param_1 + 0x1098) = puVar13 + 3;
      *(undefined8 **)(param_1 + 0x10a0) = puVar13;
      func_0x00010725afe8(&ppppplStack_710);
      func_0x00010725afe8(&ppppplStack_e0);
    }
    ppppplStack_710 = (long *****)CONCAT44(ppppplStack_710._4_4_,5);
    auStack_6f8[0] = 0;
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    func_0x0001072afe50();
    uStack_6e8 = 0;
    uStack_6c8 = 0;
    uStack_6c4 = 1;
    uStack_6b0 = 0;
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    ppppplStack_e0 = (long *****)CONCAT44(ppppplStack_e0._4_4_,*(undefined4 *)(param_1 + 0xe88));
    ppppplStack_d8 = (long *****)((ulong)ppppplStack_d8 & 0xffffffff00000000);
    ppplStack_150 = *(long ****)(param_1 + 0xc50);
    ppplStack_148 = (long ***)CONCAT44(ppplStack_148._4_4_,3);
    func_0x00010743fa44(param_1 + 0xc50,&ppppplStack_710,&ppppplStack_e0,&ppplStack_150,7);
    FUN_107262330(&ppppplStack_710);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppplStack_188);
    func_0x00010028ad98(&uStack_e90);
    func_0x0001072ab4c8(&uStack_e68);
    func_0x0001072ad9c0(&lStack_e40);
    __ZNSt3__15mutex6unlockEv(param_1 + 0xe48);
    func_0x00010743d7e4(auStack_9f0);
    func_0x0001072af6ec(uStack_70);
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
LAB_1072a4274:
    lVar36 = 0x410;
    do {
      func_0x0001072ab35c((long)&ppppplStack_710 + lVar36);
      lVar36 = lVar36 + -0x50;
    } while (lVar36 != -0x50);
    func_0x0001072ab37c(appuStack_8e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e00);
    func_0x0001072ab37c(auStack_8b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_dd0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_de8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_db8);
    func_0x0001072ab37c(auStack_878);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_da0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d70);
    func_0x0001072ab37c(auStack_840);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d28);
    func_0x0001072ab37c(&puStack_808);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_cf8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ce0);
    func_0x0001072ab37c(&uStack_7d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_cb0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_cc8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c98);
    func_0x0001072ab37c(&uStack_790);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c50);
    func_0x0001072ab37c(&uStack_750);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c20);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c08);
    func_0x0001072ab37c(&uStack_240);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_bd8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_bf0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_bc0);
    func_0x0001072ab37c(apppplStack_188);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ba8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b78);
    func_0x0001072ab37c(&uStack_2b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b30);
    func_0x0001072ab37c(&ppppplStack_200);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b00);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ae8);
    func_0x0001072ab37c(&ppplStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ab8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ad0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_aa0);
    func_0x0001072b0154();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a58);
    ___cxa_guard_release(0x1136ca1c8);
  } while( true );
}



/* Entry: 1072a4cd8; end: 1072a4cdb;  */

void FUN_1072a4cd8(long param_1,long param_2,long ******param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                  long *param_9,undefined8 *param_10,long *param_11,undefined8 param_12)

{
  long ***ppplVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  byte bVar4;
  char cVar5;
  long **pplVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long ******pppppplVar14;
  long *****ppppplVar15;
  float *pfVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  long ******pppppplVar19;
  long *plVar20;
  long *plVar21;
  undefined1 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined8 extraout_x8;
  long *****ppppplVar25;
  long *****extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *****extraout_x8_03;
  long *plVar26;
  long *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x9;
  ulong uVar27;
  long *****extraout_x9_00;
  long *****extraout_x9_01;
  ulong uVar28;
  ulong extraout_x9_02;
  long ***ppplVar29;
  long *extraout_x9_03;
  long *extraout_x9_04;
  ulong extraout_x9_05;
  long *plVar30;
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
  long ******extraout_x10;
  long ***ppplVar31;
  long *extraout_x10_00;
  int extraout_w11;
  long *****extraout_x11;
  long *extraout_x11_00;
  long ******pppppplVar32;
  long *plVar33;
  long lVar34;
  long *****ppppplVar35;
  long lVar36;
  long ****pppplVar37;
  long *plVar38;
  long ****pppplVar39;
  undefined8 uVar40;
  undefined4 uVar41;
  undefined8 *unaff_x22;
  long *plVar42;
  long *****ppppplVar43;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  long lStack_f18;
  undefined8 uStack_f10;
  long lStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined1 auStack_ee0 [24];
  undefined1 auStack_ec8 [24];
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined4 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  long ****pppplStack_e50;
  long lStack_e48;
  long lStack_e40;
  long ****pppplStack_e38;
  long *****ppppplStack_e30;
  ulong uStack_e28;
  float afStack_e20 [4];
  long ****pppplStack_e10;
  undefined1 auStack_e00 [24];
  undefined1 auStack_de8 [24];
  undefined1 auStack_dd0 [24];
  undefined1 auStack_db8 [24];
  undefined1 auStack_da0 [24];
  undefined1 auStack_d88 [24];
  undefined1 auStack_d70 [24];
  undefined1 auStack_d58 [24];
  undefined1 auStack_d40 [24];
  undefined1 auStack_d28 [24];
  undefined1 auStack_d10 [24];
  undefined1 auStack_cf8 [24];
  undefined1 auStack_ce0 [24];
  undefined1 auStack_cc8 [24];
  undefined1 auStack_cb0 [24];
  undefined1 auStack_c98 [24];
  undefined1 auStack_c80 [24];
  undefined1 auStack_c68 [24];
  undefined1 auStack_c50 [24];
  undefined1 auStack_c38 [24];
  undefined1 auStack_c20 [24];
  undefined1 auStack_c08 [24];
  undefined1 auStack_bf0 [24];
  undefined1 auStack_bd8 [24];
  undefined1 auStack_bc0 [24];
  undefined1 auStack_ba8 [24];
  undefined1 auStack_b90 [24];
  undefined1 auStack_b78 [24];
  undefined1 auStack_b60 [24];
  undefined1 auStack_b48 [24];
  undefined1 auStack_b30 [24];
  undefined1 auStack_b18 [24];
  undefined1 auStack_b00 [24];
  undefined1 auStack_ae8 [24];
  undefined1 auStack_ad0 [24];
  undefined1 auStack_ab8 [24];
  undefined1 auStack_aa0 [24];
  undefined1 auStack_a88 [24];
  undefined1 auStack_a70 [24];
  undefined1 auStack_a58 [24];
  long **pplStack_a40;
  long **pplStack_a38;
  long **pplStack_a30;
  long *plStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined1 auStack_a10 [24];
  undefined8 *puStack_9f8;
  undefined1 auStack_9f0 [264];
  undefined **appuStack_8e8 [3];
  undefined ***pppuStack_8d0;
  undefined4 uStack_8c8;
  undefined1 uStack_8c0;
  undefined1 uStack_8b8;
  undefined1 auStack_8b0 [32];
  undefined4 uStack_890;
  undefined1 uStack_888;
  undefined1 uStack_880;
  undefined1 auStack_878 [32];
  undefined4 uStack_858;
  undefined1 uStack_850;
  undefined1 uStack_848;
  undefined1 auStack_840 [32];
  undefined4 uStack_820;
  undefined1 uStack_818;
  undefined1 uStack_810;
  undefined8 *puStack_808;
  undefined8 *puStack_800;
  undefined4 uStack_7e8;
  undefined1 uStack_7e0;
  undefined1 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined4 uStack_7b0;
  undefined1 uStack_7a8;
  undefined1 uStack_7a0;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined4 uStack_770;
  undefined8 uStack_768;
  undefined1 uStack_760;
  undefined8 uStack_750;
  long lStack_748;
  undefined4 uStack_730;
  undefined1 uStack_728;
  undefined1 uStack_720;
  long *****ppppplStack_710;
  long *****ppppplStack_708;
  long *plStack_700;
  undefined4 auStack_6f8 [4];
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined4 uStack_6c8;
  undefined1 uStack_6c4;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_290;
  undefined1 uStack_288;
  undefined1 uStack_280;
  undefined4 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined4 uStack_220;
  undefined1 uStack_218;
  undefined1 uStack_210;
  long *****ppppplStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1e0;
  undefined1 uStack_1d8;
  undefined1 uStack_1d0;
  long ****apppplStack_188 [4];
  undefined4 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_158;
  long ***ppplStack_150;
  long ***ppplStack_148;
  long ***ppplStack_140;
  undefined4 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_120;
  long *****ppppplStack_e0;
  long *****ppppplStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  
  func_0x0001072af7b0();
  ppppplStack_e0 = (long *****)CONCAT44(ppppplStack_e0._4_4_,0x104);
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_70 = extraout_x8;
  func_0x0001072afe50();
  uStack_b8 = 0;
  uStack_98 = 0;
  uStack_94 = 1;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_c0 = extraout_x9;
  func_0x00010743cc34(&ppppplStack_710,&ppppplStack_e0,7);
  func_0x00010743d7bc(auStack_9f0,&ppppplStack_710);
  FUN_107288cd8(&ppppplStack_710);
  FUN_107262330(&ppppplStack_e0);
  puVar12 = (undefined8 *)(param_1 + 0xe48);
  FUN_1072ab574();
  lVar36 = *param_11;
  if (lVar36 == 0) {
    func_0x0001072afe48();
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_DAT_110999a10;
    ppppplVar15 = (long *****)(puVar12 + 3);
    *ppppplVar15 = (long ****)&PTR_DAT_110999a60;
    puVar12[5] = 0;
    puVar12[4] = 0;
    func_0x000100100ed0();
    puVar13 = (undefined8 *)0x90;
    pppplStack_e10 = (long ****)ppppplVar15;
    __Znwm();
  }
  else {
    lVar34 = param_11[1];
    func_0x0001072afe48();
    func_0x0001072b03b8();
    *puVar12 = &PTR_DAT_1109998d0;
    if (lVar34 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10 != 0);
    }
    ppppplVar15 = (long *****)(unaff_x22 + 3);
    *ppppplVar15 = (long ****)&PTR_DAT_110999920;
    unaff_x22[4] = lVar36;
    unaff_x22[5] = lVar34;
    ppppplStack_708 = (long *****)0x0;
    ppppplStack_710 = (long *****)0x0;
    FUN_1072ab65c(&ppppplStack_710);
    puVar13 = (undefined8 *)0x90;
    pppplStack_e10 = (long ****)ppppplVar15;
    __Znwm();
    puVar12 = unaff_x22;
  }
  func_0x0001072b0370();
  *puVar13 = &PTR_FUN_1109999c0;
  puVar13[3] = ppppplVar15;
  puVar13[4] = puVar12;
  pppplStack_e10 = (long ****)0x0;
  ppppplStack_708 = (long *****)0x0;
  ppppplStack_710 = (long *****)0x0;
  puVar13[6] = 0;
  puVar13[5] = 0;
  puVar13[8] = 0;
  puVar13[7] = 0;
  *(undefined4 *)(puVar13 + 9) = 0x3f800000;
  puVar13[10] = 0x32aaaba7;
  puVar13[0xc] = 0;
  puVar13[0xb] = 0;
  puVar13[0xe] = 0;
  puVar13[0xd] = 0;
  puVar13[0x10] = 0;
  puVar13[0xf] = 0;
  puVar13[0x11] = 0;
  FUN_1072ad714(&ppppplStack_710);
  ppppplStack_e0 = (long *****)0x0;
  ppppplStack_d8 = (long *****)0x0;
  ppppplStack_708 = *(long ******)(param_1 + 0x58);
  ppppplStack_710 = *(long ******)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x50) = puVar13 + 3;
  *(long *******)(param_1 + 0x58) = param_3;
  func_0x0001072ac928(&ppppplStack_710);
  func_0x0001072ac928(&ppppplStack_e0);
  pppppplVar32 = (long ******)&pppplStack_e10;
  if (lVar36 == 0) {
    func_0x0001072ad99c();
  }
  else {
    FUN_1072ad6a4();
  }
  puVar12 = (undefined8 *)(param_1 + 0xe18);
  pppplStack_e38 = (long ****)0x0;
  lStack_e40 = 0;
  uStack_e28 = 0;
  ppppplStack_e30 = (long *****)0x0;
  afStack_e20[0] = 1.0;
  uVar27 = *(ulong *)(param_2 + 0x48);
  puVar18 = (ulong *)(param_2 + 0x48);
  if ((uVar27 & 1) != 0) {
    puVar18 = (ulong *)(uVar27 + 7);
  }
  puVar2 = puVar18 + *(int *)(param_2 + 0x50);
  pppppplVar19 = param_3;
  for (; pppppplVar14 = pppppplVar32, puVar18 != puVar2; puVar18 = puVar18 + 1) {
    ppppplVar35 = (long *****)*puVar18;
    pppplVar37 = ppppplVar35[2];
    func_0x0001072aff20();
    ppppplVar25 = (long *****)((ulong)pppplVar37 & 0xfffffffffffffffc);
    plStack_700 = (long *)0x1;
    ppppplStack_710 = (long *****)pppppplVar14;
    ppppplStack_708 = (long *****)&ppppplStack_e30;
    *pppppplVar14 = (long *****)0x0;
    pppppplVar14[1] = (long *****)0x0;
    bVar4 = *(byte *)((long)ppppplVar25 + 0x17);
    ppppplVar43 = (long *****)ppppplVar25[1];
    uVar9 = (char)bVar4 < '\0';
    ppppplVar15 = (long *****)*ppppplVar25;
    if (!(bool)uVar9) {
      ppppplVar15 = ppppplVar25;
    }
    pppppplVar32 = pppppplVar14 + 2;
    *pppppplVar32 = ppppplVar15;
    if (!(bool)uVar9) {
      ppppplVar43 = (long *****)(ulong)bVar4;
    }
    pppppplVar14[3] = ppppplVar43;
    pppppplVar14[4] = ppppplVar35;
    func_0x0001001030f4(ppppplVar15,(long)ppppplVar15 + (long)ppppplVar43);
    pppppplVar14[1] = ppppplVar15;
    ppppplVar15 = *pppppplVar32;
    func_0x0001001030f4(ppppplVar15,(long)ppppplVar15 + (long)pppppplVar14[3]);
    pppplVar37 = pppplStack_e38;
    pppppplVar14[1] = ppppplVar15;
    if ((long *****)pppplStack_e38 != (long *****)0x0) {
      uVar27 = (long)pppplStack_e38 - 1;
      if (((ulong)pppplStack_e38 & uVar27) == 0) {
        ppppplVar43 = (long *****)(uVar27 & (ulong)ppppplVar15);
        uVar9 = false;
      }
      else {
        uVar9 = (long)ppppplVar15 - (long)pppplStack_e38 < 0;
        ppppplVar43 = ppppplVar15;
        if (pppplStack_e38 <= ppppplVar15) {
          uVar28 = 0;
          if ((long *****)pppplStack_e38 != (long *****)0x0) {
            uVar28 = (ulong)ppppplVar15 / (ulong)pppplStack_e38;
          }
          ppppplVar43 = (long *****)((long)ppppplVar15 - uVar28 * (long)pppplStack_e38);
        }
      }
      plVar38 = *(long **)(lStack_e40 + (long)ppppplVar43 * 8);
      if (plVar38 != (long *)0x0) {
        do {
          while( true ) {
            plVar38 = (long *)*plVar38;
            if (plVar38 == (long *)0x0) goto LAB_1072a2758;
            ppppplVar25 = (long *****)plVar38[1];
            uVar9 = (long)ppppplVar25 - (long)ppppplVar15 < 0;
            if (ppppplVar25 != ppppplVar15) break;
            pfVar16 = afStack_e20;
            FUN_10728905c(pfVar16,plVar38 + 2,pppppplVar32);
            if (((ulong)pfVar16 & 1) != 0) goto LAB_1072a295c;
          }
          if (((ulong)pppplVar37 & uVar27) == 0) {
            ppppplVar25 = (long *****)((ulong)ppppplVar25 & uVar27);
          }
          else if (pppplVar37 <= ppppplVar25) {
            uVar28 = 0;
            if ((long *****)pppplVar37 != (long *****)0x0) {
              uVar28 = (ulong)ppppplVar25 / (ulong)pppplVar37;
            }
            ppppplVar25 = (long *****)((long)ppppplVar25 - uVar28 * (long)pppplVar37);
          }
          uVar9 = (long)ppppplVar25 - (long)ppppplVar43 < 0;
        } while (ppppplVar25 == ppppplVar43);
      }
    }
LAB_1072a2758:
    if (((long *****)pppplVar37 == (long *****)0x0) ||
       (func_0x0001002ab830((float)(uStack_e28 + 1),afStack_e20[0],(float)pppplVar37), (bool)uVar9))
    {
      bVar8 = (long *****)0x2 < pppplVar37;
      bVar10 = (long *****)pppplVar37 == (long *****)0x3;
      func_0x0001072af7c0((long)pppplVar37 << 1);
      ppppplVar15 = extraout_x8_00;
      if (!bVar8 || bVar10) {
        ppppplVar15 = extraout_x9_00;
      }
      if ((long)ppppplVar15 - 1U == 0) {
        ppppplVar15 = (long *****)0x2;
      }
      else if (((ulong)ppppplVar15 & (long)ppppplVar15 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      pppplVar37 = pppplStack_e38;
      if (pppplStack_e38 < ppppplVar15) {
LAB_1072a284c:
        if ((ulong)ppppplVar15 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_1072a4454;
        }
        lVar36 = (long)ppppplVar15 << 3;
        __Znwm(lVar36);
        FUN_1072ada04(&lStack_e40,lVar36);
        ppppplVar43 = (long *****)0x0;
        lVar36 = lStack_e40;
        pppplStack_e38 = (long ****)ppppplVar15;
        while (ppppplVar15 != ppppplVar43) {
          func_0x0001072afffc();
          lVar36 = extraout_x8_01;
          ppppplVar43 = extraout_x9_01;
        }
        if ((long ******)ppppplStack_e30 != (long ******)0x0) {
          ppppplVar43 = (long *****)ppppplStack_e30[1];
          uVar28 = (long)ppppplVar15 - 1;
          uVar27 = 0;
          if (ppppplVar15 != (long *****)0x0) {
            uVar27 = (ulong)ppppplVar43 / (ulong)ppppplVar15;
          }
          ppppplVar25 = ppppplVar43;
          if (ppppplVar15 <= ppppplVar43) {
            ppppplVar25 = (long *****)((long)ppppplVar43 - uVar27 * (long)ppppplVar15);
          }
          if (((ulong)ppppplVar15 & uVar28) == 0) {
            ppppplVar25 = (long *****)((ulong)ppppplVar43 & uVar28);
          }
          *(long *******)(lVar36 + (long)ppppplVar25 * 8) = &ppppplStack_e30;
          pppppplVar32 = (long ******)ppppplStack_e30;
          while (pppppplVar19 = pppppplVar32, pppppplVar32 = (long ******)*pppppplVar19,
                pppppplVar32 != (long ******)0x0) {
            ppppplVar43 = pppppplVar32[1];
            if (((ulong)ppppplVar15 & uVar28) == 0) {
              ppppplVar43 = (long *****)((ulong)ppppplVar43 & uVar28);
            }
            else if (ppppplVar15 <= ppppplVar43) {
              uVar27 = 0;
              if (ppppplVar15 != (long *****)0x0) {
                uVar27 = (ulong)ppppplVar43 / (ulong)ppppplVar15;
              }
              ppppplVar43 = (long *****)((long)ppppplVar43 - uVar27 * (long)ppppplVar15);
            }
            if (ppppplVar43 != ppppplVar25) {
              if (*(long *)(lVar36 + (long)ppppplVar43 * 8) == 0) {
                *(long *******)(lVar36 + (long)ppppplVar43 * 8) = pppppplVar19;
                ppppplVar25 = ppppplVar43;
              }
              else {
                *pppppplVar19 = *pppppplVar32;
                func_0x0001072af75c();
                lVar36 = extraout_x8_02;
                uVar28 = extraout_x9_02;
                pppppplVar32 = extraout_x10;
                ppppplVar25 = extraout_x11;
              }
            }
          }
        }
      }
      else if (ppppplVar15 < pppplStack_e38) {
        ppppplVar43 = (long *****)(long)((float)uStack_e28 / afStack_e20[0]);
        if ((pppplStack_e38 < (long *****)0x3) ||
           (((ulong)pppplStack_e38 & (long)pppplStack_e38 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x0001072af6cc();
        }
        if (ppppplVar15 <= ppppplVar43) {
          ppppplVar15 = ppppplVar43;
        }
        if (ppppplVar15 < pppplVar37) {
          if (ppppplVar15 != (long *****)0x0) goto LAB_1072a284c;
          FUN_1072ada04(&lStack_e40,0);
          pppplStack_e38 = (long ****)0x0;
        }
      }
    }
    ppppplVar15 = pppppplVar14[1];
    uVar27 = (long)pppplStack_e38 - 1;
    if (((ulong)pppplStack_e38 & uVar27) == 0) {
      ppppplVar15 = (long *****)(uVar27 & (ulong)ppppplVar15);
    }
    else if (pppplStack_e38 <= ppppplVar15) {
      uVar28 = 0;
      if ((long *****)pppplStack_e38 != (long *****)0x0) {
        uVar28 = (ulong)ppppplVar15 / (ulong)pppplStack_e38;
      }
      ppppplVar15 = (long *****)((long)ppppplVar15 - uVar28 * (long)pppplStack_e38);
    }
    puVar13 = *(undefined8 **)(lStack_e40 + (long)ppppplVar15 * 8);
    if (puVar13 == (undefined8 *)0x0) {
      *pppppplVar14 = ppppplStack_e30;
      *(long *******)(lStack_e40 + (long)ppppplVar15 * 8) = &ppppplStack_e30;
      ppppplStack_e30 = (long *****)pppppplVar14;
      if (*pppppplVar14 != (long *****)0x0) {
        ppppplVar15 = (long *****)(*pppppplVar14)[1];
        if (((ulong)pppplStack_e38 & uVar27) == 0) {
          ppppplVar15 = (long *****)((ulong)ppppplVar15 & uVar27);
        }
        else if (pppplStack_e38 <= ppppplVar15) {
          uVar27 = 0;
          if ((long *****)pppplStack_e38 != (long *****)0x0) {
            uVar27 = (ulong)ppppplVar15 / (ulong)pppplStack_e38;
          }
          ppppplVar15 = (long *****)((long)ppppplVar15 - uVar27 * (long)pppplStack_e38);
        }
        *(long *******)(lStack_e40 + (long)ppppplVar15 * 8) = pppppplVar14;
      }
    }
    else {
      *pppppplVar14 = (long *****)*puVar13;
      *puVar13 = pppppplVar14;
    }
    uStack_e28 = uStack_e28 + 1;
    ppppplStack_710 = (long *****)0x0;
LAB_1072a295c:
    pppppplVar32 = &ppppplStack_710;
    FUN_1072ada1c();
    pppppplVar19 = pppppplVar14;
  }
  ppppplVar15 = *(long ******)(param_1 + 0x50);
  lStack_e48 = *(long *)(param_1 + 0x58);
  lVar36 = lStack_e48;
  pppplStack_e50 = (long ****)ppppplVar15;
  if (lStack_e48 != 0) {
    do {
      func_0x0001072afaec();
      ppppplVar15 = extraout_x8_03;
      lVar36 = lStack_e48;
    } while (extraout_w11 != 0);
  }
  plStack_700 = (long *)0x0;
  if (uStack_e28 != 0) {
    plStack_700 = &lStack_e40;
  }
  pppplStack_e50 = (long ****)0x0;
  lStack_e48 = 0;
  ppppplStack_710 = ppppplVar15;
  ppppplStack_708 = (long *****)lVar36;
  FUN_107286be8(&ppppplStack_710,param_1 + 0x60);
  func_0x0001072ac928(&ppppplStack_710);
  ppppplVar15 = &pppplStack_e50;
  func_0x0001072ac928();
  ppppplVar43 = (long *****)*param_10;
  ppppplVar25 = (long *****)param_10[1];
  func_0x0001072afe48();
  func_0x0001072b0370();
  *ppppplVar15 = (long ****)&PTR_FUN_110999af0;
  ppppplStack_710 = ppppplVar43;
  ppppplStack_708 = ppppplVar25;
  if (ppppplVar25 != (long *****)0x0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_00 != 0);
    do {
      func_0x0001072af838();
    } while (extraout_w10_01 != 0);
  }
  pppppplVar19[3] = (long *****)&PTR_DAT_110999b40;
  pppppplVar19[4] = ppppplVar43;
  pppppplVar19[5] = ppppplVar25;
  func_0x0001072adad8(&ppppplStack_710);
  ppplStack_148 = (long ***)0x0;
  ppplStack_150 = (long ***)0x0;
  ppppplStack_e0 = (long *****)(pppppplVar19 + 3);
  ppppplStack_d8 = (long *****)pppppplVar19;
  func_0x0001078bbff8(param_1 + 0xe08,&ppppplStack_e0);
  func_0x0001072adb2c(&ppppplStack_e0);
  func_0x0001072adb08(&ppplStack_150);
  uStack_e68 = 0;
  uStack_e60 = 0;
  uVar27 = *(ulong *)(param_2 + 0x18);
  uStack_e58 = 0;
  puVar18 = (ulong *)(param_2 + 0x18);
  if ((uVar27 & 1) != 0) {
    puVar18 = (ulong *)(uVar27 + 7);
  }
  for (lVar36 = (long)*(int *)(param_2 + 0x20) << 3; lVar36 != 0; lVar36 = lVar36 + -8) {
    func_0x000107933210(&ppppplStack_710,0,*puVar18);
    FUN_1072aa360(&uStack_e68,&ppppplStack_710);
    func_0x0001079332b0(&ppppplStack_710);
    puVar18 = puVar18 + 1;
  }
  uStack_e88 = 0;
  uStack_e90 = 0;
  uStack_e78 = 0;
  uStack_e80 = 0;
  uVar27 = *(ulong *)(param_2 + 0x30);
  uStack_e70 = 0x3f800000;
  puVar18 = (ulong *)(param_2 + 0x30);
  if ((uVar27 & 1) != 0) {
    puVar18 = (ulong *)(uVar27 + 7);
  }
  for (lVar36 = (long)*(int *)(param_2 + 0x38) << 3; lVar36 != 0; lVar36 = lVar36 + -8) {
    func_0x0001002a9bd4(&ppppplStack_710,*(ulong *)(*puVar18 + 0x10) & 0xfffffffffffffffc,
                        *(ulong *)(*puVar18 + 0x18) & 0xfffffffffffffffc);
    func_0x0001002a9e14(&uStack_e90,&ppppplStack_710);
    func_0x0001002aa0bc(&ppppplStack_710);
    puVar18 = puVar18 + 1;
  }
  (**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,&uStack_e68);
  func_0x0001072adb50(param_1 + 0xe90,&uStack_e90);
  puVar13 = (undefined8 *)0xe8;
  __Znwm();
  func_0x0001072b0370();
  ppppplVar15 = (long *****)(puVar13 + 3);
  *puVar13 = &PTR_FUN_1109990b0;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  pppppplVar19[0x19] = (long *****)0x0;
  pppppplVar19[0x18] = (long *****)0x0;
  pppppplVar19[0x1b] = (long *****)0x0;
  pppppplVar19[0x1a] = (long *****)0x0;
  *(undefined4 *)(pppppplVar19 + 0x1c) = 0x3f800000;
  param_3 = param_3 + 2;
  ppppplStack_710 = ppppplVar15;
  ppppplStack_708 = (long *****)pppppplVar19;
  while (param_3 = (long ******)*param_3, param_3 != (long ******)0x0) {
    FUN_1072aa740(ppppplStack_710,param_3 + 2,param_3 + 5);
  }
  func_0x0001072a5d60(param_1 + 0xeb8,&ppppplStack_710);
  func_0x0001072ac4dc(&ppppplStack_710);
  func_0x0001072a5d84(param_1 + 0xec8,param_4);
  lVar36 = *(long *)(param_1 + 0xed8);
  uStack_e98 = param_6[1];
  uStack_ea0 = *param_6;
  if (param_6[1] != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_02 != 0);
  }
  FUN_1072ab574(lVar36 + 0x10);
  uVar40 = uStack_ea0;
  uStack_ea0 = 0;
  uStack_e98 = 0;
  func_0x0001072b05f4(uVar40);
  func_0x00010726ee4c();
  __ZNSt3__15mutex6unlockEv(lVar36 + 0x10);
  func_0x0001072b01a0();
  lVar36 = *(long *)(param_1 + 0x1028);
  uStack_ea8 = param_7[1];
  uStack_eb0 = *param_7;
  if (param_7[1] != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_03 != 0);
  }
  FUN_1072ab574(lVar36 + 0x10);
  uVar40 = uStack_eb0;
  uStack_eb0 = 0;
  uStack_ea8 = 0;
  func_0x0001072b05f4(uVar40);
  func_0x0001072adb8c();
  __ZNSt3__15mutex6unlockEv(lVar36 + 0x10);
  func_0x0001072adb8c(&uStack_eb0);
  func_0x0001072a5dbc(param_1 + 0x1038,param_8);
  *(int *)(param_1 + 0xe88) = *(int *)(param_1 + 0xe88) + 1;
  func_0x0001072a5df4(param_1 + 0xe38,param_5);
  ppuVar3 = &PTR_PTR_113233e38;
  if (*(undefined ***)(param_2 + 0x78) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 0x78);
  }
  func_0x00010793c744(param_1 + 0xee8,ppuVar3);
  lVar36 = *(long *)(param_1 + 0x18);
  while ((lVar36 != *(long *)(param_1 + 0x20) &&
         ((*(long *)(lVar36 + 8) == 0 || (*(long *)(*(long *)(lVar36 + 8) + 8) == -1))))) {
    lVar36 = lVar36 + 0x10;
  }
  FUN_1072a6080(&uStack_750);
  puVar17 = (undefined8 *)(*(ulong *)(param_1 + 0xf00) & 0xfffffffffffffffc);
  lVar36 = (long)*(char *)((long)puVar17 + 0x17);
  puVar13 = puVar17;
  if (lVar36 < 0) {
    puVar13 = (undefined8 *)*puVar17;
    lVar36 = puVar17[1];
  }
  func_0x000107859b70(puVar13,lVar36);
  uStack_2b0._0_5_ = SUB85(puVar13,0);
  if ((ulong)puVar13 >> 0x20 != 0) {
    func_0x000100060964(&ppppplStack_e0,&UNK_10f408c56);
    func_0x000107859d40(&ppppplStack_200,&uStack_2b0);
    FUN_1072625b4(&ppplStack_150,&ppppplStack_200);
    FUN_107277488(&ppppplStack_710,&ppplStack_150);
    func_0x0001072b008c();
    func_0x0001072afd08();
    func_0x0001072b04a0();
    func_0x0001072b018c();
    func_0x000104c2f714(&ppppplStack_e0);
    func_0x000100060964(&ppplStack_150,&UNK_10f408c62);
    puVar18 = &uStack_2b0;
    func_0x000107859da8();
    ppppplStack_d8 = (long *****)(double)((ulong)puVar18 & 0xffffffff);
    uStack_78 = 2;
    func_0x0001072b008c();
    func_0x0001072afd08();
    func_0x0001072b04a0();
  }
  func_0x000100060964(&ppppplStack_200,&UNK_10f408c72);
  func_0x0001072b0458(*(undefined8 *)(param_1 + 0xef8),&uStack_2b0);
  FUN_107277488(&ppplStack_150,&uStack_2b0);
  func_0x0001072b008c();
  func_0x0001072afd08();
  func_0x0001072b046c();
  func_0x000104c2f714(&ppppplStack_200);
  func_0x000104c2f64c(apppplStack_188);
  func_0x000100060964(&ppppplStack_200,&DAT_10f36707f);
  func_0x000104c2f1f0(apppplStack_188,&ppppplStack_200);
  func_0x000104c2f714(&ppppplStack_200);
  func_0x000100060964(&uStack_2b0,&UNK_10f408c7b);
  FUN_107277488(&ppppplStack_200,apppplStack_188);
  func_0x0001072b008c();
  func_0x0001072afd08();
  func_0x0001072b046c();
  func_0x000100060964(&uStack_240,&UNK_10f408c88);
  uStack_2a8 = uStack_2a8 & 0xffffffffffffff00;
  uStack_248 = 1;
  func_0x0001072b008c();
  func_0x0001072afd08();
  func_0x000104c2f714(&uStack_240);
  func_0x000107879b50(uStack_750);
  lStack_238 = lStack_748;
  uStack_240 = uStack_750;
  lStack_748 = 0;
  uStack_750 = 0;
  func_0x000107879b34(&uStack_240);
  FUN_1072ae334(&uStack_240);
  func_0x000104c2f714(apppplStack_188);
  FUN_1072ae334(&uStack_750);
  if (*param_9 != 0) {
    if (*(char *)(param_1 + 0x1020) == '\x01') {
      func_0x0001072aacbc(param_1 + 0x1010);
    }
    else {
      *(long *)(param_1 + 0x1010) = *param_9;
      lVar36 = param_9[1];
      *(long *)(param_1 + 0x1018) = lVar36;
      if (lVar36 != 0) {
        do {
          func_0x0001072af838();
        } while (extraout_w10_04 != 0);
      }
      *(undefined1 *)(param_1 + 0x1020) = 1;
    }
  }
  lVar36 = param_1 + 0x10c0;
  func_0x0001072a5e2c(lVar36,param_12);
  func_0x00010785f1f4();
  ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
  lVar36 = lVar36 + 0x820;
  func_0x0001072afbf4(lVar36);
  func_0x00010785f1f4();
  ppppplStack_e0 = (long *****)((ulong)ppppplStack_e0 & 0xffffffffffffff00);
  lVar36 = lVar36 + 0x830;
  FUN_10724e2c8(lVar36,&ppppplStack_e0);
  func_0x00010785f1f4();
  ppplStack_150 = (long ***)((ulong)ppplStack_150 & 0xffffffffffffff00);
  FUN_10724e2c8(lVar36 + 0x840,&ppplStack_150);
  ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
  iVar11 = (int)param_1 + 400;
  func_0x0001072afbf4();
  uRam00000001131ada68 = (undefined1)iVar11;
  if (iVar11 != 0) {
    puRam00000001138369a8 = &UNK_10785e688;
  }
  ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
  cVar5 = (char)param_1 + -0x50;
  func_0x0001072afbf4();
  cRam00000001138369b0 = cVar5;
  ppppplStack_710 = (long *****)CONCAT44(ppppplStack_710._4_4_,0xffffffff);
  lVar36 = param_1 + 0x9c0;
  func_0x0001072a5e64(lVar36,&ppppplStack_710);
  uRam0000000113230840 = (undefined4)lVar36;
  ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
  func_0x0001072afbf4(param_1 + 0x370);
  func_0x0001072affcc(0x113822cb8);
  func_0x0001072afbf4(param_1 + 0x620);
  func_0x0001072affcc(0x113822cb9);
  func_0x0001072afbf4(param_1 + 0x6a0);
  func_0x0001072affcc(0x113822cba);
  func_0x0001072afbf4(param_1 + 0x900);
  func_0x0001072affcc(0x113822cbb);
  func_0x0001072afbf4(param_1 + 0x8b0);
  func_0x0001072affcc(0x1138369b8);
  func_0x0001072afbf4(param_1 + 0x8c0);
  func_0x0001072affcc(0x1138369b9);
  func_0x0001072afbf4(param_1 + 0x8d0);
  func_0x0001072affcc(0x1138369ba);
  func_0x0001072afbf4(param_1 + 0x9a0);
  func_0x0001072affcc(0x113822c88);
  cVar5 = (char)param_1 + -0x50;
  func_0x0001072afbf4();
  cRam0000000113822c89 = cVar5;
  func_0x0001072b0418();
  pppplVar37 = (long ****)(param_1 + 0x60);
  func_0x00010785eeac(pppplVar37,&ppppplStack_710);
  func_0x0001072b0030();
  if ((((uint)pppplVar37 ^ 0xffffffff) & 0x101) == 0) {
    ppplStack_148 = (long ***)0x0;
    ppplStack_150 = (long ***)0x0;
    ppplStack_140 = (long ***)0x0;
    ppppplStack_710 = (long *****)&ppplStack_150;
    ppppplStack_708 = (long *****)((ulong)ppppplStack_708 & 0xffffffffffffff00);
    pppplVar37 = (long ****)0x48;
    __Znwm();
    ppplStack_140 = (long ***)(pppplVar37 + 9);
    ppplStack_148 = (long ***)pppplVar37;
    for (lVar36 = 0; lVar36 != 0x48; lVar36 = lVar36 + 8) {
      *ppplStack_148 = (long **)*(long ****)(&UNK_10de2a3a8 + lVar36);
      ppplStack_148 = ppplStack_148 + 1;
    }
    ppppplStack_708 = (long *****)CONCAT71(ppppplStack_708._1_7_,1);
    ppplStack_150 = (long ***)pppplVar37;
    FUN_1072aadf0(&ppppplStack_710);
    FUN_107289330(&ppppplStack_200);
    ppppplStack_e0 = (long *****)((ulong)ppppplStack_e0 & 0xffffffff00000000);
    uStack_d0 = uStack_1f8;
    ppppplStack_d8 = ppppplStack_200;
    ppppplStack_200 = (long *****)0x0;
    uStack_1f8 = 0;
    func_0x000104c33108(&ppppplStack_200);
    pppplVar37 = (long ****)ppplStack_148;
    pppplVar39 = (long ****)ppplStack_150;
    while (pppplVar39 != pppplVar37) {
      ppppplStack_708 = (long *****)(long)*(int *)pppplVar39;
      iVar11 = *(int *)((long)pppplVar39 + 4);
      pppppplVar32 = (long ******)0x0;
      if (6 < (int)ppppplStack_e0 - 1U) {
        pppppplVar32 = &ppppplStack_d8;
      }
      ppppplStack_710._0_4_ = 4;
      func_0x0001072aacf4(pppppplVar32,&ppppplStack_710);
      func_0x0001072b0038();
      pppppplVar32 = (long ******)0x0;
      if (6 < (int)ppppplStack_e0 - 1U) {
        pppppplVar32 = &ppppplStack_d8;
      }
      ppppplStack_710 = (long *****)CONCAT44(ppppplStack_710._4_4_,4);
      ppppplStack_708 = (long *****)(long)iVar11;
      func_0x0001072aacf4(pppppplVar32,&ppppplStack_710);
      func_0x0001072b0038();
      pppplVar39 = pppplVar39 + 1;
    }
    FUN_1072aae18(&ppplStack_150);
    func_0x00010002b838(&ppplStack_150,&UNK_10f40859c);
    FUN_107268350(&ppppplStack_710,&ppppplStack_e0);
    func_0x00010785edd4(param_1 + 0x60,&ppplStack_150,&ppppplStack_710);
    func_0x0001072b0038();
    func_0x0001072b01d4();
    func_0x0001072b0420();
  }
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) {
    lVar36 = *(long *)(param_1 + 0x1000);
    if (lVar36 == 0) {
      uVar27 = *(ulong *)(*(long *)(param_2 + 0x80) + 0x10);
      puVar13 = (undefined8 *)0x58;
      __Znwm();
      func_0x0001072b0370();
      *puVar13 = &PTR_FUN_110999b98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&pplStack_a40,uVar27 & 0xfffffffffffffffc);
      pplVar6 = pplStack_a30;
      ppplVar31 = *(long ****)(param_1 + 0xe18);
      ppplVar29 = *(long ****)(param_1 + 0xe20);
      if (ppplVar29 != (long ***)0x0) {
        ppplVar1 = ppplVar29 + 1;
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
          if (bVar10) {
            *ppplVar1 = (long **)((long)*ppplVar1 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pppplVar37[3] = (long ***)&PTR_DAT_11099f738;
      pppplVar37[5] = (long ***)pplStack_a38;
      pppplVar37[4] = (long ***)pplStack_a40;
      pplStack_a38 = (long **)0x0;
      pplStack_a40 = (long **)0x0;
      pplStack_a30 = (long **)0x0;
      pppplVar37[6] = (long ***)pplVar6;
      pppplVar37[7] = (long ***)(param_1 + 0xc50);
      pppplVar37[8] = ppplVar31;
      pppplVar37[9] = ppplVar29;
      ppppplStack_708 = (long *****)0x0;
      ppppplStack_710 = (long *****)0x0;
      pppplVar37[10] = (long ***)0x0;
      func_0x00010726eedc(&ppppplStack_710);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pplStack_a40);
      ppppplStack_e0 = (long *****)0x0;
      ppppplStack_d8 = (long *****)0x0;
      ppppplStack_708 = *(long ******)(param_1 + 0x1008);
      ppppplStack_710 = *(long ******)(param_1 + 0x1000);
      *(long *****)(param_1 + 0x1000) = pppplVar37 + 3;
      *(long *****)(param_1 + 0x1008) = pppplVar37;
      func_0x0001072ac970(&ppppplStack_710);
      func_0x0001072ac970(&ppppplStack_e0);
      func_0x00010b217494();
      func_0x0001072b0418();
      func_0x0001072b0030();
      lVar36 = *(long *)(param_1 + 0x1000);
    }
    FUN_1073119ec(lVar36,*(undefined1 *)(param_2 + 0xac));
  }
  FUN_1072a5e8c(param_1);
  if (((*(uint *)(param_2 + 0x10) >> 2 & 1) != 0) || ((*(uint *)(param_2 + 0x10) >> 1 & 1) != 0)) {
    func_0x000107527e54(&ppppplStack_710);
    uVar23 = *(uint *)(param_2 + 0x10);
    if ((uVar23 >> 2 & 1) != 0) {
      func_0x0001072b0178(*(undefined8 *)(*(long *)(param_2 + 0x88) + 0x10),auStack_ec8);
      func_0x000100066230(ppppplStack_710 + 9,auStack_ec8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ec8);
      uVar23 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar23 >> 1 & 1) != 0) {
      func_0x0001072b0178(*(undefined8 *)(*(long *)(param_2 + 0x80) + 0x10),auStack_ee0);
      func_0x000100066230(ppppplStack_710 + 6,auStack_ee0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ee0);
    }
    FUN_1072a5c64(param_1,&ppppplStack_710);
    func_0x000107527f90(&ppppplStack_710);
  }
  plVar38 = (long *)*puVar12;
  func_0x0001072b0418();
  (**(code **)(*plVar38 + 0x20))(plVar38,&ppppplStack_710,*(int *)(param_2 + 0xb0) == 1);
  func_0x0001072b0030();
  puVar13 = (undefined8 *)0x1e0;
  __Znwm();
  func_0x0001072b0370();
  puVar17 = puVar13 + 3;
  *puVar13 = &PTR_DAT_110999be8;
  func_0x000107362174(puVar17,param_1 + 0x1000);
  ppppplStack_e0 = (long *****)0x0;
  ppppplStack_d8 = (long *****)0x0;
  ppppplStack_708 = *(long ******)(param_1 + 0x1050);
  ppppplStack_710 = *(long ******)(param_1 + 0x1048);
  *(undefined8 **)(param_1 + 0x1048) = puVar17;
  *(long **)(param_1 + 0x1050) = plVar38;
  func_0x0001072ac9b8(&ppppplStack_710);
  func_0x0001072ac9b8(&ppppplStack_e0);
  ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
  plVar38 = (long *)(param_1 + 0x3d0);
  func_0x0001072afbf4();
  ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
  iVar11 = (int)param_1 + 0x3e0;
  func_0x0001072afbf4();
  uVar24 = 1;
  if (iVar11 == 0) {
    uVar24 = 2;
  }
  if ((bRam00000001136ca1c8 & 1) == 0) {
    iVar11 = 0x136ca1c8;
    ___cxa_guard_acquire();
    if (iVar11 != 0) {
      func_0x00010002b838(auStack_a58,"annotations");
      func_0x00010002b838(auStack_a88,"annotations");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_a70,auStack_a88);
      FUN_1072aae30(&ppppplStack_e0,auStack_a70);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,1);
      uStack_b8 = uStack_b8 & 0xffffffffffffff00;
      uStack_b0 = uStack_b0 & 0xffffffffffffff00;
      FUN_1072ab170(&ppppplStack_710,auStack_a58,&ppppplStack_e0);
      func_0x00010002b838(auStack_aa0,&UNK_10f408cb5);
      func_0x00010002b838(auStack_ad0,&UNK_10f408cb5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_ab8,auStack_ad0);
      FUN_1072aae30(&ppplStack_150,auStack_ab8);
      uStack_130 = 1;
      uStack_128 = 0;
      uStack_120 = 0;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_ae8,&DAT_10f391e20);
      func_0x00010002b838(auStack_b18,&DAT_10f391e20);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_b00,auStack_b18);
      FUN_1072aae30(&ppppplStack_200,auStack_b00);
      uStack_1e0 = 1;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_b30,&DAT_10f408cc1);
      func_0x00010002b838(auStack_b60,&DAT_10f408cc1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_b48,auStack_b60);
      FUN_1072aae30(&uStack_2b0,auStack_b48);
      uStack_290 = 1;
      uStack_288 = 0;
      uStack_280 = 0;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_b78,&UNK_10f408cca);
      func_0x00010002b838(auStack_ba8,&UNK_10f408cca);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_b90,auStack_ba8);
      FUN_1072aae30(apppplStack_188,auStack_b90);
      uStack_168 = 1;
      uStack_160 = 0;
      uStack_158 = 0;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_bc0,"memories");
      func_0x00010002b838(auStack_bf0,"memories");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_bd8,auStack_bf0);
      FUN_1072aae30(&uStack_240,auStack_bd8);
      uStack_220 = 1;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_c08,&DAT_10f391daa);
      func_0x00010002b838(auStack_c38,&DAT_10f391daa);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_c20,auStack_c38);
      FUN_1072aae30(&uStack_750,auStack_c20);
      uStack_730 = 1;
      uStack_728 = 0;
      uStack_720 = 0;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_c50,&DAT_10f391e33);
      func_0x00010002b838(auStack_c80,&DAT_10f391e33);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_c68,auStack_c80);
      FUN_1072aae30(&uStack_790,auStack_c68);
      uStack_770 = 1;
      uStack_768 = 0x8cd0e3a000;
      uStack_760 = 1;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_c98,"favorites");
      func_0x00010002b838(auStack_cc8,"favorites");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_cb0,auStack_cc8);
      FUN_1072aae30(&uStack_7d0,auStack_cb0);
      uVar41 = SUB84(plVar38,0);
      uStack_7a8 = 0;
      uStack_7a0 = 0;
      uStack_7b0 = uVar41;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_ce0,&DAT_10f301a6d);
      func_0x00010002b838(auStack_d10,&DAT_10f301a6d);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_cf8,auStack_d10);
      FUN_1072aae30(&puStack_808,auStack_cf8);
      uStack_7e0 = 0;
      uStack_7d8 = 0;
      uStack_7e8 = uVar41;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_d28,&DAT_10f391dce);
      func_0x00010002b838(auStack_d58,&DAT_10f391dce);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_d40,auStack_d58);
      FUN_1072aae30(auStack_840,auStack_d40);
      uStack_818 = 0;
      uStack_810 = 0;
      uStack_820 = uVar41;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_d70,&DAT_10f391db3);
      func_0x00010002b838(auStack_da0,&DAT_10f391db3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_d88,auStack_da0);
      FUN_1072aae30(auStack_878,auStack_d88);
      uStack_850 = 0;
      uStack_848 = 0;
      uStack_858 = uVar41;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_db8,&UNK_10f408cdf);
      func_0x00010002b838(auStack_de8,&UNK_10f408cdf);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_dd0,auStack_de8);
      FUN_1072aae30(auStack_8b0,auStack_dd0);
      uStack_888 = 0;
      uStack_880 = 0;
      uStack_890 = uVar41;
      func_0x0001072afc14();
      func_0x00010002b838(&ppppplStack_710,auStack_e00,&DAT_10f34b957);
      pppuStack_8d0 = appuStack_8e8;
      appuStack_8e8[0] = &PTR_FUN_110999180;
      uStack_8c0 = 0;
      uStack_8b8 = 0;
      uStack_8c8 = uVar24;
      func_0x0001072afc14();
      lVar36 = 0;
      plRam00000001136ca1d8 = (long *)0x0;
      lRam00000001136ca1d0 = 0;
      uRam00000001136ca1e8 = 0;
      plRam00000001136ca1e0 = (long *)0x0;
      fRam00000001136ca1f0 = 1.0;
      do {
        uVar9 = lVar36 + -0x460 < 0;
        if (lVar36 == 0x460) goto LAB_1072a4274;
        lVar34 = (long)&ppppplStack_710 + lVar36;
        plVar30 = (long *)0x1136ca1e8;
        func_0x000100102e7c(0x1136ca1e8,lVar34);
        plVar21 = plRam00000001136ca1d8;
        plVar20 = plVar30;
        if (plRam00000001136ca1d8 != (long *)0x0) {
          uVar27 = (long)plRam00000001136ca1d8 - 1;
          if (((ulong)plRam00000001136ca1d8 & uVar27) == 0) {
            plVar38 = (long *)(uVar27 & (ulong)plVar30);
            uVar9 = false;
          }
          else {
            uVar9 = (long)plVar30 - (long)plRam00000001136ca1d8 < 0;
            plVar38 = plVar30;
            if (plRam00000001136ca1d8 <= plVar30) {
              uVar28 = 0;
              if (plRam00000001136ca1d8 != (long *)0x0) {
                uVar28 = (ulong)plVar30 / (ulong)plRam00000001136ca1d8;
              }
              plVar38 = (long *)((long)plVar30 - uVar28 * (long)plRam00000001136ca1d8);
            }
          }
          plVar42 = *(long **)(lRam00000001136ca1d0 + (long)plVar38 * 8);
          if (plVar42 != (long *)0x0) {
            do {
              while( true ) {
                plVar42 = (long *)*plVar42;
                if (plVar42 == (long *)0x0) goto LAB_1072a3fd4;
                plVar26 = (long *)plVar42[1];
                uVar9 = (long)plVar26 - (long)plVar30 < 0;
                if (plVar26 != plVar30) break;
                plVar20 = plVar42 + 2;
                func_0x0001000e107c(plVar20,lVar34);
                if (((ulong)plVar20 & 1) != 0) goto LAB_1072a4268;
              }
              if (((ulong)plVar21 & uVar27) == 0) {
                plVar26 = (long *)((ulong)plVar26 & uVar27);
              }
              else if (plVar21 <= plVar26) {
                uVar28 = 0;
                if (plVar21 != (long *)0x0) {
                  uVar28 = (ulong)plVar26 / (ulong)plVar21;
                }
                plVar26 = (long *)((long)plVar26 - uVar28 * (long)plVar21);
              }
              uVar9 = (long)plVar26 - (long)plVar38 < 0;
            } while (plVar26 == plVar38);
          }
        }
LAB_1072a3fd4:
        func_0x0001072b058c();
        uStack_a20 = 0x1136ca1e0;
        uStack_a18 = 0;
        *plVar20 = 0;
        plVar20[1] = (long)plVar30;
        plStack_a28 = plVar20;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar20 + 2,lVar34)
        ;
        func_0x0001072ab3b0(plVar20 + 5,(long)auStack_6f8 + lVar36);
        uStack_a18 = CONCAT71(uStack_a18._1_7_,1);
        if ((plVar21 == (long *)0x0) ||
           (func_0x0001002ab830((float)(uRam00000001136ca1e8 + 1),fRam00000001136ca1f0,
                                (float)plVar21), (bool)uVar9)) {
          bVar8 = (long *)0x2 < plVar21;
          bVar10 = plVar21 == (long *)0x3;
          func_0x0001072af7c0((long)plVar21 << 1);
          plVar38 = extraout_x8_04;
          if (!bVar8 || bVar10) {
            plVar38 = extraout_x9_03;
          }
          if ((long)plVar38 - 1U == 0) {
            plVar38 = (long *)0x2;
          }
          else if (((ulong)plVar38 & (long)plVar38 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          plVar42 = plRam00000001136ca1d8;
          plVar21 = plVar38;
          if (plRam00000001136ca1d8 < plVar38) {
LAB_1072a4080:
            if ((ulong)plVar21 >> 0x3d != 0) {
              func_0x000104bd35f4();
LAB_1072a4454:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1072a4458);
              (*pcVar7)();
            }
            __Znwm((long)plVar21 << 3);
            func_0x0001072ab2fc();
            plVar38 = (long *)0x0;
            lVar34 = lRam00000001136ca1d0;
            plRam00000001136ca1d8 = plVar21;
            while (plVar42 = plRam00000001136ca1e0, plVar21 != plVar38) {
              func_0x0001072afffc();
              lVar34 = extraout_x8_05;
              plVar38 = extraout_x9_04;
            }
            if (plRam00000001136ca1e0 != (long *)0x0) {
              plVar38 = (long *)plRam00000001136ca1e0[1];
              uVar28 = (long)plVar21 - 1;
              uVar27 = 0;
              if (plVar21 != (long *)0x0) {
                uVar27 = (ulong)plVar38 / (ulong)plVar21;
              }
              plVar26 = plVar38;
              if (plVar21 <= plVar38) {
                plVar26 = (long *)((long)plVar38 - uVar27 * (long)plVar21);
              }
              if (((ulong)plVar21 & uVar28) == 0) {
                plVar26 = (long *)((ulong)plVar38 & uVar28);
              }
              *(undefined8 *)(lVar34 + (long)plVar26 * 8) = 0x1136ca1e0;
              while (plVar38 = plVar42, plVar42 = (long *)*plVar38, plVar42 != (long *)0x0) {
                plVar33 = (long *)plVar42[1];
                if (((ulong)plVar21 & uVar28) == 0) {
                  plVar33 = (long *)((ulong)plVar33 & uVar28);
                }
                else if (plVar21 <= plVar33) {
                  uVar27 = 0;
                  if (plVar21 != (long *)0x0) {
                    uVar27 = (ulong)plVar33 / (ulong)plVar21;
                  }
                  plVar33 = (long *)((long)plVar33 - uVar27 * (long)plVar21);
                }
                if (plVar33 != plVar26) {
                  if (*(long *)(lVar34 + (long)plVar33 * 8) == 0) {
                    *(long **)(lVar34 + (long)plVar33 * 8) = plVar38;
                    plVar26 = plVar33;
                  }
                  else {
                    *plVar38 = *plVar42;
                    func_0x0001072af75c();
                    lVar34 = extraout_x8_06;
                    uVar28 = extraout_x9_05;
                    plVar42 = extraout_x10_00;
                    plVar26 = extraout_x11_00;
                  }
                }
              }
            }
          }
          else {
            plVar21 = plRam00000001136ca1d8;
            if (plVar38 < plRam00000001136ca1d8) {
              plVar21 = (long *)(long)((float)uRam00000001136ca1e8 / fRam00000001136ca1f0);
              if ((plRam00000001136ca1d8 < (long *)0x3) ||
                 (((ulong)plRam00000001136ca1d8 & (long)plRam00000001136ca1d8 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else {
                func_0x0001072af6cc();
              }
              if (plVar38 <= plVar21) {
                plVar38 = plVar21;
              }
              plVar21 = plRam00000001136ca1d8;
              if (plVar38 < plVar42) {
                plVar21 = plVar38;
                if (plVar38 != (long *)0x0) goto LAB_1072a4080;
                func_0x0001072ab2fc(0);
                plRam00000001136ca1d8 = (long *)0x0;
                plVar21 = (long *)0x0;
              }
            }
          }
          if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
            plVar38 = (long *)((long)plVar21 - 1U & (ulong)plVar30);
          }
          else {
            plVar38 = plVar30;
            if (plVar21 <= plVar30) {
              uVar27 = 0;
              if (plVar21 != (long *)0x0) {
                uVar27 = (ulong)plVar30 / (ulong)plVar21;
              }
              plVar38 = (long *)((long)plVar30 - uVar27 * (long)plVar21);
            }
          }
        }
        lVar34 = lRam00000001136ca1d0;
        plVar30 = *(long **)(lRam00000001136ca1d0 + (long)plVar38 * 8);
        if (plVar30 == (long *)0x0) {
          *plVar20 = (long)plRam00000001136ca1e0;
          plRam00000001136ca1e0 = plVar20;
          *(undefined8 *)(lVar34 + (long)plVar38 * 8) = 0x1136ca1e0;
          if (*plVar20 != 0) {
            plVar30 = *(long **)(*plVar20 + 8);
            if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
              plVar30 = (long *)((ulong)plVar30 & (long)plVar21 - 1U);
            }
            else if (plVar21 <= plVar30) {
              uVar27 = 0;
              if (plVar21 != (long *)0x0) {
                uVar27 = (ulong)plVar30 / (ulong)plVar21;
              }
              plVar30 = (long *)((long)plVar30 - uVar27 * (long)plVar21);
            }
            *(long **)(lVar34 + (long)plVar30 * 8) = plVar20;
          }
        }
        else {
          *plVar20 = *plVar30;
          *plVar30 = (long)plVar20;
        }
        plStack_a28 = (long *)0x0;
        uRam00000001136ca1e8 = uRam00000001136ca1e8 + 1;
        func_0x0001072ab318(&plStack_a28);
LAB_1072a4268:
        lVar36 = lVar36 + 0x50;
      } while( true );
    }
  }
  do {
    plVar38 = (long *)0x1136ca1e0;
    while (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0) {
      uVar40 = *(undefined8 *)(param_1 + 0x1048);
      FUN_107262e9c(&ppppplStack_710,plVar38 + 2);
      func_0x0001072ab3b0(&ppppplStack_e0,plVar38 + 5);
      func_0x000107362428(uVar40,&ppppplStack_710,&ppppplStack_e0);
      func_0x0001072b0154();
      func_0x000104c2f714(&ppppplStack_710);
    }
    func_0x000104bfec6c(&ppppplStack_710);
    func_0x000100450bb4(param_1 + 0x1058,&ppppplStack_710);
    func_0x000100450be4(&ppppplStack_710);
    (**(code **)(**(long **)(param_1 + 0x1068) + 0x20))
              (*(long **)(param_1 + 0x1068),*(undefined4 *)(param_2 + 0xa8),0);
    plVar38 = *(long **)(param_1 + 0x1068);
    uVar23 = *(uint *)(param_2 + 0xa8);
    uVar9 = *(undefined ***)(param_2 + 0xa0) == (undefined **)0x0;
    ppuVar3 = &PTR_PTR_113234360;
    if (!(bool)uVar9) {
      ppuVar3 = *(undefined ***)(param_2 + 0xa0);
    }
    FUN_1072a4d9c(&ppppplStack_710,ppuVar3);
    (**(code **)(*plVar38 + 0x28))(plVar38,(ulong)uVar23,&ppppplStack_710,0);
    FUN_1072a9f04(&ppppplStack_710);
    (**(code **)(**(long **)(param_1 + 0x1068) + 0x40))
              (*(long **)(param_1 + 0x1068),*(undefined1 *)(param_2 + 0xad),0);
    if ((*(byte *)(param_2 + 0x10) >> 4 & 1) == 0) {
      uVar9 = *(undefined ***)(param_2 + 0x80) == (undefined **)0x0;
      ppuVar3 = &PTR_PTR_1134054b0;
      if (!(bool)uVar9) {
        ppuVar3 = *(undefined ***)(param_2 + 0x80);
      }
      func_0x0001000da6e0(&ppppplStack_710,(ulong)ppuVar3[2] & 0xfffffffffffffffc,0);
      func_0x0001072ab410(&ppppplStack_e0,&ppppplStack_710);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (apppplStack_188,&ppppplStack_e0);
      pppppplVar32 = &ppppplStack_e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0001072b0030();
    }
    else {
      pppppplVar32 = (long ******)apppplStack_188;
      func_0x0001072b0178(*(undefined8 *)(*(long *)(param_2 + 0x98) + 0x10));
    }
    func_0x0001072b0070();
    func_0x0001072b03b8();
    pppppplVar19 = pppppplVar32 + 3;
    *pppppplVar32 = (long *****)&PTR_DAT_110999c38;
    FUN_1072f9e10(pppppplVar19,apppplStack_188);
    ppppplStack_e0 = (long *****)0x0;
    ppppplStack_d8 = (long *****)0x0;
    ppppplStack_708 = *(long ******)(param_1 + 0x1080);
    ppppplStack_710 = *(long ******)(param_1 + 0x1078);
    *(long *******)(param_1 + 0x1078) = pppppplVar19;
    *(ulong *)(param_1 + 0x1080) = (ulong)uVar23;
    func_0x0001072ac9dc(&ppppplStack_710);
    func_0x0001072ac9dc(&ppppplStack_e0);
    if ((*(byte *)(param_2 + 0x10) >> 3 & 1) == 0) {
      uVar27 = *(ulong *)(param_2 + 0x70) & 0xfffffffffffffffc;
      lVar36 = (long)*(char *)(uVar27 + 0x17);
      if (lVar36 < 0) {
        lVar36 = *(long *)(uVar27 + 8);
      }
      if (lVar36 == 0) {
        uVar22 = 0;
        ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
        goto LAB_1072a3638;
      }
      FUN_10728a260();
      FUN_10728f0c8(&ppppplStack_710);
    }
    else {
      FUN_107246514(*(undefined8 *)(*(long *)(param_2 + 0x90) + 0x10),
                    *(undefined8 *)(*(long *)(param_2 + 0x90) + 0x18),&ppppplStack_710,0);
      uVar22 = 1;
LAB_1072a3638:
      plStack_700 = (long *)CONCAT71(plStack_700._1_7_,uVar22);
    }
    *(long ******)(param_1 + 0x10b0) = ppppplStack_708;
    *(ulong *)(param_1 + 0x10a8) = (ulong)ppppplStack_710;
    *(undefined1 *)(param_1 + 0x10b8) = plStack_700._0_1_;
    uStack_f28 = *(undefined8 *)(param_1 + 0xe20);
    uStack_f30 = *puVar12;
    if (*(long *)(param_1 + 0xe20) != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_05 != 0);
    }
    uStack_f20 = *(undefined8 *)(param_1 + 0xeb8);
    lStack_f18 = *(long *)(param_1 + 0xec0);
    if (lStack_f18 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_06 != 0);
    }
    uStack_f10 = *(undefined8 *)(param_1 + 0x1058);
    lStack_f08 = *(long *)(param_1 + 0x1060);
    if (lStack_f08 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_07 != 0);
    }
    puVar13 = &uStack_f00;
    func_0x0001072b0178(*(undefined8 *)(param_1 + 0xf00));
    puStack_9f8 = (undefined8 *)0x0;
    func_0x0001072b01f0();
    puVar13[2] = uStack_f28;
    puVar13[1] = uStack_f30;
    *puVar13 = &PTR_FUN_110999c88;
    uStack_f30 = 0;
    uStack_f28 = 0;
    puVar13[4] = lStack_f18;
    puVar13[3] = uStack_f20;
    uStack_f20 = 0;
    lStack_f18 = 0;
    puVar13[6] = lStack_f08;
    puVar13[5] = uStack_f10;
    uStack_f10 = 0;
    lStack_f08 = 0;
    puVar13[8] = uStack_ef8;
    puVar13[7] = uStack_f00;
    puVar13[9] = uStack_ef0;
    uStack_f00 = 0;
    uStack_ef8 = 0;
    uStack_ef0 = 0;
    puStack_9f8 = puVar13;
    FUN_1072adfec(&ppppplStack_e0,auStack_a10);
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    uStack_a8 = 0;
    puVar17 = (undefined8 *)(*(ulong *)(param_1 + 0xf00) & 0xfffffffffffffffc);
    lVar36 = (long)*(char *)((long)puVar17 + 0x17);
    puVar13 = puVar17;
    if (lVar36 < 0) {
      puVar13 = (undefined8 *)*puVar17;
      lVar36 = puVar17[1];
    }
    uVar27 = *(ulong *)(param_2 + 0x60);
    uVar28 = *(ulong *)(param_2 + 0x68);
    func_0x000107859b70(puVar13,lVar36);
    lVar36 = *(long *)(param_1 + 0xe20);
    lVar34 = *(long *)(param_1 + 0xe20);
    uVar40 = *puVar12;
    puVar17 = (undefined8 *)0x230;
    __Znwm();
    puVar17[1] = 0;
    puVar17[2] = 0;
    *puVar17 = &PTR_FUN_110999d18;
    uStack_240 = uVar40;
    lStack_238 = lVar34;
    if (lVar36 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_08 != 0);
    }
    uStack_750 = *(undefined8 *)(param_1 + 0x1068);
    lStack_748 = *(long *)(param_1 + 0x1070);
    if (lStack_748 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_09 != 0);
    }
    uStack_788 = *(undefined8 *)(param_1 + 0x1080);
    uStack_790 = *(undefined8 *)(param_1 + 0x1078);
    if (*(long *)(param_1 + 0x1080) != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_10 != 0);
    }
    FUN_1072ae058(&ppppplStack_710,&ppppplStack_e0);
    uStack_7c8 = *(undefined8 *)(param_1 + 0xf28);
    uStack_7d0 = *(undefined8 *)(param_1 + 0xf20);
    if (*(long *)(param_1 + 0xf28) != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_11 != 0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppplStack_150,uVar27 & 0xfffffffffffffffc);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppppplStack_200,uVar28 & 0xfffffffffffffffc);
    uStack_2a8 = *(ulong *)(param_1 + 0x10b0);
    uStack_2b0 = *(ulong *)(param_1 + 0x10a8);
    uStack_2a0 = *(undefined8 *)(param_1 + 0x10b8);
    func_0x00010734bd14(puVar17 + 3,&uStack_240,&uStack_750,&uStack_790,&ppppplStack_710,&uStack_7d0
                        ,&ppplStack_150,&ppppplStack_200,&uStack_2b0,param_1 + 0xc50,puVar13);
    func_0x0001072b018c();
    func_0x0001072b01d4();
    func_0x00010724bd50(&uStack_7d0);
    func_0x0001072ab460(&ppppplStack_710);
    func_0x0001072ac9dc(&uStack_790);
    func_0x0001072ac8e0(&uStack_750);
    func_0x00010726eedc(&uStack_240);
    puStack_808 = puVar17 + 3;
    puStack_800 = puVar17;
    FUN_1072a6024(param_1 + 0x1088,&puStack_808);
    func_0x0001072aca00(&puStack_808);
    func_0x0001072ab460(&ppppplStack_e0);
    FUN_1072adfb8(auStack_a10);
    func_0x0001072a6048(&uStack_f30);
    ppppplStack_710 = (long *****)((ulong)ppppplStack_710 & 0xffffffffffffff00);
    uVar27 = param_1 + 0xa00;
    func_0x0001072afbf4();
    if ((uVar27 & 1) == 0) {
      ppppplStack_e0 = (long *****)((ulong)ppppplStack_e0 & 0xffffffffffffff00);
      uVar27 = param_1 + 0x9b0;
      FUN_10724e2c8(uVar27,&ppppplStack_e0);
      if ((uVar27 & 1) != 0) goto LAB_1072a38d8;
    }
    else {
LAB_1072a38d8:
      puVar13 = (undefined8 *)0xc8;
      __Znwm();
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = &PTR_DAT_110999d68;
      _bzero(puVar13 + 3,0xb0);
      __ZNSt3__119__shared_mutex_baseC1Ev(puVar13 + 4);
      ppppplStack_e0 = (long *****)0x0;
      ppppplStack_d8 = (long *****)0x0;
      ppppplStack_708 = *(long ******)(param_1 + 0x10a0);
      ppppplStack_710 = *(long ******)(param_1 + 0x1098);
      *(undefined8 **)(param_1 + 0x1098) = puVar13 + 3;
      *(undefined8 **)(param_1 + 0x10a0) = puVar13;
      func_0x00010725afe8(&ppppplStack_710);
      func_0x00010725afe8(&ppppplStack_e0);
    }
    ppppplStack_710 = (long *****)CONCAT44(ppppplStack_710._4_4_,5);
    auStack_6f8[0] = 0;
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    func_0x0001072afe50();
    uStack_6e8 = 0;
    uStack_6c8 = 0;
    uStack_6c4 = 1;
    uStack_6b0 = 0;
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    ppppplStack_e0 = (long *****)CONCAT44(ppppplStack_e0._4_4_,*(undefined4 *)(param_1 + 0xe88));
    ppppplStack_d8 = (long *****)((ulong)ppppplStack_d8 & 0xffffffff00000000);
    ppplStack_150 = *(long ****)(param_1 + 0xc50);
    ppplStack_148 = (long ***)CONCAT44(ppplStack_148._4_4_,3);
    func_0x00010743fa44(param_1 + 0xc50,&ppppplStack_710,&ppppplStack_e0,&ppplStack_150,7);
    FUN_107262330(&ppppplStack_710);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppplStack_188);
    func_0x00010028ad98(&uStack_e90);
    func_0x0001072ab4c8(&uStack_e68);
    func_0x0001072ad9c0(&lStack_e40);
    __ZNSt3__15mutex6unlockEv(param_1 + 0xe48);
    func_0x00010743d7e4(auStack_9f0);
    func_0x0001072af6ec(uStack_70);
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
LAB_1072a4274:
    lVar36 = 0x410;
    do {
      func_0x0001072ab35c((long)&ppppplStack_710 + lVar36);
      lVar36 = lVar36 + -0x50;
    } while (lVar36 != -0x50);
    func_0x0001072ab37c(appuStack_8e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e00);
    func_0x0001072ab37c(auStack_8b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_dd0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_de8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_db8);
    func_0x0001072ab37c(auStack_878);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_da0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d70);
    func_0x0001072ab37c(auStack_840);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d28);
    func_0x0001072ab37c(&puStack_808);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_cf8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ce0);
    func_0x0001072ab37c(&uStack_7d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_cb0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_cc8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c98);
    func_0x0001072ab37c(&uStack_790);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c50);
    func_0x0001072ab37c(&uStack_750);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c20);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c08);
    func_0x0001072ab37c(&uStack_240);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_bd8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_bf0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_bc0);
    func_0x0001072ab37c(apppplStack_188);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ba8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b78);
    func_0x0001072ab37c(&uStack_2b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b30);
    func_0x0001072ab37c(&ppppplStack_200);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b00);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ae8);
    func_0x0001072ab37c(&ppplStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ab8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ad0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_aa0);
    func_0x0001072b0154();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a58);
    ___cxa_guard_release(0x1136ca1c8);
  } while( true );
}



/* Entry: 1072a4cdc; end: 1072a4d2b;  */

void FUN_1072a4cdc(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  FUN_1072a2410(param_1,lVar1 + 0x18,lVar1 + 0xd0,lVar1 + 0xf8,lVar1 + 0x108,lVar1 + 0x118,
                lVar1 + 0x128,lVar1 + 0x138,lVar1 + 0x148,lVar1 + 0x158,lVar1 + 0x168,lVar1 + 0x178)
  ;
  return;
}


