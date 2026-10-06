/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d5cddc; end: 107d5cf1b;  */

void FUN_107d5cddc(long *param_1,long *param_2)

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
      FUN_107d5d2e8();
LAB_107d5cf18:
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
      if (uVar7 >> 0x3d != 0) goto LAB_107d5cf18;
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



/* Entry: 107d5cf1c; end: 107d5cf63;  */

void FUN_107d5cf1c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 107d5cf64; end: 107d5d193; -[SCCTChatNewMessageProviderListenerAnnouncer removeListener:] */

void FUN_107d5cf64(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_107d5d118;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_107d5cfcc;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_107d5cf1c(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_107d5d118;
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
LAB_107d5cfcc:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110a0afd0;
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
          FUN_107d5cddc(plVar9,lVar7);
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
    FUN_107d5cf1c(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_107d5d118;
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
LAB_107d5d118:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d5d194; end: 107d5d29f; -[SCCTChatNewMessageProviderListenerAnnouncer chatNewMessageProvider:didReceiveNewTextMessage:] */

void FUN_107d5d194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_107d5cad0(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf37060();
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



/* Entry: 107d5d2a0; end: 107d5d2c7; -[SCCTChatNewMessageProviderListenerAnnouncer .cxx_destruct] */

void FUN_107d5d2a0(long param_1)

{
  FUN_107d5d2fc(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 107d5d2c8; end: 107d5d2e7; -[SCCTChatNewMessageProviderListenerAnnouncer .cxx_construct] */

void FUN_107d5d2c8(long param_1)

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



/* Entry: 107d5d2e8; end: 107d5d2fb;  */

undefined * FUN_107d5d2e8(void)

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



/* Entry: 107d5d2fc; end: 107d5d353;  */

long FUN_107d5d2fc(long param_1)

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



/* Entry: 107d5d354; end: 107d5d363;  */

void FUN_107d5d354(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a0afd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107d5d364; end: 107d5d383;  */

void FUN_107d5d364(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a0afd0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107d5d384; end: 107d5d3eb;  */

void FUN_107d5d384(long param_1)

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



/* Entry: 107d5d3ec; end: 107d5d3ef;  */

void FUN_107d5d3ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107d5d3f0; end: 107d5d763; +[SCStickerFavoriteNotifications displayFavoriteNotificationForAddedToFavorites:withError:notificationPool:pageSource:stickerId:entityType:superCategoryType:indexPath:stickerPickerSessionId:isAnimated:creativeToolsMetricsServices:] */

void FUN_107d5d3f0(undefined8 param_1,undefined8 param_2,int param_3,long param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,long param_11,undefined4 param_12,undefined4 param_13,
                  long param_14)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_e8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lStack_e8 = param_14;
  _objc_retain();
  if (param_11 == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    param_11 = lStack_e8;
  }
  if (param_3 == 0) {
    func_0x000107d5d788();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) goto LAB_107d5d58c;
    lVar1 = lStack_e8;
    func_0x000107d5d7d0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107d5d770();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
LAB_107d5d58c:
      puVar4 = PTR_PTR_1126afde0;
      func_0x00010bf54760();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107d5d5b0;
    }
    lVar1 = lStack_e8;
    func_0x000107d5d7b8();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lStack_e8);
  lVar2 = param_4;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  lStack_e8 = lVar1;
  if ((int)lVar3 == 0) {
LAB_107d5d55c:
    _objc_release(lVar2);
  }
  else {
    lVar3 = param_4;
    func_0x00010bf3ec40();
    _objc_release();
    if (lVar3 == 2) {
      func_0x000107d5d7a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_e8 = lVar2;
      lVar2 = lVar1;
      goto LAB_107d5d55c;
    }
  }
  puVar4 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0();
  _objc_retainAutoreleasedReturnValue();
LAB_107d5d5b0:
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x107d5d764;
  puStack_80 = &UNK_110841f80;
  uStack_78 = param_5;
  puStack_70 = puVar4;
  _objc_retain(puVar4);
  _objc_retain(param_5);
  func_0x0001000d76cc("APPSTORE",&puStack_98);
  lVar1 = param_14;
  func_0x00010c254380(param_14);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76560(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_14;
  func_0x00010c253960(param_14);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0a80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puStack_70);
  _objc_release(uStack_78);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(lStack_e8);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 107d5d764; end: 107d5d7e7;  */

void FUN_107d5d764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_submitNotificationWithPresenter__1126756f8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107d5d7e8; end: 107d5d863;  */

undefined * FUN_107d5d7e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727a40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ebb3b8,
                        &UNK_10dee640c,&UNK_10dee642c,3,FUN_107d5d864,0);
    do {
      if (puRam0000000113727a40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727a40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727a40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727a40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727a40;
}



/* Entry: 107d5d864; end: 107d5d86f;  */

bool FUN_107d5d864(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 107d5d870; end: 107d5da23; -[SCPreviewFeatureTooltipImpl initWithConfiguration:tooltipsProvider:bounce:autoCreativeTooltip:music:timeline:autoCaptions:lensExplorer:voiceover:smartTemplate:] */

undefined8 *
FUN_107d5d870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126fae80;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_storeWeak(puVar1 + 5,param_7);
    _objc_storeWeak(puVar1 + 6,param_8);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_12);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d5da24; end: 107d5da2b; -[SCPreviewFeatureTooltipImpl responderChainPriority] */

undefined8 FUN_107d5da24(void)

{
  return 0x7fffffff;
}



/* Entry: 107d5da2c; end: 107d5da6b; -[SCPreviewFeatureTooltipImpl configureWithView:] */

void FUN_107d5da2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x58,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d5da6c; end: 107d5de13; -[SCPreviewFeatureTooltipImpl activate] */

void FUN_107d5da6c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c273c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_release(lVar1);
LAB_107d5db70:
    uVar7 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c22fd80();
    if ((uVar9 & 1) == 0) {
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    else {
      lVar1 = param_1 + 0x30;
      _objc_loadWeakRetained();
      lVar3 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c27cf60();
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(uVar8);
      _objc_release(uVar7);
      if ((int)lVar4 != 0) {
        lVar1 = param_1 + 0x10;
        _objc_loadWeakRetained(lVar1);
        lVar3 = lVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c190820();
        goto LAB_107d5ddb8;
      }
    }
    uVar7 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c22fda0();
    if ((uVar9 & 1) == 0) {
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    else {
      lVar1 = param_1 + 0x30;
      _objc_loadWeakRetained();
      lVar3 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c27cf80();
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(uVar8);
      _objc_release(uVar7);
      if ((int)lVar4 != 0) {
        lVar1 = param_1 + 0x10;
        _objc_loadWeakRetained(lVar1);
        lVar3 = lVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c190840();
        goto LAB_107d5ddb8;
      }
    }
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = param_1 + 0x10;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c22f900();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      if ((int)lVar6 == 0) goto LAB_107d5ddf8;
      lVar3 = param_1;
      func_0x00010c1122a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2737a0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c084f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (lVar1 != 0) {
        func_0x000107e480b8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10e880(0x4004000000000000,lVar2,param_2,lVar1,lVar3);
        _objc_release(lVar3);
        lVar3 = param_1 + 0x10;
        _objc_loadWeakRetained(lVar3);
        lVar4 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c190560();
        _objc_release(lVar4);
        goto LAB_107d5ddb8;
      }
      goto LAB_107d5ddc0;
    }
  }
  else {
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c22fdc0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if ((int)lVar6 == 0) goto LAB_107d5db70;
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235e40();
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190860();
LAB_107d5ddb8:
    _objc_release(lVar3);
LAB_107d5ddc0:
    _objc_release(lVar1);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1d280();
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
LAB_107d5ddf8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107d5de14; end: 107d5de2b; -[SCPreviewFeatureTooltipImpl configuration] */

void FUN_107d5de14(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d5de2c; end: 107d5de37; -[SCPreviewFeatureTooltipImpl setConfiguration:] */

void FUN_107d5de2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 107d5de38; end: 107d5de4f; -[SCPreviewFeatureTooltipImpl tooltipsProvider] */

void FUN_107d5de38(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d5de50; end: 107d5de5b; -[SCPreviewFeatureTooltipImpl setTooltipsProvider:] */

void FUN_107d5de50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107d5de5c; end: 107d5de73; -[SCPreviewFeatureTooltipImpl bounce] */

void FUN_107d5de5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d5de74; end: 107d5de7f; -[SCPreviewFeatureTooltipImpl setBounce:] */

void FUN_107d5de74(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107d5de80; end: 107d5de97; -[SCPreviewFeatureTooltipImpl autoCreativeTooltip] */

void FUN_107d5de80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d5de98; end: 107d5dea3; -[SCPreviewFeatureTooltipImpl setAutoCreativeTooltip:] */

void FUN_107d5de98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107d5dea4; end: 107d5debb; -[SCPreviewFeatureTooltipImpl music] */

void FUN_107d5dea4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d5debc; end: 107d5dec7; -[SCPreviewFeatureTooltipImpl setMusic:] */

void FUN_107d5debc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 107d5dec8; end: 107d5dedf; -[SCPreviewFeatureTooltipImpl timeline] */

void FUN_107d5dec8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d5dee0; end: 107d5deeb; -[SCPreviewFeatureTooltipImpl setTimeline:] */

void FUN_107d5dee0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 107d5deec; end: 107d5def3; -[SCPreviewFeatureTooltipImpl autoCaptions] */

undefined8 FUN_107d5deec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d5def4; end: 107d5df23; -[SCPreviewFeatureTooltipImpl setAutoCaptions:] */

void FUN_107d5def4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d5df24; end: 107d5df3b; -[SCPreviewFeatureTooltipImpl lensExplorer] */

void FUN_107d5df24(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d5df3c; end: 107d5df47; -[SCPreviewFeatureTooltipImpl setLensExplorer:] */

void FUN_107d5df3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 107d5df48; end: 107d5df4f; -[SCPreviewFeatureTooltipImpl voiceover] */

undefined8 FUN_107d5df48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d5df50; end: 107d5df7f; -[SCPreviewFeatureTooltipImpl setVoiceover:] */

void FUN_107d5df50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d5df80; end: 107d5df97; -[SCPreviewFeatureTooltipImpl smartTemplate] */

void FUN_107d5df80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d5df98; end: 107d5dfa3; -[SCPreviewFeatureTooltipImpl setSmartTemplate:] */

void FUN_107d5df98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 107d5dfa4; end: 107d5dfbb; -[SCPreviewFeatureTooltipImpl previewView] */

void FUN_107d5dfa4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d5dfbc; end: 107d5dfc7; -[SCPreviewFeatureTooltipImpl setPreviewView:] */

void FUN_107d5dfbc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 107d5dfc8; end: 107d5e03f; -[SCPreviewFeatureTooltipImpl .cxx_destruct] */

void FUN_107d5dfc8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107d5e040; end: 107d5e157; -[SCPreviewFeatureTooltipServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d5e040(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d7a50;
  _objc_alloc(PTR_PTR_1126d7a50);
  func_0x00010c0540e0();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276e7d0);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107d5e158; end: 107d5e41b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d5e158(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1 + _DAT_11276e7a8;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar22 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar22);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain();
    _objc_release(uVar2);
    puVar22 = PTR_PTR_1126d7a48;
    _objc_alloc(PTR_PTR_1126d7a48);
    lVar4 = param_1 + _DAT_11276e7cc;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c274120();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_11276e7b4;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bf207a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_11276e7ac;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf115c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_11276e7bc;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_11276e7c4;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + _DAT_11276e7b0;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + _DAT_11276e7b8;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c092a20();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + _DAT_11276e7c8;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c2a0940();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_11276e7c0;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010c23eec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c001f00(puVar22);
    _objc_release(uVar1);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 107d5e41c; end: 107d5e4c3; -[SCPreviewFeatureTooltipServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d5e41c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276e7d0,0);
  _objc_destroyWeak(param_1 + _DAT_11276e7cc);
  _objc_destroyWeak(param_1 + _DAT_11276e7c8);
  _objc_destroyWeak(param_1 + _DAT_11276e7c4);
  _objc_destroyWeak(param_1 + _DAT_11276e7c0);
  _objc_destroyWeak(param_1 + _DAT_11276e7bc);
  _objc_destroyWeak(param_1 + _DAT_11276e7b8);
  _objc_destroyWeak(param_1 + _DAT_11276e7b4);
  _objc_destroyWeak(param_1 + _DAT_11276e7b0);
  _objc_destroyWeak(param_1 + _DAT_11276e7ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276e7a8);
  return;
}



/* Entry: 107d5e4c4; end: 107d5e56f; -[SCPreviewFeatureTooltipServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d5e4c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11276e7d4;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11276e7d8;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c273d60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107d5e570; end: 107d5e5a7; -[SCPreviewFeatureTooltipServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d5e570(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276e7d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276e7d4);
  return;
}



/* Entry: 107d5e5a8; end: 107d5e623;  */

void FUN_107d5e5a8(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(param_1,0xc014000000000000);
  func_0x00010bef98c0(param_1 + -5.0,0,puVar1);
  func_0x00010bef98c0(param_1 + 5.0,0,puVar1);
  func_0x00010bf3dc80(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d5e624; end: 107d5e663;  */

void FUN_107d5e624(void)

{
  if (lRam0000000113727a48 != -1) {
    func_0x00010002a2fc(0x113727a48,&PTR___NSConcreteGlobalBlock_110a0b0d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113727a50,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 107d5e664; end: 107d5e6cb;  */

void FUN_107d5e664(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4d48;
  _objc_opt_class(PTR_PTR_1126c4d48);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110a0b110);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113727a50;
  uRam0000000113727a50 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d5e6cc; end: 107d5e6d3;  */

void FUN_107d5e6cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c274130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_tooltipsProvider_11267aa70);
  return;
}



/* Entry: 107d5e6d4; end: 107d5e7f3; -[CTPSearchEngineConfigDefault initWithSession:strategy:] */

undefined1 *
FUN_107d5e6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fae88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d7a58;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d7a60;
    _objc_alloc();
    func_0x00010c00a260(0x3fd999999999999a);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d7a68;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d7a70;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d5e7f4; end: 107d5e81b; -[CTPSearchEngineConfigDefault textInputProvider] */

void FUN_107d5e7f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d5e81c; end: 107d5e843; -[CTPSearchEngineConfigDefault session] */

void FUN_107d5e81c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d5e844; end: 107d5e86b; -[CTPSearchEngineConfigDefault inputProvider] */

void FUN_107d5e844(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d5e86c; end: 107d5e893; -[CTPSearchEngineConfigDefault taskScheduler] */

void FUN_107d5e86c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d5e894; end: 107d5e8bb; -[CTPSearchEngineConfigDefault inputProcessor] */

void FUN_107d5e894(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d5e8bc; end: 107d5e8e3; -[CTPSearchEngineConfigDefault strategy] */

void FUN_107d5e8bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d5e8e4; end: 107d5e90b; -[CTPSearchEngineConfigDefault outputProcessor] */

void FUN_107d5e8e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d5e90c; end: 107d5e96b; -[CTPSearchEngineConfigDefault .cxx_destruct] */

void FUN_107d5e90c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d5e96c; end: 107d5e993; -[CTPSearchInputProcessorNoOp processInput:] */

void FUN_107d5e96c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107d5e994; end: 107d5e9f7; -[CTPSearchInputProviderText init] */

undefined1 * FUN_107d5e994(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fae90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107d5e9f8; end: 107d5e9ff; -[CTPSearchInputProviderText updateText:] */

void FUN_107d5e9f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 107d5ea00; end: 107d5ea27; -[CTPSearchInputProviderText getInput] */

void FUN_107d5ea00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d5ea28; end: 107d5ea33; -[CTPSearchInputProviderText .cxx_destruct] */

void FUN_107d5ea28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d5ea34; end: 107d5ea5b; -[CTPSearchOutputProcessorNoOp processOutput:] */

void FUN_107d5ea34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107d5ea5c; end: 107d5ea6b; -[CTPSearchSessionConfig initWithTarget:andOrigin:] */

void FUN_107d5ea5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c011110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithExperimentalSections_wit_1125e1e10,0,param_3,param_4);
  return;
}



/* Entry: 107d5ea6c; end: 107d5eaf3; -[CTPSearchSessionConfig initWithExperimentalSections:withTarget:andOrigin:] */

void FUN_107d5ea6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fae98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *(long *)((long)puVar1 + 8) = param_4;
  *(undefined8 *)((long)puVar1 + 0x10) = param_5;
  *(undefined8 *)((long)puVar1 + 0x18) = 7;
  if (param_4 == 2) {
    uVar2 = 0x27;
  }
  else {
    if (param_4 != 1) goto LAB_107d5ead8;
    uVar2 = 0x87;
  }
  *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
LAB_107d5ead8:
  *(undefined8 *)((long)puVar1 + 0x20) = param_3;
  *(undefined4 *)((long)puVar1 + 0x38) = 0;
  return;
}



/* Entry: 107d5eaf4; end: 107d5eafb; -[CTPSearchSessionConfig updateWithExperimentalSections:] */

void FUN_107d5eaf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107d5eafc; end: 107d5eb3b; -[CTPSearchSessionConfig updateWithBitmojiOptions:] */

void FUN_107d5eafc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x38);
  return;
}



/* Entry: 107d5eb3c; end: 107d5eb7b; -[CTPSearchSessionConfig updateWithCameoOptions:] */

void FUN_107d5eb3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x38);
  return;
}



/* Entry: 107d5eb7c; end: 107d5eb83; -[CTPSearchSessionConfig origin] */

undefined8 FUN_107d5eb7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d5eb84; end: 107d5eb8f; -[CTPSearchSessionConfig filteredSections] */

ulong FUN_107d5eb84(long param_1)

{
  return *(ulong *)(param_1 + 0x20) | *(ulong *)(param_1 + 0x18);
}



/* Entry: 107d5eb90; end: 107d5eb97; -[CTPSearchSessionConfig ctpTarget] */

undefined8 FUN_107d5eb90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d5eb98; end: 107d5eba3; -[CTPSearchSessionConfig languages] */

void FUN_107d5eb98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c106cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLocale_1126af788,PTR_s_preferredLanguages_11261f550);
  return;
}



/* Entry: 107d5eba4; end: 107d5eba7; -[CTPSearchSessionConfig resultTypeOptions] */

void FUN_107d5eba4(void)

{
  return;
}



/* Entry: 107d5eba8; end: 107d5ebe3; -[CTPSearchSessionConfig bitmojiOptions] */

void FUN_107d5eba8(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d5ebe4; end: 107d5ec1f; -[CTPSearchSessionConfig cameoOptions] */

void FUN_107d5ebe4(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d5ec20; end: 107d5ec4f; -[CTPSearchSessionConfig .cxx_destruct] */

void FUN_107d5ec20(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 107d5ec50; end: 107d5ec97; -[CTPSearchTaskSchedulerDebounce initWithDelay:] */

void FUN_107d5ec50(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126faea0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 107d5ec98; end: 107d5eca3; -[CTPSearchTaskSchedulerDebounce scheduleTask:] */

void FUN_107d5ec98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5b070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),param_3,PTR_s_creativeTools_debounce__1125b45c0);
  return;
}



/* Entry: 107d5eca4; end: 107d5eccb; -[CTPSearchTaskSchedulerImmediate scheduleTask:] */

void FUN_107d5eca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107d5eccc; end: 107d5eceb;  */

undefined8 FUN_107d5eccc(ulong param_1)

{
  if (param_1 < 0x12) {
    return *(undefined8 *)(&UNK_10dee6438 + param_1 * 8);
  }
  return 0;
}



/* Entry: 107d5ecec; end: 107d5ee3b;  */

undefined8 FUN_107d5ecec(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  if (3 < param_3 - 3U) {
    uVar1 = param_1;
    func_0x00010c27dd80();
    uVar5 = param_2;
    if (uVar1 < 0xe) {
      if ((1L << (uVar1 & 0x3f) & 0x2f50U) != 0) goto LAB_107d5ed48;
      if (uVar1 == 2) {
        func_0x00010c07ede0(param_2);
        goto LAB_107d5ed4c;
      }
      if (uVar1 == 3) {
        uVar1 = param_1;
        func_0x00010c271a60();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf1c2e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar1 = uVar4;
        func_0x00010bfd61c0();
        if ((uVar1 & 1) == 0) {
          func_0x00010c06d3e0(param_2);
        }
        else {
          uVar5 = 1;
        }
        _objc_release(uVar4);
        goto LAB_107d5ed4c;
      }
    }
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        func_0x00010c071740(param_2);
      }
      else {
        uVar5 = 1;
      }
      goto LAB_107d5ed4c;
    }
  }
LAB_107d5ed48:
  uVar5 = 0;
LAB_107d5ed4c:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 107d5ee3c; end: 107d5effb;  */

uint FUN_107d5ee3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  func_0x00010bf5ae40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd8220();
  if ((int)uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf96ee0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar4 = 0;
    if ((uint)uVar3 < 0xe) {
      uVar4 = 0x203e >> (ulong)((uint)uVar3 & 0x1f);
    }
  }
  _objc_release(param_1);
  return uVar4 & 1;
}



/* Entry: 107d5effc; end: 107d5f16f; -[SCNMessagingMessage storyReplyCtItemInstance] */

void FUN_107d5effc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar10 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x000107d67bb4();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar13;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(param_1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(lVar3);
  puVar11 = auStack_c8;
  lVar2 = lVar3;
  func_0x00010bf52a60();
  uVar12 = 0;
  if (lVar2 != 0) {
    lVar13 = *plStack_100;
    do {
      lVar14 = 0;
      do {
        if (*plStack_100 != lVar13) {
          _objc_enumerationMutation(lVar3);
        }
        uVar12 = *(undefined8 *)(lStack_108 + lVar14 * 8);
        uVar4 = uVar12;
        func_0x00010c08c3a0();
        if ((int)uVar4 == 4) {
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107d5f128;
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      puVar11 = auStack_c8;
      lVar2 = lVar3;
      puVar10 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar12 = 0;
  }
LAB_107d5f128:
  _objc_release(lVar3);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(param_2);
    _objc_retain(puVar10);
    _objc_retain(puVar11);
    lVar2 = param_2;
    func_0x00010bf93e00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    _objc_release(lVar13);
    _objc_release(lVar2);
    puVar5 = (undefined *)0x0;
    if (lVar14 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c2b1f20(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf93e00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar2;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    _objc_release(lVar13);
    _objc_release(lVar2);
    puVar6 = (undefined *)0x0;
    if (lVar14 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c2b1be0(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010c27dd80();
    iVar1 = (int)lVar2;
    if (((iVar1 < 2) && (iVar1 != 0)) && (iVar1 == 1)) {
      func_0x00010bfdc680();
    }
    _objc_release(param_2);
    func_0x00010c2b3b00(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf7ee20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010bf7ee20(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      func_0x00010c0df820(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2af6e0(lVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(lVar2);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar2 = param_2;
      func_0x00010bf7ee20(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a5040();
      func_0x00010c0df820(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bce80(lVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(lVar2);
    }
    lVar2 = param_2;
    func_0x00010bfd67e0();
    if ((int)lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010bf8b160();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar2;
      func_0x00010bf85640();
      _objc_release(lVar2);
      if ((int)lVar13 - 2U < 2) {
        func_0x00010c2b0c20(lVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar2 = param_2;
        func_0x00010bf8b160(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8b420();
        func_0x00010c0df820(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2acb40(lVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(lVar2);
      }
      else if ((int)lVar13 == 1) {
        func_0x00010c2b0c20(lVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
    if (puVar11 == (undefined1 *)0x0) {
      func_0x000100be6fac(0,puVar10,lVar3);
    }
    else {
      puVar8 = puVar11;
      func_0x000107d6b108();
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 != (undefined1 *)0x0) {
        func_0x00010c2b3860(lVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_release(puVar8);
    }
    puVar8 = (undefined1 *)puVar10;
    func_0x00010c0c6260();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf529e0();
    _objc_release(puVar8);
    if (puVar9 != (undefined1 *)0x0) {
      func_0x000100be7240(0,puVar10,lVar3);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 107d5f170; end: 107d5f58b;  */

void FUN_107d5f170(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = (undefined *)0x0;
  if (lVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2b1f20(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = (undefined *)0x0;
  if (lVar4 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2b1be0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  iVar1 = (int)lVar2;
  if (((iVar1 < 2) && (iVar1 != 0)) && (iVar1 == 1)) {
    func_0x00010bfdc680();
  }
  _objc_release(param_2);
  func_0x00010c2b3b00(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf7ee20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010bf7ee20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    func_0x00010c0df820(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2af6e0(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar2);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = param_2;
    func_0x00010bf7ee20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    func_0x00010c0df820(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bce80(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar2);
  }
  lVar2 = param_2;
  func_0x00010bfd67e0();
  if ((int)lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010bf8b160();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf85640();
    _objc_release(lVar2);
    if ((int)lVar3 - 2U < 2) {
      func_0x00010c2b0c20(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar2 = param_2;
      func_0x00010bf8b160(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b420();
      func_0x00010c0df820(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2acb40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(lVar2);
    }
    else if ((int)lVar3 == 1) {
      func_0x00010c2b0c20(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  if (param_4 == 0) {
    func_0x000100be6fac(0,param_3,param_1);
  }
  else {
    lVar2 = param_4;
    func_0x000107d6b108();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c2b3860(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0c6260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x000100be7240(0,param_3,param_1);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d5f58c; end: 107d5f6d3;  */

void FUN_107d5f58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107d5f6d4;
  puStack_90 = &UNK_110a0b130;
  uStack_88 = param_2;
  uStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_6;
  uStack_68 = param_7;
  uStack_60 = param_5;
  uStack_58 = param_8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bd86420(param_1,&puStack_a8);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107d5f6d4; end: 107d5f7fb;  */

void FUN_107d5f6d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0dfd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = 0;
  }
  uVar5 = param_2;
  func_0x000100be5bbc(param_2,uVar2,uVar3,uVar4,*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined1 *)(param_1 + 0x50),0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107d5f7fc; end: 107d5fd4b;  */

void FUN_107d5f7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c245400(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_107d5f58c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d5fd4c; end: 107d6046f;  */

undefined *
FUN_107d5fd4c(undefined *param_1,undefined *param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = param_1;
  func_0x00010c22ac80();
  puVar10 = (undefined *)0x0;
  iVar1 = (int)puVar2;
  puVar4 = param_1;
  puVar2 = param_2;
  if (iVar1 < 0xf) {
    if (iVar1 < 9) {
      if (iVar1 == 7) {
        func_0x00010c290fa0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        func_0x00010c2453e0();
        _objc_retainAutoreleasedReturnValue();
LAB_107d60208:
        puVar3 = param_2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0 && lVar6 == 0) {
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar7 = puVar2;
          puVar8 = puVar3;
          func_0x000100be5bbc(puVar2,puVar3,lVar6,uVar5,param_5,param_6,param_7,param_8,1);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
        }
        _objc_release(uVar5);
        _objc_release(lVar6);
        _objc_release(puVar3);
        goto LAB_107d603e4;
      }
      if (iVar1 != 8) goto LAB_107d603f4;
      func_0x00010c08eec0(param_1);
      _objc_retainAutoreleasedReturnValue();
LAB_107d5ffe4:
      puVar3 = puVar4;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      puVar8 = puVar2;
      func_0x000107d5f8e8(puVar3,puVar2,lVar6,param_5,param_6,param_7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
LAB_107d60060:
      _objc_release(puVar2);
    }
    else {
      if (iVar1 != 9) {
        if (iVar1 != 0xb) goto LAB_107d603f4;
        func_0x00010c0c9d60(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_7);
        _objc_retain(param_6);
        _objc_retain(param_4);
        _objc_retain(param_3);
        _objc_retain(param_2);
        puVar3 = puVar4;
        func_0x00010c245400(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar3;
        puVar8 = param_2;
        FUN_107d5f58c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_7);
        _objc_release(param_6);
        _objc_release(param_4);
        _objc_release(param_3);
        goto LAB_107d60060;
      }
      func_0x00010c08f600(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      _objc_retain(param_7);
      puVar2 = PTR_PTR_1126d7a78;
      _objc_retain(lVar6);
      _objc_retain(puVar3);
      _objc_retain(puVar4);
      _objc_opt_new();
      func_0x00010c2b3e40();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b3e80(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b3e60(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar10 = puVar4;
      func_0x00010c0c3fe0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar8 = puVar10;
      FUN_107d5f170(puVar2,puVar10,puVar3,lVar6);
      _objc_release(lVar6);
      _objc_release(puVar3);
      _objc_release(puVar10);
      puVar7 = puVar2;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar2);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(lVar6);
    }
    _objc_release(puVar3);
  }
  else {
    if (iVar1 < 0x18) {
      if (iVar1 == 0xf) {
        func_0x00010c08eb60(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107d5ffe4;
      }
      if (iVar1 != 0x16) goto LAB_107d603f4;
      puVar2 = param_1;
      func_0x00010bf1e300();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010c110360();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar10;
      func_0x00010bfd8ea0();
      _objc_release(puVar10);
      _objc_release(puVar2);
      if ((int)puVar3 == 0) {
LAB_107d60460:
        puVar10 = (undefined *)0x0;
        goto LAB_107d603f4;
      }
      puVar2 = param_2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        lVar6 = param_3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar6 == 0) goto LAB_107d60460;
      }
      else {
        _objc_release();
      }
      func_0x00010bf1e300();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010c110360();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 == 0x18) {
        func_0x00010c14bb40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        func_0x00010c25b320();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107d60208;
      }
      if (iVar1 != 0x1b) goto LAB_107d603f4;
      puVar2 = param_1;
      func_0x00010c108ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010c25a400();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar10;
      func_0x00010bfd8ea0();
      _objc_release(puVar10);
      _objc_release(puVar2);
      if ((int)puVar3 == 0) goto LAB_107d60460;
      puVar2 = param_2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        lVar6 = param_3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar6 == 0) goto LAB_107d60460;
      }
      else {
        _objc_release();
      }
      func_0x00010c108ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010c25a400();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = puVar2;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    puVar8 = puVar7;
    func_0x000107d5f8e8(puVar3,puVar7,lVar6,param_5,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(puVar7);
    _objc_release(puVar3);
LAB_107d603e4:
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
LAB_107d603f4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  FUN_107d6b14c(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c0c6f00();
  _objc_release(puVar8);
  return (undefined *)(ulong)(puVar2 == (undefined *)0x0);
}



/* Entry: 107d60470; end: 107d604b3;  */

bool FUN_107d60470(undefined8 param_1,long param_2)

{
  long lVar1;
  
  FUN_107d6b14c(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0c6f00();
  _objc_release(param_2);
  return lVar1 == 0;
}



/* Entry: 107d604b4; end: 107d605f7;  */

void FUN_107d604b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = param_1;
  func_0x00010bf4ce20();
  if ((int)lVar3 != 7) {
    lVar3 = param_1;
    func_0x00010bf676a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bfdcce0();
    _objc_release(lVar3);
    if ((int)lVar1 == 0) {
      lVar3 = 0;
      goto LAB_107d605b0;
    }
  }
  lVar1 = param_1;
  func_0x000107d67bb4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000100be58bc(param_1);
    lVar3 = lVar1;
    func_0x000100be5bbc(lVar1,param_2,0,param_3,lVar2,param_4,param_5,0,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
LAB_107d605b0:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107d605f8; end: 107d6072f;  */

ulong FUN_107d605f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar6 = 0;
  if (lVar2 != 0) {
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar6 = *(ulong *)(lVar7 * 8);
        uVar3 = uVar6;
        func_0x00010c0720c0();
        if ((int)uVar3 == 0) {
          func_0x00010bf51e00(uVar6);
          goto LAB_107d606dc;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_2;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar6 = 0;
  }
LAB_107d606dc:
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    if (param_1 == 0xb) {
      uVar4 = 1;
    }
    else {
      func_0x0001085439dc();
      uVar4 = 0x4b4a244 >> (ulong)((int)param_1 + 1U & 0x1f);
    }
    return (ulong)(uVar4 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return uVar6;
}



/* Entry: 107d60730; end: 107d60797;  */

uint FUN_107d60730(long param_1)

{
  uint uVar1;
  
  if (param_1 == 0xb) {
    uVar1 = 1;
  }
  else {
    func_0x0001085439dc();
    uVar1 = 0x4b4a244 >> (ulong)((int)param_1 + 1U & 0x1f);
  }
  return uVar1 & 1;
}



/* Entry: 107d60798; end: 107d609e3;  */

undefined ** FUN_107d60798(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c22ac80();
  ppuVar3 = (undefined **)0x0;
  switch((int)uVar1) {
  case 1:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb3d8;
    break;
  case 2:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb3f8;
    break;
  case 3:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb418;
    break;
  case 4:
  case 8:
  case 0x1b:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb4f8;
    break;
  case 5:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e67b78;
    break;
  case 6:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb438;
    break;
  case 7:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e15e38;
    break;
  case 9:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb458;
    break;
  case 10:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e816f8;
    break;
  case 0xb:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb478;
    break;
  case 0xc:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e81778;
    break;
  case 0xd:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb498;
    break;
  case 0xe:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb4b8;
    break;
  case 0xf:
    ppuVar3 = &PTR____CFConstantStringClassReference_110dfc938;
    break;
  case 0x10:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb4d8;
    break;
  case 0x11:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e9c3b8;
    break;
  case 0x12:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e9c258;
    break;
  case 0x13:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e9c3d8;
    break;
  case 0x14:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e9c438;
    break;
  case 0x15:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e35818;
    break;
  case 0x16:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e9c418;
    break;
  case 0x17:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb518;
    break;
  case 0x18:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e52f18;
    break;
  case 0x19:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e81878;
    break;
  case 0x1a:
    uVar1 = param_1;
    func_0x00010bef4f80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef4fc0();
    _objc_release(uVar1);
    if ((uint)uVar2 < 6) {
      ppuVar3 = (undefined **)(&PTR_PTR_110a0b1a0)[uVar2 & 0xffffffff];
      break;
    }
  case 0x1c:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e9c4b8;
    break;
  case 0x1d:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb5b8;
    break;
  case 0x1e:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e9c198;
    break;
  case 0x1f:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e9c538;
    break;
  case 0x20:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb5d8;
    break;
  case 0x21:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e9c558;
    break;
  case 0x23:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb5f8;
    break;
  case 0x24:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb618;
    break;
  case 0x25:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e9c598;
    break;
  case 0x26:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb638;
    break;
  case 0x27:
    ppuVar3 = &PTR____CFConstantStringClassReference_110ebb658;
    break;
  case 0x28:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e818f8;
  }
  _objc_release(param_1);
  return ppuVar3;
}



/* Entry: 107d609e4; end: 107d60a87;  */

undefined8 FUN_107d609e4(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010bf28320();
  uVar4 = 0x18;
  uVar1 = (uint)uVar3;
  if ((int)uVar1 < 3) {
    if ((1 < uVar1) && (uVar1 != 0xfbadbeef)) goto LAB_107d60a3c;
  }
  else {
    if (uVar1 != 4) {
      uVar4 = 0x18;
      if (uVar1 == 3) {
        uVar4 = 0x17;
      }
      goto LAB_107d60a3c;
    }
    uVar4 = param_1;
    func_0x00010bf283e0();
    iVar2 = (int)uVar4;
    if (iVar2 != -0x4524111) {
      if (iVar2 == 0) {
        uVar4 = 5;
        goto LAB_107d60a3c;
      }
      if (iVar2 == 1) {
        uVar4 = 6;
        goto LAB_107d60a3c;
      }
    }
  }
  uVar4 = 0;
LAB_107d60a3c:
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107d60a88; end: 107d60b57;  */

ulong FUN_107d60a88(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c2533e0();
  uVar2 = 0xf;
  switch(uVar1 & 0xffffffff) {
  case 0:
  case 8:
  case 9:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 3;
    break;
  case 2:
    uVar1 = param_1;
    func_0x00010bf288c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_107d609e4();
    _objc_release(uVar1);
    break;
  case 5:
    uVar2 = 0x16;
    break;
  case 7:
    uVar2 = 0x15;
    break;
  case 0xf:
    uVar2 = 0x20;
    break;
  case 0x10:
    uVar2 = 0x1f;
    break;
  case 0x12:
    uVar2 = 0x21;
    break;
  case 0x1a:
    uVar2 = 0x29;
    break;
  case 0x1b:
    uVar2 = 0x2a;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107d60b58; end: 107d612e3;  */

void FUN_107d60b58(undefined **param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  _objc_retain();
  ppuVar3 = param_1;
  func_0x00010bf4ce20();
  ppuVar6 = (undefined **)0x0;
  ppuVar4 = param_1;
  switch((int)ppuVar3) {
  case 2:
    ppuVar6 = &PTR____CFConstantStringClassReference_110dbf1d8;
    break;
  case 3:
code_r0x000107d60e60:
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010c245420();
    ppuVar6 = &PTR____CFConstantStringClassReference_110e9c138;
    if (ppuVar3 < (undefined **)0x2) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebba98;
    }
    goto code_r0x000107d60e90;
  case 4:
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar4;
    func_0x00010c2544c0();
    uVar1 = (int)ppuVar6 - 1;
    if (uVar1 < 3) {
      ppuVar6 = (undefined **)(&PTR_PTR_110a0b1d0)[uVar1];
    }
    else {
      ppuVar6 = (undefined **)0x0;
    }
    goto code_r0x000107d61284;
  case 5:
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar4;
    FUN_107d60798();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000107d61284;
  case 6:
    func_0x00010c0dba60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010c0dbae0();
    ppuVar6 = &PTR____CFConstantStringClassReference_110ebba58;
    if ((int)ppuVar3 != 2) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110e9c118;
    }
code_r0x000107d60e90:
    _objc_retain(ppuVar6);
    goto code_r0x000107d61284;
  case 7:
    ppuVar6 = param_1;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar6;
    func_0x00010c131be0();
    _objc_release(ppuVar6);
    iVar2 = (int)ppuVar3;
    if (iVar2 < 0xe) {
      if (iVar2 == 0xb) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110e12f98;
        break;
      }
      if (iVar2 == 0xc) goto code_r0x000107d60e60;
      ppuVar6 = (undefined **)0x0;
      if (iVar2 != 0xd) break;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar4;
      func_0x00010c132140();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar3;
      func_0x00010c2544c0();
      uVar1 = (int)ppuVar6 - 1;
      if (uVar1 < 3) {
        ppuVar6 = (undefined **)(&PTR_PTR_110a0b1d0)[uVar1];
      }
      else {
        ppuVar6 = (undefined **)0x0;
      }
    }
    else {
      if (0x10 < iVar2) {
        ppuVar3 = (undefined **)0x0;
        if (iVar2 == 0x17) {
          ppuVar3 = &PTR____CFConstantStringClassReference_110ebbaf8;
        }
        ppuVar6 = &PTR____CFConstantStringClassReference_110dbddd8;
        if (iVar2 != 0x11) {
          ppuVar6 = ppuVar3;
        }
        break;
      }
      if (iVar2 == 0xe) {
        func_0x00010c242c40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar4;
        func_0x00010c1320c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar3;
        FUN_107d60798();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar6 = (undefined **)0x0;
        if (iVar2 != 0xf) break;
        func_0x00010c242c40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar4;
        func_0x00010c131e00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar3;
        func_0x00010c0dbae0();
        ppuVar6 = &PTR____CFConstantStringClassReference_110ebba58;
        if ((int)ppuVar5 != 2) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110e9c118;
        }
        _objc_retain(ppuVar6);
      }
    }
    goto code_r0x000107d61280;
  case 8:
    ppuVar3 = param_1;
    func_0x00010c253320();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuVar4 = ppuVar3;
    func_0x00010c2533e0();
    ppuVar6 = (undefined **)0x0;
    ppuVar5 = ppuVar3;
    switch((int)ppuVar4) {
    case 1:
      ppuVar6 = &PTR____CFConstantStringClassReference_110e11c38;
      break;
    case 2:
      func_0x00010bf288c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      ppuVar6 = ppuVar5;
      func_0x00010bf28320();
      iVar2 = (int)ppuVar6;
      if (iVar2 < 2) {
        if (iVar2 == 0) {
code_r0x000107d611d4:
          ppuVar6 = &PTR____CFConstantStringClassReference_110ebb678;
        }
        else {
          ppuVar6 = &PTR____CFConstantStringClassReference_110ebb698;
          if (iVar2 != 1) {
            ppuVar6 = (undefined **)0x0;
          }
        }
      }
      else if (iVar2 == 4) {
        ppuVar6 = ppuVar5;
        func_0x00010bf283e0();
        iVar2 = (int)ppuVar6;
        if (iVar2 == -0x4524111) {
          ppuVar6 = (undefined **)0x0;
        }
        else if (iVar2 == 1) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110e11c78;
        }
        else {
          if (iVar2 != 0) goto code_r0x000107d611d4;
          ppuVar6 = &PTR____CFConstantStringClassReference_110e11c98;
        }
      }
      else {
        ppuVar4 = (undefined **)0x0;
        if (iVar2 == 2) {
          ppuVar4 = &PTR____CFConstantStringClassReference_110e9c178;
        }
        ppuVar6 = &PTR____CFConstantStringClassReference_110e9c158;
        if (iVar2 != 3) {
          ppuVar6 = ppuVar4;
        }
      }
      _objc_release(ppuVar5);
      _objc_retain(ppuVar6);
      goto code_r0x000107d61274;
    case 3:
    case 4:
    case 6:
    case 10:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb7b8;
      break;
    case 5:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb778;
      break;
    case 7:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb798;
      break;
    case 8:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb818;
      break;
    case 9:
      ppuVar6 = &PTR____CFConstantStringClassReference_110e9c1d8;
      break;
    case 0xb:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb838;
      break;
    case 0xc:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb858;
      break;
    case 0xd:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb878;
      break;
    case 0xe:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb898;
      break;
    case 0xf:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb8b8;
      break;
    case 0x10:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb8d8;
      break;
    case 0x11:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb8f8;
      break;
    case 0x12:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb918;
      break;
    case 0x13:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb938;
      break;
    case 0x14:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb958;
      break;
    case 0x15:
      ppuVar6 = ppuVar3;
      func_0x00010c25be40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar6;
      func_0x00010c25c360();
      _objc_release(ppuVar6);
      ppuVar4 = &PTR____CFConstantStringClassReference_110ebb978;
      if ((int)ppuVar5 != 1) {
        ppuVar4 = (undefined **)0x0;
      }
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb998;
      if ((int)ppuVar5 != 2) {
        ppuVar6 = ppuVar4;
      }
      break;
    case 0x16:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb9b8;
      break;
    case 0x17:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb9f8;
      break;
    case 0x18:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb7d8;
      break;
    case 0x19:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebba18;
      break;
    case 0x1a:
      ppuVar6 = &PTR____CFConstantStringClassReference_110e9c4d8;
      break;
    case 0x1b:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb7f8;
      break;
    case 0x1c:
      func_0x00010bfb8660();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      ppuVar6 = ppuVar5;
      func_0x00010beff780();
      iVar2 = (int)ppuVar6;
      if (iVar2 < 1) {
        if (iVar2 == -0x4524111) {
          ppuVar6 = (undefined **)0x0;
        }
        else {
          ppuVar6 = (undefined **)0x0;
          if (iVar2 != 0) goto code_r0x000107d6114c;
        }
      }
      else {
code_r0x000107d6114c:
        ppuVar4 = ppuVar5;
        func_0x00010beff6c0();
        ppuVar6 = (undefined **)0x0;
        iVar2 = (int)ppuVar4;
        if (((2 < iVar2) || (0 < iVar2)) || ((iVar2 != -0x4524111 && (iVar2 != 0)))) {
          ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110db9f38);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      _objc_release(ppuVar5);
code_r0x000107d61274:
      _objc_release(ppuVar5);
      break;
    case 0x1e:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebb9d8;
      break;
    case 0x1f:
      ppuVar6 = &PTR____CFConstantStringClassReference_110ebba38;
    }
    ppuVar4 = ppuVar3;
code_r0x000107d61280:
    _objc_release(ppuVar3);
code_r0x000107d61284:
    _objc_release(ppuVar4);
    break;
  case 9:
    ppuVar6 = &PTR____CFConstantStringClassReference_110dad538;
    break;
  case 0xb:
    ppuVar6 = &PTR____CFConstantStringClassReference_110dbddd8;
    break;
  case 0xc:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e9c358;
    break;
  case 0xd:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e9c1b8;
    break;
  case 0xe:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e11cd8;
    break;
  case 0xf:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e11cf8;
    break;
  case 0x10:
    ppuVar6 = &PTR____CFConstantStringClassReference_110ebbab8;
    break;
  case 0x11:
    ppuVar6 = &PTR____CFConstantStringClassReference_110ebbb18;
    break;
  case 0x12:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e11d78;
    break;
  case 0x13:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e11d98;
    break;
  case 0x14:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e11dd8;
    break;
  case 0x15:
    ppuVar6 = &PTR____CFConstantStringClassReference_110ebbad8;
    break;
  case 0x16:
    ppuVar6 = &PTR____CFConstantStringClassReference_110ebbb38;
    break;
  case 0x17:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e11e78;
    break;
  case 0x18:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e11e98;
    break;
  case 0x19:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e11eb8;
    break;
  case 0x1a:
    ppuVar6 = &PTR____CFConstantStringClassReference_110e11ed8;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd9778;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar3 = ppuVar6;
  }
  _objc_retain(ppuVar3);
  _objc_release(ppuVar6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}


