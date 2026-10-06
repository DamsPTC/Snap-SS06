/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0064e5c4; end: 0064e6b3;  */

void FUN_0064e5c4(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  puStack_50 = param_1 + 3;
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_0064e6dc();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_0064e6b4(&uStack_70,param_1[1],param_1[2]);
      uVar4 = param_1[1];
      uVar7 = *param_1;
      uVar8 = param_1[3];
      uVar6 = param_1[2];
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[3] = uStack_58;
      param_1[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x0064e73c(&uStack_70);
      puVar5 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = param_1[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      param_1[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = param_2;
  param_1[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 0064e6b4; end: 0064e6db;  */

void FUN_0064e6b4(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 0064e6dc; end: 0064e77b;  */

undefined1  [16] FUN_0064e6dc(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  FUN_0040cee8();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 0064e77c; end: 0064e7fb;  */

void FUN_0064e77c(undefined8 *param_1,long param_2)

{
  if ((param_2 != 0) && (0 < (param_1[1] - *(long *)*param_1) / 0x68 + param_2)) {
    return;
  }
  return;
}



/* Entry: 0064e7fc; end: 0064e88f;  */

long FUN_0064e7fc(long param_1,long param_2)

{
  func_0x0064e828();
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



/* Entry: 0064e890; end: 0064e8d7;  */

long FUN_0064e890(long *param_1,long param_2,long *param_3,long param_4)

{
  if (param_2 == param_4) {
    return 0;
  }
  return (param_2 - *param_1) / 0x68 + ((long)param_1 - (long)param_3 >> 3) * 0x27 +
         (param_4 - *param_3) / -0x68;
}



/* Entry: 0064e8d8; end: 0064e9bb;  */

void FUN_0064e8d8(long *param_1,long param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != param_3) {
    lVar2 = *param_4;
    lVar3 = param_3;
    while( true ) {
      lVar1 = (param_5 - lVar2) / 0x68;
      lVar2 = (lVar3 - param_2) / 0x68;
      if (lVar1 <= lVar2) {
        lVar2 = lVar1;
      }
      lVar1 = lVar3 + lVar2 * -0x68;
      for (lVar2 = lVar2 * -0x68; lVar2 != 0; lVar2 = lVar2 + 0x68) {
        lVar3 = lVar3 + -0x68;
        param_5 = param_5 + -0x68;
        FUN_0064e7fc(param_5,lVar3);
      }
      if (param_2 == lVar1) break;
      param_4 = param_4 + -1;
      lVar2 = *param_4;
      param_5 = lVar2 + 0xfd8;
      lVar3 = lVar1;
    }
    param_2 = param_3;
    if (param_5 == *param_4 + 0xfd8) {
      param_4 = param_4 + 1;
      param_5 = *param_4;
    }
  }
  *param_1 = param_2;
  param_1[1] = (long)param_4;
  param_1[2] = param_5;
  return;
}



/* Entry: 0064e9bc; end: 0064ea83;  */

void FUN_0064e9bc(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)*param_1;
  lVar2 = ((undefined8 *)*param_1)[1];
  if (param_2 != param_3) {
    lVar4 = *plVar3;
    while( true ) {
      lVar1 = ((lVar4 - lVar2) + 0xfd8) / 0x68;
      lVar4 = (param_3 - param_2) / 0x68;
      if (lVar1 <= lVar4) {
        lVar4 = lVar1;
      }
      lVar4 = lVar4 * 0x68;
      lVar1 = param_2 + lVar4;
      for (; lVar4 != 0; lVar4 = lVar4 + -0x68) {
        FUN_0064e7fc(lVar2,param_2);
        param_2 = param_2 + 0x68;
        lVar2 = lVar2 + 0x68;
      }
      if (param_3 == lVar1) break;
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar4 = lVar2;
      param_2 = lVar1;
    }
    if (lVar2 == *plVar3 + 0xfd8) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
    }
  }
  param_1 = (undefined8 *)*param_1;
  *param_1 = plVar3;
  param_1[1] = lVar2;
  return;
}



/* Entry: 0064ea84; end: 0064eb1f;  */

void FUN_0064ea84(void)

{
  return;
}



/* Entry: 0064eb20; end: 0064ec47;  */

undefined8 * FUN_0064eb20(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  dword *pdVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [8];
  dword *pdStack_40;
  undefined8 uStack_38;
  
  puVar2 = param_1;
  func_0x0064d3fc();
  *puVar2 = &PTR_FUN_00a0d090;
  puVar2[0xc] = 0;
  FUN_0064ed28(puVar2 + 0xd);
  *(undefined1 *)(param_1 + 0x15) = 0;
  uVar3 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  pdVar4 = &MACH_HEADER.ncmds;
  uStack_38 = uVar3;
  __Znwm();
  uStack_38 = 0;
  *(undefined8 *)pdVar4 = uVar3;
  *(undefined8 **)(pdVar4 + 2) = param_1;
  puVar5 = auStack_48;
  pdStack_40 = pdVar4;
  FUN_005b9690(puVar5,FUN_0064ef2c,pdVar4);
  if ((int)puVar5 == 0) {
    pdStack_40 = (dword *)0x0;
    FUN_0064f1a4(&pdStack_40);
    FUN_005b9838(&uStack_38);
    FUN_005b9410(puVar2 + 0xc,auStack_48);
    __ZNSt3__16threadD1Ev(auStack_48);
    return param_1;
  }
  __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x64ebe8);
  (*pcVar1)();
}



/* Entry: 0064ec48; end: 0064ecb3;  */

undefined8 FUN_0064ec48(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_00a0d090;
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 1);
  *(undefined1 *)(param_1 + 0x15) = 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 1);
  FUN_0064ecb4(param_1 + 0xd);
  __ZNSt3__16thread4joinEv(param_1 + 0xc);
  FUN_0064ef04(param_1 + 0xd);
  __ZNSt3__16threadD1Ev(param_1 + 0xc);
  func_0x0064d714();
  *param_1 = extraout_x8;
  FUN_0064d550(param_1 + 9);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 1);
  return unaff_x19;
}



/* Entry: 0064ecb4; end: 0064eceb;  */

void FUN_0064ecb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  __ZNSt3__15mutex4lockEv(uVar1);
  __ZNSt3__15mutex6unlockEv(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00779df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variable10notify_oneEv_00998b60)(param_1);
  return;
}



/* Entry: 0064ecec; end: 0064ecef;  */

undefined8 FUN_0064ecec(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_00a0d090;
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 1);
  *(undefined1 *)(param_1 + 0x15) = 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 1);
  FUN_0064ecb4(param_1 + 0xd);
  __ZNSt3__16thread4joinEv(param_1 + 0xc);
  FUN_0064ef04(param_1 + 0xd);
  __ZNSt3__16threadD1Ev(param_1 + 0xc);
  func_0x0064d714();
  *param_1 = extraout_x8;
  FUN_0064d550(param_1 + 9);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 1);
  return unaff_x19;
}



/* Entry: 0064ecf0; end: 0064ed03;  */

void FUN_0064ecf0(void)

{
  FUN_0064ec48();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064ed04; end: 0064ed27;  */

void FUN_0064ed04(long param_1)

{
  undefined8 uVar1;
  
  FUN_0064f550();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  __ZNSt3__15mutex4lockEv(uVar1);
  __ZNSt3__15mutex6unlockEv(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00779df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variable10notify_oneEv_00998b60)(param_1 + 0x68);
  return;
}



/* Entry: 0064ed28; end: 0064ed7b;  */

undefined8 * FUN_0064ed28(undefined8 *param_1)

{
  *param_1 = 0x3cb0b1bb;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  FUN_0064ed7c(param_1 + 6);
  return param_1;
}



/* Entry: 0064ed7c; end: 0064ed9b;  */

void FUN_0064ed7c(void)

{
  undefined1 uStack_11;
  
  FUN_0064ed9c(&uStack_11);
  return;
}



/* Entry: 0064ed9c; end: 0064ee3f;  */

undefined1 * FUN_0064ed9c(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar4 = 1;
  FUN_0064ee40(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_FUN_00a0d0d8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = 0x32aaaba7;
  puStack_30[5] = 0;
  puStack_30[4] = 0;
  puStack_30[7] = 0;
  puStack_30[6] = 0;
  puStack_30[9] = 0;
  puStack_30[8] = 0;
  puStack_30[10] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  FUN_0064eef4();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_0064ee68();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 0064ee40; end: 0064ee67;  */

long FUN_0064ee40(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0064ee68();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0064ee68; end: 0064ee97;  */

void FUN_0064ee68(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x58);
    return;
  }
  FUN_0040cee8();
  *param_1 = &PTR_FUN_00a0d0d8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0064ee98; end: 0064ee9b;  */

void FUN_0064ee98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0d0d8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0064ee9c; end: 0064eeaf;  */

void FUN_0064ee9c(void)

{
  func_0x0064eebc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064eeb0; end: 0064eecb;  */

void FUN_0064eeb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00779ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_00998be0)(param_1 + 0x18);
  return;
}



/* Entry: 0064eecc; end: 0064eef3;  */

long FUN_0064eecc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0064eef4; end: 0064ef03;  */

void FUN_0064eef4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0064ef04; end: 0064ef2b;  */

void FUN_0064ef04(long param_1)

{
  FUN_0064eecc(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00779e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variableD1Ev_00998b78)(param_1);
  return;
}



/* Entry: 0064ef2c; end: 0064f1a3;  */

undefined8 FUN_0064ef2c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 ***pppuVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puStack_98;
  ulong uStack_90;
  byte bStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 **ppuStack_70;
  long lStack_68;
  
  puStack_98 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  FUN_005b9830();
  lVar10 = param_1[1];
  pcVar9 = "unique_lock::lock: references null mutex";
  do {
    bStack_88 = 1;
    uStack_90 = lVar10 + 8U;
    __ZNSt3__115recursive_mutex4lockEv(lVar10 + 8U);
    if ((*(byte *)(lVar10 + 0xa8) & 1) != 0) {
      func_0x0064f1dc();
      FUN_0064f1a4(&puStack_98);
      return 0;
    }
    if (*(long *)(lVar10 + 0x48) == *(long *)(lVar10 + 0x50)) {
      lVar13 = 0x7fffffffffffffff;
    }
    else {
      lVar13 = *(long *)(*(long *)(lVar10 + 0x48) + 0x68);
    }
    ppuStack_80 = *(undefined8 ***)(lVar10 + 0x98);
    lStack_68 = *(long *)(lVar10 + 0xa0);
    if (lStack_68 != 0) {
      plVar1 = (long *)(lStack_68 + 8);
      do {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_78 = 1;
    ppuStack_70 = ppuStack_80;
    __ZNSt3__15mutex4lockEv();
    if ((bStack_88 & 1) == 0) {
      __ZNSt3__120__throw_system_errorEiPKc(1,"unique_lock::unlock: not locked");
      goto LAB_0064f150;
    }
    uVar5 = uStack_90;
    __ZNSt3__115recursive_mutex6unlockEv();
    bStack_88 = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    bVar11 = false;
    if ((long)uVar5 < lVar13) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar12 = lVar13 - uVar5;
      if (0 < (long)uVar12) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        __ZNSt3__16chrono12system_clock3nowEv();
        if (uVar5 == 0) {
          lVar8 = 0;
        }
        else if ((long)uVar5 < 1) {
          if (0xffdf3b645a1cac08 < uVar5) goto LAB_0064f06c;
          lVar8 = -0x8000000000000000;
        }
        else if (uVar5 < 0x20c49ba5e353f8) {
LAB_0064f06c:
          lVar8 = uVar5 * 1000;
        }
        else {
          lVar8 = 0x7fffffffffffffff;
        }
        lVar2 = 0x7fffffffffffffff;
        if (lVar8 <= (long)(uVar12 ^ 0x7fffffffffffffff)) {
          lVar2 = lVar8 + uVar12;
        }
        uVar5 = lVar10 + 0x68;
        __ZNSt3__118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE
                  (uVar5,&ppuStack_80,lVar2);
        __ZNSt3__16chrono12steady_clock3nowEv();
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      bVar11 = (long)uVar5 < lVar13;
    }
    FUN_00456f00(&ppuStack_80);
    if (uStack_90 == 0) {
      uVar7 = 1;
LAB_0064f148:
      __ZNSt3__120__throw_system_errorEiPKc(uVar7,pcVar9);
LAB_0064f150:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x64f154);
      (*pcVar4)();
    }
    if (bStack_88 == 1) {
      uVar7 = 0xb;
      pcVar9 = "unique_lock::lock: already locked";
      goto LAB_0064f148;
    }
    __ZNSt3__115recursive_mutex4lockEv();
    bStack_88 = 1;
    FUN_0040d514(&ppuStack_80);
    pppuVar6 = &ppuStack_70;
    FUN_0064eecc();
    if (!bVar11) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      ppuStack_70 = pppuVar6;
      FUN_0064f650(lVar10,&ppuStack_70);
    }
    func_0x0064f1dc();
  } while( true );
}



/* Entry: 0064f1a4; end: 0064f1d3;  */

long * FUN_0064f1a4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_005b9838();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0064f1d4; end: 0064f1fb;  */

void FUN_0064f1d4(void)

{
  return;
}



/* Entry: 0064f1fc; end: 0064f287;  */

void FUN_0064f1fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam0000000000b6c710 & 1) == 0) {
    iVar3 = 0xb6c710;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_0064f314(0xb6c700);
      ___cxa_guard_release(0xb6c710);
    }
  }
  lVar2 = lRam0000000000b6c708;
  uVar1 = uRam0000000000b6c700;
  param_1[1] = lRam0000000000b6c708;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x006500c4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 0064f288; end: 0064f313;  */

void FUN_0064f288(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam0000000000b6c730 & 1) == 0) {
    iVar3 = 0xb6c730;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0064f330(0xb6c720);
      ___cxa_guard_release(0xb6c730);
    }
  }
  lVar2 = lRam0000000000b6c728;
  uVar1 = uRam0000000000b6c720;
  param_1[1] = lRam0000000000b6c728;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x006500c4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 0064f314; end: 0064f34b;  */

void FUN_0064f314(void)

{
  undefined1 uStack_11;
  
  FUN_0064fe44(&uStack_11);
  return;
}



/* Entry: 0064f34c; end: 0064f54f;  */

void FUN_0064f34c(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_80;
  
  lVar10 = param_1;
  func_0x006500ac();
  __ZNSt3__115recursive_mutex4lockEv(lVar10 + 8);
  uVar8 = *(ulong *)(param_1 + 0x50);
  uVar6 = *(ulong *)(param_1 + 0x48);
  for (uVar11 = uVar6; uVar11 != uVar8; uVar11 = uVar11 + 0x80) {
    uVar12 = uVar11;
    if (*(long *)(uVar11 + 0x60) == param_2) goto LAB_0064f3b4;
  }
LAB_0064f410:
  lVar10 = (long)(uVar8 - uVar6) >> 7;
  uVar5 = lVar10 - 2U == 0;
  if (1 < lVar10) {
    uVar11 = lVar10 - 2U >> 1;
    uVar12 = uVar11;
    do {
      uVar5 = uVar11 == uVar12;
      if ((long)uVar12 <= (long)uVar11) {
        uVar9 = (uVar12 & 0x3fffffffffffffff) << 1 | 1;
        uVar13 = uVar6 + uVar9 * 0x80;
        uVar8 = uVar12 * 2 + 2;
        uVar14 = uVar9;
        if ((long)uVar8 < lVar10) {
          plVar1 = (long *)(uVar13 + 0x68);
          lVar7 = *(long *)(uVar9 * 0x80 + uVar6 + 0x80 + 0x68);
          lVar3 = 0x80;
          if (*plVar1 <= lVar7) {
            lVar3 = 0;
          }
          uVar13 = uVar13 + lVar3;
          uVar14 = uVar8;
          if (*plVar1 <= lVar7) {
            uVar14 = uVar9;
          }
        }
        uVar8 = uVar6 + uVar12 * 0x80;
        uVar5 = *(long *)(uVar13 + 0x68) == *(long *)(uVar8 + 0x68);
        if (*(long *)(uVar13 + 0x68) <= *(long *)(uVar8 + 0x68)) {
          func_0x00650170();
          uVar9 = uVar8;
          do {
            uVar8 = uVar13;
            FUN_0064f70c(uVar9,uVar8);
            uVar5 = uVar11 == uVar14;
            if ((long)uVar11 < (long)uVar14) break;
            uVar2 = uVar14 << 1 | 1;
            uVar13 = uVar6 + uVar2 * 0x80;
            uVar9 = uVar14 * 2 + 2;
            uVar14 = uVar2;
            if ((long)uVar9 < lVar10) {
              plVar1 = (long *)(uVar13 + 0x68);
              lVar7 = *(long *)(uVar2 * 0x80 + uVar6 + 0x80 + 0x68);
              lVar3 = 0x80;
              if (*plVar1 <= lVar7) {
                lVar3 = 0;
              }
              uVar13 = uVar13 + lVar3;
              uVar14 = uVar9;
              if (*plVar1 <= lVar7) {
                uVar14 = uVar2;
              }
            }
            uVar5 = *(long *)(uVar13 + 0x68) == lStack_80;
            uVar9 = uVar8;
          } while (*(long *)(uVar13 + 0x68) <= lStack_80);
          func_0x00650184();
          func_0x006500dc();
        }
      }
      uVar12 = uVar12 - 1;
    } while (-1 < (long)uVar12);
  }
  func_0x00650098(extraout_x8);
  if ((bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00779d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_00998b28)(param_1 + 8);
    return;
  }
  ___stack_chk_fail();
  FUN_0064f70c(uVar11,uVar8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x64f550);
  (*pcVar4)();
LAB_0064f3b4:
  while (uVar6 = uVar12 + 0x80, uVar6 != uVar8) {
    plVar1 = (long *)(uVar12 + 0xe0);
    uVar12 = uVar6;
    if (*plVar1 != param_2) {
      FUN_0064f70c(uVar11,uVar6);
      uVar11 = uVar11 + 0x80;
    }
  }
  uVar8 = *(ulong *)(param_1 + 0x50);
  if (uVar11 == uVar8) {
    uVar6 = *(ulong *)(param_1 + 0x48);
  }
  else {
    FUN_0064d5cc((ulong *)(param_1 + 0x48),uVar11);
    uVar6 = *(ulong *)(param_1 + 0x48);
    uVar8 = *(ulong *)(param_1 + 0x50);
  }
  goto LAB_0064f410;
}



/* Entry: 0064f550; end: 0064f613;  */

void FUN_0064f550(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_4;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 8);
  FUN_0064f614(param_2 + 0x48,param_3,&uStack_38,param_5);
  lVar3 = *(long *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(lVar3 + -0x10);
  lVar2 = *(long *)(lVar3 + -8);
  uStack_48 = uVar1;
  lStack_40 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x006500c4();
    } while (extraout_w10 != 0);
    lVar3 = *(long *)(param_2 + 0x50);
  }
  FUN_0064fbb0(*(undefined8 *)(param_2 + 0x48),lVar3);
  if (lVar2 != 0) {
    do {
      func_0x006500c4();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = uVar1;
  param_1[1] = lVar2;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x004631ec(&uStack_58);
  func_0x0064d63c(&uStack_48);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 8);
  return;
}



/* Entry: 0064f614; end: 0064f64f;  */

long FUN_0064f614(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_0064f784();
    lVar2 = uVar1 + 0x80;
  }
  else {
    lVar2 = param_1;
    FUN_0064f7b8();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x80;
}



/* Entry: 0064f650; end: 0064f6f7;  */

void FUN_0064f650(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auStack_b8 [128];
  undefined8 uStack_38;
  
  func_0x00650134();
  func_0x006500ac();
  uStack_38 = extraout_x8;
  while( true ) {
    lVar2 = *(long *)(unaff_x20 + 0x48);
    bVar1 = true;
    if ((lVar2 == *(long *)(unaff_x20 + 0x50)) ||
       (bVar1 = *(long *)(lVar2 + 0x68) == *unaff_x19,
       !bVar1 && *unaff_x19 <= *(long *)(lVar2 + 0x68))) break;
    if ((**(byte **)(lVar2 + 0x70) & 1) == 0) {
      (**(code **)(**(long **)(*(long *)(unaff_x20 + 0x48) + 0x60) + 0x10))();
    }
    FUN_0064fc90(*(undefined8 *)(unaff_x20 + 0x48),*(long *)(unaff_x20 + 0x50));
    FUN_0064fdfc(auStack_b8,*(long *)(unaff_x20 + 0x50) + -0x80);
    param_1 = unaff_x20 + 0x48;
    FUN_0064f6f8();
    func_0x006500dc();
  }
  func_0x00650098(uStack_38);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar3 = *(long *)(param_1 + 8) + -0x80;
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != lVar3) {
    lVar2 = lVar2 + -0x80;
    func_0x0064d608();
  }
  *(long *)(param_1 + 8) = lVar3;
  return;
}



/* Entry: 0064f6f8; end: 0064f70b;  */

void FUN_0064f6f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8) + -0x80;
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x80;
    func_0x0064d608();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 0064f70c; end: 0064f783;  */

void FUN_0064f70c(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00650134();
  func_0x0064e828();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  func_0x0064f740(unaff_x20 + 0x70,unaff_x19 + 0x70);
  return;
}



/* Entry: 0064f784; end: 0064f7b7;  */

void FUN_0064f784(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_0064f86c(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x80;
  return;
}



/* Entry: 0064f7b8; end: 0064f86b;  */

long FUN_0064f7b8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_0064f920(param_1,(param_1[1] - *param_1 >> 7) + 1);
  FUN_0064f9f0(auStack_58,plVar1,param_1[1] - *param_1 >> 7,param_1 + 2);
  FUN_0064f86c(lStack_48,param_2,param_3,param_4);
  lStack_48 = lStack_48 + 0x80;
  FUN_0064f960(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x0064fb48(auStack_58);
  return lVar2;
}



/* Entry: 0064f86c; end: 0064f873;  */

undefined8 *
FUN_0064f86c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  segment_command *psVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_3;
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 1);
  uVar3 = *param_4;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  psVar1 = &segment_command_00000020;
  __Znwm();
  psVar1->segname[0] = '\0';
  psVar1->segname[1] = '\0';
  psVar1->segname[2] = '\0';
  psVar1->segname[3] = '\0';
  psVar1->segname[4] = '\0';
  psVar1->segname[5] = '\0';
  psVar1->segname[6] = '\0';
  psVar1->segname[7] = '\0';
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  *(undefined ***)psVar1 = &PTR_FUN_00a0d140;
  *(undefined1 *)&psVar1->vmaddr = 0;
  param_1[0xe] = &psVar1->vmaddr;
  param_1[0xf] = psVar1;
  return param_1;
}



/* Entry: 0064f874; end: 0064f8f3;  */

undefined8 *
FUN_0064f874(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  segment_command *psVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 1);
  uVar2 = *param_4;
  param_1[0xc] = param_3;
  param_1[0xd] = uVar2;
  psVar1 = &segment_command_00000020;
  __Znwm();
  psVar1->segname[0] = '\0';
  psVar1->segname[1] = '\0';
  psVar1->segname[2] = '\0';
  psVar1->segname[3] = '\0';
  psVar1->segname[4] = '\0';
  psVar1->segname[5] = '\0';
  psVar1->segname[6] = '\0';
  psVar1->segname[7] = '\0';
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  *(undefined ***)psVar1 = &PTR_FUN_00a0d140;
  *(undefined1 *)&psVar1->vmaddr = 0;
  param_1[0xe] = &psVar1->vmaddr;
  param_1[0xf] = psVar1;
  return param_1;
}



/* Entry: 0064f8f4; end: 0064f8f7;  */

void FUN_0064f8f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0d140;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0064f8f8; end: 0064f90b;  */

void FUN_0064f8f8(void)

{
  func_0x0064f914();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064f90c; end: 0064f91f;  */

void FUN_0064f90c(void)

{
  return;
}



/* Entry: 0064f920; end: 0064f95f;  */

long * FUN_0064f920(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  if ((ulong)param_2 >> 0x39 == 0) {
    plVar3 = (long *)(param_1[2] - *param_1 >> 6);
    if (plVar3 <= param_2) {
      plVar3 = param_2;
    }
    if (0x7fffffffffffff7f < (ulong)(param_1[2] - *param_1)) {
      plVar3 = (long *)0x1ffffffffffffff;
    }
    return plVar3;
  }
  FUN_0064f9dc();
  func_0x00650134();
  plVar3 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_0064fa78(plVar3,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 0064f960; end: 0064f9db;  */

void FUN_0064f960(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00650134();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_0064fa78(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 0064f9dc; end: 0064f9ef;  */

long * FUN_0064f9dc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_00910257;
  FUN_0040d774();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0064fa38();
  }
  lVar1 = param_4 + param_3 * 0x80;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x80;
  return plVar2;
}



/* Entry: 0064f9f0; end: 0064fa5b;  */

long * FUN_0064f9f0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0064fa38();
  }
  lVar1 = param_4 + param_3 * 0x80;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x80;
  return param_1;
}



/* Entry: 0064fa5c; end: 0064fa77;  */

void FUN_0064fa5c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 >> 0x39 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 << 7);
    return;
  }
  FUN_0040cee8();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x80) {
    FUN_0064fdfc(param_4,uVar1);
    param_4 = lStack_48 + 0x80;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    func_0x0064d608(param_2);
  }
  FUN_0064fb04(&uStack_70);
  return;
}



/* Entry: 0064fa78; end: 0064fb03;  */

void FUN_0064fa78(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x80) {
    FUN_0064fdfc(param_4,lVar1);
    param_4 = lStack_38 + 0x80;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    func_0x0064d608(param_2);
  }
  FUN_0064fb04(&uStack_60);
  return;
}



/* Entry: 0064fb04; end: 0064fb73;  */

long FUN_0064fb04(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x80;
      func_0x0064d608();
    }
  }
  return param_1;
}



/* Entry: 0064fb74; end: 0064fb7b;  */

void FUN_0064fb74(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00650134(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x80;
    func_0x0064d608();
  }
  return;
}



/* Entry: 0064fb7c; end: 0064fbaf;  */

void FUN_0064fb7c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00650134();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x80;
    func_0x0064d608();
  }
  return;
}



/* Entry: 0064fbb0; end: 0064fbcb;  */

void FUN_0064fbb0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_0064fbcc(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 0064fbcc; end: 0064fbd7;  */

void FUN_0064fbcc(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 extraout_x8;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_c8 [104];
  long lStack_60;
  undefined8 uStack_48;
  
  lVar3 = param_2 - param_1 >> 7;
  func_0x006500ac();
  uVar2 = lVar3 - 2U == 0;
  uStack_48 = extraout_x8;
  if (1 < lVar3) {
    uVar6 = lVar3 - 2U >> 1;
    lVar3 = param_1 + uVar6 * 0x80;
    lVar4 = *(long *)(lVar3 + 0x68);
    uVar2 = lVar4 == *(long *)(param_2 + -0x18);
    if (*(long *)(param_2 + -0x18) < lVar4) {
      FUN_0064fdfc(auStack_c8,param_2 + -0x80);
      lVar4 = param_2 + -0x80;
      do {
        FUN_0064f70c(lVar4,lVar3);
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1 >> 1;
        lVar1 = param_1 + uVar6 * 0x80;
        lVar5 = *(long *)(lVar1 + 0x68);
        uVar2 = lVar5 == lStack_60;
        lVar4 = lVar3;
        lVar3 = lVar1;
      } while (!(bool)uVar2 && lStack_60 <= lVar5);
      func_0x00650184();
      func_0x006500dc();
    }
  }
  func_0x00650098(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_0064fcb4();
  return;
}



/* Entry: 0064fbd8; end: 0064fc8f;  */

void FUN_0064fbd8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_c8 [104];
  long lStack_60;
  undefined8 uStack_48;
  
  func_0x006500ac();
  uVar2 = param_4 - 2U == 0;
  uStack_48 = extraout_x8;
  if (1 < param_4) {
    uVar5 = param_4 - 2U >> 1;
    lVar6 = param_1 + uVar5 * 0x80;
    lVar3 = *(long *)(lVar6 + 0x68);
    uVar2 = lVar3 == *(long *)(param_2 + -0x18);
    if (*(long *)(param_2 + -0x18) < lVar3) {
      FUN_0064fdfc(auStack_c8,param_2 + -0x80);
      lVar3 = param_2 + -0x80;
      do {
        FUN_0064f70c(lVar3,lVar6);
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1 >> 1;
        lVar1 = param_1 + uVar5 * 0x80;
        lVar4 = *(long *)(lVar1 + 0x68);
        uVar2 = lVar4 == lStack_60;
        lVar3 = lVar6;
        lVar6 = lVar1;
      } while (!(bool)uVar2 && lStack_60 <= lVar4);
      func_0x00650184();
      func_0x006500dc();
    }
  }
  func_0x00650098(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_0064fcb4();
  return;
}



/* Entry: 0064fc90; end: 0064fcb3;  */

void FUN_0064fc90(long param_1,long param_2)

{
  undefined1 uStack_11;
  
  FUN_0064fcb4(param_1,param_2,&uStack_11,param_2 - param_1 >> 7);
  return;
}



/* Entry: 0064fcb4; end: 0064fd77;  */

long FUN_0064fcb4(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  undefined1 auStack_b8 [128];
  undefined8 uStack_38;
  
  func_0x006500ac();
  uVar3 = param_4 == 2;
  uStack_38 = extraout_x8;
  if (1 < param_4) {
    func_0x00650170();
    lVar4 = param_1;
    FUN_0064fd78(param_1,param_3);
    param_2 = param_2 + -0x80;
    uVar3 = param_2 == lVar4;
    if ((bool)uVar3) {
      FUN_0064f70c(lVar4,auStack_b8);
      param_1 = lVar4;
      param_3 = param_4;
    }
    else {
      FUN_0064f70c(lVar4,param_2);
      FUN_0064f70c(param_2,auStack_b8);
      FUN_0064fbd8(param_1,lVar4 + 0x80,param_3,(lVar4 + 0x80) - param_1 >> 7);
    }
    func_0x006500dc();
  }
  func_0x00650098(uStack_38);
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x006500dc();
  func_0x006500d4();
  uVar5 = 0;
  do {
    lVar4 = param_1 + uVar5 * 0x80;
    uVar2 = uVar5 << 1 | 1;
    uVar1 = uVar5 * 2 + 2;
    param_1 = lVar4 + 0x80;
    uVar5 = uVar2;
    if (((long)uVar1 < param_3) &&
       (param_1 = lVar4 + 0x100, uVar5 = uVar1, *(long *)(lVar4 + 0xe8) <= *(long *)(lVar4 + 0x168))
       ) {
      param_1 = lVar4 + 0x80;
      uVar5 = uVar2;
    }
    FUN_0064f70c();
  } while ((long)uVar5 <= (param_3 + -2) / 2);
  return param_1;
}



/* Entry: 0064fd78; end: 0064fdfb;  */

long FUN_0064fd78(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = 0;
  do {
    lVar2 = param_1 + uVar5 * 0x80;
    uVar3 = uVar5 << 1 | 1;
    uVar1 = uVar5 * 2 + 2;
    lVar4 = lVar2 + 0x80;
    uVar5 = uVar3;
    if (((long)uVar1 < param_3) &&
       (lVar4 = lVar2 + 0x100, uVar5 = uVar1, *(long *)(lVar2 + 0xe8) <= *(long *)(lVar2 + 0x168)))
    {
      lVar4 = lVar2 + 0x80;
      uVar5 = uVar3;
    }
    FUN_0064f70c(param_1,lVar4);
    param_1 = lVar4;
  } while ((long)uVar5 <= (param_3 + -2) / 2);
  return lVar4;
}



/* Entry: 0064fdfc; end: 0064fe43;  */

void FUN_0064fdfc(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00650134();
  *param_1 = *param_2;
  (**(code **)(*(long *)(unaff_x19 + 8) + 0x10))(param_1 + 1,(long *)(unaff_x19 + 8));
  uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  return;
}



/* Entry: 0064fe44; end: 0064feab;  */

undefined1 * FUN_0064fe44(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x006500ac();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_0064feac(auStack_40);
  FUN_0064ff04();
  func_0x0065011c();
  func_0x0064ff68();
  func_0x00650098(uStack_28);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x0064ff68();
  func_0x006500d4();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_0064fed4();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 0064feac; end: 0064fed3;  */

long FUN_0064feac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0064fed4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0064fed4; end: 0064ff03;  */

undefined8 * FUN_0064fed4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x147ae147ae147af) {
    puVar1 = (undefined8 *)(param_2 * 200);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00a0d190;
  FUN_0064eb20(param_1 + 3);
  return param_1;
}



/* Entry: 0064ff04; end: 0064ff3b;  */

undefined8 * FUN_0064ff04(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00a0d190;
  FUN_0064eb20(param_1 + 3);
  return param_1;
}



/* Entry: 0064ff3c; end: 0064ff3f;  */

void FUN_0064ff3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0d190;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0064ff40; end: 0064ff53;  */

void FUN_0064ff40(void)

{
  func_0x0064ff5c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064ff54; end: 0064ff77;  */

void FUN_0064ff54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0065016c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0064ff78; end: 0064ffdf;  */

undefined1 * FUN_0064ff78(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x006500ac();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_0064ffe0(auStack_40);
  FUN_00650024();
  func_0x0065011c();
  func_0x00650088();
  func_0x00650098(uStack_28);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x00650088();
  func_0x006500d4();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_00650008();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 0064ffe0; end: 00650007;  */

long FUN_0064ffe0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_00650008();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 00650008; end: 00650023;  */

undefined8 * FUN_00650008(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x39 == 0) {
    puVar1 = (undefined8 *)(param_2 << 7);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00a0d1e0;
  func_0x0064d3a8(param_1 + 3);
  return param_1;
}



/* Entry: 00650024; end: 0065005b;  */

undefined8 * FUN_00650024(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00a0d1e0;
  func_0x0064d3a8(param_1 + 3);
  return param_1;
}



/* Entry: 0065005c; end: 0065005f;  */

void FUN_0065005c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0d1e0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00650060; end: 00650073;  */

void FUN_00650060(void)

{
  func_0x0065007c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00650074; end: 0065018f;  */

void FUN_00650074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0065016c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00650190; end: 0065029b;  */

undefined8 *
FUN_00650190(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  lVar7 = param_2[1];
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar7 = param_3[1];
  uVar9 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar8 = param_4[1];
  if (0x7ffffffffffffff6 < uVar8) {
    FUN_0040d740();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x650280);
    (*pcVar5)();
  }
  uVar9 = *param_4;
  if (uVar8 < 0x17) {
    puVar6 = param_1 + 4;
    *(char *)((long)param_1 + 0x37) = (char)uVar8;
    if (uVar8 == 0) goto LAB_0065025c;
  }
  else {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)(uVar8 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)(uVar8 | 7);
    }
    puVar6 = (undefined8 *)((long)pdVar4 + 1U);
    __Znwm();
    param_1[5] = uVar8;
    param_1[6] = (long)pdVar4 + 1U | 0x8000000000000000;
    param_1[4] = puVar6;
  }
  _memmove(puVar6,uVar9,uVar8);
LAB_0065025c:
  *(undefined1 *)((long)puVar6 + uVar8) = 0;
  return param_1;
}



/* Entry: 0065029c; end: 00650363;  */

long FUN_0065029c(long param_1)

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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 00650364; end: 0065039b;  */

undefined4 * FUN_00650364(undefined4 *param_1)

{
  _semaphore_destroy(*(undefined4 *)PTR__mach_task_self__0099a3c0,*param_1);
  return param_1;
}



/* Entry: 0065039c; end: 0065039f;  */

void FUN_0065039c(void)

{
  return;
}



/* Entry: 006503a0; end: 00650803;  */

void FUN_006503a0(long param_1,long param_2,long *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined1 auStack_98 [8];
  long lStack_90;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)(param_1 + 0x40);
  do {
    bVar4 = *pbVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while ((cVar5 != '\0') || ((bVar4 & 1) != 0));
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    plVar8 = (long *)param_3[3];
    lStack_90 = param_2;
    if (plVar8 == (long *)0x0) {
      plStack_70 = (long *)0x0;
    }
    else if (plVar8 == param_3) {
      plStack_70 = alStack_88;
      (**(code **)(*plVar8 + 0x18))(plVar8,alStack_88);
    }
    else {
      param_3[3] = 0;
      plStack_70 = plVar8;
    }
    plVar8 = *(long **)(param_1 + 0x28);
    if (plVar8 < *(long **)(param_1 + 0x30)) {
      *plVar8 = lStack_90;
      if (plStack_70 == (long *)0x0) {
        plVar8[4] = 0;
        plVar8 = plVar8 + 5;
      }
      else {
        if (plStack_70 == alStack_88) {
          plVar8[4] = (long)(plVar8 + 1);
          (**(code **)(*plStack_70 + 0x18))();
        }
        else {
          plVar8[4] = (long)plStack_70;
          plStack_70 = (long *)0x0;
        }
        plVar8 = plVar8 + 5;
      }
    }
    else {
      plVar13 = *(long **)(param_1 + 0x20);
      plVar16 = (long *)((long)plVar8 - (long)plVar13);
      uVar10 = ((long)plVar16 >> 3) * -0x3333333333333333 + 1;
      if (0x666666666666666 < uVar10) {
        func_0x00650f10();
        goto LAB_00650760;
      }
      lVar9 = (long)*(long **)(param_1 + 0x30) - (long)plVar13 >> 3;
      uVar12 = lVar9 * -0x6666666666666666;
      if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
        uVar12 = uVar10;
      }
      if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
        uVar12 = 0x666666666666666;
      }
      if (uVar12 == 0) {
        lVar9 = 0;
        *plVar16 = lStack_90;
        plVar15 = plVar16;
        if (plStack_70 != (long *)0x0) goto LAB_0065052c;
LAB_00650574:
        plVar15[4] = 0;
        lVar17 = (long)plVar15 - (long)plVar16;
joined_r0x00650580:
        if (plVar13 != plVar8) {
LAB_006505c8:
          lVar14 = 0;
          do {
            puVar2 = (undefined8 *)(lVar17 + lVar14);
            puVar3 = (undefined8 *)((long)plVar13 + lVar14);
            *puVar2 = *puVar3;
            puVar11 = (undefined8 *)puVar3[4];
            if (puVar11 == (undefined8 *)0x0) {
              puVar2[4] = 0;
            }
            else if (puVar3 + 1 == puVar11) {
              puVar2[4] = puVar2 + 1;
              (**(code **)(*(long *)puVar3[4] + 0x18))();
            }
            else {
              puVar2[4] = puVar11;
              puVar3[4] = 0;
            }
            lVar14 = lVar14 + 0x28;
          } while ((long *)((long)plVar13 + lVar14) != plVar8);
          do {
            plVar16 = (long *)plVar13[4];
            if (plVar13 + 1 == plVar16) {
              lVar14 = 0x20;
LAB_00650640:
              (**(code **)(*plVar16 + lVar14))();
            }
            else if (plVar16 != (long *)0x0) {
              lVar14 = 0x28;
              goto LAB_00650640;
            }
            plVar13 = plVar13 + 5;
          } while (plVar13 != plVar8);
          plVar13 = *(long **)(param_1 + 0x20);
        }
      }
      else {
        if (0x666666666666666 < uVar12) {
          FUN_0040cee8();
          goto LAB_00650760;
        }
        lVar9 = uVar12 * 0x28;
        __Znwm();
        plVar15 = (long *)(lVar9 + (long)plVar16);
        *plVar15 = lStack_90;
        if (plStack_70 == (long *)0x0) goto LAB_00650574;
LAB_0065052c:
        if (plStack_70 != alStack_88) {
          plVar15[4] = (long)plStack_70;
          plStack_70 = (long *)0x0;
          lVar17 = (long)plVar15 - (long)plVar16;
          goto joined_r0x00650580;
        }
        plVar15[4] = (long)(plVar15 + 1);
        (**(code **)(*plStack_70 + 0x18))();
        plVar13 = *(long **)(param_1 + 0x20);
        plVar8 = *(long **)(param_1 + 0x28);
        lVar17 = (long)plVar15 - ((long)plVar8 - (long)plVar13);
        if (plVar13 != plVar8) goto LAB_006505c8;
      }
      plVar8 = plVar15 + 5;
      *(long *)(param_1 + 0x20) = lVar17;
      *(long **)(param_1 + 0x28) = plVar8;
      *(ulong *)(param_1 + 0x30) = lVar9 + uVar12 * 0x28;
      if (plVar13 != (long *)0x0) {
        __ZdlPv(plVar13);
      }
    }
    *(long **)(param_1 + 0x28) = plVar8;
    FUN_00650f24(*(long *)(param_1 + 0x20),plVar8,
                 ((long)plVar8 - *(long *)(param_1 + 0x20) >> 3) * -0x3333333333333333);
    if (plStack_70 == alStack_88) {
      lVar9 = 0x20;
LAB_006506dc:
      (**(code **)(*plStack_70 + lVar9))();
    }
    else if (plStack_70 != (long *)0x0) {
      lVar9 = 0x28;
      goto LAB_006506dc;
    }
    if (*(long *)(param_1 + 0x58) <= param_2) goto LAB_0065070c;
    *(long *)(param_1 + 0x58) = param_2;
    *(undefined1 *)(param_1 + 0x40) = 0;
    _semaphore_signal(*(undefined4 *)(param_1 + 0x50));
LAB_00650710:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    FUN_00650804(auStack_98);
    plVar8 = (long *)param_3[3];
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8,auStack_98);
      __ZNSt13exception_ptrD1Ev(auStack_98);
LAB_0065070c:
      *pbVar1 = 0;
      goto LAB_00650710;
    }
  }
  func_0x004686dc();
LAB_00650760:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x650764);
  (*pcVar7)();
}



/* Entry: 00650804; end: 006508c7;  */

void FUN_00650804(undefined8 param_1)

{
  int iVar1;
  undefined **appuStack_30 [2];
  
  if ((bRam0000000000b63c60 & 1) == 0) {
    iVar1 = 0xb63c60;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      __ZNSt13runtime_errorC2EPKc(appuStack_30,&UNK_00910273);
      appuStack_30[0] = &PTR_FUN_00a0d300;
      FUN_00777254(appuStack_30);
      __ZNSt13runtime_errorD2Ev(appuStack_30);
      ___cxa_atexit(PTR___ZNSt13exception_ptrD1Ev_009988f8,0xb63c58,0);
      ___cxa_guard_release(0xb63c60);
    }
  }
  __ZNSt13exception_ptrC1ERKS_(param_1,0xb63c58);
  return;
}



/* Entry: 006508c8; end: 006509bf;  */

long * FUN_006508c8(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_FUN_00a0d290;
  if ((*(byte *)(param_1 + 0xd) & 1) == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  __ZNSt3__16threadD1Ev(param_1 + 0xc);
  _semaphore_destroy(*(undefined4 *)PTR__mach_task_self__0099a3c0,(int)param_1[10]);
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar4 = param_1[5];
    lVar2 = lVar3;
    if (lVar3 != lVar4) {
      do {
        plVar1 = *(long **)(lVar4 + -8);
        if ((long *)(lVar4 + -0x20) == plVar1) {
          lVar2 = 0x20;
LAB_00650940:
          (**(code **)(*plVar1 + lVar2))();
        }
        else if (plVar1 != (long *)0x0) {
          lVar2 = 0x28;
          goto LAB_00650940;
        }
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != lVar3);
      lVar2 = param_1[4];
    }
    param_1[5] = lVar3;
    __ZdlPv(lVar2);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
    return param_1;
  }
  return param_1;
}



/* Entry: 006509c0; end: 00650a47;  */

long * FUN_006509c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar4 = param_1[1];
    lVar2 = lVar3;
    if (lVar3 != lVar4) {
      do {
        plVar1 = *(long **)(lVar4 + -8);
        if ((long *)(lVar4 + -0x20) == plVar1) {
          lVar2 = 0x20;
LAB_006509f4:
          (**(code **)(*plVar1 + lVar2))();
        }
        else if (plVar1 != (long *)0x0) {
          lVar2 = 0x28;
          goto LAB_006509f4;
        }
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
  }
  return param_1;
}



/* Entry: 00650a48; end: 00650a4b;  */

long * FUN_00650a48(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_FUN_00a0d290;
  if ((*(byte *)(param_1 + 0xd) & 1) == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  __ZNSt3__16threadD1Ev(param_1 + 0xc);
  _semaphore_destroy(*(undefined4 *)PTR__mach_task_self__0099a3c0,(int)param_1[10]);
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar4 = param_1[5];
    lVar2 = lVar3;
    if (lVar3 != lVar4) {
      do {
        plVar1 = *(long **)(lVar4 + -8);
        if ((long *)(lVar4 + -0x20) == plVar1) {
          lVar2 = 0x20;
LAB_00650940:
          (**(code **)(*plVar1 + lVar2))();
        }
        else if (plVar1 != (long *)0x0) {
          lVar2 = 0x28;
          goto LAB_00650940;
        }
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != lVar3);
      lVar2 = param_1[4];
    }
    param_1[5] = lVar3;
    __ZdlPv(lVar2);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
    return param_1;
  }
  return param_1;
}



/* Entry: 00650a4c; end: 00650a5f;  */

void FUN_00650a4c(void)

{
  FUN_006508c8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00650a60; end: 00650a8f;  */

long FUN_00650a60(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(*(long *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 00650a90; end: 00650cbb;  */

long * FUN_00650a90(long *param_1,undefined8 param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  qword *unaff_x21;
  dword *unaff_x22;
  long *unaff_x24;
  long *plVar13;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  long alStack_f8 [3];
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  dword *pdStack_c0;
  qword *pqStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  char cStack_79;
  undefined8 uStack_70;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  iVar10 = (int)&uStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  do {
    bVar2 = bRam0000000000b6c750;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0xb6c750,0x10);
    if (bVar5) {
      bRam0000000000b6c750 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  *param_1 = 0;
  param_1[1] = 0;
  if (plRam0000000000b6c748 == (long *)0x0) {
    plVar8 = (long *)0x0;
LAB_00650b10:
    cStack_79 = '\x14';
    uStack_80 = 0x78696e65;
    uStack_88 = 0x6f68702d64657261;
    uStack_90 = 0x68732d72656d6974;
    uStack_7c = 0;
    uStack_70 = 0;
    plStack_50 = (long *)0x0;
    unaff_x21 = &section_00000068.addr;
    __Znwm();
    unaff_x24 = alStack_68;
    unaff_x21[1] = 0;
    unaff_x21[2] = 0;
    *unaff_x21 = (qword)&PTR_FUN_00a0d328;
    unaff_x22 = (dword *)(unaff_x21 + 3);
    FUN_00651188(unaff_x22,&uStack_90,&uStack_70);
    if (plStack_50 == unaff_x24) {
      lVar11 = 0x20;
LAB_00650b94:
      (**(code **)(*plStack_50 + lVar11))();
    }
    else if (plStack_50 != (long *)0x0) {
      lVar11 = 0x28;
      goto LAB_00650b94;
    }
    *param_1 = (long)unaff_x22;
    param_1[1] = (long)unaff_x21;
    param_3 = iVar10;
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar8 + 1;
      do {
        lVar11 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        param_3 = iVar10;
      }
    }
    if (cStack_79 < '\0') {
      __ZdlPv(uStack_90);
    }
    plVar13 = (long *)param_1[1];
    lRam0000000000b6c740 = *param_1;
    if (param_1[1] != 0) {
      plVar7 = (long *)(param_1[1] + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar7 = plRam0000000000b6c748;
    if (plRam0000000000b6c748 != (long *)0x0) {
      plRam0000000000b6c748 = plVar13;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar13 = plRam0000000000b6c748;
    }
  }
  else {
    plVar8 = plRam0000000000b6c748;
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = (long)plVar8;
    lVar11 = lRam0000000000b6c740;
    if ((plVar8 == (long *)0x0) ||
       (*param_1 = lRam0000000000b6c740, plVar7 = plVar8, plVar13 = plRam0000000000b6c748,
       lVar11 == 0)) goto LAB_00650b10;
  }
  plRam0000000000b6c748 = plVar13;
  bRam0000000000b6c750 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
  if (param_3 == 0) {
    __Unwind_Resume(plVar7);
  }
  else {
    __ZNSt3__119__shared_weak_countD2Ev(unaff_x21);
    __ZdlPv();
    if (plStack_50 == unaff_x24) {
      lVar11 = 0x20;
    }
    else {
      if (plStack_50 == (long *)0x0) goto LAB_00650cb4;
      lVar11 = 0x28;
    }
    (**(code **)(*plStack_50 + lVar11))();
  }
LAB_00650cb4:
  plVar13 = plVar7;
  func_0x0040cf10();
  uStack_c8 = 0xb6c750;
  pcStack_98 = FUN_00650cbc;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)(plVar13 + 8);
  do {
    bVar2 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  bVar2 = *(byte *)(plVar13 + 0xd);
  plVar9 = plVar13;
  plStack_d0 = unaff_x24;
  pdStack_c0 = unaff_x22;
  pqStack_b8 = unaff_x21;
  plStack_b0 = plVar8;
  plStack_a8 = plVar7;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bVar2 & 1) == 0) {
    *(byte *)(plVar13 + 0xd) = 1;
    _semaphore_signal((int)plVar13[10]);
    *(undefined1 *)(plVar13 + 8) = 0;
    __ZNSt3__16thread4joinEv(plVar13 + 0xc);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
    plVar9 = (long *)plVar13[4];
    plVar8 = (long *)plVar13[5];
    if (plVar9 != plVar8) {
      do {
        FUN_00651418(plVar9,plVar8,((long)plVar8 - (long)plVar9 >> 3) * -0x3333333333333333);
        lVar11 = plVar13[5];
        uStack_100 = *(undefined8 *)(lVar11 + -0x28);
        plVar8 = *(long **)(lVar11 + -8);
        if (plVar8 == (long *)0x0) {
          plStack_e0 = (long *)0x0;
        }
        else if (plVar8 == (long *)(lVar11 + -0x20)) {
          plStack_e0 = alStack_f8;
          (**(code **)(*plVar8 + 0x18))(plVar8,alStack_f8);
          lVar11 = plVar13[5];
          plVar8 = *(long **)(lVar11 + -8);
          if (plVar8 == (long *)(lVar11 + -0x20)) {
            lVar12 = 0x20;
          }
          else {
            if (plVar8 == (long *)0x0) goto LAB_00650e04;
            lVar12 = 0x28;
          }
          (**(code **)(*plVar8 + lVar12))();
        }
        else {
          *(undefined8 *)(lVar11 + -8) = 0;
          plStack_e0 = plVar8;
        }
LAB_00650e04:
        plVar13[5] = lVar11 + -0x28;
        FUN_00650804(auStack_108);
        if (plStack_e0 == (long *)0x0) {
          func_0x004686dc();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x650e8c);
          (*pcVar6)();
        }
        (**(code **)(*plStack_e0 + 0x30))(plStack_e0,auStack_108);
        __ZNSt13exception_ptrD1Ev(auStack_108);
        if (plStack_e0 == alStack_f8) {
          lVar11 = 0x20;
LAB_00650d64:
          (**(code **)(*plStack_e0 + lVar11))();
        }
        else if (plStack_e0 != (long *)0x0) {
          lVar11 = 0x28;
          goto LAB_00650d64;
        }
        plVar9 = (long *)plVar13[4];
        plVar8 = (long *)plVar13[5];
      } while (plVar9 != plVar8);
    }
  }
  *pbVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_d8) {
    ___stack_chk_fail();
    *pbVar1 = 0;
    __Unwind_Resume(plVar9);
                    /* WARNING: Could not recover jumptable at 0x00779ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt13runtime_errorD2Ev_00998930)();
    return plVar9;
  }
  return (long *)(ulong)(bVar2 ^ 1);
}



/* Entry: 00650cbc; end: 00650ef7;  */

ulong FUN_00650cbc(ulong param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)(param_1 + 0x40);
  do {
    bVar2 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  bVar2 = *(byte *)(param_1 + 0x68);
  uVar8 = param_1;
  if ((bVar2 & 1) == 0) {
    *(byte *)(param_1 + 0x68) = 1;
    _semaphore_signal(*(undefined4 *)(param_1 + 0x50));
    *(undefined1 *)(param_1 + 0x40) = 0;
    __ZNSt3__16thread4joinEv(param_1 + 0x60);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
    uVar8 = *(ulong *)(param_1 + 0x20);
    uVar9 = *(ulong *)(param_1 + 0x28);
    if (uVar8 != uVar9) {
      do {
        FUN_00651418(uVar8,uVar9,((long)(uVar9 - uVar8) >> 3) * -0x3333333333333333);
        lVar11 = *(long *)(param_1 + 0x28);
        uStack_70 = *(undefined8 *)(lVar11 + -0x28);
        plVar7 = *(long **)(lVar11 + -8);
        if (plVar7 == (long *)0x0) {
          plStack_50 = (long *)0x0;
        }
        else if (plVar7 == (long *)(lVar11 + -0x20)) {
          plStack_50 = alStack_68;
          (**(code **)(*plVar7 + 0x18))(plVar7,alStack_68);
          lVar11 = *(long *)(param_1 + 0x28);
          plVar7 = *(long **)(lVar11 + -8);
          if (plVar7 == (long *)(lVar11 + -0x20)) {
            lVar10 = 0x20;
          }
          else {
            if (plVar7 == (long *)0x0) goto LAB_00650e04;
            lVar10 = 0x28;
          }
          (**(code **)(*plVar7 + lVar10))();
        }
        else {
          *(undefined8 *)(lVar11 + -8) = 0;
          plStack_50 = plVar7;
        }
LAB_00650e04:
        *(long *)(param_1 + 0x28) = lVar11 + -0x28;
        FUN_00650804(auStack_78);
        if (plStack_50 == (long *)0x0) {
          func_0x004686dc();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x650e8c);
          (*pcVar6)();
        }
        (**(code **)(*plStack_50 + 0x30))(plStack_50,auStack_78);
        __ZNSt13exception_ptrD1Ev(auStack_78);
        if (plStack_50 == alStack_68) {
          lVar11 = 0x20;
LAB_00650d64:
          (**(code **)(*plStack_50 + lVar11))();
        }
        else if (plStack_50 != (long *)0x0) {
          lVar11 = 0x28;
          goto LAB_00650d64;
        }
        uVar8 = *(ulong *)(param_1 + 0x20);
        uVar9 = *(ulong *)(param_1 + 0x28);
      } while (uVar8 != uVar9);
    }
  }
  *pbVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return (ulong)(bVar2 ^ 1);
  }
  ___stack_chk_fail();
  *pbVar1 = 0;
  __Unwind_Resume(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00779ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_00998930)();
  return uVar8;
}



/* Entry: 00650ef8; end: 00650efb;  */

void FUN_00650ef8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_00998930)();
  return;
}



/* Entry: 00650efc; end: 00650f23;  */

void FUN_00650efc(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00650f24; end: 00651147;  */

void FUN_00650f24(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_3 < 2) goto LAB_006510f8;
  uVar8 = param_3 - 2U >> 1;
  plVar3 = param_1 + uVar8 * 5;
  plVar9 = param_2 + -5;
  lVar6 = *plVar9;
  lVar4 = *plVar3;
  if (lVar4 <= lVar6) goto LAB_006510f8;
  plStack_60 = (long *)param_2[-1];
  if (plStack_60 == (long *)0x0) {
    plStack_60 = (long *)0x0;
  }
  else if (plStack_60 == param_2 + -4) {
    lVar4 = *plStack_60;
    param_2 = alStack_78;
    plStack_60 = alStack_78;
    (**(code **)(lVar4 + 0x18))();
    lVar4 = *plVar3;
  }
  else {
    param_2[-1] = 0;
  }
  do {
    plVar7 = plVar3;
    *plVar9 = lVar4;
    plVar3 = plVar9 + 1;
    plVar1 = (long *)plVar9[4];
    plVar9[4] = 0;
    if (plVar1 == plVar3) {
      lVar4 = 0x20;
LAB_00650ff4:
      (**(code **)(*plVar1 + lVar4))();
    }
    else if (plVar1 != (long *)0x0) {
      lVar4 = 0x28;
      goto LAB_00650ff4;
    }
    plVar1 = plVar7 + 1;
    plVar5 = (long *)plVar7[4];
    if (plVar5 == (long *)0x0) {
      plVar9[4] = 0;
    }
    else if (plVar5 == plVar1) {
      plVar9[4] = (long)plVar3;
      (**(code **)(*(long *)plVar7[4] + 0x18))();
      param_2 = plVar3;
    }
    else {
      plVar9[4] = (long)plVar5;
      plVar7[4] = 0;
    }
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1 >> 1;
    lVar4 = param_1[uVar8 * 5];
    plVar3 = param_1 + uVar8 * 5;
    plVar9 = plVar7;
  } while (lVar6 < lVar4);
  *plVar7 = lVar6;
  param_1 = (long *)plVar7[4];
  plVar7[4] = 0;
  if (param_1 == plVar1) {
    lVar4 = 0x20;
LAB_0065108c:
    (**(code **)(*param_1 + lVar4))();
  }
  else if (param_1 != (long *)0x0) {
    lVar4 = 0x28;
    goto LAB_0065108c;
  }
  if (plStack_60 == (long *)0x0) {
    plVar7[4] = 0;
  }
  else {
    if (plStack_60 != alStack_78) {
      plVar7[4] = (long)plStack_60;
      goto LAB_006510f8;
    }
    plVar7[4] = (long)plVar1;
    (**(code **)(*plStack_60 + 0x18))();
    param_2 = plVar1;
  }
  param_1 = plStack_60;
  if (plStack_60 == alStack_78) {
    lVar4 = 0x20;
  }
  else {
    if (plStack_60 == (long *)0x0) goto LAB_006510f8;
    lVar4 = 0x28;
  }
  (**(code **)(*plStack_60 + lVar4))();
LAB_006510f8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  iVar2 = (int)param_2;
  while (iVar2 != 0) {
    func_0x0040cf10();
    iVar2 = (int)param_2;
  }
  __Unwind_Resume();
  *param_1 = (long)&PTR_FUN_00a0d328;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00651148; end: 00651157;  */

void FUN_00651148(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0d328;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00651158; end: 00651177;  */

void FUN_00651158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0d328;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00651178; end: 00651187;  */

void FUN_00651178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00651180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 00651188; end: 00651417;  */

long ***** FUN_00651188(long *****param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long ****pppplVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *****ppppplVar8;
  ulong uVar9;
  undefined8 uVar10;
  dword *pdVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long ***ppplVar15;
  int iVar16;
  long *****ppppplVar17;
  long ****pppplVar18;
  long lVar19;
  long *****ppppplVar20;
  long *****ppppplVar21;
  long ****pppplVar22;
  long *****ppppplVar23;
  long ***ppplVar24;
  long *****unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x28;
  long ****pppplStack_1d0;
  undefined8 uStack_1c8;
  long ****pppplStack_1c0;
  long ***ppplStack_1b8;
  ulong uStack_1b0;
  long ****pppplStack_1a0;
  long lStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  long ****pppplStack_178;
  long ****pppplStack_170;
  long ****pppplStack_168;
  long ****pppplStack_160;
  long ****pppplStack_158;
  long ****pppplStack_150;
  long ****pppplStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long ****pppplStack_128;
  long ***ppplStack_120;
  long ***appplStack_118 [3];
  long ****pppplStack_100;
  long lStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long ***ppplStack_88;
  dword *pdStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long ***appplStack_68 [3];
  long ****pppplStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_70 = *param_3;
  ppppplVar8 = (long *****)param_3[4];
  if (ppppplVar8 == (long *****)0x0) {
    pppplStack_50 = (long ****)0x0;
  }
  else if (ppppplVar8 == (long *****)(param_3 + 1)) {
    pppplStack_50 = appplStack_68;
    (*(code *)(*ppppplVar8)[3])(ppppplVar8,appplStack_68);
  }
  else {
    param_3[4] = 0;
    pppplStack_50 = (long ****)ppppplVar8;
  }
  ppppplVar8 = param_1 + 1;
  *param_1 = (long ****)&PTR_FUN_00a0d290;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_002971d4(ppppplVar8,*param_2,param_2[1]);
  }
  else {
    pppplVar22 = (long ****)param_2[1];
    pppplVar18 = (long ****)*param_2;
    param_1[3] = (long ****)param_2[2];
    param_1[2] = pppplVar22;
    *ppppplVar8 = pppplVar18;
  }
  ppppplVar21 = param_1 + 4;
  *ppppplVar21 = (long ****)0x0;
  param_1[5] = (long ****)0x0;
  param_1[6] = (long ****)0x0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = (long ****)0x0;
  uVar9 = (ulong)*(uint *)PTR__mach_task_self__0099a3c0;
  _semaphore_create(uVar9,param_1 + 10,0,0);
  __ZNSt3__16chrono12steady_clock3nowEv();
  ppppplVar23 = param_1 + 0xc;
  *ppppplVar23 = (long ****)0x0;
  param_1[0xb] = (long ****)(uVar9 + 123000000000);
  *(undefined1 *)(param_1 + 0xd) = 0;
  uVar10 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  pdVar11 = &MACH_HEADER.ncmds;
  uStack_78 = uVar10;
  __Znwm();
  uStack_78 = 0;
  *(undefined8 *)pdVar11 = uVar10;
  *(long ******)(pdVar11 + 2) = param_1;
  pcVar7 = FUN_006517d0;
  ppppplVar13 = (long *****)&ppplStack_88;
  ppppplVar17 = (long *****)0x0;
  pdStack_80 = pdVar11;
  _pthread_create();
  if ((int)ppppplVar13 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x651360);
    (*pcVar7)();
  }
  if (*ppppplVar23 == (long ****)0x0) {
    *ppppplVar23 = (long ****)ppplStack_88;
    ppplStack_88 = (long ***)0x0;
    __ZNSt3__16threadD1Ev(&ppplStack_88);
    ppppplVar13 = (long *****)pppplStack_50;
    if (pppplStack_50 == appplStack_68) {
      lVar19 = 0x20;
LAB_00651310:
      (**(code **)((long)*pppplStack_50 + lVar19))();
    }
    else if ((long *****)pppplStack_50 != (long *****)0x0) {
      lVar19 = 0x28;
      goto LAB_00651310;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return param_1;
    }
  }
  else {
    __ZSt9terminatev();
  }
  ___stack_chk_fail();
  if ((int)ppppplVar17 != 0) {
    func_0x0040cf10();
    if (pppplStack_50 == appplStack_68) {
      lVar19 = 0x20;
    }
    else {
      if ((long *****)pppplStack_50 == (long *****)0x0) goto LAB_00651410;
      lVar19 = 0x28;
    }
    (**(code **)((long)*pppplStack_50 + lVar19))();
  }
LAB_00651410:
  ppppplVar12 = ppppplVar13;
  __Unwind_Resume();
  puStack_a0 = &stack0xfffffffffffffff0;
  pcStack_98 = FUN_00651418;
  lStack_f8 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppplVar20 = (long *****)((long)pcVar7 + -2);
  ppppplVar14 = ppppplVar17;
  if (1 < (long)pcVar7) {
    ppppplVar14 = (long *****)appplStack_118;
    ppppplVar8 = (long *****)ppppplVar12[4];
    pppplStack_128 = (long ****)ppppplVar14;
    ppplStack_120 = (long ***)*ppppplVar12;
    if (ppppplVar8 == (long *****)0x0) {
      pppplStack_100 = (long ****)0x0;
    }
    else if (ppppplVar8 == ppppplVar12 + 1) {
      pppplStack_100 = (long ****)ppppplVar14;
      (*(code *)(*ppppplVar8)[3])();
    }
    else {
      pppplStack_100 = (long ****)ppppplVar8;
      ppppplVar12[4] = (long ****)0x0;
    }
    unaff_x26 = (ulong)ppppplVar20 >> 1;
    unaff_x27 = 0x28;
    ppppplVar21 = ppppplVar12;
    uVar9 = 0;
    do {
      unaff_x25 = ppppplVar21;
      uVar3 = uVar9 << 1 | 1;
      uVar1 = uVar9 * 2 + 2;
      ppppplVar21 = unaff_x25 + uVar9 * 5 + 5;
      unaff_x28 = uVar3;
      if (((long)uVar1 < (long)pcVar7) &&
         (ppppplVar21 = unaff_x25 + uVar9 * 5 + 10, unaff_x28 = uVar1,
         (long)unaff_x25[uVar9 * 5 + 5] <= (long)unaff_x25[uVar9 * 5 + 10])) {
        ppppplVar21 = unaff_x25 + uVar9 * 5 + 5;
        unaff_x28 = uVar3;
      }
      ppppplVar20 = ppppplVar21 + 1;
      *unaff_x25 = *ppppplVar21;
      ppppplVar8 = unaff_x25 + 1;
      ppppplVar13 = (long *****)unaff_x25[4];
      unaff_x25[4] = (long ****)0x0;
      if (ppppplVar13 == ppppplVar8) {
        lVar19 = 0x20;
LAB_00651534:
        (**(code **)((long)*ppppplVar13 + lVar19))();
      }
      else if (ppppplVar13 != (long *****)0x0) {
        lVar19 = 0x28;
        goto LAB_00651534;
      }
      ppppplVar13 = (long *****)ppppplVar21[4];
      if (ppppplVar13 == (long *****)0x0) {
        unaff_x25[4] = (long ****)0x0;
      }
      else if (ppppplVar13 == ppppplVar20) {
        unaff_x25[4] = (long ****)ppppplVar8;
        (*(code *)(*ppppplVar21[4])[3])();
        ppppplVar14 = ppppplVar8;
      }
      else {
        unaff_x25[4] = (long ****)ppppplVar13;
        ppppplVar21[4] = (long ****)0x0;
      }
      ppppplVar13 = (long *****)pppplStack_128;
      uVar9 = unaff_x28;
    } while ((long)unaff_x28 <= (long)unaff_x26);
    if (ppppplVar21 == ppppplVar17 + -5) {
      *ppppplVar21 = (long ****)ppplStack_120;
      ppppplVar8 = (long *****)ppppplVar21[4];
      ppppplVar21[4] = (long ****)0x0;
      if (ppppplVar8 == ppppplVar20) {
        lVar19 = 0x20;
LAB_00651724:
        (**(code **)((long)*ppppplVar8 + lVar19))();
      }
      else if (ppppplVar8 != (long *****)0x0) {
        lVar19 = 0x28;
        goto LAB_00651724;
      }
      if ((long *****)pppplStack_100 == (long *****)0x0) {
        ppppplVar21[4] = (long ****)0x0;
      }
      else if ((long *****)pppplStack_100 == ppppplVar13) {
        ppppplVar21[4] = (long ****)ppppplVar20;
        ppppplVar14 = ppppplVar20;
        (*(code *)(*pppplStack_100)[3])();
      }
      else {
        ppppplVar21[4] = pppplStack_100;
        pppplStack_100 = (long ****)0x0;
      }
    }
    else {
      *ppppplVar21 = ppppplVar17[-5];
      ppppplVar8 = (long *****)ppppplVar21[4];
      ppppplVar21[4] = (long ****)0x0;
      if (ppppplVar8 == ppppplVar20) {
        lVar19 = 0x20;
LAB_006515dc:
        (**(code **)((long)*ppppplVar8 + lVar19))();
      }
      else if (ppppplVar8 != (long *****)0x0) {
        lVar19 = 0x28;
        goto LAB_006515dc;
      }
      pcVar7 = (code *)(ppppplVar17 + -4);
      ppppplVar8 = (long *****)ppppplVar17[-1];
      if (ppppplVar8 == (long *****)0x0) {
        ppppplVar21[4] = (long ****)0x0;
LAB_00651630:
        ppppplVar8 = (long *****)ppppplVar17[-1];
        ppppplVar17[-5] = (long ****)ppplStack_120;
        ppppplVar17[-1] = (long ****)0x0;
        if (ppppplVar8 == (long *****)pcVar7) {
          lVar19 = 0x20;
        }
        else {
          if (ppppplVar8 == (long *****)0x0) goto LAB_00651664;
          lVar19 = 0x28;
        }
        (**(code **)((long)*ppppplVar8 + lVar19))();
      }
      else {
        if (ppppplVar8 == (long *****)pcVar7) {
          ppppplVar21[4] = (long ****)ppppplVar20;
          (*(code *)(*ppppplVar17[-1])[3])(ppppplVar17[-1],ppppplVar20);
          goto LAB_00651630;
        }
        ppppplVar21[4] = (long ****)ppppplVar8;
        ppppplVar17[-5] = (long ****)ppplStack_120;
        ppppplVar17[-1] = (long ****)0x0;
      }
LAB_00651664:
      if ((long *****)pppplStack_100 == (long *****)0x0) {
        ppppplVar17[-1] = (long ****)0x0;
      }
      else if ((long *****)pppplStack_100 == ppppplVar13) {
        ppppplVar17[-1] = (long ****)pcVar7;
        (*(code *)(*pppplStack_100)[3])(pppplStack_100,pcVar7);
      }
      else {
        ppppplVar17[-1] = pppplStack_100;
        pppplStack_100 = (long ****)0x0;
      }
      ppppplVar14 = ppppplVar21 + 5;
      FUN_00650f24(ppppplVar12,ppppplVar14,
                   ((long)ppppplVar14 - (long)ppppplVar12 >> 3) * -0x3333333333333333);
    }
    ppppplVar12 = (long *****)pppplStack_100;
    ppppplVar8 = ppppplVar17;
    ppppplVar23 = (long *****)pcVar7;
    if ((long *****)pppplStack_100 == ppppplVar13) {
      lVar19 = 0x20;
    }
    else {
      if ((long *****)pppplStack_100 == (long *****)0x0) goto LAB_006516e4;
      lVar19 = 0x28;
    }
    (**(code **)((long)*pppplStack_100 + lVar19))();
  }
LAB_006516e4:
  iVar16 = (int)ppppplVar14;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_f8) {
    return ppppplVar12;
  }
  ___stack_chk_fail();
  if (iVar16 == 0) {
    __Unwind_Resume(ppppplVar12);
  }
  ppppplVar17 = ppppplVar12;
  func_0x0040cf10();
  pcStack_138 = FUN_006517d0;
  lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppplVar14 = ppppplVar17;
  pppplStack_1d0 = (long ****)ppppplVar17;
  uStack_190 = unaff_x28;
  uStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  pppplStack_178 = (long ****)unaff_x25;
  pppplStack_170 = (long ****)ppppplVar13;
  pppplStack_168 = (long ****)ppppplVar23;
  pppplStack_160 = (long ****)ppppplVar21;
  pppplStack_158 = (long ****)ppppplVar8;
  pppplStack_150 = (long ****)ppppplVar12;
  pppplStack_148 = (long ****)ppppplVar20;
  ppuStack_140 = &puStack_a0;
  __ZNSt3__119__thread_local_dataEv();
  pppplVar18 = *ppppplVar17;
  *ppppplVar17 = (long ****)0x0;
  _pthread_setspecific(*ppppplVar14,pppplVar18);
  pppplVar22 = ppppplVar17[1];
  ppplVar24 = pppplVar22[2];
  pppplVar18 = (long ****)pppplVar22[1];
  if (-1 < (char)*(byte *)((long)pppplVar22 + 0x1f)) {
    ppplVar24 = (long ***)(ulong)*(byte *)((long)pppplVar22 + 0x1f);
    pppplVar18 = pppplVar22 + 1;
  }
  pppplVar2 = (long ****)((long)ppplVar24 + 4);
  if ((long ****)0x7ffffffffffffff6 < pppplVar2) {
    FUN_0040d740();
LAB_00651b4c:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x651b50);
    (*pcVar7)();
  }
  if (pppplVar2 < (long ****)0x17) {
    ppplStack_1b8 = (long ***)0x0;
    pppplStack_1c0 = (long ****)0x0;
    ppppplVar8 = &pppplStack_1c0;
    uStack_1b0 = (long)pppplVar2 << 0x38;
    if (ppplVar24 == (long ***)0x0) goto LAB_006518ac;
  }
  else {
    pdVar11 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pppplVar2 | 7) != (dword *)0x17) {
      pdVar11 = (dword *)((ulong)pppplVar2 | 7);
    }
    ppppplVar8 = (long *****)((long)pdVar11 + 1);
    __Znwm();
    uStack_1b0 = (ulong)((long)pdVar11 + 1) | 0x8000000000000000;
    pppplStack_1c0 = (long ****)ppppplVar8;
    ppplStack_1b8 = (long ***)pppplVar2;
  }
  _memmove(ppppplVar8,pppplVar18,ppplVar24);
LAB_006518ac:
  *(undefined4 *)((long)ppppplVar8 + (long)ppplVar24) = 0x6b72772d;
  ((code *)((long)ppppplVar8 + (long)ppplVar24))[4] = (code)0x0;
  ppppplVar8 = (long *****)pppplStack_1c0;
  if (-1 < (long)uStack_1b0) {
    ppppplVar8 = &pppplStack_1c0;
  }
  _pthread_setname_np();
  if ((long)uStack_1b0 < 0) {
    ppppplVar8 = (long *****)pppplStack_1c0;
    __ZdlPv();
    bVar4 = *(byte *)(pppplVar22 + 0xd);
  }
  else {
    bVar4 = *(byte *)(pppplVar22 + 0xd);
  }
  if ((bVar4 & 1) == 0) {
    pppplVar18 = pppplVar22 + 8;
LAB_006519c0:
    do {
      do {
        ppplVar24 = *pppplVar18;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppplVar18,0x10);
        if (bVar6) {
          *(byte *)pppplVar18 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while ((cVar5 != '\0') || (((ulong)ppplVar24 & 1) != 0));
      __ZNSt3__16chrono12steady_clock3nowEv();
      ppppplVar13 = (long *****)pppplVar22[4];
      ppppplVar21 = (long *****)pppplVar22[5];
      if (ppppplVar13 == ppppplVar21) {
        ppppplVar23 = ppppplVar8 + 0x3946be1c0;
      }
      else {
        ppppplVar23 = (long *****)*ppppplVar13;
        if ((long)ppppplVar23 <= (long)ppppplVar8) {
          FUN_00651418(ppppplVar13,ppppplVar21,
                       ((long)ppppplVar21 - (long)ppppplVar13 >> 3) * -0x3333333333333333);
          ppplVar24 = pppplVar22[5];
          pppplStack_1c0 = (long ****)ppplVar24[-5];
          ppppplVar8 = (long *****)ppplVar24[-1];
          if (ppppplVar8 == (long *****)0x0) {
            pppplStack_1a0 = (long ****)0x0;
          }
          else if (ppppplVar8 == (long *****)(ppplVar24 + -4)) {
            pppplStack_1a0 = &ppplStack_1b8;
            (*(code *)(*ppppplVar8)[3])(ppppplVar8,&ppplStack_1b8);
            ppplVar24 = pppplVar22[5];
            ppplVar15 = (long ***)ppplVar24[-1];
            if (ppplVar15 == ppplVar24 + -4) {
              lVar19 = 0x20;
            }
            else {
              if (ppplVar15 == (long ***)0x0) goto LAB_00651ae0;
              lVar19 = 0x28;
            }
            (**(code **)((long)*ppplVar15 + lVar19))();
          }
          else {
            ppplVar24[-1] = (long **)0x0;
            pppplStack_1a0 = (long ****)ppppplVar8;
          }
LAB_00651ae0:
          pppplVar22[5] = ppplVar24 + -5;
          *(undefined1 *)(pppplVar22 + 8) = 0;
          uStack_1c8 = 0;
          if ((long *****)pppplStack_1a0 == (long *****)0x0) {
            func_0x004686dc();
            goto LAB_00651b4c;
          }
          (*(code *)(*pppplStack_1a0)[6])(pppplStack_1a0,&uStack_1c8);
          __ZNSt13exception_ptrD1Ev(&uStack_1c8);
          ppppplVar8 = (long *****)pppplStack_1a0;
          if (pppplStack_1a0 == &ppplStack_1b8) {
            lVar19 = 0x20;
          }
          else {
            if ((long *****)pppplStack_1a0 == (long *****)0x0) goto LAB_006519c0;
            lVar19 = 0x28;
          }
          (**(code **)((long)*pppplStack_1a0 + lVar19))();
          goto LAB_006519c0;
        }
      }
      pppplVar22[0xb] = (long ***)ppppplVar23;
      *(undefined1 *)(pppplVar22 + 8) = 0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar9 = (long)ppppplVar23 - (long)ppppplVar13;
      ppppplVar8 = ppppplVar13;
      if (uVar9 != 0 && (long)ppppplVar13 <= (long)ppppplVar23) {
        ppppplVar8 = (long *****)(ulong)*(uint *)(pppplVar22 + 10);
        _semaphore_timedwait
                  (ppppplVar8,
                   (ulong)(uint)((int)(uVar9 / 1000) + (int)((uVar9 / 1000) / 1000000) * -1000000) *
                   0x3e800000000 | uVar9 / 1000000000 & 0xffffffff);
      }
    } while (*(char *)(pppplVar22 + 0xd) != '\x01');
  }
  ppppplVar13 = (long *****)pppplStack_1d0;
  if ((long *****)pppplStack_1d0 != (long *****)0x0) {
    pppplVar18 = (long ****)*pppplStack_1d0;
    *pppplStack_1d0 = (long ***)0x0;
    if (pppplVar18 != (long ****)0x0) {
      __ZNSt3__115__thread_structD1Ev();
      __ZdlPv();
    }
    __ZdlPv();
    ppppplVar8 = ppppplVar13;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_198) {
    ___stack_chk_fail();
    if ((long)uStack_1b0 < 0) {
      __ZdlPv(pppplStack_1c0);
    }
    FUN_00651bdc(&pppplStack_1d0);
    __Unwind_Resume();
    pppplVar18 = *ppppplVar8;
    *ppppplVar8 = (long ****)0x0;
    if (pppplVar18 != (long ****)0x0) {
      ppplVar24 = *pppplVar18;
      *pppplVar18 = (long ***)0x0;
      if (ppplVar24 != (long ***)0x0) {
        __ZNSt3__115__thread_structD1Ev();
        __ZdlPv();
      }
      __ZdlPv(pppplVar18);
    }
    return ppppplVar8;
  }
  return (long *****)0x0;
}



/* Entry: 00651418; end: 006517cf;  */

long ***** FUN_00651418(long *****param_1,long *****param_2,long *****param_3)

{
  ulong uVar1;
  long ****pppplVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  dword *pdVar7;
  code *pcVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long ***ppplVar13;
  int iVar14;
  long ****pppplVar15;
  long lVar16;
  long *****unaff_x21;
  long *****unaff_x22;
  long *****unaff_x23;
  long ****pppplVar17;
  long *****unaff_x24;
  long ***ppplVar18;
  long *****unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x28;
  ulong uVar19;
  long ****pppplStack_140;
  undefined8 uStack_138;
  long ****pppplStack_130;
  long ***ppplStack_128;
  ulong uStack_120;
  long ****pppplStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long ****pppplStack_e8;
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  long ****pppplStack_c0;
  long ****pppplStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long ****pppplStack_98;
  long ***ppplStack_90;
  long ***appplStack_88 [3];
  long ****pppplStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppplVar12 = (long *****)((long)param_3 + -2);
  ppppplVar10 = param_2;
  if (1 < (long)param_3) {
    ppplStack_90 = (long ***)*param_1;
    ppppplVar10 = (long *****)appplStack_88;
    pppplStack_70 = param_1[4];
    pppplStack_98 = (long ****)ppppplVar10;
    if ((long *****)pppplStack_70 == (long *****)0x0) {
      pppplStack_70 = (long ****)0x0;
    }
    else if ((long *****)pppplStack_70 == param_1 + 1) {
      pppplVar15 = (long ****)*pppplStack_70;
      pppplStack_70 = (long ****)ppppplVar10;
      (*(code *)pppplVar15[3])();
    }
    else {
      param_1[4] = (long ****)0x0;
    }
    unaff_x26 = (ulong)ppppplVar12 >> 1;
    unaff_x27 = 0x28;
    unaff_x22 = param_1;
    uVar19 = 0;
    do {
      unaff_x25 = unaff_x22;
      uVar3 = uVar19 << 1 | 1;
      uVar1 = uVar19 * 2 + 2;
      unaff_x22 = unaff_x25 + uVar19 * 5 + 5;
      unaff_x28 = uVar3;
      if (((long)uVar1 < (long)param_3) &&
         (unaff_x22 = unaff_x25 + uVar19 * 5 + 10, unaff_x28 = uVar1,
         (long)unaff_x25[uVar19 * 5 + 5] <= (long)unaff_x25[uVar19 * 5 + 10])) {
        unaff_x22 = unaff_x25 + uVar19 * 5 + 5;
        unaff_x28 = uVar3;
      }
      ppppplVar12 = unaff_x22 + 1;
      *unaff_x25 = *unaff_x22;
      ppppplVar11 = unaff_x25 + 1;
      ppppplVar9 = (long *****)unaff_x25[4];
      unaff_x25[4] = (long ****)0x0;
      if (ppppplVar9 == ppppplVar11) {
        lVar16 = 0x20;
LAB_00651534:
        (**(code **)((long)*ppppplVar9 + lVar16))();
      }
      else if (ppppplVar9 != (long *****)0x0) {
        lVar16 = 0x28;
        goto LAB_00651534;
      }
      ppppplVar9 = (long *****)unaff_x22[4];
      if (ppppplVar9 == (long *****)0x0) {
        unaff_x25[4] = (long ****)0x0;
      }
      else if (ppppplVar9 == ppppplVar12) {
        unaff_x25[4] = (long ****)ppppplVar11;
        (*(code *)(*unaff_x22[4])[3])();
        ppppplVar10 = ppppplVar11;
      }
      else {
        unaff_x25[4] = (long ****)ppppplVar9;
        unaff_x22[4] = (long ****)0x0;
      }
      unaff_x24 = (long *****)pppplStack_98;
      uVar19 = unaff_x28;
    } while ((long)unaff_x28 <= (long)unaff_x26);
    if (unaff_x22 == param_2 + -5) {
      *unaff_x22 = (long ****)ppplStack_90;
      ppppplVar11 = (long *****)unaff_x22[4];
      unaff_x22[4] = (long ****)0x0;
      if (ppppplVar11 == ppppplVar12) {
        lVar16 = 0x20;
LAB_00651724:
        (**(code **)((long)*ppppplVar11 + lVar16))();
      }
      else if (ppppplVar11 != (long *****)0x0) {
        lVar16 = 0x28;
        goto LAB_00651724;
      }
      if ((long *****)pppplStack_70 == (long *****)0x0) {
        unaff_x22[4] = (long ****)0x0;
      }
      else if ((long *****)pppplStack_70 == unaff_x24) {
        unaff_x22[4] = (long ****)ppppplVar12;
        ppppplVar10 = ppppplVar12;
        (*(code *)(*pppplStack_70)[3])();
      }
      else {
        unaff_x22[4] = pppplStack_70;
        pppplStack_70 = (long ****)0x0;
      }
    }
    else {
      *unaff_x22 = param_2[-5];
      ppppplVar10 = (long *****)unaff_x22[4];
      unaff_x22[4] = (long ****)0x0;
      if (ppppplVar10 == ppppplVar12) {
        lVar16 = 0x20;
LAB_006515dc:
        (**(code **)((long)*ppppplVar10 + lVar16))();
      }
      else if (ppppplVar10 != (long *****)0x0) {
        lVar16 = 0x28;
        goto LAB_006515dc;
      }
      param_3 = param_2 + -4;
      ppppplVar10 = (long *****)param_2[-1];
      if (ppppplVar10 == (long *****)0x0) {
        unaff_x22[4] = (long ****)0x0;
LAB_00651630:
        ppppplVar10 = (long *****)param_2[-1];
        param_2[-5] = (long ****)ppplStack_90;
        param_2[-1] = (long ****)0x0;
        if (ppppplVar10 == param_3) {
          lVar16 = 0x20;
        }
        else {
          if (ppppplVar10 == (long *****)0x0) goto LAB_00651664;
          lVar16 = 0x28;
        }
        (**(code **)((long)*ppppplVar10 + lVar16))();
      }
      else {
        if (ppppplVar10 == param_3) {
          unaff_x22[4] = (long ****)ppppplVar12;
          (*(code *)(*param_2[-1])[3])(param_2[-1],ppppplVar12);
          goto LAB_00651630;
        }
        unaff_x22[4] = (long ****)ppppplVar10;
        param_2[-5] = (long ****)ppplStack_90;
        param_2[-1] = (long ****)0x0;
      }
LAB_00651664:
      if ((long *****)pppplStack_70 == (long *****)0x0) {
        param_2[-1] = (long ****)0x0;
      }
      else if ((long *****)pppplStack_70 == unaff_x24) {
        param_2[-1] = (long ****)param_3;
        (*(code *)(*pppplStack_70)[3])(pppplStack_70,param_3);
      }
      else {
        param_2[-1] = pppplStack_70;
        pppplStack_70 = (long ****)0x0;
      }
      ppppplVar10 = unaff_x22 + 5;
      FUN_00650f24(param_1,ppppplVar10,
                   ((long)ppppplVar10 - (long)param_1 >> 3) * -0x3333333333333333);
    }
    param_1 = (long *****)pppplStack_70;
    unaff_x21 = param_2;
    unaff_x23 = param_3;
    if ((long *****)pppplStack_70 == unaff_x24) {
      lVar16 = 0x20;
    }
    else {
      if ((long *****)pppplStack_70 == (long *****)0x0) goto LAB_006516e4;
      lVar16 = 0x28;
    }
    (**(code **)((long)*pppplStack_70 + lVar16))();
  }
LAB_006516e4:
  iVar14 = (int)ppppplVar10;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar14 == 0) {
    __Unwind_Resume(param_1);
  }
  ppppplVar10 = param_1;
  func_0x0040cf10();
  pcStack_a8 = FUN_006517d0;
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppplVar11 = ppppplVar10;
  pppplStack_140 = (long ****)ppppplVar10;
  uStack_100 = unaff_x28;
  uStack_f8 = unaff_x27;
  uStack_f0 = unaff_x26;
  pppplStack_e8 = (long ****)unaff_x25;
  pppplStack_e0 = (long ****)unaff_x24;
  pppplStack_d8 = (long ****)unaff_x23;
  pppplStack_d0 = (long ****)unaff_x22;
  pppplStack_c8 = (long ****)unaff_x21;
  pppplStack_c0 = (long ****)param_1;
  pppplStack_b8 = (long ****)ppppplVar12;
  puStack_b0 = &stack0xfffffffffffffff0;
  __ZNSt3__119__thread_local_dataEv();
  pppplVar15 = *ppppplVar10;
  *ppppplVar10 = (long ****)0x0;
  _pthread_setspecific(*ppppplVar11,pppplVar15);
  pppplVar17 = ppppplVar10[1];
  ppplVar18 = pppplVar17[2];
  pppplVar15 = (long ****)pppplVar17[1];
  if (-1 < (char)*(byte *)((long)pppplVar17 + 0x1f)) {
    ppplVar18 = (long ***)(ulong)*(byte *)((long)pppplVar17 + 0x1f);
    pppplVar15 = pppplVar17 + 1;
  }
  pppplVar2 = (long ****)((long)ppplVar18 + 4);
  if ((long ****)0x7ffffffffffffff6 < pppplVar2) {
    FUN_0040d740();
LAB_00651b4c:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x651b50);
    (*pcVar8)();
  }
  if (pppplVar2 < (long ****)0x17) {
    ppplStack_128 = (long ***)0x0;
    pppplStack_130 = (long ****)0x0;
    ppppplVar10 = &pppplStack_130;
    uStack_120 = (long)pppplVar2 << 0x38;
    if (ppplVar18 == (long ***)0x0) goto LAB_006518ac;
  }
  else {
    pdVar7 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pppplVar2 | 7) != (dword *)0x17) {
      pdVar7 = (dword *)((ulong)pppplVar2 | 7);
    }
    ppppplVar10 = (long *****)((long)pdVar7 + 1);
    __Znwm();
    uStack_120 = (ulong)((long)pdVar7 + 1) | 0x8000000000000000;
    pppplStack_130 = (long ****)ppppplVar10;
    ppplStack_128 = (long ***)pppplVar2;
  }
  _memmove(ppppplVar10,pppplVar15,ppplVar18);
LAB_006518ac:
  *(undefined4 *)((long)ppppplVar10 + (long)ppplVar18) = 0x6b72772d;
  *(undefined1 *)((undefined4 *)((long)ppppplVar10 + (long)ppplVar18) + 1) = 0;
  ppppplVar10 = (long *****)pppplStack_130;
  if (-1 < (long)uStack_120) {
    ppppplVar10 = &pppplStack_130;
  }
  _pthread_setname_np();
  if ((long)uStack_120 < 0) {
    ppppplVar10 = (long *****)pppplStack_130;
    __ZdlPv();
    bVar4 = *(byte *)(pppplVar17 + 0xd);
  }
  else {
    bVar4 = *(byte *)(pppplVar17 + 0xd);
  }
  if ((bVar4 & 1) == 0) {
    pppplVar15 = pppplVar17 + 8;
LAB_006519c0:
    do {
      do {
        ppplVar18 = *pppplVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppplVar15,0x10);
        if (bVar6) {
          *(byte *)pppplVar15 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while ((cVar5 != '\0') || (((ulong)ppplVar18 & 1) != 0));
      __ZNSt3__16chrono12steady_clock3nowEv();
      ppppplVar12 = (long *****)pppplVar17[4];
      ppppplVar11 = (long *****)pppplVar17[5];
      if (ppppplVar12 == ppppplVar11) {
        ppppplVar9 = ppppplVar10 + 0x3946be1c0;
      }
      else {
        ppppplVar9 = (long *****)*ppppplVar12;
        if ((long)ppppplVar9 <= (long)ppppplVar10) {
          FUN_00651418(ppppplVar12,ppppplVar11,
                       ((long)ppppplVar11 - (long)ppppplVar12 >> 3) * -0x3333333333333333);
          ppplVar18 = pppplVar17[5];
          pppplStack_130 = (long ****)ppplVar18[-5];
          ppppplVar10 = (long *****)ppplVar18[-1];
          if (ppppplVar10 == (long *****)0x0) {
            pppplStack_110 = (long ****)0x0;
          }
          else if (ppppplVar10 == (long *****)(ppplVar18 + -4)) {
            pppplStack_110 = &ppplStack_128;
            (*(code *)(*ppppplVar10)[3])(ppppplVar10,&ppplStack_128);
            ppplVar18 = pppplVar17[5];
            ppplVar13 = (long ***)ppplVar18[-1];
            if (ppplVar13 == ppplVar18 + -4) {
              lVar16 = 0x20;
            }
            else {
              if (ppplVar13 == (long ***)0x0) goto LAB_00651ae0;
              lVar16 = 0x28;
            }
            (**(code **)((long)*ppplVar13 + lVar16))();
          }
          else {
            ppplVar18[-1] = (long **)0x0;
            pppplStack_110 = (long ****)ppppplVar10;
          }
LAB_00651ae0:
          pppplVar17[5] = ppplVar18 + -5;
          *(undefined1 *)(pppplVar17 + 8) = 0;
          uStack_138 = 0;
          if ((long *****)pppplStack_110 == (long *****)0x0) {
            func_0x004686dc();
            goto LAB_00651b4c;
          }
          (*(code *)(*pppplStack_110)[6])(pppplStack_110,&uStack_138);
          __ZNSt13exception_ptrD1Ev(&uStack_138);
          ppppplVar10 = (long *****)pppplStack_110;
          if (pppplStack_110 == &ppplStack_128) {
            lVar16 = 0x20;
          }
          else {
            if ((long *****)pppplStack_110 == (long *****)0x0) goto LAB_006519c0;
            lVar16 = 0x28;
          }
          (**(code **)((long)*pppplStack_110 + lVar16))();
          goto LAB_006519c0;
        }
      }
      pppplVar17[0xb] = (long ***)ppppplVar9;
      *(undefined1 *)(pppplVar17 + 8) = 0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar19 = (long)ppppplVar9 - (long)ppppplVar12;
      ppppplVar10 = ppppplVar12;
      if (uVar19 != 0 && (long)ppppplVar12 <= (long)ppppplVar9) {
        ppppplVar10 = (long *****)(ulong)*(uint *)(pppplVar17 + 10);
        _semaphore_timedwait
                  (ppppplVar10,
                   (ulong)(uint)((int)(uVar19 / 1000) + (int)((uVar19 / 1000) / 1000000) * -1000000)
                   * 0x3e800000000 | uVar19 / 1000000000 & 0xffffffff);
      }
    } while (*(char *)(pppplVar17 + 0xd) != '\x01');
  }
  ppppplVar12 = (long *****)pppplStack_140;
  if ((long *****)pppplStack_140 != (long *****)0x0) {
    pppplVar15 = (long ****)*pppplStack_140;
    *pppplStack_140 = (long ***)0x0;
    if (pppplVar15 != (long ****)0x0) {
      __ZNSt3__115__thread_structD1Ev();
      __ZdlPv();
    }
    __ZdlPv();
    ppppplVar10 = ppppplVar12;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_108) {
    ___stack_chk_fail();
    if ((long)uStack_120 < 0) {
      __ZdlPv(pppplStack_130);
    }
    FUN_00651bdc(&pppplStack_140);
    __Unwind_Resume();
    pppplVar15 = *ppppplVar10;
    *ppppplVar10 = (long ****)0x0;
    if (pppplVar15 != (long ****)0x0) {
      ppplVar18 = *pppplVar15;
      *pppplVar15 = (long ***)0x0;
      if (ppplVar18 != (long ***)0x0) {
        __ZNSt3__115__thread_structD1Ev();
        __ZdlPv();
      }
      __ZdlPv(pppplVar15);
    }
    return ppppplVar10;
  }
  return (long *****)0x0;
}



/* Entry: 006517d0; end: 00651bdb;  */

long ***** FUN_006517d0(long *****param_1)

{
  long ****pppplVar1;
  byte bVar2;
  long *****ppppplVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  dword *pdVar7;
  code *pcVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long ***ppplVar11;
  long ****pppplVar12;
  long lVar13;
  long ****pppplVar14;
  long *****ppppplVar15;
  long ***ppplVar16;
  long ****pppplStack_a0;
  undefined8 uStack_98;
  long ****pppplStack_90;
  long ***ppplStack_88;
  ulong uStack_80;
  long ****pppplStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppplVar9 = param_1;
  pppplStack_a0 = (long ****)param_1;
  __ZNSt3__119__thread_local_dataEv();
  pppplVar12 = *param_1;
  *param_1 = (long ****)0x0;
  _pthread_setspecific(*ppppplVar9,pppplVar12);
  pppplVar14 = param_1[1];
  ppplVar16 = pppplVar14[2];
  pppplVar12 = (long ****)pppplVar14[1];
  if (-1 < (char)*(byte *)((long)pppplVar14 + 0x1f)) {
    ppplVar16 = (long ***)(ulong)*(byte *)((long)pppplVar14 + 0x1f);
    pppplVar12 = pppplVar14 + 1;
  }
  pppplVar1 = (long ****)((long)ppplVar16 + 4);
  if ((long ****)0x7ffffffffffffff6 < pppplVar1) {
    FUN_0040d740();
LAB_00651b4c:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x651b50);
    (*pcVar8)();
  }
  if (pppplVar1 < (long ****)0x17) {
    ppplStack_88 = (long ***)0x0;
    pppplStack_90 = (long ****)0x0;
    ppppplVar9 = &pppplStack_90;
    uStack_80 = (long)pppplVar1 << 0x38;
    if (ppplVar16 == (long ***)0x0) goto LAB_006518ac;
  }
  else {
    pdVar7 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pppplVar1 | 7) != (dword *)0x17) {
      pdVar7 = (dword *)((ulong)pppplVar1 | 7);
    }
    ppppplVar9 = (long *****)((long)pdVar7 + 1);
    __Znwm();
    uStack_80 = (ulong)((long)pdVar7 + 1) | 0x8000000000000000;
    pppplStack_90 = (long ****)ppppplVar9;
    ppplStack_88 = (long ***)pppplVar1;
  }
  _memmove(ppppplVar9,pppplVar12,ppplVar16);
LAB_006518ac:
  *(undefined4 *)((long)ppppplVar9 + (long)ppplVar16) = 0x6b72772d;
  *(undefined1 *)((undefined4 *)((long)ppppplVar9 + (long)ppplVar16) + 1) = 0;
  ppppplVar9 = (long *****)pppplStack_90;
  if (-1 < (long)uStack_80) {
    ppppplVar9 = &pppplStack_90;
  }
  _pthread_setname_np();
  if ((long)uStack_80 < 0) {
    ppppplVar9 = (long *****)pppplStack_90;
    __ZdlPv();
    bVar2 = *(byte *)(pppplVar14 + 0xd);
  }
  else {
    bVar2 = *(byte *)(pppplVar14 + 0xd);
  }
  if ((bVar2 & 1) == 0) {
    pppplVar12 = pppplVar14 + 8;
LAB_006519c0:
    do {
      do {
        ppplVar16 = *pppplVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppplVar12,0x10);
        if (bVar5) {
          *(byte *)pppplVar12 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while ((cVar4 != '\0') || (((ulong)ppplVar16 & 1) != 0));
      __ZNSt3__16chrono12steady_clock3nowEv();
      ppppplVar10 = (long *****)pppplVar14[4];
      ppppplVar3 = (long *****)pppplVar14[5];
      if (ppppplVar10 == ppppplVar3) {
        ppppplVar15 = ppppplVar9 + 0x3946be1c0;
      }
      else {
        ppppplVar15 = (long *****)*ppppplVar10;
        if ((long)ppppplVar15 <= (long)ppppplVar9) {
          FUN_00651418(ppppplVar10,ppppplVar3,
                       ((long)ppppplVar3 - (long)ppppplVar10 >> 3) * -0x3333333333333333);
          ppplVar16 = pppplVar14[5];
          pppplStack_90 = (long ****)ppplVar16[-5];
          ppppplVar9 = (long *****)ppplVar16[-1];
          if (ppppplVar9 == (long *****)0x0) {
            pppplStack_70 = (long ****)0x0;
          }
          else if (ppppplVar9 == (long *****)(ppplVar16 + -4)) {
            pppplStack_70 = &ppplStack_88;
            (*(code *)(*ppppplVar9)[3])(ppppplVar9,&ppplStack_88);
            ppplVar16 = pppplVar14[5];
            ppplVar11 = (long ***)ppplVar16[-1];
            if (ppplVar11 == ppplVar16 + -4) {
              lVar13 = 0x20;
            }
            else {
              if (ppplVar11 == (long ***)0x0) goto LAB_00651ae0;
              lVar13 = 0x28;
            }
            (**(code **)((long)*ppplVar11 + lVar13))();
          }
          else {
            ppplVar16[-1] = (long **)0x0;
            pppplStack_70 = (long ****)ppppplVar9;
          }
LAB_00651ae0:
          pppplVar14[5] = ppplVar16 + -5;
          *(undefined1 *)(pppplVar14 + 8) = 0;
          uStack_98 = 0;
          if ((long *****)pppplStack_70 == (long *****)0x0) {
            func_0x004686dc();
            goto LAB_00651b4c;
          }
          (*(code *)(*pppplStack_70)[6])(pppplStack_70,&uStack_98);
          __ZNSt13exception_ptrD1Ev(&uStack_98);
          ppppplVar9 = (long *****)pppplStack_70;
          if (pppplStack_70 == &ppplStack_88) {
            lVar13 = 0x20;
          }
          else {
            if ((long *****)pppplStack_70 == (long *****)0x0) goto LAB_006519c0;
            lVar13 = 0x28;
          }
          (**(code **)((long)*pppplStack_70 + lVar13))();
          goto LAB_006519c0;
        }
      }
      pppplVar14[0xb] = (long ***)ppppplVar15;
      *(undefined1 *)(pppplVar14 + 8) = 0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar6 = (long)ppppplVar15 - (long)ppppplVar10;
      ppppplVar9 = ppppplVar10;
      if (uVar6 != 0 && (long)ppppplVar10 <= (long)ppppplVar15) {
        ppppplVar9 = (long *****)(ulong)*(uint *)(pppplVar14 + 10);
        _semaphore_timedwait
                  (ppppplVar9,
                   (ulong)(uint)((int)(uVar6 / 1000) + (int)((uVar6 / 1000) / 1000000) * -1000000) *
                   0x3e800000000 | uVar6 / 1000000000 & 0xffffffff);
      }
    } while (*(char *)(pppplVar14 + 0xd) != '\x01');
  }
  ppppplVar10 = (long *****)pppplStack_a0;
  if ((long *****)pppplStack_a0 != (long *****)0x0) {
    pppplVar12 = (long ****)*pppplStack_a0;
    *pppplStack_a0 = (long ***)0x0;
    if (pppplVar12 != (long ****)0x0) {
      __ZNSt3__115__thread_structD1Ev();
      __ZdlPv();
    }
    __ZdlPv();
    ppppplVar9 = ppppplVar10;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    if ((long)uStack_80 < 0) {
      __ZdlPv(pppplStack_90);
    }
    FUN_00651bdc(&pppplStack_a0);
    __Unwind_Resume();
    pppplVar12 = *ppppplVar9;
    *ppppplVar9 = (long ****)0x0;
    if (pppplVar12 != (long ****)0x0) {
      ppplVar16 = *pppplVar12;
      *pppplVar12 = (long ***)0x0;
      if (ppplVar16 != (long ***)0x0) {
        __ZNSt3__115__thread_structD1Ev();
        __ZdlPv();
      }
      __ZdlPv(pppplVar12);
    }
    return ppppplVar9;
  }
  return (long *****)0x0;
}



/* Entry: 00651bdc; end: 00651c5f;  */

undefined8 * FUN_00651bdc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      __ZNSt3__115__thread_structD1Ev();
      __ZdlPv();
    }
    __ZdlPv(plVar2);
  }
  return param_1;
}



/* Entry: 00651c60; end: 00651c9b;  */

void FUN_00651c60(void)

{
  ___cxa_atexit(FUN_00650a60,0xb6c740,0);
  uRam0000000000b6c750 = 0;
  uRam0000000000b6c758 = 0;
  return;
}



/* Entry: 00651c9c; end: 00651d4f;  */

void FUN_00651c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  
  do {
    bVar3 = bRam0000000000b6c760;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb6c760,0x10);
    if (bVar2) {
      bRam0000000000b6c760 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while ((cVar1 != '\0') || ((bVar3 & 1) != 0));
  FUN_00650190(0xb6c770,param_1,param_3,&PTR_DAT_00a0d368);
  FUN_00650190(0xb6c7a8,param_2,param_3,&PTR_DAT_00a0d378);
  uRam0000000000b6c7e0 = 0xb6c770;
  bRam0000000000b6c760 = 0;
  return;
}


