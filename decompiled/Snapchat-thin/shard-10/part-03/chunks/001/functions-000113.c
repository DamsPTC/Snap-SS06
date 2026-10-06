/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f41db4; end: 107f41e33; -[SCGallerySuggestedQueryUpdater suggestedQueries] */

void FUN_107f41db4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    lVar1 = param_1;
    func_0x00010be86640();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = lVar1;
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf51e00(uVar2);
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f41e34; end: 107f41fbf; -[SCGallerySuggestedQueryUpdater _readQueriesFromFile] */

void FUN_107f41e34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde13a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar6 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,uVar2);
  if ((int)puVar6 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar5 = puVar4;
    func_0x00010bf67000(puVar4,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf6a0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f41fc0; end: 107f4215b; -[SCGallerySuggestedQueryUpdater _saveClientConfigResponseToFile:] */

void FUN_107f41fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde13a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdc2cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  if (((ulong)puVar4 & 1) == 0) {
    func_0x00010bf55da0(puVar1,param_2,uVar2,1,0,0);
  }
  puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e020(puVar4,param_2,uVar3,1);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f4215c; end: 107f421ff; -[SCGallerySuggestedQueryUpdater _clientConfigResponseFileURL] */

void FUN_107f4215c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000100088750();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad320(puVar1,param_2,param_1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bdc2c60(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec7c78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f42200; end: 107f4224f; -[SCGallerySuggestedQueryUpdater .cxx_destruct] */

void FUN_107f42200(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 107f42250; end: 107f4226f; -[SCGallerySuggestedQueryUpdater .cxx_construct] */

void FUN_107f42250(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 107f42270; end: 107f423eb; -[SCGallerySearchIndexerStatusListenerAnnouncer description] */

void FUN_107f42270(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_107f423ec(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f423ec; end: 107f4244b;  */

void FUN_107f423ec(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 107f4244c; end: 107f426f7; -[SCGallerySearchIndexerStatusListenerAnnouncer addListener:] */

undefined8 FUN_107f4244c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110a142b0;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_107f426f8(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_107f42838(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_107f42600:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_107f42620;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_107f426f8(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_107f426f8(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_107f42838(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_107f42600;
    }
  }
  uVar9 = 1;
LAB_107f42620:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 107f426f8; end: 107f42837;  */

void FUN_107f426f8(long *param_1,long *param_2)

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
      FUN_107f42cd0();
LAB_107f42834:
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
      if (uVar7 >> 0x3d != 0) goto LAB_107f42834;
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



/* Entry: 107f42838; end: 107f4287f;  */

void FUN_107f42838(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 107f42880; end: 107f42aaf; -[SCGallerySearchIndexerStatusListenerAnnouncer removeListener:] */

void FUN_107f42880(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_107f42a34;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_107f428e8;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_107f42838(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_107f42a34;
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
LAB_107f428e8:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110a142b0;
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
          FUN_107f426f8(plVar9,lVar7);
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
    FUN_107f42838(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_107f42a34;
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
LAB_107f42a34:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f42ab0; end: 107f42ba3; -[SCGallerySearchIndexerStatusListenerAnnouncer searchIndexer:didChangeStatus:] */

void FUN_107f42ab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_107f423ec(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c153b20();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f42ba4; end: 107f42c87; -[SCGallerySearchIndexerStatusListenerAnnouncer searchIndexerDidUpdateDatabase:] */

void FUN_107f42ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  _objc_retain(param_3);
  FUN_107f423ec(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c153b40();
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f42c88; end: 107f42caf; -[SCGallerySearchIndexerStatusListenerAnnouncer .cxx_destruct] */

void FUN_107f42c88(long param_1)

{
  FUN_107f42ce4(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 107f42cb0; end: 107f42ccf; -[SCGallerySearchIndexerStatusListenerAnnouncer .cxx_construct] */

void FUN_107f42cb0(long param_1)

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



/* Entry: 107f42cd0; end: 107f42ce3;  */

undefined * FUN_107f42cd0(void)

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



/* Entry: 107f42ce4; end: 107f42d3b;  */

long FUN_107f42ce4(long param_1)

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



/* Entry: 107f42d3c; end: 107f42d4b;  */

void FUN_107f42d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a142b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107f42d4c; end: 107f42d6b;  */

void FUN_107f42d4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a142b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107f42d6c; end: 107f42dd3;  */

void FUN_107f42d6c(long param_1)

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



/* Entry: 107f42dd4; end: 107f42dd7;  */

void FUN_107f42dd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107f42dd8; end: 107f42f53; -[SCGallerySearchQueryResultsCollectorListenerAnnouncer description] */

void FUN_107f42dd8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_107f42f54(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f42f54; end: 107f42fb3;  */

void FUN_107f42f54(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 107f42fb4; end: 107f4325f; -[SCGallerySearchQueryResultsCollectorListenerAnnouncer addListener:] */

undefined8 FUN_107f42fb4(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110a14300;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_107f43260(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_107f433a0(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_107f43168:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_107f43188;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_107f43260(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_107f43260(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_107f433a0(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_107f43168;
    }
  }
  uVar9 = 1;
LAB_107f43188:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 107f43260; end: 107f4339f;  */

void FUN_107f43260(long *param_1,long *param_2)

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
      FUN_107f4376c();
LAB_107f4339c:
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
      if (uVar7 >> 0x3d != 0) goto LAB_107f4339c;
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



/* Entry: 107f433a0; end: 107f433e7;  */

void FUN_107f433a0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 107f433e8; end: 107f43617; -[SCGallerySearchQueryResultsCollectorListenerAnnouncer removeListener:] */

void FUN_107f433e8(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_107f4359c;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_107f43450;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_107f433a0(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_107f4359c;
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
LAB_107f43450:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110a14300;
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
          FUN_107f43260(plVar9,lVar7);
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
    FUN_107f433a0(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_107f4359c;
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
LAB_107f4359c:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f43618; end: 107f43723; -[SCGallerySearchQueryResultsCollectorListenerAnnouncer searchQueryResultsCollector:didUpdateAllSearchQueryResults:] */

void FUN_107f43618(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_107f42f54(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c153fc0();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f43724; end: 107f4374b; -[SCGallerySearchQueryResultsCollectorListenerAnnouncer .cxx_destruct] */

void FUN_107f43724(long param_1)

{
  FUN_107f43780(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 107f4374c; end: 107f4376b; -[SCGallerySearchQueryResultsCollectorListenerAnnouncer .cxx_construct] */

void FUN_107f4374c(long param_1)

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



/* Entry: 107f4376c; end: 107f4377f;  */

undefined * FUN_107f4376c(void)

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



/* Entry: 107f43780; end: 107f437d7;  */

long FUN_107f43780(long param_1)

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



/* Entry: 107f437d8; end: 107f437e7;  */

void FUN_107f437d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a14300;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107f437e8; end: 107f43807;  */

void FUN_107f437e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a14300;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107f43808; end: 107f4386f;  */

void FUN_107f43808(long param_1)

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



/* Entry: 107f43870; end: 107f43873;  */

void FUN_107f43870(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107f43874; end: 107f438d3; -[SCMemoriesOffsetsInfo initWithColumnIndex:matchedQueryTermIndex:byteOffsetInColumn:matchedSizeInBytes:] */

void FUN_107f43874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fbb68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  return;
}



/* Entry: 107f438d4; end: 107f438db; -[SCMemoriesOffsetsInfo columnIndex] */

undefined8 FUN_107f438d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f438dc; end: 107f438e3; -[SCMemoriesOffsetsInfo matchedQueryTermIndex] */

undefined8 FUN_107f438dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f438e4; end: 107f438eb; -[SCMemoriesOffsetsInfo byteOffsetInColumn] */

undefined8 FUN_107f438e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f438ec; end: 107f438f3; -[SCMemoriesOffsetsInfo matchedSizeInBytes] */

undefined8 FUN_107f438ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f438f4; end: 107f439b7; -[SCMemoriesSearchConceptMatchInfo initWithSnapId:searchConcept:resultMatchType:confidence:] */

undefined1 *
FUN_107f438f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fbb70;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107f439b8; end: 107f439bf; -[SCMemoriesSearchConceptMatchInfo snapId] */

undefined8 FUN_107f439b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f439c0; end: 107f439c7; -[SCMemoriesSearchConceptMatchInfo searchConcept] */

undefined8 FUN_107f439c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f439c8; end: 107f439cf; -[SCMemoriesSearchConceptMatchInfo resultMatchType] */

undefined8 FUN_107f439c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f439d0; end: 107f439d7; -[SCMemoriesSearchConceptMatchInfo confidence] */

undefined8 FUN_107f439d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f439d8; end: 107f43a07; -[SCMemoriesSearchConceptMatchInfo .cxx_destruct] */

void FUN_107f439d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f43a08; end: 107f43a6b; -[SCGallerySearchRequest init] */

undefined1 * FUN_107f43a08(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fbb78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107f43a6c; end: 107f43a73; -[SCGallerySearchRequest cancel] */

void FUN_107f43a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_increment_1125d8a68);
  return;
}



/* Entry: 107f43a74; end: 107f43a93; -[SCGallerySearchRequest isCancelled] */

bool FUN_107f43a74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 107f43a94; end: 107f43a9f; -[SCGallerySearchRequest .cxx_destruct] */

void FUN_107f43a94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f43aa0; end: 107f43b0f; -[SCGallerySearchLocalizationHelper init] */

undefined1 * FUN_107f43aa0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fbb80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107f43b10; end: 107f43b8b; +[SCGallerySearchLocalizationHelper systemLanguageId] */

void FUN_107f43b10(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_opt_class(param_1);
  func_0x00010c087f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f43b8c; end: 107f43c33; +[SCGallerySearchLocalizationHelper isConceptSearchDisabled] */

undefined8 FUN_107f43b8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c087ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c06ef20(param_1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return param_1;
}



/* Entry: 107f43c34; end: 107f43d47; +[SCGallerySearchLocalizationHelper isConceptSearchDisabled:currentLocale:] */

undefined **
FUN_107f43c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined8 uVar13;
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
  long lStack_b8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSSet_1126ae870;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c225c20(ppuVar1,param_2,&PTR__OBJC_CLASS___NSConstantArray_111181f58);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_58 = param_3;
  uStack_50 = param_4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(ppuVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar4 = ppuVar1;
  ppuVar6 = ppuVar3;
  func_0x00010c069880();
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar6);
    ppuStack_118 = &PTR____CFConstantStringClassReference_110ec8178;
    ppuStack_110 = &PTR____CFConstantStringClassReference_110dff6d8;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110ec7e78;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110ec7e98;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110ec8198;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110dff538;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110ec7f38;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110ec7f38;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110ec81b8;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110dff558;
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110ec7f58;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110ec7f58;
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_e8,&ppuStack_118,
                        6);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_238 = &PTR____CFConstantStringClassReference_110dc4f18;
    ppuStack_230 = &PTR____CFConstantStringClassReference_110dff578;
    ppuStack_1a8 = &PTR____CFConstantStringClassReference_110ec7cd8;
    ppuStack_1a0 = &PTR____CFConstantStringClassReference_110ec7cf8;
    ppuStack_228 = &PTR____CFConstantStringClassReference_110dff618;
    ppuStack_220 = &PTR____CFConstantStringClassReference_110de3318;
    ppuStack_198 = &PTR____CFConstantStringClassReference_110ec7d18;
    ppuStack_190 = &PTR____CFConstantStringClassReference_110ea8498;
    ppuStack_218 = &PTR____CFConstantStringClassReference_110dff738;
    ppuStack_210 = &PTR____CFConstantStringClassReference_110dff5f8;
    ppuStack_188 = &PTR____CFConstantStringClassReference_110ec7d38;
    ppuStack_180 = &PTR____CFConstantStringClassReference_110ec7d58;
    ppuStack_208 = &PTR____CFConstantStringClassReference_110dff638;
    ppuStack_200 = &PTR____CFConstantStringClassReference_110dbf6f8;
    ppuStack_178 = &PTR____CFConstantStringClassReference_110ec7d78;
    ppuStack_170 = &PTR____CFConstantStringClassReference_110ec7d98;
    ppuStack_1f8 = &PTR____CFConstantStringClassReference_110dff658;
    ppuStack_1f0 = &PTR____CFConstantStringClassReference_110dc1b38;
    ppuStack_168 = &PTR____CFConstantStringClassReference_110ec7db8;
    ppuStack_160 = &PTR____CFConstantStringClassReference_110ec7dd8;
    ppuStack_1e8 = &PTR____CFConstantStringClassReference_110dff678;
    ppuStack_1e0 = &PTR____CFConstantStringClassReference_110dff698;
    ppuStack_158 = &PTR____CFConstantStringClassReference_110ec7df8;
    ppuStack_150 = &PTR____CFConstantStringClassReference_110ec7e18;
    ppuStack_1d8 = &PTR____CFConstantStringClassReference_110dff598;
    ppuStack_1d0 = &PTR____CFConstantStringClassReference_110dff6b8;
    ppuStack_148 = &PTR____CFConstantStringClassReference_110ec7e38;
    ppuStack_140 = &PTR____CFConstantStringClassReference_110ec7e58;
    ppuStack_1c8 = &PTR____CFConstantStringClassReference_110dff6f8;
    ppuStack_1c0 = &PTR____CFConstantStringClassReference_110dff718;
    ppuStack_138 = &PTR____CFConstantStringClassReference_110ec7eb8;
    ppuStack_130 = &PTR____CFConstantStringClassReference_110ec7ed8;
    ppuStack_1b8 = &PTR____CFConstantStringClassReference_110dff758;
    ppuStack_1b0 = &PTR____CFConstantStringClassReference_110dff778;
    ppuStack_128 = &PTR____CFConstantStringClassReference_110ec7ef8;
    ppuStack_120 = &PTR____CFConstantStringClassReference_110ec7f18;
    pppuVar12 = &ppuStack_238;
    uVar13 = 0x12;
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_1a8,pppuVar12,
                        0x12);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    ppuVar11 = ppuVar6;
    func_0x00010c0e00e0(ppuVar1,param_2,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar9 = ppuVar6;
      func_0x00010c260c20(ppuVar6,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      ppuVar11 = ppuVar9;
      func_0x00010c0e00e0(ppuVar4,param_2,ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = &PTR____CFConstantStringClassReference_110ea8498;
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar10 = ppuVar5;
      }
      _objc_retain(ppuVar10);
      _objc_release(ppuVar5);
      _objc_release(ppuVar9);
    }
    else {
      _objc_retain(ppuVar3);
      ppuVar10 = ppuVar3;
    }
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(ppuVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      _objc_retain(ppuVar11);
      _objc_retain(pppuVar12);
      _objc_retain(uVar13);
      pppuVar7 = pppuVar12;
      func_0x00010c0720c0(pppuVar12,param_2,uVar13);
      _objc_retain(ppuVar11);
      ppuVar10 = ppuVar11;
      if ((((ulong)pppuVar7 & 1) == 0) &&
         ((((ulong)ppuVar6[1] & 1) != 0 ||
          (func_0x00010be4dde0(ppuVar6), *(char *)(ppuVar6 + 1) == '\x01')))) {
        ppuVar1 = ppuVar6;
        func_0x00010c087f60(ppuVar6,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar6;
        func_0x00010c087f60(ppuVar6,param_2,pppuVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = ppuVar6[3];
        func_0x00010c0e00e0(puVar8,param_2,ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar11;
        func_0x00010c0b5ac0(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar8;
        func_0x00010c0e00e0(puVar8,param_2,ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        _objc_release(puVar8);
        ppuVar9 = (undefined **)ppuVar6[2];
        func_0x00010c0e00e0(ppuVar9,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar9;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar10 = ppuVar6;
        }
        _objc_retain(ppuVar10);
        _objc_release(ppuVar11);
        _objc_release(ppuVar6);
        _objc_release(ppuVar4);
        _objc_release(ppuVar9);
        _objc_release(puVar2);
        _objc_release(ppuVar3);
        _objc_release(ppuVar1);
      }
      _objc_release(uVar13);
      _objc_release(pppuVar12);
      _objc_release(ppuVar11);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
    return ppuVar10;
  }
  return ppuVar4;
}



/* Entry: 107f43d48; end: 107f4406b; +[SCGallerySearchLocalizationHelper languageIdForLocale:] */

void FUN_107f43d48(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  undefined8 uVar12;
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
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ec8178;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dff6d8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ec7e78;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110ec7e98;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110ec8198;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dff538;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ec7f38;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110ec7f38;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ec81b8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dff558;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ec7f58;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110ec7f58;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_88,&ppuStack_b8,6);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110dc4f18;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110dff578;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110ec7cd8;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110ec7cf8;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110dff618;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110de3318;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110ec7d18;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110ea8498;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110dff738;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110dff5f8;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110ec7d38;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110ec7d58;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110dff638;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110dbf6f8;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110ec7d78;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110ec7d98;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110dff658;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110dc1b38;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ec7db8;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110ec7dd8;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110dff678;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110dff698;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110ec7df8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110ec7e18;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110dff598;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110dff6b8;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110ec7e38;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110ec7e58;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110dff6f8;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110dff718;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110ec7eb8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110ec7ed8;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110dff758;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110dff778;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110ec7ef8;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110ec7f18;
  pppuVar11 = &ppuStack_1d8;
  uVar12 = 0x12;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_148,pppuVar11,0x12)
  ;
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  ppuVar10 = param_3;
  func_0x00010c0e00e0(ppuVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar4 = param_3;
    func_0x00010c260c20(param_3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar2;
    ppuVar10 = ppuVar4;
    func_0x00010c0e00e0(ppuVar2,param_2,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110ea8498;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar9 = ppuVar8;
    }
    _objc_retain(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar4);
  }
  else {
    _objc_retain(ppuVar3);
    ppuVar9 = ppuVar3;
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(ppuVar10);
    _objc_retain(pppuVar11);
    _objc_retain(uVar12);
    pppuVar5 = pppuVar11;
    func_0x00010c0720c0(pppuVar11,param_2,uVar12);
    _objc_retain(ppuVar10);
    ppuVar9 = ppuVar10;
    if ((((ulong)pppuVar5 & 1) == 0) &&
       ((((ulong)param_3[1] & 1) != 0 ||
        (func_0x00010be4dde0(param_3), *(char *)(param_3 + 1) == '\x01')))) {
      ppuVar1 = param_3;
      func_0x00010c087f60(param_3,param_2,uVar12);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_3;
      func_0x00010c087f60(param_3,param_2,pppuVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_3[3];
      func_0x00010c0e00e0(puVar6,param_2,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar10;
      func_0x00010c0b5ac0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0e00e0(puVar6,param_2,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      _objc_release(puVar6);
      ppuVar8 = (undefined **)param_3[2];
      func_0x00010c0e00e0(ppuVar8,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar9 = ppuVar4;
      }
      _objc_retain(ppuVar9);
      _objc_release(ppuVar10);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      _objc_release(ppuVar8);
      _objc_release(puVar7);
      _objc_release(ppuVar2);
      _objc_release(ppuVar1);
    }
    _objc_release(uVar12);
    _objc_release(pppuVar11);
    _objc_release(ppuVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 107f4406c; end: 107f4422f; -[SCGallerySearchLocalizationHelper translate:fromLanguageId:toLanguageId:] */

void FUN_107f4406c(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c0720c0(param_4,param_2,param_5);
  _objc_retain(param_3);
  lVar9 = param_3;
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      func_0x00010be4dde0(param_1);
      if (*(char *)(param_1 + 8) != '\x01') goto LAB_107f441f8;
    }
    lVar2 = param_1;
    func_0x00010c087f60(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c087f60(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c0b5ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e00e0(uVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(uVar4);
    lVar7 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0(lVar7,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      lVar9 = lVar8;
    }
    _objc_retain(lVar9);
    _objc_release(param_3);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
LAB_107f441f8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 107f44230; end: 107f445ef; -[SCGallerySearchLocalizationHelper prefixMatchingForTags:segment:languageId:] */

void FUN_107f44230(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  long lStack_710;
  long lStack_708;
  undefined **ppuStack_700;
  undefined **ppuStack_6f8;
  undefined **ppuStack_6f0;
  undefined **ppuStack_6e8;
  undefined **ppuStack_6e0;
  undefined **ppuStack_6d8;
  undefined1 ***pppuStack_6d0;
  code *pcStack_6c8;
  long lStack_6b8;
  undefined **ppuStack_6b0;
  undefined **ppuStack_6a8;
  undefined **ppuStack_6a0;
  long lStack_698;
  undefined **ppuStack_690;
  undefined **ppuStack_688;
  undefined8 uStack_680;
  long lStack_678;
  long *plStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  long lStack_638;
  long *plStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined1 auStack_5c0 [128];
  undefined1 auStack_540 [128];
  undefined1 auStack_4c0 [128];
  long lStack_440;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  long lStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined1 **ppuStack_3e0;
  code *pcStack_3d8;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  long lStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined **ppuStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined **ppuStack_220;
  long lStack_218;
  long lStack_210;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar9,param_5);
    _objc_release(puVar9);
  }
  ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c226ce0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = *(undefined ***)(param_1 + 0x20);
  lStack_210 = param_1;
  uStack_200 = param_5;
  ppuStack_1f8 = ppuVar17;
  func_0x00010c0e00e0(ppuVar2,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  ppuStack_208 = ppuVar15;
  _objc_retain(ppuVar2);
  ppuVar15 = ppuVar2;
  func_0x00010bf52a60(ppuVar2,param_2,&uStack_1b0,auStack_f0,0x10);
  if (ppuVar15 != (undefined **)0x0) {
    lVar1 = *plStack_1a0;
    do {
      ppuVar16 = (undefined **)0x0;
      do {
        if (*plStack_1a0 != lVar1) {
          _objc_enumerationMutation(ppuVar2);
        }
        uVar12 = *(undefined8 *)(lStack_1a8 + (long)ppuVar16 * 8);
        lVar3 = param_3;
        func_0x00010bf4b900(param_3,param_2,uVar12);
        ppuVar14 = ppuVar17;
        if ((int)lVar3 == 0) {
LAB_107f443f0:
          func_0x00010befa120(ppuVar14,param_2,uVar12);
        }
        else {
          func_0x00010c12d360(ppuStack_1f8,param_2,uVar12);
          ppuVar14 = ppuVar2;
          func_0x00010c0e00e0(ppuVar2,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = ppuVar14;
          func_0x00010bfda7c0();
          _objc_release(ppuVar14);
          ppuVar14 = ppuStack_208;
          if ((int)unaff_x28 != 0) goto LAB_107f443f0;
        }
        ppuVar16 = (undefined **)((long)ppuVar16 + 1);
      } while (ppuVar15 != ppuVar16);
      ppuVar15 = ppuVar2;
      func_0x00010bf52a60(ppuVar2,param_2,&uStack_1b0,auStack_f0,0x10);
      unaff_x27 = (undefined **)0x0;
    } while (ppuVar15 != (undefined **)0x0);
  }
  lStack_218 = param_3;
  _objc_release(ppuVar2);
  ppuStack_220 = ppuVar17;
  func_0x00010c12d4a0(ppuVar2,param_2,ppuVar17);
  ppuVar15 = ppuStack_1f8;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(ppuStack_1f8);
  puVar10 = &uStack_1f0;
  func_0x00010bf52a60(ppuVar15,param_2,puVar10,auStack_170,0x10);
  uVar12 = uStack_200;
  if (ppuVar15 != (undefined **)0x0) {
    param_3 = *plStack_1e0;
    unaff_x27 = &PTR____CFConstantStringClassReference_110ea8498;
    do {
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_1e0 != param_3) {
          _objc_enumerationMutation(ppuStack_1f8);
        }
        uVar13 = *(undefined8 *)(lStack_1e8 + (long)ppuVar17 * 8);
        lVar1 = lStack_210;
        func_0x00010c27ad40(lStack_210,param_2,uVar13,
                            &PTR____CFConstantStringClassReference_110ea8498,uVar12);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar2,param_2,lVar3,uVar13);
        _objc_release(lVar3);
        lVar3 = lVar1;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bfda7c0();
        _objc_release(lVar3);
        if ((int)lVar4 != 0) {
          func_0x00010befa120(ppuStack_208,param_2,uVar13);
        }
        _objc_release(lVar1);
        uVar12 = uStack_200;
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar15 != ppuVar17);
      puVar10 = &uStack_1f0;
      ppuVar15 = ppuStack_1f8;
      func_0x00010bf52a60(ppuStack_1f8,param_2,puVar10,auStack_170,0x10);
      unaff_x28 = (undefined **)0x0;
    } while (ppuVar15 != (undefined **)0x0);
  }
  ppuVar14 = ppuStack_1f8;
  _objc_release(ppuStack_1f8);
  ppuVar16 = ppuStack_208;
  ppuVar15 = ppuStack_208;
  func_0x00010bf51e00();
  _objc_release(ppuVar16);
  _objc_release(ppuStack_220);
  _objc_release(ppuVar2);
  _objc_release(ppuVar14);
  _objc_release(uVar12);
  _objc_release(param_4);
  _objc_release(lStack_218);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_250 = ppuVar14;
    pcStack_228 = FUN_107f445f0;
    lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_3c8 = &PTR____CFConstantStringClassReference_110ec7e78;
    ppuStack_3c0 = &PTR____CFConstantStringClassReference_110ec7e98;
    ppuStack_318 = &PTR____CFConstantStringClassReference_110ec8178;
    ppuStack_310 = &PTR____CFConstantStringClassReference_110dff6d8;
    ppuStack_3b8 = &PTR____CFConstantStringClassReference_110ec7f38;
    ppuStack_3b0 = &PTR____CFConstantStringClassReference_110ec7f58;
    ppuStack_308 = &PTR____CFConstantStringClassReference_110dff538;
    ppuStack_300 = &PTR____CFConstantStringClassReference_110dff558;
    ppuStack_3a8 = &PTR____CFConstantStringClassReference_110ec7cd8;
    ppuStack_3a0 = &PTR____CFConstantStringClassReference_110ec7cf8;
    ppuStack_2f8 = &PTR____CFConstantStringClassReference_110dc4f18;
    ppuStack_2f0 = &PTR____CFConstantStringClassReference_110dff578;
    ppuStack_398 = &PTR____CFConstantStringClassReference_110ec7d18;
    ppuStack_390 = &PTR____CFConstantStringClassReference_110ea8498;
    ppuVar14 = &PTR____CFConstantStringClassReference_110de3318;
    ppuStack_2e8 = &PTR____CFConstantStringClassReference_110dff618;
    ppuStack_2e0 = &PTR____CFConstantStringClassReference_110de3318;
    ppuStack_388 = &PTR____CFConstantStringClassReference_110ec7d38;
    ppuStack_380 = &PTR____CFConstantStringClassReference_110ec7d58;
    ppuStack_2d8 = &PTR____CFConstantStringClassReference_110dff738;
    ppuStack_2d0 = &PTR____CFConstantStringClassReference_110dff5f8;
    ppuStack_378 = &PTR____CFConstantStringClassReference_110ec7d78;
    ppuStack_370 = &PTR____CFConstantStringClassReference_110ec7d98;
    ppuStack_2c8 = &PTR____CFConstantStringClassReference_110dff638;
    ppuStack_2c0 = &PTR____CFConstantStringClassReference_110dbf6f8;
    ppuStack_368 = &PTR____CFConstantStringClassReference_110ec7db8;
    ppuStack_360 = &PTR____CFConstantStringClassReference_110ec7dd8;
    ppuStack_2b8 = &PTR____CFConstantStringClassReference_110dff658;
    ppuStack_2b0 = &PTR____CFConstantStringClassReference_110dc1b38;
    ppuStack_358 = &PTR____CFConstantStringClassReference_110ec7df8;
    ppuStack_350 = &PTR____CFConstantStringClassReference_110ec7e18;
    ppuStack_2a8 = &PTR____CFConstantStringClassReference_110dff678;
    ppuStack_2a0 = &PTR____CFConstantStringClassReference_110dff698;
    ppuStack_348 = &PTR____CFConstantStringClassReference_110ec7e38;
    ppuStack_340 = &PTR____CFConstantStringClassReference_110ec7e58;
    ppuStack_298 = &PTR____CFConstantStringClassReference_110dff598;
    ppuStack_290 = &PTR____CFConstantStringClassReference_110dff6b8;
    ppuStack_338 = &PTR____CFConstantStringClassReference_110ec7eb8;
    ppuStack_330 = &PTR____CFConstantStringClassReference_110ec7ed8;
    ppuStack_288 = &PTR____CFConstantStringClassReference_110dff6f8;
    ppuStack_280 = &PTR____CFConstantStringClassReference_110dff718;
    ppuStack_328 = &PTR____CFConstantStringClassReference_110ec7ef8;
    ppuStack_320 = &PTR____CFConstantStringClassReference_110ec7f18;
    ppuStack_278 = &PTR____CFConstantStringClassReference_110dff758;
    ppuStack_270 = &PTR____CFConstantStringClassReference_110dff778;
    ppuStack_260 = unaff_x28;
    ppuStack_258 = unaff_x27;
    uStack_248 = uVar12;
    uStack_240 = param_4;
    ppuStack_238 = ppuVar15;
    puStack_230 = &stack0xfffffffffffffff0;
    _objc_retain(puVar10);
    func_0x00010bf72080(ppuVar5,param_2,&ppuStack_318,&ppuStack_3c8,0x16);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    ppuVar15 = ppuVar14;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar15 = ppuVar6;
    }
    _objc_retain(ppuVar15);
    _objc_release(ppuVar6);
    ppuVar7 = ppuVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
      ___stack_chk_fail();
      ppuStack_408 = ppuVar16;
      ppuStack_400 = &PTR____CFConstantStringClassReference_110de3318;
      pcStack_3d8 = FUN_107f44878;
      lStack_440 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar8 = ppuVar7;
      ppuStack_430 = unaff_x28;
      ppuStack_428 = unaff_x27;
      ppuStack_420 = ppuVar17;
      lStack_418 = param_3;
      ppuStack_410 = ppuVar2;
      ppuStack_3f8 = ppuVar6;
      ppuStack_3f0 = ppuVar5;
      ppuStack_3e8 = ppuVar15;
      ppuStack_3e0 = &puStack_230;
      func_0x00010bdfc120();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      puVar11 = ppuVar7[2];
      ppuVar7[2] = puVar9;
      _objc_release(puVar11);
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      puVar11 = ppuVar7[3];
      ppuVar7[3] = puVar9;
      _objc_release(puVar11);
      if (ppuVar8 != (undefined **)0x0) {
        uStack_5d8 = 0;
        uStack_5e0 = 0;
        uStack_5c8 = 0;
        uStack_5d0 = 0;
        lStack_5f8 = 0;
        uStack_600 = 0;
        uStack_5e8 = 0;
        plStack_5f0 = (long *)0x0;
        _objc_retain(ppuVar8);
        ppuVar15 = ppuVar8;
        func_0x00010bf52a60(ppuVar8,param_2,&uStack_600,auStack_4c0,0x10);
        ppuStack_6a8 = ppuVar15;
        if (ppuVar15 != (undefined **)0x0) {
          lStack_6b8 = *plStack_5f0;
          ppuStack_6b0 = ppuVar8;
          do {
            ppuVar17 = (undefined **)0x0;
            do {
              if (*plStack_5f0 != lStack_6b8) {
                _objc_enumerationMutation(ppuVar8);
              }
              ppuVar16 = *(undefined ***)(lStack_5f8 + (long)ppuVar17 * 8);
              ppuVar2 = (undefined **)ppuVar7[2];
              ppuStack_6a0 = ppuVar17;
              func_0x00010c0e00e0(ppuVar2,param_2,ppuVar16);
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (ppuVar2 == (undefined **)0x0) {
                ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                _objc_alloc_init();
                func_0x00010c1d0640(ppuVar7[2],param_2,ppuVar2,ppuVar16);
                _objc_release(ppuVar2);
              }
              func_0x00010c0e00e0(ppuVar8,param_2,ppuVar16);
              _objc_retainAutoreleasedReturnValue();
              lStack_638 = 0;
              uStack_640 = 0;
              uStack_628 = 0;
              plStack_630 = (long *)0x0;
              uStack_618 = 0;
              uStack_620 = 0;
              uStack_608 = 0;
              uStack_610 = 0;
              ppuStack_688 = ppuVar8;
              func_0x00010bf52a60();
              ppuStack_690 = ppuVar8;
              if (ppuVar8 != (undefined **)0x0) {
                lStack_698 = *plStack_630;
                do {
                  ppuVar14 = (undefined **)0x0;
                  do {
                    if (*plStack_630 != lStack_698) {
                      _objc_enumerationMutation(ppuStack_688);
                    }
                    uVar12 = *(undefined8 *)(lStack_638 + (long)ppuVar14 * 8);
                    puVar9 = ppuVar7[3];
                    func_0x00010c0e00e0(puVar9,param_2,uVar12);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    if (puVar9 == (undefined *)0x0) {
                      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                      _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
                      func_0x00010c1d0640(ppuVar7[3],param_2,puVar9,uVar12);
                      _objc_release(puVar9);
                    }
                    ppuVar17 = ppuStack_688;
                    func_0x00010c0e00e0(ppuStack_688,param_2,uVar12);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar15 = ppuVar17;
                    func_0x00010bf44740();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar17);
                    puVar9 = ppuVar7[2];
                    func_0x00010c0e00e0(puVar9,param_2,ppuVar16);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640();
                    _objc_release(puVar9);
                    uStack_658 = 0;
                    uStack_660 = 0;
                    uStack_648 = 0;
                    uStack_650 = 0;
                    lStack_678 = 0;
                    uStack_680 = 0;
                    uStack_668 = 0;
                    plStack_670 = (long *)0x0;
                    _objc_retain(ppuVar15);
                    ppuVar17 = ppuVar15;
                    func_0x00010bf52a60(ppuVar15,param_2,&uStack_680,auStack_5c0,0x10);
                    if (ppuVar17 != (undefined **)0x0) {
                      lVar1 = *plStack_670;
                      do {
                        ppuVar2 = (undefined **)0x0;
                        do {
                          if (*plStack_670 != lVar1) {
                            _objc_enumerationMutation(ppuVar15);
                          }
                          uVar13 = *(undefined8 *)(lStack_678 + (long)ppuVar2 * 8);
                          puVar9 = ppuVar7[3];
                          func_0x00010c0e00e0(puVar9,param_2,uVar12);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0b5ac0(uVar13);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c1d0640(puVar9,param_2,ppuVar16,uVar13);
                          _objc_release(uVar13);
                          _objc_release(puVar9);
                          ppuVar2 = (undefined **)((long)ppuVar2 + 1);
                        } while (ppuVar17 != ppuVar2);
                        ppuVar17 = ppuVar15;
                        func_0x00010bf52a60(ppuVar15,param_2,&uStack_680,auStack_5c0,0x10);
                      } while (ppuVar17 != (undefined **)0x0);
                    }
                    _objc_release(ppuVar15);
                    _objc_release(ppuVar15);
                    ppuVar14 = (undefined **)((long)ppuVar14 + 1);
                  } while (ppuVar14 != ppuStack_690);
                  ppuVar17 = ppuStack_688;
                  func_0x00010bf52a60(ppuStack_688,param_2,&uStack_640,auStack_540,0x10);
                  ppuStack_690 = ppuVar17;
                } while (ppuVar17 != (undefined **)0x0);
              }
              _objc_release(ppuStack_688);
              ppuVar8 = ppuStack_6b0;
              ppuVar17 = (undefined **)((long)ppuStack_6a0 + 1);
            } while (ppuVar17 != ppuStack_6a8);
            ppuVar15 = ppuStack_6b0;
            func_0x00010bf52a60(ppuStack_6b0,param_2,&uStack_600,auStack_4c0,0x10);
            ppuStack_6a8 = ppuVar15;
          } while (ppuVar15 != (undefined **)0x0);
        }
        _objc_release(ppuVar8);
        *(undefined1 *)(ppuVar7 + 1) = 1;
      }
      _objc_release(ppuVar8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_440) {
        return;
      }
      ___stack_chk_fail();
      pcStack_6c8 = FUN_107f44c58;
      puVar9 = PTR__OBJC_CLASS___NSBundle_1126aea78;
      ppuStack_700 = ppuVar2;
      ppuStack_6f8 = ppuVar16;
      ppuStack_6f0 = ppuVar14;
      ppuStack_6e8 = ppuVar17;
      ppuStack_6e0 = ppuVar8;
      ppuStack_6d8 = ppuVar7;
      pppuStack_6d0 = &ppuStack_3e0;
      func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bdc2ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      lStack_708 = 0;
      puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar11,2,&lStack_708);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lStack_708;
      _objc_retain(lStack_708);
      ppuVar15 = (undefined **)0x0;
      if (lVar1 == 0) {
        lStack_710 = 0;
        ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar9,1,
                            &lStack_710);
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar17;
        if (lStack_710 != 0) {
          ppuVar15 = (undefined **)0x0;
        }
        _objc_retain(ppuVar15);
        _objc_release(ppuVar17);
      }
      _objc_release(puVar9);
      _objc_release(lVar1);
      _objc_release(puVar11);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
  return;
}



/* Entry: 107f445f0; end: 107f44877; -[SCGallerySearchLocalizationHelper languageIdToLocale:] */

void FUN_107f445f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 unaff_x23;
  undefined **unaff_x24;
  long lVar9;
  undefined8 uVar10;
  long lStack_4f0;
  long lStack_4e8;
  undefined **ppuStack_4e0;
  undefined8 uStack_4d8;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  undefined **ppuStack_4c0;
  undefined **ppuStack_4b8;
  undefined1 **ppuStack_4b0;
  code *pcStack_4a8;
  long lStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  long lStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [128];
  undefined1 auStack_320 [128];
  undefined1 auStack_2a0 [128];
  long lStack_220;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
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
  long lStack_48;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110ec7e78;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110ec7e98;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110ec8178;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110dff6d8;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110ec7f38;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110ec7f58;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110dff538;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110dff558;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110ec7cd8;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110ec7cf8;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110dc4f18;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dff578;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110ec7d18;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110ea8498;
  ppuVar8 = &PTR____CFConstantStringClassReference_110de3318;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dff618;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110de3318;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110ec7d38;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110ec7d58;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110dff738;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dff5f8;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110ec7d78;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110ec7d98;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dff638;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dbf6f8;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110ec7db8;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110ec7dd8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dff658;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dc1b38;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110ec7df8;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110ec7e18;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dff678;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dff698;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110ec7e38;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110ec7e58;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dff598;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dff6b8;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110ec7eb8;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110ec7ed8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dff6f8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dff718;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ec7ef8;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110ec7f18;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dff758;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dff778;
  _objc_retain(param_3);
  func_0x00010bf72080(ppuVar1,param_2,&ppuStack_f8,&ppuStack_1a8,0x16);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar6 = ppuVar8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar6 = ppuVar2;
  }
  _objc_retain(ppuVar6);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_1b8 = FUN_107f44878;
    lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar2 = ppuVar1;
    puStack_1c0 = &stack0xfffffffffffffff0;
    func_0x00010bdfc120();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    puVar5 = ppuVar1[2];
    ppuVar1[2] = puVar4;
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    puVar5 = ppuVar1[3];
    ppuVar1[3] = puVar4;
    _objc_release(puVar5);
    if (ppuVar2 != (undefined **)0x0) {
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      lStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      plStack_3d0 = (long *)0x0;
      _objc_retain(ppuVar2);
      ppuVar3 = ppuVar2;
      func_0x00010bf52a60(ppuVar2,param_2,&uStack_3e0,auStack_2a0,0x10);
      ppuStack_488 = ppuVar3;
      if (ppuVar3 != (undefined **)0x0) {
        lStack_498 = *plStack_3d0;
        ppuStack_490 = ppuVar2;
        do {
          ppuVar6 = (undefined **)0x0;
          do {
            if (*plStack_3d0 != lStack_498) {
              _objc_enumerationMutation(ppuVar2);
            }
            unaff_x23 = *(undefined8 *)(lStack_3d8 + (long)ppuVar6 * 8);
            unaff_x24 = (undefined **)ppuVar1[2];
            ppuStack_480 = ppuVar6;
            func_0x00010c0e00e0(unaff_x24,param_2,unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (unaff_x24 == (undefined **)0x0) {
              unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
              _objc_alloc_init();
              func_0x00010c1d0640(ppuVar1[2],param_2,unaff_x24,unaff_x23);
              _objc_release(unaff_x24);
            }
            func_0x00010c0e00e0(ppuVar2,param_2,unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            lStack_418 = 0;
            uStack_420 = 0;
            uStack_408 = 0;
            plStack_410 = (long *)0x0;
            uStack_3f8 = 0;
            uStack_400 = 0;
            uStack_3e8 = 0;
            uStack_3f0 = 0;
            ppuStack_468 = ppuVar2;
            func_0x00010bf52a60();
            ppuStack_470 = ppuVar2;
            if (ppuVar2 != (undefined **)0x0) {
              lStack_478 = *plStack_410;
              do {
                ppuVar8 = (undefined **)0x0;
                do {
                  if (*plStack_410 != lStack_478) {
                    _objc_enumerationMutation(ppuStack_468);
                  }
                  uVar10 = *(undefined8 *)(lStack_418 + (long)ppuVar8 * 8);
                  puVar4 = ppuVar1[3];
                  func_0x00010c0e00e0(puVar4,param_2,uVar10);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar4 == (undefined *)0x0) {
                    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
                    func_0x00010c1d0640(ppuVar1[3],param_2,puVar4,uVar10);
                    _objc_release(puVar4);
                  }
                  ppuVar6 = ppuStack_468;
                  func_0x00010c0e00e0(ppuStack_468,param_2,uVar10);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar2 = ppuVar6;
                  func_0x00010bf44740();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar6);
                  puVar4 = ppuVar1[2];
                  func_0x00010c0e00e0(puVar4,param_2,unaff_x23);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640();
                  _objc_release(puVar4);
                  uStack_438 = 0;
                  uStack_440 = 0;
                  uStack_428 = 0;
                  uStack_430 = 0;
                  lStack_458 = 0;
                  uStack_460 = 0;
                  uStack_448 = 0;
                  plStack_450 = (long *)0x0;
                  _objc_retain(ppuVar2);
                  ppuVar6 = ppuVar2;
                  func_0x00010bf52a60(ppuVar2,param_2,&uStack_460,auStack_3a0,0x10);
                  if (ppuVar6 != (undefined **)0x0) {
                    lVar9 = *plStack_450;
                    do {
                      unaff_x24 = (undefined **)0x0;
                      do {
                        if (*plStack_450 != lVar9) {
                          _objc_enumerationMutation(ppuVar2);
                        }
                        uVar7 = *(undefined8 *)(lStack_458 + (long)unaff_x24 * 8);
                        puVar4 = ppuVar1[3];
                        func_0x00010c0e00e0(puVar4,param_2,uVar10);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c0b5ac0(uVar7);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d0640(puVar4,param_2,unaff_x23,uVar7);
                        _objc_release(uVar7);
                        _objc_release(puVar4);
                        unaff_x24 = (undefined **)((long)unaff_x24 + 1);
                      } while (ppuVar6 != unaff_x24);
                      ppuVar6 = ppuVar2;
                      func_0x00010bf52a60(ppuVar2,param_2,&uStack_460,auStack_3a0,0x10);
                    } while (ppuVar6 != (undefined **)0x0);
                  }
                  _objc_release(ppuVar2);
                  _objc_release(ppuVar2);
                  ppuVar8 = (undefined **)((long)ppuVar8 + 1);
                } while (ppuVar8 != ppuStack_470);
                ppuVar6 = ppuStack_468;
                func_0x00010bf52a60(ppuStack_468,param_2,&uStack_420,auStack_320,0x10);
                ppuStack_470 = ppuVar6;
              } while (ppuVar6 != (undefined **)0x0);
            }
            _objc_release(ppuStack_468);
            ppuVar2 = ppuStack_490;
            ppuVar6 = (undefined **)((long)ppuStack_480 + 1);
          } while (ppuVar6 != ppuStack_488);
          ppuVar3 = ppuStack_490;
          func_0x00010bf52a60(ppuStack_490,param_2,&uStack_3e0,auStack_2a0,0x10);
          ppuStack_488 = ppuVar3;
        } while (ppuVar3 != (undefined **)0x0);
      }
      _objc_release(ppuVar2);
      *(undefined1 *)(ppuVar1 + 1) = 1;
    }
    _objc_release(ppuVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_220) {
      return;
    }
    ___stack_chk_fail();
    pcStack_4a8 = FUN_107f44c58;
    puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    ppuStack_4e0 = unaff_x24;
    uStack_4d8 = unaff_x23;
    ppuStack_4d0 = ppuVar8;
    ppuStack_4c8 = ppuVar6;
    ppuStack_4c0 = ppuVar2;
    ppuStack_4b8 = ppuVar1;
    ppuStack_4b0 = &puStack_1c0;
    func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bdc2ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    lStack_4e8 = 0;
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar5,2,&lStack_4e8);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lStack_4e8;
    _objc_retain(lStack_4e8);
    ppuVar6 = (undefined **)0x0;
    if (lVar9 == 0) {
      lStack_4f0 = 0;
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar4,1,
                          &lStack_4f0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar8;
      if (lStack_4f0 != 0) {
        ppuVar6 = (undefined **)0x0;
      }
      _objc_retain(ppuVar6);
      _objc_release(ppuVar8);
    }
    _objc_release(puVar4);
    _objc_release(lVar9);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 107f44878; end: 107f44c57; -[SCGallerySearchLocalizationHelper _loadMaps] */

void FUN_107f44878(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **unaff_x22;
  undefined8 unaff_x23;
  undefined **unaff_x24;
  long lVar9;
  undefined8 uVar10;
  long lStack_340;
  long lStack_338;
  undefined **ppuStack_330;
  undefined8 uStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined1 *puStack_300;
  code *pcStack_2f8;
  long lStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  long lStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_1;
  func_0x00010bdfc120();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar6 = param_1[2];
  param_1[2] = puVar3;
  _objc_release(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar6 = param_1[3];
  param_1[3] = puVar3;
  _objc_release(puVar6);
  if (ppuVar1 != (undefined **)0x0) {
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    _objc_retain(ppuVar1);
    ppuVar2 = ppuVar1;
    func_0x00010bf52a60(ppuVar1,param_2,&uStack_230,auStack_f0,0x10);
    ppuStack_2d8 = ppuVar2;
    if (ppuVar2 != (undefined **)0x0) {
      lStack_2e8 = *plStack_220;
      ppuStack_2e0 = ppuVar1;
      do {
        ppuVar7 = (undefined **)0x0;
        do {
          if (*plStack_220 != lStack_2e8) {
            _objc_enumerationMutation(ppuVar1);
          }
          unaff_x23 = *(undefined8 *)(lStack_228 + (long)ppuVar7 * 8);
          unaff_x24 = (undefined **)param_1[2];
          ppuStack_2d0 = ppuVar7;
          func_0x00010c0e00e0(unaff_x24,param_2,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (unaff_x24 == (undefined **)0x0) {
            unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_alloc_init();
            func_0x00010c1d0640(param_1[2],param_2,unaff_x24,unaff_x23);
            _objc_release(unaff_x24);
          }
          func_0x00010c0e00e0(ppuVar1,param_2,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          lStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          plStack_260 = (long *)0x0;
          uStack_248 = 0;
          uStack_250 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          ppuStack_2b8 = ppuVar1;
          func_0x00010bf52a60();
          ppuStack_2c0 = ppuVar1;
          if (ppuVar1 != (undefined **)0x0) {
            lStack_2c8 = *plStack_260;
            do {
              unaff_x22 = (undefined **)0x0;
              do {
                if (*plStack_260 != lStack_2c8) {
                  _objc_enumerationMutation(ppuStack_2b8);
                }
                uVar10 = *(undefined8 *)(lStack_268 + (long)unaff_x22 * 8);
                puVar3 = param_1[3];
                func_0x00010c0e00e0(puVar3,param_2,uVar10);
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (puVar3 == (undefined *)0x0) {
                  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
                  func_0x00010c1d0640(param_1[3],param_2,puVar3,uVar10);
                  _objc_release(puVar3);
                }
                ppuVar7 = ppuStack_2b8;
                func_0x00010c0e00e0(ppuStack_2b8,param_2,uVar10);
                _objc_retainAutoreleasedReturnValue();
                ppuVar1 = ppuVar7;
                func_0x00010bf44740();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar7);
                puVar3 = param_1[2];
                func_0x00010c0e00e0(puVar3,param_2,unaff_x23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640();
                _objc_release(puVar3);
                uStack_288 = 0;
                uStack_290 = 0;
                uStack_278 = 0;
                uStack_280 = 0;
                lStack_2a8 = 0;
                uStack_2b0 = 0;
                uStack_298 = 0;
                plStack_2a0 = (long *)0x0;
                _objc_retain(ppuVar1);
                ppuVar7 = ppuVar1;
                func_0x00010bf52a60(ppuVar1,param_2,&uStack_2b0,auStack_1f0,0x10);
                if (ppuVar7 != (undefined **)0x0) {
                  lVar9 = *plStack_2a0;
                  do {
                    unaff_x24 = (undefined **)0x0;
                    do {
                      if (*plStack_2a0 != lVar9) {
                        _objc_enumerationMutation(ppuVar1);
                      }
                      uVar8 = *(undefined8 *)(lStack_2a8 + (long)unaff_x24 * 8);
                      puVar3 = param_1[3];
                      func_0x00010c0e00e0(puVar3,param_2,uVar10);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c0b5ac0(uVar8);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar3,param_2,unaff_x23,uVar8);
                      _objc_release(uVar8);
                      _objc_release(puVar3);
                      unaff_x24 = (undefined **)((long)unaff_x24 + 1);
                    } while (ppuVar7 != unaff_x24);
                    ppuVar7 = ppuVar1;
                    func_0x00010bf52a60(ppuVar1,param_2,&uStack_2b0,auStack_1f0,0x10);
                  } while (ppuVar7 != (undefined **)0x0);
                }
                _objc_release(ppuVar1);
                _objc_release(ppuVar1);
                unaff_x22 = (undefined **)((long)unaff_x22 + 1);
              } while (unaff_x22 != ppuStack_2c0);
              ppuVar7 = ppuStack_2b8;
              func_0x00010bf52a60(ppuStack_2b8,param_2,&uStack_270,auStack_170,0x10);
              ppuStack_2c0 = ppuVar7;
            } while (ppuVar7 != (undefined **)0x0);
          }
          _objc_release(ppuStack_2b8);
          ppuVar1 = ppuStack_2e0;
          ppuVar7 = (undefined **)((long)ppuStack_2d0 + 1);
        } while (ppuVar7 != ppuStack_2d8);
        ppuVar2 = ppuStack_2e0;
        func_0x00010bf52a60(ppuStack_2e0,param_2,&uStack_230,auStack_f0,0x10);
        ppuStack_2d8 = ppuVar2;
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar1);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2f8 = FUN_107f44c58;
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  ppuStack_330 = unaff_x24;
  uStack_328 = unaff_x23;
  ppuStack_320 = unaff_x22;
  ppuStack_318 = ppuVar7;
  ppuStack_310 = ppuVar1;
  ppuStack_308 = param_1;
  puStack_300 = &stack0xfffffffffffffff0;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bdc2ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lStack_338 = 0;
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar6,2,&lStack_338);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lStack_338;
  _objc_retain(lStack_338);
  puVar3 = (undefined *)0x0;
  if (lVar9 == 0) {
    lStack_340 = 0;
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar4,1,&lStack_340
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    if (lStack_340 != 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(lVar9);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f44c58; end: 107f44d63; -[SCGallerySearchLocalizationHelper _dictionaryForTranslation] */

void FUN_107f44c58(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_50;
  long lStack_48;
  
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010bdc2ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  lStack_48 = 0;
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar2,2,&lStack_48);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  puVar5 = (undefined *)0x0;
  if (lVar1 == 0) {
    lStack_50 = 0;
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar3,1,&lStack_50)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    if (lStack_50 != 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107f44d64; end: 107f44d9f; -[SCGallerySearchLocalizationHelper .cxx_destruct] */

void FUN_107f44d64(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f44da0; end: 107f4511b;  */

undefined1 *
FUN_107f44da0(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_x7;
  undefined8 uVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(param_1);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(param_1);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c45e8;
  _objc_alloc(PTR_PTR_1126c45e8);
  uVar15 = 0;
  uVar16 = 0;
  func_0x00010c038000();
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  puVar13 = &uStack_130;
  puVar18 = auStack_f0;
  uVar14 = 0x10;
  puVar7 = param_1;
  func_0x00010bf52a60();
  if (puVar7 != (undefined1 *)0x0) {
    lVar19 = *plStack_120;
    do {
      puVar18 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar19) {
          _objc_enumerationMutation(param_1);
        }
        uVar20 = *(undefined8 *)(lStack_128 + (long)puVar18 * 8);
        uVar14 = uVar20;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010bf4b900();
        _objc_release(uVar14);
        if (((ulong)puVar8 & 1) == 0) {
          puVar8 = PTR_PTR_1126af4c0;
          func_0x00010bfa7060();
          _objc_retainAutoreleasedReturnValue();
          if ((puVar8 != (undefined *)0x0) &&
             (puVar9 = puVar8, func_0x00010c080ca0(), ((ulong)puVar9 & 1) == 0)) {
            func_0x00010befa120(puVar3);
            func_0x00010c241220(uVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4);
            _objc_release(uVar20);
            puVar9 = puVar8;
            func_0x00010bf97200();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar2;
            func_0x00010bf4b900();
            _objc_release(puVar9);
            if (((ulong)puVar10 & 1) == 0) {
              func_0x00010befa120(puVar1);
              puVar9 = puVar8;
              func_0x00010bf97200();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              _objc_release(puVar9);
            }
          }
          _objc_release(puVar8);
        }
        puVar18 = puVar18 + 1;
      } while (puVar7 != puVar18);
      puVar13 = &uStack_130;
      puVar18 = auStack_f0;
      uVar14 = 0x10;
      puVar7 = param_1;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  if (param_2 != (undefined8 *)0x0) {
    puVar8 = puVar1;
    func_0x00010bf51e00();
    _objc_autorelease();
    *param_2 = puVar8;
  }
  if (param_3 != (undefined8 *)0x0) {
    puVar8 = puVar3;
    func_0x00010bf51e00();
    _objc_autorelease();
    *param_3 = puVar8;
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar11 = &puStack_1e0;
  _objc_retain(puVar13);
  _objc_retain(puVar18);
  _objc_retain(uVar14);
  _objc_retain(uVar15);
  _objc_retain(in_x7);
  puStack_1d8 = PTR_PTR_1126fbb88;
  puStack_1e0 = param_1;
  _objc_msgSendSuper2(&puStack_1e0,PTR_s_init_1125d9248);
  if (ppuVar11 != (undefined1 **)0x0) {
    puVar12 = puVar13;
    func_0x00010bf51e00();
    uVar20 = *(undefined8 *)((long)ppuVar11 + 0x10);
    *(undefined8 **)((long)ppuVar11 + 0x10) = puVar12;
    _objc_release(uVar20);
    puVar7 = puVar18;
    func_0x00010bf51e00();
    uVar20 = *(undefined8 *)((long)ppuVar11 + 0x18);
    *(undefined1 **)((long)ppuVar11 + 0x18) = puVar7;
    _objc_release(uVar20);
    uVar20 = uVar14;
    func_0x00010bf51e00();
    uVar17 = *(undefined8 *)((long)ppuVar11 + 0x20);
    *(undefined8 *)((long)ppuVar11 + 0x20) = uVar20;
    _objc_release(uVar17);
    uVar20 = uVar15;
    func_0x00010bf51e00();
    uVar17 = *(undefined8 *)((long)ppuVar11 + 0x28);
    *(undefined8 *)((long)ppuVar11 + 0x28) = uVar20;
    _objc_release(uVar17);
    *(uint *)((long)ppuVar11 + 0xc) = CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(uVar22,uVar21)));
    *(undefined8 *)((long)ppuVar11 + 0x30) = uVar16;
    uVar16 = in_x7;
    func_0x00010bf51e00();
    uVar20 = *(undefined8 *)((long)ppuVar11 + 0x38);
    *(undefined8 *)((long)ppuVar11 + 0x38) = uVar16;
    _objc_release(uVar20);
    *(undefined1 *)((long)ppuVar11 + 8) = 0x70;
  }
  _objc_release(in_x7);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(puVar18);
  _objc_release(puVar13);
  return (undefined1 *)ppuVar11;
}



/* Entry: 107f4511c; end: 107f4527b; -[SCGallerySearchResult initWithResultTitle:matchingGalleryEntries:matchingGallerySnaps:keywords:rank:searchResultType:resultMatchTypes:isSimilarResult:] */

undefined1 *
FUN_107f4511c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fbb88;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107f4527c; end: 107f4529f; -[SCGallerySearchResult copyWithZone:] */

undefined8 FUN_107f4527c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f452a0; end: 107f45373; -[SCGallerySearchResult hash] */

undefined8 * FUN_107f452a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar7 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_48 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  lVar6 = *(long *)(param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  lStack_40 = -lVar6;
  if (-1 < lVar6) {
    lStack_40 = lVar6;
  }
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar4 = &uStack_68;
  func_0x000100505190(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_107f4548c:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107f45498;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((puVar4[6] == param_3[6] && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))))) {
      fVar10 = ABS(*(float *)((long)puVar4 + 0xc) - *(float *)((long)param_3 + 0xc));
      fVar9 = ABS(*(float *)((long)puVar4 + 0xc) + *(float *)((long)param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar10) && (bVar1 = false, !NAN(fVar10) && !NAN(fVar9))) {
        bVar1 = fVar10 < fVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
          && ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
         && (((lVar6 = puVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0))
             && ((lVar6 = puVar4[5], lVar6 == param_3[5] || (func_0x00010c071ae0(), (int)lVar6 != 0)
                 ))))) {
        puVar8 = (undefined8 *)puVar4[7];
        if (puVar8 != (undefined8 *)param_3[7]) {
          func_0x00010c071ae0();
          goto LAB_107f45498;
        }
        goto LAB_107f4548c;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_107f45498:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 107f45374; end: 107f454b3; -[SCGallerySearchResult isEqual:] */

long FUN_107f45374(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107f4548c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f45498;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      fVar6 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
      fVar5 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         (((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
          ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar4 != *(long *)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_107f45498;
        }
        goto LAB_107f4548c;
      }
    }
    lVar4 = 0;
  }
LAB_107f45498:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107f454b4; end: 107f454bb; -[SCGallerySearchResult resultTitle] */

undefined8 FUN_107f454b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f454bc; end: 107f454c3; -[SCGallerySearchResult matchingGalleryEntries] */

undefined8 FUN_107f454bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f454c4; end: 107f454cb; -[SCGallerySearchResult matchingGallerySnaps] */

undefined8 FUN_107f454c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f454cc; end: 107f454d3; -[SCGallerySearchResult keywords] */

undefined8 FUN_107f454cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f454d4; end: 107f454db; -[SCGallerySearchResult rank] */

undefined4 FUN_107f454d4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107f454dc; end: 107f454e3; -[SCGallerySearchResult searchResultType] */

undefined8 FUN_107f454dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107f454e4; end: 107f454eb; -[SCGallerySearchResult resultMatchTypes] */

undefined8 FUN_107f454e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107f454ec; end: 107f454f3; -[SCGallerySearchResult isSimilarResult] */

undefined1 FUN_107f454ec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107f454f4; end: 107f45547; -[SCGallerySearchResult .cxx_destruct] */

void FUN_107f454f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f45548; end: 107f45563; +[SCGallerySearchResultBuilder gallerySearchResult] */

void FUN_107f45548(void)

{
  _objc_alloc_init(PTR_PTR_1126d86e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f45564; end: 107f45787; +[SCGallerySearchResultBuilder gallerySearchResultFromExistingGallerySearchResult:] */

void FUN_107f45564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  
  puVar1 = PTR_PTR_1126d86e0;
  _objc_retain(param_3);
  func_0x00010bfbd640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c13cdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b7400(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0c1c20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b3600(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0c1c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b3620(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c086f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b1f60(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f520(param_3);
  puVar10 = puVar9;
  func_0x00010c2b6700(puVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c1540a0(param_3);
  puVar12 = puVar10;
  func_0x00010c2b7c20(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c13cc40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c2b73e0(puVar12,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c07e100(param_3);
  _objc_release(param_3);
  puVar15 = puVar13;
  func_0x00010c2b15a0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(uVar11);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 107f45788; end: 107f457d3; -[SCGallerySearchResultBuilder build] */

void FUN_107f45788(long param_1)

{
  _objc_alloc(PTR_PTR_1126c3bb8);
  func_0x00010c03fe00(*(undefined4 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f457d4; end: 107f4580b; -[SCGallerySearchResultBuilder withResultTitle:] */

long FUN_107f457d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f4580c; end: 107f45843; -[SCGallerySearchResultBuilder withMatchingGalleryEntries:] */

long FUN_107f4580c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f45844; end: 107f4587b; -[SCGallerySearchResultBuilder withMatchingGallerySnaps:] */

long FUN_107f45844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f4587c; end: 107f458b3; -[SCGallerySearchResultBuilder withKeywords:] */

long FUN_107f4587c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f458b4; end: 107f458bb; -[SCGallerySearchResultBuilder withRank:] */

void FUN_107f458b4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 107f458bc; end: 107f458c3; -[SCGallerySearchResultBuilder withSearchResultType:] */

void FUN_107f458bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 107f458c4; end: 107f458fb; -[SCGallerySearchResultBuilder withResultMatchTypes:] */

long FUN_107f458c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f458fc; end: 107f45903; -[SCGallerySearchResultBuilder withIsSimilarResult:] */

void FUN_107f458fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 107f45904; end: 107f45957; -[SCGallerySearchResultBuilder .cxx_destruct] */

void FUN_107f45904(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f45958; end: 107f45b97; -[SCGalleryTagsDataModel initWithTagVersion:timeTags:locationTags:visualTags:metaTags:visualTagsWithConfidence:tagClusterName:locationClusterName:caption:tinyClipCaptionToConfidenceMapArray:tinyClipEmbeddings:tinyClipModelVersion:] */

undefined8 *
FUN_107f45958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126fbb90;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    puVar1[0xc] = param_14;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107f45b98; end: 107f45bbb; -[SCGalleryTagsDataModel copyWithZone:] */

undefined8 FUN_107f45b98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f45bbc; end: 107f45ca7; -[SCGalleryTagsDataModel hash] */

long * FUN_107f45bbc(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_88;
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
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_88 = -lVar5;
  if (-1 < lVar5) {
    lStack_88 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x60);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  plVar3 = &lStack_88;
  uStack_38 = uVar1;
  func_0x000100505190(plVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_107f45e08:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_107f45e14;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) && ((plVar3[1] == param_3[1] && (plVar3[0xc] == param_3[0xc]))))
    {
      lVar5 = plVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = plVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = plVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = plVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = plVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = plVar3[8];
                  if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = plVar3[9];
                    if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = plVar3[10];
                      if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        plVar6 = (long *)plVar3[0xb];
                        if (plVar6 != (long *)param_3[0xb]) {
                          func_0x00010c071ae0();
                          goto LAB_107f45e14;
                        }
                        goto LAB_107f45e08;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_107f45e14:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 107f45ca8; end: 107f45e2f; -[SCGalleryTagsDataModel isEqual:] */

long FUN_107f45ca8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107f45e08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f45e14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if (lVar3 != *(long *)(param_3 + 0x58)) {
                          func_0x00010c071ae0();
                          goto LAB_107f45e14;
                        }
                        goto LAB_107f45e08;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107f45e14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107f45e30; end: 107f45e37; -[SCGalleryTagsDataModel tagVersion] */

undefined8 FUN_107f45e30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f45e38; end: 107f45e3f; -[SCGalleryTagsDataModel timeTags] */

undefined8 FUN_107f45e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f45e40; end: 107f45e47; -[SCGalleryTagsDataModel locationTags] */

undefined8 FUN_107f45e40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f45e48; end: 107f45e4f; -[SCGalleryTagsDataModel visualTags] */

undefined8 FUN_107f45e48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f45e50; end: 107f45e57; -[SCGalleryTagsDataModel metaTags] */

undefined8 FUN_107f45e50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f45e58; end: 107f45e5f; -[SCGalleryTagsDataModel visualTagsWithConfidence] */

undefined8 FUN_107f45e58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107f45e60; end: 107f45e67; -[SCGalleryTagsDataModel tagClusterName] */

undefined8 FUN_107f45e60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


