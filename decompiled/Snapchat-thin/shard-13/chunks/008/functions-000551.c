/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad9ae28; end: 10ad9af2f; -[LSAAudioPlayerListenerAnnouncer audioPlayerDidStartPlayingAudio:] */

void FUN_10ad9ae28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10ad9a708(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0f720(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad9af30; end: 10ad9b037; -[LSAAudioPlayerListenerAnnouncer audioPlayerDidStopPlayingAudio:] */

void FUN_10ad9af30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10ad9a708(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0f740(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad9b038; end: 10ad9b13f; -[LSAAudioPlayerListenerAnnouncer audioPlayerDidMuteAllSounds:] */

void FUN_10ad9b038(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10ad9a708(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0f700(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad9b140; end: 10ad9b247; -[LSAAudioPlayerListenerAnnouncer audioPlayerDidUnmuteAllSounds:] */

void FUN_10ad9b140(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10ad9a708(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0f760(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad9b248; end: 10ad9b26f; -[LSAAudioPlayerListenerAnnouncer .cxx_destruct] */

void FUN_10ad9b248(long param_1)

{
  FUN_10ad9b2a4(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10ad9b270; end: 10ad9b28f; -[LSAAudioPlayerListenerAnnouncer .cxx_construct] */

void FUN_10ad9b270(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 10ad9b290; end: 10ad9b2a3;  */

undefined * FUN_10ad9b290(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10ad9b2a4; end: 10ad9b2fb;  */

long FUN_10ad9b2a4(long param_1)

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



/* Entry: 10ad9b2fc; end: 10ad9b30b;  */

void FUN_10ad9b2fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73268;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad9b30c; end: 10ad9b32b;  */

void FUN_10ad9b30c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73268;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad9b32c; end: 10ad9b393;  */

void FUN_10ad9b32c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ad9b394; end: 10ad9b397;  */

void FUN_10ad9b394(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad9b398; end: 10ad9b557; -[LSAAudioToolboxPlayer init] */

undefined8 * FUN_10ad9b398(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *extraout_x8;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uStack_120;
  long *plStack_118;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined1 auStack_a8 [48];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [48];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = PTR_PTR_112701368;
  puVar11 = (undefined8 *)0x0;
  puVar4 = &uStack_c8;
  uStack_c8 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  puVar6 = (undefined1 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = PTR_PTR_1126de118;
    _objc_opt_new();
    uVar9 = puVar4[3];
    puVar4[3] = puVar5;
    _objc_release(uVar9);
    _objc_initWeak(auStack_d0,puVar4);
    _objc_copyWeak(auStack_d8,auStack_d0);
    pcStack_78 = FUN_10ad9bae0;
    ppuStack_70 = &PTR_FUN_110c732a8;
    _objc_moveWeak(auStack_68,auStack_d8);
    puVar11 = (undefined8 *)(puVar4[1] + 0x80);
    *(code **)(puVar4[1] + 0x78) = pcStack_78;
    (**(code **)*puVar11)(puVar11);
    (*(code *)ppuStack_70[2])(puVar11,&ppuStack_70);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    _objc_destroyWeak(auStack_d8);
    _objc_copyWeak(auStack_d8,auStack_d0);
    pcStack_b8 = FUN_10ad9bb5c;
    ppuStack_b0 = &PTR_FUN_110c732c8;
    _objc_moveWeak(auStack_a8,auStack_d8);
    puVar11 = (undefined8 *)(puVar4[1] + 0xc0);
    *(code **)(puVar4[1] + 0xb8) = pcStack_b8;
    (**(code **)*puVar11)(puVar11);
    (*(code *)ppuStack_b0[2])(puVar11,&ppuStack_b0);
    (*(code *)*ppuStack_b0)(&ppuStack_b0);
    _objc_destroyWeak(auStack_d8);
    puVar6 = auStack_d0;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  __Unwind_Resume(puVar6);
  FUN_10ad27918(&uStack_120,puVar6 + 8);
  plVar8 = plStack_118;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  if (plStack_118 == (long *)0x0) {
    uStack_120 = 0;
    plStack_118 = (undefined8 *)0x0;
  }
  else {
    plVar7 = plStack_118;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 == (long *)0x0) {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      uStack_120 = 0;
      plStack_118 = (undefined8 *)0x0;
    }
    else {
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *extraout_x8 = uStack_120;
      extraout_x8[1] = plVar7;
      uStack_120 = 0;
      plStack_118 = (undefined8 *)0x0;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      plVar8 = plVar7 + 1;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 != 0) goto LAB_10ad9b608;
      (**(code **)(*plVar7 + 0x10))(plVar7);
      plVar8 = plVar7;
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
LAB_10ad9b608:
  if (plStack_118 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return plStack_118;
  }
  return (undefined8 *)0x0;
}



/* Entry: 10ad9b558; end: 10ad9b637; -[LSAAudioToolboxPlayer speakerOutputFactory] */

void FUN_10ad9b558(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  FUN_10ad27918(&uStack_40,param_2 + 8);
  plVar5 = plStack_38;
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_38 == (long *)0x0) {
    uStack_40 = 0;
    plStack_38 = (long *)0x0;
  }
  else {
    plVar4 = plStack_38;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 == (long *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      uStack_40 = 0;
      plStack_38 = (long *)0x0;
    }
    else {
      plVar1 = plVar4 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *param_1 = uStack_40;
      param_1[1] = plVar4;
      uStack_40 = 0;
      plStack_38 = (long *)0x0;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      plVar5 = plVar4 + 1;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 != 0) goto LAB_10ad9b608;
      (**(code **)(*plVar4 + 0x10))(plVar4);
      plVar5 = plVar4;
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10ad9b608:
  if (plStack_38 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ad9b638; end: 10ad9b6e3; -[LSAAudioToolboxPlayer muteAllSoundsWithCompletion:] */

void FUN_10ad9b638(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcStack_298;
  undefined **ppuStack_290;
  undefined8 uStack_288;
  long lStack_258;
  code **ppcStack_250;
  undefined ***pppuStack_248;
  undefined8 **ppuStack_240;
  code *pcStack_238;
  code *pcStack_228;
  undefined **ppuStack_220;
  undefined8 uStack_218;
  long lStack_1e8;
  code **ppcStack_1e0;
  undefined ***pppuStack_1d8;
  undefined8 **ppuStack_1d0;
  code *pcStack_1c8;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  long lStack_178;
  code **ppcStack_170;
  undefined ***pppuStack_168;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  long lStack_108;
  code **ppcStack_100;
  undefined ***pppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  long lStack_98;
  undefined8 *puStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_3;
  _objc_retainBlock();
  uStack_68 = 0x10ad9bbd8;
  ppuStack_60 = &PTR_DAT_110c732e8;
  uStack_58 = param_3;
  FUN_10ad27a38(param_1 + 8,&uStack_68);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_78 = FUN_10ad9b6e4;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = uVar3;
  puStack_90 = &uStack_68;
  pppuStack_88 = pppuVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retainBlock();
  pcStack_d8 = FUN_10ad9bc40;
  ppuStack_d0 = &PTR_DAT_110c73308;
  uStack_c8 = uVar3;
  FUN_10ad27e98(pppuVar2 + 1,&pcStack_d8);
  pppuVar1 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_e8 = FUN_10ad9b790;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = uVar4;
  ppcStack_100 = &pcStack_d8;
  pppuStack_f8 = pppuVar1;
  ppuStack_f0 = &puStack_80;
  _objc_retainBlock();
  pcStack_148 = FUN_10ad9bca8;
  ppuStack_140 = &PTR_DAT_110c73328;
  uStack_138 = uVar4;
  FUN_10ad282f4(pppuVar2 + 1,&pcStack_148);
  pppuVar1 = &ppuStack_140;
  (*(code *)*ppuStack_140)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_140)(&ppuStack_140);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_158 = FUN_10ad9b83c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = uVar3;
  ppcStack_170 = &pcStack_148;
  pppuStack_168 = pppuVar1;
  ppuStack_160 = &ppuStack_f0;
  _objc_retainBlock();
  pcStack_1b8 = FUN_10ad9bd10;
  ppuStack_1b0 = &PTR_DAT_110c73348;
  uStack_1a8 = uVar3;
  FUN_10ad2874c(pppuVar2 + 1,&pcStack_1b8);
  pppuVar1 = &ppuStack_1b0;
  (*(code *)*ppuStack_1b0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1b0)(&ppuStack_1b0);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_1c8 = FUN_10ad9b8e8;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = uVar4;
  ppcStack_1e0 = &pcStack_1b8;
  pppuStack_1d8 = pppuVar1;
  ppuStack_1d0 = &ppuStack_160;
  _objc_retainBlock();
  pcStack_228 = FUN_10ad9bd78;
  ppuStack_220 = &PTR_DAT_110c73368;
  uStack_218 = uVar4;
  FUN_10ad28ffc(pppuVar2 + 1,&pcStack_228);
  pppuVar1 = &ppuStack_220;
  (*(code *)*ppuStack_220)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_220)(&ppuStack_220);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_238 = FUN_10ad9b994;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_250 = &pcStack_228;
  pppuStack_248 = pppuVar1;
  ppuStack_240 = &ppuStack_1d0;
  _objc_retainBlock();
  pcStack_298 = FUN_10ad9bde0;
  ppuStack_290 = &PTR_DAT_110c73388;
  uStack_288 = uVar3;
  FUN_10ad28ba4(pppuVar2 + 1,&pcStack_298);
  pppuVar1 = &ppuStack_290;
  (*(code *)*ppuStack_290)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_290)(&ppuStack_290);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(pppuVar1[3],PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10ad9b6e4; end: 10ad9b78f; -[LSAAudioToolboxPlayer unmuteAllSoundsWithCompletion:] */

void FUN_10ad9b6e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcStack_228;
  undefined **ppuStack_220;
  undefined8 uStack_218;
  long lStack_1e8;
  code **ppcStack_1e0;
  undefined ***pppuStack_1d8;
  undefined8 **ppuStack_1d0;
  code *pcStack_1c8;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  long lStack_178;
  code **ppcStack_170;
  undefined ***pppuStack_168;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  long lStack_108;
  code **ppcStack_100;
  undefined ***pppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  long lStack_98;
  code **ppcStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_3;
  _objc_retainBlock();
  pcStack_68 = FUN_10ad9bc40;
  ppuStack_60 = &PTR_DAT_110c73308;
  uStack_58 = param_3;
  FUN_10ad27e98(param_1 + 8,&pcStack_68);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_78 = FUN_10ad9b790;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = uVar3;
  ppcStack_90 = &pcStack_68;
  pppuStack_88 = pppuVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retainBlock();
  pcStack_d8 = FUN_10ad9bca8;
  ppuStack_d0 = &PTR_DAT_110c73328;
  uStack_c8 = uVar3;
  FUN_10ad282f4(pppuVar2 + 1,&pcStack_d8);
  pppuVar1 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_e8 = FUN_10ad9b83c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = uVar4;
  ppcStack_100 = &pcStack_d8;
  pppuStack_f8 = pppuVar1;
  ppuStack_f0 = &puStack_80;
  _objc_retainBlock();
  pcStack_148 = FUN_10ad9bd10;
  ppuStack_140 = &PTR_DAT_110c73348;
  uStack_138 = uVar4;
  FUN_10ad2874c(pppuVar2 + 1,&pcStack_148);
  pppuVar1 = &ppuStack_140;
  (*(code *)*ppuStack_140)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_140)(&ppuStack_140);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_158 = FUN_10ad9b8e8;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = uVar3;
  ppcStack_170 = &pcStack_148;
  pppuStack_168 = pppuVar1;
  ppuStack_160 = &ppuStack_f0;
  _objc_retainBlock();
  pcStack_1b8 = FUN_10ad9bd78;
  ppuStack_1b0 = &PTR_DAT_110c73368;
  uStack_1a8 = uVar3;
  FUN_10ad28ffc(pppuVar2 + 1,&pcStack_1b8);
  pppuVar1 = &ppuStack_1b0;
  (*(code *)*ppuStack_1b0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1b0)(&ppuStack_1b0);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_1c8 = FUN_10ad9b994;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_1e0 = &pcStack_1b8;
  pppuStack_1d8 = pppuVar1;
  ppuStack_1d0 = &ppuStack_160;
  _objc_retainBlock();
  pcStack_228 = FUN_10ad9bde0;
  ppuStack_220 = &PTR_DAT_110c73388;
  uStack_218 = uVar4;
  FUN_10ad28ba4(pppuVar2 + 1,&pcStack_228);
  pppuVar1 = &ppuStack_220;
  (*(code *)*ppuStack_220)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_220)(&ppuStack_220);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(pppuVar1[3],PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10ad9b790; end: 10ad9b83b; -[LSAAudioToolboxPlayer suspendAllSoundsWithCompletion:] */

void FUN_10ad9b790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  long lStack_178;
  code **ppcStack_170;
  undefined ***pppuStack_168;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  long lStack_108;
  code **ppcStack_100;
  undefined ***pppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  long lStack_98;
  code **ppcStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_3;
  _objc_retainBlock();
  pcStack_68 = FUN_10ad9bca8;
  ppuStack_60 = &PTR_DAT_110c73328;
  uStack_58 = param_3;
  FUN_10ad282f4(param_1 + 8,&pcStack_68);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_78 = FUN_10ad9b83c;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = uVar3;
  ppcStack_90 = &pcStack_68;
  pppuStack_88 = pppuVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retainBlock();
  pcStack_d8 = FUN_10ad9bd10;
  ppuStack_d0 = &PTR_DAT_110c73348;
  uStack_c8 = uVar3;
  FUN_10ad2874c(pppuVar2 + 1,&pcStack_d8);
  pppuVar1 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_e8 = FUN_10ad9b8e8;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = uVar4;
  ppcStack_100 = &pcStack_d8;
  pppuStack_f8 = pppuVar1;
  ppuStack_f0 = &puStack_80;
  _objc_retainBlock();
  pcStack_148 = FUN_10ad9bd78;
  ppuStack_140 = &PTR_DAT_110c73368;
  uStack_138 = uVar4;
  FUN_10ad28ffc(pppuVar2 + 1,&pcStack_148);
  pppuVar1 = &ppuStack_140;
  (*(code *)*ppuStack_140)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_140)(&ppuStack_140);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_158 = FUN_10ad9b994;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_170 = &pcStack_148;
  pppuStack_168 = pppuVar1;
  ppuStack_160 = &ppuStack_f0;
  _objc_retainBlock();
  pcStack_1b8 = FUN_10ad9bde0;
  ppuStack_1b0 = &PTR_DAT_110c73388;
  uStack_1a8 = uVar3;
  FUN_10ad28ba4(pppuVar2 + 1,&pcStack_1b8);
  pppuVar1 = &ppuStack_1b0;
  (*(code *)*ppuStack_1b0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_1b0)(&ppuStack_1b0);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(pppuVar1[3],PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10ad9b83c; end: 10ad9b8e7; -[LSAAudioToolboxPlayer resumeAllSoundsWithCompletion:] */

void FUN_10ad9b83c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  long lStack_108;
  code **ppcStack_100;
  undefined ***pppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  long lStack_98;
  code **ppcStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_3;
  _objc_retainBlock();
  pcStack_68 = FUN_10ad9bd10;
  ppuStack_60 = &PTR_DAT_110c73348;
  uStack_58 = param_3;
  FUN_10ad2874c(param_1 + 8,&pcStack_68);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_78 = FUN_10ad9b8e8;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = uVar3;
  ppcStack_90 = &pcStack_68;
  pppuStack_88 = pppuVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retainBlock();
  pcStack_d8 = FUN_10ad9bd78;
  ppuStack_d0 = &PTR_DAT_110c73368;
  uStack_c8 = uVar3;
  FUN_10ad28ffc(pppuVar2 + 1,&pcStack_d8);
  pppuVar1 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_e8 = FUN_10ad9b994;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_100 = &pcStack_d8;
  pppuStack_f8 = pppuVar1;
  ppuStack_f0 = &puStack_80;
  _objc_retainBlock();
  pcStack_148 = FUN_10ad9bde0;
  ppuStack_140 = &PTR_DAT_110c73388;
  uStack_138 = uVar4;
  FUN_10ad28ba4(pppuVar2 + 1,&pcStack_148);
  pppuVar1 = &ppuStack_140;
  (*(code *)*ppuStack_140)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_140)(&ppuStack_140);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(pppuVar1[3],PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10ad9b8e8; end: 10ad9b993; -[LSAAudioToolboxPlayer activateWithCompletion:] */

void FUN_10ad9b8e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  long lStack_98;
  code **ppcStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_3;
  _objc_retainBlock();
  pcStack_68 = FUN_10ad9bd78;
  ppuStack_60 = &PTR_DAT_110c73368;
  uStack_58 = param_3;
  FUN_10ad28ffc(param_1 + 8,&pcStack_68);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  pcStack_78 = FUN_10ad9b994;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_90 = &pcStack_68;
  pppuStack_88 = pppuVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retainBlock();
  pcStack_d8 = FUN_10ad9bde0;
  ppuStack_d0 = &PTR_DAT_110c73388;
  uStack_c8 = uVar3;
  FUN_10ad28ba4(pppuVar2 + 1,&pcStack_d8);
  pppuVar1 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(pppuVar1[3],PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10ad9b994; end: 10ad9ba3f; -[LSAAudioToolboxPlayer deactivateWithCompletion:] */

void FUN_10ad9b994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retainBlock();
  pcStack_68 = FUN_10ad9bde0;
  ppuStack_60 = &PTR_DAT_110c73388;
  uStack_58 = param_3;
  FUN_10ad28ba4(param_1 + 8,&pcStack_68);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(pppuVar1[3],PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10ad9ba40; end: 10ad9ba47; -[LSAAudioToolboxPlayer addListener:] */

void FUN_10ad9ba40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10ad9ba48; end: 10ad9ba4f; -[LSAAudioToolboxPlayer removeListener:] */

void FUN_10ad9ba48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10ad9ba50; end: 10ad9bab7; -[LSAAudioToolboxPlayer .cxx_destruct] */

void FUN_10ad9ba50(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  _objc_storeStrong(param_1 + 0x18,0);
  plVar5 = *(long **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10ad9bab8; end: 10ad9badf; -[LSAAudioToolboxPlayer .cxx_construct] */

long FUN_10ad9bab8(long param_1)

{
  FUN_10ad275dc(param_1 + 8);
  return param_1;
}



/* Entry: 10ad9bae0; end: 10ad9bb2b;  */

void FUN_10ad9bae0(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf0f720(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad9bb2c; end: 10ad9bb5b;  */

void FUN_10ad9bb2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10ad9bb5c; end: 10ad9bba7;  */

void FUN_10ad9bb5c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf0f740(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad9bba8; end: 10ad9bc0b;  */

void FUN_10ad9bba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10ad9bc0c; end: 10ad9bc3f;  */

void FUN_10ad9bc0c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110c732e8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retainBlock();
  param_1[1] = uVar1;
  return;
}



/* Entry: 10ad9bc40; end: 10ad9bc73;  */

void FUN_10ad9bc40(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad9bc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10ad9bc74; end: 10ad9bca7;  */

void FUN_10ad9bc74(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110c73308;
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retainBlock();
  param_1[1] = uVar1;
  return;
}



/* Entry: 10ad9bca8; end: 10ad9bcdb;  */

void FUN_10ad9bca8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad9bcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10ad9bcdc; end: 10ad9bd0f;  */

void FUN_10ad9bcdc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110c73328;
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retainBlock();
  param_1[1] = uVar1;
  return;
}



/* Entry: 10ad9bd10; end: 10ad9bd43;  */

void FUN_10ad9bd10(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad9bd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10ad9bd44; end: 10ad9bd77;  */

void FUN_10ad9bd44(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110c73348;
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retainBlock();
  param_1[1] = uVar1;
  return;
}



/* Entry: 10ad9bd78; end: 10ad9bdab;  */

void FUN_10ad9bd78(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad9bd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10ad9bdac; end: 10ad9bddf;  */

void FUN_10ad9bdac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110c73368;
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retainBlock();
  param_1[1] = uVar1;
  return;
}



/* Entry: 10ad9bde0; end: 10ad9be13;  */

void FUN_10ad9bde0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad9bdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10ad9be14; end: 10ad9be47;  */

void FUN_10ad9be14(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110c73388;
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retainBlock();
  param_1[1] = uVar1;
  return;
}



/* Entry: 10ad9be48; end: 10ad9beaf;  */

undefined8 * FUN_10ad9be48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110c733b8;
  _objc_retain(param_3);
  _objc_initWeak(param_1 + 1,param_2);
  _objc_initWeak(param_1 + 2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10ad9beb0; end: 10ad9bf07;  */

undefined8 * FUN_10ad9beb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c733b8;
  _objc_storeWeak(param_1 + 1,0);
  _objc_storeWeak(param_1 + 2,0);
  _objc_destroyWeak(param_1 + 2);
  _objc_destroyWeak(param_1 + 1);
  return param_1;
}



/* Entry: 10ad9bf08; end: 10ad9bf0b;  */

undefined8 * FUN_10ad9bf08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c733b8;
  _objc_storeWeak(param_1 + 1,0);
  _objc_storeWeak(param_1 + 2,0);
  _objc_destroyWeak(param_1 + 2);
  _objc_destroyWeak(param_1 + 1);
  return param_1;
}



/* Entry: 10ad9bf0c; end: 10ad9bf1f;  */

void FUN_10ad9bf0c(void)

{
  FUN_10ad9beb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad9bf20; end: 10ad9c143;  */

ulong FUN_10ad9bf20(long param_1,undefined *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  code **unaff_x23;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 *apuStack_190 [7];
  undefined ***pppuStack_158;
  undefined1 uStack_150;
  long lStack_148;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  code *pcStack_c8;
  undefined8 *apuStack_c0 [7];
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1 + 8;
  puVar5 = param_3;
  _objc_loadWeakRetained();
  uVar4 = SUB81(puVar5,0);
  uVar7 = uVar2;
  pppuVar3 = (undefined ***)PTR_s_openTrackAtPath_playbackFinishCa_1126180d0;
  _objc_opt_respondsToSelector();
  if ((uVar7 & 1) == 0) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    param_2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    unaff_x23 = &pcStack_88;
    pcStack_88 = FUN_10a66cf9c;
    ppuStack_80 = &PTR_DAT_110950c70;
    if (*(char *)(param_3[1] + 8) == '\x01') {
      pcStack_88 = (code *)*param_3;
      func_0x0001092b2a94(&ppuStack_80);
    }
    _objc_copyWeak(auStack_f8,param_1 + 0x10);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc6000000;
    pcStack_e0 = FUN_10ad9c144;
    puStack_d8 = &UNK_110c73470;
    _objc_copyWeak(auStack_d0,auStack_f8);
    pcStack_c8 = pcStack_88;
    pppuVar3 = &ppuStack_80;
    (*(code *)ppuStack_80[3])(apuStack_c0);
    uVar7 = uVar2;
    puVar6 = param_2;
    func_0x00010c0e9ae0(uVar2);
    uVar4 = SUB81(puVar6,0);
    (*(code *)*apuStack_c0[0])(apuStack_c0);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_f8);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    _objc_release(param_2);
  }
  uVar1 = uVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar7;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(unaff_x23 + 1);
  _objc_release(param_2);
  _objc_release(uVar2);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = uVar1 + 0x20;
  _objc_loadWeakRetained();
  uVar7 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar7 & 1) != 0) {
    pcStack_1b8 = (code *)PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc6000000;
    pcStack_1a8 = FUN_10ad9c278;
    puStack_1a0 = &UNK_110c73440;
    uStack_198 = *(undefined8 *)(uVar1 + 0x28);
    unaff_x23 = &pcStack_1b8;
    (**(code **)(*(long *)(uVar1 + 0x30) + 0x18))(apuStack_190,(long *)(uVar1 + 0x30));
    pppuStack_158 = pppuVar3;
    uStack_150 = uVar4;
    func_0x00010c0f7fc0(uVar2);
    (*(code *)*apuStack_190[0])(apuStack_190);
  }
  uVar7 = uVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return uVar7;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_190[0])(unaff_x23 + 5);
  _objc_release(uVar2);
  __Unwind_Resume();
  if (*(char *)(*(long *)(uVar7 + 0x28) + 8) == '\x01') {
    uVar2 = *(ulong *)(uVar7 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010ad9c298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar7 + 0x20))(uVar2,*(undefined1 *)(uVar7 + 0x68));
    return uVar2;
  }
  return uVar7;
}



/* Entry: 10ad9c144; end: 10ad9c277;  */

void FUN_10ad9c144(long param_1,undefined8 param_2,undefined1 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined **unaff_x23;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *apuStack_90 [7];
  undefined8 uStack_58;
  undefined1 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc6000000;
    pcStack_a8 = FUN_10ad9c278;
    puStack_a0 = &UNK_110c73440;
    uStack_98 = *(undefined8 *)(param_1 + 0x28);
    unaff_x23 = &puStack_b8;
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(apuStack_90,(long *)(param_1 + 0x30));
    uStack_58 = param_2;
    uStack_50 = param_3;
    func_0x00010c0f7fc0(uVar1);
    (*(code *)*apuStack_90[0])(apuStack_90);
  }
  uVar2 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_90[0])(unaff_x23 + 5);
  _objc_release(uVar1);
  __Unwind_Resume();
  if (*(char *)(*(long *)(uVar2 + 0x28) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010ad9c298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar2 + 0x20))(*(undefined8 *)(uVar2 + 0x60),*(undefined1 *)(uVar2 + 0x68));
    return;
  }
  return;
}



/* Entry: 10ad9c278; end: 10ad9c29f;  */

void FUN_10ad9c278(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x28) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010ad9c298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x68));
    return;
  }
  return;
}



/* Entry: 10ad9c2a0; end: 10ad9c2ef;  */

void FUN_10ad9c2a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  (**(code **)(*(long *)(param_2 + 0x28) + 0x18))(param_1 + 0x28);
  return;
}



/* Entry: 10ad9c2f0; end: 10ad9c2fb;  */

void FUN_10ad9c2f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad9c2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x28))();
  return;
}



/* Entry: 10ad9c2fc; end: 10ad9c367;  */

void FUN_10ad9c2fc(long param_1,long param_2)

{
  _objc_copyWeak(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  (**(code **)(*(long *)(param_2 + 0x30) + 0x18))(param_1 + 0x30,(long *)(param_2 + 0x30));
  return;
}



/* Entry: 10ad9c368; end: 10ad9c393;  */

void FUN_10ad9c368(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x20);
  return;
}



/* Entry: 10ad9c394; end: 10ad9c3ef;  */

void FUN_10ad9c394(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010bf3de60(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad9c3f0; end: 10ad9c463;  */

float FUN_10ad9c3f0(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  
  uVar1 = param_2 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  fVar3 = -1.0;
  if ((uVar2 & 1) != 0) {
    func_0x00010bf8b260(uVar1);
    fVar3 = (float)param_1;
  }
  _objc_release(uVar1);
  return fVar3;
}



/* Entry: 10ad9c464; end: 10ad9c4d7;  */

float FUN_10ad9c464(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  
  uVar1 = param_2 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  fVar3 = -1.0;
  if ((uVar2 & 1) != 0) {
    func_0x00010c1042c0(uVar1);
    fVar3 = (float)param_1;
  }
  _objc_release(uVar1);
  return fVar3;
}



/* Entry: 10ad9c4d8; end: 10ad9c557;  */

ulong FUN_10ad9c4d8(float param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c1deea0((double)param_1,uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10ad9c558; end: 10ad9c5d7;  */

ulong FUN_10ad9c558(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c0fe9e0(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10ad9c5d8; end: 10ad9c647;  */

ulong FUN_10ad9c5d8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c0f6100(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10ad9c648; end: 10ad9c6b7;  */

ulong FUN_10ad9c648(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c13da00(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10ad9c6b8; end: 10ad9c727;  */

ulong FUN_10ad9c6b8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c256cc0(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10ad9c728; end: 10ad9c797;  */

ulong FUN_10ad9c728(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c07a540(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10ad9c798; end: 10ad9c803;  */

void FUN_10ad9c798(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010c2241e0(param_1,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad9c804; end: 10ad9c877;  */

undefined8 FUN_10ad9c804(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  uVar3 = 0xbf800000;
  if ((uVar2 & 1) != 0) {
    func_0x00010c2a0fc0(uVar1);
    uVar3 = param_1;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10ad9c878; end: 10ad9c8e3;  */

void FUN_10ad9c878(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010c1d8e20(param_1,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad9c8e4; end: 10ad9c957;  */

undefined8 FUN_10ad9c8e4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  uVar3 = 0xbf800000;
  if ((uVar2 & 1) != 0) {
    func_0x00010c0f3640(uVar1);
    uVar3 = param_1;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10ad9c958; end: 10ad9c9b7;  */

void FUN_10ad9c958(long param_1,int param_2)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010c2818a0(param_1);
  }
  else {
    func_0x00010c0d3e80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad9c9b8; end: 10ad9ca53; -[LSAScenariumPlayerData initWithAudioTrack:suspendState:repeatCount:] */

undefined1 *
FUN_10ad9c9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112701370;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ad9ca54; end: 10ad9ca5b; -[LSAScenariumPlayerData audioTrack] */

undefined8 FUN_10ad9ca54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ad9ca5c; end: 10ad9ca8b; -[LSAScenariumPlayerData setAudioTrack:] */

void FUN_10ad9ca5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad9ca8c; end: 10ad9ca93; -[LSAScenariumPlayerData playerSuspendState] */

undefined8 FUN_10ad9ca8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10ad9ca94; end: 10ad9ca9b; -[LSAScenariumPlayerData setPlayerSuspendState:] */

void FUN_10ad9ca94(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10ad9ca9c; end: 10ad9caa3; -[LSAScenariumPlayerData playRepeatCount] */

undefined8 FUN_10ad9ca9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10ad9caa4; end: 10ad9caab; -[LSAScenariumPlayerData setPlayRepeatCount:] */

void FUN_10ad9caa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10ad9caac; end: 10ad9cab7; -[LSAScenariumPlayerData .cxx_destruct] */

void FUN_10ad9caac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad9cab8; end: 10ad9cbb3; -[LSAScenariumAudioPlayer init] */

undefined1 * FUN_10ad9cab8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701378;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x28) = 1;
    puVar2 = PTR_PTR_1126de0d0;
    _objc_alloc();
    func_0x00010c021440();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    uVar3 = 1;
    _dispatch_semaphore_create();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126de118;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10ad9cbb4; end: 10ad9cbbf; -[LSAScenariumAudioPlayer muteAllSoundsWithCompletion:] */

void FUN_10ad9cbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setAllSoundsMuted_completion__1125860b8,1,param_3);
  return;
}



/* Entry: 10ad9cbc0; end: 10ad9cbcb; -[LSAScenariumAudioPlayer unmuteAllSoundsWithCompletion:] */

void FUN_10ad9cbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setAllSoundsMuted_completion__1125860b8,0,param_3);
  return;
}



/* Entry: 10ad9cbcc; end: 10ad9cbd7; -[LSAScenariumAudioPlayer suspendAllSoundsWithCompletion:] */

void FUN_10ad9cbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setAllSoundsSuspended_completio_1125860c0,1,param_3);
  return;
}



/* Entry: 10ad9cbd8; end: 10ad9cbe3; -[LSAScenariumAudioPlayer resumeAllSoundsWithCompletion:] */

void FUN_10ad9cbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setAllSoundsSuspended_completio_1125860c0,0,param_3);
  return;
}



/* Entry: 10ad9cbe4; end: 10ad9cccb; -[LSAScenariumAudioPlayer activateWithCompletion:] */

void FUN_10ad9cbe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10ad9cccc; end: 10ad9cd5f;  */

void FUN_10ad9cccc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c162480(lVar1);
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f6ac42d,&UNK_10f6ac4e0,0x6c,&UNK_10f6ac520);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10ad9cd60; end: 10ad9ce47; -[LSAScenariumAudioPlayer deactivateWithCompletion:] */

void FUN_10ad9cd60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10ad9ce48; end: 10ad9d073;  */

/* WARNING: Removing unreachable block (ram,0x00010ad9d0f0) */
/* WARNING: Removing unreachable block (ram,0x00010ad9d1d4) */
/* WARNING: Removing unreachable block (ram,0x00010ad9d0fc) */

undefined * FUN_10ad9ce48(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010c162480(puVar7);
    _dispatch_semaphore_wait(*(undefined8 *)(puVar7 + 0x18),0xffffffffffffffff);
    unaff_x20 = *(long *)(puVar7 + 8);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0(*(undefined8 *)(puVar7 + 8));
    _dispatch_semaphore_signal(*(undefined8 *)(puVar7 + 0x18));
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010bf529e0();
      func_0x00010ae06f08(1,4,&UNK_10f6ac42d,&UNK_10f6ac54f,0x7d,&UNK_10f6ac591);
    }
    _objc_retain(unaff_x20);
    param_4 = auStack_d8;
    lVar2 = unaff_x20;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(unaff_x20);
        }
        uVar3 = *(undefined8 *)(lVar8 * 8);
        func_0x00010bf10140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3d9e0();
        _objc_release(uVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      param_4 = auStack_d8;
      lVar2 = unaff_x20;
      func_0x00010bf52a60();
    }
    _objc_release(unaff_x20);
    func_0x00010c2104a0(puVar7);
    param_3 = 0;
    func_0x00010c1ca6a0(puVar7);
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
    _objc_release(unaff_x20);
  }
  puVar4 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(unaff_x20);
    _objc_release(unaff_x20);
    _objc_release(puVar7);
    __Unwind_Resume();
    _objc_retain(param_3);
    _objc_retain(param_4);
    lVar2 = param_3;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar7 = (undefined *)0xffffffffffffffff;
    }
    else {
      puVar7 = PTR_PTR_1126de120;
      _objc_alloc();
      func_0x00010c004120();
      _objc_retain(0);
      _dispatch_semaphore_wait(*(undefined8 *)(puVar4 + 0x18),0xffffffffffffffff);
      puVar5 = PTR_PTR_1126de128;
      _objc_alloc(PTR_PTR_1126de128);
      func_0x00010bff56e0();
      uVar3 = *(undefined8 *)(puVar4 + 8);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _dispatch_semaphore_signal(*(undefined8 *)(puVar4 + 0x18));
      uVar3 = *(undefined8 *)(puVar4 + 0x10);
      _objc_retain(puVar7);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(puVar7);
      _objc_release(puVar7);
      _objc_release(0);
    }
    _objc_release(param_4);
    _objc_release(param_3);
    return puVar7;
  }
  return puVar4;
}



/* Entry: 10ad9d074; end: 10ad9d2eb; -[LSAScenariumAudioPlayer openTrackAtPath:playbackFinishCallback:] */

/* WARNING: Removing unreachable block (ram,0x00010ad9d0f0) */
/* WARNING: Removing unreachable block (ram,0x00010ad9d1d4) */
/* WARNING: Removing unreachable block (ram,0x00010ad9d0fc) */

undefined * FUN_10ad9d074(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0xffffffffffffffff;
  }
  else {
    puVar4 = PTR_PTR_1126de120;
    _objc_alloc();
    func_0x00010c004120();
    _objc_retain(0);
    _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x18),0xffffffffffffffff);
    puVar2 = PTR_PTR_1126de128;
    _objc_alloc(PTR_PTR_1126de128);
    func_0x00010bff56e0();
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x18));
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(puVar4);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10ad9d2ec; end: 10ad9d387;  */

void FUN_10ad9d2ec(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  
  func_0x00010c078420(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1ca6a0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010c0805a0();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c06b700();
    if (iVar1 != 0) {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6ac42d,&UNK_10f6ac5c1,0xa4,&UNK_10f6ac611,in_x6,in_x7,
                            *(undefined8 *)(param_1 + 0x20));
      }
      func_0x00010c10a180(*(undefined8 *)(param_1 + 0x20));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf0f730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),
             PTR_s_audioPlayerDidStartPlayingAudio__1125a1770);
  return;
}



/* Entry: 10ad9d388; end: 10ad9d4d7; -[LSAScenariumAudioPlayer closeTrackWithHandle:] */

void FUN_10ad9d388(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x18),0xffffffffffffffff);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar3);
  _objc_release(puVar1);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x18));
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar2);
  return;
}



/* Entry: 10ad9d4d8; end: 10ad9d52f;  */

void FUN_10ad9d4d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf10140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d9e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf0f750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),
             PTR_s_audioPlayerDidStopPlayingAudio__1125a1778);
  return;
}



/* Entry: 10ad9d530; end: 10ad9d683; -[LSAScenariumAudioPlayer playTrackWithHandle:repeatCount:] */

bool FUN_10ad9d530(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6ac6d1,0xc4,&UNK_10f6ac70d,param_7,param_8,
                          param_3);
    }
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_60,auStack_48);
    _objc_retain(lVar1);
    uStack_58 = param_4;
    uStack_50 = param_3;
    func_0x00010c0f7fc0(uVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return lVar1 != 0;
}



/* Entry: 10ad9d684; end: 10ad9d81b;  */

void FUN_10ad9d684(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar4;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c0805a0();
    if (((uVar2 & 1) == 0) && (uVar2 = uVar1, func_0x00010c06b700(), (int)uVar2 != 0)) {
      func_0x00010c0feaa0(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar2 = uVar1;
      func_0x00010c0805a0();
      if ((int)uVar2 != 0) {
        uVar4 = *(undefined8 *)(uVar1 + 8);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ddbe0();
        _objc_release(uVar4);
        _objc_release(puVar3);
        uVar4 = *(undefined8 *)(uVar1 + 8);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1dd260();
        _objc_release(uVar4);
        _objc_release(puVar3);
      }
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6ac74b,0xd3,&UNK_10f6ac794,in_x6,in_x7,
                            *(undefined8 *)(param_1 + 0x38));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad9d81c; end: 10ad9d963; -[LSAScenariumAudioPlayer pauseTrackWithHandle:] */

bool FUN_10ad9d81c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6ac7f5,0xdd,&UNK_10f6ac826,in_x6,in_x7,param_3)
      ;
    }
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(lVar1);
    uStack_40 = param_3;
    func_0x00010c0f7fc0(uVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return lVar1 != 0;
}



/* Entry: 10ad9d964; end: 10ad9da7b;  */

void FUN_10ad9d964(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar4;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c0805a0();
    if ((uVar2 & 1) == 0) {
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar4 = *(undefined8 *)(uVar1 + 8);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ddbe0();
      _objc_release(uVar4);
      _objc_release(puVar3);
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6ac42d,&UNK_10f6ac865,0xe9,&UNK_10f6ac8a3,in_x6,in_x7,
                            *(undefined8 *)(param_1 + 0x30));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad9da7c; end: 10ad9dbc3; -[LSAScenariumAudioPlayer resumeTrackWithHandle:] */

bool FUN_10ad9da7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6ac8fb,0xf3,&UNK_10f6ac92d,in_x6,in_x7,param_3)
      ;
    }
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(lVar1);
    uStack_40 = param_3;
    func_0x00010c0f7fc0(uVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return lVar1 != 0;
}



/* Entry: 10ad9dbc4; end: 10ad9dcf3;  */

void FUN_10ad9dbc4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar4;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c0805a0();
    if (((uVar2 & 1) == 0) && (uVar2 = uVar1, func_0x00010c06b700(), (int)uVar2 != 0)) {
      func_0x00010c13d1c0(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar2 = uVar1;
      func_0x00010c0805a0();
      if ((int)uVar2 != 0) {
        uVar4 = *(undefined8 *)(uVar1 + 8);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ddbe0();
        _objc_release(uVar4);
        _objc_release(puVar3);
      }
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6ac96d,0x101,&UNK_10f6ac9ac,in_x6,in_x7,
                            *(undefined8 *)(param_1 + 0x30));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad9dcf4; end: 10ad9de37; -[LSAScenariumAudioPlayer stopTrackWithHandle:] */

bool FUN_10ad9dcf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6aca0f,0x10b,&UNK_10f6aca3f,in_x6,in_x7,param_3
                         );
    }
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return lVar1 != 0;
}



/* Entry: 10ad9de38; end: 10ad9de83;  */

void FUN_10ad9de38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c255780(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10ad9de84; end: 10ad9deeb; -[LSAScenariumAudioPlayer durationForTrackWithHandle:] */

undefined8 FUN_10ad9de84(undefined8 param_1,long param_2)

{
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    param_1 = 0xbff0000000000000;
  }
  else {
    func_0x00010bf8b160(param_2);
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10ad9deec; end: 10ad9df53; -[LSAScenariumAudioPlayer positionForTrackWithHandle:] */

undefined8 FUN_10ad9deec(undefined8 param_1,long param_2)

{
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    param_1 = 0xbff0000000000000;
  }
  else {
    func_0x00010bf60480(param_2);
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10ad9df54; end: 10ad9e0ef; -[LSAScenariumAudioPlayer setPosition:forTrackWithHandle:] */

undefined8 FUN_10ad9df54(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar2;
  double dVar3;
  
  lVar1 = param_2;
  dVar3 = param_1;
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6aca7d,0x12f,&UNK_10f6acab8,in_x6,in_x7,param_4
                         );
    }
  }
  else {
    func_0x00010bf8b160(lVar1);
    if (param_1 <= dVar3) {
      if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6ac42d,&UNK_10f6aca7d,0x137,&UNK_10f6acb4c,in_x6,in_x7,
                            param_1,param_4);
      }
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      _objc_retain(lVar1);
      func_0x00010c0f7fc0(uVar2);
      _objc_release(lVar1);
      uVar2 = 1;
      goto LAB_10ad9e0a8;
    }
    if ((uRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6aca7d,0x134,&UNK_10f6acaf6,in_x6,in_x7,param_1
                          ,param_4);
    }
  }
  uVar2 = 0;
LAB_10ad9e0a8:
  _objc_release(lVar1);
  return uVar2;
}



/* Entry: 10ad9e0f0; end: 10ad9e0fb;  */

void FUN_10ad9e0f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c187d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setCurrentTime__11263f960);
  return;
}



/* Entry: 10ad9e0fc; end: 10ad9e15b; -[LSAScenariumAudioPlayer isPlayingTrackWithHandle:] */

long FUN_10ad9e0fc(long param_1)

{
  long lVar1;
  
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c07a400(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10ad9e15c; end: 10ad9e1c3; -[LSAScenariumAudioPlayer volumeForTrackWithHandle:] */

undefined8 FUN_10ad9e15c(undefined8 param_1,long param_2)

{
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    param_1 = 0xbf800000;
  }
  else {
    func_0x00010c2a0dc0(param_2);
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10ad9e1c4; end: 10ad9e363; -[LSAScenariumAudioPlayer setVolume:forTrackWithHandle:] */

undefined8 FUN_10ad9e1c4(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar5;
  
  lVar4 = param_2;
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6acb92,0x154,&UNK_10f6acbcb,in_x6,in_x7,param_4
                         );
    }
  }
  else {
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 <= param_1) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < 1.0;
        bVar2 = param_1 == 1.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6ac42d,&UNK_10f6acb92,0x15c,&UNK_10f6acc77,in_x6,in_x7,
                            (double)param_1,param_4);
      }
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      _objc_retain(lVar4);
      func_0x00010c0f7fc0(uVar5);
      _objc_release(lVar4);
      uVar5 = 1;
      goto LAB_10ad9e31c;
    }
    if ((uRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6acb92,0x159,&UNK_10f6acc1d,in_x6,in_x7,
                          (double)param_1,param_4);
    }
  }
  uVar5 = 0;
LAB_10ad9e31c:
  _objc_release(lVar4);
  return uVar5;
}


