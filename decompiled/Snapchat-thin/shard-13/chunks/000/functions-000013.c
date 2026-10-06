/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d1cd24; end: 109d1d197;  */

void FUN_109d1cd24(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  bool bVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long *plStack_90;
  byte bStack_88;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  lVar10 = puVar11[10];
  __ZNSt3__19to_stringEm(&pppuStack_80,*puVar11);
  uVar14 = uStack_78;
  ppppuVar4 = (undefined8 ****)pppuStack_80;
  if (-1 < (long)puStack_70) {
    uVar14 = (ulong)puStack_70 >> 0x38;
    ppppuVar4 = &pppuStack_80;
  }
  FUN_109d1b908(lVar10 + 0x118,ppppuVar4,uVar14);
  if ((long)puStack_70 < 0) {
    __ZdlPv(pppuStack_80);
  }
  (*(code *)puVar11[2])(puVar11 + 2);
  lVar1 = lVar10 + 0xf8;
  plVar2 = (long *)(lVar10 + 0xe0);
  ppuVar6 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  do {
    bStack_88 = 1;
    plVar9 = (long *)(lVar10 + 0x60);
    plStack_90 = (long *)(lVar10 + 0x60);
    __ZNSt3__15mutex4lockEv();
    *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + 1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    plVar13 = plVar9 + *(long *)(lVar10 + 0x28) * 0x1e848;
    do {
      lVar8 = *(long *)(lVar10 + 0x58);
      if (lVar8 != 0) goto LAB_109d1ced8;
      if ((*(byte *)(lVar10 + 0xd0) & 1) != 0) goto LAB_109d1ced0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      if ((long)plVar13 <= (long)plVar9) break;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar14 = (long)plVar13 - (long)plVar9;
      if (0 < (long)uVar14) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        __ZNSt3__16chrono12system_clock3nowEv();
        if (plVar9 == (long *)0x0) {
          lVar8 = 0;
LAB_109d1ce9c:
          lVar8 = lVar8 + uVar14;
        }
        else {
          if ((long)plVar9 < 1) {
            if ((long *)0xffdf3b645a1cac08 < plVar9) goto LAB_109d1ce84;
            lVar8 = -0x8000000000000000;
            goto LAB_109d1ce9c;
          }
          if (plVar9 < (long *)0x20c49ba5e353f8) {
LAB_109d1ce84:
            lVar8 = (long)plVar9 * 1000;
          }
          else {
            lVar8 = 0x7fffffffffffffff;
          }
          if (lVar8 <= (long)(uVar14 ^ 0x7fffffffffffffff)) goto LAB_109d1ce9c;
          lVar8 = 0x7fffffffffffffff;
        }
        plVar9 = (long *)(lVar10 + 0xa0);
        __ZNSt3__118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE
                  (plVar9,&plStack_90,lVar8);
        __ZNSt3__16chrono12steady_clock3nowEv();
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
    } while ((long)plVar9 < (long)plVar13);
    lVar8 = *(long *)(lVar10 + 0x58);
    if (lVar8 == 0) {
      if ((*(byte *)(lVar10 + 0xd0) & 1) == 0) {
        if (*(long *)(lVar10 + 0x110) != lVar1) {
          FUN_109d1bfe0(*(long *)(lVar10 + 0x110) + 0x10);
          plVar9 = *(long **)(lVar10 + 0x110);
          lVar8 = *plVar9;
          plVar13 = (long *)plVar9[1];
          *(long **)(lVar8 + 8) = plVar13;
          *plVar13 = lVar8;
          *(long *)(lVar10 + 0x108) = *(long *)(lVar10 + 0x108) + -1;
          FUN_109d1bf84(plVar9 + 2);
          __ZdlPv(plVar9);
        }
        lVar15 = *(long *)(lVar10 + 0x100);
        _pthread_self();
        lVar8 = lVar15;
        for (; lVar15 != lVar1; lVar15 = *(long *)(lVar15 + 8)) {
          uVar7 = *(undefined8 *)(lVar15 + 0x18);
          _pthread_equal(uVar7,plVar9);
          lVar8 = lVar15;
          if ((int)uVar7 != 0) break;
          lVar8 = lVar1;
        }
        *(long *)(lVar10 + 0x110) = lVar8;
        do {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = *plVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      else {
LAB_109d1ced0:
        lVar8 = *(long *)(lVar10 + 0x58);
        if (lVar8 != 0) goto LAB_109d1ced8;
        do {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = *plVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bVar12 = false;
      *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + -1;
    }
    else {
LAB_109d1ced8:
      uVar14 = *(ulong *)(lVar10 + 0x50);
      plVar9 = (long *)(*(long *)(*(long *)(lVar10 + 0x38) + (uVar14 / 0xaa) * 8) +
                       (uVar14 % 0xaa) * 0x18);
      uStack_78 = plVar9[1];
      pppuStack_80 = (undefined8 ***)*plVar9;
      puStack_70 = (undefined *)plVar9[2];
      *(ulong *)(lVar10 + 0x50) = uVar14 + 1;
      *(long *)(lVar10 + 0x58) = lVar8 + -1;
      func_0x000109d19a1c(lVar10 + 0x30,1);
      *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + -1;
      if ((bStack_88 & 1) == 0) {
        __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f406df1);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109d1d078);
        (*pcVar5)();
      }
      __ZNSt3__15mutex6unlockEv(plStack_90);
      bStack_88 = 0;
      *ppuVar6 = puStack_70;
      FUN_109d1aecc(&pppuStack_80);
      bVar12 = true;
    }
    if (bStack_88 == 1) {
      __ZNSt3__15mutex6unlockEv(plStack_90);
    }
    if (!bVar12) {
      if (*(char *)(*(long *)(lVar10 + 0x188) + 8) == '\x01') {
        (**(code **)(lVar10 + 0x180))(lVar10 + 0x180);
      }
      return;
    }
  } while( true );
}



/* Entry: 109d1d198; end: 109d1d1d7;  */

void FUN_109d1d198(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109d1d1d8; end: 109d1d1ef;  */

void FUN_109d1d1d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 109d1d1f0; end: 109d1d267;  */

void FUN_109d1d1f0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x1d8;
  __Znwm();
  FUN_109d1d268();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109d1d268; end: 109d1d2bb;  */

undefined8 *
FUN_109d1d268(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b3eee8;
  FUN_109d1c3ac(param_1 + 3,param_2,*param_3,*param_4,*param_5);
  return param_1;
}



/* Entry: 109d1d2bc; end: 109d1d2cb;  */

void FUN_109d1d2bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3eee8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d1d2cc; end: 109d1d2eb;  */

void FUN_109d1d2cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3eee8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1d2ec; end: 109d1d2f7;  */

long FUN_109d1d2ec(long param_1)

{
  long lVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0xe8) = 1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x78);
  __ZNSt3__118condition_variable10notify_allEv(param_1 + 0xb8);
  for (lVar1 = *(long *)(param_1 + 0x118); lVar1 != param_1 + 0x110; lVar1 = *(long *)(lVar1 + 8)) {
    FUN_109d1bfe0(lVar1 + 0x10);
  }
  (*(code *)**(undefined8 **)(param_1 + 0x1a0))(param_1 + 0x1a0);
  (*(code *)**(undefined8 **)(param_1 + 0x160))(param_1 + 0x160);
  if (*(char *)(param_1 + 0x157) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x140));
  }
  FUN_109d1cc50(param_1 + 0x110);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x108);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x78);
  FUN_109d19938(param_1 + 0x48);
  return param_1 + 0x18;
}



/* Entry: 109d1d2f8; end: 109d1d353;  */

void FUN_109d1d2f8(uint *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_2;
  _dispatch_get_global_queue(uVar1,0);
  if (uVar1 != 0) {
    _dispatch_retain(uVar1);
    _dispatch_retain(uVar1);
    _dispatch_release(uVar1);
  }
  *param_1 = param_2;
  param_1[1] = 0;
  *(ulong *)(param_1 + 2) = uVar1;
  return;
}



/* Entry: 109d1d354; end: 109d1d56f;  */

undefined8 FUN_109d1d354(void)

{
  int iVar1;
  
  if ((bRam0000000113833528 & 1) == 0) {
    iVar1 = 0x13833528;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_109d1d2f8(0x113833518,0x21);
      ___cxa_atexit(0x109d1d3d0,0x113833518,0x100000000);
      ___cxa_guard_release(0x113833528);
    }
  }
  return 0x113833518;
}



/* Entry: 109d1d570; end: 109d1d797;  */

void FUN_109d1d570(undefined4 *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _dispatch_queue_attr_make_with_qos_class(0);
  _dispatch_queue_create(param_2,uVar1);
  *param_1 = param_3;
  param_1[1] = param_4;
  *(long *)(param_1 + 2) = param_2;
  if (param_2 != 0) {
    _dispatch_retain();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_release_11034c110)(param_2);
    return;
  }
  return;
}



/* Entry: 109d1d798; end: 109d1d7db;  */

void FUN_109d1d798(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000109d1d7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x38) + 0x10))(param_1 + 0x38);
  return;
}



/* Entry: 109d1d7dc; end: 109d1d87f;  */

long FUN_109d1d7dc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    _dispatch_release();
  }
  return param_1;
}



/* Entry: 109d1d880; end: 109d1d8df;  */

void FUN_109d1d880(long param_1,undefined8 *param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_109d1d8e0;
  puStack_30 = &UNK_110ad7730;
  uStack_20 = param_2[1];
  uStack_28 = *param_2;
  uStack_18 = param_2[2];
  func_0x000107c27d8c(*(undefined8 *)(param_1 + 0x18),&puStack_48);
  return;
}



/* Entry: 109d1d8e0; end: 109d1d98f;  */

void FUN_109d1d8e0(long param_1)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  ppuVar1 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  puVar2 = *ppuVar1;
  *ppuVar1 = extraout_x8;
  FUN_109d1aecc(&uStack_40);
  *ppuVar1 = puVar2;
  return;
}



/* Entry: 109d1d990; end: 109d1d9e7;  */

void FUN_109d1d990(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  __Znwm();
  FUN_109d1d9e8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109d1d9e8; end: 109d1da3f;  */

undefined8 * FUN_109d1d9e8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110b3efe8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110b3ef38;
  param_1[4] = param_2[1];
  param_1[5] = *param_2;
  lVar1 = param_2[1];
  param_1[6] = lVar1;
  if (lVar1 != 0) {
    _dispatch_retain();
  }
  return param_1;
}



/* Entry: 109d1da40; end: 109d1da4f;  */

void FUN_109d1da40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3efe8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d1da50; end: 109d1da6f;  */

void FUN_109d1da50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3efe8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1da70; end: 109d1da93;  */

void FUN_109d1da70(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_release_11034c110)();
    return;
  }
  return;
}



/* Entry: 109d1da94; end: 109d1dab3;  */

void FUN_109d1da94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b3f038;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1dab4; end: 109d1dacb;  */

void FUN_109d1dab4(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_release_11034c110)();
    return;
  }
  return;
}



/* Entry: 109d1dacc; end: 109d1db0f;  */

void FUN_109d1dacc(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  puVar2 = *ppuVar1;
  *ppuVar1 = *(undefined **)(param_2 + 0x10);
  FUN_109d1aecc(param_2);
  *ppuVar1 = puVar2;
  return;
}



/* Entry: 109d1db10; end: 109d1db7b;  */

undefined8 FUN_109d1db10(void)

{
  int iVar1;
  
  if ((bRam0000000113833588 & 1) == 0) {
    iVar1 = 0x13833588;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_109d1db7c();
      ___cxa_atexit(FUN_109d1dc18,0x113833578,0x100000000);
      ___cxa_guard_release(0x113833588);
    }
  }
  return 0x113833578;
}



/* Entry: 109d1db7c; end: 109d1dc17;  */

void FUN_109d1db7c(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar3 = (long *)0x20;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_DAT_110b3f0e8;
  *(undefined4 *)(plVar3 + 3) = 0;
  ppuRam0000000113833578 = &PTR_PTR_1132fed50;
  plRam0000000113833580 = plVar3;
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
  if (lVar5 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
  return;
}



/* Entry: 109d1dc18; end: 109d1dc37;  */

long FUN_109d1dc18(long param_1)

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



/* Entry: 109d1dc38; end: 109d1dc5b;  */

void FUN_109d1dc38(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b3f0e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1dc5c; end: 109d1dc6f;  */

void FUN_109d1dc5c(void)

{
  return;
}



/* Entry: 109d1dc70; end: 109d1dd2f;  */

void FUN_109d1dc70(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined **appuStack_48 [3];
  undefined **appuStack_30 [2];
  
  if (param_3 == 0) {
    return;
  }
  __ZNSt13runtime_errorC2EPKc(appuStack_48,&UNK_10f5ac95f);
  appuStack_48[0] = &PTR_FUN_110b3eda8;
  __ZNSt13runtime_errorC2ERKS_(appuStack_30,appuStack_48);
  appuStack_30[0] = &PTR_FUN_110b3eda8;
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC2ERKS_();
  *puVar2 = &PTR_FUN_110b3eda8;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d1dcf0);
  (*pcVar1)();
}



/* Entry: 109d1dd30; end: 109d1dd33;  */

void FUN_109d1dd30(void)

{
  return;
}



/* Entry: 109d1dd34; end: 109d1dddb;  */

void FUN_109d1dd34(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  FUN_109d19860(param_1 + 0x98,param_2);
  lVar2 = *(long *)(param_1 + 0x90);
  *(long *)(param_1 + 0x90) = lVar2 + 1;
  uVar1 = *(long *)(param_1 + 0xb8) + (lVar2 - *(long *)(param_1 + 0x88));
  lVar2 = *(long *)(*(long *)(param_1 + 0xa0) + (uVar1 / 0xaa) * 8);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0xe8);
  lStack_30 = lVar2 + (uVar1 % 0xaa) * 0x18;
  lStack_28 = param_1;
  (**(code **)**(undefined8 **)(param_1 + 0xe0))(*(undefined8 **)(param_1 + 0xe0),&uStack_38);
  return;
}



/* Entry: 109d1dddc; end: 109d1df43;  */

undefined8 *
FUN_109d1dddc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4,
             undefined8 param_5,ulong param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar4 = *(undefined8 *)(*param_4 + 0x10);
  *param_1 = &PTR_FUN_110b3f198;
  param_1[1] = param_1;
  param_1[2] = uVar4;
  param_1[3] = 0x32aaaba7;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3cb0b1bb;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = *(undefined8 *)(*param_4 + 8);
  param_1[0x1d] = param_3;
  param_1[0x1e] = *param_4;
  param_1[0x1f] = &UNK_1053a6a3c;
  param_1[0x20] = &PTR_DAT_110ae9180;
  param_1[0x1f] = param_4[1];
  plVar5 = param_4 + 2;
  (**(code **)(*plVar5 + 0x10))(param_1 + 0x20,plVar5);
  param_4[1] = (long)&UNK_1053a6a3c;
  (**(code **)*plVar5)(plVar5);
  *plVar5 = (long)&PTR_DAT_110ae9180;
  uVar4 = *param_2;
  *param_2 = 0;
  param_1[0x27] = uVar4;
  if (0x7ffffffffffffff7 < param_6) {
    func_0x000104c4f6b8();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109d1df40);
    (*pcVar2)();
  }
  if (param_6 < 0x17) {
    puVar3 = param_1 + 0x28;
    *(char *)((long)param_1 + 0x157) = (char)param_6;
    if (param_6 == 0) goto LAB_109d1df18;
  }
  else {
    puVar1 = (undefined8 *)0x19;
    if ((param_6 | 7) != 0x17) {
      puVar1 = (undefined8 *)((param_6 | 7) + 1);
    }
    puVar3 = puVar1;
    __Znwm();
    param_1[0x29] = param_6;
    param_1[0x2a] = (ulong)puVar1 | 0x8000000000000000;
    param_1[0x28] = puVar3;
  }
  _memmove(puVar3,param_5,param_6);
LAB_109d1df18:
  *(undefined1 *)((long)puVar3 + param_6) = 0;
  return param_1;
}



/* Entry: 109d1df44; end: 109d1dfa3;  */

long FUN_109d1df44(long param_1)

{
  long *plVar1;
  
  FUN_109d1af14(param_1 + 0x18);
  if (*(char *)(param_1 + 0x157) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x140));
  }
  plVar1 = *(long **)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x0001092ba41c(param_1 + 0xf0);
  FUN_109d1dfbc(param_1 + 0x18);
  return param_1;
}



/* Entry: 109d1dfa4; end: 109d1dfa7;  */

long FUN_109d1dfa4(long param_1)

{
  long *plVar1;
  
  FUN_109d1af14(param_1 + 0x18);
  if (*(char *)(param_1 + 0x157) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x140));
  }
  plVar1 = *(long **)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x0001092ba41c(param_1 + 0xf0);
  FUN_109d1dfbc(param_1 + 0x18);
  return param_1;
}



/* Entry: 109d1dfa8; end: 109d1dfbb;  */

void FUN_109d1dfa8(void)

{
  FUN_109d1df44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1dfbc; end: 109d1dfef;  */

void FUN_109d1dfbc(long param_1)

{
  FUN_109d1af14();
  FUN_109d19938(param_1 + 0x80);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 109d1dff0; end: 109d1e11b;  */

long FUN_109d1dff0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  *(undefined1 *)(param_1 + 0x290) = 0;
  lVar2 = *(long *)(param_1 + 0x3a8);
  lVar1 = *(long *)(param_1 + 0x3a0);
  if (lVar2 != lVar1) {
    uVar3 = 0;
    do {
      pcStack_58 = FUN_109d1e154;
      uStack_50 = 0;
      lStack_48 = param_1;
      FUN_109d1e11c(param_1,&pcStack_58);
      uVar3 = uVar3 + 1;
      lVar2 = *(long *)(param_1 + 0x3a8);
      lVar1 = *(long *)(param_1 + 0x3a0);
    } while (uVar3 < (ulong)((lVar2 - lVar1 >> 3) * -0x5555555555555555));
  }
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
    FUN_109d1bfe0(lVar1);
  }
  FUN_109d1e69c(param_1 + 0x3a0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x398);
  __ZNSt3__15mutexD1Ev(param_1 + 0x358);
  (*(code *)**(undefined8 **)(param_1 + 800))(param_1 + 800);
  (*(code *)**(undefined8 **)(param_1 + 0x2e0))(param_1 + 0x2e0);
  if (*(char *)(param_1 + 0x2d7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x2c0));
  }
  if (*(char *)(param_1 + 0x2af) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x298));
  }
  lVar1 = *(long *)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = 0;
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x288))();
  }
  FUN_109d1e6f8(param_1 + 0x18);
  return param_1;
}



/* Entry: 109d1e11c; end: 109d1e153;  */

void FUN_109d1e11c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x18;
  FUN_109d1f428();
  if (iVar1 != 0) {
    FUN_109d1f3d4(*(undefined8 *)(param_1 + 0x280),1);
  }
  return;
}



/* Entry: 109d1e154; end: 109d1e17b;  */

void FUN_109d1e154(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340d720;
  (*(code *)PTR___tlv_bootstrap_11340d720)();
  *(undefined4 *)ppuVar1 = 4;
  return;
}



/* Entry: 109d1e17c; end: 109d1e1ab;  */

void FUN_109d1e17c(long param_1)

{
  FUN_109d1e69c(param_1 + 0x48);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 109d1e1ac; end: 109d1e1e3;  */

long * FUN_109d1e1ac(long *param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = param_1[0x4d];
  param_1[0x4d] = 0;
  if (lVar3 != 0) {
    (*(code *)param_1[0x4e])();
  }
  puVar4 = (undefined8 *)*param_1;
  puVar2 = puVar4;
  while (puVar4 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar2[1];
    if ((undefined8 *)puVar2[3] != (undefined8 *)0x0) {
      *(undefined8 *)puVar2[3] = 0;
    }
    (**(code **)*puVar2)(puVar2);
    _free(puVar2);
    puVar2 = puVar4 + -1;
  }
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    for (lVar5 = *(long *)(lVar3 + 0x10); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
      _free(lVar3);
      lVar3 = lVar5;
    }
  }
  lVar3 = param_1[5];
  while (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x338);
    pcVar1 = (char *)(lVar3 + 0x340);
    lVar3 = lVar5;
    if (*pcVar1 == '\x01') {
      _free();
    }
  }
  _free(param_1[3]);
  return param_1;
}



/* Entry: 109d1e1e4; end: 109d1e1e7;  */

long FUN_109d1e1e4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  *(undefined1 *)(param_1 + 0x290) = 0;
  lVar2 = *(long *)(param_1 + 0x3a8);
  lVar1 = *(long *)(param_1 + 0x3a0);
  if (lVar2 != lVar1) {
    uVar3 = 0;
    do {
      pcStack_58 = FUN_109d1e154;
      uStack_50 = 0;
      lStack_48 = param_1;
      FUN_109d1e11c(param_1,&pcStack_58);
      uVar3 = uVar3 + 1;
      lVar2 = *(long *)(param_1 + 0x3a8);
      lVar1 = *(long *)(param_1 + 0x3a0);
    } while (uVar3 < (ulong)((lVar2 - lVar1 >> 3) * -0x5555555555555555));
  }
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
    FUN_109d1bfe0(lVar1);
  }
  FUN_109d1e69c(param_1 + 0x3a0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x398);
  __ZNSt3__15mutexD1Ev(param_1 + 0x358);
  (*(code *)**(undefined8 **)(param_1 + 800))(param_1 + 800);
  (*(code *)**(undefined8 **)(param_1 + 0x2e0))(param_1 + 0x2e0);
  if (*(char *)(param_1 + 0x2d7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x2c0));
  }
  if (*(char *)(param_1 + 0x2af) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x298));
  }
  lVar1 = *(long *)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = 0;
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x288))();
  }
  FUN_109d1e6f8(param_1 + 0x18);
  return param_1;
}



/* Entry: 109d1e1e8; end: 109d1e1fb;  */

void FUN_109d1e1e8(void)

{
  FUN_109d1dff0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1e1fc; end: 109d1e64b;  */

undefined8 * FUN_109d1e1fc(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 auVar5 [4];
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  int *piStack_98;
  undefined1 auStack_8c [4];
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  long *plStack_68;
  
  param_1[1] = param_1;
  param_1[2] = param_1;
  *param_1 = &PTR_FUN_110b3f208;
  func_0x000109d1f14c(param_1 + 3,0xc0);
  puVar6 = (undefined8 *)0x10;
  _malloc();
  if (puVar6 == (undefined8 *)0x0) {
    param_1[0x50] = 0;
    param_1[0x51] = 0x109d1f120;
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  else {
    *puVar6 = 0;
    puVar3 = PTR__mach_task_self__11034c5c8;
    _semaphore_create(*(undefined4 *)PTR__mach_task_self__11034c5c8,puVar6 + 1,0,0);
    *(undefined4 *)((long)puVar6 + 0xc) = 10000;
    param_1[0x50] = puVar6;
    param_1[0x51] = 0x109d1f120;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 0;
    param_1[0x55] = 0;
    param_1[0x54] = 0;
    uVar8 = *param_2;
    param_1[0x57] = param_2[1];
    param_1[0x56] = uVar8;
    uVar8 = param_2[4];
    uVar14 = param_2[2];
    param_1[0x59] = param_2[3];
    param_1[0x58] = uVar14;
    param_1[0x5a] = uVar8;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    param_1[0x5b] = param_2[5];
    (**(code **)(param_2[6] + 0x10))(param_1 + 0x5c);
    param_1[99] = param_2[0xd];
    (**(code **)(param_2[0xe] + 0x10))(param_1 + 100,param_2 + 0xe);
    param_1[0x6b] = 0x32aaaba7;
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    param_1[0x6f] = 0;
    param_1[0x6e] = 0;
    param_1[0x71] = 0;
    param_1[0x70] = 0;
    param_1[0x73] = 0;
    param_1[0x72] = 0;
    param_1[0x75] = 0;
    param_1[0x74] = 0;
    param_1[0x76] = 0;
    if (param_3 != 0) {
      ppuVar7 = (undefined8 **)auStack_8c;
      _semaphore_create(*(undefined4 *)puVar3,ppuVar7,0,0);
      plVar1 = param_1 + 0x74;
      lVar10 = param_1[0x74];
      if ((ulong)((param_1[0x76] - lVar10 >> 3) * -0x5555555555555555) < param_3) {
        if (0xaaaaaaaaaaaaaaa < param_3) {
          FUN_109d1e7ac();
          goto LAB_109d1e594;
        }
        lVar12 = param_1[0x75];
        uVar11 = param_3;
        plStack_68 = plVar1;
        FUN_109d1e7c0();
        lVar10 = uVar11 + (lVar12 - lVar10);
        lVar2 = (long)ppuVar7 * 0x18;
        ppuVar7 = (undefined8 **)param_1[0x75];
        lVar12 = lVar10 + (param_1[0x74] - (long)ppuVar7);
        func_0x000109d1e804(param_1[0x74],ppuVar7,lVar12);
        uStack_88 = param_1[0x74];
        param_1[0x74] = lVar12;
        param_1[0x75] = lVar10;
        lStack_70 = param_1[0x76];
        param_1[0x76] = uVar11 + lVar2;
        uStack_80 = uStack_88;
        uStack_78 = uStack_88;
        func_0x000109d1e870(&uStack_88);
      }
      uVar13 = 0;
      uVar11 = param_1[0x75];
      do {
        puStack_a8 = param_1;
        uStack_a0 = uVar13;
        piStack_98 = (int *)auStack_8c;
        if (uVar11 < (ulong)param_1[0x76]) {
          ppuVar7 = &puStack_a8;
          FUN_109d1e8bc(uVar11,ppuVar7,param_1[0x57]);
          uVar11 = uVar11 + 0x18;
          param_1[0x75] = uVar11;
        }
        else {
          lVar10 = uVar11 - *plVar1;
          uVar11 = (lVar10 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar11) {
            FUN_109d1e7ac();
            goto LAB_109d1e594;
          }
          lVar12 = param_1[0x76] - *plVar1 >> 3;
          uVar9 = lVar12 * 0x5555555555555556;
          if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
            uVar9 = uVar11;
          }
          if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
            uVar9 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar9 == 0) {
            ppuVar7 = (undefined8 **)0x0;
            plStack_68 = plVar1;
          }
          else {
            plStack_68 = plVar1;
            FUN_109d1e7c0();
          }
          lVar10 = uVar9 + lVar10;
          lVar12 = uVar9 + (long)ppuVar7 * 0x18;
          uStack_88 = uVar9;
          uStack_80 = lVar10;
          uStack_78 = lVar10;
          lStack_70 = lVar12;
          FUN_109d1e8bc(lVar10,&puStack_a8,param_1[0x57]);
          uVar11 = lVar10 + 0x18;
          ppuVar7 = (undefined8 **)param_1[0x75];
          lVar10 = lVar10 + (param_1[0x74] - (long)ppuVar7);
          func_0x000109d1e804(param_1[0x74],ppuVar7,lVar10);
          uStack_88 = param_1[0x74];
          param_1[0x74] = lVar10;
          param_1[0x75] = uVar11;
          lStack_70 = param_1[0x76];
          param_1[0x76] = lVar12;
          uStack_80 = uStack_88;
          uStack_78 = uStack_88;
          func_0x000109d1e870(&uStack_88);
        }
        param_1[0x75] = uVar11;
        uVar13 = uVar13 + 1;
        if (param_3 == uVar13) {
          uVar11 = 0;
          do {
            do {
              auVar5 = auStack_8c;
              _semaphore_wait();
            } while (auVar5 == (undefined1  [4])0xe);
            uVar11 = uVar11 + 1;
          } while (uVar11 != param_3);
          FUN_109d1b6f4(auStack_8c);
          return param_1;
        }
      } while( true );
    }
    puVar6 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt11logic_errorC2EPKc();
    *puVar6 = &PTR_FUN_110b3ee60;
    ___cxa_throw(puVar6,&PTR_DAT_110b3ee20,FUN_109d1c6a8);
  }
LAB_109d1e594:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109d1e598);
  (*pcVar4)();
}



/* Entry: 109d1e64c; end: 109d1e69b;  */

void FUN_109d1e64c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0x290) & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x398) == 0) {
    FUN_109d18690();
  }
  else {
    param_1 = param_1 + 0x398;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(param_3,param_1);
  return;
}



/* Entry: 109d1e69c; end: 109d1e6f7;  */

void FUN_109d1e69c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x18;
        FUN_109d1bf84();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109d1e6f8; end: 109d1e7ab;  */

long * FUN_109d1e6f8(long *param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)*param_1;
  puVar2 = puVar4;
  while (puVar4 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar2[1];
    if ((undefined8 *)puVar2[3] != (undefined8 *)0x0) {
      *(undefined8 *)puVar2[3] = 0;
    }
    (**(code **)*puVar2)(puVar2);
    _free(puVar2);
    puVar2 = puVar4 + -1;
  }
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    for (lVar5 = *(long *)(lVar3 + 0x10); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
      _free(lVar3);
      lVar3 = lVar5;
    }
  }
  lVar3 = param_1[5];
  while (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x338);
    pcVar1 = (char *)(lVar3 + 0x340);
    lVar3 = lVar5;
    if (*pcVar1 == '\x01') {
      _free();
    }
  }
  _free(param_1[3]);
  return param_1;
}



/* Entry: 109d1e7ac; end: 109d1e7bf;  */

void FUN_109d1e7ac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar1) {
    func_0x000104c4f740();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar3 = *puVar2;
        *puVar2 = 0;
        *param_3 = uVar3;
        param_3[1] = puVar2[1];
        *(undefined1 *)(param_3 + 2) = *(undefined1 *)(puVar2 + 2);
        puVar2[1] = 0;
        *(undefined1 *)(puVar2 + 2) = 0;
        puVar2 = puVar2 + 3;
        param_3 = param_3 + 3;
      } while (puVar2 != param_2);
      do {
        FUN_109d1bf84();
        puVar1 = puVar1 + 3;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x18);
  return;
}



/* Entry: 109d1e7c0; end: 109d1e8bb;  */

void FUN_109d1e7c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < param_1) {
    func_0x000104c4f740();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar2 = *puVar1;
        *puVar1 = 0;
        *param_3 = uVar2;
        param_3[1] = puVar1[1];
        *(undefined1 *)(param_3 + 2) = *(undefined1 *)(puVar1 + 2);
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 0;
        puVar1 = puVar1 + 3;
        param_3 = param_3 + 3;
      } while (puVar1 != param_2);
      do {
        FUN_109d1bf84();
        param_1 = param_1 + 3;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x18);
  return;
}



/* Entry: 109d1e8bc; end: 109d1e967;  */

void FUN_109d1e8bc(undefined8 param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined8 *****pppppuVar8;
  bool bVar9;
  int iVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long *plVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  uint uVar20;
  int iVar21;
  undefined **ppuVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  int iVar26;
  long *plVar27;
  undefined8 ****ppppuStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_109d1e968;
  ppuStack_60 = &PTR_FUN_110b3f258;
  uStack_50 = param_2[1];
  uStack_58 = *param_2;
  uStack_48 = param_2[2];
  FUN_109d1bad4(param_1,&pcStack_68);
  pppuVar11 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  ppuVar22 = pppuVar11[2];
  ppuVar12 = &PTR___tlv_bootstrap_11340d720;
  (*(code *)PTR___tlv_bootstrap_11340d720)();
  *(undefined4 *)ppuVar12 = 1;
  __ZNSt3__19to_stringEm(&ppppuStack_e8,pppuVar11[3]);
  uVar3 = uStack_e0;
  pppppuVar8 = (undefined8 *****)ppppuStack_e8;
  if (-1 < (long)puStack_d8) {
    uVar3 = (ulong)puStack_d8 >> 0x38;
    pppppuVar8 = &ppppuStack_e8;
  }
  FUN_109d1b908(ppuVar22 + 0x56,pppppuVar8,uVar3);
  if ((long)puStack_d8 < 0) {
    __ZdlPv(ppppuStack_e8);
  }
  *(undefined4 *)ppuVar12 = 2;
  puVar1 = (uint *)((long)ppuVar22 + 0x274);
  do {
    uVar5 = *puVar1;
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar5 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  _semaphore_signal(*(undefined4 *)pppuVar11[4]);
  ppuVar2 = ppuVar22 + 0x4f;
  ppuVar13 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  plVar25 = (long *)0x0;
  iVar21 = 0;
  plVar27 = (long *)0x0;
  iVar16 = -1;
LAB_109d1ea40:
  if (*(int *)ppuVar12 != 2) {
    if ((*(int *)ppuVar12 == 4) && (*(undefined4 *)ppuVar12 = 5, ppuVar22[100][8] == '\x01')) {
      (*(code *)ppuVar22[99])(ppuVar22 + 99);
    }
    *(undefined4 *)ppuVar12 = 6;
    return;
  }
  ppppuStack_e8 = (undefined8 *****)0x0;
  uStack_e0 = 0;
  puStack_d8 = (undefined *)0x0;
LAB_109d1ea58:
  plVar24 = (long *)ppuVar22[0x50];
  lVar18 = *plVar24;
  while (iVar26 = iVar16, 0 < lVar18) {
    lVar17 = *plVar24;
    if (lVar17 == lVar18) {
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar9) {
        *plVar24 = lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      lVar18 = lVar17;
      if (cVar6 == '\0') goto LAB_109d1eba0;
    }
    else {
      ClearExclusiveLocal();
      lVar18 = lVar17;
    }
  }
  uVar15 = *(uint *)((long)plVar24 + 0xc);
  if (0 < (int)*(uint *)((long)plVar24 + 0xc)) {
    do {
      lVar18 = *plVar24;
      if (0 < lVar18) {
        while (*plVar24 == lVar18) {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar9) {
            *plVar24 = lVar18 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_109d1eba0;
        }
        ClearExclusiveLocal();
      }
      bVar9 = 1 < uVar15;
      uVar15 = uVar15 - 1;
    } while (bVar9);
  }
  do {
    lVar18 = *plVar24;
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar9) {
      *plVar24 = lVar18 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (lVar18 < 1) {
    iVar10 = (int)plVar24[1];
    _semaphore_wait();
    while (iVar10 != 0) {
      while (lVar18 = *plVar24, lVar18 < 0) {
        while (*plVar24 == lVar18) {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar9) {
            *plVar24 = lVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_109d1ea58;
        }
        ClearExclusiveLocal();
      }
      iVar10 = (int)plVar24[1];
      _semaphore_timedwait(iVar10,0);
    }
  }
LAB_109d1eba0:
  if (plVar25 == (long *)0x0) goto LAB_109d1ebcc;
  iVar16 = iVar26;
  if (iVar26 != *(int *)ppuVar2) {
    puVar19 = ppuVar22[3];
    bVar9 = puVar19 != (undefined *)0x0;
    uVar15 = *(uint *)(ppuVar22 + 4);
    iVar16 = *(int *)(ppuVar22 + 0x4f);
    goto LAB_109d1ec2c;
  }
  goto LAB_109d1ec7c;
LAB_109d1ebcc:
  puVar19 = ppuVar22[3];
  if (puVar19 != (undefined *)0x0) {
    uVar15 = *(uint *)(ppuVar22 + 4);
    iVar16 = *(int *)(ppuVar22 + 0x4f);
    uVar20 = 0;
    if (uVar15 != 0) {
      uVar20 = uVar5 / uVar15;
    }
    plVar25 = (long *)(puVar19 + 8);
    iVar21 = uVar15 + ~(uVar5 - uVar20 * uVar15);
    plVar27 = plVar25;
    if (iVar21 == 0) {
      bVar9 = true;
    }
    else {
      do {
        lVar17 = *plVar27;
        lVar18 = 0;
        if (lVar17 != 0) {
          lVar18 = lVar17 + -8;
        }
        plVar27 = plVar25;
        if (lVar17 != 0) {
          plVar27 = (long *)(lVar18 + 8);
        }
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      bVar9 = true;
      plVar25 = plVar27;
    }
LAB_109d1ec2c:
    uVar20 = iVar16 - iVar26;
    uVar7 = 0;
    if (uVar15 != 0) {
      uVar7 = uVar20 / uVar15;
    }
    if (uVar15 <= uVar20) {
      uVar20 = uVar20 - uVar7 * uVar15;
    }
    if (uVar20 != 0) {
      plVar27 = (long *)(puVar19 + 8);
      if (!bVar9) {
        plVar27 = (long *)0x0;
      }
      do {
        lVar17 = *plVar25;
        lVar18 = 0;
        if (lVar17 != 0) {
          lVar18 = lVar17 + -8;
        }
        plVar25 = plVar27;
        if (lVar17 != 0) {
          plVar25 = (long *)(lVar18 + 8);
        }
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    iVar21 = 0;
    plVar27 = plVar25;
LAB_109d1ec7c:
    plVar24 = plVar27 + -1;
    if ((char)plVar27[8] == '\x01') {
      plVar23 = plVar24;
      FUN_109d1ee3c();
      if (((ulong)plVar23 & 1) != 0) goto LAB_109d1ec9c;
    }
    else {
      plVar23 = plVar24;
      FUN_109d1ef3c(plVar24,&ppppuStack_e8);
      if ((int)plVar23 != 0) goto LAB_109d1ec9c;
    }
    plVar23 = (long *)ppuVar22[3];
    lVar18 = *plVar27;
    while( true ) {
      plVar4 = plVar23;
      if (lVar18 != 0) {
        plVar4 = (long *)(lVar18 + -8);
      }
      iVar26 = iVar16;
      if (plVar4 == plVar24) break;
      if ((char)plVar4[9] == '\x01') {
        plVar14 = plVar4;
        FUN_109d1ee3c();
        if (((ulong)plVar14 & 1) != 0) {
LAB_109d1ecc0:
          plVar27 = plVar4 + 1;
          iVar21 = 1;
          goto LAB_109d1ecc8;
        }
      }
      else {
        plVar14 = plVar4;
        FUN_109d1ef3c(plVar4,&ppppuStack_e8);
        if ((int)plVar14 != 0) goto LAB_109d1ecc0;
      }
      lVar18 = plVar4[1];
    }
  }
  goto LAB_109d1eba0;
LAB_109d1ec9c:
  iVar21 = iVar21 + 1;
  if (iVar21 == 0x100) {
    do {
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar9) {
        *(int *)ppuVar2 = *(int *)ppuVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    iVar21 = 0x100;
  }
LAB_109d1ecc8:
  *ppuVar13 = puStack_d8;
  FUN_109d1aecc(&ppppuStack_e8);
  goto LAB_109d1ea40;
}



/* Entry: 109d1e968; end: 109d1eddb;  */

void FUN_109d1e968(long param_1)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined8 *****pppppuVar8;
  bool bVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long *plVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  int iVar25;
  long *plVar26;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  lVar21 = *(long *)(param_1 + 0x10);
  ppuVar11 = &PTR___tlv_bootstrap_11340d720;
  (*(code *)PTR___tlv_bootstrap_11340d720)();
  *(undefined4 *)ppuVar11 = 1;
  __ZNSt3__19to_stringEm(&ppppuStack_78,*(undefined8 *)(param_1 + 0x18));
  uVar3 = uStack_70;
  pppppuVar8 = (undefined8 *****)ppppuStack_78;
  if (-1 < (long)puStack_68) {
    uVar3 = (ulong)puStack_68 >> 0x38;
    pppppuVar8 = &ppppuStack_78;
  }
  FUN_109d1b908(lVar21 + 0x2b0,pppppuVar8,uVar3);
  if ((long)puStack_68 < 0) {
    __ZdlPv(ppppuStack_78);
  }
  *(undefined4 *)ppuVar11 = 2;
  puVar1 = (uint *)(lVar21 + 0x274);
  do {
    uVar5 = *puVar1;
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar5 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  _semaphore_signal(**(undefined4 **)(param_1 + 0x20));
  piVar2 = (int *)(lVar21 + 0x278);
  ppuVar12 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  plVar24 = (long *)0x0;
  iVar19 = 0;
  plVar26 = (long *)0x0;
  iVar15 = -1;
LAB_109d1ea40:
  if (*(int *)ppuVar11 != 2) {
    if ((*(int *)ppuVar11 == 4) &&
       (*(undefined4 *)ppuVar11 = 5, *(char *)(*(long *)(lVar21 + 800) + 8) == '\x01')) {
      (**(code **)(lVar21 + 0x318))(lVar21 + 0x318);
    }
    *(undefined4 *)ppuVar11 = 6;
    return;
  }
  ppppuStack_78 = (undefined8 *****)0x0;
  uStack_70 = 0;
  puStack_68 = (undefined *)0x0;
LAB_109d1ea58:
  plVar23 = *(long **)(lVar21 + 0x280);
  lVar17 = *plVar23;
  while (iVar25 = iVar15, 0 < lVar17) {
    lVar16 = *plVar23;
    if (lVar16 == lVar17) {
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar9) {
        *plVar23 = lVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      lVar17 = lVar16;
      if (cVar6 == '\0') goto LAB_109d1eba0;
    }
    else {
      ClearExclusiveLocal();
      lVar17 = lVar16;
    }
  }
  uVar14 = *(uint *)((long)plVar23 + 0xc);
  if (0 < (int)*(uint *)((long)plVar23 + 0xc)) {
    do {
      lVar17 = *plVar23;
      if (0 < lVar17) {
        while (*plVar23 == lVar17) {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar9) {
            *plVar23 = lVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_109d1eba0;
        }
        ClearExclusiveLocal();
      }
      bVar9 = 1 < uVar14;
      uVar14 = uVar14 - 1;
    } while (bVar9);
  }
  do {
    lVar17 = *plVar23;
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar9) {
      *plVar23 = lVar17 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (lVar17 < 1) {
    iVar10 = (int)plVar23[1];
    _semaphore_wait();
    while (iVar10 != 0) {
      while (lVar17 = *plVar23, lVar17 < 0) {
        while (*plVar23 == lVar17) {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar9) {
            *plVar23 = lVar17 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_109d1ea58;
        }
        ClearExclusiveLocal();
      }
      iVar10 = (int)plVar23[1];
      _semaphore_timedwait(iVar10,0);
    }
  }
LAB_109d1eba0:
  if (plVar24 == (long *)0x0) goto LAB_109d1ebcc;
  iVar15 = iVar25;
  if (iVar25 != *piVar2) {
    lVar17 = *(long *)(lVar21 + 0x18);
    bVar9 = lVar17 != 0;
    uVar14 = *(uint *)(lVar21 + 0x20);
    iVar15 = *(int *)(lVar21 + 0x278);
    goto LAB_109d1ec2c;
  }
  goto LAB_109d1ec7c;
LAB_109d1ebcc:
  lVar17 = *(long *)(lVar21 + 0x18);
  if (lVar17 != 0) {
    uVar14 = *(uint *)(lVar21 + 0x20);
    iVar15 = *(int *)(lVar21 + 0x278);
    uVar18 = 0;
    if (uVar14 != 0) {
      uVar18 = uVar5 / uVar14;
    }
    plVar24 = (long *)(lVar17 + 8);
    iVar19 = uVar14 + ~(uVar5 - uVar18 * uVar14);
    plVar26 = plVar24;
    if (iVar19 == 0) {
      bVar9 = true;
    }
    else {
      do {
        lVar20 = *plVar26;
        lVar16 = 0;
        if (lVar20 != 0) {
          lVar16 = lVar20 + -8;
        }
        plVar26 = plVar24;
        if (lVar20 != 0) {
          plVar26 = (long *)(lVar16 + 8);
        }
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
      bVar9 = true;
      plVar24 = plVar26;
    }
LAB_109d1ec2c:
    uVar18 = iVar15 - iVar25;
    uVar7 = 0;
    if (uVar14 != 0) {
      uVar7 = uVar18 / uVar14;
    }
    if (uVar14 <= uVar18) {
      uVar18 = uVar18 - uVar7 * uVar14;
    }
    if (uVar18 != 0) {
      plVar26 = (long *)(lVar17 + 8);
      if (!bVar9) {
        plVar26 = (long *)0x0;
      }
      do {
        lVar16 = *plVar24;
        lVar17 = 0;
        if (lVar16 != 0) {
          lVar17 = lVar16 + -8;
        }
        plVar24 = plVar26;
        if (lVar16 != 0) {
          plVar24 = (long *)(lVar17 + 8);
        }
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    iVar19 = 0;
    plVar26 = plVar24;
LAB_109d1ec7c:
    plVar23 = plVar26 + -1;
    if ((char)plVar26[8] == '\x01') {
      plVar22 = plVar23;
      FUN_109d1ee3c();
      if (((ulong)plVar22 & 1) != 0) goto LAB_109d1ec9c;
    }
    else {
      plVar22 = plVar23;
      FUN_109d1ef3c(plVar23,&ppppuStack_78);
      if ((int)plVar22 != 0) goto LAB_109d1ec9c;
    }
    plVar22 = *(long **)(lVar21 + 0x18);
    lVar17 = *plVar26;
    while( true ) {
      plVar4 = plVar22;
      if (lVar17 != 0) {
        plVar4 = (long *)(lVar17 - 8);
      }
      iVar25 = iVar15;
      if (plVar4 == plVar23) break;
      if ((char)plVar4[9] == '\x01') {
        plVar13 = plVar4;
        FUN_109d1ee3c();
        if (((ulong)plVar13 & 1) != 0) {
LAB_109d1ecc0:
          plVar26 = plVar4 + 1;
          iVar19 = 1;
          goto LAB_109d1ecc8;
        }
      }
      else {
        plVar13 = plVar4;
        FUN_109d1ef3c(plVar4,&ppppuStack_78);
        if ((int)plVar13 != 0) goto LAB_109d1ecc0;
      }
      lVar17 = plVar4[1];
    }
  }
  goto LAB_109d1eba0;
LAB_109d1ec9c:
  iVar19 = iVar19 + 1;
  if (iVar19 == 0x100) {
    do {
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar9) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    iVar19 = 0x100;
  }
LAB_109d1ecc8:
  *ppuVar12 = puStack_68;
  FUN_109d1aecc(&ppppuStack_78);
  goto LAB_109d1ea40;
}



/* Entry: 109d1eddc; end: 109d1ee3b;  */

void FUN_109d1eddc(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340d720;
  (*(code *)PTR___tlv_bootstrap_11340d720)();
  *(undefined4 *)ppuVar1 = 3;
  __ZNSt3__15mutex4lockEv(param_1 + 0x358);
  if (*(long *)(param_1 + 0x398) == 0) {
    __ZNSt13exception_ptraSERKS_(param_1 + 0x398,param_2);
    *(undefined1 *)(param_1 + 0x290) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x358);
  return;
}



/* Entry: 109d1ee3c; end: 109d1ef3b;  */

undefined8 FUN_109d1ee3c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (0x8000000000000000 <
      (ulong)(*(long *)(param_1 + 0x30) - (*(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x20))))
  {
    plVar6 = (long *)(param_1 + 0x38);
    plVar1 = (long *)(param_1 + 0x30);
    DataMemoryBarrier(2,1);
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (0x8000000000000000 <
        (ulong)(lVar7 - (*(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x20)))) {
      puVar2 = (ulong *)(param_1 + 0x28);
      do {
        uVar5 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar6 = *(long **)(param_1 + 0x58);
      lVar9 = (uVar5 & 0xffffffffffffffe0) - *(long *)(plVar6[2] + plVar6[1] * 0x10);
      lVar7 = lVar9 + 0x1f;
      if (-1 < lVar9) {
        lVar7 = lVar9;
      }
      lVar7 = *(long *)(plVar6[2] + (plVar6[1] + (lVar7 >> 5) & *plVar6 - 1U) * 0x10 + 8);
      puVar8 = (undefined8 *)(lVar7 + (uVar5 & 0x1f) * 0x18);
      uVar11 = puVar8[1];
      uVar10 = *puVar8;
      param_2[2] = puVar8[2];
      param_2[1] = uVar11;
      *param_2 = uVar10;
      *(undefined1 *)(lVar7 + (uVar5 & 0x1f ^ 0x1f) + 0x310) = 1;
      return 1;
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return 0;
}



/* Entry: 109d1ef3c; end: 109d1f0fb;  */

undefined8 FUN_109d1ef3c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  bool bVar13;
  undefined8 uVar14;
  
  if ((ulong)(*(long *)(param_1 + 0x30) - (*(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x20))) <
      0x8000000000000001) {
    uVar6 = 0;
  }
  else {
    plVar11 = (long *)(param_1 + 0x38);
    plVar1 = (long *)(param_1 + 0x30);
    DataMemoryBarrier(2,1);
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((ulong)(lVar10 - (*(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x20))) <
        0x8000000000000001) {
      do {
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar13) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar6 = 0;
    }
    else {
      puVar2 = (ulong *)(param_1 + 0x28);
      do {
        uVar8 = *puVar2;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar13) {
          *puVar2 = uVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar11 = *(long **)(param_1 + 0x60);
      lVar7 = (uVar8 & 0xffffffffffffffe0) - **(long **)(plVar11[3] + plVar11[1] * 8);
      lVar10 = lVar7 + 0x1f;
      if (-1 < lVar7) {
        lVar10 = lVar7;
      }
      lVar7 = *(long *)(plVar11[3] + (plVar11[1] + (lVar10 >> 5) & *plVar11 - 1U) * 8);
      lVar10 = *(long *)(lVar7 + 8);
      puVar9 = (undefined8 *)(lVar10 + (uVar8 & 0x1f) * 0x18);
      uVar14 = puVar9[1];
      uVar6 = *puVar9;
      param_2[2] = puVar9[2];
      param_2[1] = uVar14;
      *param_2 = uVar6;
      plVar11 = (long *)(lVar10 + 0x308);
      do {
        lVar12 = *plVar11;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar13) {
          *plVar11 = lVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0x1f) {
        *(undefined8 *)(lVar7 + 8) = 0;
        if (*(char *)(lVar10 + 0x340) == '\x01') {
          _free();
        }
        else {
          plVar11 = (long *)(*(long *)(param_1 + 0x50) + 0x28);
          piVar3 = (int *)(lVar10 + 0x330);
          do {
            iVar4 = *piVar3;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
              *piVar3 = iVar4 + -0x80000000;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 != 0) {
            return 1;
          }
          lVar7 = *plVar11;
          do {
            *(long *)(lVar10 + 0x338) = lVar7;
            *(undefined4 *)(lVar10 + 0x330) = 1;
            do {
              lVar12 = *plVar11;
              if (lVar12 != lVar7) {
                bVar13 = false;
                ClearExclusiveLocal();
                goto LAB_109d1f0d8;
              }
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar13) {
                *plVar11 = lVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar13 = true;
LAB_109d1f0d8:
            if (bVar13) break;
            do {
              iVar4 = *piVar3;
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar13) {
                *piVar3 = iVar4 + 0x7fffffff;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar7 = lVar12;
          } while (iVar4 == 1);
        }
      }
      uVar6 = 1;
    }
  }
  return uVar6;
}



/* Entry: 109d1f0fc; end: 109d1f11f;  */

void FUN_109d1f0fc(void)

{
  return;
}



/* Entry: 109d1f120; end: 109d1f2b3;  */

void FUN_109d1f120(long param_1)

{
  if (param_1 != 0) {
    FUN_109d1f2b4(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 109d1f2b4; end: 109d1f2eb;  */

undefined4 * FUN_109d1f2b4(undefined4 *param_1)

{
  _semaphore_destroy(*(undefined4 *)PTR__mach_task_self__11034c5c8,*param_1);
  return param_1;
}



/* Entry: 109d1f2ec; end: 109d1f34b;  */

void FUN_109d1f2ec(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x3d0;
  __Znwm();
  FUN_109d1f34c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109d1f34c; end: 109d1f397;  */

undefined8 * FUN_109d1f34c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b3f280;
  FUN_109d1e1fc(param_1 + 3,param_2,*param_3);
  return param_1;
}



/* Entry: 109d1f398; end: 109d1f3a7;  */

void FUN_109d1f398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f280;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d1f3a8; end: 109d1f3c7;  */

void FUN_109d1f3a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f280;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1f3c8; end: 109d1f3d3;  */

long FUN_109d1f3c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = param_1 + 0x18;
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  lVar3 = *(long *)(param_1 + 0x3c0);
  lVar2 = *(long *)(param_1 + 0x3b8);
  if (lVar3 != lVar2) {
    uVar4 = 0;
    do {
      pcStack_58 = FUN_109d1e154;
      uStack_50 = 0;
      lStack_48 = lVar1;
      FUN_109d1e11c(lVar1,&pcStack_58);
      uVar4 = uVar4 + 1;
      lVar3 = *(long *)(param_1 + 0x3c0);
      lVar2 = *(long *)(param_1 + 0x3b8);
    } while (uVar4 < (ulong)((lVar3 - lVar2 >> 3) * -0x5555555555555555));
  }
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x18) {
    FUN_109d1bfe0(lVar2);
  }
  FUN_109d1e69c(param_1 + 0x3b8);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x3b0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x370);
  (*(code *)**(undefined8 **)(param_1 + 0x338))(param_1 + 0x338);
  (*(code *)**(undefined8 **)(param_1 + 0x2f8))(param_1 + 0x2f8);
  if (*(char *)(param_1 + 0x2ef) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x2d8));
  }
  if (*(char *)(param_1 + 0x2c7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x2b0));
  }
  lVar2 = *(long *)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x298) = 0;
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x2a0))();
  }
  FUN_109d1e6f8(param_1 + 0x30);
  return lVar1;
}



/* Entry: 109d1f3d4; end: 109d1f427;  */

void FUN_109d1f3d4(long *param_1,ulong param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  
  do {
    lVar5 = *param_1;
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = lVar5 + param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (param_2 + lVar5 != 0 && (long)(param_2 + lVar5) < 0 == SCARRY8(param_2,lVar5)) {
    param_2 = -lVar5;
  }
  bVar3 = true;
  bVar4 = false;
  if (0 < (long)param_2) {
    bVar4 = SBORROW4((int)param_2,1);
    bVar3 = (int)param_2 + -1 < 0;
  }
  if (bVar3 == bVar4) {
    do {
      do {
        iVar6 = (int)param_1[1];
        _semaphore_signal();
      } while (iVar6 != 0);
      iVar6 = (int)param_2;
      uVar2 = iVar6 - 1;
      param_2 = (ulong)uVar2;
    } while (uVar2 != 0 && 0 < iVar6);
  }
  return;
}



/* Entry: 109d1f428; end: 109d1f57f;  */

void FUN_109d1f428(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_109d1f580();
  if (param_1 == 0) {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x20);
  if ((uVar5 & 0x1f) == 0) {
    if (0x7ffffffffffffffe < (*(long *)(param_1 + 0x28) - uVar5) + 0x7fffffffffffffdf) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x60);
    if (plVar3 == (long *)0x0) {
      return;
    }
    uVar1 = *plVar3 - 1U & plVar3[1] + 1U;
    puVar6 = *(ulong **)(plVar3[3] + uVar1 * 8);
    if ((*puVar6 == 1) || (puVar6[1] == 0)) {
      *puVar6 = uVar5;
      plVar3[1] = uVar1;
    }
    else {
      lVar2 = param_1;
      func_0x000109d1fca4();
      if ((int)lVar2 == 0) {
        return;
      }
      plVar3 = *(long **)(param_1 + 0x60);
      uVar1 = *plVar3 - 1U & plVar3[1] + 1U;
      puVar6 = *(ulong **)(plVar3[3] + uVar1 * 8);
      *puVar6 = uVar5;
      plVar3[1] = uVar1;
    }
    uVar1 = *(ulong *)(param_1 + 0x50);
    FUN_109d1fff4();
    if (uVar1 == 0) {
      plVar3 = *(long **)(param_1 + 0x60);
      plVar3[1] = *plVar3 - 1U & plVar3[1] - 1U;
      puVar6[1] = 0;
      return;
    }
    *(undefined8 *)(uVar1 + 0x308) = 0;
    puVar6[1] = uVar1;
    *(ulong *)(param_1 + 0x40) = uVar1;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x40);
  }
  puVar4 = (undefined8 *)(uVar1 + (uVar5 & 0x1f) * 0x18);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  puVar4[2] = param_2[2];
  puVar4[1] = uVar8;
  *puVar4 = uVar7;
  *(ulong *)(param_1 + 0x20) = uVar5 + 1;
  return;
}



/* Entry: 109d1f580; end: 109d1f7f3;  */

void FUN_109d1f580(ulong param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  
  uVar4 = param_1;
  _pthread_self();
  uVar5 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
  uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
  uVar5 = uVar5 ^ uVar5 >> 0x21;
  puVar12 = *(ulong **)(param_1 + 0x30);
  for (puVar6 = puVar12; puVar6 != (ulong *)0x0; puVar6 = (ulong *)puVar6[2]) {
    uVar10 = uVar5;
    do {
      uVar10 = uVar10 & *puVar6 - 1;
      uVar11 = *(ulong *)(puVar6[1] + uVar10 * 0x10);
      if (uVar11 == uVar4) {
        param_1 = *(ulong *)(puVar6[1] + uVar10 * 0x10 + 8);
        if (puVar6 == puVar12) {
          return;
        }
        goto LAB_109d1f72c;
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != 0);
  }
  puVar6 = (ulong *)(param_1 + 0x38);
  do {
    uVar10 = *puVar6 + 1;
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar8) {
      *puVar6 = uVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pbVar1 = (byte *)(param_1 + 600);
  while( true ) {
    if (*puVar12 >> 1 <= uVar10) {
      do {
        bVar2 = *pbVar1;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar8) {
          *pbVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((bVar2 & 1) == 0) {
        puVar13 = *(ulong **)(param_1 + 0x30);
        puVar12 = puVar13;
        uVar11 = *puVar13;
        if (*puVar13 >> 1 <= uVar10) {
          do {
            uVar9 = uVar11;
            uVar11 = uVar9 << 1;
          } while ((uVar9 & 0x7fffffffffffffff) <= uVar10);
          puVar12 = (ulong *)(uVar9 << 5 | 0x1f);
          _malloc();
          if (puVar12 == (ulong *)0x0) {
            do {
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar8) {
                *puVar6 = *puVar6 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            *pbVar1 = 0;
            return;
          }
          *puVar12 = uVar11;
          puVar12[1] = (long)(puVar12 + 3) + ((ulong)(uint)-(int)(puVar12 + 3) & 7);
          if (uVar11 != 0) {
            lVar7 = 0;
            do {
              uVar9 = puVar12[1];
              *(undefined8 *)(uVar9 + lVar7) = 0;
              ((undefined8 *)(uVar9 + lVar7))[1] = 0;
              *(undefined8 *)(puVar12[1] + lVar7) = 0;
              lVar7 = lVar7 + 0x10;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar12[2] = (ulong)puVar13;
          *(ulong **)(param_1 + 0x30) = puVar12;
        }
        *pbVar1 = 0;
      }
    }
    if (uVar10 < (*puVar12 >> 1) + (*puVar12 >> 2)) break;
    puVar12 = *(ulong **)(param_1 + 0x30);
  }
  FUN_109d1f7f4(param_1,0);
  if (param_1 == 0) {
    do {
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar8) {
        *puVar6 = *puVar6 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return;
  }
  do {
    uVar10 = *puVar12 - 1 & uVar5;
    puVar6 = (ulong *)(puVar12[1] + uVar10 * 0x10);
    do {
      if (*puVar6 != 0) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_109d1f7a8;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar8) {
        *puVar6 = uVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
LAB_109d1f7a8:
    uVar5 = uVar10 + 1;
  } while (!bVar8);
LAB_109d1f7b0:
  *(ulong *)(puVar12[1] + uVar10 * 0x10 + 8) = param_1;
  return;
LAB_109d1f72c:
  do {
    uVar10 = *puVar12 - 1 & uVar5;
    puVar6 = (ulong *)(puVar12[1] + uVar10 * 0x10);
    do {
      if (*puVar6 != 0) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_109d1f75c;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar8) {
        *puVar6 = uVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
LAB_109d1f75c:
    uVar5 = uVar10 + 1;
  } while (!bVar8);
  goto LAB_109d1f7b0;
}



/* Entry: 109d1f7f4; end: 109d1f9f3;  */

undefined8 * FUN_109d1f7f4(long *param_1,uint param_2)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)*param_1;
  puVar5 = puVar8;
  while (puVar5 != (undefined8 *)0x0) {
    if (((*(byte *)(puVar8 + 2) & 1) != 0) && (*(byte *)(puVar8 + 9) == param_2)) {
      pcVar1 = (char *)(puVar8 + 2);
      while (*pcVar1 == '\x01') {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar4) {
          *pcVar1 = '\0';
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          return puVar8;
        }
      }
      ClearExclusiveLocal();
    }
    puVar5 = (undefined8 *)puVar8[1];
    puVar8 = puVar5 + -1;
  }
  if (param_2 == 0) {
    puVar8 = (undefined8 *)0x68;
    _malloc();
    if (puVar8 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *(undefined1 *)(puVar8 + 2) = 0;
    puVar8[4] = 0;
    puVar8[3] = 0;
    puVar8[6] = 0;
    puVar8[5] = 0;
    puVar8[8] = 0;
    puVar8[7] = 0;
    *(undefined1 *)(puVar8 + 9) = 0;
    *puVar8 = &PTR_FUN_110b3f340;
    puVar8[1] = 0;
    puVar8[10] = param_1;
    puVar8[0xb] = 0x20;
    puVar8[0xc] = 0;
    func_0x000109d1fca4(puVar8);
  }
  else {
    puVar8 = (undefined8 *)0x88;
    _malloc();
    if (puVar8 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    func_0x000109d1f958(puVar8,param_1);
  }
  plVar2 = param_1 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar7 = *param_1;
  lVar6 = 0;
  if (lVar7 != 0) {
    lVar6 = lVar7 + 8;
  }
  puVar8[1] = lVar6;
  lVar6 = *param_1;
  if (lVar6 == lVar7) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = (long)puVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      return puVar8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = lVar6 + 8;
    }
    puVar8[1] = lVar7;
    lVar7 = *param_1;
    if (lVar7 == lVar6) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *param_1 = (long)puVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
      bVar4 = cVar3 == '\0';
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    lVar6 = lVar7;
  } while (!bVar4);
  return puVar8;
}



/* Entry: 109d1f9f4; end: 109d1fac3;  */

bool FUN_109d1f9f4(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  uVar9 = *(ulong *)(param_1 + 0x68);
  *(ulong *)(param_1 + 0x68) = uVar9 << 1;
  plVar4 = (long *)(uVar9 * 0x20 + 0x27);
  _malloc();
  if (plVar4 == (long *)0x0) {
    *(ulong *)(param_1 + 0x68) = uVar9 & 0x7fffffffffffffff;
  }
  else {
    puVar1 = (undefined8 *)((long)(plVar4 + 4) + ((ulong)(uint)-(int)(plVar4 + 4) & 7));
    if (*(long *)(param_1 + 0x60) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      uVar2 = *(ulong *)(param_1 + 0x70);
      lVar6 = *(long *)(param_1 + 0x78);
      uVar7 = uVar2 - *(long *)(param_1 + 0x60) & uVar9 - 1;
      puVar8 = puVar1;
      do {
        puVar3 = (undefined8 *)(lVar6 + uVar7 * 0x10);
        uVar10 = *puVar3;
        lVar5 = lVar5 + 1;
        puVar8[1] = puVar3[1];
        *puVar8 = uVar10;
        uVar7 = uVar7 + 1 & uVar9 - 1;
        puVar8 = puVar8 + 2;
      } while (uVar7 != uVar2);
    }
    *plVar4 = uVar9 << 1;
    plVar4[1] = param_2 + -1;
    lVar6 = *(long *)(param_1 + 0x80);
    plVar4[2] = (long)puVar1;
    plVar4[3] = lVar6;
    *(long *)(param_1 + 0x70) = lVar5;
    *(undefined8 **)(param_1 + 0x78) = puVar1;
    *(long **)(param_1 + 0x80) = plVar4;
    *(long **)(param_1 + 0x58) = plVar4;
  }
  return plVar4 != (long *)0x0;
}



/* Entry: 109d1fac4; end: 109d1fac7;  */

/* WARNING: Removing unreachable block (ram,0x000109d1fc38) */

undefined8 * FUN_109d1fac4(undefined8 *param_1)

{
  byte *pbVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  *param_1 = &PTR_FUN_110b3f2d0;
  lVar7 = param_1[8];
  if (lVar7 != 0) {
    lVar8 = lVar7;
    if ((param_1[5] & 0x1f) != 0) {
      uVar12 = param_1[0xe] - param_1[0xc];
      do {
        uVar10 = uVar12 & param_1[0xd] - 1;
        uVar12 = uVar10 + 1;
      } while (0x8000000000000000 < (*(long *)(param_1[0xf] + uVar10 * 0x10) - param_1[5]) + 0x20U);
    }
    do {
      lVar8 = *(long *)(lVar8 + 0x300);
      if ((*(byte *)(lVar8 + 0x310) & 1) != 0) {
        lVar9 = 0;
        do {
          if (lVar9 == 0x1f) {
            DataMemoryBarrier(2,1);
            lVar7 = param_1[8];
            break;
          }
          pbVar1 = (byte *)(lVar8 + 0x311 + lVar9);
          lVar9 = lVar9 + 1;
        } while ((*pbVar1 & 1) != 0);
      }
    } while (lVar8 != lVar7);
    if (lVar8 != 0) {
      do {
        lVar8 = *(long *)(lVar7 + 0x300);
        if (*(char *)(lVar7 + 0x340) == '\x01') {
          _free();
        }
        else {
          plVar2 = (long *)(param_1[10] + 0x28);
          piVar3 = (int *)(lVar7 + 0x330);
          do {
            iVar4 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = iVar4 + -0x80000000;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 == 0) {
            lVar9 = *plVar2;
            do {
              *(long *)(lVar7 + 0x338) = lVar9;
              *(undefined4 *)(lVar7 + 0x330) = 1;
              while (lVar11 = *plVar2, lVar11 == lVar9) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *plVar2 = lVar7;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_109d1fc64;
              }
              ClearExclusiveLocal();
              do {
                iVar4 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = iVar4 + 0x7fffffff;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              lVar9 = lVar11;
            } while (iVar4 == 1);
          }
        }
LAB_109d1fc64:
        lVar7 = lVar8;
      } while (lVar8 != param_1[8]);
    }
  }
  lVar7 = param_1[0x10];
  while (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x18);
    _free();
  }
  return param_1;
}



/* Entry: 109d1fac8; end: 109d1fadb;  */

void FUN_109d1fac8(void)

{
  FUN_109d1fadc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1fadc; end: 109d1fdbb;  */

/* WARNING: Removing unreachable block (ram,0x000109d1fc38) */

undefined8 * FUN_109d1fadc(undefined8 *param_1)

{
  byte *pbVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  *param_1 = &PTR_FUN_110b3f2d0;
  lVar7 = param_1[8];
  if (lVar7 != 0) {
    lVar8 = lVar7;
    if ((param_1[5] & 0x1f) != 0) {
      uVar12 = param_1[0xe] - param_1[0xc];
      do {
        uVar10 = uVar12 & param_1[0xd] - 1;
        uVar12 = uVar10 + 1;
      } while (0x8000000000000000 < (*(long *)(param_1[0xf] + uVar10 * 0x10) - param_1[5]) + 0x20U);
    }
    do {
      lVar8 = *(long *)(lVar8 + 0x300);
      if ((*(byte *)(lVar8 + 0x310) & 1) != 0) {
        lVar9 = 0;
        do {
          if (lVar9 == 0x1f) {
            DataMemoryBarrier(2,1);
            lVar7 = param_1[8];
            break;
          }
          pbVar1 = (byte *)(lVar8 + 0x311 + lVar9);
          lVar9 = lVar9 + 1;
        } while ((*pbVar1 & 1) != 0);
      }
    } while (lVar8 != lVar7);
    if (lVar8 != 0) {
      do {
        lVar8 = *(long *)(lVar7 + 0x300);
        if (*(char *)(lVar7 + 0x340) == '\x01') {
          _free();
        }
        else {
          plVar2 = (long *)(param_1[10] + 0x28);
          piVar3 = (int *)(lVar7 + 0x330);
          do {
            iVar4 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = iVar4 + -0x80000000;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 == 0) {
            lVar9 = *plVar2;
            do {
              *(long *)(lVar7 + 0x338) = lVar9;
              *(undefined4 *)(lVar7 + 0x330) = 1;
              while (lVar11 = *plVar2, lVar11 == lVar9) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *plVar2 = lVar7;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_109d1fc64;
              }
              ClearExclusiveLocal();
              do {
                iVar4 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = iVar4 + 0x7fffffff;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              lVar9 = lVar11;
            } while (iVar4 == 1);
          }
        }
LAB_109d1fc64:
        lVar7 = lVar8;
      } while (lVar8 != param_1[8]);
    }
  }
  lVar7 = param_1[0x10];
  while (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x18);
    _free();
  }
  return param_1;
}



/* Entry: 109d1fdbc; end: 109d1fdbf;  */

/* WARNING: Removing unreachable block (ram,0x000109d1fe94) */

undefined8 * FUN_109d1fdbc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  *param_1 = &PTR_FUN_110b3f340;
  uVar9 = param_1[4];
  uVar10 = param_1[5];
  if (uVar10 != uVar9) {
    lVar4 = 0;
    uVar11 = uVar10;
    do {
      if ((lVar4 == 0) || ((uVar11 & 0x1f) == 0)) {
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x340) == '\x01') {
            _free();
          }
          else {
            plVar6 = (long *)(param_1[10] + 0x28);
            piVar1 = (int *)(lVar4 + 0x330);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar2 + -0x80000000;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 == 0) {
              lVar5 = *plVar6;
              do {
                *(long *)(lVar4 + 0x338) = lVar5;
                *(undefined4 *)(lVar4 + 0x330) = 1;
                while (lVar8 = *plVar6, lVar8 == lVar5) {
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar7) {
                    *plVar6 = lVar4;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_109d1fec0;
                }
                ClearExclusiveLocal();
                do {
                  iVar2 = *piVar1;
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar2 + 0x7fffffff;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                lVar5 = lVar8;
              } while (iVar2 == 1);
            }
          }
        }
LAB_109d1fec0:
        plVar6 = (long *)param_1[0xc];
        lVar5 = (uVar11 & 0xffffffffffffffe0) - **(long **)(plVar6[3] + plVar6[1] * 8);
        lVar4 = lVar5 + 0x1f;
        if (-1 < lVar5) {
          lVar4 = lVar5;
        }
        lVar4 = *(long *)(*(long *)(plVar6[3] + (plVar6[1] + (lVar4 >> 5) & *plVar6 - 1U) * 8) + 8);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar9);
  }
  lVar4 = param_1[8];
  if ((lVar4 != 0) && (uVar10 != uVar9 || (uVar9 & 0x1f) != 0)) {
    if (*(char *)(lVar4 + 0x340) == '\x01') {
      _free();
    }
    else {
      plVar6 = (long *)(param_1[10] + 0x28);
      piVar1 = (int *)(lVar4 + 0x330);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -0x80000000;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 0) {
        lVar5 = *plVar6;
        do {
          *(long *)(lVar4 + 0x338) = lVar5;
          *(undefined4 *)(lVar4 + 0x330) = 1;
          do {
            lVar8 = *plVar6;
            if (lVar8 != lVar5) {
              bVar7 = false;
              ClearExclusiveLocal();
              goto LAB_109d1ffa0;
            }
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar7) {
              *plVar6 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar7 = true;
LAB_109d1ffa0:
          if (bVar7) break;
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar2 + 0x7fffffff;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar5 = lVar8;
        } while (iVar2 == 1);
      }
    }
  }
  lVar4 = param_1[0xc];
  while (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x20);
    _free();
  }
  return param_1;
}



/* Entry: 109d1fdc0; end: 109d1fdd3;  */

void FUN_109d1fdc0(void)

{
  FUN_109d1fdd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1fdd4; end: 109d1fff3;  */

/* WARNING: Removing unreachable block (ram,0x000109d1fe94) */

undefined8 * FUN_109d1fdd4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  *param_1 = &PTR_FUN_110b3f340;
  uVar9 = param_1[4];
  uVar10 = param_1[5];
  if (uVar10 != uVar9) {
    lVar4 = 0;
    uVar11 = uVar10;
    do {
      if ((lVar4 == 0) || ((uVar11 & 0x1f) == 0)) {
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x340) == '\x01') {
            _free();
          }
          else {
            plVar6 = (long *)(param_1[10] + 0x28);
            piVar1 = (int *)(lVar4 + 0x330);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar2 + -0x80000000;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 == 0) {
              lVar5 = *plVar6;
              do {
                *(long *)(lVar4 + 0x338) = lVar5;
                *(undefined4 *)(lVar4 + 0x330) = 1;
                while (lVar8 = *plVar6, lVar8 == lVar5) {
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar7) {
                    *plVar6 = lVar4;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_109d1fec0;
                }
                ClearExclusiveLocal();
                do {
                  iVar2 = *piVar1;
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar2 + 0x7fffffff;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                lVar5 = lVar8;
              } while (iVar2 == 1);
            }
          }
        }
LAB_109d1fec0:
        plVar6 = (long *)param_1[0xc];
        lVar5 = (uVar11 & 0xffffffffffffffe0) - **(long **)(plVar6[3] + plVar6[1] * 8);
        lVar4 = lVar5 + 0x1f;
        if (-1 < lVar5) {
          lVar4 = lVar5;
        }
        lVar4 = *(long *)(*(long *)(plVar6[3] + (plVar6[1] + (lVar4 >> 5) & *plVar6 - 1U) * 8) + 8);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar9);
  }
  lVar4 = param_1[8];
  if ((lVar4 != 0) && (uVar10 != uVar9 || (uVar9 & 0x1f) != 0)) {
    if (*(char *)(lVar4 + 0x340) == '\x01') {
      _free();
    }
    else {
      plVar6 = (long *)(param_1[10] + 0x28);
      piVar1 = (int *)(lVar4 + 0x330);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -0x80000000;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 0) {
        lVar5 = *plVar6;
        do {
          *(long *)(lVar4 + 0x338) = lVar5;
          *(undefined4 *)(lVar4 + 0x330) = 1;
          do {
            lVar8 = *plVar6;
            if (lVar8 != lVar5) {
              bVar7 = false;
              ClearExclusiveLocal();
              goto LAB_109d1ffa0;
            }
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar7) {
              *plVar6 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar7 = true;
LAB_109d1ffa0:
          if (bVar7) break;
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar2 + 0x7fffffff;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar5 = lVar8;
        } while (iVar2 == 1);
      }
    }
  }
  lVar4 = param_1[0xc];
  while (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x20);
    _free();
  }
  return param_1;
}



/* Entry: 109d1fff4; end: 109d2018b;  */

/* WARNING: Removing unreachable block (ram,0x000109d20110) */

void FUN_109d1fff4(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (*(ulong *)(param_1 + 0x10) < *(ulong *)(param_1 + 0x20)) {
    puVar1 = (ulong *)(param_1 + 0x10);
    do {
      uVar8 = *puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar8 < *(ulong *)(param_1 + 0x20)) && (*(long *)(param_1 + 0x18) != 0)) {
      return;
    }
  }
  plVar2 = (long *)(param_1 + 0x28);
  lVar9 = *plVar2;
joined_r0x000109d20044:
  do {
    lVar7 = lVar9;
    if (lVar7 == 0) {
      lVar9 = 0x348;
      _malloc();
      if (lVar9 == 0) {
        return;
      }
      *(undefined8 *)(lVar9 + 0x338) = 0;
      *(undefined8 *)(lVar9 + 0x308) = 0;
      *(undefined8 *)(lVar9 + 0x300) = 0;
      *(undefined8 *)(lVar9 + 0x318) = 0;
      *(undefined8 *)(lVar9 + 0x310) = 0;
      *(undefined8 *)(lVar9 + 0x328) = 0;
      *(undefined8 *)(lVar9 + 800) = 0;
      *(undefined4 *)(lVar9 + 0x330) = 0;
      *(undefined1 *)(lVar9 + 0x340) = 1;
      return;
    }
    uVar4 = *(uint *)(lVar7 + 0x330);
    if ((uVar4 & 0x7fffffff) != 0) {
      puVar3 = (uint *)(lVar7 + 0x330);
      do {
        if (*puVar3 != uVar4) {
          ClearExclusiveLocal();
          goto LAB_109d200ac;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = uVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar10 = *(long *)(lVar7 + 0x338);
      while (lVar9 = *plVar2, lVar9 == lVar7) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = *puVar3 - 2;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          return;
        }
      }
      ClearExclusiveLocal();
      do {
        uVar4 = *puVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = uVar4 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar4 == 0x80000001) {
        lVar10 = *plVar2;
        do {
          *(long *)(lVar7 + 0x338) = lVar10;
          *(undefined4 *)(lVar7 + 0x330) = 1;
          while (lVar11 = *plVar2, lVar11 == lVar10) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto joined_r0x000109d20044;
          }
          ClearExclusiveLocal();
          do {
            uVar4 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar4 + 0x7fffffff;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          lVar10 = lVar11;
        } while (uVar4 == 1);
      }
      goto joined_r0x000109d20044;
    }
LAB_109d200ac:
    lVar9 = *plVar2;
  } while( true );
}



/* Entry: 109d2018c; end: 109d201a7;  */

void FUN_109d2018c(long param_1)

{
  FUN_109d1f428(param_1 + 0x18);
  return;
}



/* Entry: 109d201a8; end: 109d2020b;  */

undefined8 * FUN_109d201a8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b3f378;
  lVar1 = param_1[3];
  lVar2 = lVar1;
  while (lVar2 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    lVar1 = lVar2 + -8;
  }
  if (*(char *)((long)param_1 + 0x297) < '\0') {
    __ZdlPv(param_1[0x50]);
  }
  FUN_109d1e6f8(param_1 + 3);
  return param_1;
}



/* Entry: 109d2020c; end: 109d2020f;  */

undefined8 * FUN_109d2020c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b3f378;
  lVar1 = param_1[3];
  lVar2 = lVar1;
  while (lVar2 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    lVar1 = lVar2 + -8;
  }
  if (*(char *)((long)param_1 + 0x297) < '\0') {
    __ZdlPv(param_1[0x50]);
  }
  FUN_109d1e6f8(param_1 + 3);
  return param_1;
}



/* Entry: 109d20210; end: 109d20223;  */

void FUN_109d20210(void)

{
  FUN_109d201a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d20224; end: 109d202f3;  */

undefined8 * FUN_109d20224(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  param_1[1] = param_1;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b3f378;
  func_0x000109d1f14c(param_1 + 3,0x400);
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109d202e0);
    (*pcVar2)();
  }
  if (param_3 < 0x17) {
    puVar3 = param_1 + 0x50;
    *(char *)((long)param_1 + 0x297) = (char)param_3;
    if (param_3 == 0) goto LAB_109d202bc;
  }
  else {
    puVar1 = (undefined8 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar1 = (undefined8 *)((param_3 | 7) + 1);
    }
    puVar3 = puVar1;
    __Znwm();
    param_1[0x50] = puVar3;
    param_1[0x52] = (ulong)puVar1 | 0x8000000000000000;
    param_1[0x51] = param_3;
  }
  _memmove(puVar3,param_2,param_3);
LAB_109d202bc:
  *(undefined1 *)((long)puVar3 + param_3) = 0;
  return param_1;
}



/* Entry: 109d202f4; end: 109d2037b;  */

long FUN_109d202f4(undefined *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  lVar3 = 0;
  puVar4 = *ppuVar1;
  *ppuVar1 = param_1;
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_38 = (undefined *)0x0;
  while( true ) {
    puVar2 = param_1 + 0x18;
    FUN_109d203a8(puVar2,&uStack_48);
    if ((int)puVar2 == 0) break;
    *ppuVar1 = puStack_38;
    FUN_109d1aecc(&uStack_48);
    lVar3 = lVar3 + 1;
  }
  *ppuVar1 = puVar4;
  return lVar3;
}



/* Entry: 109d2037c; end: 109d203a7;  */

void FUN_109d2037c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_11;
  
  uStack_28 = param_1;
  uStack_20 = param_2;
  FUN_109d204bc(&uStack_11,&uStack_28);
  return;
}



/* Entry: 109d203a8; end: 109d204bb;  */

undefined8 FUN_109d203a8(ulong *param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar8 = 0;
    do {
      uVar6 = *(long *)(uVar3 + 0x20) - *(long *)(uVar3 + 0x28);
      if ((ulong)(*(long *)(uVar3 + 0x28) - *(long *)(uVar3 + 0x20)) < 0x8000000000000001) {
        uVar6 = 0;
      }
      bVar1 = uVar6 <= uVar4;
      uVar2 = uVar6;
      if (uVar6 <= uVar4) {
        uVar2 = uVar4;
      }
      if (uVar6 != 0) {
        uVar5 = uVar5 + 1;
        uVar4 = uVar2;
      }
      uVar2 = uVar3;
      if (uVar6 == 0 || bVar1) {
        uVar2 = uVar8;
      }
      lVar7 = *(long *)(uVar3 + 8);
      uVar3 = lVar7 - 8;
      if (lVar7 == 0) {
        uVar3 = 0;
      }
      uVar8 = uVar2;
    } while (uVar5 < 3 && lVar7 != 0);
    if (uVar5 != 0) {
      uVar3 = uVar2;
      if (*(char *)(uVar2 + 0x48) == '\x01') {
        FUN_109d1ee3c();
      }
      else {
        FUN_109d1ef3c(uVar2,param_2);
      }
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      uVar3 = *param_1;
      uVar5 = uVar3;
      while (uVar5 != 0) {
        if (uVar3 != uVar2) {
          uVar5 = uVar3;
          if (*(char *)(uVar3 + 0x48) == '\x01') {
            FUN_109d1ee3c();
          }
          else {
            FUN_109d1ef3c(uVar3,param_2);
          }
          if ((uVar5 & 1) != 0) {
            return 1;
          }
        }
        uVar5 = *(ulong *)(uVar3 + 8);
        uVar3 = uVar5 - 8;
      }
    }
  }
  return 0;
}



/* Entry: 109d204bc; end: 109d20513;  */

void FUN_109d204bc(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x2b0;
  __Znwm();
  FUN_109d20514();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109d20514; end: 109d20563;  */

undefined8 * FUN_109d20514(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b3f3d8;
  FUN_109d20224(param_1 + 3,*param_2,param_2[1]);
  return param_1;
}



/* Entry: 109d20564; end: 109d20573;  */

void FUN_109d20564(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f3d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d20574; end: 109d20593;  */

void FUN_109d20574(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f3d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d20594; end: 109d205a3;  */

void FUN_109d20594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109d2059c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 109d205a4; end: 109d206c7;  */

void FUN_109d205a4(undefined8 *param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  puVar4 = *ppuVar2;
  *ppuVar2 = (undefined *)param_1[2];
  FUN_109d1aecc(param_1);
  *ppuVar2 = puVar4;
  __ZNSt3__15mutex4lockEv(puVar4 + 0x18);
  uVar6 = *(undefined8 *)(puVar4 + 0xd0);
  uVar5 = *(undefined8 *)(puVar4 + 200);
  param_1[2] = *(undefined8 *)(puVar4 + 0xd8);
  param_1[1] = uVar6;
  *param_1 = uVar5;
  FUN_109d20928(puVar4 + 0x18);
  lVar3 = *(long *)(puVar4 + 0x90);
  if (*(long *)(puVar4 + 0x88) + *(long *)(puVar4 + 0xc0) == lVar3) {
    *(long *)(puVar4 + 0xe8) = *(long *)(puVar4 + 0xe8) + 1;
    __ZNSt3__118condition_variable10notify_oneEv(puVar4 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(puVar4 + 0x18);
    return;
  }
  *(long *)(puVar4 + 0x90) = lVar3 + 1;
  uVar1 = *(long *)(puVar4 + 0xb8) + (lVar3 - *(long *)(puVar4 + 0x88));
  lVar3 = *(long *)(*(long *)(puVar4 + 0xa0) + (uVar1 / 0xaa) * 8);
  __ZNSt3__15mutex6unlockEv(puVar4 + 0x18);
  pcStack_48 = FUN_109d205a4;
  lStack_40 = lVar3 + (uVar1 % 0xaa) * 0x18;
  puStack_38 = puVar4;
  (**(code **)**(undefined8 **)(puVar4 + 0xe0))(*(undefined8 **)(puVar4 + 0xe0),&pcStack_48);
  return;
}



/* Entry: 109d206c8; end: 109d2079b;  */

void FUN_109d206c8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcStack_38;
  long lStack_30;
  long lStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  FUN_109d19860(param_1 + 0x98,param_2);
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + -1;
    lVar2 = *(long *)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = lVar2 + 1;
    uVar1 = *(long *)(param_1 + 0xb8) + (lVar2 - *(long *)(param_1 + 0x88));
    lVar2 = *(long *)(*(long *)(param_1 + 0xa0) + (uVar1 / 0xaa) * 8);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
    pcStack_38 = FUN_109d205a4;
    lStack_30 = lVar2 + (uVar1 % 0xaa) * 0x18;
    lStack_28 = param_1;
    (**(code **)**(undefined8 **)(param_1 + 0xe0))(*(undefined8 **)(param_1 + 0xe0),&pcStack_38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x18);
  return;
}



/* Entry: 109d2079c; end: 109d20877;  */

undefined8 * FUN_109d2079c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(undefined8 *)(*param_3 + 0x10);
  *param_1 = &PTR_FUN_110b3f428;
  param_1[1] = param_1;
  param_1[2] = uVar1;
  param_1[3] = 0x32aaaba7;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3cb0b1bb;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = *(undefined8 *)(*param_3 + 8);
  param_1[0x1d] = param_2;
  lVar2 = *param_3;
  param_1[0x1e] = param_2;
  param_1[0x1f] = lVar2;
  param_1[0x20] = &UNK_1053a6a3c;
  param_1[0x21] = &PTR_DAT_110ae9180;
  param_1[0x20] = param_3[1];
  plVar3 = param_3 + 2;
  (**(code **)(*plVar3 + 0x10))(param_1 + 0x21,plVar3);
  param_3[1] = (long)&UNK_1053a6a3c;
  (**(code **)*plVar3)(plVar3);
  *plVar3 = (long)&PTR_DAT_110ae9180;
  return param_1;
}



/* Entry: 109d20878; end: 109d2090f;  */

long FUN_109d20878(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  char cStack_28;
  
  lVar1 = param_1 + 0x18;
  cStack_28 = '\x01';
  lStack_30 = lVar1;
  __ZNSt3__15mutex4lockEv(lVar1);
  lVar2 = lVar1;
  if (*(long *)(param_1 + 0xf0) != *(long *)(param_1 + 0xe8)) {
    do {
      __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1 + 0x58,&lStack_30);
    } while (*(long *)(param_1 + 0xf0) != *(long *)(param_1 + 0xe8));
    lVar2 = lStack_30;
    if (cStack_28 != '\x01') goto LAB_109d208e0;
  }
  __ZNSt3__15mutex6unlockEv(lVar2);
LAB_109d208e0:
  FUN_109d1af14(lVar1);
  func_0x0001092ba41c(param_1 + 0xf8);
  FUN_109d1dfbc(lVar1);
  return param_1;
}



/* Entry: 109d20910; end: 109d20913;  */

long FUN_109d20910(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  char cStack_28;
  
  lVar1 = param_1 + 0x18;
  cStack_28 = '\x01';
  lStack_30 = lVar1;
  __ZNSt3__15mutex4lockEv(lVar1);
  lVar2 = lVar1;
  if (*(long *)(param_1 + 0xf0) != *(long *)(param_1 + 0xe8)) {
    do {
      __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1 + 0x58,&lStack_30);
    } while (*(long *)(param_1 + 0xf0) != *(long *)(param_1 + 0xe8));
    lVar2 = lStack_30;
    if (cStack_28 != '\x01') goto LAB_109d208e0;
  }
  __ZNSt3__15mutex6unlockEv(lVar2);
LAB_109d208e0:
  FUN_109d1af14(lVar1);
  func_0x0001092ba41c(param_1 + 0xf8);
  FUN_109d1dfbc(lVar1);
  return param_1;
}



/* Entry: 109d20914; end: 109d20927;  */

void FUN_109d20914(void)

{
  FUN_109d20878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d20928; end: 109d209fb;  */

long FUN_109d20928(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      uVar2 = *(ulong *)(param_1 + 0xa0);
      plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + (uVar2 / 0xaa) * 8) +
                       (uVar2 % 0xaa) * 0x18);
      if (*plVar3 != *(long *)(param_1 + 0xb0)) {
        return lVar4;
      }
      if (plVar3[1] != *(long *)(param_1 + 0xb8)) {
        return lVar4;
      }
      if (plVar3[2] != *(long *)(param_1 + 0xc0)) {
        return lVar4;
      }
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
      *(ulong *)(param_1 + 0xa0) = uVar2 + 1;
      *(long *)(param_1 + 0xa8) = lVar1 + -1;
      func_0x000109d19a1c(param_1 + 0x80,1);
      lVar4 = lVar4 + 1;
      lVar1 = *(long *)(param_1 + 0xa8);
    } while (lVar1 != 0);
  }
  return lVar4;
}



/* Entry: 109d209fc; end: 109d20a0b;  */

void FUN_109d209fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f488;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d20a0c; end: 109d20a2b;  */

void FUN_109d20a0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3f488;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d20a2c; end: 109d20a37;  */

long FUN_109d20a2c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  char cStack_28;
  
  lVar1 = param_1 + 0x30;
  cStack_28 = '\x01';
  lStack_30 = lVar1;
  __ZNSt3__15mutex4lockEv(lVar1);
  lVar2 = lVar1;
  if (*(long *)(param_1 + 0x108) != *(long *)(param_1 + 0x100)) {
    do {
      __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1 + 0x70,&lStack_30);
    } while (*(long *)(param_1 + 0x108) != *(long *)(param_1 + 0x100));
    lVar2 = lStack_30;
    if (cStack_28 != '\x01') goto LAB_109d208e0;
  }
  __ZNSt3__15mutex6unlockEv(lVar2);
LAB_109d208e0:
  FUN_109d1af14(lVar1);
  func_0x0001092ba41c(param_1 + 0x110);
  FUN_109d1dfbc(lVar1);
  return param_1 + 0x18;
}



/* Entry: 109d20a38; end: 109d20f53;  */

void FUN_109d20a38(undefined8 *param_1,undefined8 *param_2,int param_3,char *param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined1 ***pppuVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *extraout_x8;
  undefined8 *puVar9;
  byte abStack_b0 [8];
  long lStack_a8;
  byte abStack_a0 [8];
  long lStack_98;
  undefined1 **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte abStack_70 [8];
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_4 == '\t') {
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    iVar5 = param_3;
    goto LAB_109d20a84;
  }
  func_0x000109381b20(abStack_70,param_4);
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0x8000000000000000;
  ppuStack_90 = (undefined1 **)abStack_70;
  if (abStack_70[0] == 1) {
    lVar3 = lStack_68;
    FUN_109d21b74(lStack_68,&PTR_DAT_110b3f4c8);
    lStack_88 = lVar3;
LAB_109d20b68:
    lStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0x8000000000000000;
    if (abStack_70[0] == 1) {
      lStack_58 = lStack_68 + 8;
    }
    else {
      if (abStack_70[0] == 2) goto LAB_109d20b8c;
      uStack_48 = 1;
    }
  }
  else {
    if (abStack_70[0] != 2) {
      uStack_78 = 1;
      goto LAB_109d20b68;
    }
    uStack_80 = *(undefined8 *)(lStack_68 + 8);
LAB_109d20b8c:
    uStack_48 = 0x8000000000000000;
    lStack_58 = 0;
    uStack_50 = *(undefined8 *)(lStack_68 + 8);
  }
  uStack_60 = (undefined1 ***)abStack_70;
  pppuVar4 = &ppuStack_90;
  func_0x000109379420(pppuVar4,&uStack_60);
  if (((ulong)pppuVar4 & 1) == 0) {
    pppuVar4 = &ppuStack_90;
    func_0x00010937b950(pppuVar4);
    func_0x000109381b20(abStack_a0,pppuVar4);
    lVar3 = lStack_68;
    bVar1 = abStack_70[0];
    abStack_70[0] = abStack_a0[0];
    abStack_a0[0] = bVar1;
    lStack_68 = lStack_98;
    lStack_98 = lVar3;
    func_0x000109380ffc(&lStack_98);
    ppuStack_90 = (undefined1 **)abStack_70;
    lStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0x8000000000000000;
    if (abStack_70[0] == 1) {
      lVar3 = lStack_68;
      FUN_109d21b74(lStack_68,&PTR_DAT_110b3f4d8);
      lStack_88 = lVar3;
LAB_109d20d9c:
      lStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0x8000000000000000;
      if (abStack_70[0] == 1) {
        lStack_58 = lStack_68 + 8;
      }
      else {
        if (abStack_70[0] == 2) goto LAB_109d20dc0;
        uStack_48 = 1;
      }
    }
    else {
      if (abStack_70[0] != 2) {
        uStack_78 = 1;
        goto LAB_109d20d9c;
      }
      uStack_80 = *(undefined8 *)(lStack_68 + 8);
LAB_109d20dc0:
      uStack_48 = 0x8000000000000000;
      lStack_58 = 0;
      uStack_50 = *(undefined8 *)(lStack_68 + 8);
    }
    uStack_60 = (undefined1 ***)abStack_70;
    pppuVar4 = &ppuStack_90;
    func_0x000109379420(pppuVar4,&uStack_60);
    if (((ulong)pppuVar4 & 1) == 0) {
      pppuVar4 = &ppuStack_90;
      func_0x00010937b950(pppuVar4);
      func_0x000109381b20(abStack_b0,pppuVar4);
      lVar3 = lStack_68;
      bVar1 = abStack_70[0];
      abStack_70[0] = abStack_b0[0];
      abStack_b0[0] = bVar1;
      lStack_68 = lStack_a8;
      lStack_a8 = lVar3;
      func_0x000109380ffc(&lStack_a8);
      func_0x00010937c260(&ppuStack_90,abStack_70);
      FUN_109d218f0(param_1,ppuStack_90,(lStack_88 - (long)ppuStack_90 >> 3) * -0x5555555555555555);
      uStack_60 = &ppuStack_90;
      func_0x000104c607c8(&uStack_60);
      goto LAB_109d20e7c;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_109d20e7c:
  uVar8 = (ulong)abStack_70[0];
  func_0x000109380ffc(&lStack_68);
  do {
    iVar5 = (int)uVar8;
    param_2 = (undefined8 *)*param_1;
    if (param_2 == (undefined8 *)param_1[1]) {
      if (param_2 != (undefined8 *)0x0) {
        param_1[1] = param_2;
        __ZdlPv();
      }
LAB_109d20a84:
      if (param_3 < 4) {
        if (param_3 == 1) {
          uVar8 = param_5[7];
          plVar6 = (long *)param_5[6];
          if (-1 < (char)*(byte *)((long)param_5 + 0x47)) {
            uVar8 = (ulong)*(byte *)((long)param_5 + 0x47);
            plVar6 = param_5 + 6;
          }
          FUN_109d21c60(param_1,plVar6,uVar8);
          iVar5 = (int)plVar6;
          param_2 = (undefined8 *)*param_1;
          if (param_2 == (undefined8 *)param_1[1]) {
            if (param_2 != (undefined8 *)0x0) {
              param_1[1] = param_2;
              __ZdlPv();
            }
            puVar9 = param_5 + 3;
            uVar8 = param_5[4];
            puVar7 = (undefined8 *)*puVar9;
            if (-1 < (char)*(byte *)((long)param_5 + 0x2f)) {
              uVar8 = (ulong)*(byte *)((long)param_5 + 0x2f);
              puVar7 = puVar9;
            }
            FUN_109d21c60(param_1,puVar7,uVar8);
            iVar5 = (int)puVar7;
            param_2 = (undefined8 *)*param_1;
            param_5 = puVar9;
            if (param_2 == (undefined8 *)param_1[1]) {
              if (param_2 != (undefined8 *)0x0) {
                param_1[1] = param_2;
                __ZdlPv();
              }
              uStack_60 = (undefined1 ***)((long)&MACH_HEADER.magic + 2);
              param_1[1] = 0;
              param_1[2] = 0;
              *param_1 = 0;
              puVar7 = &uStack_60;
              param_2 = param_1;
              func_0x00010938c9c4(param_1,puVar7,&lStack_58,2);
              iVar5 = (int)puVar7;
            }
          }
        }
        else if (param_3 == 2) {
          uStack_60 = (undefined1 ***)CONCAT44(uStack_60._4_4_,2);
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          puVar7 = &uStack_60;
          param_2 = param_1;
          func_0x00010938c9c4(param_1,puVar7,(long)&uStack_60 + 4,1);
          iVar5 = (int)puVar7;
        }
        else {
          if (param_3 != 3) goto LAB_109d20aa4;
LAB_109d20b18:
          uStack_60 = (undefined1 ***)CONCAT44(uStack_60._4_4_,0x80);
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          puVar7 = &uStack_60;
          param_2 = param_1;
          func_0x00010938c9c4(param_1,puVar7,(long)&uStack_60 + 4,1);
          iVar5 = (int)puVar7;
        }
      }
      else if (param_3 == 4) {
        lStack_58 = 0x80000002000;
        uStack_60 = (undefined1 ***)0x100000008000;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        puVar7 = &uStack_60;
        param_2 = param_1;
        func_0x00010938c9c4(param_1,puVar7,&uStack_50,4);
        iVar5 = (int)puVar7;
      }
      else if (param_3 == 5) {
        uStack_60 = (undefined1 ***)CONCAT44(uStack_60._4_4_,0x4000);
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        puVar7 = &uStack_60;
        param_2 = param_1;
        func_0x00010938c9c4(param_1,puVar7,(long)&uStack_60 + 4,1);
        iVar5 = (int)puVar7;
      }
      else {
        if (param_3 == 9) goto LAB_109d20b18;
LAB_109d20aa4:
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume(param_2);
      FUN_109d20a38();
      if (*extraout_x8 != extraout_x8[1]) {
        return;
      }
      func_0x000105688514(&UNK_10f5ac9b0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109d20f90);
      (*pcVar2)();
    }
    uStack_60 = &ppuStack_90;
    func_0x000104c607c8(&uStack_60);
    uVar8 = (ulong)abStack_70[0];
    func_0x000109380ffc(&lStack_68);
    ___cxa_begin_catch(param_2);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 109d20f54; end: 109d20fab;  */

void FUN_109d20f54(long *param_1)

{
  code *pcVar1;
  
  FUN_109d20a38();
  if (*param_1 != param_1[1]) {
    return;
  }
  func_0x000105688514(&UNK_10f5ac9b0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d20f90);
  (*pcVar1)();
}



/* Entry: 109d20fac; end: 109d218ef;  */

void FUN_109d20fac(int *param_1,long param_2,uint param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *******pppppppuVar4;
  long *plVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 *******pppppppuVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  undefined8 *******pppppppuVar11;
  undefined **ppuVar12;
  byte bVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  long lVar16;
  int *piVar17;
  int *piVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  long lVar22;
  bool bVar23;
  undefined **ppuVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 ******ppppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 ******ppppppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  lVar22 = param_2 << 2;
  piVar1 = param_1 + param_2;
  piVar18 = param_1;
  lVar16 = lVar22;
  if (param_2 == 0) {
LAB_109d21014:
    if (piVar18 != piVar1) {
      uVar26 = 0;
      pbVar19 = &UNK_10e0416ea;
      while( true ) {
        while( true ) {
          pbVar20 = &UNK_10e0416e0 + uVar26 * 2;
          if (param_3 <= *pbVar20) break;
          pbVar20 = pbVar19;
          if (1 < uVar26) goto LAB_109d21070;
          uVar26 = uVar26 * 2 + 2;
        }
        if (1 < uVar26) break;
        uVar26 = uVar26 * 2 | 1;
        pbVar19 = pbVar20;
      }
LAB_109d21070:
      if ((pbVar20 == &UNK_10e0416ea) || (param_3 < *pbVar20)) {
        bVar13 = 2;
      }
      else {
        bVar13 = pbVar20[1];
      }
      *(byte *)(param_5 + 0x39) = bVar13;
      *(undefined1 *)(param_5 + 0x3a) = *(undefined1 *)(param_6 + 6);
    }
  }
  else {
    do {
      if (*piVar18 == 2) goto LAB_109d21014;
      lVar16 = lVar16 + -4;
      piVar18 = piVar18 + 1;
    } while (lVar16 != 0);
  }
  piVar18 = param_1;
  lVar16 = lVar22;
  if (param_2 == 0) {
LAB_109d210cc:
    if (piVar18 == piVar1) goto LAB_109d210d4;
LAB_109d2113c:
    if (*(char *)(param_6 + 0x5f) < '\0') {
      func_0x000107c3192c(&ppppppuStack_80,*(undefined8 *)(param_6 + 0x48),
                          *(undefined8 *)(param_6 + 0x50));
    }
    else {
      uStack_78 = *(ulong *)(param_6 + 0x50);
      ppppppuStack_80 = *(undefined8 *******)(param_6 + 0x48);
      uStack_70 = *(ulong *)(param_6 + 0x58);
    }
    uVar26 = 0;
    pppppppuVar8 = (undefined8 *******)ppppppuStack_80;
    if (-1 < (long)uStack_70) {
      pppppppuVar8 = &ppppppuStack_80;
    }
    ppuVar12 = &PTR_DAT_110b3f560;
    uVar3 = uStack_78;
    if (-1 < (long)uStack_70) {
      uVar3 = uStack_70 >> 0x38;
    }
    while( true ) {
      while( true ) {
        ppuVar24 = &PTR_DAT_110b3f4e8 + uVar26 * 3;
        puVar7 = *ppuVar24;
        func_0x000107c2abd8(puVar7,*(undefined8 *)(&UNK_110b3f4f0 + uVar26 * 0x18),pppppppuVar8,
                            uVar3);
        if (((uint)puVar7 >> 7 & 1) == 0) break;
        ppuVar24 = ppuVar12;
        if (1 < uVar26) goto LAB_109d211e8;
        uVar26 = uVar26 * 2 + 2;
      }
      if (1 < uVar26) break;
      uVar26 = uVar26 << 1 | 1;
      ppuVar12 = ppuVar24;
    }
LAB_109d211e8:
    if (ppuVar24 == &PTR_DAT_110b3f560) {
      uVar14 = 0;
    }
    else {
      func_0x000107c2abd8(pppppppuVar8,uVar3,*ppuVar24,ppuVar24[1]);
      uVar14 = 0;
      if ((((uint)pppppppuVar8 >> 7 & 1) == 0) && (ppuVar24 != &PTR_DAT_110b3f560)) {
        uVar14 = *(undefined1 *)(ppuVar24 + 2);
      }
    }
    *(undefined1 *)(param_5 + 0x41) = uVar14;
    if ((long)uStack_70 < 0) {
      __ZdlPv(ppppppuStack_80);
    }
    if (*(char *)(param_6 + 0x77) < '\0') {
      func_0x000107c3192c(&ppppppuStack_a0,*(undefined8 *)(param_6 + 0x60),
                          *(undefined8 *)(param_6 + 0x68));
    }
    else {
      uStack_98 = *(ulong *)(param_6 + 0x68);
      ppppppuStack_a0 = *(undefined8 *******)(param_6 + 0x60);
      uStack_90 = *(ulong *)(param_6 + 0x70);
    }
    bVar23 = false;
    lVar16 = 0;
    uVar26 = uStack_98;
    pppppppuVar8 = (undefined8 *******)ppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar26 = uStack_90 >> 0x38;
      pppppppuVar8 = &ppppppuStack_a0;
    }
    puVar2 = (undefined8 *)&UNK_110b3f590;
    do {
      puVar25 = puVar2;
      puVar2 = (undefined8 *)((long)&PTR_DAT_110b3f560 + lVar16);
      uVar9 = *puVar2;
      func_0x000107c2abd8(uVar9,*(undefined8 *)(&UNK_110b3f568 + lVar16),pppppppuVar8,uVar26);
      if (bVar23) break;
      bVar23 = true;
      lVar16 = 0x18;
    } while (-1 < (char)uVar9);
    if (-1 < (char)uVar9) {
      puVar25 = puVar2;
    }
    if (puVar25 == (undefined8 *)&UNK_110b3f590) {
      uVar15 = 0;
    }
    else {
      func_0x000107c2abd8(pppppppuVar8,uVar26,*puVar25,puVar25[1]);
      if (((uint)pppppppuVar8 >> 7 & 1) == 0) {
        uVar15 = *(undefined4 *)(puVar25 + 2);
      }
      else {
        uVar15 = 0;
      }
    }
    *(undefined4 *)(param_5 + 0x44) = uVar15;
    if ((long)uStack_90 < 0) {
      __ZdlPv(ppppppuStack_a0);
    }
    *(undefined1 *)(param_5 + 0x48) = *(undefined1 *)(param_6 + 5);
    *(undefined1 *)(param_5 + 0x40) = *(undefined1 *)(param_6 + 7);
    uVar9 = param_4;
    FUN_109d21df4(param_4,&UNK_10f5aca70,0x18,*(undefined1 *)(param_6 + 8));
    *(char *)(param_5 + 0x49) = (char)uVar9;
    uVar9 = param_4;
    FUN_109d21df4(param_4,&UNK_10f5aca89,0x1a,*(undefined1 *)(param_6 + 9));
    *(char *)(param_5 + 0x4a) = (char)uVar9;
    *(undefined2 *)(param_5 + 0x4b) = *(undefined2 *)(param_6 + 0xd);
    *(undefined1 *)(param_5 + 0x70) = *(undefined1 *)(param_6 + 0xf);
  }
  else {
    do {
      if (*piVar18 == 0x1000) goto LAB_109d210cc;
      lVar16 = lVar16 + -4;
      piVar18 = piVar18 + 1;
    } while (lVar16 != 0);
LAB_109d210d4:
    piVar18 = param_1;
    lVar16 = lVar22;
    if (param_2 == 0) {
LAB_109d21100:
      if (piVar18 != piVar1) goto LAB_109d2113c;
    }
    else {
      do {
        if (*piVar18 == 0x8000) goto LAB_109d21100;
        lVar16 = lVar16 + -4;
        piVar18 = piVar18 + 1;
      } while (lVar16 != 0);
    }
    piVar18 = param_1;
    lVar16 = lVar22;
    if (param_2 == 0) {
LAB_109d21134:
      if (piVar18 != piVar1) goto LAB_109d2113c;
    }
    else {
      do {
        if (*piVar18 == 0x10000) goto LAB_109d21134;
        lVar16 = lVar16 + -4;
        piVar18 = piVar18 + 1;
      } while (lVar16 != 0);
    }
  }
  piVar17 = param_1;
  lVar16 = lVar22;
  piVar18 = param_1;
  lVar21 = lVar22;
  if (param_2 == 0) {
LAB_109d213a8:
    if (piVar17 == piVar1) goto LAB_109d213b0;
LAB_109d21418:
    uVar26 = *(ulong *)(param_6 + 0x80);
    plVar5 = (long *)*(long *)(param_6 + 0x78);
    if (-1 < (char)*(byte *)(param_6 + 0x8f)) {
      uVar26 = (ulong)*(byte *)(param_6 + 0x8f);
      plVar5 = (long *)(param_6 + 0x78);
    }
    FUN_109d21f9c(&ppppppuStack_a0,param_4,&UNK_10f5acaa4,0x18,plVar5,uVar26,FUN_109d15f04);
    uVar26 = uStack_98;
    pppppppuVar8 = (undefined8 *******)ppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar26 = uStack_90 >> 0x38;
      pppppppuVar8 = &ppppppuStack_a0;
    }
    ppuStack_68 = &PTR_DAT_110b3e8a0;
    pppuVar10 = &ppuStack_68;
    ppppppuStack_80 = pppppppuVar8;
    uStack_78 = uVar26;
    FUN_109d15f94(pppuVar10,&ppppppuStack_80);
    if (pppuVar10 == (undefined ***)&PTR_DAT_110b3e990) {
      if (0x7ffffffffffffff7 < uVar26) {
        func_0x000104c4f6b8();
        goto LAB_109d218cc;
      }
      if (uVar26 < 0x17) {
        uStack_70 = CONCAT17((char)uVar26,(undefined7)uStack_70);
        pppppppuVar11 = &ppppppuStack_80;
        if (uVar26 != 0) goto LAB_109d2151c;
      }
      else {
        pppppppuVar4 = (undefined8 *******)0x19;
        if ((uVar26 | 7) != 0x17) {
          pppppppuVar4 = (undefined8 *******)((uVar26 | 7) + 1);
        }
        pppppppuVar11 = pppppppuVar4;
        __Znwm();
        uStack_70 = (ulong)pppppppuVar4 | 0x8000000000000000;
        ppppppuStack_80 = pppppppuVar11;
        uStack_78 = uVar26;
LAB_109d2151c:
        _memmove(pppppppuVar11,pppppppuVar8,uVar26);
      }
      *(undefined1 *)((long)pppppppuVar11 + uVar26) = 0;
      pppppppuVar8 = (undefined8 *******)ppppppuStack_80;
      if (-1 < (long)uStack_70) {
        pppppppuVar8 = &ppppppuStack_80;
      }
      FUN_10ae030a0(0,pppppppuVar8);
      ppuVar12 = &PTR_PTR_1132fedd8;
      FUN_10ae079a0();
      FUN_10ae030d8();
      FUN_10ae07cd4(ppuVar12,&PTR_PTR_1132fedd8);
      if ((long)uStack_70 < 0) {
        __ZdlPv(ppppppuStack_80);
      }
      uVar14 = 0;
    }
    else {
      ppuStack_68 = &PTR_DAT_110b3e8a0;
      pppuVar10 = &ppuStack_68;
      ppppppuStack_80 = pppppppuVar8;
      uStack_78 = uVar26;
      FUN_109d15f94(pppuVar10,&ppppppuStack_80);
      if (pppuVar10 == (undefined ***)&PTR_DAT_110b3e990) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined1 *)(pppuVar10 + 2);
      }
    }
    *(undefined1 *)(param_5 + 0x5b) = uVar14;
    piVar17 = param_1;
    lVar16 = lVar22;
    if ((long)uStack_90 < 0) {
      __ZdlPv(ppppppuStack_a0);
      if (param_2 == 0) goto LAB_109d215e0;
LAB_109d215b4:
      do {
        if (*piVar17 == 0x80) goto LAB_109d215e0;
        lVar16 = lVar16 + -4;
        piVar17 = piVar17 + 1;
      } while (lVar16 != 0);
LAB_109d215e8:
      piVar17 = param_1;
      lVar16 = lVar22;
      if (param_2 == 0) {
LAB_109d21614:
        if (piVar17 != piVar1) goto LAB_109d2161c;
      }
      else {
        do {
          if (*piVar17 == 0x81) goto LAB_109d21614;
          piVar17 = piVar17 + 1;
          lVar16 = lVar16 + -4;
        } while (lVar16 != 0);
      }
      goto LAB_109d217c0;
    }
    if (param_2 != 0) goto LAB_109d215b4;
LAB_109d215e0:
    if (piVar17 == piVar1) goto LAB_109d215e8;
LAB_109d2161c:
    if (-1 < (int)*(uint *)(param_6 + 0x90)) {
      *(ulong *)(param_5 + 0x60) = (ulong)*(uint *)(param_6 + 0x90) * 1000;
    }
    uVar26 = *(ulong *)(param_6 + 0xa0);
    plVar5 = (long *)*(long *)(param_6 + 0x98);
    if (-1 < (char)*(byte *)(param_6 + 0xaf)) {
      uVar26 = (ulong)*(byte *)(param_6 + 0xaf);
      plVar5 = (long *)(param_6 + 0x98);
    }
    FUN_109d21f9c(&ppppppuStack_a0,param_4,&UNK_10f5acabd,0x1a,plVar5,uVar26,0x109d15f4c);
    uVar26 = uStack_98;
    pppppppuVar8 = (undefined8 *******)ppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar26 = uStack_90 >> 0x38;
      pppppppuVar8 = &ppppppuStack_a0;
    }
    ppuStack_68 = &PTR_DAT_110b3e990;
    pppuVar10 = &ppuStack_68;
    ppppppuStack_80 = pppppppuVar8;
    uStack_78 = uVar26;
    FUN_109d160ac(pppuVar10,&ppppppuStack_80);
    if (pppuVar10 == (undefined ***)&UNK_110b3e9f0) {
      if (0x7ffffffffffffff7 < uVar26) {
        func_0x000104c4f6b8();
LAB_109d218cc:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109d218d0);
        (*pcVar6)();
      }
      if (uVar26 < 0x17) {
        uStack_70 = CONCAT17((char)uVar26,(undefined7)uStack_70);
        pppppppuVar11 = &ppppppuStack_80;
        if (uVar26 != 0) goto LAB_109d21734;
      }
      else {
        pppppppuVar4 = (undefined8 *******)0x19;
        if ((uVar26 | 7) != 0x17) {
          pppppppuVar4 = (undefined8 *******)((uVar26 | 7) + 1);
        }
        pppppppuVar11 = pppppppuVar4;
        __Znwm();
        uStack_70 = (ulong)pppppppuVar4 | 0x8000000000000000;
        ppppppuStack_80 = pppppppuVar11;
        uStack_78 = uVar26;
LAB_109d21734:
        _memmove(pppppppuVar11,pppppppuVar8,uVar26);
      }
      *(undefined1 *)((long)pppppppuVar11 + uVar26) = 0;
      pppppppuVar8 = (undefined8 *******)ppppppuStack_80;
      if (-1 < (long)uStack_70) {
        pppppppuVar8 = &ppppppuStack_80;
      }
      FUN_10ae030a0(0,pppppppuVar8);
      ppuVar12 = &PTR_PTR_1132fee28;
      FUN_10ae079a0();
      FUN_10ae030d8();
      FUN_10ae07cd4(ppuVar12,&PTR_PTR_1132fee28);
      if ((long)uStack_70 < 0) {
        __ZdlPv(ppppppuStack_80);
      }
      uVar14 = 0;
    }
    else {
      ppuStack_68 = &PTR_DAT_110b3e990;
      pppuVar10 = &ppuStack_68;
      ppppppuStack_80 = pppppppuVar8;
      uStack_78 = uVar26;
      FUN_109d160ac(pppuVar10,&ppppppuStack_80);
      if (pppuVar10 == (undefined ***)&UNK_110b3e9f0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined1 *)(pppuVar10 + 2);
      }
    }
    *(undefined1 *)(param_5 + 0x58) = uVar14;
    if (-1 < (long)uStack_90) goto LAB_109d217c0;
    __ZdlPv(ppppppuStack_a0);
    if (param_2 != 0) goto LAB_109d217cc;
LAB_109d217f8:
    if (piVar18 != piVar1) goto LAB_109d2185c;
  }
  else {
    do {
      if (*piVar17 == 0x80) goto LAB_109d213a8;
      lVar16 = lVar16 + -4;
      piVar17 = piVar17 + 1;
    } while (lVar16 != 0);
LAB_109d213b0:
    piVar17 = param_1;
    lVar16 = lVar22;
    if (param_2 == 0) {
LAB_109d213dc:
      if (piVar17 != piVar1) goto LAB_109d21418;
    }
    else {
      do {
        if (*piVar17 == 0x81) goto LAB_109d213dc;
        lVar16 = lVar16 + -4;
        piVar17 = piVar17 + 1;
      } while (lVar16 != 0);
    }
    piVar17 = param_1;
    lVar16 = lVar22;
    if (param_2 == 0) {
LAB_109d21410:
      if (piVar17 != piVar1) goto LAB_109d21418;
    }
    else {
      do {
        if (*piVar17 == 0x10000) goto LAB_109d21410;
        lVar16 = lVar16 + -4;
        piVar17 = piVar17 + 1;
      } while (lVar16 != 0);
    }
LAB_109d217c0:
    if (param_2 == 0) goto LAB_109d217f8;
LAB_109d217cc:
    do {
      if (*piVar18 == 0x80000) goto LAB_109d217f8;
      lVar21 = lVar21 + -4;
      piVar18 = piVar18 + 1;
    } while (lVar21 != 0);
  }
  piVar18 = param_1;
  lVar16 = lVar22;
  if (param_2 == 0) {
LAB_109d2182c:
    if (piVar18 != piVar1) goto LAB_109d2185c;
  }
  else {
    do {
      if (*piVar18 == 0x40000) goto LAB_109d2182c;
      lVar16 = lVar16 + -4;
      piVar18 = piVar18 + 1;
    } while (lVar16 != 0);
  }
  if (param_2 != 0) {
    while (*param_1 != 0x200000) {
      param_1 = param_1 + 1;
      lVar22 = lVar22 + -4;
      if (lVar22 == 0) {
        return;
      }
    }
  }
  if (param_1 == piVar1) {
    return;
  }
LAB_109d2185c:
  uVar9 = param_4;
  FUN_109d21df4(param_4,&UNK_10f5acad8,0x1b,*(undefined1 *)(param_6 + 10));
  *(char *)(param_5 + 0x51) = (char)uVar9;
  FUN_109d21df4(param_4,&UNK_10f5acaf4,0x1d,*(undefined1 *)(param_6 + 0xb));
  *(char *)(param_5 + 0x52) = (char)param_4;
  *(undefined1 *)(param_5 + 0x53) = *(undefined1 *)(param_6 + 0xc);
  return;
}


