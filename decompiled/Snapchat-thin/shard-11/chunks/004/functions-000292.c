/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108598e0c; end: 108598e37; -[POPAnimationTracer .cxx_destruct] */

void FUN_108598e0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108598e38; end: 108598e8b; +[POPAnimator sharedAnimator] */

void FUN_108598e38(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372c440 != -1) {
    func_0x000107c27d9c(0x11372c440,&PTR___NSConcreteGlobalBlock_110a57a28);
  }
  uVar1 = uRam000000011372c438;
  _objc_retain(uRam000000011372c438);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108598e8c; end: 108598eb7;  */

void FUN_108598e8c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126da258;
  _objc_alloc_init();
  uVar1 = puRam000000011372c438;
  puRam000000011372c438 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108598eb8; end: 108599027; -[POPAnimator init] */

undefined1 * FUN_108598eb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_a0;
  puStack_98 = PTR_PTR_1126fce08;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(&uStack_a0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x00010bf85b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1d9980(*(undefined8 *)((long)puVar1 + 8));
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc2c0(uVar3);
    _objc_release(puVar2);
    uStack_60 = *(undefined8 *)PTR__kCFTypeDictionaryKeyCallBacks_11034ac18;
    uStack_48 = *(undefined8 *)(PTR__kCFTypeDictionaryKeyCallBacks_11034ac18 + 0x18);
    uStack_58 = 0;
    uStack_50 = 0;
    pcStack_40 = FUN_108597a20;
    uStack_38 = 0x108597a2c;
    uStack_88 = *(undefined8 *)(PTR__kCFTypeDictionaryValueCallBacks_11034ac20 + 8);
    uStack_90 = *(undefined8 *)PTR__kCFTypeDictionaryValueCallBacks_11034ac20;
    uStack_78 = *(undefined8 *)(PTR__kCFTypeDictionaryValueCallBacks_11034ac20 + 0x18);
    uStack_80 = *(undefined8 *)(PTR__kCFTypeDictionaryValueCallBacks_11034ac20 + 0x10);
    uStack_70 = *(undefined8 *)(PTR__kCFTypeDictionaryValueCallBacks_11034ac20 + 0x20);
    uVar3 = 0;
    _CFDictionaryCreateMutable(0,5,&uStack_60,&uStack_90);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    *(undefined4 *)((long)puVar1 + 0x78) = 0;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 108599028; end: 1085990a3; -[POPAnimator dealloc] */

void FUN_108599028(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 8));
  func_0x00010bde0ae0(param_1);
  puStack_28 = PTR_PTR_1126fce08;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085990a4; end: 108599137; -[POPAnimator _processPendingList] */

void FUN_1085990a4(double param_1,long param_2)

{
  double dVar1;
  undefined1 auStack_48 [24];
  
  func_0x00010bdf7000();
  dVar1 = *(double *)(param_2 + 0x70);
  if (*(double *)(param_2 + 0x70) == 0.0) {
    dVar1 = param_1;
  }
  FUN_10859b584(auStack_48,param_2 + 0x38);
  func_0x00010be8e620(dVar1,param_2);
  FUN_10859ae44(auStack_48);
  _OSSpinLockLock(param_2 + 0x78);
  FUN_10859ae44(param_2 + 0x38);
  func_0x00010bde0ae0(param_2);
  _OSSpinLockUnlock(param_2 + 0x78);
  return;
}



/* Entry: 108599138; end: 10859917f; -[POPAnimator _clearPendingListObserver] */

void FUN_108599138(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    _CFRunLoopGetMain();
    _CFRunLoopRemoveObserver();
    _CFRelease(*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 108599180; end: 108599283; -[POPAnimator _scheduleProcessPendingList] */

void FUN_108599180(long param_1)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _OSSpinLockLock(param_1 + 0x78);
  if (*(long *)(param_1 + 0x50) == 0) {
    _objc_initWeak(auStack_38,param_1);
    lVar1 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108599284;
    puStack_48 = &UNK_110a57a48;
    _objc_copyWeak(auStack_40,auStack_38);
    _CFRunLoopObserverCreateWithHandler(lVar1,0xa0,0,1999999,&puStack_60);
    *(long *)(param_1 + 0x50) = lVar1;
    if (lVar1 != 0) {
      _CFRunLoopGetMain();
      _CFRunLoopAddObserver();
    }
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _OSSpinLockUnlock(param_1 + 0x78);
  return;
}



/* Entry: 108599284; end: 1085992c3;  */

void FUN_108599284(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085992c4; end: 108599643; -[POPAnimator _renderTime:items:] */

void FUN_1085992c4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_3,1);
  lVar6 = param_2 + 0x80;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bf042c0();
  _OSSpinLockLock(param_2 + 0x78);
  if (*(long *)(param_4 + 0x10) == 0) {
    _OSSpinLockUnlock(param_2 + 0x78);
  }
  else {
    lVar12 = *(long *)(param_4 + 8);
    puStack_f8 = (undefined8 *)0x0;
    lStack_f0 = 0;
    puStack_100 = (undefined8 *)0x0;
    if (lVar12 != param_4) {
      puVar10 = (undefined8 *)0x0;
      uVar8 = 0xffffffffffffffff;
      lVar9 = lVar12;
      do {
        lVar9 = *(long *)(lVar9 + 8);
        uVar8 = uVar8 + 1;
        puVar10 = puVar10 + 2;
      } while (lVar9 != param_4);
      if (0xffffffffffffffe < uVar8) goto LAB_1085995d4;
      puVar7 = puVar10;
      __Znwm();
      lStack_f0 = (long)puVar7 + (long)puVar10;
      puStack_f8 = puVar7;
      do {
        lVar9 = *(long *)(lVar12 + 0x18);
        uVar14 = *(undefined8 *)(lVar12 + 0x10);
        puStack_f8[1] = *(undefined8 *)(lVar12 + 0x18);
        *puStack_f8 = uVar14;
        if (lVar9 != 0) {
          plVar1 = (long *)(lVar9 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar12 = *(long *)(lVar12 + 8);
        puStack_f8 = puStack_f8 + 2;
        puStack_100 = puVar7;
      } while (lVar12 != param_4);
    }
    puVar7 = puStack_f8;
    puVar10 = puStack_100;
    _OSSpinLockUnlock(param_2 + 0x78);
    for (; puVar10 != puVar7; puVar10 = puVar10 + 2) {
      uStack_120 = *puVar10;
      plStack_108 = (long *)puVar10[1];
      if (plStack_108 == (long *)0x0) {
        plStack_118 = (long *)0x0;
      }
      else {
        plVar1 = plStack_108 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          plStack_118 = plStack_108;
        } while (cVar3 != '\0');
      }
      uStack_110 = uStack_120;
      func_0x00010be8e600(param_1,param_2,param_3,&uStack_120);
      plVar1 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar2 = plStack_118 + 1;
        do {
          lVar12 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      plVar1 = plStack_108;
      if (plStack_108 != (long *)0x0) {
        plVar2 = plStack_108 + 1;
        do {
          lVar12 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
    FUN_10859aec4(&puStack_100);
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  lVar12 = param_2;
  func_0x00010c0e13e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar12;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar11 = *plStack_150;
    do {
      lVar13 = 0;
      do {
        if (*plStack_150 != lVar11) {
          _objc_enumerationMutation(lVar12);
        }
        func_0x00010bf04200(*(undefined8 *)(lStack_158 + lVar13 * 8),param_3,param_2);
        lVar13 = lVar13 + 1;
      } while (lVar9 != lVar13);
      lVar9 = lVar12;
      func_0x00010bf52a60(lVar12,param_3,&uStack_160,auStack_e8,0x10);
    } while (lVar9 != 0);
  }
  _objc_release(lVar12);
  _OSSpinLockLock(param_2 + 0x78);
  FUN_108599644(param_2);
  _OSSpinLockUnlock(param_2 + 0x78);
  func_0x00010bf04200(lVar6,param_3,param_2);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_1085995d4:
  FUN_10859aeb0();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1085995dc);
  (*pcVar5)();
}



/* Entry: 108599644; end: 1085996b7;  */

void FUN_108599644(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  _objc_retain();
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if ((lVar2 == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (uint)*(byte *)(param_1 + 0x7c);
  }
  uVar1 = (uint)*(undefined8 *)(param_1 + 8);
  func_0x00010c079ba0();
  if ((uVar3 & 1) != uVar1) {
    func_0x00010c1d9980(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085996b8; end: 108599c57; -[POPAnimator _renderTime:item:] */

void FUN_1085996b8(double param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lStack_70;
  long *plStack_68;
  
  lVar7 = *param_4;
  _objc_loadWeakRetained();
  uVar13 = *(ulong *)(*param_4 + 0x10);
  _objc_retain(uVar13);
  if (lVar7 == 0) {
    lVar9 = *param_4;
    plVar8 = (long *)param_4[1];
    if (plVar8 != (long *)0x0) {
      plVar14 = plVar8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = *plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_108599c58(param_2,lVar9,1,0);
    if (plVar8 == (long *)0x0) goto LAB_108599b70;
    plVar14 = plVar8 + 1;
    do {
      lVar9 = *plVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    plVar14 = *(long **)(uVar13 + 8);
    FUN_108599d50(param_1,*(undefined8 *)(param_2 + 0x68),plVar14,lVar7);
    if ((*(ushort *)(plVar14 + 0x11) & 3) != 1) goto LAB_108599b70;
    _objc_retain(lVar7);
    _objc_retain(lVar7);
    uVar2 = *(uint *)(plVar14 + 2);
    if (uVar2 < 2) {
      plVar8 = plVar14;
      (**(code **)(*plVar14 + 0x28))(param_1,param_1 - (double)plVar14[7],plVar14,lVar7);
      if (((ulong)plVar8 & 1) == 0) goto LAB_1085998a0;
LAB_108599810:
      (**(code **)(*plVar14 + 0x30))(plVar14);
LAB_108599840:
      (**(code **)(*plVar14 + 0x38))(plVar14);
      plVar14[7] = (long)param_1;
      _objc_release(lVar7);
      plVar8 = plVar14;
      ___dynamic_cast(plVar14,&PTR_DAT_110a578d0,&PTR_DAT_110a57af0,0);
      if (plVar8 != (long *)0x0) {
        FUN_10859af20(lVar7,plVar8,0);
      }
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
    else {
      if (uVar2 == 2) {
        plVar8 = plVar14;
        (**(code **)(*plVar14 + 0x28))(param_1,plVar14,lVar7);
        if (((ulong)plVar8 & 1) != 0) goto LAB_108599840;
      }
      else if (uVar2 == 3) {
        iVar6 = (int)plVar14[1];
        func_0x00010bdc9760(param_1);
        uVar3 = 0;
        if (iVar6 == 0) {
          uVar3 = 0x4000;
        }
        *(ushort *)(plVar14 + 0x11) = *(ushort *)(plVar14 + 0x11) & 0xbfff | uVar3;
        goto LAB_108599810;
      }
LAB_1085998a0:
      _objc_release(lVar7);
    }
    _objc_release(lVar7);
    plVar8 = plVar14;
    (**(code **)(*plVar14 + 0x18))();
    if ((int)plVar8 == 0) goto LAB_108599b70;
    _objc_retain(lVar7);
    plVar8 = plVar14;
    ___dynamic_cast(plVar14,&PTR_DAT_110a578d0,&PTR_DAT_110a57af0,0);
    if (plVar8 != (long *)0x0) {
      plVar8[0xf] = 0x3ff0000000000000;
      lVar9 = plVar8[0x14];
      func_0x0001085a2564(lVar9,0);
      FUN_108598194(&lStack_70,lVar9);
      if ((lStack_70 != 0) && (plVar8[0x17] != 0)) {
        func_0x0001085a24fc();
      }
      func_0x00010859b42c(plVar8 + 0x19,&lStack_70);
      FUN_10859b500(plVar8,plVar8[0x26]);
      (**(code **)(*plVar8 + 0x38))(plVar8);
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          lVar9 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
        }
      }
      FUN_10859af20(lVar7,plVar8,1);
    }
    (**(code **)(*plVar14 + 0x40))(plVar14);
    _objc_release(lVar7);
    lVar9 = plVar14[0x10];
    plVar14[0x10] = lVar9 + -1;
    uVar3 = *(ushort *)(plVar14 + 0x11);
    if (((uVar3 >> 0xd & 1) != 0) || (1 < lVar9)) {
      puVar10 = PTR_PTR_1126da270;
      _objc_opt_class(PTR_PTR_1126da270);
      uVar11 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar10);
      if ((uVar11 & 1) != 0) {
        _objc_retain(uVar13);
        uVar11 = uVar13;
        func_0x00010bfbb0a0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar13;
        func_0x00010c272460(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a1180(uVar13);
        _objc_release(uVar12);
        uVar12 = uVar13;
        if ((*(ushort *)(plVar14 + 0x11) >> 0xc & 1) == 0) {
          if ((int)plVar14[2] == 1) {
            _objc_retain(uVar13);
            func_0x00010c0edb20(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c220640(uVar13);
LAB_108599af8:
            _objc_release(uVar12);
            _objc_release(uVar13);
          }
          else {
            func_0x00010c1a1180(uVar13);
          }
        }
        else {
          if ((*(ushort *)(plVar14 + 0x11) >> 10 & 1) != 0) {
            func_0x00010bf121c0(plVar14[0xe]);
          }
          if ((int)plVar14[2] == 1) {
            _objc_retain(uVar13);
            func_0x00010c140240(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c220640(uVar13);
            goto LAB_108599af8;
          }
          func_0x00010c216920(uVar13);
        }
        _objc_release(uVar11);
        _objc_release(uVar13);
      }
      FUN_108599e40(plVar14,0,0);
      (**(code **)(*plVar14 + 0x48))(plVar14,1);
      FUN_108599d50(param_1,*(undefined8 *)(param_2 + 0x68),plVar14,lVar7);
      goto LAB_108599b70;
    }
    lVar9 = *param_4;
    plVar8 = (long *)param_4[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar3 = *(ushort *)(plVar14 + 0x11);
    }
    FUN_108599c58(param_2,lVar9,uVar3 >> 2 & 1,1);
    if (plVar8 == (long *)0x0) goto LAB_108599b70;
    plVar14 = plVar8 + 1;
    do {
      lVar9 = *plVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
LAB_108599b70:
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 108599c58; end: 108599d4f;  */

void FUN_108599c58(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  _objc_retain();
  if ((int)param_3 != 0) {
    FUN_10859a964(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 8),1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  FUN_108599e40(*(undefined8 *)(*(long *)(param_2 + 0x10) + 8),param_3,param_4);
  if ((int)param_3 != 0) {
    _OSSpinLockLock(param_1 + 0x78);
    plVar1 = (long *)(param_1 + 0x10);
    plVar3 = *(long **)(param_1 + 0x18);
    if (plVar3 == plVar1) {
LAB_108599ce8:
      if (plVar3 != plVar1) {
        lVar2 = *plVar3;
        plVar1 = (long *)plVar3[1];
        *(long **)(lVar2 + 8) = plVar1;
        *plVar1 = lVar2;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
        FUN_10859b5ec(plVar3 + 2);
        __ZdlPv(plVar3);
      }
    }
    else {
      do {
        if (plVar3[2] == param_2) goto LAB_108599ce8;
        plVar3 = (long *)plVar3[1];
      } while (plVar3 != plVar1);
    }
    _OSSpinLockUnlock(param_1 + 0x78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108599d50; end: 108599e3f;  */

void FUN_108599d50(double param_1,double param_2,long *param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  
  _objc_retain(param_4);
  if (((double)param_3[6] != 0.0) || (param_1 < param_2 + (double)param_3[5])) {
    iVar2 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_3 + 0x11);
    *(ushort *)(param_3 + 0x11) = uVar1 | 1;
    if ((uVar1 >> 1 & 1) != 0) {
      *(ushort *)(param_3 + 0x11) = uVar1 & 0xfffd | 1;
      (**(code **)(*param_3 + 0x48))(param_3,0);
    }
    param_3[6] = (long)param_1;
    param_3[7] = (long)param_1;
    iVar2 = 1;
  }
  if ((*(ushort *)(param_3 + 0x11) & 3) == 1) {
    (**(code **)(*param_3 + 0x20))(param_3,iVar2,param_4);
  }
  if (iVar2 != 0) {
    (**(code **)(*param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108599e40; end: 108599fd7;  */

void FUN_108599e40(long *param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x11);
  if ((*(ushort *)(param_1 + 0x11) & 1) == 0) {
    if ((double)param_1[6] != 0.0) goto LAB_108599f5c;
    (**(code **)(*param_1 + 0x10))(param_1);
    param_3 = 0;
    if ((*(ushort *)(param_1 + 0x11) >> 4 & 1) != 0) goto LAB_108599ec8;
  }
  else {
    if ((int)param_3 != 0) {
      (**(code **)(*param_1 + 0x38))(param_1);
      uVar3 = (uint)*(ushort *)(param_1 + 0x11);
    }
    if (param_2 != 0) {
      *(ushort *)(param_1 + 0x11) = (ushort)uVar3 & 0xfffe;
    }
    if ((uVar3 >> 4 & 1) != 0) {
LAB_108599ec8:
      FUN_108597498(&uStack_31);
      plVar1 = param_1 + 8;
      _objc_loadWeakRetained(plVar1);
      func_0x00010c103ae0();
      _objc_release(plVar1);
      func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
    }
  }
  lVar2 = param_1[0xb];
  _objc_retainBlock();
  if (lVar2 != 0) {
    FUN_108597498(&uStack_32);
    (**(code **)(lVar2 + 0x10))(lVar2,param_1[1],param_3);
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  if ((*(ushort *)(param_1 + 0x11) >> 10 & 1) != 0) {
    func_0x00010bf7c060(param_1[0xe]);
  }
  _objc_release(lVar2);
  uVar3 = (uint)*(ushort *)(param_1 + 0x11);
LAB_108599f5c:
  if ((uVar3 >> 1 & 1) == 0) {
    *(ushort *)(param_1 + 0x11) = (ushort)uVar3 | 2;
  }
  return;
}



/* Entry: 108599fd8; end: 10859a03b; -[POPAnimator observers] */

void FUN_108599fd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  _OSSpinLockLock(param_1 + 0x78);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf51e00(uVar2);
  }
  _OSSpinLockUnlock(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10859a03c; end: 10859a353; -[POPAnimator addAnimation:forObject:key:] */

void FUN_10859a03c(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined *param_5)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 == (undefined *)0x0) || (param_4 == 0)) goto LAB_10859a2a0;
  if (param_5 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    param_5 = puVar3;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _OSSpinLockLock(param_1 + 0x78);
  puVar3 = *(undefined **)(param_1 + 0x28);
  _CFDictionaryGetValue(puVar3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    _CFDictionarySetValue(*(undefined8 *)(param_1 + 0x28),param_4);
LAB_10859a15c:
    func_0x00010c1d0640(puVar3);
    lVar5 = 0x28;
    __Znwm();
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_initWeak(lVar5,0);
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    _objc_storeWeak(lVar5,param_4);
    puVar4 = param_5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(lVar5 + 8);
    *(undefined **)(lVar5 + 8) = puVar4;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(lVar5 + 0x10);
    *(undefined **)(lVar5 + 0x10) = param_3;
    _objc_release(uVar7);
    *(undefined8 *)(lVar5 + 0x18) = 1;
    *(long *)(lVar5 + 0x20) = param_4;
    _objc_release(param_5);
    _objc_release(param_4);
    plVar6 = (long *)0x20;
    __Znwm();
    plVar8 = plVar6 + 1;
    *plVar8 = 0;
    *plVar6 = (long)&PTR_FUN_110a57a88;
    plVar6[2] = 0;
    plVar6[3] = lVar5;
    FUN_10859a354(param_1 + 0x10,lVar5,plVar6);
    FUN_10859a354(param_1 + 0x38,lVar5,plVar6);
    (**(code **)(**(long **)(param_3 + 8) + 0x48))(*(long **)(param_3 + 8),1);
    FUN_108599644(param_1);
    _OSSpinLockUnlock(param_1 + 0x78);
    func_0x00010be9b5a0(param_1);
    do {
      lVar5 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  else {
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
LAB_10859a128:
      _objc_release(puVar4);
      goto LAB_10859a15c;
    }
    _OSSpinLockUnlock(param_1 + 0x78);
    if (puVar4 != param_3) {
      func_0x00010c12b240(param_1);
      _OSSpinLockLock(param_1 + 0x78);
      goto LAB_10859a128;
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
LAB_10859a2a0:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10859a354; end: 10859a3bf;  */

void FUN_10859a354(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[2] = param_2;
  plVar4[3] = param_3;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = *param_1;
  *plVar4 = lVar5;
  plVar4[1] = (long)param_1;
  *(long **)(lVar5 + 8) = plVar4;
  *param_1 = (long)plVar4;
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10859a3c0; end: 10859a73f; -[POPAnimator removeAllAnimationsForObject:] */

undefined8 * FUN_10859a3c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *unaff_x21;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  puVar7 = &uStack_200;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  _objc_retain(param_3);
  _OSSpinLockLock(param_1 + 0x78);
  lVar4 = *(long *)(param_1 + 0x28);
  _CFDictionaryGetValue(lVar4,param_3);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_3;
  _CFDictionaryRemoveValue(*(undefined8 *)(param_1 + 0x28));
  _OSSpinLockUnlock(param_1 + 0x78);
  lVar10 = lVar4;
  func_0x00010bf529e0();
  if (lVar10 != 0) {
    unaff_x21 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    _objc_alloc();
    func_0x00010bf529e0(lVar4);
    func_0x00010c0321c0();
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    _objc_retain(lVar4);
    lVar10 = lVar4;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar11 = *plStack_1a0;
      do {
        lVar12 = 0;
        do {
          if (*plStack_1a0 != lVar11) {
            _objc_enumerationMutation(lVar4);
          }
          func_0x00010befa120(unaff_x21);
          lVar12 = lVar12 + 1;
        } while (lVar10 != lVar12);
        lVar10 = lVar4;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(lVar4);
    _OSSpinLockLock(param_1 + 0x78);
    uStack_1c0 = 0;
    plStack_1b8 = (long *)0x0;
    plVar13 = *(long **)(param_1 + 0x18);
    while (plVar1 = plVar13, plVar1 != (long *)(param_1 + 0x10)) {
      puVar8 = (undefined8 *)plVar1[2];
      FUN_10859a740(&uStack_1c0,puVar8,plVar1[3]);
      puVar5 = unaff_x21;
      func_0x00010bf4b900();
      plVar13 = (long *)plVar1[1];
      if (((ulong)puVar5 & 1) != 0) {
        lVar10 = *plVar1;
        *(long **)(lVar10 + 8) = plVar13;
        *plVar13 = lVar10;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
        FUN_10859b5ec(plVar1 + 2);
        __ZdlPv(plVar1);
      }
    }
    _OSSpinLockUnlock(param_1 + 0x78);
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    _objc_retain(lVar4);
    lVar10 = lVar4;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar11 = *plStack_1f0;
      do {
        lVar12 = 0;
        do {
          if (*plStack_1f0 != lVar11) {
            _objc_enumerationMutation(lVar4);
          }
          lVar6 = *(long *)(*(long *)(lStack_1f8 + lVar12 * 8) + 8);
          puVar8 = (undefined8 *)0x1;
          FUN_108599e40(lVar6,1,(*(ushort *)(lVar6 + 0x88) ^ 0xffff) & 1);
          lVar12 = lVar12 + 1;
        } while (lVar10 != lVar12);
        lVar10 = lVar4;
        puVar7 = &uStack_200;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(lVar4);
    plVar13 = plStack_1b8;
    if (plStack_1b8 != (long *)0x0) {
      plVar1 = plStack_1b8 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    _objc_release(unaff_x21);
    puVar9 = puVar7;
  }
  _objc_release(lVar4);
  puVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_release(lVar4);
  FUN_10859b5ec(&uStack_1c0);
  _objc_release(unaff_x21);
  _objc_release(lVar4);
  _objc_release(param_3);
  __Unwind_Resume();
  if (puVar9 != (undefined8 *)0x0) {
    plVar13 = puVar9 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar13 = (long *)puVar7[1];
  *puVar7 = puVar8;
  puVar7[1] = puVar9;
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  return puVar7;
}



/* Entry: 10859a740; end: 10859a7b3;  */

undefined8 * FUN_10859a740(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10859a7b4; end: 10859a963; -[POPAnimator removeAnimationForObject:key:cleanupDict:] */

void FUN_10859a7b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lStack_40;
  long *plStack_38;
  
  lVar4 = param_1;
  FUN_10859a964(param_1,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    _OSSpinLockLock(param_1 + 0x78);
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    plVar5 = *(long **)(param_1 + 0x18);
    do {
      plVar1 = plVar5;
      if (plVar1 == (long *)(param_1 + 0x10)) goto LAB_10859a860;
      FUN_10859a740(&lStack_40,plVar1[2],plVar1[3]);
      plVar5 = (long *)plVar1[1];
    } while (lVar4 != *(long *)(lStack_40 + 0x10));
    lVar6 = *plVar1;
    *(long **)(lVar6 + 8) = plVar5;
    *plVar5 = lVar6;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
    FUN_10859b5ec(plVar1 + 2);
    __ZdlPv(plVar1);
LAB_10859a860:
    plVar5 = *(long **)(param_1 + 0x40);
    do {
      plVar1 = plVar5;
      if (plVar1 == (long *)(param_1 + 0x38)) goto LAB_10859a8c8;
      FUN_10859a740(&lStack_40,plVar1[2],plVar1[3]);
      plVar5 = (long *)plVar1[1];
    } while (lVar4 != *(long *)(lStack_40 + 0x10));
    lVar6 = *plVar1;
    *(long **)(lVar6 + 8) = plVar5;
    *plVar5 = lVar6;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
    FUN_10859b5ec(plVar1 + 2);
    __ZdlPv(plVar1);
LAB_10859a8c8:
    _OSSpinLockUnlock(param_1 + 0x78);
    FUN_108599e40(*(long *)(lVar4 + 8),1,(*(ushort *)(*(long *)(lVar4 + 8) + 0x88) & 3) == 0);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  _objc_release(lVar4);
  return;
}



/* Entry: 10859a964; end: 10859aa93;  */

void FUN_10859a964(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  _OSSpinLockLock(param_1 + 0x78);
  lVar1 = *(long *)(param_1 + 0x28);
  _CFDictionaryGetValue(lVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c12d3e0(lVar1);
      if ((param_4 != 0) && (lVar2 = lVar1, func_0x00010bf529e0(), lVar2 == 0)) {
        _CFDictionaryRemoveValue(*(undefined8 *)(param_1 + 0x28),param_2);
      }
      goto LAB_10859aa0c;
    }
  }
  lVar3 = 0;
LAB_10859aa0c:
  _OSSpinLockUnlock(param_1 + 0x78);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10859aa94; end: 10859aa9b; -[POPAnimator removeAnimationForObject:key:] */

void FUN_10859aa94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_removeAnimationForObject_key_cle_1126286b0,param_3,param_4,1);
  return;
}



/* Entry: 10859aa9c; end: 10859ab2b; -[POPAnimator animationKeysForObject:] */

void FUN_10859aa9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _OSSpinLockLock(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _CFDictionaryGetValue(uVar1,param_3);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _OSSpinLockUnlock(param_1 + 0x78);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10859ab2c; end: 10859ac07; -[POPAnimator animationForObject:key:] */

void FUN_10859ab2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _OSSpinLockLock(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _CFDictionaryGetValue(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _OSSpinLockUnlock(param_1 + 0x78);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10859ac08; end: 10859ac0f; -[POPAnimator refreshPeriod] */

void FUN_10859ac08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_duration_1125c0600);
  return;
}



/* Entry: 10859ac10; end: 10859ac13; -[POPAnimator _currentRenderTime] */

void FUN_10859ac10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CACurrentMediaTime_110346c38)();
  return;
}



/* Entry: 10859ac14; end: 10859ac37; -[POPAnimator render] */

void FUN_10859ac14(undefined8 param_1)

{
  func_0x00010bdf7000();
                    /* WARNING: Could not recover jumptable at 0x00010c130350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_renderTime__112629af0);
  return;
}



/* Entry: 10859ac38; end: 10859ac9f; -[POPAnimator renderTime:] */

void FUN_10859ac38(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  FUN_10859b584(auStack_48,param_2 + 0x10);
  func_0x00010be8e620(param_1,param_2);
  FUN_10859ae44(auStack_48);
  return;
}



/* Entry: 10859aca0; end: 10859ad33; -[POPAnimator addObserver:] */

void FUN_10859aca0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _OSSpinLockLock(param_1 + 0x78);
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010bffc4a0();
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar2;
      _objc_release(uVar3);
      lVar1 = *(long *)(param_1 + 0x30);
    }
    func_0x00010befa120(lVar1,param_2,param_3);
    FUN_108599644(param_1);
    _OSSpinLockUnlock(param_1 + 0x78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10859ad34; end: 10859ad9b; -[POPAnimator removeObserver:] */

void FUN_10859ad34(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    _OSSpinLockLock(param_1 + 0x78);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
    FUN_108599644(param_1);
    _OSSpinLockUnlock(param_1 + 0x78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10859ad9c; end: 10859adb3; -[POPAnimator delegate] */

void FUN_10859ad9c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10859adb4; end: 10859adbf; -[POPAnimator setDelegate:] */

void FUN_10859adb4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 10859adc0; end: 10859adc7; -[POPAnimator disableDisplayLink] */

undefined1 FUN_10859adc0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x7c);
}



/* Entry: 10859adc8; end: 10859adcf; -[POPAnimator setDisableDisplayLink:] */

void FUN_10859adc8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x7c) = param_3;
  return;
}



/* Entry: 10859add0; end: 10859add7; -[POPAnimator beginTime] */

undefined8 FUN_10859add0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10859add8; end: 10859addf; -[POPAnimator setBeginTime:] */

void FUN_10859add8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 10859ade0; end: 10859ae27; -[POPAnimator .cxx_destruct] */

void FUN_10859ade0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  FUN_10859ae44(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  FUN_10859ae44(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10859ae28; end: 10859ae43; -[POPAnimator .cxx_construct] */

void FUN_10859ae28(long param_1)

{
  *(long *)(param_1 + 0x10) = param_1 + 0x10;
  *(long *)(param_1 + 0x18) = param_1 + 0x10;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(long *)(param_1 + 0x38) = param_1 + 0x38;
  *(long *)(param_1 + 0x40) = param_1 + 0x38;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10859ae44; end: 10859aeaf;  */

void FUN_10859ae44(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10859b5ec(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10859aeb0; end: 10859aec3;  */

void FUN_10859aeb0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar4 != lVar2) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_10859b5ec();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10859aec4; end: 10859af1f;  */

void FUN_10859aec4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar3 != lVar1) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10859b5ec();
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



/* Entry: 10859af20; end: 10859b3a7;  */

void FUN_10859af20(double param_1,double param_2,double param_3,undefined8 param_4,long param_5,
                  int param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined1 in_b0;
  undefined1 uVar14;
  undefined1 in_register_00005001;
  undefined1 uVar15;
  undefined1 in_register_00005002;
  undefined1 uVar16;
  undefined1 in_register_00005003;
  undefined1 uVar17;
  undefined1 in_register_00005004;
  undefined1 uVar18;
  undefined1 in_register_00005005;
  undefined1 uVar19;
  undefined1 in_register_00005006;
  undefined1 uVar20;
  undefined1 in_register_00005007;
  undefined1 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  
  _objc_retain();
  if (((*(ushort *)(param_5 + 0x88) & 3) != 1) || (*(long *)(param_5 + 0xa0) == 0))
  goto LAB_10859b2cc;
  lVar9 = *(long *)(param_5 + 0x90);
  func_0x00010c2bd8e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) goto LAB_10859b2cc;
  FUN_10859b3a8(&lStack_c0,param_5);
  if ((*(ushort *)(param_5 + 0x88) >> 8 & 1) == 0) {
    if (param_6 != 0) {
      lVar10 = *(long *)(param_5 + 0x90);
      func_0x00010c121200();
      _objc_retainAutoreleasedReturnValue();
      if (lVar10 != 0) {
        FUN_1085a2654(lStack_c0);
        lVar12 = *(long *)(param_5 + 0xa0);
        _objc_retain(lVar10);
        _objc_retain(param_4);
        dStack_a8 = 0.0;
        dStack_b0 = 0.0;
        dStack_98 = 0.0;
        dStack_a0 = 0.0;
        if (lVar12 != 0) {
          (**(code **)(lVar10 + 0x10))(lVar10,param_4,&dStack_b0);
        }
        _objc_release(param_4);
        _objc_release(lVar10);
        uVar4 = NEON_uminv(CONCAT17((char)((ushort)-(ushort)(dStack_98 == param_3) >> 8),
                                    CONCAT16((char)-(ushort)(dStack_98 == param_3),
                                             CONCAT15((char)((ushort)-(ushort)(dStack_a0 == param_2)
                                                            >> 8),
                                                      CONCAT14((char)-(ushort)(dStack_a0 == param_2)
                                                               ,CONCAT13((char)(-(ulong)(dStack_a8
                                                                                        == param_1)
                                                                               >> 8),
                                                                         CONCAT12((char)-(ulong)(
                                                  dStack_a8 == param_1),
                                                  -(ushort)(dStack_b0 ==
                                                           (double)CONCAT17(in_register_00005007,
                                                                            CONCAT16(
                                                  in_register_00005006,
                                                  CONCAT15(in_register_00005005,
                                                           CONCAT14(in_register_00005004,
                                                                    CONCAT13(in_register_00005003,
                                                                             CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))))))))))),
                           2);
        if ((uVar4 & 1) != 0) goto LAB_10859b284;
      }
      _objc_release(lVar10);
    }
    func_0x00010859b42c(param_5 + 0xe8,param_5 + 0xd8);
    func_0x00010859b42c(param_5 + 0xd8,&lStack_c0);
    (**(code **)(lVar9 + 0x10))(lVar9,param_4,*(undefined8 *)(lStack_c0 + 8));
    if ((*(ushort *)(param_5 + 0x88) >> 10 & 1) != 0) {
      uVar11 = *(undefined8 *)(param_5 + 0x70);
      plStack_c8 = plStack_b8;
      lStack_d0 = lStack_c0;
      if (plStack_b8 != (long *)0x0) {
        plVar13 = plStack_b8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar13 = &lStack_d0;
      FUN_108597cdc(plVar13,*(undefined4 *)(param_5 + 0x98),1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2be1c0(uVar11);
      _objc_release(plVar13);
      plVar13 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar1 = plStack_c8 + 1;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
  }
  else {
    lVar10 = *(long *)(param_5 + 0x90);
    func_0x00010c121200();
    _objc_retainAutoreleasedReturnValue();
    if (lVar10 != 0) {
      lVar12 = *(long *)(param_5 + 0xa0);
      _objc_retain(lVar10);
      _objc_retain(param_4);
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      dStack_a8 = 0.0;
      dStack_b0 = 0.0;
      dStack_98 = 0.0;
      dStack_a0 = 0.0;
      if (lVar12 != 0) {
        (**(code **)(lVar10 + 0x10))(lVar10,param_4,&dStack_b0);
      }
      _objc_release(param_4);
      _objc_release(lVar10);
      dVar8 = dStack_98;
      dVar7 = dStack_a0;
      dVar6 = dStack_a8;
      dVar5 = dStack_b0;
      FUN_1085a2654(lStack_c0);
      dVar25 = (double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13(
                                                  uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14)))))
                                               ));
      plVar13 = (long *)(param_5 + 0xd8);
      if (*plVar13 != 0) {
        dVar22 = param_1;
        dVar23 = param_2;
        dVar24 = param_3;
        FUN_1085a2654();
        dVar25 = dVar25 - (double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,
                                                  CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,
                                                  uVar14)))))));
        param_1 = param_1 - dVar22;
        param_2 = param_2 - dVar23;
        param_3 = param_3 - dVar24;
      }
      if ((((param_6 == 0) || (dVar25 != 0.0)) || (param_1 != 0.0)) ||
         ((param_2 != 0.0 || (param_3 != 0.0)))) {
        dStack_b0 = dVar5 + dVar25;
        dStack_a8 = dVar6 + param_1;
        dStack_a0 = dVar7 + param_2;
        dStack_98 = dVar8 + param_3;
        func_0x00010859b42c(param_5 + 0xe8,plVar13);
        func_0x00010859b42c(plVar13,&lStack_c0);
        (**(code **)(lVar9 + 0x10))(lVar9,param_4,&dStack_b0);
        if ((*(ushort *)(param_5 + 0x88) >> 10 & 1) != 0) {
          uVar11 = *(undefined8 *)(param_5 + 0x70);
          plStack_d8 = plStack_b8;
          lStack_e0 = lStack_c0;
          if (plStack_b8 != (long *)0x0) {
            plVar13 = plStack_b8 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar3) {
                *plVar13 = *plVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plVar13 = &lStack_e0;
          FUN_108597cdc(plVar13,*(undefined4 *)(param_5 + 0x98),1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2be1c0(uVar11);
          _objc_release(plVar13);
          func_0x00010859b4a8(&lStack_e0);
        }
      }
LAB_10859b284:
      _objc_release(lVar10);
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar13 = plStack_b8 + 1;
    do {
      lVar10 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  _objc_release(lVar9);
LAB_10859b2cc:
  _objc_release(param_4);
  return;
}



/* Entry: 10859b3a8; end: 10859b4ff;  */

void FUN_10859b3a8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  double *pdVar4;
  double dVar5;
  
  puVar2 = *(undefined8 **)(param_2 + 200);
  if (puVar2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
    func_0x0001085a2564(uVar1,puVar2[1]);
  }
  FUN_108598194(param_1,uVar1);
  if (*(double *)(param_2 + 0x128) != 0.0) {
    lVar3 = *(long *)*param_1;
    if (lVar3 != 0) {
      dVar5 = 1.0 / *(double *)(param_2 + 0x128);
      pdVar4 = (double *)((long *)*param_1)[1];
      do {
        *pdVar4 = (double)(long)(dVar5 * *pdVar4) / dVar5;
        lVar3 = lVar3 + -1;
        pdVar4 = pdVar4 + 1;
      } while (lVar3 != 0);
    }
  }
  return;
}



/* Entry: 10859b500; end: 10859b583;  */

void FUN_10859b500(long param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  
  if ((param_2 != 0) && (lVar2 = *(long *)(param_1 + 0xa0), lVar2 != 0)) {
    pdVar3 = *(double **)(*(long *)(param_1 + 200) + 8);
    pdVar4 = *(double **)(*(long *)(param_1 + 0xa8) + 8);
    pdVar5 = *(double **)(*(long *)(param_1 + 0xb8) + 8);
    do {
      dVar7 = *pdVar4;
      dVar6 = *pdVar5;
      if ((param_2 & 1) != 0) {
        bVar1 = *pdVar3 <= dVar7;
        if (dVar7 < dVar6) {
          bVar1 = dVar7 <= *pdVar3;
        }
        if (!bVar1) {
          *pdVar3 = dVar7;
        }
      }
      if (((uint)param_2 >> 1 & 1) != 0) {
        bVar1 = dVar6 <= *pdVar3;
        if (dVar7 < dVar6) {
          bVar1 = *pdVar3 <= dVar6;
        }
        if (!bVar1) {
          *pdVar3 = dVar6;
        }
      }
      pdVar3 = pdVar3 + 1;
      lVar2 = lVar2 + -1;
      pdVar4 = pdVar4 + 1;
      pdVar5 = pdVar5 + 1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 10859b584; end: 10859b5eb;  */

long FUN_10859b584(long param_1,long param_2)

{
  long lVar1;
  
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar1 = param_2;
  while (lVar1 = *(long *)(lVar1 + 8), lVar1 != param_2) {
    FUN_10859a354(param_1,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
  }
  return param_1;
}



/* Entry: 10859b5ec; end: 10859b643;  */

long FUN_10859b5ec(long param_1)

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



/* Entry: 10859b644; end: 10859b647;  */

void FUN_10859b644(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10859b648; end: 10859b67b;  */

void FUN_10859b648(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10859b67c; end: 10859b6b7;  */

long FUN_10859b67c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a57ac8);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10859b6b8; end: 10859b6bb;  */

void FUN_10859b6b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10859b6bc; end: 10859b6f3;  */

long FUN_10859b6bc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 8));
  _objc_destroyWeak(param_1);
  return param_1;
}



/* Entry: 10859b6f4; end: 10859b707; +[POPBasicAnimation animation] */

void FUN_10859b6f4(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10859b708; end: 10859b7bf; +[POPBasicAnimation animationWithPropertyNamed:] */

void FUN_10859b708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bf039a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c4940;
  func_0x00010c118de0(PTR_PTR_1126c4940,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5080(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10859b7c0; end: 10859b88b; -[POPBasicAnimation _initState] */

void FUN_10859b7c0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x198;
  __Znwm();
  *puVar1 = &PTR_FUN_110a57880;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  _objc_initWeak(puVar1 + 8,0);
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  *(ushort *)(puVar1 + 0x11) = *(ushort *)(puVar1 + 0x11) & 0x8000 | 6;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  *puVar1 = &PTR_FUN_110a57b18;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0x3fd999999999999a;
  puVar1[0x32] = 0;
  *(undefined4 *)(puVar1 + 2) = 2;
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10859b88c; end: 10859b91b; +[POPBasicAnimation linearAnimation] */

void FUN_10859b88c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10859b91c; end: 10859b9ab; +[POPBasicAnimation easeInAnimation] */

void FUN_10859b91c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseIn_110346d70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10859b9ac; end: 10859ba3b; +[POPBasicAnimation easeOutAnimation] */

void FUN_10859b9ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10859ba3c; end: 10859bacb; +[POPBasicAnimation easeInEaseOutAnimation] */

void FUN_10859ba3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10859bacc; end: 10859bb5b; +[POPBasicAnimation defaultAnimation] */

void FUN_10859bacc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionDefault_110346d68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10859bb5c; end: 10859bb5f; -[POPBasicAnimation init] */

void FUN_10859bb5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be39370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__init_11256be78);
  return;
}



/* Entry: 10859bb60; end: 10859bb6b; -[POPBasicAnimation duration] */

undefined8 FUN_10859bb60(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x188);
}



/* Entry: 10859bb6c; end: 10859bb87; -[POPBasicAnimation setDuration:] */

void FUN_10859bb6c(double param_1,long param_2)

{
  if (param_1 == *(double *)(*(long *)(param_2 + 8) + 0x188)) {
    return;
  }
  *(double *)(*(long *)(param_2 + 8) + 0x188) = param_1;
  return;
}



/* Entry: 10859bb88; end: 10859bbb3; -[POPBasicAnimation timingFunction] */

void FUN_10859bb88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x160);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10859bbb4; end: 10859bc93; -[POPBasicAnimation setTimingFunction:] */

void FUN_10859bbb4(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_3;
  lVar3 = param_3;
  _objc_retain();
  lVar4 = *(long *)(param_1 + 8);
  if (param_3 != *(long *)(lVar4 + 0x160)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar4 + 0x160);
    *(long *)(lVar4 + 0x160) = param_3;
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 8);
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010bfc4180(*(undefined8 *)(lVar4 + 0x160));
    lVar2 = *(long *)(lVar4 + 0x160);
    param_4 = (ulong)&uStack_50 | 8;
    lVar3 = 2;
    func_0x00010bfc4180();
    *(double *)(lVar4 + 0x170) = (double)(float)((ulong)uStack_50 >> 0x20);
    *(double *)(lVar4 + 0x168) = (double)(float)uStack_50;
    *(double *)(lVar4 + 0x180) = (double)(float)((ulong)uStack_48 >> 0x20);
    *(double *)(lVar4 + 0x178) = (double)(float)uStack_48;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(lVar3);
  puStack_88 = PTR_PTR_1126fce10;
  lStack_90 = lVar2;
  _objc_msgSendSuper2(&lStack_90,PTR_s__appendDescription_debug__112550db8,lVar3,param_4);
  if (*(double *)(*(long *)(lVar2 + 8) + 0x188) != 0.0) {
    func_0x00010bf06ba0(lVar3);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10859bc94; end: 10859bd33; -[POPBasicAnimation _appendDescription:debug:] */

void FUN_10859bc94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fce10;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s__appendDescription_debug__112550db8,param_3,param_4);
  if (*(double *)(*(long *)(param_1 + 8) + 0x188) != 0.0) {
    func_0x00010bf06ba0(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10859bd34; end: 10859bde3; -[POPBasicAnimation copyWithZone:] */

undefined1 * FUN_10859bd34(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fce10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_copyWithZone__1125b2238);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf8b160(param_1);
    func_0x00010c192d40(puVar1);
    func_0x00010c270de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar1);
    _objc_release(param_1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10859bde4; end: 10859be37;  */

undefined8 * FUN_10859bde4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  _objc_release(param_1[0x2c]);
  *param_1 = &PTR_FUN_110a57b98;
  if (param_1[0x28] != 0) {
    _free();
    param_1[0x28] = 0;
  }
  _objc_release(param_1[0x27]);
  FUN_108598298(param_1 + 0x23);
  FUN_108598298(param_1 + 0x21);
  FUN_108598298(param_1 + 0x1f);
  FUN_108598298(param_1 + 0x1d);
  FUN_108598298(param_1 + 0x1b);
  FUN_108598298(param_1 + 0x19);
  FUN_108598298(param_1 + 0x17);
  FUN_108598298(param_1 + 0x15);
  _objc_release(param_1[0x12]);
  *param_1 = &PTR_FUN_110a57880;
  uVar1 = param_1[3];
  param_1[3] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xd];
  param_1[0xd] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[9];
  param_1[9] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[10];
  param_1[10] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[0xe]);
  _objc_release(param_1[0xd]);
  _objc_release(param_1[0xc]);
  _objc_release(param_1[0xb]);
  _objc_release(param_1[10]);
  _objc_release(param_1[9]);
  _objc_destroyWeak(param_1 + 8);
  _objc_release(param_1[3]);
  return param_1;
}



/* Entry: 10859be38; end: 10859be7b;  */

bool FUN_10859be38(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 3) {
    if ((*(ushort *)(param_1 + 0x88) >> 0xe & 1) == 0) {
LAB_10859be5c:
      return 1.0 <= *(double *)(param_1 + 400) + 1e-06;
    }
  }
  else if (*(long *)(param_1 + 0xa0) != 0) goto LAB_10859be5c;
  return true;
}



/* Entry: 10859be7c; end: 10859c1e3;  */

void FUN_10859be7c(double param_1,double param_2,double param_3,double param_4,long param_5,
                  int param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_80 [8];
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  _objc_retain(param_7);
  plVar7 = (long *)(param_5 + 0xa8);
  if (*plVar7 == 0) {
    FUN_10859c924(param_5,plVar7,param_7);
  }
  plVar6 = (long *)(param_5 + 0xb8);
  if (*plVar6 == 0) {
    if (*(int *)(param_5 + 0x10) == 1) {
      func_0x00010c272460(*(undefined8 *)(param_5 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      FUN_10859c924(param_5,plVar6,param_7);
    }
  }
  if (param_6 != 0) {
    plVar8 = (long *)(param_5 + 200);
    if (*plVar8 == 0) {
      uVar5 = *(undefined8 *)(param_5 + 0xa0);
      func_0x0001085a2564(uVar5,0);
      FUN_108598194(&lStack_70,uVar5);
      FUN_10859cb28(plVar8,&lStack_70);
      plVar2 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if ((*plVar8 != 0) && (*plVar7 != 0)) {
        func_0x0001085a24fc();
      }
    }
    if (*(long *)(param_5 + 0xf8) == 0) {
      uVar5 = *(undefined8 *)(param_5 + 0xa0);
      func_0x0001085a2564(uVar5,0);
      FUN_108598194(&lStack_70,uVar5);
      FUN_10859cb28((long *)(param_5 + 0xf8),&lStack_70);
      plVar8 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar2 = plStack_68 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    if (*(long *)(param_5 + 0x108) == 0) {
      uVar5 = *(undefined8 *)(param_5 + 0xa0);
      func_0x0001085a2564(uVar5,0);
      FUN_108598194(&lStack_70,uVar5);
      FUN_10859cb28(param_5 + 0x108,&lStack_70);
      plVar8 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar2 = plStack_68 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
  }
  if (*(long *)(param_5 + 0x118) == 0) {
    lVar9 = 0xa8;
    if (*(long *)(param_5 + 200) != 0) {
      lVar9 = 200;
      plVar7 = (long *)(param_5 + 200);
    }
    lVar9 = *(long *)(param_5 + lVar9);
    plVar7 = (long *)plVar7[1];
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_70 = lVar9;
    plStack_68 = plVar7;
    if ((lVar9 != 0) && (*plVar6 != 0)) {
      FUN_1085a2654();
      dVar10 = param_1;
      dVar11 = param_2;
      dVar12 = param_3;
      dVar13 = param_4;
      FUN_1085a2654(lVar9);
      if ((param_2 - dVar11) * (param_2 - dVar11) + (param_1 - dVar10) * (param_1 - dVar10) +
          (param_3 - dVar12) * (param_3 - dVar12) + (param_4 - dVar13) * (param_4 - dVar13) != 0.0)
      {
        uVar5 = *(undefined8 *)(param_5 + 0xa0);
        FUN_1085a25cc(uVar5);
        FUN_108598194(auStack_80,uVar5);
        FUN_10859cb28(param_5 + 0x118,auStack_80);
        plVar7 = plStack_68;
        if (plStack_78 != (long *)0x0) {
          plVar6 = plStack_78 + 1;
          do {
            lVar9 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
            plVar7 = plStack_68;
          }
        }
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        lVar9 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  _objc_release(param_7);
  return;
}



/* Entry: 10859c1e4; end: 10859c343;  */

undefined8 FUN_10859c1e4(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_3);
  if (*(long *)(param_2 + 0x160) == 0) {
    puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(*(undefined8 *)(param_2 + 8));
    _objc_release(puVar1);
  }
  dVar7 = *(double *)(param_2 + 0x188);
  dVar8 = 1.0;
  dVar6 = 1.0;
  if (0.0 < dVar7) {
    param_1 = param_1 - *(double *)(param_2 + 0x30);
    if (dVar7 <= param_1) {
      param_1 = dVar7;
    }
    dVar8 = param_1 / dVar7;
    dVar6 = dVar8;
    FUN_10859fdf8(dVar8,1.0 / (dVar7 * 1000.0),param_2 + 0x168);
  }
  *(double *)(param_2 + 400) = dVar8;
  if ((*(int *)(param_2 + 0x98) - 1U < 6 || *(int *)(param_2 + 0x98) == 10) &&
     (lVar2 = *(long *)(param_2 + 0xa0), lVar2 != 0)) {
    pdVar3 = *(double **)(*(long *)(param_2 + 200) + 8);
    pdVar4 = *(double **)(*(long *)(param_2 + 0xb8) + 8);
    pdVar5 = *(double **)(*(long *)(param_2 + 0xa8) + 8);
    do {
      *pdVar3 = *pdVar5 + (*pdVar4 - *pdVar5) * dVar6;
      lVar2 = lVar2 + -1;
      pdVar3 = pdVar3 + 1;
      pdVar4 = pdVar4 + 1;
      pdVar5 = pdVar5 + 1;
    } while (lVar2 != 0);
  }
  *(double *)(param_2 + 0x78) = dVar6;
  FUN_10859b500(param_2,*(undefined8 *)(param_2 + 0x130));
  _objc_release(param_3);
  return 1;
}



/* Entry: 10859c344; end: 10859c4eb;  */

void FUN_10859c344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
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
  undefined8 uStack_28;
  
  if (*(long *)(param_5 + 0xa0) != 0) {
    lVar4 = *(long *)(param_5 + 200);
    plVar5 = *(long **)(param_5 + 0xd0);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar4 == 0) {
      param_1 = 0;
      param_2 = 0;
      param_3 = 0;
      param_4 = 0;
    }
    else {
      FUN_1085a2654();
    }
    uStack_40 = param_1;
    uStack_38 = param_2;
    uStack_30 = param_3;
    uStack_28 = param_4;
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
    lVar4 = *(long *)(param_5 + 0xa8);
    plVar5 = *(long **)(param_5 + 0xb0);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar4 == 0) {
      param_1 = 0;
      param_2 = 0;
      param_3 = 0;
      param_4 = 0;
    }
    else {
      FUN_1085a2654();
    }
    uStack_60 = param_1;
    uStack_58 = param_2;
    uStack_50 = param_3;
    uStack_48 = param_4;
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
    lVar4 = *(long *)(param_5 + 0xb8);
    plVar5 = *(long **)(param_5 + 0xc0);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar4 == 0) {
      param_1 = 0;
      param_2 = 0;
      param_3 = 0;
      param_4 = 0;
    }
    else {
      FUN_1085a2654();
    }
    uStack_80 = param_1;
    uStack_78 = param_2;
    uStack_70 = param_3;
    uStack_68 = param_4;
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
    FUN_10859cb8c(0x1132668c8,&uStack_40,&uStack_60,&uStack_80);
    *(undefined8 *)(param_5 + 0x78) = param_1;
  }
  return;
}



/* Entry: 10859c4ec; end: 10859c6af;  */

void FUN_10859c4ec(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  double *pdVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double adStack_70 [4];
  
  if (*(long *)(param_5 + 0xa0) != 0) {
    uVar6 = (uint)*(ushort *)(param_5 + 0x88);
    if (((*(ushort *)(param_5 + 0x88) >> 5 & 1) != 0) && (*(long *)(param_5 + 0x140) != 0)) {
      uVar4 = *(ulong *)(param_5 + 0x148);
      uVar3 = *(ulong *)(param_5 + 0x150);
      if (uVar3 < uVar4) {
        do {
          param_1 = *(double *)(param_5 + 0x78);
          pdVar1 = (double *)(*(long *)(param_5 + 0x140) + uVar3 * 0x10);
          param_2 = *pdVar1;
          if (param_1 < param_2) break;
          if (((ulong)pdVar1[1] & 1) == 0) {
            FUN_108597498(adStack_70);
            lVar8 = param_5 + 0x40;
            _objc_loadWeakRetained(lVar8);
            param_1 = *(double *)(*(long *)(param_5 + 0x140) + *(long *)(param_5 + 0x150) * 0x10);
            func_0x00010c103a60();
            _objc_release(lVar8);
            *(undefined1 *)(*(long *)(param_5 + 0x140) + *(long *)(param_5 + 0x150) * 0x10 + 8) = 1;
            func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_6,
                                (ulong)adStack_70[0] & 0xff);
            uVar4 = *(ulong *)(param_5 + 0x148);
            uVar3 = *(ulong *)(param_5 + 0x150);
          }
          uVar3 = uVar3 + 1;
          *(ulong *)(param_5 + 0x150) = uVar3;
        } while (uVar3 < uVar4);
        uVar6 = (uint)*(ushort *)(param_5 + 0x88);
      }
    }
    if ((uVar6 >> 9 & 1) == 0) {
      lVar8 = *(long *)(param_5 + 0xa0);
      if (lVar8 != 0) {
        FUN_1085a2654(*(undefined8 *)(param_5 + 0xb8));
        dVar9 = param_1;
        dVar10 = param_2;
        dVar11 = param_3;
        dVar12 = param_4;
        FUN_1085a2654(*(undefined8 *)(param_5 + 200));
        adStack_70[0] = param_1 - dVar9;
        adStack_70[1] = param_2 - dVar10;
        adStack_70[2] = param_3 - dVar11;
        adStack_70[3] = param_4 - dVar12;
        if (adStack_70[1] * adStack_70[1] + adStack_70[0] * adStack_70[0] +
            adStack_70[2] * adStack_70[2] + adStack_70[3] * adStack_70[3] != 0.0) {
          if (*(long *)(param_5 + 0x118) == 0) {
            return;
          }
          bVar2 = true;
          puVar5 = *(ulong **)(*(long *)(param_5 + 0x118) + 8);
          plVar7 = (long *)&UNK_10df35ce8;
          do {
            bVar2 = (bool)(bVar2 & (long)(*puVar5 ^ *(ulong *)((long)adStack_70 + *plVar7)) < 0);
            lVar8 = lVar8 + -1;
            puVar5 = puVar5 + 1;
            plVar7 = plVar7 + 1;
          } while (lVar8 != 0);
          if (!bVar2) {
            return;
          }
        }
      }
      FUN_10859cc3c(param_5);
    }
  }
  return;
}



/* Entry: 10859c6b0; end: 10859c853;  */

void FUN_10859c6b0(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (param_2 != 0) {
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    FUN_10859cb28(param_1 + 200,&uStack_30);
    plVar4 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    FUN_10859cb28(param_1 + 0xd8,&uStack_30);
    plVar4 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    FUN_10859cb28(param_1 + 0xe8,&uStack_30);
    plVar4 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  lVar5 = *(long *)(param_1 + 0x148);
  if (lVar5 != 0) {
    puVar6 = (undefined1 *)(*(long *)(param_1 + 0x140) + 8);
    do {
      *puVar6 = 0;
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 0x10;
    } while (lVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(ushort *)(param_1 + 0x88) = *(ushort *)(param_1 + 0x88) & 0xfdff;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10859cb28(param_1 + 0x118,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10859c854; end: 10859c857;  */

undefined8 * FUN_10859c854(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a57b98;
  if (param_1[0x28] != 0) {
    _free();
    param_1[0x28] = 0;
  }
  _objc_release(param_1[0x27]);
  FUN_108598298(param_1 + 0x23);
  FUN_108598298(param_1 + 0x21);
  FUN_108598298(param_1 + 0x1f);
  FUN_108598298(param_1 + 0x1d);
  FUN_108598298(param_1 + 0x1b);
  FUN_108598298(param_1 + 0x19);
  FUN_108598298(param_1 + 0x17);
  FUN_108598298(param_1 + 0x15);
  _objc_release(param_1[0x12]);
  *param_1 = &PTR_FUN_110a57880;
  uVar1 = param_1[3];
  param_1[3] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xd];
  param_1[0xd] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[9];
  param_1[9] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[10];
  param_1[10] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[0xe]);
  _objc_release(param_1[0xd]);
  _objc_release(param_1[0xc]);
  _objc_release(param_1[0xb]);
  _objc_release(param_1[10]);
  _objc_release(param_1[9]);
  _objc_destroyWeak(param_1 + 8);
  _objc_release(param_1[3]);
  return param_1;
}



/* Entry: 10859c858; end: 10859c86b;  */

void FUN_10859c858(void)

{
  FUN_10859c894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10859c86c; end: 10859c893;  */

ushort FUN_10859c86c(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 3) {
    return *(ushort *)(param_1 + 0x88) >> 0xe & 1;
  }
  return (ushort)(*(long *)(param_1 + 0xa0) == 0);
}



/* Entry: 10859c894; end: 10859c923;  */

undefined8 * FUN_10859c894(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a57b98;
  if (param_1[0x28] != 0) {
    _free();
    param_1[0x28] = 0;
  }
  _objc_release(param_1[0x27]);
  FUN_108598298(param_1 + 0x23);
  FUN_108598298(param_1 + 0x21);
  FUN_108598298(param_1 + 0x1f);
  FUN_108598298(param_1 + 0x1d);
  FUN_108598298(param_1 + 0x1b);
  FUN_108598298(param_1 + 0x19);
  FUN_108598298(param_1 + 0x17);
  FUN_108598298(param_1 + 0x15);
  _objc_release(param_1[0x12]);
  *param_1 = &PTR_FUN_110a57880;
  uVar1 = param_1[3];
  param_1[3] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xd];
  param_1[0xd] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[9];
  param_1[9] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[10];
  param_1[10] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[0xe]);
  _objc_release(param_1[0xd]);
  _objc_release(param_1[0xc]);
  _objc_release(param_1[0xb]);
  _objc_release(param_1[10]);
  _objc_release(param_1[9]);
  _objc_destroyWeak(param_1 + 8);
  _objc_release(param_1[3]);
  return param_1;
}



/* Entry: 10859c924; end: 10859cb27;  */

void FUN_10859c924(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar7 = &uStack_70;
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x90);
  func_0x00010c121200();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    lVar8 = *(long *)(param_1 + 0xa0);
    _objc_retain(lVar5);
    _objc_retain(param_3);
    plStack_58 = (long *)0x0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    if (lVar8 != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5,param_3,&uStack_60);
    }
    _objc_release(param_3);
    _objc_release(lVar5);
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    FUN_1085a25cc(uStack_60,plStack_58,uStack_50,uStack_48,uVar6);
    FUN_108598194(&uStack_60,uVar6);
    FUN_10859cb28(param_2,&uStack_60);
    plVar2 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if ((*(ushort *)(param_1 + 0x88) >> 10 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x70);
      plStack_68 = (long *)param_2[1];
      uStack_70 = *param_2;
      if (param_2[1] != 0) {
        plVar2 = (long *)(param_2[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_108597cdc(&uStack_70,*(undefined4 *)(param_1 + 0x98),1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c121780(uVar6);
      _objc_release(puVar7);
      plVar2 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
    }
  }
  _objc_release(lVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 10859cb28; end: 10859cb8b;  */

undefined8 * FUN_10859cb28(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10859cb8c; end: 10859cc3b;  */

double FUN_10859cb8c(undefined8 param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = *param_4 - *param_3;
  dVar2 = param_4[1] - param_3[1];
  dVar5 = param_4[2] - param_3[2];
  dVar6 = param_4[3] - param_3[3];
  dVar1 = dVar2 * dVar2 + dVar1 * dVar1 + dVar5 * dVar5 + dVar6 * dVar6;
  if (dVar1 == 0.0) {
    return 1.0;
  }
  dVar2 = *param_2 - *param_3;
  dVar4 = param_2[1] - param_3[1];
  dVar5 = param_2[2] - param_3[2];
  dVar6 = param_2[3] - param_3[3];
  dVar2 = dVar4 * dVar4 + dVar2 * dVar2 + dVar5 * dVar5 + dVar6 * dVar6;
  dVar5 = *param_2 - *param_4;
  dVar6 = param_2[1] - param_4[1];
  dVar4 = param_2[2] - param_4[2];
  dVar3 = param_2[3] - param_4[3];
  dVar5 = dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3;
  if (dVar5 < dVar2) {
    return SQRT(dVar2 / dVar1);
  }
  return 1.0 - SQRT(dVar5 / dVar1);
}



/* Entry: 10859cc3c; end: 10859ce37;  */

void FUN_10859cc3c(long param_1)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  uVar2 = *(ushort *)(param_1 + 0x88);
  *(ushort *)(param_1 + 0x88) = uVar2 | 0x200;
  if ((uVar2 >> 7 & 1) != 0) {
    FUN_108597498(&uStack_50);
    lVar6 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c103aa0();
    _objc_release(lVar6);
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  lVar6 = *(long *)(param_1 + 0x50);
  _objc_retainBlock();
  if (lVar6 != 0) {
    FUN_108597498(&uStack_50);
    (**(code **)(lVar6 + 0x10))(lVar6,*(undefined8 *)(param_1 + 8));
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  if ((*(ushort *)(param_1 + 0x88) >> 10 & 1) != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x70);
    FUN_10859b3a8(&uStack_50,param_1);
    plStack_38 = plStack_48;
    uStack_40 = uStack_50;
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
    puVar7 = &uStack_40;
    FUN_108597cdc(puVar7,*(undefined4 *)(param_1 + 0x98),1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf78ee0(uVar9);
    _objc_release(puVar7);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  _objc_release(lVar6);
  return;
}



/* Entry: 10859ce38; end: 10859cf33;  */

void FUN_10859ce38(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_2 == (undefined8 *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
  }
  else {
    puVar1 = param_2;
    _CGColorGetComponents();
    _CGColorGetNumberOfComponents();
    if (param_2 == (undefined8 *)0x2) {
      uVar3 = *puVar1;
      param_3[1] = uVar3;
      param_3[2] = uVar3;
      *param_3 = uVar3;
      uVar3 = puVar1[1];
    }
    else {
      if (param_2 != (undefined8 *)0x4) {
        puVar2 = PTR__OBJC_CLASS___CIColor_1126c9738;
        func_0x00010bf41520(PTR__OBJC_CLASS___CIColor_1126c9738);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1248a0();
        *param_3 = param_1;
        func_0x00010bfce1c0(puVar2);
        param_3[1] = param_1;
        func_0x00010bf1e520(puVar2);
        param_3[2] = param_1;
        func_0x00010bf01b40(puVar2);
        param_3[3] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar2);
        return;
      }
      *param_3 = *puVar1;
      param_3[1] = puVar1[1];
      param_3[2] = puVar1[2];
      uVar3 = puVar1[3];
    }
    param_3[3] = uVar3;
  }
  return;
}



/* Entry: 10859cf34; end: 10859cfcb;  */

ulong FUN_10859cf34(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  _CFGetTypeID();
  uVar2 = uVar1;
  _CGColorGetTypeID();
  uVar4 = param_1;
  if (uVar1 != uVar2) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_opt_class(PTR__OBJC_CLASS___UIColor_1126aea70);
    uVar1 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      _objc_retainAutorelease(param_1);
      func_0x00010bdc0fe0();
    }
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 10859cfcc; end: 10859d017;  */

void FUN_10859cfcc(undefined8 param_1)

{
  _objc_retain();
  FUN_10859cf34(param_1);
  FUN_10859ce38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10859d018; end: 10859d08f;  */

undefined * FUN_10859d018(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _CGColorSpaceCreateDeviceRGB();
  uVar1 = param_1;
  _CGColorCreate();
  _CGColorSpaceRelease(param_1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_alloc(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x00010bffa200();
  _CGColorRelease(uVar1);
  return puVar2;
}



/* Entry: 10859d090; end: 10859d107; +[POPCustomAnimation animationWithBlock:] */

void FUN_10859d090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010be39360();
  func_0x00010c167dc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10859d108; end: 10859d14b; -[POPCustomAnimation _init] */

void FUN_10859d108(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fce18;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s__init_11256be78);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(*(long *)((long)puVar1 + 8) + 0x10) = 3;
  }
  return;
}



/* Entry: 10859d14c; end: 10859d163; -[POPCustomAnimation beginTime] */

double FUN_10859d14c(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(*(long *)(param_1 + 8) + 0x30);
  if (dVar1 <= 0.0) {
    dVar1 = *(double *)(*(long *)(param_1 + 8) + 0x28);
  }
  return dVar1;
}



/* Entry: 10859d164; end: 10859d193; -[POPCustomAnimation _advance:currentTime:elapsedTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10859d164(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *(undefined8 *)(param_3 + _DAT_112776a30) = param_1;
  *(undefined8 *)(param_3 + _DAT_112776a34) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010859d190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + _DAT_112776a38) + 0x10))
            (*(long *)(param_3 + _DAT_112776a38),param_5,param_3);
  return;
}



/* Entry: 10859d194; end: 10859d1d7; -[POPCustomAnimation _appendDescription:debug:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10859d194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee4958);
  return;
}



/* Entry: 10859d1d8; end: 10859d1e7; -[POPCustomAnimation currentTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10859d1d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776a30);
}



/* Entry: 10859d1e8; end: 10859d1f7; -[POPCustomAnimation elapsedTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10859d1e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776a34);
}



/* Entry: 10859d1f8; end: 10859d207; -[POPCustomAnimation animate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10859d1f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776a38);
}



/* Entry: 10859d208; end: 10859d213; -[POPCustomAnimation setAnimate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10859d208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10859d214; end: 10859d227; -[POPCustomAnimation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10859d214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776a38,0);
  return;
}



/* Entry: 10859d228; end: 10859d2c7; -[POPCustomAnimation copyWithZone:] */

undefined1 * FUN_10859d228(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fce18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_copyWithZone__1125b2238);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf02ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167dc0(puVar1);
    _objc_release(param_1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10859d2c8; end: 10859d2db; +[POPDecayAnimation animation] */

void FUN_10859d2c8(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10859d2dc; end: 10859d393; +[POPDecayAnimation animationWithPropertyNamed:] */

void FUN_10859d2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bf039a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c4940;
  func_0x00010c118de0(PTR_PTR_1126c4940,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5080(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10859d394; end: 10859d397; -[POPDecayAnimation init] */

void FUN_10859d394(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be39370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__init_11256be78);
  return;
}


