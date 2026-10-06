/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10845d6f8; end: 10845d837;  */

void FUN_10845d6f8(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_10845dbc8();
LAB_10845d834:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10845d834;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10845d838; end: 10845d87f;  */

void FUN_10845d838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10845d880; end: 10845daaf; -[MediaUpdateListenerAnnouncer removeListener:] */

void FUN_10845d880(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_10845da34;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10845d8e8;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10845d838(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10845da34;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10845d8e8:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110a49518;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_10845d6f8(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_10845d838(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10845da34;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10845da34:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10845dab0; end: 10845db7f; -[MediaUpdateListenerAnnouncer mediaDataToUploadDidUpdate] */

void FUN_10845dab0(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10845d3ec(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c0c49a0();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10845db80; end: 10845dba7; -[MediaUpdateListenerAnnouncer .cxx_destruct] */

void FUN_10845db80(long param_1)

{
  FUN_10845dbdc(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10845dba8; end: 10845dbc7; -[MediaUpdateListenerAnnouncer .cxx_construct] */

void FUN_10845dba8(long param_1)

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



/* Entry: 10845dbc8; end: 10845dbdb;  */

undefined * FUN_10845dbc8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
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



/* Entry: 10845dbdc; end: 10845dc33;  */

long FUN_10845dbdc(long param_1)

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



/* Entry: 10845dc34; end: 10845dc43;  */

void FUN_10845dc34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a49518;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10845dc44; end: 10845dc63;  */

void FUN_10845dc44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a49518;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10845dc64; end: 10845dccb;  */

void FUN_10845dc64(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
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



/* Entry: 10845dccc; end: 10845dccf;  */

void FUN_10845dccc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10845dcd0; end: 10845dcfb; +[SCGrapheneChatMetric chatMediaDownloadRequest] */

void FUN_10845dcd0(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845dcfc; end: 10845dd27; +[SCGrapheneChatMetric chatMediaThumbnailFetch] */

void FUN_10845dcfc(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845dd28; end: 10845dd53; +[SCGrapheneChatMetric chatMediaUploadRequest] */

void FUN_10845dd28(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845dd54; end: 10845dd7f; +[SCGrapheneChatMetric snapMediaUploadPathType] */

void FUN_10845dd54(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845dd80; end: 10845ddab; +[SCGrapheneChatMetric overallUploadResult] */

void FUN_10845dd80(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845ddac; end: 10845ddd7; +[SCGrapheneChatMetric nativeUploadDelegate] */

void FUN_10845ddac(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845ddd8; end: 10845de03; +[SCGrapheneChatMetric mediaOrchestratorToNative] */

void FUN_10845ddd8(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845de04; end: 10845de2f; +[SCGrapheneChatMetric chatSentSuccess] */

void FUN_10845de04(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845de30; end: 10845de5b; +[SCGrapheneChatMetric chatSentFailure] */

void FUN_10845de30(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845de5c; end: 10845de87; +[SCGrapheneChatMetric chatLoadFromDiskLatency] */

void FUN_10845de5c(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845de88; end: 10845deb3; +[SCGrapheneChatMetric chatLoadFromDiskCount] */

void FUN_10845de88(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845deb4; end: 10845dedf; +[SCGrapheneChatMetric chatEnter] */

void FUN_10845deb4(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845dee0; end: 10845df0b; +[SCGrapheneChatMetric chatEnterUnread] */

void FUN_10845dee0(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845df0c; end: 10845df37; +[SCGrapheneChatMetric convoStoreTrim] */

void FUN_10845df0c(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845df38; end: 10845df63; +[SCGrapheneChatMetric chatPageLoad] */

void FUN_10845df38(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845df64; end: 10845df8f; +[SCGrapheneChatMetric chatPageLoadStep] */

void FUN_10845df64(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845df90; end: 10845dfbb; +[SCGrapheneChatMetric chatPageReload] */

void FUN_10845df90(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845dfbc; end: 10845dfe7; +[SCGrapheneChatMetric snapUpdate] */

void FUN_10845dfbc(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845dfe8; end: 10845e013; +[SCGrapheneChatMetric autoRetry] */

void FUN_10845dfe8(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e014; end: 10845e03f; +[SCGrapheneChatMetric notificationSuppressed] */

void FUN_10845e014(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e040; end: 10845e06b; +[SCGrapheneChatMetric recoverSendTask] */

void FUN_10845e040(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e06c; end: 10845e097; +[SCGrapheneChatMetric processExtPrefetchCount] */

void FUN_10845e06c(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e098; end: 10845e0c3; +[SCGrapheneChatMetric processExtPrefetchLatency] */

void FUN_10845e098(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e0c4; end: 10845e0ef; +[SCGrapheneChatMetric processExtStoreLoaded] */

void FUN_10845e0c4(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e0f0; end: 10845e11b; +[SCGrapheneChatMetric extMediaCacheHit] */

void FUN_10845e0f0(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e11c; end: 10845e147; +[SCGrapheneChatMetric pushToChatContentAvailable] */

void FUN_10845e11c(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e148; end: 10845e173; +[SCGrapheneChatMetric pushToChat] */

void FUN_10845e148(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e174; end: 10845e19f; +[SCGrapheneChatMetric contentDisplay] */

void FUN_10845e174(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e1a0; end: 10845e1cb; +[SCGrapheneChatMetric blockedParticipantAction] */

void FUN_10845e1a0(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e1cc; end: 10845e1f7; +[SCGrapheneChatMetric duplicateMessage] */

void FUN_10845e1cc(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e1f8; end: 10845e223; +[SCGrapheneChatMetric conversationFetch] */

void FUN_10845e1f8(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e224; end: 10845e24f; +[SCGrapheneChatMetric activeChatRequest] */

void FUN_10845e224(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e250; end: 10845e27b; +[SCGrapheneChatMetric prefetchWithSource] */

void FUN_10845e250(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e27c; end: 10845e2a7; +[SCGrapheneChatMetric sendMessageSnap] */

void FUN_10845e27c(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e2a8; end: 10845e2d3; +[SCGrapheneChatMetric chatSave] */

void FUN_10845e2a8(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e2d4; end: 10845e2ff; +[SCGrapheneChatMetric chatUnsave] */

void FUN_10845e2d4(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e300; end: 10845e32b; +[SCGrapheneChatMetric chatErase] */

void FUN_10845e300(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e32c; end: 10845e357; +[SCGrapheneChatMetric chatPlayback] */

void FUN_10845e32c(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e358; end: 10845e383; +[SCGrapheneChatMetric chatMediaSave] */

void FUN_10845e358(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e384; end: 10845e3af; +[SCGrapheneChatMetric snapBatchSave] */

void FUN_10845e384(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e3b0; end: 10845e3db; +[SCGrapheneChatMetric savedSnapSendPrompt] */

void FUN_10845e3b0(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e3dc; end: 10845e407; +[SCGrapheneChatMetric pluginViewModelLoad] */

void FUN_10845e3dc(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e408; end: 10845e433; +[SCGrapheneChatMetric cellViewAppeared] */

void FUN_10845e408(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e434; end: 10845e45f; +[SCGrapheneChatMetric urlPreviewFetched] */

void FUN_10845e434(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e460; end: 10845e48b; +[SCGrapheneChatMetric normalizedUrlSpamCheck] */

void FUN_10845e460(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e48c; end: 10845e4b7; +[SCGrapheneChatMetric attachmentCardLoaded] */

void FUN_10845e48c(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e4b8; end: 10845e4e3; +[SCGrapheneChatMetric attachmentCardMeasured] */

void FUN_10845e4b8(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e4e4; end: 10845e50f; +[SCGrapheneChatMetric passwordDetected] */

void FUN_10845e4e4(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e510; end: 10845e53b; +[SCGrapheneChatMetric pureArroyoUpgrade] */

void FUN_10845e510(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e53c; end: 10845e567; +[SCGrapheneChatMetric mediaZippedStateFix] */

void FUN_10845e53c(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e568; end: 10845e593; +[SCGrapheneChatMetric uploadDelegateSelfDeallocated] */

void FUN_10845e568(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e594; end: 10845e5bf; +[SCGrapheneChatMetric reactionMetadataFetch] */

void FUN_10845e594(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e5c0; end: 10845e5eb; +[SCGrapheneChatMetric stackedStickerCount] */

void FUN_10845e5c0(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e5ec; end: 10845e617; +[SCGrapheneChatMetric textStyling] */

void FUN_10845e5ec(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e618; end: 10845e643; +[SCGrapheneChatMetric clearMenuActionSheet] */

void FUN_10845e618(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e644; end: 10845e66f; +[SCGrapheneChatMetric composerPluginMeasured] */

void FUN_10845e644(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e670; end: 10845e69b; +[SCGrapheneChatMetric composerQuotedPluginMeasured] */

void FUN_10845e670(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e69c; end: 10845e6c7; +[SCGrapheneChatMetric chatHeaderBannerRender] */

void FUN_10845e69c(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e6c8; end: 10845e6f3; +[SCGrapheneChatMetric chatMessageForwarded] */

void FUN_10845e6c8(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e6f4; end: 10845e71f; +[SCGrapheneChatMetric chatHeaderBannerTap] */

void FUN_10845e6f4(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e720; end: 10845e74b; +[SCGrapheneChatMetric textScalePressed] */

void FUN_10845e720(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e74c; end: 10845e777; +[SCGrapheneChatMetric textScaleCanceled] */

void FUN_10845e74c(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e778; end: 10845e7a3; +[SCGrapheneChatMetric textScaleSent] */

void FUN_10845e778(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e7a4; end: 10845e7cf; +[SCGrapheneChatMetric sessionCreateCofWaitTime] */

void FUN_10845e7a4(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e7d0; end: 10845e7fb; +[SCGrapheneChatMetric sessionCreateCofWaitTimeout] */

void FUN_10845e7d0(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e7fc; end: 10845e827; +[SCGrapheneChatMetric clearConversation] */

void FUN_10845e7fc(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e828; end: 10845e853; +[SCGrapheneChatMetric scrollToQuotedMessageSuccess] */

void FUN_10845e828(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e854; end: 10845e87f; +[SCGrapheneChatMetric scrollToQuotedMessageFail] */

void FUN_10845e854(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e880; end: 10845e8ab; +[SCGrapheneChatMetric voiceNoteTranscription] */

void FUN_10845e880(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e8ac; end: 10845e8d7; +[SCGrapheneChatMetric chatHeaderSubtextRender] */

void FUN_10845e8ac(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e8d8; end: 10845e903; +[SCGrapheneChatMetric messageEditAttempt] */

void FUN_10845e8d8(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e904; end: 10845e92f; +[SCGrapheneChatMetric messageEditCancel] */

void FUN_10845e904(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e930; end: 10845e95b; +[SCGrapheneChatMetric messageEditSubmit] */

void FUN_10845e930(void)

{
  _objc_alloc(PTR_PTR_1126b2950);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845e95c; end: 10845e9fb; -[SCGrapheneChatMetric description] */

void FUN_10845e95c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dea458;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dea458,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fc960;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10845e9fc; end: 10845ea83; -[SCGrapheneRegistry chatGraphene] */

void FUN_10845e9fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10845ea84;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372b930 != -1) {
    func_0x000107c27d9c(0x11372b930,&puStack_48);
  }
  uVar1 = uRam000000011372b928;
  _objc_retain(uRam000000011372b928);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10845ea84; end: 10845ee27;  */

void FUN_10845ea84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_280 = &PTR____CFConstantStringClassReference_110edbf58;
  ppuStack_278 = &PTR____CFConstantStringClassReference_110edbf78;
  ppuStack_270 = &PTR____CFConstantStringClassReference_110edbf98;
  ppuStack_268 = &PTR____CFConstantStringClassReference_110edbfb8;
  ppuStack_260 = &PTR____CFConstantStringClassReference_110edbfd8;
  ppuStack_258 = &PTR____CFConstantStringClassReference_110edbff8;
  ppuStack_250 = &PTR____CFConstantStringClassReference_110edc018;
  ppuStack_248 = &PTR____CFConstantStringClassReference_110edc038;
  ppuStack_240 = &PTR____CFConstantStringClassReference_110edc058;
  ppuStack_238 = &PTR____CFConstantStringClassReference_110edc078;
  ppuStack_230 = &PTR____CFConstantStringClassReference_110edc098;
  ppuStack_228 = &PTR____CFConstantStringClassReference_110edc0b8;
  ppuStack_220 = &PTR____CFConstantStringClassReference_110edc0d8;
  ppuStack_218 = &PTR____CFConstantStringClassReference_110edc0f8;
  ppuStack_210 = &PTR____CFConstantStringClassReference_110e9eb98;
  ppuStack_208 = &PTR____CFConstantStringClassReference_110edc118;
  ppuStack_200 = &PTR____CFConstantStringClassReference_110e9ebb8;
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110edc138;
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110edc158;
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110edc178;
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110edc198;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110edc1b8;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110edc1d8;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110edc1f8;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110edc218;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110edc238;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110edc258;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110edc278;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110edc298;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110edc2b8;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110edc2d8;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110edc2f8;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110edc318;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110edc338;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110edc358;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110edc378;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110edc398;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110edc3b8;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110edc3d8;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110edc3f8;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110edc418;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110edc438;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110edc458;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110edc478;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110edc498;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110edc4b8;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110edc4d8;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110edc4f8;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110edc518;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110edc538;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110edc558;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110edc578;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110edc598;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110edc5b8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110edc5d8;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110edc5f8;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110edc618;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110edc638;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110edc658;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110edc678;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110edc698;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110edc6b8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110edc6d8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110edc6f8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110edc718;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110edc738;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110edc758;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110edc778;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110edc798;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110edc7b8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110edc7d8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110edc7f8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110edc818;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_280,0x49);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126d60(uVar3,param_2,&PTR____CFConstantStringClassReference_110dea458,
                      &PTR____CFConstantStringClassReference_110daafd8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372b928;
  uRam000000011372b928 = uVar3;
  _objc_release(uVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_alloc(PTR_PTR_1126d96d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845ee28; end: 10845ee53; +[SCGrapheneSccpMetric chatConnectAttempt] */

void FUN_10845ee28(void)

{
  _objc_alloc(PTR_PTR_1126d96d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845ee54; end: 10845ee7f; +[SCGrapheneSccpMetric chatConnectLatency] */

void FUN_10845ee54(void)

{
  _objc_alloc(PTR_PTR_1126d96d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845ee80; end: 10845eeab; +[SCGrapheneSccpMetric chatConnected] */

void FUN_10845ee80(void)

{
  _objc_alloc(PTR_PTR_1126d96d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845eeac; end: 10845eed7; +[SCGrapheneSccpMetric chatConnectedAfterAttempts] */

void FUN_10845eeac(void)

{
  _objc_alloc(PTR_PTR_1126d96d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845eed8; end: 10845ef03; +[SCGrapheneSccpMetric chatSessionsEstablished] */

void FUN_10845eed8(void)

{
  _objc_alloc(PTR_PTR_1126d96d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845ef04; end: 10845efa3; -[SCGrapheneSccpMetric description] */

void FUN_10845ef04(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110edc838;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110edc838,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fc968;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10845efa4; end: 10845f10f; -[SCGrapheneRegistry sccpGraphene] */

void FUN_10845efa4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10845f02c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372b940 != -1) {
    func_0x000107c27d9c(0x11372b940,&puStack_48);
  }
  uVar1 = uRam000000011372b938;
  _objc_retain(uRam000000011372b938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10845f110; end: 10845f283;  */

void FUN_10845f110(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a49558;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a49558,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_10845f284;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a495a8,&uStack_c0,puVar1);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 10845f284; end: 10845f2fb;  */

void FUN_10845f284(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a495a8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10845f2fc; end: 10845f46f;  */

void FUN_10845f2fc(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a495f8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a495f8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_10845f470;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a49648,&uStack_c0,puVar1);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 10845f470; end: 10845f4e7;  */

void FUN_10845f470(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a49648,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10845f4e8; end: 10845f897;  */

/* WARNING: Removing unreachable block (ram,0x00010845f850) */

void FUN_10845f4e8(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  puVar4 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar3 = param_4;
  puVar5 = param_5;
  puVar6 = param_6;
  puVar7 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar9 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_e0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_c8,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_b0,puVar1);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar1 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_98,puVar1);
    _objc_retain(param_7);
    if (param_7 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_7);
      puVar1 = param_7;
      func_0x00010bdc3520(param_7);
    }
    _objc_release(param_7);
    func_0x000107c278b8(auStack_80,puVar1);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_68,5);
    puVar1 = &UNK_110a49698;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a49698,&uStack_100,param_8);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    lVar8 = 0;
    puVar9 = auStack_e0;
    puVar3 = (undefined *)puVar4;
    puVar5 = param_8;
    do {
      if ((&cStack_69)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(param_7);
    do {
      puVar9 = puVar9 + -0x18;
    } while (puVar9 != auStack_e0);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(puVar1);
    _objc_retain(puVar3);
    _objc_retain(puVar5);
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    if (puVar2 != (undefined *)0x0) {
      FUN_10845f4e8(puVar2,puVar1,puVar3,puVar5,puVar6,puVar7,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}


