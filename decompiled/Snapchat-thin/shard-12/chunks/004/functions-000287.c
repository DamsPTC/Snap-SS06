/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090cba94; end: 1090cbaef;  */

void FUN_1090cba94(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001090cbee4();
  if (param_1 != 0) {
    _CFRelease();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 1090cbaf0; end: 1090cbb13;  */

void FUN_1090cbaf0(void)

{
  func_0x0001090cbee4();
  FUN_1090cbb14();
  return;
}



/* Entry: 1090cbb14; end: 1090cbb4b;  */

void FUN_1090cbb14(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090cbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090cbb4c; end: 1090cbc97;  */

long * FUN_1090cbb4c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long *unaff_x19;
  long lVar9;
  long lVar10;
  
  uVar2 = param_2[2];
  uVar1 = param_2[1] + 1;
  if (uVar1 - uVar2 <= 0x1c71c71c71c71c7 - uVar2) {
    if (uVar2 >> 0x3d == 0) {
      uVar8 = (uVar2 << 3) / 5;
    }
    else {
      uVar8 = uVar2 << 3;
      if (4 < uVar2 >> 0x3d) {
        uVar8 = 0xffffffffffffffff;
      }
    }
    if (0x1c71c71c71c71c6 < uVar8) {
      uVar8 = 0x1c71c71c71c71c7;
    }
    uVar2 = uVar1;
    if (uVar1 <= uVar8) {
      uVar2 = uVar8;
    }
    unaff_x19 = param_1;
    if (uVar1 < 0x1c71c71c71c71c8) {
      lVar9 = *param_2;
      plVar3 = (long *)(uVar2 * 0x48);
      __Znwm();
      plVar5 = (long *)*param_2;
      lVar10 = param_2[1];
      plVar4 = plVar3;
      plVar7 = plVar3;
      if ((plVar5 != (long *)0x0) && (plVar5 != param_3)) {
        _memmove(plVar3,plVar5,(long)param_3 - (long)plVar5);
        plVar7 = (long *)((long)plVar3 + ((long)param_3 - (long)plVar5));
      }
      plVar7[8] = 0;
      plVar7[5] = 0;
      plVar7[4] = 0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      plVar7[1] = 0;
      *plVar7 = 0;
      plVar7[3] = 0;
      plVar7[2] = 0;
      if ((param_3 != (long *)0x0) && (param_3 != plVar5 + lVar10 * 9)) {
        plVar4 = plVar7 + 9;
        _memmove(plVar4,param_3,(long)(plVar5 + lVar10 * 9) - (long)param_3);
      }
      if ((plVar5 != (long *)0x0) && (param_2 + 3 != plVar5)) {
        __ZdlPv(plVar5);
        lVar10 = param_2[1];
        plVar4 = plVar5;
      }
      *param_2 = (long)plVar3;
      param_2[1] = lVar10 + 1;
      param_2[2] = uVar2;
      *param_1 = (long)plVar3 + ((long)param_3 - lVar9);
      return plVar4;
    }
  }
  puVar6 = &UNK_10f424dbf;
  func_0x00010772e1f8();
  func_0x0001090cbee4();
  if (puVar6 != (undefined *)0x0) {
    _CFRelease();
    *unaff_x19 = 0;
  }
  return unaff_x19;
}



/* Entry: 1090cbc98; end: 1090cbcc3;  */

void FUN_1090cbc98(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001090cbee4();
  if (param_1 != 0) {
    _CFRelease();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 1090cbcc4; end: 1090cbd0b;  */

void FUN_1090cbcc4(long *param_1)

{
  undefined8 *unaff_x19;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  if (*param_1 == 1) {
    param_1 = param_1 + 1;
    func_0x0001090cbee4();
    if (param_1 != (long *)0x0) {
      _CFRelease();
      *unaff_x19 = 0;
    }
    return;
  }
  return;
}



/* Entry: 1090cbd0c; end: 1090cbd2f;  */

void FUN_1090cbd0c(void)

{
  func_0x0001090cbee4();
  func_0x0001090cbd30();
  return;
}



/* Entry: 1090cbd30; end: 1090cbf67;  */

void FUN_1090cbd30(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090cbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090cbf68; end: 1090cbfab;  */

undefined8 * FUN_1090cbf68(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110ad8f78;
  param_1[1] = 1;
  param_1[2] = param_2;
  FUN_1090cc7a4();
  param_1[3] = param_3;
  _dispatch_retain(param_3);
  return param_1;
}



/* Entry: 1090cbfac; end: 1090cc013;  */

undefined8 * FUN_1090cbfac(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110ad8f78;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = param_2;
  _dispatch_retain(param_2);
  _CMClockGetHostTimeClock();
  _CMTimebaseCreateWithSourceClock(0,param_2,param_1 + 2);
  return param_1;
}



/* Entry: 1090cc014; end: 1090cc04b;  */

undefined8 * FUN_1090cc014(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8f78;
  _dispatch_release(param_1[3]);
  FUN_1090cc7b4(param_1 + 2);
  return param_1;
}



/* Entry: 1090cc04c; end: 1090cc04f;  */

undefined8 * FUN_1090cc04c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8f78;
  _dispatch_release(param_1[3]);
  FUN_1090cc7b4(param_1 + 2);
  return param_1;
}



/* Entry: 1090cc050; end: 1090cc093;  */

void FUN_1090cc050(void)

{
  FUN_1090cc014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090cc094; end: 1090cc0c3;  */

void FUN_1090cc094(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001090ccb2c(auStack_38);
  _CMTimebaseSetTime(uVar1,auStack_38);
  return;
}



/* Entry: 1090cc0c4; end: 1090cc0df;  */

float FUN_1090cc0c4(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  _CMTimebaseGetRate(*(undefined8 *)(param_2 + 0x10));
  return (float)(double)CONCAT44(uVar2,uVar1);
}



/* Entry: 1090cc0e0; end: 1090cc0eb;  */

void FUN_1090cc0e0(float param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbb954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimebaseSetRate_1103484e8)((double)param_1,*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Entry: 1090cc0ec; end: 1090cc157;  */

void FUN_1090cc0ec(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x0001090ccb2c(auStack_58);
  FUN_1090caae4(auStack_70,param_5,param_6);
  _CMTimebaseSetRateAndAnchorTime((double)param_1,uVar1,auStack_58,auStack_70);
  return;
}



/* Entry: 1090cc158; end: 1090cc1d3;  */

void FUN_1090cc158(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  if ((param_2 != 0) &&
     (___dynamic_cast(param_2,&PTR_DAT_110ad8fd8,&PTR_DAT_110ad9008,0), lVar1 = 0, param_2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbb978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CMTimebaseSetSourceTimebase_110348500)
              (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
    return;
  }
  _abort();
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  _CMClockGetHostTimeClock();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimebaseSetSourceClock_1103484f8)(uVar2,lVar1);
  return;
}



/* Entry: 1090cc1d4; end: 1090cc53b;  */

code ** FUN_1090cc1d4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  code **ppcVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar7;
  undefined **ppuVar8;
  code *pcVar9;
  long *plVar10;
  code *pcVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  undefined8 *puStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = *(code ***)(param_2 + 0x10);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  puVar3 = (undefined8 *)0xa0;
  __Znwm();
  plVar7 = puVar3 + 1;
  *plVar7 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110ad9050;
  pcVar9 = (code *)(puVar3 + 3);
  *(undefined ***)pcVar9 = &PTR_FUN_110ad90a0;
  plVar10 = puVar3 + 4;
  *plVar10 = 0;
  puVar3[5] = 0;
  plVar12 = puVar3 + 6;
  *plVar12 = (long)ppcVar6;
  FUN_1090cc7a4(plVar12);
  puVar4 = (undefined8 *)0x60;
  __Znwm();
  *puVar4 = &PTR_DAT_110ad9120;
  puVar4[2] = 0x32aaaba7;
  puVar4[1] = 1;
  puVar4[4] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[9] = 0;
  puVar4[10] = pcVar9;
  puVar4[0xb] = uVar14;
  _dispatch_retain(uVar14);
  puVar3[7] = puVar4;
  puVar5 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,uVar14);
  puVar3[9] = 0;
  puVar3[10] = 0x32aaaba7;
  puVar3[8] = puVar5;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
  puVar3[0x10] = 0;
  puVar3[0xf] = 0;
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  *(undefined1 *)(puVar3 + 0x13) = 0;
  _dispatch_source_set_event_handler_f();
  uVar14 = puVar3[8];
  plVar15 = (long *)puVar3[7];
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  _dispatch_set_context(uVar14,plVar15);
  _dispatch_source_set_cancel_handler_f(puVar3[8],FUN_1090cc8d4);
  _dispatch_activate(puVar3[8]);
  _CMTimebaseAddTimerDispatchSource(ppcVar6,puVar3[8]);
  if ((puVar3[5] == 0) || (*(long *)(puVar3[5] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pcStack_98 = pcVar9;
    ppuStack_90 = (undefined **)puVar3;
    func_0x000107c278e4(plVar10,&pcStack_98);
    ppcVar6 = &pcStack_98;
    func_0x000107c278ec();
  }
  pcStack_c0 = pcVar9;
  FUN_1090c9550();
  uVar14 = *(undefined8 *)PTR__kCMTimebaseNotification_TimeJumped_110348680;
  lVar13 = *plVar12;
  pcVar11 = pcVar9;
  pcStack_a8 = pcVar9;
  if (*plVar10 == 0) {
    ppuVar8 = (undefined **)puVar3[5];
    puStack_a0 = ppuVar8;
    if (ppuVar8 == (undefined **)0x0) goto LAB_1090cc418;
    do {
      func_0x0001090ccb48();
    } while (extraout_w10_00 != 0);
  }
  else {
    func_0x000107c278f0(&pcStack_98,plVar10);
    ppuVar8 = ppuStack_90;
    if (pcStack_98 == (code *)0x0) {
      ppuVar8 = (undefined **)0x0;
      pcStack_a8 = (code *)0x0;
      puStack_a0 = (undefined8 *)0x0;
      pcVar11 = (code *)0x0;
    }
    else {
      puStack_a0 = ppuStack_90;
      if (ppuStack_90 != (undefined **)0x0) {
        do {
          func_0x0001090ccb48();
        } while (extraout_w10 != 0);
      }
    }
    func_0x000107c278ec(&pcStack_98);
    if (ppuVar8 == (undefined **)0x0) goto LAB_1090cc418;
  }
  do {
    func_0x0001090ccb48();
  } while (extraout_w10_01 != 0);
LAB_1090cc418:
  FUN_1090cc53c(&pcStack_a8);
  pcStack_98 = FUN_1090cc564;
  ppuStack_90 = &PTR_FUN_110ad9020;
  uStack_b8 = 0;
  uStack_b0 = 0;
  pcStack_88 = pcVar11;
  puStack_80 = ppuVar8;
  FUN_1090c96a4(ppcVar6,uVar14,lVar13,&pcStack_98);
  puVar3[0x12] = ppcVar6;
  func_0x0001090ccb58();
  FUN_1090cc77c(&uStack_b8);
  if (puVar3[5] != 0) {
    do {
      func_0x0001090ccb48();
    } while (extraout_w10_02 != 0);
  }
  *param_1 = pcVar9;
  ppcVar6 = &pcStack_c0;
  FUN_1090ccafc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x0001090ccb58();
    FUN_1090cc77c(&uStack_b8);
    ppcVar6 = &pcStack_c0;
    FUN_1090ccafc();
    func_0x0001090ccb38();
    if (ppcVar6[1] != (code *)0x0) {
      func_0x000107c278a0();
    }
    return ppcVar6;
  }
  return ppcVar6;
}



/* Entry: 1090cc53c; end: 1090cc563;  */

long FUN_1090cc53c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1090cc564; end: 1090cc5f3;  */

void FUN_1090cc564(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar1;
    if (lVar1 != 0) {
      lStack_30 = *(long *)(param_1 + 0x10);
      if (lStack_30 != 0) {
        plVar2 = *(long **)(lStack_30 + 0x20);
        lVar1 = plVar2[0xb];
        (**(code **)(*plVar2 + 0x10))(plVar2);
        func_0x000104c62cd8(lVar1,plVar2,FUN_1090cc5f4);
      }
    }
  }
  FUN_1090cc53c(&lStack_30);
  return;
}



/* Entry: 1090cc5f4; end: 1090cc683;  */

void FUN_1090cc5f4(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  long lStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    func_0x0001090ccbb4();
    if (lStack_38 != 0) {
      _CMTimebaseGetTime(auStack_50,*(undefined8 *)(lVar1 + 0x18));
      func_0x0001090ccbc0(uStack_48);
    }
    func_0x0001090ccb70();
  }
  func_0x0001090ccb68();
  func_0x0001090ccb40();
  return;
}



/* Entry: 1090cc684; end: 1090cc723;  */

void FUN_1090cc684(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x38);
  if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
    lVar4 = *(long *)(param_2 + 0x30);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    lVar4 = 0;
  }
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x38);
  return;
}



/* Entry: 1090cc724; end: 1090cc77b;  */

long FUN_1090cc724(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 8;
}



/* Entry: 1090cc77c; end: 1090cc7a3;  */

long FUN_1090cc77c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1090cc7a4; end: 1090cc7b3;  */

void FUN_1090cc7a4(long *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return;
  }
  return;
}



/* Entry: 1090cc7b4; end: 1090cc7d7;  */

undefined8 FUN_1090cc7b4(undefined8 param_1)

{
  FUN_1090cc7d8();
  return param_1;
}



/* Entry: 1090cc7d8; end: 1090cc803;  */

void FUN_1090cc7d8(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
    *param_1 = 0;
  }
  return;
}



/* Entry: 1090cc804; end: 1090cc807;  */

void FUN_1090cc804(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9050;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090cc808; end: 1090cc81b;  */

void FUN_1090cc808(void)

{
  FUN_1090ccaec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090cc81c; end: 1090cc82b;  */

void FUN_1090cc81c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090cc824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090cc82c; end: 1090cc8d3;  */

void FUN_1090cc82c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  long lStack_38;
  
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
    func_0x0001090ccbb4();
    if (lStack_38 != 0) {
      _CMTimebaseGetTime(auStack_50,*(undefined8 *)(lVar4 + 0x18));
      func_0x0001090ccbc0(uStack_48);
    }
    func_0x0001090ccb70();
  }
  func_0x0001090ccb68();
  func_0x0001090ccb40();
  return;
}



/* Entry: 1090cc8d4; end: 1090cc8f3;  */

void FUN_1090cc8d4(void)

{
  func_0x0001090ccb40();
  return;
}



/* Entry: 1090cc8f4; end: 1090cc8f7;  */

undefined8 * FUN_1090cc8f4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110ad90a0;
  FUN_1090c9550();
  FUN_1090c95f4();
  lVar1 = param_1[4];
  __ZNSt3__15mutex4lockEv(lVar1 + 0x10);
  *(undefined8 *)(param_1[4] + 0x50) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x10);
  FUN_1090ccaac(param_1);
  _dispatch_source_cancel(param_1[5]);
  _dispatch_release(param_1[5]);
  __ZNSt3__15mutexD1Ev(param_1 + 7);
  FUN_1090abf40(param_1 + 6);
  func_0x0001090cc6dc(param_1 + 4);
  FUN_1090cc7b4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090cc8f8; end: 1090cc90b;  */

void FUN_1090cc8f8(void)

{
  FUN_1090cca08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090cc90c; end: 1090cc967;  */

void FUN_1090cc90c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  
  func_0x0001090ccb88();
  plVar1 = (long *)(unaff_x19 + 0x30);
  if (plVar1 != param_2) {
    lVar5 = *plVar1;
    lVar6 = *param_2;
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *plVar1 = lVar6;
    FUN_1090abf64(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x38);
  return;
}



/* Entry: 1090cc968; end: 1090cc9a3;  */

void FUN_1090cc968(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001090ccb2c(auStack_38);
  _CMTimebaseSetTimerDispatchSourceNextFireTime(uVar1,uVar2,auStack_38,0);
  return;
}



/* Entry: 1090cc9a4; end: 1090cc9bb;  */

void FUN_1090cc9a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbb99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimebaseSetTimerDispatchSourceToFireImmediately_110348518)
            (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1090cc9bc; end: 1090cc9cf;  */

void FUN_1090cc9bc(void)

{
  FUN_1090cc9d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090cc9d0; end: 1090cca07;  */

undefined8 * FUN_1090cc9d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ad9120;
  _dispatch_release(param_1[0xb]);
  __ZNSt3__15mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 1090cca08; end: 1090ccaab;  */

undefined8 * FUN_1090cca08(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110ad90a0;
  FUN_1090c9550();
  FUN_1090c95f4();
  lVar1 = param_1[4];
  __ZNSt3__15mutex4lockEv(lVar1 + 0x10);
  *(undefined8 *)(param_1[4] + 0x50) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x10);
  FUN_1090ccaac(param_1);
  _dispatch_source_cancel(param_1[5]);
  _dispatch_release(param_1[5]);
  __ZNSt3__15mutexD1Ev(param_1 + 7);
  FUN_1090abf40(param_1 + 6);
  func_0x0001090cc6dc(param_1 + 4);
  FUN_1090cc7b4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090ccaac; end: 1090ccaeb;  */

void FUN_1090ccaac(void)

{
  long unaff_x19;
  
  func_0x0001090ccb88();
  if ((*(byte *)(unaff_x19 + 0x80) & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x80) = 1;
    _CMTimebaseRemoveTimerDispatchSource
              (*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x38);
  return;
}



/* Entry: 1090ccaec; end: 1090ccafb;  */

void FUN_1090ccaec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9050;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090ccafc; end: 1090ccb23;  */

long * FUN_1090ccafc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c3105c();
  }
  return param_1;
}



/* Entry: 1090ccb24; end: 1090ccc93;  */

void FUN_1090ccb24(void)

{
  return;
}



/* Entry: 1090ccc94; end: 1090cccab;  */

uint FUN_1090ccc94(uint param_1)

{
  func_0x0001090ccbcc();
  return param_1 ^ 1;
}



/* Entry: 1090cccac; end: 1090ccdd7;  */

void FUN_1090cccac(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_98;
  undefined8 auStack_90 [11];
  long lStack_38;
  
  iVar5 = *param_2;
  if (5 < iVar5 - 1U) {
    if (iVar5 - 7U < 2) {
      func_0x00010b99f5f8(&uStack_98,&UNK_10f54ff16);
      *param_1 = 2;
      param_1[1] = uStack_98;
      uStack_98 = 0;
      func_0x000104bda93c(&uStack_98);
      return;
    }
    iVar5 = 0;
  }
  if ((char)param_2[0x1c] == '\x01') {
    _memcpy(&uStack_98,param_2 + 2,0x68);
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    puVar1 = &uStack_e0;
    puVar2 = auStack_90 + 2;
    for (; lStack_38 != 0; lStack_38 = lStack_38 + -1) {
      uVar3 = puVar2[-2];
      puVar1[-1] = puVar2[-1];
      puVar1[-2] = uVar3;
      *puVar1 = *puVar2;
      puVar1 = puVar1 + 3;
      puVar2 = puVar2 + 4;
    }
    *param_1 = 1;
    _memcpy(param_1 + 1,&uStack_f0,0x50);
    *(int *)(param_1 + 0xb) = iVar5;
    param_1[0xd] = auStack_90[1];
    param_1[0xc] = auStack_90[0];
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 10);
    *param_1 = 1;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    *(int *)(param_1 + 0xb) = iVar5;
    uVar3 = *(undefined8 *)(param_2 + 6);
    param_1[0xd] = *(undefined8 *)(param_2 + 8);
    param_1[0xc] = uVar3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return;
}



/* Entry: 1090ccdd8; end: 1090cce27;  */

undefined8 * FUN_1090ccdd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9168;
  if (param_1[0x10] != 0) {
    _CVPixelBufferPoolFlush(param_1[0x10],1);
    if (param_1[0x10] != 0) {
      _CFRelease();
      param_1[0x10] = 0;
    }
  }
  return param_1;
}



/* Entry: 1090cce28; end: 1090cce2b;  */

undefined8 * FUN_1090cce28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9168;
  if (param_1[0x10] != 0) {
    _CVPixelBufferPoolFlush(param_1[0x10],1);
    if (param_1[0x10] != 0) {
      _CFRelease();
      param_1[0x10] = 0;
    }
  }
  return param_1;
}



/* Entry: 1090cce2c; end: 1090cce3f;  */

void FUN_1090cce2c(void)

{
  FUN_1090ccdd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090cce40; end: 1090cce97;  */

void FUN_1090cce40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1090cd408();
  func_0x00010b9891dc(&uStack_30,param_3);
  _CFDictionaryAddValue(*unaff_x19,uStack_28,uStack_30);
  func_0x0001090cd444();
  func_0x0001090cd424();
  return;
}



/* Entry: 1090cce98; end: 1090cceef;  */

void FUN_1090cce98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1090cd408();
  func_0x00010b989220(&uStack_30,param_3);
  _CFDictionaryAddValue(*unaff_x19,uStack_28,uStack_30);
  func_0x0001090cd444();
  func_0x0001090cd424();
  return;
}



/* Entry: 1090ccef0; end: 1090ccf47;  */

void FUN_1090ccef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1090cd408();
  func_0x00010b989244(&uStack_30,param_3);
  _CFDictionaryAddValue(*unaff_x19,uStack_28,uStack_30);
  func_0x0001090cd444();
  func_0x0001090cd424();
  return;
}



/* Entry: 1090ccf48; end: 1090cd3df;  */

long * FUN_1090ccf48(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong auStack_100 [9];
  long lStack_b8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  
  puVar2 = PTR__kCFAllocatorDefault_11034ab78;
  puVar3 = auStack_100;
  puVar5 = auStack_100;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)(param_2 + 0x80);
  lVar6 = *plVar10;
  if (lVar6 == 0) {
    FUN_1090c950c(auStack_100);
    FUN_1090cce40(auStack_100,*(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0,
                  *(undefined4 *)(param_2 + 0x68));
    FUN_1090cce40();
    FUN_1090cce98();
    FUN_1090c950c(&uStack_98);
    uStack_90 = uStack_98;
    uStack_98 = 0;
    FUN_1090cb8dc(puVar3,*(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390,
                  &uStack_90);
    FUN_1090ccef0();
    FUN_1090cd3e0(&uStack_88,puVar3);
    FUN_1090c98c4(&uStack_90);
    FUN_1090c98c4(&uStack_98);
    FUN_1090c98c4(auStack_100);
    if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
      uVar7 = (uint)*(long *)(param_2 + 0x18);
      uVar7 = uVar7 & -uVar7;
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar7 = 1;
      }
      FUN_1090cce40(&uStack_88,*(undefined8 *)PTR__kCVPixelBufferBytesPerRowAlignmentKey_11034a370,
                    uVar7);
    }
    else {
      _memcpy(auStack_100,param_2 + 0x10,0x50);
      lVar6 = 0x10;
      uVar1 = 0xffffffffffffffff;
      for (; lStack_b8 != 0; lStack_b8 = lStack_b8 + -1) {
        uVar9 = *(ulong *)((long)auStack_100 + lVar6);
        uVar8 = uVar9 & -uVar9;
        if (uVar9 == 0) {
          uVar8 = 1;
        }
        if (uVar1 <= uVar8) {
          uVar8 = uVar1;
        }
        lVar6 = lVar6 + 0x18;
        uVar1 = uVar8;
      }
      FUN_1090cce40(&uStack_88,*(undefined8 *)PTR__kCVPixelBufferPlaneAlignmentKey_11034a3b8);
    }
    plVar11 = *(long **)puVar2;
    plVar4 = plVar11;
    _CVPixelBufferPoolCreate(plVar11,0,uStack_88,plVar10);
    if ((int)plVar4 == 0) {
      FUN_1090c98c4(&uStack_88);
      lVar6 = *plVar10;
      plVar4 = plVar11;
      goto LAB_1090ccf9c;
    }
    FUN_1090caa88(auStack_100,&UNK_10f54ff3f);
    lStack_80 = 2;
    uStack_78 = auStack_100[0];
    auStack_100[0] = 0;
    func_0x000104bda93c(auStack_100);
    FUN_1090c98c4(&uStack_88);
  }
  else {
    plVar4 = *(long **)PTR__kCFAllocatorDefault_11034ab78;
LAB_1090ccf9c:
    auStack_100[0] = 0;
    _CVPixelBufferPoolCreatePixelBuffer(plVar4,lVar6,auStack_100);
    if ((int)plVar4 == 0) {
      lStack_80 = 1;
      uStack_78 = auStack_100[0];
      auStack_100[0] = 0;
    }
    else {
      FUN_1090caa88(&uStack_88,&UNK_10f54fde4);
      lStack_80 = 2;
      uStack_78 = uStack_88;
      uStack_88 = 0;
      func_0x000104bda93c(&uStack_88);
    }
    FUN_1090c1890(auStack_100);
  }
  uVar1 = uStack_78;
  if (lStack_80 == 1) {
    _CVPixelBufferLockBaseAddress(uStack_78,0);
    if (*(char *)(param_2 + 0x78) == '\x01') {
      _memcpy(auStack_100,param_3,0x68);
      for (plVar10 = (long *)0x0; plVar4 = param_3, plVar10 != plStack_a0;
          plVar10 = (long *)((long)plVar10 + 1)) {
        uVar8 = uVar1;
        _CVPixelBufferGetBaseAddressOfPlane(uVar1,plVar10);
        uVar9 = uVar1;
        param_3 = plVar10;
        _CVPixelBufferGetBytesPerRowOfPlane();
        if (uVar9 != auStack_100[(long)plVar10 * 4 + 3]) {
          func_0x0001090cd418();
          plVar4 = (long *)&UNK_10f54ff62;
          func_0x00010b99f5f8(&uStack_88);
          *param_1 = 2;
          param_1[1] = uStack_88;
          uStack_88 = 0;
          puVar5 = &uStack_88;
          goto LAB_1090cd30c;
        }
        lVar6 = 0;
        uVar12 = auStack_100[(long)plVar10 * 4];
        for (uVar13 = auStack_100[(long)plVar10 * 4 + 2]; uVar13 != 0; uVar13 = uVar13 - 1) {
          param_3 = (long *)(uVar12 + lVar6);
          _memcpy(uVar8 + lVar6,param_3,uVar9);
          lVar6 = lVar6 + uVar9;
        }
      }
    }
    else {
      plVar4 = (long *)*param_3;
      uVar9 = param_3[4];
      uVar8 = uVar1;
      _CVPixelBufferGetBytesPerRow();
      if (uVar8 != uVar9) {
        func_0x0001090cd418();
        plVar4 = (long *)&UNK_10f54ff62;
        func_0x00010b99f5f8(auStack_100);
        *param_1 = 2;
        param_1[1] = auStack_100[0];
        auStack_100[0] = 0;
LAB_1090cd30c:
        func_0x000104bda93c(puVar5);
        goto LAB_1090cd310;
      }
      _CVPixelBufferGetBaseAddress(uVar1);
      _memcpy();
    }
    func_0x0001090cd418();
    param_1[1] = uStack_78;
    *param_1 = lStack_80;
  }
  else {
    *param_1 = lStack_80;
    param_1[1] = uStack_78;
  }
  lStack_80 = 0;
LAB_1090cd310:
  plVar10 = &lStack_80;
  func_0x0001090c1a04();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    plVar10 = &lStack_80;
    func_0x0001090c1a04();
    func_0x0001090cd454();
    *plVar10 = *plVar4;
    func_0x0001090cba18();
    return plVar10;
  }
  return plVar10;
}



/* Entry: 1090cd3e0; end: 1090cd407;  */

undefined8 * FUN_1090cd3e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x0001090cba18();
  return param_1;
}



/* Entry: 1090cd408; end: 1090cd45f;  */

void FUN_1090cd408(undefined8 param_1,long param_2)

{
  long lStack0000000000000008;
  
  if (param_2 != 0) {
    lStack0000000000000008 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return;
  }
  return;
}



/* Entry: 1090cd460; end: 1090cd473;  */

void FUN_1090cd460(void)

{
  func_0x0001090f3774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090cd474; end: 1090cd51f;  */

void FUN_1090cd474(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puStack_38;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  plVar5 = puVar3 + 1;
  *plVar5 = 1;
  *puVar3 = &PTR_FUN_110ad9208;
  uVar4 = 0;
  _CMMemoryPoolCreate();
  puVar3[2] = uVar4;
  _CMMemoryPoolGetAllocator();
  puVar3[3] = uVar4;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *param_1 = puVar3;
  puStack_38 = puVar3;
  FUN_1090cd5e0(&puStack_38);
  return;
}



/* Entry: 1090cd520; end: 1090cd523;  */

undefined8 * FUN_1090cd520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9208;
  _CMMemoryPoolInvalidate(param_1[2]);
  FUN_1090cd570(param_1 + 2);
  return param_1;
}



/* Entry: 1090cd524; end: 1090cd537;  */

void FUN_1090cd524(void)

{
  FUN_1090cd5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090cd538; end: 1090cd567;  */

void FUN_1090cd538(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _CFAllocatorAllocate(uVar1,param_3,0);
  *param_1 = 1;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1090cd568; end: 1090cd56f;  */

void FUN_1090cd568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFAllocatorDeallocate_11034a488)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1090cd570; end: 1090cd59f;  */

long * FUN_1090cd570(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
    *param_1 = 0;
  }
  return param_1;
}



/* Entry: 1090cd5a0; end: 1090cd5df;  */

undefined8 * FUN_1090cd5a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9208;
  _CMMemoryPoolInvalidate(param_1[2]);
  FUN_1090cd570(param_1 + 2);
  return param_1;
}



/* Entry: 1090cd5e0; end: 1090cd627;  */

long * FUN_1090cd5e0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 1090cd628; end: 1090cd62f;  */

void FUN_1090cd628(void)

{
  return;
}



/* Entry: 1090cd630; end: 1090cd64f;  */

void FUN_1090cd630(undefined8 *param_1)

{
  FUN_1090e32d4();
  *param_1 = &PTR_FUN_110ad9278;
  return;
}



/* Entry: 1090cd650; end: 1090cd653;  */

undefined8 * FUN_1090cd650(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ada028;
  func_0x0001090e3424(param_1 + 10);
  __ZNSt3__15mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 1090cd654; end: 1090cd667;  */

void FUN_1090cd654(void)

{
  func_0x0001090e331c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090cd668; end: 1090cd9fb;  */

void FUN_1090cd668(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 ****ppppuVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *****pppppuVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  uint *puVar10;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *****pppppuVar14;
  long lVar15;
  uint uStack_98;
  undefined1 uStack_94;
  uint uStack_8c;
  ulong uStack_88;
  long *plStack_80;
  uint *puStack_78;
  undefined8 ****ppppuStack_68;
  undefined8 ****ppppuStack_60;
  long lStack_58;
  
  puVar5 = param_3;
  func_0x0001090c4a34();
  if ((int)puVar5 != 0) {
    plVar12 = (long *)*param_3;
    func_0x000107c278b8(&ppppuStack_68,&DAT_10f54d2c1);
    FUN_1090cdd4c(*(undefined8 *)(*plVar12 + 0x10));
    func_0x0001090cdd5c();
    ppppuStack_68 = (undefined8 *****)0x0;
    ppppuStack_60 = (undefined8 *****)0x0;
    lStack_58 = 0;
    pppppuVar6 = &ppppuStack_68;
    FUN_1090c4b3c(pppppuVar6,param_3);
    ppppuVar2 = ppppuStack_60;
    pppppuVar14 = (undefined8 *****)ppppuStack_68;
    if ((int)pppppuVar6 != 0) {
      for (; pppppuVar14 != (undefined8 *****)ppppuVar2;
          pppppuVar14 = (undefined8 *****)((long)pppppuVar14 + 4)) {
        uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)pppppuVar14);
        FUN_1090c61b0(&plStack_80,param_2,&uStack_88);
      }
    }
    func_0x0001090cdd6c();
    (*extraout_x8)();
    func_0x0001090cdd64();
    if (((ulong)pppppuVar6 & 1) != 0) {
      return;
    }
  }
  uStack_88 = 0;
  plVar12 = (long *)*param_3;
  func_0x000107c278b8(&ppppuStack_68,&DAT_10f54d26e);
  FUN_1090cdd4c(*(undefined8 *)(*plVar12 + 0x10));
  func_0x0001090cdd5c();
  iVar3 = 0;
  _VTCopyVideoEncoderList(0,&uStack_88);
  func_0x0001090cdd6c();
  (*extraout_x8_00)();
  if (iVar3 == 0) {
    uVar7 = uStack_88;
    _CFArrayGetCount();
    for (uVar13 = 0; (uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU)) != uVar13;
        uVar13 = uVar13 + 1) {
      uVar8 = uStack_88;
      _CFArrayGetValueAtIndex(uStack_88,uVar13);
      iVar3 = (int)uVar8;
      _CFDictionaryGetValue();
      plStack_80 = (long *)0x0;
      _CFNumberGetValue();
      if (iVar3 != 0) {
        uStack_98 = (uint)plStack_80;
        FUN_1090c61b0(&ppppuStack_68,param_2,&uStack_98);
      }
    }
    for (lVar15 = 0; lVar15 != 0xc; lVar15 = lVar15 + 4) {
      uVar4 = *(uint *)(&UNK_10dfb39dc + lVar15);
      plVar12 = param_2;
      uStack_8c = uVar4;
      FUN_1090c624c(param_2,&uStack_8c);
      plVar9 = param_2;
      FUN_1090cdbfc(param_2,&uStack_8c,plVar12);
      if ((long *)(*param_2 + param_2[3]) == plVar9) {
        uVar1 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        uStack_98 = uVar1 >> 0x10 | uVar1 << 0x10;
        uStack_94 = 0;
        func_0x000107c278b8(&plStack_80,&UNK_10f54ffa3);
        func_0x000107c27fac(&ppppuStack_68,&plStack_80,&uStack_98);
        func_0x0001090cdd7c();
        plVar12 = (long *)*param_3;
        pppppuVar6 = (undefined8 *****)ppppuStack_68;
        if (-1 < lStack_58) {
          pppppuVar6 = &ppppuStack_68;
        }
        func_0x000107c278b8(&plStack_80,pppppuVar6);
        (**(code **)(*plVar12 + 0x10))(plVar12,1,&plStack_80);
        func_0x0001090cdd7c();
        _VTIsHardwareDecodeSupported();
        func_0x0001090cdd6c();
        (*extraout_x8_01)();
        if (uVar4 != 0) {
          func_0x0001090c6734(&plStack_80,param_2,&uStack_8c);
        }
        func_0x0001090cdd5c();
      }
    }
    puVar10 = (uint *)param_2[2];
    if (puVar10 != (uint *)0x0) {
      ppppuStack_68 = (undefined8 *****)0x0;
      ppppuStack_60 = (undefined8 *****)0x0;
      lStack_58 = 0;
      func_0x0001056c5718(&ppppuStack_68);
      plVar12 = param_2;
      FUN_1090c5ea4();
      lVar15 = *param_2;
      lVar11 = param_2[3];
      plStack_80 = plVar12;
      puStack_78 = puVar10;
      while (plStack_80 != (long *)(lVar15 + lVar11)) {
        uStack_98 = *puStack_78;
        func_0x000107c2842c(&ppppuStack_68,&uStack_98);
        FUN_1090c5ed0(&plStack_80);
      }
      FUN_1090c5124(&ppppuStack_68,param_3);
      func_0x0001090cdd64();
    }
  }
  FUN_1090cdbc8(&uStack_88);
  return;
}



/* Entry: 1090cd9fc; end: 1090cdbc7;  */

undefined8 ** FUN_1090cd9fc(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *param_3;
  if ((lVar4 == 0) || (___dynamic_cast(lVar4,&PTR_DAT_110ada368,&PTR_DAT_110ada380,0), lVar4 == 0))
  {
    func_0x00010b99f5f8(&puStack_58,&UNK_10f54ffc0);
    *param_1 = 2;
    param_1[1] = puStack_58;
    puStack_58 = (undefined8 *)0x0;
    ppuVar6 = &puStack_58;
    func_0x000104bda93c();
  }
  else {
    puVar5 = (undefined8 *)0xe0;
    __Znwm();
    plVar7 = puVar5 + 1;
    *plVar7 = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_110ad92d8;
    puVar1 = puVar5 + 3;
    FUN_1090cdd84(puVar1,param_4);
    if ((puVar5[5] == 0) || (*(long *)(puVar5[5] + 8) == -1)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puStack_58 = puVar1;
      puStack_50 = puVar5;
      func_0x000107c278e4(puVar5 + 4,&puStack_58);
      func_0x000107c278ec(&puStack_58);
    }
    puStack_60 = puVar1;
    FUN_1090ce044(&puStack_58,puVar1,lVar4);
    if (puStack_58 == (undefined8 *)0x1) {
      if (puVar5[5] != 0) {
        plVar7 = (long *)(puVar5[5] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *param_1 = 1;
      param_1[1] = puVar1;
      uStack_68 = 0;
      FUN_1090c68d4(&uStack_68);
    }
    else {
      *param_1 = 2;
      param_1[1] = puStack_50;
      puStack_50 = (undefined8 *)0x0;
    }
    func_0x0001080c6234(&puStack_58);
    ppuVar6 = &puStack_60;
    FUN_1090cdd20();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_1090cdd20(&puStack_60);
    __Unwind_Resume();
    if (*ppuVar6 != (undefined8 *)0x0) {
      _CFRelease();
      *ppuVar6 = (undefined8 *)0x0;
    }
    return ppuVar6;
  }
  return ppuVar6;
}



/* Entry: 1090cdbc8; end: 1090cdbfb;  */

long * FUN_1090cdbc8(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
    *param_1 = 0;
  }
  return param_1;
}



/* Entry: 1090cdbfc; end: 1090cdc4b;  */

long FUN_1090cdbfc(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_1090cdc4c();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 1090cdc4c; end: 1090cdceb;  */

bool FUN_1090cdc4c(long *param_1,int *param_2,ulong param_3,ulong *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar2 = 0;
  uVar5 = param_3 >> 7;
  uVar3 = param_1[3];
  lVar4 = *param_1;
  while( true ) {
    uVar5 = uVar5 & uVar3;
    uVar7 = *(ulong *)(lVar4 + uVar5);
    uVar6 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    iVar1 = *param_2;
    for (uVar6 = uVar6 + 0xfefefefefefefeff & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar8 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar5 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar3;
      *param_4 = uVar8;
      if (*(int *)(param_1[1] + uVar8 * 4) == iVar1) goto LAB_1090cdcdc;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar5 = lVar2 + uVar5;
  }
LAB_1090cdcdc:
  return uVar6 != 0;
}



/* Entry: 1090cdcec; end: 1090cdcff;  */

void FUN_1090cdcec(void)

{
  func_0x0001090cdd10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090cdd00; end: 1090cdd1f;  */

void FUN_1090cdd00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090cdd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090cdd20; end: 1090cdd4b;  */

long * FUN_1090cdd20(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c3105c();
  }
  return param_1;
}



/* Entry: 1090cdd4c; end: 1090cdd83;  */

void FUN_1090cdd4c(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001090cdd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1090cdd84; end: 1090cde2f;  */

undefined8 * FUN_1090cdd84(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ad9328;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 3);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar1 = *param_2;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001090cf2e8();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[0xe] = lVar1;
  param_1[0xf] = 0x3432306600000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x100000000;
  param_1[0x15] = 0x3f80000000000000;
  param_1[0x14] = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



/* Entry: 1090cde30; end: 1090cdf07;  */

/* WARNING: Removing unreachable block (ram,0x0001090cdeac) */

undefined8 * FUN_1090cde30(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = param_1 + 3;
  *param_1 = &PTR_FUN_110ad9328;
  __ZNSt3__115recursive_mutex4lockEv(puVar6);
  plVar7 = param_1 + 0xd;
  plVar4 = (long *)*plVar7;
  if (plVar4 != (long *)0x0) {
    *plVar7 = 0;
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  func_0x0001090cf314();
  __ZNSt3__115recursive_mutex6unlockEv(puVar6);
  func_0x0001090cf278();
  FUN_1090958e8(param_1 + 0xe);
  FUN_1090c7cf8(plVar7);
  FUN_1090aeaf0(param_1 + 0xc);
  FUN_1090cf0c8(param_1 + 0xb);
  __ZNSt3__115recursive_mutexD1Ev(puVar6);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090cdf08; end: 1090cdf37;  */

undefined8 * FUN_1090cdf08(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1090cf0ec();
  *param_1 = *param_2;
  *param_2 = 0;
  return param_1;
}



/* Entry: 1090cdf38; end: 1090cdf3b;  */

/* WARNING: Removing unreachable block (ram,0x0001090cdeac) */

undefined8 * FUN_1090cdf38(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = param_1 + 3;
  *param_1 = &PTR_FUN_110ad9328;
  __ZNSt3__115recursive_mutex4lockEv(puVar6);
  plVar7 = param_1 + 0xd;
  plVar4 = (long *)*plVar7;
  if (plVar4 != (long *)0x0) {
    *plVar7 = 0;
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  func_0x0001090cf314();
  __ZNSt3__115recursive_mutex6unlockEv(puVar6);
  func_0x0001090cf278();
  FUN_1090958e8(param_1 + 0xe);
  FUN_1090c7cf8(plVar7);
  FUN_1090aeaf0(param_1 + 0xc);
  FUN_1090cf0c8(param_1 + 0xb);
  __ZNSt3__115recursive_mutexD1Ev(puVar6);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090cdf3c; end: 1090cdf4f;  */

void FUN_1090cdf3c(void)

{
  FUN_1090cde30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090cdf50; end: 1090cdf7f;  */

void FUN_1090cdf50(void)

{
  long unaff_x19;
  
  func_0x0001090cf240();
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    *(long *)(unaff_x19 + 0x80) = *(long *)(unaff_x19 + 0x80) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1090cdf80; end: 1090ce043;  */

void FUN_1090cdf80(long *param_1,long param_2)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  if (param_2 == 0) {
LAB_1090cdfdc:
    *param_1 = param_2;
    param_1[1] = 0;
  }
  else {
    if (*(long *)(param_2 + 8) == 0) {
      lVar1 = *(long *)(param_2 + 0x10);
      if (lVar1 == 0) goto LAB_1090cdfdc;
      do {
        FUN_1090cf230();
      } while (extraout_w10_00 != 0);
      *param_1 = param_2;
      param_1[1] = lVar1;
    }
    else {
      func_0x000107c278f0(&lStack_40);
      if (lStack_40 == 0) {
        param_2 = 0;
        lStack_38 = 0;
      }
      else if (lStack_38 != 0) {
        do {
          FUN_1090cf230();
        } while (extraout_w10 != 0);
      }
      func_0x000107c278ec(&lStack_40);
      *param_1 = param_2;
      param_1[1] = lStack_38;
      if (lStack_38 == 0) goto LAB_1090ce02c;
    }
    do {
      FUN_1090cf230();
    } while (extraout_w10_01 != 0);
  }
LAB_1090ce02c:
  func_0x0001090cf300();
  return;
}



/* Entry: 1090ce044; end: 1090ce317;  */

void FUN_1090ce044(undefined8 *param_1,long param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = &uStack_90;
  puVar4 = &uStack_90;
  puVar5 = param_3;
  func_0x0001090cf2a8();
  uStack_48 = extraout_x8;
  FUN_1090ca330(&lStack_58,puVar5);
  uVar2 = lStack_58 == 1;
  if ((bool)uVar2) {
    func_0x0001090aea58(param_2 + 0x60,&uStack_50);
    FUN_1090c950c(&uStack_90);
    FUN_1090cce98(&uStack_90,*(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0,
                  *(undefined4 *)(param_2 + 0x7c));
    FUN_1090cce40();
    FUN_1090cce40();
    FUN_1090ccef0();
    FUN_1090c950c(&plStack_78);
    plStack_68 = plStack_78;
    plStack_78 = (long *)0x0;
    FUN_1090cb8dc(puVar3,*(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390,
                  &plStack_68);
    FUN_1090cd3e0(&uStack_60,puVar3);
    FUN_1090c98c4(&plStack_68);
    FUN_1090c98c4(&plStack_78);
    FUN_1090c98c4(&uStack_90);
    plVar6 = *(long **)(*(long *)(param_2 + 0x70) + 0x18);
    lStack_70 = *(long *)(*(long *)(param_2 + 0x70) + 0x20);
    plStack_78 = plVar6;
    if (lStack_70 != 0) {
      do {
        func_0x0001090cf230();
      } while (extraout_w10 != 0);
    }
    func_0x000107c278b8(&uStack_90,&DAT_10f54e586);
    func_0x0001090cf308(*(undefined8 *)(*plVar6 + 0x10));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
    FUN_10909501c(&plStack_78);
    puVar5 = *(undefined1 **)PTR__kCFAllocatorDefault_11034ab78;
    _VTDecompressionSessionCreate(puVar5,uStack_50,0,uStack_60,0,param_2 + 0x58);
    uStack_90 = *(undefined8 *)(*(long *)(param_2 + 0x70) + 0x18);
    lStack_88 = *(long *)(*(long *)(param_2 + 0x70) + 0x20);
    if (lStack_88 != 0) {
      do {
        func_0x0001090cf230();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001090cf2b8();
    (*extraout_x8_00)();
    FUN_10909501c(&uStack_90);
    if ((int)puVar5 == 0) {
      iVar1 = *(int *)(param_3 + 0x10);
      *(int *)(param_2 + 0x78) = iVar1;
      uVar2 = iVar1 == 0x68766331;
      *(undefined1 *)(param_2 + 0xc0) = uVar2;
      *param_1 = 1;
      puVar5 = (undefined1 *)puVar4;
    }
    else {
      FUN_1090caa2c(&uStack_90,&UNK_10f550025,puVar5);
      *param_1 = 2;
      param_1[1] = uStack_90;
      uStack_90 = 0;
      func_0x000104bda93c(&uStack_90);
    }
    FUN_1090c98c4(&uStack_60);
  }
  else {
    *param_1 = 2;
    param_1[1] = uStack_50;
    uStack_50 = 0;
  }
  plVar6 = &lStack_58;
  func_0x0001090aeac8();
  func_0x0001090cf254(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    FUN_1090c98c4(&uStack_60);
    func_0x0001090aeac8(&lStack_58);
    func_0x0001090cf268();
    func_0x0001090cf240();
    FUN_1090c7484(plVar6 + 0xd,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(plVar6 + 3);
    return;
  }
  return;
}



/* Entry: 1090ce318; end: 1090ce353;  */

void FUN_1090ce318(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  
  func_0x0001090cf240();
  FUN_1090c7484(unaff_x19 + 0x68,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1090ce354; end: 1090ce3a3;  */

bool FUN_1090ce354(long param_1,long *param_2)

{
  return *(int *)(param_1 + 0x78) == *(int *)(*param_2 + 0x10);
}



/* Entry: 1090ce3a4; end: 1090ce3d3;  */

bool FUN_1090ce3a4(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001090cf240();
  uVar1 = *(ulong *)(unaff_x19 + 0x80);
  func_0x0001090cf24c();
  return uVar1 < 4;
}



/* Entry: 1090ce3d4; end: 1090ce90b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1090ce3d4(long param_1,long *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined **param_5,undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined ********ppppppppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined *******pppppppuVar9;
  undefined *******pppppppuVar10;
  long *plVar11;
  undefined *******pppppppuVar12;
  undefined **ppuVar13;
  undefined ********ppppppppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  undefined8 extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined ********ppppppppuVar20;
  undefined8 uVar21;
  long lVar22;
  long alStack_280 [2];
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined *******pppppppuStack_250;
  undefined *******pppppppuStack_248;
  undefined **ppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *******pppppppuStack_228;
  undefined *******pppppppuStack_220;
  undefined **ppuStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined *******pppppppuStack_f8;
  long lStack_f0;
  undefined4 uStack_e4;
  undefined ********ppppppppuStack_e0;
  long lStack_d8;
  undefined ********ppppppppuStack_d0;
  long lStack_c8;
  undefined1 uStack_c0;
  undefined *******pppppppuStack_b8;
  undefined *******apppppppuStack_b0 [11];
  long lStack_58;
  undefined ********ppppppppuStack_50;
  undefined8 uStack_48;
  
  lVar22 = param_1;
  func_0x0001090cf2a8();
  lVar22 = lVar22 + 0x18;
  uStack_c0 = 1;
  lStack_c8 = lVar22;
  uStack_48 = extraout_x8;
  __ZNSt3__115recursive_mutex4lockEv(lVar22);
  lVar17 = *param_2;
  ppppppppuVar5 = *(undefined *********)(lVar17 + 0x10);
  if (ppppppppuVar5 == (undefined ********)0x0) {
LAB_1090ce558:
    ppppppppuVar14 = (undefined ********)&UNK_10f54fa39;
    func_0x00010b99f5f8(&pppppppuStack_b8);
    if (*(long **)(param_1 + 0x68) != (long *)0x0) {
      ppppppppuVar14 = &pppppppuStack_b8;
      (**(code **)(**(long **)(param_1 + 0x68) + 0x30))();
    }
    func_0x000104bda93c(&pppppppuStack_b8);
  }
  else {
    ppuVar13 = &PTR_DAT_110ada368;
    param_4 = (undefined4 *)0x0;
    ___dynamic_cast(ppppppppuVar5,&PTR_DAT_110ada368,&PTR_DAT_110ada380);
    if (ppppppppuVar5 == (undefined ********)0x0) goto LAB_1090ce558;
    if (*(long *)(param_1 + 0x58) == 0) {
      ppppppppuVar14 = ppppppppuVar5;
      FUN_1090ce044(&pppppppuStack_b8,param_1);
      in_ZR = pppppppuStack_b8 == (undefined *******)0x1;
      if ((bool)in_ZR) {
        func_0x0001090cf2f8();
        lVar17 = *param_2;
        ppuVar13 = (undefined **)ppppppppuVar14;
        goto LAB_1090ce46c;
      }
      if (*(long **)(param_1 + 0x68) != (long *)0x0) {
        ppppppppuVar14 = apppppppuStack_b0;
        (**(code **)(**(long **)(param_1 + 0x68) + 0x30))();
      }
      func_0x0001090cf2f8();
    }
    else {
LAB_1090ce46c:
      func_0x0001090f3568();
      ppppppppuVar14 = (undefined ********)(param_1 + 0x90);
      lStack_d8 = lVar17;
      ppppppppuStack_d0 = (undefined ********)ppuVar13;
      func_0x0001090fbf2c();
      FUN_1090cae24(&lStack_58,param_2);
      in_ZR = lStack_58 == 1;
      if ((bool)in_ZR) {
        uVar15 = *(undefined8 *)((long)ppppppppuVar5 + 0x24);
        uVar19 = *(undefined8 *)((long)ppppppppuVar5 + 0x1c);
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)((long)ppppppppuVar5 + 0x2c);
        *(undefined8 *)(param_1 + 0xa8) = uVar15;
        *(undefined8 *)(param_1 + 0xa0) = uVar19;
        __ZNSt3__115recursive_mutex4lockEv(lVar22);
        *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
        __ZNSt3__115recursive_mutex6unlockEv(lVar22);
        FUN_1090cf204(&ppppppppuStack_e0,*(undefined8 *)(param_1 + 0x58));
        func_0x00010731a274(&lStack_c8);
        uStack_e4 = 0;
        pppppppuVar12 = *(undefined ********)(*(long *)(param_1 + 0x70) + 0x28);
        apppppppuStack_b0[0] = *(undefined ********)(*(long *)(param_1 + 0x70) + 0x30);
        pppppppuStack_b8 = pppppppuVar12;
        if (apppppppuStack_b0[0] != (undefined *******)0x0) {
          do {
            func_0x0001090cf230();
          } while (extraout_w10 != 0);
        }
        (*(code *)(*pppppppuVar12)[2])();
        FUN_1090971c4(&pppppppuStack_b8);
        in_ZR = (*(uint *)(*param_2 + 0x44) & 0xd) == 1;
        _snprintf();
        pppppppuVar9 = *(undefined ********)(*(long *)(param_1 + 0x70) + 0x18);
        lStack_f0 = *(long *)(*(long *)(param_1 + 0x70) + 0x20);
        pppppppuStack_f8 = pppppppuVar9;
        if (lStack_f0 != 0) {
          do {
            func_0x0001090cf230();
          } while (extraout_w10_00 != 0);
        }
        puVar6 = &uStack_110;
        func_0x000107c278b8(puVar6,&pppppppuStack_b8);
        func_0x0001090cf308((*pppppppuVar9)[2]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
        func_0x0001090cf288();
        lStack_118 = *(long *)(param_1 + 0x70);
        if ((lStack_118 != 0) && (*(long *)(lStack_118 + 0x10) != 0)) {
          do {
            func_0x0001090cf2e8();
            lStack_118 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        FUN_1090cdf80(&uStack_110,param_1);
        uStack_128 = *(undefined8 *)(param_1 + 0x88);
        puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_160 = 0x46000000;
        pcStack_158 = FUN_1090ce90c;
        puStack_150 = &UNK_110ad9390;
        if ((lStack_118 != 0) && (*(long *)(lStack_118 + 0x10) != 0)) {
          plVar11 = (long *)(*(long *)(lStack_118 + 0x10) + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_148 = lStack_118;
        uStack_120 = SUB84(pppppppuVar12,0);
        lStack_130 = lStack_108;
        uStack_138 = uStack_110;
        ppppppppuVar5 = ppppppppuStack_e0;
        ppppppppuVar14 = ppppppppuStack_50;
        puStack_140 = puVar6;
        if (lStack_108 != 0) {
          do {
            func_0x0001090cf2e8();
            uStack_128 = extraout_x8_01;
          } while (extraout_w11_00 != 0);
        }
        param_4 = &uStack_e4;
        param_5 = &puStack_168;
        _VTDecompressionSessionDecodeFrameWithOutputHandler();
        if ((int)ppppppppuVar5 != 0) {
          FUN_1090c7748(&lStack_c8);
          pppppppuStack_f8 = *(undefined ********)(lStack_118 + 0x18);
          lStack_f0 = *(long *)(lStack_118 + 0x20);
          if (lStack_f0 != 0) {
            do {
              func_0x0001090cf230();
            } while (extraout_w10_01 != 0);
          }
          func_0x0001090cf2b8();
          (*extraout_x8_02)();
          func_0x0001090cf288();
          pppppppuStack_f8 = *(undefined ********)(lStack_118 + 0x28);
          lStack_f0 = *(long *)(lStack_118 + 0x30);
          if (lStack_f0 != 0) {
            do {
              func_0x0001090cf230();
            } while (extraout_w10_02 != 0);
          }
          func_0x0001090cf2b8();
          (*extraout_x8_03)();
          FUN_1090971c4(&pppppppuStack_f8);
          func_0x0001090cf2d8();
          FUN_1090caa2c(&pppppppuStack_f8,&DAT_10f54e3ec);
          ppppppppuVar14 = ppppppppuVar5;
          if (*(long **)(param_1 + 0x68) != (long *)0x0) {
            ppppppppuVar14 = &pppppppuStack_f8;
            (**(code **)(**(long **)(param_1 + 0x68) + 0x30))();
          }
          func_0x000104bda93c(&pppppppuStack_f8);
        }
        func_0x0001090cf118(&uStack_138);
        FUN_1090958e8(&lStack_148);
        func_0x0001090cf290();
        FUN_1090958e8(&lStack_118);
        FUN_1090cf0c8(&ppppppppuStack_e0);
      }
      else if (*(long **)(param_1 + 0x68) != (long *)0x0) {
        ppppppppuVar14 = (undefined ********)&ppppppppuStack_50;
        (**(code **)(**(long **)(param_1 + 0x68) + 0x30))();
      }
      FUN_1090ac030(&lStack_58);
    }
  }
  func_0x000107c281c0();
  func_0x0001090cf254(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090cf2f8();
  plVar11 = &lStack_c8;
  func_0x000107c281c0();
  func_0x0001090cf268();
  plVar7 = plVar11;
  func_0x0001090cf2a8();
  pppppppuStack_220 = *(undefined ********)(plVar7[4] + 0x18);
  ppuStack_218 = *(undefined ***)(plVar7[4] + 0x20);
  uStack_1f0 = extraout_x8_04;
  if (ppuStack_218 != (undefined **)0x0) {
    do {
      func_0x0001090cf230();
    } while (extraout_w10_03 != 0);
  }
  func_0x0001090cf2b8();
  (*extraout_x8_05)();
  FUN_10909501c(&pppppppuStack_220);
  pppppppuStack_220 = *(undefined ********)(plVar11[4] + 0x28);
  ppuStack_218 = *(undefined ***)(plVar11[4] + 0x30);
  if (ppuStack_218 != (undefined **)0x0) {
    do {
      func_0x0001090cf230();
    } while (extraout_w10_04 != 0);
  }
  func_0x0001090cf2b8();
  (*extraout_x8_06)();
  func_0x0001090cf280();
  ppppppppuVar5 = (undefined ********)(plVar11 + 6);
  FUN_1090cee68(alStack_280);
  if (alStack_280[0] == 0) goto LAB_1090ced40;
  puVar18 = *param_5;
  uVar1 = *(uint *)(param_5 + 1);
  uVar19 = *param_6;
  uVar2 = *(uint *)(param_6 + 1);
  ppppppppuVar20 = (undefined ********)plVar11[8];
  __ZNSt3__115recursive_mutex4lockEv(alStack_280[0] + 0x18);
  in_ZR = ppppppppuVar20 == *(undefined *********)(alStack_280[0] + 0x88);
  if ((bool)in_ZR) {
    if ((int)ppppppppuVar14 != 0) {
      in_ZR = ppppppppuVar20 == *(undefined *********)(alStack_280[0] + 0x88);
      if ((bool)in_ZR) {
        in_ZR = *(char *)(alStack_280[0] + 0xc0) == '\x01';
        if ((!(bool)in_ZR) ||
           (in_ZR = *(ulong *)(alStack_280[0] + 0xb8) == 0xe,
           *(ulong *)(alStack_280[0] + 0xb8) < 0xf)) {
          FUN_1090caa2c(&pppppppuStack_220,&UNK_10f54fff0);
          if (*(long **)(alStack_280[0] + 0x68) != (long *)0x0) {
            ppppppppuVar14 = &pppppppuStack_220;
            (**(code **)(**(long **)(alStack_280[0] + 0x68) + 0x30))();
          }
          func_0x000104bda93c(&pppppppuStack_220);
          ppppppppuVar5 = ppppppppuVar14;
        }
      }
      else {
        pppppppuStack_220 = *(undefined ********)(*(long *)(alStack_280[0] + 0x70) + 0x38);
        if (pppppppuStack_220 != (undefined *******)0x0) {
          pppppppuVar12 = pppppppuStack_220 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
            if (bVar4) {
              *pppppppuVar12 = (undefined ******)((long)*pppppppuVar12 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        func_0x0001090e4d6c();
        FUN_109097110(&pppppppuStack_220);
        ppppppppuVar5 = ppppppppuVar20;
      }
      goto LAB_1090ced38;
    }
    if (param_4 == (undefined4 *)0x0) {
      if (*(long **)(alStack_280[0] + 0x68) != (long *)0x0) {
        (**(code **)(**(long **)(alStack_280[0] + 0x68) + 0x28))();
      }
      goto LAB_1090ced38;
    }
    lVar22 = *(long *)(alStack_280[0] + 0x60);
    if (lVar22 != 0) {
      uVar21 = *(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8;
      lVar17 = lVar22;
      _CMFormatDescriptionGetExtension(lVar22,uVar21);
      uVar15 = *(undefined8 *)PTR__kCVImageBufferTransferFunctionKey_11034a310;
      lVar8 = lVar22;
      _CMFormatDescriptionGetExtension();
      uVar16 = *(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350;
      _CMFormatDescriptionGetExtension();
      if (lVar17 != 0) {
        func_0x0001090cf2e0(param_4,uVar21,lVar17);
      }
      if (lVar8 != 0) {
        func_0x0001090cf2e0(param_4,uVar15,lVar8);
      }
      if (lVar22 != 0) {
        func_0x0001090cf2e0(param_4,uVar16,lVar22);
      }
    }
    _CVPixelBufferGetPixelFormatType(param_4);
    _CVPixelBufferGetWidth();
    _CVPixelBufferGetHeight(param_4);
    pppppppuVar9 = (undefined *******)0x80;
    __Znwm();
    lStack_268 = *(long *)(alStack_280[0] + 0xa8);
    uStack_270 = *(undefined8 *)(alStack_280[0] + 0xa0);
    uStack_260 = *(undefined8 *)(alStack_280[0] + 0xb0);
    pppppppuStack_220 = (undefined *******)&PTR_DAT_110d7e488;
    ppuStack_218 = (undefined **)0x1;
    lStack_208 = 0;
    uStack_200 = 0;
    uStack_210 = 0;
    pppppppuVar12 = pppppppuVar9;
    func_0x0001090e5074();
    pppppppuStack_220 = (undefined *******)&PTR_DAT_110d7e488;
    pppppppuStack_248 = pppppppuVar12;
    _free(uStack_200);
    func_0x0001090f5ed4(&uStack_270,uVar19,(ulong)uVar2 | 0x100000000);
    pppppppuVar10 = (undefined *******)0x98;
    __Znwm();
    pppppppuVar12 = pppppppuVar9 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
      if (bVar4) {
        *pppppppuVar12 = (undefined ******)((long)*pppppppuVar12 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uStack_230 = 0;
    uStack_238 = 0;
    pppppppuStack_228 = pppppppuVar9;
    FUN_1090c7eb4(&pppppppuStack_220,&uStack_270);
    FUN_1090c8f8c(pppppppuVar10,&pppppppuStack_228,puVar18,(ulong)uVar1 | 0x100000000,uVar19,
                  (ulong)uVar2 | 0x100000000,puVar18,(ulong)uVar1 | 0x100000000,&ppuStack_240,
                  &pppppppuStack_220,param_4);
    pppppppuStack_250 = pppppppuVar10;
    func_0x0001090e5d44(ppuStack_218);
    func_0x0001090e5ca4(uStack_238);
    FUN_1090c803c(&pppppppuStack_228);
    func_0x0001090e5d44(lStack_268);
    *(long *)(alStack_280[0] + 0xb8) = *(long *)(alStack_280[0] + 0xb8) + 1;
    pppppppuVar12 = *(undefined ********)(*(long *)(alStack_280[0] + 0x70) + 0x28);
    ppuStack_218 = *(undefined ***)(*(long *)(alStack_280[0] + 0x70) + 0x30);
    pppppppuStack_220 = pppppppuVar12;
    if (ppuStack_218 != (undefined **)0x0) {
      do {
        func_0x0001090cf230();
      } while (extraout_w10_05 != 0);
    }
    ppppppppuVar5 = (undefined ********)0x5;
    (*(code *)(*pppppppuVar12)[5])();
    func_0x0001090cf280();
    if (pppppppuStack_250 != (undefined *******)0x0) {
      pppppppuVar12 = pppppppuStack_250 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
        if (bVar4) {
          *pppppppuVar12 = (undefined ******)((long)*pppppppuVar12 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppppuStack_228 = pppppppuStack_250;
    if (*(long *)(alStack_280[0] + 0x68) == 0) {
      func_0x0001090cf2d8();
    }
    else {
      FUN_1090cdf80(&uStack_270,alStack_280[0]);
      plVar11 = *(long **)(alStack_280[0] + 0x68);
      uVar19 = uStack_270;
      lVar22 = lStack_268;
      if (lStack_268 != 0) {
        do {
          func_0x0001090cf230();
        } while (extraout_w10_06 != 0);
      }
      pppppppuStack_220 = (undefined *******)FUN_1090cf168;
      ppuStack_218 = &PTR_FUN_110ad93d8;
      ppuStack_240 = (undefined **)0x0;
      uStack_238 = 0;
      ppppppppuVar5 = &pppppppuStack_228;
      uStack_210 = uVar19;
      lStack_208 = lVar22;
      (**(code **)(*plVar11 + 0x20))();
      func_0x0001090cf298();
      func_0x0001090cf290();
      func_0x0001090cf118(&uStack_270);
    }
    FUN_1090ac7bc(&pppppppuStack_228);
    FUN_1090cbd0c(&pppppppuStack_250);
    FUN_1090cbaf0(&pppppppuStack_248);
  }
  else {
LAB_1090ced38:
    func_0x0001090cf2d8();
  }
  func_0x0001090cf24c();
LAB_1090ced40:
  func_0x0001090cf140();
  func_0x0001090cf254(uStack_1f0);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1090ac7bc(&pppppppuStack_228);
    FUN_1090cbd0c(&pppppppuStack_250);
    FUN_1090cbaf0(&pppppppuStack_248);
    func_0x0001090cf24c();
    plVar11 = alStack_280;
    func_0x0001090cf140();
    func_0x0001090cf2c4();
    *plVar11 = 0;
    plVar11[1] = 0;
    pppppppuVar12 = ppppppppuVar5[1];
    if (pppppppuVar12 != (undefined *******)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plVar11[1] = (long)pppppppuVar12;
      if (pppppppuVar12 != (undefined *******)0x0) {
        *plVar11 = (long)*ppppppppuVar5;
      }
    }
    return;
  }
  return;
}



/* Entry: 1090ce90c; end: 1090cee67;  */

void FUN_1090ce90c(long param_1,undefined ***param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined ***pppuVar13;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined ***pppuVar16;
  undefined8 uVar17;
  long lVar18;
  long alStack_100 [2];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  
  lVar18 = param_1;
  func_0x0001090cf2a8();
  ppuStack_a0 = *(undefined ***)(*(long *)(lVar18 + 0x20) + 0x18);
  ppuStack_98 = *(undefined ***)(*(long *)(lVar18 + 0x20) + 0x20);
  uStack_70 = extraout_x8;
  if (ppuStack_98 != (undefined **)0x0) {
    do {
      func_0x0001090cf230();
    } while (extraout_w10 != 0);
  }
  func_0x0001090cf2b8();
  (*extraout_x8_00)();
  FUN_10909501c(&ppuStack_a0);
  ppuStack_a0 = *(undefined ***)(*(long *)(param_1 + 0x20) + 0x28);
  ppuStack_98 = *(undefined ***)(*(long *)(param_1 + 0x20) + 0x30);
  if (ppuStack_98 != (undefined **)0x0) {
    do {
      func_0x0001090cf230();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001090cf2b8();
  (*extraout_x8_01)();
  func_0x0001090cf280();
  pppuVar13 = (undefined ***)(param_1 + 0x30);
  FUN_1090cee68(alStack_100);
  if (alStack_100[0] == 0) goto LAB_1090ced40;
  uVar14 = *param_5;
  uVar1 = *(uint *)(param_5 + 1);
  uVar15 = *param_6;
  uVar2 = *(uint *)(param_6 + 1);
  pppuVar16 = *(undefined ****)(param_1 + 0x40);
  __ZNSt3__115recursive_mutex4lockEv(alStack_100[0] + 0x18);
  in_ZR = pppuVar16 == *(undefined ****)(alStack_100[0] + 0x88);
  if ((bool)in_ZR) {
    if ((int)param_2 != 0) {
      in_ZR = pppuVar16 == *(undefined ****)(alStack_100[0] + 0x88);
      if ((bool)in_ZR) {
        in_ZR = *(char *)(alStack_100[0] + 0xc0) == '\x01';
        if ((!(bool)in_ZR) ||
           (in_ZR = *(ulong *)(alStack_100[0] + 0xb8) == 0xe,
           *(ulong *)(alStack_100[0] + 0xb8) < 0xf)) {
          FUN_1090caa2c(&ppuStack_a0,&UNK_10f54fff0);
          if (*(long **)(alStack_100[0] + 0x68) != (long *)0x0) {
            param_2 = &ppuStack_a0;
            (**(code **)(**(long **)(alStack_100[0] + 0x68) + 0x30))();
          }
          func_0x000104bda93c(&ppuStack_a0);
          pppuVar13 = param_2;
        }
      }
      else {
        ppuStack_a0 = *(undefined ***)(*(long *)(alStack_100[0] + 0x70) + 0x38);
        if (ppuStack_a0 != (undefined **)0x0) {
          ppuVar10 = ppuStack_a0 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
            if (bVar4) {
              *ppuVar10 = *ppuVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        func_0x0001090e4d6c();
        FUN_109097110(&ppuStack_a0);
        pppuVar13 = pppuVar16;
      }
      goto LAB_1090ced38;
    }
    if (param_4 == 0) {
      if (*(long **)(alStack_100[0] + 0x68) != (long *)0x0) {
        (**(code **)(**(long **)(alStack_100[0] + 0x68) + 0x28))();
      }
      goto LAB_1090ced38;
    }
    lVar18 = *(long *)(alStack_100[0] + 0x60);
    if (lVar18 != 0) {
      uVar17 = *(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8;
      lVar5 = lVar18;
      _CMFormatDescriptionGetExtension(lVar18,uVar17);
      uVar11 = *(undefined8 *)PTR__kCVImageBufferTransferFunctionKey_11034a310;
      lVar6 = lVar18;
      _CMFormatDescriptionGetExtension();
      uVar12 = *(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350;
      _CMFormatDescriptionGetExtension();
      if (lVar5 != 0) {
        func_0x0001090cf2e0(param_4,uVar17,lVar5);
      }
      if (lVar6 != 0) {
        func_0x0001090cf2e0(param_4,uVar11,lVar6);
      }
      if (lVar18 != 0) {
        func_0x0001090cf2e0(param_4,uVar12,lVar18);
      }
    }
    _CVPixelBufferGetPixelFormatType(param_4);
    _CVPixelBufferGetWidth();
    _CVPixelBufferGetHeight(param_4);
    ppuVar7 = (undefined **)0x80;
    __Znwm();
    lStack_e8 = *(long *)(alStack_100[0] + 0xa8);
    uStack_f0 = *(undefined8 *)(alStack_100[0] + 0xa0);
    uStack_e0 = *(undefined8 *)(alStack_100[0] + 0xb0);
    ppuStack_a0 = &PTR_DAT_110d7e488;
    ppuStack_98 = (undefined **)0x1;
    lStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    ppuVar10 = ppuVar7;
    func_0x0001090e5074();
    ppuStack_a0 = &PTR_DAT_110d7e488;
    ppuStack_c8 = ppuVar10;
    _free(uStack_80);
    func_0x0001090f5ed4(&uStack_f0,uVar15,(ulong)uVar2 | 0x100000000);
    ppuVar8 = (undefined **)0x98;
    __Znwm();
    ppuVar10 = ppuVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar4) {
        *ppuVar10 = *ppuVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uStack_b0 = 0;
    uStack_b8 = 0;
    ppuStack_a8 = ppuVar7;
    FUN_1090c7eb4(&ppuStack_a0,&uStack_f0);
    FUN_1090c8f8c(ppuVar8,&ppuStack_a8,uVar14,(ulong)uVar1 | 0x100000000,uVar15,
                  (ulong)uVar2 | 0x100000000,uVar14,(ulong)uVar1 | 0x100000000,&ppuStack_c0,
                  &ppuStack_a0,param_4);
    ppuStack_d0 = ppuVar8;
    func_0x0001090e5d44(ppuStack_98);
    func_0x0001090e5ca4(uStack_b8);
    FUN_1090c803c(&ppuStack_a8);
    func_0x0001090e5d44(lStack_e8);
    *(long *)(alStack_100[0] + 0xb8) = *(long *)(alStack_100[0] + 0xb8) + 1;
    ppuVar10 = *(undefined ***)(*(long *)(alStack_100[0] + 0x70) + 0x28);
    ppuStack_98 = *(undefined ***)(*(long *)(alStack_100[0] + 0x70) + 0x30);
    ppuStack_a0 = ppuVar10;
    if (ppuStack_98 != (undefined **)0x0) {
      do {
        func_0x0001090cf230();
      } while (extraout_w10_01 != 0);
    }
    pppuVar13 = (undefined ***)0x5;
    (**(code **)(*ppuVar10 + 0x28))();
    func_0x0001090cf280();
    if (ppuStack_d0 != (undefined **)0x0) {
      ppuVar10 = ppuStack_d0 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar4) {
          *ppuVar10 = *ppuVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuStack_a8 = ppuStack_d0;
    if (*(long *)(alStack_100[0] + 0x68) == 0) {
      func_0x0001090cf2d8();
    }
    else {
      FUN_1090cdf80(&uStack_f0,alStack_100[0]);
      plVar9 = *(long **)(alStack_100[0] + 0x68);
      uVar14 = uStack_f0;
      lVar18 = lStack_e8;
      if (lStack_e8 != 0) {
        do {
          func_0x0001090cf230();
        } while (extraout_w10_02 != 0);
      }
      ppuStack_a0 = (undefined **)FUN_1090cf168;
      ppuStack_98 = &PTR_FUN_110ad93d8;
      ppuStack_c0 = (undefined **)0x0;
      uStack_b8 = 0;
      pppuVar13 = &ppuStack_a8;
      uStack_90 = uVar14;
      lStack_88 = lVar18;
      (**(code **)(*plVar9 + 0x20))();
      func_0x0001090cf298();
      func_0x0001090cf290();
      func_0x0001090cf118(&uStack_f0);
    }
    FUN_1090ac7bc(&ppuStack_a8);
    FUN_1090cbd0c(&ppuStack_d0);
    FUN_1090cbaf0(&ppuStack_c8);
  }
  else {
LAB_1090ced38:
    func_0x0001090cf2d8();
  }
  func_0x0001090cf24c();
LAB_1090ced40:
  func_0x0001090cf140();
  func_0x0001090cf254(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1090ac7bc(&ppuStack_a8);
    FUN_1090cbd0c(&ppuStack_d0);
    FUN_1090cbaf0(&ppuStack_c8);
    func_0x0001090cf24c();
    plVar9 = alStack_100;
    func_0x0001090cf140();
    func_0x0001090cf2c4();
    *plVar9 = 0;
    plVar9[1] = 0;
    ppuVar10 = pppuVar13[1];
    if (ppuVar10 != (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plVar9[1] = (long)ppuVar10;
      if (ppuVar10 != (undefined **)0x0) {
        *plVar9 = (long)*pppuVar13;
      }
    }
    return;
  }
  return;
}



/* Entry: 1090cee68; end: 1090ceea7;  */

void FUN_1090cee68(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1090ceea8; end: 1090ceef7;  */

void FUN_1090ceea8(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x20);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001090cf2e8();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(long *)(param_1 + 0x20) = lVar1;
  lVar1 = *(long *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001090cf230(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1090ceef8; end: 1090cef1f;  */

undefined8 FUN_1090ceef8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001090cf118(param_1 + 0x30);
  func_0x000107c34edc(param_1 + 0x20);
  FUN_10909590c();
  return unaff_x19;
}



/* Entry: 1090cef20; end: 1090cefab;  */

void FUN_1090cef20(long param_1)

{
  undefined8 uStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_1 + 0x18;
  uStack_28 = 1;
  __ZNSt3__115recursive_mutex4lockEv();
  *(undefined8 *)(param_1 + 0x98) = 0x100000001;
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_1090cf204(&uStack_38);
    func_0x00010731a274(&lStack_30);
    _VTDecompressionSessionFinishDelayedFrames(uStack_38);
    func_0x0001090cf278();
  }
  func_0x000107c281c0(&lStack_30);
  return;
}



/* Entry: 1090cefac; end: 1090cefe7;  */

void FUN_1090cefac(long param_1,undefined8 param_2,undefined8 param_3)

{
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0x18);
  return;
}



/* Entry: 1090cefe8; end: 1090cf017;  */

bool FUN_1090cefe8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001090cf240();
  lVar1 = *(long *)(unaff_x19 + 0x80);
  func_0x0001090cf24c();
  return lVar1 == 0;
}



/* Entry: 1090cf018; end: 1090cf0c7;  */

void FUN_1090cf018(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = 0;
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x18);
  plVar1 = (long *)(param_1 + 0x88);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_30 = *(long *)(*(long *)(param_1 + 0x70) + 0x38);
  if (lStack_30 != 0) {
    plVar1 = (long *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001090e4d48(lStack_30,lVar4 + 1);
  FUN_109097110(&lStack_30);
  func_0x0001090cf314();
  *(undefined8 *)(param_1 + 0x80) = 0;
  func_0x0001090cf24c();
  if (lStack_28 != 0) {
    _VTDecompressionSessionWaitForAsynchronousFrames();
    _VTDecompressionSessionInvalidate(lStack_28);
  }
  func_0x0001090cf278();
  return;
}



/* Entry: 1090cf0c8; end: 1090cf0eb;  */

undefined8 FUN_1090cf0c8(undefined8 param_1)

{
  FUN_1090cf0ec();
  return param_1;
}



/* Entry: 1090cf0ec; end: 1090cf167;  */

void FUN_1090cf0ec(long *param_1)

{
  if (*param_1 != 0) {
    _CFRelease();
    *param_1 = 0;
  }
  return;
}


