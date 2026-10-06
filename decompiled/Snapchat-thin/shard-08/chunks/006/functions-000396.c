/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106301f2c; end: 106301f33; -[SCOperaBlackSnapsWatchdogTrackingPlugin didDetectBlock] */

undefined8 FUN_106301f2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106301f34; end: 106301f3b; -[SCOperaBlackSnapsWatchdogTrackingPlugin setDidDetectBlock:] */

void FUN_106301f34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106301f3c; end: 106301f43; -[SCOperaBlackSnapsWatchdogTrackingPlugin didDetectMissingPageProperties] */

undefined8 FUN_106301f3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106301f44; end: 106301f4b; -[SCOperaBlackSnapsWatchdogTrackingPlugin setDidDetectMissingPageProperties:] */

void FUN_106301f44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106301f4c; end: 106301f9b; -[SCOperaBlackSnapsWatchdogTrackingPlugin .cxx_destruct] */

void FUN_106301f4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106301f9c; end: 1063020f7;  */

void FUN_106301f9c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        iVar1 = (int)*(undefined8 *)(lStack_108 + lVar6 * 8);
        func_0x000107cd0c8c();
        if (iVar1 == 0) {
          uVar4 = 0;
          goto LAB_106302064;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  uVar4 = 1;
LAB_106302064:
  _objc_release(lVar3);
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_1063020f8;
  puStack_128 = &UNK_11084a9b8;
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar2);
  lStack_120 = lVar2;
  uStack_118 = uVar4;
  func_0x0001000d76cc("APPSTORE",&puStack_140);
  lVar2 = lStack_120;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106302108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x20) + 0x10))
            (*(long *)(lVar2 + 0x20),*(undefined1 *)(lVar2 + 0x28));
  return;
}



/* Entry: 1063020f8; end: 10630210b;  */

void FUN_1063020f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106302108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10630210c; end: 106302193;  */

void FUN_10630210c(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x000107cd0c8c();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106302194;
  puStack_38 = &UNK_11084a9b8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_30 = uVar2;
  uStack_28 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  return;
}



/* Entry: 106302194; end: 1063021a7;  */

void FUN_106302194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001063021a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1063021a8; end: 1063024d3; -[SCOperaPerformanceTrackingPlugin initWithOperaSessionId:entryEvent:entryIntent:crashServices:multiSourceCountryProvider:playlistScopedAnalyticsInfoAccessor:contentResolutionSignalCollector:] */

undefined1 *
FUN_1063021a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f0e40;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x128);
    *(undefined8 *)((long)puVar1 + 0x128) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x130);
    *(long *)((long)puVar1 + 0x130) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x138);
    *(undefined8 *)((long)puVar1 + 0x138) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x150) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    puVar3 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xd8);
    *(undefined **)((long)puVar1 + 0xd8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xe0);
    *(undefined **)((long)puVar1 + 0xe0) = puVar3;
    _objc_release(uVar2);
    if (param_8 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + 0xe8);
      *(undefined **)((long)puVar1 + 0xe8) = puVar3;
      _objc_release(uVar2);
      func_0x00010c1cafa0(*(undefined8 *)((long)puVar1 + 0xe8));
    }
    *(undefined8 *)((long)puVar1 + 0x70) = 0xffffffffffffffff;
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x148);
    *(undefined8 *)((long)puVar1 + 0x148) = uVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    puVar3 = PTR_PTR_1126c99e8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c9a90;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bff58;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c9a98;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0xa8) = 0;
    *(undefined8 *)((long)puVar1 + 0xb0) = 0xffffffffffffffff;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063024d4; end: 106302517; -[SCOperaPerformanceTrackingPlugin dealloc] */

void FUN_1063024d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be09c00();
  puStack_28 = PTR_PTR_1126f0e40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106302518; end: 10630269f; -[SCOperaPerformanceTrackingPlugin setOperaControlling:] */

void FUN_106302518(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar7 = param_3;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar7);
  uVar7 = param_3;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126c99f0;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf46560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x150);
  func_0x000108534aa8(uVar5);
  func_0x00010c0274a0(puVar3,param_2,uVar4,uVar7,uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar3;
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + 0x100);
  *(undefined **)(param_1 + 0x100) = puVar3;
  _objc_release(uVar7);
  uVar2 = (undefined4)*(undefined8 *)(param_1 + 0xf8);
  func_0x00010bf21a20();
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0xf8);
  func_0x00010bf8df80();
  *(undefined1 *)(param_1 + 0x112) = uVar1;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0xf8);
  func_0x00010bfb3140();
  *(undefined1 *)(param_1 + 0x113) = uVar1;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0xf8);
  func_0x00010bf0dee0();
  *(undefined1 *)(param_1 + 0x114) = uVar1;
  return;
}



/* Entry: 1063026a0; end: 10630276b; -[SCOperaPerformanceTrackingPlugin _reportBlackSnapError:error:] */

void FUN_1063026a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  _objc_retain(param_4);
  if (param_3 == 0) {
    lVar3 = -1;
  }
  else {
    lVar3 = param_3;
    FUN_10630276c(param_3);
  }
  func_0x000108534aa8(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bc90ccc(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf2e2c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1063692f8(uVar1,param_4,lVar3,uVar2,1);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10630276c; end: 106302a5f;  */

undefined8 FUN_10630276c(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain();
  puVar3 = PTR_PTR_1126b2340;
  uVar2 = param_1;
  func_0x00010c118b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf16000();
  if (puVar3 < (undefined *)0x15) {
    if ((1L << ((ulong)puVar3 & 0x3f) & 0x100070U) != 0) {
      uVar7 = 1;
      goto LAB_1063029f4;
    }
    if ((1L << ((ulong)puVar3 & 0x3f) & 6U) == 0) {
      if (puVar3 == (undefined *)0x9) {
        uVar7 = 10;
        goto LAB_1063029f4;
      }
      goto LAB_1063027fc;
    }
  }
  else {
LAB_1063027fc:
    _objc_release(uVar2);
    uVar4 = param_1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar5 = uVar2;
    func_0x00010010fab4(uVar2,PTR_DAT_1126a52f8);
    uVar4 = uVar2;
    if ((int)uVar5 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar2);
    if (uVar4 == 0) {
      uVar2 = param_1;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126b5bc0;
      _objc_opt_class(PTR_PTR_1126b5bc0);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar3);
      uVar2 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar4);
      uVar4 = uVar2;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 == 0) {
        uVar7 = 0xffffffffffffffff;
        goto LAB_1063029f4;
      }
      uVar5 = uVar2;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c27dd80();
      uVar4 = uVar6 + 1;
      if (uVar4 < 0x1c) {
        if ((1L << (uVar4 & 0x3f) & 0xd8de0fdU) == 0) {
          if (uVar4 == 8) {
            uVar7 = 5;
          }
          else {
            if (uVar4 != 10) goto LAB_106302a58;
            uVar7 = 0xe;
          }
        }
        else {
          uVar7 = 1;
          if ((uVar6 + 1 < 0x1c) && ((1L << (uVar6 + 1 & 0x3f) & 0xb4b5dbbU) != 0)) {
            if (uVar6 + 1 < 0x1b) {
              uVar7 = *(undefined8 *)(&UNK_10dddb468 + (uVar6 + 1) * 8);
            }
            else {
              uVar7 = 0;
            }
          }
        }
      }
      else {
LAB_106302a58:
        uVar7 = 2;
      }
      _objc_release(uVar5);
      goto LAB_1063029f4;
    }
    uVar5 = uVar2;
    func_0x00010c27dd80();
    uVar4 = uVar5 + 1;
    if (uVar4 < 0x1c) {
      if ((1L << (uVar4 & 0x3f) & 0xd8de0fdU) != 0) {
        uVar5 = uVar5 + 1;
        uVar7 = 0xffffffffffffffff;
        if ((1L << (uVar5 & 0x3f) & 0x6c6bd77U) == 0) {
          uVar7 = 0;
        }
        uVar1 = 0;
        if (uVar5 < 0x1b) {
          uVar1 = uVar7;
        }
        if ((1L << (uVar5 & 0x3f) & 0xb4b5dbbU) == 0) {
          uVar1 = 1;
        }
        uVar7 = 1;
        if (uVar5 < 0x1c) {
          uVar7 = uVar1;
        }
        goto LAB_1063029f4;
      }
      if (uVar4 == 8) {
        uVar7 = 5;
        goto LAB_1063029f4;
      }
      if (uVar4 == 10) {
        uVar7 = 0xe;
        goto LAB_1063029f4;
      }
    }
  }
  uVar7 = 2;
LAB_1063029f4:
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar7;
}



/* Entry: 106302a60; end: 106302b93; -[SCOperaPerformanceTrackingPlugin dependentPlugins] */

void FUN_106302a60(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9aa0;
  _objc_alloc_init();
  _objc_initWeak(auStack_48,param_1);
  puVar4 = auStack_48;
  _objc_copyWeak(auStack_50,puVar4);
  func_0x00010c18d5a0(puVar1);
  func_0x00010c18d5c0(puVar1);
  ppuVar3 = &puStack_40;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  __Unwind_Resume();
  _objc_retain(puVar4);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    FUN_106300b70(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8f3e0(puVar1);
    _objc_release(ppuVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106302b94; end: 106302c0f;  */

void FUN_106302b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    FUN_106300b70(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8f3e0(param_1);
    _objc_release(param_3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106302c10; end: 106302c13;  */

void FUN_106302c10(void)

{
  return;
}



/* Entry: 106302c14; end: 106302c1f; -[SCOperaPerformanceTrackingPlugin setPlaylistItemController:] */

void FUN_106302c14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xf0,param_3);
  return;
}



/* Entry: 106302c20; end: 106302c23; -[SCOperaPerformanceTrackingPlugin teardown] */

void FUN_106302c20(void)

{
  return;
}



/* Entry: 106302c24; end: 1063030af; -[SCOperaPerformanceTrackingPlugin registeredEventsForOperaSession] */

void FUN_106302c24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_168 = puVar1;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_160 = puVar2;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_158 = puVar3;
  func_0x00010c29f080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_150 = puVar4;
  func_0x00010c29e820();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2330;
  puStack_148 = puVar5;
  func_0x00010bf17ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2330;
  puStack_140 = puVar6;
  func_0x00010bf2e260();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2338;
  puStack_138 = puVar7;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2338;
  puStack_130 = puVar8;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2338;
  puStack_128 = puVar9;
  func_0x00010c0c4e00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b2338;
  puStack_120 = puVar10;
  func_0x00010c0c4de0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2338;
  puStack_118 = puVar11;
  func_0x00010c0c4140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126c95c8;
  puStack_110 = puVar12;
  func_0x00010bf98f20();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2330;
  puStack_108 = puVar13;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c9460;
  puStack_100 = puVar14;
  func_0x00010c0f25a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126c9460;
  puStack_f8 = puVar15;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126c9460;
  puStack_f0 = puVar16;
  func_0x00010c0f2560();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126c9460;
  puStack_e8 = puVar17;
  func_0x00010c0f2580();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126c9460;
  puStack_e0 = puVar18;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126c9460;
  puStack_d8 = puVar19;
  func_0x00010c0f2600();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126c9a10;
  puStack_d0 = puVar20;
  func_0x00010bfcf920();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126b2330;
  puStack_c8 = puVar21;
  func_0x00010c2a6fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126b2330;
  puStack_c0 = puVar22;
  func_0x00010c0e9cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126b2338;
  puStack_b8 = puVar23;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126b2338;
  puStack_b0 = puVar24;
  func_0x00010c12a640();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1126b2338;
  puStack_a8 = puVar25;
  func_0x00010c12a660();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126c9a00;
  puStack_a0 = puVar26;
  func_0x00010c2a3f40();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR_PTR_1126c9a00;
  puStack_98 = puVar27;
  func_0x00010c2a3ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126c9a00;
  puStack_90 = puVar28;
  func_0x00010c2a3e40();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126c9400;
  puStack_88 = puVar29;
  func_0x00010c157400();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR_PTR_1126c9a08;
  puStack_80 = puVar30;
  func_0x00010c0fc7e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = &puStack_168;
  puStack_78 = puVar31;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) &&
     (___stack_chk_fail(), ppuVar32 != (undefined **)0x0)) {
    func_0x00010c0dff20(*(undefined8 *)(puVar1 + 0x68));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063030b0; end: 1063030db; -[SCOperaPerformanceTrackingPlugin _playbackForPageId:] */

void FUN_1063030b0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c0dff20(*(undefined8 *)(param_1 + 0x68));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063030dc; end: 10630310b; -[SCOperaPerformanceTrackingPlugin _storyTellerLinkForCurrentStoryId:] */

void FUN_1063030dc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4a1f8);
  return;
}



/* Entry: 10630310c; end: 10630321f; -[SCOperaPerformanceTrackingPlugin _updateLastPagedEventIfNeeded:params:] */

void FUN_10630310c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x000107cd420c();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar5);
  }
  uVar1 = param_3;
  func_0x000107cd420c();
  if (((uVar1 & 1) != 0) || (uVar1 = param_3, func_0x000107cd4384(), (int)uVar1 != 0)) {
    puVar2 = PTR_PTR_1126c9a28;
    func_0x00010c29d280(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010c2827c0();
    }
    *(ulong *)(param_1 + 0x30) = uVar4;
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106303220; end: 106304e87; -[SCOperaPerformanceTrackingPlugin operaViewDidSendEvent:page:params:] */

void FUN_106303220(undefined *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined **param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  double dVar21;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar15 = PTR_PTR_1126b2e48;
  func_0x00010c2709c0(PTR_PTR_1126b2e48);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_6;
  func_0x00010c0e00e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  puVar4 = param_1;
  _objc_release(ppuVar1);
  _objc_release(puVar15);
  ppuVar1 = param_5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)param_2[0x2a];
  func_0x000108534aa8();
  func_0x00010beda4c0(param_2);
  func_0x00010bedd400(param_2);
  puVar15 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    puVar19 = PTR_PTR_1126b2338;
    func_0x00010c12a660(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar19);
    _objc_release(puVar15);
    if ((int)uVar3 == 0) {
      puVar15 = PTR_PTR_1126b2330;
      func_0x00010c0e9c60(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0720c0();
      _objc_release(puVar15);
      if ((int)uVar3 != 0) {
        ppuVar2 = param_2;
        func_0x00010be74ce0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bec30a0(param_1,param_2);
        _objc_release(ppuVar2);
        puVar15 = PTR_PTR_1126b2348;
        func_0x00010c08c740(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar15);
        if (ppuVar2 != (undefined **)0x0) {
          puVar15 = PTR_PTR_1126b2348;
          func_0x00010c08c740(PTR_PTR_1126b2348);
          _objc_retainAutoreleasedReturnValue();
          ppuVar20 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar15);
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          ppuVar16 = ppuVar20;
          _objc_opt_isKindOfClass(ppuVar20,puVar15);
          ppuVar2 = ppuVar20;
          if (((ulong)ppuVar16 & 1) == 0) {
            ppuVar2 = (undefined **)0x0;
          }
          _objc_retain(ppuVar2);
          _objc_release(ppuVar20);
          ppuVar20 = ppuVar2;
          func_0x00010bf1f3c0();
          _objc_release(ppuVar2);
          if (((ulong)ppuVar20 & 1) == 0) {
            func_0x00010be8f3e0(param_2);
          }
        }
        goto LAB_106303800;
      }
      puVar15 = PTR_PTR_1126b2330;
      func_0x00010c29f080(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0720c0();
      _objc_release(puVar15);
      if ((int)uVar3 != 0) {
        func_0x00010be6df40(param_2);
        goto LAB_106303800;
      }
      puVar15 = PTR_PTR_1126c9a00;
      func_0x00010c2a3f40(PTR_PTR_1126c9a00);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0720c0();
      _objc_release(puVar15);
      if ((int)uVar3 == 0) {
        puVar15 = PTR_PTR_1126c9a00;
        func_0x00010c2a3ec0(PTR_PTR_1126c9a00);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar15);
        if ((int)uVar3 == 0) {
          puVar15 = PTR_PTR_1126c9a00;
          func_0x00010c2a3e40(PTR_PTR_1126c9a00);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_4;
          func_0x00010c0720c0();
          _objc_release(puVar15);
          if ((int)uVar3 == 0) {
            puVar15 = PTR_PTR_1126b2338;
            func_0x00010c0c6900(PTR_PTR_1126b2338);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = param_4;
            func_0x00010c0720c0();
            _objc_release(puVar15);
            ppuVar20 = param_2;
            ppuVar16 = param_2;
            if ((int)uVar3 == 0) {
              puVar15 = PTR_PTR_1126b2338;
              func_0x00010bfe8ca0(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = param_4;
              func_0x00010c0720c0();
              _objc_release(puVar15);
              puVar15 = PTR_PTR_1126b2340;
              if ((int)uVar3 == 0) {
                puVar15 = PTR_PTR_1126b2338;
                func_0x00010c0c4dc0(PTR_PTR_1126b2338);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = param_4;
                func_0x00010c0720c0();
                _objc_release(puVar15);
                if ((int)uVar3 == 0) {
                  puVar15 = PTR_PTR_1126b2338;
                  func_0x00010c0c4de0(PTR_PTR_1126b2338);
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = param_4;
                  func_0x00010c0720c0();
                  _objc_release(puVar15);
                  if ((int)uVar3 == 0) {
                    puVar15 = PTR_PTR_1126b2330;
                    func_0x00010bf3df00(PTR_PTR_1126b2330);
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = param_4;
                    func_0x00010c0720c0();
                    if ((int)uVar3 == 0) {
                      puVar19 = PTR_PTR_1126b2338;
                      func_0x00010c12a640(PTR_PTR_1126b2338);
                      _objc_retainAutoreleasedReturnValue();
                      uVar3 = param_4;
                      func_0x00010c0720c0();
                      _objc_release(puVar19);
                      _objc_release(puVar15);
                      if ((int)uVar3 == 0) {
                        puVar15 = PTR_PTR_1126b2338;
                        func_0x00010c0c4e00(PTR_PTR_1126b2338);
                        _objc_retainAutoreleasedReturnValue();
                        uVar3 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar15);
                        if ((int)uVar3 != 0) {
                          puVar15 = PTR_PTR_1126c9898;
                          func_0x00010c0c6040(PTR_PTR_1126c9898);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar20 = param_6;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar15);
                          puVar15 = PTR__OBJC_CLASS___NSError_1126ae858;
                          _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
                          ppuVar16 = ppuVar20;
                          _objc_opt_isKindOfClass(ppuVar20,puVar15);
                          ppuVar2 = ppuVar20;
                          if (((ulong)ppuVar16 & 1) == 0) {
                            ppuVar2 = (undefined **)0x0;
                          }
                          _objc_retain(ppuVar2);
                          _objc_release(ppuVar20);
                          FUN_106304e88(param_4,ppuVar2);
                          func_0x00010be57140(param_2);
                          FUN_10630276c(param_5);
                          if (ppuVar1 == (undefined **)0x0) {
                            ppuVar20 = (undefined **)0x0;
                          }
                          else {
                            ppuVar20 = param_2;
                            func_0x00010be74ce0(param_2);
                            _objc_retainAutoreleasedReturnValue();
                          }
                          func_0x00010c0ff480(ppuVar20);
                          func_0x00010be541c0(param_2);
                          func_0x00010bec2460(param_2);
                          _objc_release(ppuVar20);
                          _objc_release(ppuVar2);
                          goto LAB_106303800;
                        }
                        puVar15 = PTR_PTR_1126c9460;
                        func_0x00010c0f2620(PTR_PTR_1126c9460);
                        _objc_retainAutoreleasedReturnValue();
                        uVar3 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar15);
                        if ((int)uVar3 != 0) {
                          puVar15 = param_2[7];
                          func_0x00010c259600(puVar15);
                          func_0x00010c20cda0(puVar15);
                          func_0x00010be0c0c0(param_2);
                          func_0x00010be54280(param_2);
                          func_0x00010c138180(param_1,param_2[0xb]);
                          param_2[0xc] = (undefined *)0x0;
                          goto LAB_106303800;
                        }
                        puVar15 = PTR_PTR_1126c9460;
                        func_0x00010c0f25e0(PTR_PTR_1126c9460);
                        _objc_retainAutoreleasedReturnValue();
                        uVar3 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar15);
                        if ((int)uVar3 != 0) {
                          puVar15 = param_2[7];
                          func_0x00010c259600(puVar15);
                          func_0x00010c20cda0(puVar15);
                          func_0x00010be0c0c0(param_2);
                          func_0x00010be54280(param_2);
                          func_0x00010c138180(param_1,param_2[0xb]);
                          param_2[0xc] = (undefined *)0x0;
                          goto LAB_106303800;
                        }
                        puVar15 = PTR_PTR_1126c95c8;
                        func_0x00010bf98f20(PTR_PTR_1126c95c8);
                        _objc_retainAutoreleasedReturnValue();
                        uVar3 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar15);
                        if ((int)uVar3 == 0) {
                          puVar15 = PTR_PTR_1126b2330;
                          func_0x00010c0e9cc0(PTR_PTR_1126b2330);
                          _objc_retainAutoreleasedReturnValue();
                          uVar3 = param_4;
                          func_0x00010c0720c0();
                          _objc_release(puVar15);
                          if ((int)uVar3 != 0) {
                            func_0x00010bedc6c0(param_2);
                            func_0x00010bdf19a0(param_1,param_2);
                            goto LAB_106303800;
                          }
                          puVar15 = PTR_PTR_1126c9a10;
                          func_0x00010bfcf920(PTR_PTR_1126c9a10);
                          _objc_retainAutoreleasedReturnValue();
                          uVar3 = param_4;
                          func_0x00010c0720c0();
                          _objc_release(puVar15);
                          if ((int)uVar3 != 0) {
                            func_0x00010bdde440(param_2);
                            goto LAB_106303800;
                          }
                          puVar15 = PTR_PTR_1126b2330;
                          func_0x00010c2a6fc0(PTR_PTR_1126b2330);
                          _objc_retainAutoreleasedReturnValue();
                          uVar3 = param_4;
                          func_0x00010c0720c0();
                          _objc_release(puVar15);
                          if ((int)uVar3 != 0) {
                            func_0x00010be18280(param_2);
                            puVar15 = PTR_PTR_1126b2348;
                            func_0x00010c089060(PTR_PTR_1126b2348);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar20 = param_6;
                            func_0x00010c0e00e0();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(puVar15);
                            if (ppuVar20 == (undefined **)0x0) {
                              func_0x00010be0c0c0();
                              func_0x00010be0c180();
                            }
                            else {
                              func_0x00010c27dd80();
                              FUN_106305018();
                              func_0x00010c27dd80();
                              func_0x000107cd46f8();
                            }
                            puVar15 = param_2[0xd];
                            func_0x00010bf51e00(puVar15);
                            _objc_retain(param_5);
                            _objc_retain(param_6);
                            func_0x00010bf97ce0(puVar15);
                            _objc_release(puVar15);
                            ppuVar2 = param_5;
                            FUN_10630276c();
                            if (ppuVar2 == (undefined **)0x0) {
                              ppuVar2 = param_2;
                              func_0x00010be74ce0(param_2);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010be46080(param_2);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010be54500(param_2);
                              _objc_release(ppuVar16);
                              _objc_release(ppuVar2);
                            }
                            func_0x00010be54280(param_2);
                            func_0x00010be9fac0(param_2);
                            func_0x00010c138180(param_1,param_2[0xb]);
                            param_2[0xc] = (undefined *)0x0;
                            _objc_release(param_6);
                            ppuVar2 = param_5;
                            param_2 = ppuVar20;
                            goto LAB_1063049f8;
                          }
                          puVar15 = PTR_PTR_1126c9400;
                          func_0x00010c157400(PTR_PTR_1126c9400);
                          _objc_retainAutoreleasedReturnValue();
                          uVar3 = param_4;
                          func_0x00010c0720c0();
                          _objc_release(puVar15);
                          if ((int)uVar3 == 0) {
                            puVar15 = PTR_PTR_1126c9a08;
                            func_0x00010c0fc7e0(PTR_PTR_1126c9a08);
                            _objc_retainAutoreleasedReturnValue();
                            uVar3 = param_4;
                            func_0x00010c0720c0();
                            _objc_release(puVar15);
                            if ((int)uVar3 != 0) {
                              func_0x00010be6a8e0(param_2);
                              goto LAB_106303800;
                            }
                            puVar15 = PTR_PTR_1126b2330;
                            func_0x00010bf17ae0(PTR_PTR_1126b2330);
                            _objc_retainAutoreleasedReturnValue();
                            uVar3 = param_4;
                            func_0x00010c0720c0();
                            _objc_release(puVar15);
                            if ((int)uVar3 == 0) {
                              puVar15 = PTR_PTR_1126b2330;
                              func_0x00010bf2e260(PTR_PTR_1126b2330);
                              _objc_retainAutoreleasedReturnValue();
                              uVar3 = param_4;
                              func_0x00010c0720c0();
                              _objc_release(puVar15);
                              if ((int)uVar3 == 0) {
                                puVar15 = PTR_PTR_1126b2338;
                                func_0x00010c0c4140(PTR_PTR_1126b2338);
                                _objc_retainAutoreleasedReturnValue();
                                uVar3 = param_4;
                                func_0x00010c0720c0();
                                _objc_release(puVar15);
                                if ((int)uVar3 == 0) goto LAB_106303800;
                                puVar15 = PTR_PTR_1126b2348;
                                func_0x00010c2348a0(PTR_PTR_1126b2348);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar20 = param_6;
                                func_0x00010c0e00e0(param_6);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar17 = ppuVar20;
                                func_0x00010bf1f3c0();
                                _objc_release(ppuVar20);
                                _objc_release(puVar15);
                                puVar15 = PTR_PTR_1126b2348;
                                func_0x00010bfe6a20(PTR_PTR_1126b2348);
                                _objc_retainAutoreleasedReturnValue();
                                ppuVar20 = param_6;
                                func_0x00010c0e00e0();
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release(puVar15);
                                puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                                _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                                ppuVar18 = ppuVar20;
                                _objc_opt_isKindOfClass(ppuVar20,puVar15);
                                ppuVar16 = ppuVar20;
                                if (((ulong)ppuVar18 & 1) == 0) {
                                  ppuVar16 = (undefined **)0x0;
                                }
                                _objc_retain(ppuVar16);
                                _objc_release(ppuVar20);
                                ppuVar20 = param_5;
                                FUN_10630d890(param_5);
                                func_0x00010bb06dfc();
                                _objc_retainAutoreleasedReturnValue();
                                puVar15 = param_2[0x10];
                                ppuVar18 = &PTR____CFConstantStringClassReference_110e0a478;
                                if (ppuVar16 != (undefined **)0x0) {
                                  ppuVar18 = ppuVar16;
                                }
                                func_0x00010baf2e2c(ppuVar2);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010b29762c(puVar15,ppuVar17,ppuVar20,ppuVar18,ppuVar2,1);
                                _objc_release(ppuVar16);
                                _objc_release(ppuVar2);
                                goto LAB_106303d14;
                              }
                              puVar15 = param_2[0xf];
                              func_0x00010baf2e2c(ppuVar2);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar20 = &PTR____CFConstantStringClassReference_110daf8b8;
                              param_2 = ppuVar2;
                            }
                            else {
                              puVar15 = param_2[0xf];
                              func_0x00010baf2e2c(ppuVar2);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar20 = &PTR____CFConstantStringClassReference_110dbe218;
                              param_2 = ppuVar2;
                            }
                            FUN_10636e75c(puVar15,ppuVar20,param_2,1);
                          }
                          else {
                            func_0x00010be74ce0();
                            _objc_retainAutoreleasedReturnValue();
                            if (param_2 != (undefined **)0x0) {
                              FUN_1063051b8(param_2,param_6);
                            }
                          }
                        }
                        else {
                          ppuVar2 = param_5;
                          func_0x00010c118b40();
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar20 = ppuVar2;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(ppuVar2);
                          puVar15 = PTR__OBJC_CLASS___NSError_1126ae858;
                          _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
                          ppuVar16 = ppuVar20;
                          _objc_opt_isKindOfClass(ppuVar20,puVar15);
                          ppuVar2 = ppuVar20;
                          if (((ulong)ppuVar16 & 1) == 0) {
                            ppuVar2 = (undefined **)0x0;
                          }
                          _objc_retain(ppuVar2);
                          _objc_release(ppuVar20);
                          if (ppuVar2 == (undefined **)0x0) {
                            puVar15 = PTR_PTR_1126b2348;
                            func_0x00010bf990e0(PTR_PTR_1126b2348);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar2 = param_6;
                            func_0x00010c0e00e0();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(puVar15);
                            puVar15 = PTR__OBJC_CLASS___NSError_1126ae858;
                            _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
                            ppuVar16 = ppuVar2;
                            _objc_opt_isKindOfClass(ppuVar2,puVar15);
                            ppuVar20 = ppuVar2;
                            if (((ulong)ppuVar16 & 1) == 0) {
                              ppuVar20 = (undefined **)0x0;
                            }
                            _objc_retain(ppuVar20);
                            _objc_release(ppuVar2);
                          }
                          FUN_106304e88(param_4,ppuVar20);
                          func_0x00010be57140(param_2);
                          FUN_10630276c(param_5);
                          if (ppuVar1 == (undefined **)0x0) {
                            ppuVar2 = (undefined **)0x0;
                          }
                          else {
                            ppuVar2 = param_2;
                            func_0x00010be74ce0(param_2);
                            _objc_retainAutoreleasedReturnValue();
                          }
                          func_0x00010c0ff480(ppuVar2);
                          func_0x00010be541c0(param_2);
                          func_0x00010bec2460(param_2);
                          param_2 = ppuVar20;
LAB_1063049f8:
                          _objc_release(ppuVar2);
                        }
                        _objc_release(param_2);
                        goto LAB_106303800;
                      }
                    }
                    else {
                      _objc_release(puVar15);
                    }
                    func_0x00010be09c00(param_2);
                    puVar15 = PTR_PTR_1126c9310;
                    func_0x00010c11b200();
                    _objc_retainAutoreleasedReturnValue();
                    puVar19 = puVar15;
                    func_0x00010c25d700();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar15);
                    puVar15 = PTR_PTR_1126b2340;
                    ppuVar2 = param_5;
                    func_0x00010c118b40(param_5);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c06f4e0();
                    if ((int)puVar15 == 0) {
                      _objc_release(ppuVar2);
                    }
                    else {
                      puVar15 = puVar19;
                      func_0x00010c08fa60();
                      _objc_release(ppuVar2);
                      if (puVar15 != (undefined *)0x0) {
                        puVar15 = PTR_PTR_1126c9ab0;
                        func_0x00010c0f2320(PTR_PTR_1126c9ab0);
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar20 = param_6;
                        func_0x00010c0e00e0();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(puVar15);
                        puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                        ppuVar16 = ppuVar20;
                        _objc_opt_isKindOfClass(ppuVar20,puVar15);
                        ppuVar2 = ppuVar20;
                        if (((ulong)ppuVar16 & 1) == 0) {
                          ppuVar2 = (undefined **)0x0;
                        }
                        _objc_retain(ppuVar2);
                        _objc_release(ppuVar20);
                        func_0x00010bf885a0(ppuVar2);
                        _objc_release(ppuVar2);
                        func_0x00010be54720((double)puVar4 * 1000.0,param_2);
                      }
                    }
                    func_0x00010bedd4a0(param_1,param_2);
                    func_0x00010be90080(param_2);
                    puVar15 = PTR_PTR_1126c9a20;
                    func_0x00010c0f1940(PTR_PTR_1126c9a20);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar20 = param_6;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar15);
                    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    ppuVar16 = ppuVar20;
                    _objc_opt_isKindOfClass(ppuVar20,puVar15);
                    ppuVar2 = ppuVar20;
                    if (((ulong)ppuVar16 & 1) == 0) {
                      ppuVar2 = (undefined **)0x0;
                    }
                    _objc_retain(ppuVar2);
                    _objc_release(ppuVar20);
                    ppuVar20 = ppuVar2;
                    func_0x00010bf1f3c0();
                    _objc_release(ppuVar2);
                    if (((int)ppuVar20 == 0) || (*(char *)((long)param_2 + 0x112) == '\x01')) {
                      puVar15 = PTR_PTR_1126b2348;
                      func_0x00010c089060(PTR_PTR_1126b2348);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar2 = param_6;
                      func_0x00010c0e00e0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(puVar15);
                      if (ppuVar2 == (undefined **)0x0) {
                        func_0x00010be0c0c0(param_2);
                        func_0x00010be0c180(param_2);
                      }
                      else {
                        func_0x00010c27dd80(ppuVar2);
                        FUN_106305018();
                        func_0x00010c27dd80(ppuVar2);
                        func_0x000107cd46f8();
                      }
                      ppuVar20 = param_2;
                      func_0x00010be74ce0(param_2);
                      _objc_retainAutoreleasedReturnValue();
                      FUN_106305038(param_5,param_6,param_2[0x1f]);
                      func_0x00010be9faa0(param_2);
                      _objc_release(ppuVar20);
                      _objc_release(ppuVar2);
                    }
                    _objc_release(puVar19);
                    goto LAB_106303800;
                  }
                  if (param_5 == (undefined **)0x0) goto LAB_106303800;
                  puVar15 = param_2[0xd];
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar15 != (undefined *)0x0) goto LAB_106304114;
                }
                else {
                  if (param_5 == (undefined **)0x0) goto LAB_106303800;
                  puVar15 = param_2[0xd];
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar15 == (undefined *)0x0) goto LAB_106303800;
LAB_106304114:
                  ppuVar2 = param_2;
                  func_0x00010be74ce0(param_2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bedd4c0(param_2);
                  _objc_release(ppuVar2);
                }
                FUN_10630276c(param_5);
                puVar15 = PTR_PTR_1126b2348;
                func_0x00010c120300(PTR_PTR_1126b2348);
                _objc_retainAutoreleasedReturnValue();
                ppuVar20 = param_6;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar15);
                puVar15 = PTR__OBJC_CLASS___NSError_1126ae858;
                _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
                ppuVar16 = ppuVar20;
                _objc_opt_isKindOfClass(ppuVar20,puVar15);
                ppuVar2 = ppuVar20;
                if (((ulong)ppuVar16 & 1) == 0) {
                  ppuVar2 = (undefined **)0x0;
                }
                _objc_retain(ppuVar2);
                _objc_release(ppuVar20);
                FUN_106304e88(param_4,ppuVar2);
                func_0x00010be57140(param_2);
                ppuVar20 = param_2;
                func_0x00010be74ce0(param_2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0ff480();
                func_0x00010be541c0(param_2);
                func_0x00010bec2460(param_2);
                _objc_release(ppuVar2);
                goto LAB_106303d14;
              }
              ppuVar2 = param_5;
              func_0x00010c118b40(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c075040();
              _objc_release(ppuVar2);
              if ((int)puVar15 == 0) goto LAB_106303800;
              FUN_10630276c(param_5);
              puVar15 = PTR_PTR_1126b2348;
              func_0x00010c0c4c60(PTR_PTR_1126b2348);
              _objc_retainAutoreleasedReturnValue();
              ppuVar17 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar15);
              puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              ppuVar18 = ppuVar17;
              _objc_opt_isKindOfClass(ppuVar17,puVar15);
              ppuVar2 = ppuVar17;
              if (((ulong)ppuVar18 & 1) == 0) {
                ppuVar2 = (undefined **)0x0;
              }
              _objc_retain(ppuVar2);
              _objc_release(ppuVar17);
              ppuVar17 = ppuVar2;
              func_0x00010c2827c0(ppuVar2);
              _objc_release(ppuVar2);
              func_0x00010bd50910(ppuVar17);
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = param_2;
              func_0x00010be74ce0(param_2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c4680();
              _objc_release(ppuVar2);
              _objc_release(ppuVar17);
              ppuVar2 = param_2;
              func_0x00010be74ce0(param_2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bedd500(param_2);
              _objc_release(ppuVar2);
              func_0x00010be74ce0(param_2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be46080(param_2);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              FUN_10630276c(param_5);
              puVar15 = PTR_PTR_1126b2348;
              func_0x00010c29ad40(PTR_PTR_1126b2348);
              _objc_retainAutoreleasedReturnValue();
              ppuVar17 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar15);
              puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              ppuVar18 = ppuVar17;
              _objc_opt_isKindOfClass(ppuVar17,puVar15);
              ppuVar2 = ppuVar17;
              if (((ulong)ppuVar18 & 1) == 0) {
                ppuVar2 = (undefined **)0x0;
              }
              _objc_retain(ppuVar2);
              _objc_release(ppuVar17);
              func_0x00010bf885a0(ppuVar2);
              _objc_release(ppuVar2);
              ppuVar2 = param_2;
              func_0x00010be74ce0(param_2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bedd4c0(param_2);
              _objc_release(ppuVar2);
              ppuVar2 = param_2;
              func_0x00010be74ce0(param_2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bedd500(param_2);
              _objc_release(ppuVar2);
              func_0x00010be74ce0(param_2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be46080(param_2);
              _objc_retainAutoreleasedReturnValue();
            }
            func_0x00010be54560(param_2);
            _objc_release(ppuVar16);
            _objc_release(ppuVar20);
            func_0x00010be74ce0(param_2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010630cbc0(param_5);
            _objc_retainAutoreleasedReturnValue();
            ppuVar20 = param_2;
          }
          else {
            ppuVar2 = (undefined **)PTR_PTR_1126c9310;
            func_0x00010c11b200();
            _objc_retainAutoreleasedReturnValue();
            ppuVar20 = ppuVar2;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar2);
            puVar15 = PTR_PTR_1126b2340;
            ppuVar2 = param_5;
            func_0x00010c118b40(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c06f4e0();
            if ((int)puVar15 != 0) {
              ppuVar16 = ppuVar20;
              func_0x00010c08fa60();
              _objc_release(ppuVar2);
              if (ppuVar16 != (undefined **)0x0) {
                func_0x00010be546c0(param_2);
              }
              goto LAB_106303d14;
            }
          }
        }
        else {
          ppuVar2 = (undefined **)PTR_PTR_1126c9310;
          func_0x00010c11b200();
          _objc_retainAutoreleasedReturnValue();
          ppuVar20 = ppuVar2;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar2);
          puVar15 = PTR_PTR_1126b2340;
          ppuVar2 = param_5;
          func_0x00010c118b40(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06f4e0();
          if ((int)puVar15 != 0) {
            ppuVar16 = ppuVar20;
            func_0x00010c08fa60();
            _objc_release(ppuVar2);
            if (ppuVar16 != (undefined **)0x0) {
              puVar15 = PTR_PTR_1126c9ab0;
              func_0x00010c2a3ee0(PTR_PTR_1126c9ab0);
              _objc_retainAutoreleasedReturnValue();
              ppuVar16 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar15);
              puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              ppuVar17 = ppuVar16;
              _objc_opt_isKindOfClass(ppuVar16,puVar15);
              ppuVar2 = ppuVar16;
              if (((ulong)ppuVar17 & 1) == 0) {
                ppuVar2 = (undefined **)0x0;
              }
              _objc_retain(ppuVar2);
              _objc_release(ppuVar16);
              func_0x00010c067fc0(ppuVar2);
              _objc_release(ppuVar2);
              func_0x00010be54700(param_2);
            }
            goto LAB_106303d14;
          }
        }
LAB_106303d0c:
        _objc_release();
      }
      else {
        ppuVar2 = (undefined **)PTR_PTR_1126c9310;
        func_0x00010c11b200();
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = ppuVar2;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        puVar15 = PTR_PTR_1126b2340;
        ppuVar2 = param_5;
        func_0x00010c118b40(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06f4e0();
        if ((int)puVar15 == 0) goto LAB_106303d0c;
        ppuVar16 = ppuVar20;
        func_0x00010c08fa60();
        _objc_release(ppuVar2);
        if (ppuVar16 != (undefined **)0x0) {
          puVar15 = PTR_PTR_1126c9ab0;
          func_0x00010c2a3f60(PTR_PTR_1126c9ab0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar16 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar15);
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          ppuVar17 = ppuVar16;
          _objc_opt_isKindOfClass(ppuVar16,puVar15);
          ppuVar2 = ppuVar16;
          if (((ulong)ppuVar17 & 1) == 0) {
            ppuVar2 = (undefined **)0x0;
          }
          _objc_retain(ppuVar2);
          _objc_release(ppuVar16);
          func_0x00010bf885a0(ppuVar2);
          _objc_release(ppuVar2);
          dVar21 = 1.0;
          if (1.0 <= (double)puVar4) {
            func_0x00010beed820(param_2[10]);
            func_0x00010be546e0(dVar21 * 1000.0,param_2);
          }
        }
      }
LAB_106303d14:
      _objc_release(ppuVar20);
      goto LAB_106303800;
    }
  }
  else {
    _objc_release(puVar15);
  }
  func_0x00010bdd3900(param_2);
  puVar15 = PTR_PTR_1126b2348;
  func_0x00010c0c5ec0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_2[5];
  param_2[5] = (undefined *)ppuVar2;
  _objc_release(puVar19);
  _objc_release(puVar15);
  func_0x00010bd55f40();
  param_2[0x21] = puVar4;
  func_0x00010c138180(param_1,param_2[10]);
  func_0x00010bdf1880(param_1,param_2);
  puVar15 = PTR_PTR_1126c9310;
  func_0x00010c11b200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  puVar15 = PTR_PTR_1126c9310;
  func_0x00010bf8c9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126c9310;
  func_0x00010c259500();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9310;
  func_0x00010c158320();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR_PTR_1126c9310;
  func_0x00010bf631e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = ppuVar2;
  func_0x00010c08fa60();
  ppuVar16 = ppuVar2;
  if (ppuVar20 == (undefined **)0x0) {
    ppuVar20 = param_5;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar20);
    puVar6 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    ppuVar17 = ppuVar16;
    _objc_opt_isKindOfClass(ppuVar16,puVar6);
    ppuVar20 = ppuVar16;
    if (((ulong)ppuVar17 & 1) == 0) {
      ppuVar20 = (undefined **)0x0;
    }
    _objc_retain(ppuVar20);
    _objc_release(ppuVar16);
    ppuVar16 = ppuVar20;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar20);
    _objc_release(ppuVar2);
  }
  puVar7 = PTR_PTR_1126c9aa8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_2;
  func_0x00010be74ce0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_5;
  FUN_10630d2d4(param_5,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = param_5;
  func_0x00010630cc9c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = param_2;
  func_0x00010bec4ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9b00;
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar20);
  _objc_retain(ppuVar17);
  _objc_retain(ppuVar18);
  _objc_retain(puVar4);
  _objc_retain(puVar15);
  _objc_retain(ppuVar16);
  _objc_alloc();
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar2;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar2;
  func_0x00010c0c6c20(ppuVar2);
  func_0x00010bc90ccc();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar2;
  func_0x00010c0ff480();
  func_0x00010bb06dfc();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar2;
  func_0x00010c29e220();
  func_0x00010baf2e2c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar2;
  func_0x00010c0d6ca0();
  _objc_release(ppuVar2);
  func_0x00010bb055b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0331e0(puVar6);
  _objc_release(ppuVar1);
  _objc_release(ppuVar20);
  _objc_release(ppuVar17);
  _objc_release(ppuVar18);
  _objc_release(puVar4);
  _objc_release(puVar15);
  _objc_release(ppuVar16);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(puVar9);
  func_0x00010befb100(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(ppuVar18);
  _objc_release(ppuVar17);
  _objc_release(ppuVar20);
  _objc_release(ppuVar2);
  _objc_release(puVar7);
  func_0x00010be90080(param_2);
  _objc_release(ppuVar16);
  _objc_release(puVar5);
  _objc_release(puVar19);
  _objc_release(puVar15);
  _objc_release(puVar4);
LAB_106303800:
  _objc_release(ppuVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106304e88; end: 106305017;  */

undefined8 FUN_106304e88(ulong param_1,undefined **param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c95c8;
  func_0x00010bf98f20(PTR_PTR_1126c95c8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010c0c4dc0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126b2338;
      func_0x00010c0c4e00(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((uVar2 & 1) == 0) {
        puVar1 = PTR_PTR_1126b2338;
        func_0x00010c0c4de0(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        uVar4 = 4;
        if ((int)uVar2 == 0) {
          uVar4 = 0xffffffffffffffff;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 3;
    }
  }
  else {
    ppuVar3 = param_2;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == &PTR____CFConstantStringClassReference_110f617f8) {
      ppuVar3 = param_2;
      func_0x00010bf3ec40();
      _objc_release(&PTR____CFConstantStringClassReference_110f617f8);
      if (ppuVar3 == (undefined **)0x3) {
        uVar4 = 0;
        goto LAB_106304ff0;
      }
    }
    else {
      _objc_release(ppuVar3);
    }
    uVar4 = 1;
  }
LAB_106304ff0:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 106305018; end: 106305037;  */

undefined8 FUN_106305018(ulong param_1)

{
  if (param_1 < 0x15) {
    return *(undefined8 *)(&UNK_10dddb540 + param_1 * 8);
  }
  return 7;
}



/* Entry: 106305038; end: 106305107;  */

uint FUN_106305038(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  func_0x000107dc65c0(param_1,param_3);
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010c07f740(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  return ((uint)uVar3 | (uint)param_1 ^ 0xffffffff) & 1;
}



/* Entry: 106305108; end: 1063051b7;  */

void FUN_106305108(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(lVar1 + 0xf8);
  _objc_retain(param_3);
  _objc_retain(param_2);
  FUN_106305038(uVar2,uVar3,uVar4);
  func_0x00010be9faa0(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063051b8; end: 106305593;  */

void FUN_1063051b8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = param_1;
  func_0x00010c0ff320();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_1;
    func_0x00010c0ff320(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(lVar3);
  }
  puVar5 = PTR_PTR_1126c9b08;
  _objc_opt_new(PTR_PTR_1126c9b08);
  func_0x00010c21acc0();
  puVar6 = PTR_PTR_1126c9408;
  func_0x00010c1570e0(PTR_PTR_1126c9408);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar6);
  uVar1 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  func_0x00010c0b4ca0(uVar1);
  _objc_release(uVar1);
  func_0x00010c1c53a0(puVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar9 = PTR_PTR_1126c9408;
  func_0x00010c157060(PTR_PTR_1126c9408);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar9);
  uVar1 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  func_0x00010c067fc0();
  _objc_release(uVar1);
  puVar9 = PTR_PTR_1126c9408;
  func_0x00010c157060(PTR_PTR_1126c9408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126c9408;
  func_0x00010c157360(PTR_PTR_1126c9408);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar9);
  uVar1 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0b4ca0(uVar1);
  _objc_release(uVar1);
  func_0x00010c0df7c0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9408;
  func_0x00010c157360(PTR_PTR_1126c9408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar9);
  puVar9 = puVar6;
  func_0x000107cd4a6c(puVar6,0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 != (undefined *)0x0) {
    func_0x00010c1d8f80(puVar5);
  }
  puVar10 = PTR_PTR_1126c9408;
  func_0x00010c1570a0(PTR_PTR_1126c9408);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar10);
  uVar1 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  func_0x00010c26f320(uVar1);
  _objc_release(uVar1);
  func_0x00010c193e80(puVar5);
  func_0x00010befa120(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c1dd5a0(param_1);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106305594; end: 1063055df; -[SCOperaPerformanceTrackingPlugin _entryIntentForCurrentPage] */

long FUN_106305594(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c23fa00();
  if ((lVar1 == 0) && (*(long *)(param_1 + 0x10) != -1)) {
    return *(long *)(param_1 + 0x10);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x70);
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar3);
  if (lVar1 == 0) {
    unaff_x21 = lVar3;
    func_0x000107cd4574(lVar3);
  }
  else if (lVar2 + 1U < 2) {
    func_0x000107cd48ac(lVar1,lVar3);
    unaff_x21 = lVar1;
  }
  else if (lVar2 == 1) {
    func_0x000107cd4738(lVar1,lVar3);
    unaff_x21 = lVar1;
  }
  _objc_release(lVar3);
  return unaff_x21;
}



/* Entry: 1063055e0; end: 10630563b; -[SCOperaPerformanceTrackingPlugin _entryEventForCurrentPage] */

long FUN_1063055e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c23fa00();
  if ((lVar1 == 0) && (*(long *)(param_1 + 8) != -1)) {
    return *(long *)(param_1 + 8);
  }
  uVar2 = *(ulong *)(param_1 + 0x30);
  if (uVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x70);
    _objc_retain();
    lVar1 = lVar3;
    if (lVar4 + 1U < 2) {
      func_0x000107cd3dfc(lVar3);
    }
    else if (lVar4 == 1) {
      func_0x000107cd3f84(lVar3);
    }
    else {
      lVar1 = -1;
    }
    _objc_release(lVar3);
    return lVar1;
  }
  if (0x14 < uVar2) {
    return 4;
  }
  return *(long *)(&UNK_10dee57c0 + uVar2 * 8);
}



/* Entry: 10630563c; end: 106305a47; -[SCOperaPerformanceTrackingPlugin _createPlaybackForPage:withTime:] */

void FUN_10630563c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  func_0x000108534aa8(*(undefined8 *)(param_2 + 0x150));
  uVar1 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010be74ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar7 == 0) && (uVar2 = param_4, func_0x00010c23e320(), (uVar2 & 1) == 0)) {
    func_0x00010be0aa40(param_2);
    lVar7 = param_2;
    func_0x00010be0aae0();
    if (*(long *)(param_2 + 0x28) == 0) {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_2 + 0x28);
      *(long *)(param_2 + 0x28) = lVar7;
      _objc_release(uVar8);
    }
    func_0x00010c137fe0(*(undefined8 *)(param_2 + 0x40));
    puVar3 = PTR_PTR_1126c9ab8;
    _objc_opt_new(PTR_PTR_1126c9ab8);
    func_0x00010c222c00();
    func_0x00010c1d5880(puVar3);
    func_0x00010630dac4(param_4);
    func_0x00010c1ddc40(puVar3);
    func_0x00010c196820(puVar3);
    func_0x00010c196920(puVar3);
    FUN_10630276c(param_4);
    func_0x00010c1c5440(puVar3);
    puVar5 = PTR_PTR_1126b2340;
    uVar2 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077260(puVar5);
    func_0x00010c1b2620(puVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010630cdf4(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4820(puVar3);
    _objc_release(uVar2);
    func_0x00010c1cba40(puVar3);
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c23fa00(uVar8);
    func_0x00010c203cc0(uVar8);
    func_0x00010c23fa00(*(undefined8 *)(param_2 + 0x38));
    func_0x00010c205b20(puVar3);
    func_0x00010c1c4ee0(puVar3);
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c0eb3e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d56e0(puVar3);
    _objc_release(uVar8);
    uVar2 = param_4;
    FUN_10630d2d4(param_4,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar3);
    _objc_release(uVar2);
    func_0x00010c1c4f00(puVar3);
    uVar2 = param_4;
    FUN_10630cf00(param_4,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181f40(puVar3);
    _objc_release(uVar2);
    func_0x00010c1d8220(puVar3);
    func_0x00010630d890(param_4);
    func_0x00010c1dd600(puVar3);
    func_0x00010bed9f40(param_2);
    puVar4 = PTR_PTR_1126c9ac0;
    _objc_opt_new(PTR_PTR_1126c9ac0);
    FUN_106305a48(param_4);
    func_0x00010c1e3cc0(puVar4);
    puVar5 = PTR_PTR_1126c9a58;
    uVar2 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4220(puVar5);
    func_0x00010c163f80(puVar4);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126c9a58;
    uVar2 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef60e0(puVar5);
    func_0x00010c164dc0(puVar4);
    _objc_release(uVar2);
    func_0x00010c1e3b60(puVar3);
    *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + 1;
    uVar2 = param_4;
    func_0x000107dc65c0(param_4,*(undefined8 *)(param_2 + 0xf8));
    func_0x00010c2092a0(puVar3);
    if ((uVar2 & 1) == 0) {
      func_0x00010c251c40(param_1,*(undefined8 *)(param_2 + 0x40));
      puVar5 = PTR_PTR_1126b7410;
      func_0x00010c22b6a0(PTR_PTR_1126b7410);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf5e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16efa0(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    lVar7 = *(long *)(param_2 + 0x38);
    func_0x00010c23fa00();
    if (lVar7 == 1) {
      func_0x00010c2092a0(*(undefined8 *)(param_2 + 0x38));
    }
    func_0x00010c1d0560(*(undefined8 *)(param_2 + 0x68));
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106305a48; end: 106305bbf;  */

ulong FUN_106305a48(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar4 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar1 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    if (uVar1 == 0) {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar1 = param_1;
      func_0x00010c118b40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c067fc0();
      func_0x000108442d48();
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
  }
  else {
    uVar1 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar4 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c067ec0(uVar4);
    _objc_release(uVar4);
    uVar4 = (ulong)(int)uVar1;
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 106305bc0; end: 106305c2f; -[SCOperaPerformanceTrackingPlugin _stopOperaPageViewSessionTimerIfNecessaryWithPlayback:time:] */

void FUN_106305bc0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x50);
  func_0x00010c07cd60();
  if (iVar1 != 0) {
    func_0x00010c0f6260(param_1,*(undefined8 *)(param_2 + 0x50));
    func_0x00010beed820(*(undefined8 *)(param_2 + 0x50));
    func_0x00010c1d5560(param_4,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106305c30; end: 106305c9f; -[SCOperaPerformanceTrackingPlugin _stopInitialLoadingTimerIfNecessaryPlayback:withTime:] */

void FUN_106305c30(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
  func_0x00010c07cd60();
  if (iVar1 != 0) {
    func_0x00010c0f6260(param_1,*(undefined8 *)(param_2 + 0x40));
    func_0x00010beed820(*(undefined8 *)(param_2 + 0x40));
    func_0x00010c1acb20(param_4,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106305ca0; end: 106305f07; -[SCOperaPerformanceTrackingPlugin _updatePlaybackWithMediaParams:page:playback:] */

void FUN_106305ca0(ulong param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) goto LAB_106305ed8;
  lVar1 = 0;
  FUN_10630d2d4(0,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  FUN_10630cf00(0,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c1c4880(param_5);
  }
  if (lVar2 != 0) {
    func_0x00010c181f40(param_5);
  }
  lVar3 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    lVar3 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf1f3c0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((int)lVar5 != 0) goto LAB_106305dd0;
  }
  else {
LAB_106305dd0:
    func_0x00010c1c4f00(param_5);
  }
  lVar3 = param_5;
  func_0x00010c100300();
  if (lVar3 == 0) {
    puVar6 = PTR_PTR_1126b2348;
    func_0x00010c29aa80(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1dd8c0(param_5);
    _objc_release(lVar3);
    _objc_release(puVar6);
  }
  uVar7 = param_1;
  func_0x00010beb44e0();
  if ((uVar7 & 1) == 0) {
    lVar3 = param_3;
    func_0x00010630dbd8();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = param_3;
      func_0x00010630dd38(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010630dc88(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea6d20(param_1);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  func_0x00010bed9f40(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_106305ed8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106305f08; end: 1063060a3; -[SCOperaPerformanceTrackingPlugin _updateItemAttributionInfoIfNeededWithPage:playback:] */

void FUN_106305f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c084c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126b2340;
  if (lVar1 == 0) {
    uVar2 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084360(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x00010c0844e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b5f20(param_4,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010c084c60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6360(param_4,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010c084c80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6380(param_4,param_2,puVar4);
      _objc_release(puVar4);
    }
    puVar4 = puVar3;
    func_0x00010c084180();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
      func_0x00010b0ee7e8(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebf580(param_1,param_2,puVar4,uVar2);
      _objc_release(uVar2);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063060a4; end: 1063060ab; -[SCOperaPerformanceTrackingPlugin _shouldLoadAnalyticsFromMonitor] */

undefined8 FUN_1063060a4(void)

{
  return 0;
}



/* Entry: 1063060ac; end: 1063062fb; -[SCOperaPerformanceTrackingPlugin _reportPlayerSignalForPage:isPageDisplaying:] */

void FUN_1063060ac(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2340;
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_1063062d4;
  uVar7 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar2 = puVar1;
  func_0x00010c084180();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010b0ee7e8();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010be74ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if ((param_4 & 1) == 0) {
      uVar7 = uVar4;
      func_0x00010c29e4e0();
      uVar7 = uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU);
      uVar5 = uVar4;
      func_0x00010c100480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 == 0) goto LAB_106306280;
      uVar7 = param_3;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x138);
      _objc_retain(uVar6);
      uVar5 = uVar4;
      func_0x00010c100480(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar3);
      _objc_retain(uVar7);
      _objc_retain(uVar6);
      func_0x00010c297260(uVar5);
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_release(puVar3);
      _objc_release(uVar6);
      _objc_release(uVar6);
    }
    else {
      uVar7 = 0;
LAB_106306280:
      FUN_106306354(uVar7,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa9e0(*(undefined8 *)(param_1 + 0x138));
    }
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_1063062d4:
  _objc_release(param_3);
  return;
}



/* Entry: 1063062fc; end: 106306353;  */

void FUN_1063062fc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    if (param_3 != 0) {
      param_2 = 0;
    }
    FUN_106306354(uVar1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106306354; end: 1063064a7;  */

void FUN_106306354(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b8068;
  _objc_alloc(PTR_PTR_1126b8068);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_2 == 0) {
    func_0x00010c029b20(puVar1);
  }
  else {
    func_0x00010c24d5c0(param_2);
    func_0x00010c0df760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c276ce0(param_2);
    func_0x00010c0df760(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar4 = param_2;
    func_0x00010c29b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8ab60();
    func_0x00010c0df760(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029b20(puVar1);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063064a8; end: 10630667b; -[SCOperaPerformanceTrackingPlugin _startAnalyticsInfoResolveOperationForContentKey:pageId:] */

void FUN_1063064a8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != 0) && (param_4 != 0)) &&
     (lVar1 = param_1, func_0x00010beb44e0(), (int)lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + 0xe0);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010b0ee7e8();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010bf51e00();
      _objc_initWeak(auStack_58,param_1);
      puVar3 = PTR_PTR_1126b7040;
      func_0x00010c22be80(PTR_PTR_1126b7040);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(lVar1);
      _objc_retain(lVar2);
      puVar4 = puVar3;
      func_0x00010bf1d460(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010befa340(*(undefined8 *)(param_1 + 0xe8));
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xe0));
      _objc_release(puVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10630667c; end: 1063067b3;  */

void FUN_10630667c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x130);
    func_0x00010bfc2440();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x00010c297760();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_48,param_1 + 0x30);
        _objc_retain(lVar3);
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar5);
        func_0x00010c0f7fc0(lVar4);
        _objc_release(lVar4);
        _objc_release(uVar5);
        _objc_release(lVar3);
        _objc_destroyWeak(auStack_48);
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1063067b4; end: 1063067ef;  */

void FUN_1063067b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bedd4e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063067f0; end: 1063068af; -[SCOperaPerformanceTrackingPlugin _updatePlaybackWithVariantInfo:pageId:] */

void FUN_1063067f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be74ce0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c15a360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_3;
      func_0x00010c13ae80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea6d20(param_1,param_2,lVar1,lVar2,lVar3,0,
                          &PTR____CFConstantStringClassReference_110e4a258);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063068b0; end: 106306b2b; -[SCOperaPerformanceTrackingPlugin _setResolvedVariantForPlayback:variantInfo:selectionTimestampMs:prefetchTrigger:reason:] */

void FUN_1063068b0(long param_1,undefined8 param_2,undefined *param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  ppuVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 != (undefined *)0x0) && (param_4 != (undefined **)0x0)) {
    puVar1 = param_3;
    func_0x00010c297900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 == (undefined *)0x0) {
      func_0x00010c2a5040(param_4);
      func_0x00010c1ecc80(param_3);
      func_0x00010bfe0640(param_4);
      func_0x00010c1ecbe0(param_3);
      func_0x00010c2a11a0(param_4);
      func_0x00010c1ecc20(param_3);
      func_0x00010bf3efc0();
      func_0x00010c1ecc60(param_3);
      func_0x00010bf1c860(param_4);
      func_0x00010c1ecba0(param_3);
      func_0x00010c297440(param_4);
      func_0x00010c1ecc40(param_3);
      ppuVar2 = param_4;
      FUN_10630dde8(param_4,param_5,(long)*(double *)(param_1 + 0x108),param_6);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = (undefined **)0x1;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c2205e0(param_3);
      _objc_release(puVar1);
      _objc_release(ppuVar2);
      puVar1 = param_3;
      func_0x00010c297900();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar3;
        func_0x00010bf0a640(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar4;
        func_0x00010c0d3c80();
        _objc_release(puVar4);
        func_0x00010c1d0640(puVar1);
        puVar5 = param_3;
        func_0x00010c0f12c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = &PTR____CFConstantStringClassReference_110e4a298;
        puVar4 = puVar5;
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar5);
        _objc_release(puVar1);
      }
      _objc_release(puVar3);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b2340;
  if (ppuVar6 != (undefined **)0x0) {
    _objc_retain(ppuVar6);
    _objc_retain(puVar4);
    func_0x00010c29f5a0(puVar1);
    func_0x00010c13a440(PTR_PTR_1126b2340);
    _objc_release(puVar4);
    func_0x00010c223660(ppuVar6);
    func_0x00010c223420(ppuVar6);
    func_0x00010c1eca80(ppuVar6);
    func_0x00010c1eca40(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
    return;
  }
  return;
}



/* Entry: 106306b2c; end: 106306be7; -[SCOperaPerformanceTrackingPlugin _updatePlaybackWithViewportParams:playback:] */

void FUN_106306b2c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  puVar1 = PTR_PTR_1126b2340;
  if (param_6 != 0) {
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010c29f5a0(puVar1,param_4,param_5);
    dVar2 = param_1;
    dVar3 = param_2;
    func_0x00010c13a440(PTR_PTR_1126b2340,param_4,param_5);
    _objc_release(param_5);
    func_0x00010c223660(param_6,param_4,(long)param_1);
    func_0x00010c223420(param_6,param_4,(long)param_2);
    func_0x00010c1eca80(param_6,param_4,(long)dVar2);
    func_0x00010c1eca40(param_6,param_4,(long)dVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_6);
    return;
  }
  return;
}



/* Entry: 106306be8; end: 1063079b3; -[SCOperaPerformanceTrackingPlugin _updatePlaybackUponPageCloseWithParams:page:time:] */

void FUN_106306be8(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  puVar4 = puVar2;
  func_0x00010be74ce0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) goto LAB_106307934;
  func_0x00010bec30a0(param_1,param_2);
  param_6 = puVar3;
  func_0x00010bedd4c0(param_2);
  puVar16 = param_4;
  func_0x00010c0ffc00(PTR_PTR_1126c9a40);
  func_0x00010c1dd720(puVar3);
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c100480(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd960(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010bf8b340(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    func_0x00010c0b4ca0(puVar5);
    func_0x00010c1c45e0(puVar3);
  }
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c29b580(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224320(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar4);
  func_0x00010bec3560(param_2);
  puVar4 = PTR_PTR_1126c9680;
  func_0x00010c09d020(PTR_PTR_1126c9680);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar7 = puVar6;
  _objc_opt_isKindOfClass(puVar6,puVar4);
  puVar4 = puVar6;
  if (((ulong)puVar7 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  _objc_release(puVar6);
  puVar6 = puVar4;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    func_0x00010c1bed60(puVar3);
    puVar6 = PTR_PTR_1126c9680;
    func_0x00010c09cfa0(PTR_PTR_1126c9680);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar8 = puVar7;
    _objc_opt_isKindOfClass(puVar7,puVar6);
    puVar6 = puVar7;
    if (((ulong)puVar8 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar7);
    func_0x00010bf885a0(puVar6);
    _objc_release(puVar6);
    func_0x00010c1bed00(puVar3);
    puVar6 = PTR_PTR_1126c9680;
    func_0x00010c09d060(PTR_PTR_1126c9680);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar8 = puVar7;
    _objc_opt_isKindOfClass(puVar7,puVar6);
    puVar6 = puVar7;
    if (((ulong)puVar8 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar7);
    func_0x00010bf885a0(puVar6);
    _objc_release(puVar6);
    func_0x00010c1bed80(puVar3);
    puVar6 = PTR_PTR_1126c9680;
    func_0x00010c09cf40(PTR_PTR_1126c9680);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar8 = puVar7;
    _objc_opt_isKindOfClass(puVar7,puVar6);
    puVar6 = puVar7;
    if (((ulong)puVar8 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar7);
    func_0x00010c067ec0(puVar6);
    _objc_release(puVar6);
    func_0x00010c1beca0(puVar3);
  }
  puVar6 = PTR_PTR_1126c9680;
  func_0x00010bf9bbc0(PTR_PTR_1126c9680);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar8 = puVar7;
  _objc_opt_isKindOfClass(puVar7,puVar6);
  puVar6 = puVar7;
  if (((ulong)puVar8 & 1) == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(puVar7);
  func_0x00010bf1f3c0(puVar6);
  _objc_release(puVar6);
  func_0x00010c198680(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c064440(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar7 = puVar6;
  _objc_opt_isKindOfClass(puVar6,puVar4);
  puVar4 = puVar6;
  if (((ulong)puVar7 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  _objc_release(puVar6);
  func_0x00010bf885a0(puVar4);
  param_1 = param_1 * 1000.0;
  func_0x00010bf885a0(puVar4);
  if ((0.0 < param_1) || (puVar6 = puVar3, func_0x00010c063fa0(), 0 < (long)puVar6)) {
    func_0x00010c2092a0(puVar3);
    func_0x00010c063fa0(puVar3);
    func_0x00010c209200(puVar3);
    lVar9 = *(long *)(param_2 + 0x38);
    func_0x00010c23fa00();
    if (lVar9 == 1) {
      func_0x00010c2092a0(*(undefined8 *)(param_2 + 0x38));
    }
  }
  puVar6 = PTR_PTR_1126b2348;
  func_0x00010c276c80(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar8 = puVar7;
  _objc_opt_isKindOfClass(puVar7,puVar6);
  puVar6 = puVar7;
  if (((ulong)puVar8 & 1) == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(puVar7);
  if (puVar6 != (undefined *)0x0) {
    func_0x00010c0b4ca0(puVar7);
    func_0x00010bf885a0(puVar4);
    func_0x00010c1c79a0(puVar3);
  }
  puVar7 = PTR_PTR_1126b2348;
  func_0x00010c276ca0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar10 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar7);
  puVar7 = puVar8;
  if (((ulong)puVar10 & 1) == 0) {
    puVar7 = (undefined *)0x0;
  }
  _objc_retain(puVar7);
  _objc_release(puVar8);
  if (puVar7 != (undefined *)0x0) {
    func_0x00010bf885a0(puVar8);
    param_1 = param_1 * 1000.0;
    func_0x00010c1c79c0(puVar3);
  }
  uVar17 = *(undefined8 *)(param_2 + 0xf8);
  _objc_retain(param_4);
  puVar8 = param_5;
  func_0x000107dc65c0(param_5,uVar17);
  if ((int)puVar8 != 0) {
    puVar8 = PTR_PTR_1126b2348;
    func_0x00010c07f740(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar18 = puVar10;
    _objc_opt_isKindOfClass(puVar10,puVar8);
    puVar8 = puVar10;
    if (((ulong)puVar18 & 1) == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
    _objc_release(puVar10);
    if (puVar8 != (undefined *)0x0) {
      func_0x00010bf1f3c0();
    }
    _objc_release(puVar8);
  }
  _objc_release(param_4);
  func_0x00010c209280(puVar3);
  puVar8 = PTR_PTR_1126b2348;
  iVar1 = *(int *)(param_2 + 0x118);
  _objc_retain(param_4);
  func_0x00010c0b51c0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar18 = puVar10;
  _objc_opt_isKindOfClass(puVar10,puVar8);
  puVar8 = puVar10;
  if (((ulong)puVar18 & 1) == 0) {
    puVar8 = (undefined *)0x0;
  }
  _objc_retain(puVar8);
  _objc_release(puVar10);
  if (puVar8 == (undefined *)0x0) {
    param_2[0x111] = 0;
  }
  else {
    func_0x00010bf885a0(puVar10);
    _objc_release(puVar10);
    param_2[0x111] = (double)iVar1 < param_1 * 1000.0;
    if (((double)iVar1 < param_1 * 1000.0) && ((param_2[0x110] & 1) == 0)) {
      puVar8 = PTR_PTR_1126b2348;
      func_0x00010c0b51a0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar18 = puVar10;
      _objc_opt_isKindOfClass(puVar10,puVar8);
      puVar8 = puVar10;
      if (((ulong)puVar18 & 1) == 0) {
        puVar8 = (undefined *)0x0;
      }
      _objc_retain(puVar8);
      _objc_release(puVar10);
      if (puVar8 != (undefined *)0x0) {
        func_0x00010c067fc0(puVar10);
        puVar10 = param_2;
        func_0x00010bdd2940();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_2 + 0x120);
        *(undefined **)(param_2 + 0x120) = puVar10;
        _objc_release(uVar17);
      }
      _objc_release(puVar8);
    }
  }
  puVar10 = puVar3;
  func_0x00010c063fa0();
  puVar18 = puVar3;
  func_0x00010bf157c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar8 = PTR_PTR_1126b2348;
  _objc_retain(param_4);
  func_0x00010c24d6e0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar12 = puVar11;
  _objc_opt_isKindOfClass(puVar11,puVar8);
  puVar8 = puVar11;
  if (((ulong)puVar12 & 1) == 0) {
    puVar8 = (undefined *)0x0;
  }
  _objc_retain(puVar8);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126c9b10;
  if (puVar10 == (undefined *)0x0) {
    _objc_retain(puVar8);
    puVar10 = puVar8;
  }
  else {
    _objc_retain(puVar18);
    _objc_opt_new();
    func_0x00010c21acc0();
    func_0x00010c16ef80(puVar11);
    _objc_release(puVar18);
    func_0x00010c192e60(puVar11);
    func_0x00010c193e80(puVar11);
    func_0x00010c1c53a0(puVar11);
    func_0x00010c1b4a60(puVar11);
    puVar16 = (undefined *)0x1;
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar12;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  _objc_release(puVar18);
  func_0x00010c1d57c0(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar18);
  puVar10 = puVar3;
  func_0x00010c0eb540();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar10;
  func_0x00010bf529e0();
  _objc_retain(param_4);
  puVar8 = PTR_PTR_1126b2348;
  func_0x00010c24d6e0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar12 = puVar11;
  _objc_opt_isKindOfClass(puVar11,puVar8);
  puVar8 = puVar11;
  if (((ulong)puVar12 & 1) == 0) {
    puVar8 = (undefined *)0x0;
  }
  _objc_retain(puVar8);
  _objc_release(puVar11);
  puVar12 = PTR_PTR_1126b2348;
  func_0x00010c0d8120(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar14 = puVar13;
  _objc_opt_isKindOfClass(puVar13,puVar12);
  puVar12 = puVar13;
  if (((ulong)puVar14 & 1) == 0) {
    puVar12 = (undefined *)0x0;
  }
  _objc_retain(puVar12);
  _objc_release(puVar13);
  if (puVar12 == (undefined *)0x0) {
LAB_1063076dc:
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar14 = puVar13;
    func_0x00010bf529e0();
    puVar15 = puVar8;
    func_0x00010bf529e0();
    if (puVar15 < puVar14) goto LAB_1063076dc;
    if ((puVar8 != (undefined *)0x0) && (func_0x00010bf529e0(), puVar11 <= puVar18)) {
      func_0x00010bf529e0();
    }
    puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_a8 = &puStack_b0;
    puStack_b0 = (undefined *)0x0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_10630cb44;
    uStack_90 = 0x10630cb54;
    func_0x00010bf529e0(puVar13);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puVar18;
    func_0x00010bf97ce0(puVar13);
    puVar18 = ppuStack_a8[5];
    func_0x00010bf51e00();
    __Block_object_dispose(&puStack_b0,8);
    _objc_release(puStack_88);
  }
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(param_4);
  func_0x00010c1cc760(puVar3);
  _objc_release(puVar18);
  _objc_release(puVar10);
  func_0x00010c209280(*(undefined8 *)(param_2 + 0x38));
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c0c4a80(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126b2348;
    func_0x00010bfe74e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  else {
    _objc_retain(puVar6);
    puVar8 = puVar6;
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar6 = PTR_PTR_1126c9ab0;
  func_0x00010c0f2340();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_4;
  puVar4 = puVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar8;
  if ((puVar8 != (undefined *)0x0) || (puVar6 = puVar7, puVar7 != (undefined *)0x0)) {
    func_0x00010c0b4ca0();
    func_0x00010c222d00(puVar3);
    puVar4 = puVar6;
  }
  puVar6 = puVar3;
  func_0x00010c0c6c20();
  if (puVar6 == (undefined *)0x0) {
    puVar4 = param_5;
    FUN_10630276c();
    func_0x00010c1c5440(puVar3);
  }
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar5);
LAB_106307934:
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&puStack_b0,8);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _objc_retain(puVar16);
  _objc_retain(param_6);
  if (puVar4 != (undefined *)0x0) {
    puVar2 = param_4;
    func_0x00010be74ce0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126b2330;
      func_0x00010c29e820(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar16;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)puVar5 != 0) {
        puVar3 = PTR_PTR_1126b2348;
        func_0x00010c0c6fc0(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126c9a40;
        if (puVar5 == (undefined *)0x0) {
          puVar6 = PTR_PTR_1126c9ac8;
          func_0x00010c100ae0(PTR_PTR_1126c9ac8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          if (puVar3 != (undefined *)0x0) {
            lVar9 = *(long *)(param_4 + 0xd8);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar9 == 0) {
              puVar6 = PTR_PTR_1126c9ac8;
              func_0x00010c0c7000(PTR_PTR_1126c9ac8);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar6);
              puVar6 = PTR_PTR_1126c9ac8;
              func_0x00010c100b20(PTR_PTR_1126c9ac8);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar8 == (undefined *)0x0) {
                puVar10 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
                func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                _objc_retain(puVar8);
                puVar10 = puVar8;
              }
              _objc_release(puVar8);
              _objc_release(puVar6);
              puVar6 = puVar2;
              func_0x00010c100300(puVar2);
              func_0x00010be0dc00((double)(long)puVar6,param_4);
              _objc_release(puVar10);
              _objc_release(puVar7);
            }
          }
        }
        else {
          puVar6 = puVar2;
          func_0x00010c100300(puVar2);
          func_0x00010c0c6c20(puVar2);
          func_0x00010bf51600((double)(long)puVar6,puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef9c00(puVar2);
        }
        _objc_release(puVar3);
        _objc_release(puVar5);
      }
    }
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1063079b4; end: 106307c5b; -[SCOperaPerformanceTrackingPlugin _updatePlaybackInfoExtractedFromPlayerIfNeeded:event:params:] */

void FUN_1063079b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010be74ce0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126b2330;
      func_0x00010c29e820(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0720c0(param_4,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)uVar3 != 0) {
        puVar2 = PTR_PTR_1126b2348;
        func_0x00010c0c6fc0(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_5;
        func_0x00010c0e00e0(param_5,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126c9a40;
        if (puVar4 == (undefined *)0x0) {
          puVar6 = PTR_PTR_1126c9ac8;
          func_0x00010c100ae0(PTR_PTR_1126c9ac8);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = param_5;
          func_0x00010c0e00e0(param_5,param_2,puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          if (puVar2 != (undefined *)0x0) {
            lVar7 = *(long *)(param_1 + 0xd8);
            func_0x00010c0e00e0(lVar7,param_2,param_3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar7 == 0) {
              puVar6 = PTR_PTR_1126c9ac8;
              func_0x00010c0c7000(PTR_PTR_1126c9ac8);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = param_5;
              func_0x00010c0e00e0(param_5,param_2,puVar6);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar6);
              puVar6 = PTR_PTR_1126c9ac8;
              func_0x00010c100b20(PTR_PTR_1126c9ac8);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = param_5;
              func_0x00010c0e00e0(param_5,param_2,puVar6);
              _objc_retainAutoreleasedReturnValue();
              if (puVar9 == (undefined *)0x0) {
                puVar10 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
                func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                _objc_retain(puVar9);
                puVar10 = puVar9;
              }
              _objc_release(puVar9);
              _objc_release(puVar6);
              lVar7 = lVar1;
              func_0x00010c100300(lVar1);
              func_0x00010be0dc00((double)lVar7,param_1,param_2,puVar2,puVar10,puVar8,param_3);
              _objc_release(puVar10);
              _objc_release(puVar8);
            }
          }
        }
        else {
          lVar7 = lVar1;
          func_0x00010c100300(lVar1);
          lVar5 = lVar1;
          func_0x00010c0c6c20(lVar1);
          func_0x00010bf51600((double)lVar7,puVar2,param_2,puVar4,lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef9c00(lVar1,param_2,puVar2);
        }
        _objc_release(puVar2);
        _objc_release(puVar4);
      }
    }
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106307c5c; end: 106307d6f; -[SCOperaPerformanceTrackingPlugin _extractPlaybackSnapshotFromPlayerItem:onQueue:mediaVariantRegex:mediaStartDisplayTs:pageId:] */

void FUN_106307c5c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010bebdb40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa3e0(param_5);
  _objc_release(param_5);
  _objc_release(puVar2);
  lVar4 = lVar1;
  uVar5 = param_7;
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xd8));
  _objc_release(param_7);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  _objc_retain(uVar5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_b8,lVar1);
  _objc_retain(uVar5);
  puVar2 = PTR_PTR_1126b7040;
  func_0x00010c22be80(PTR_PTR_1126b7040);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  _objc_retain(param_6);
  _objc_retain(lVar4);
  uStack_c0 = param_1;
  _objc_copyWeak(auStack_c8,auStack_b8);
  puVar3 = puVar2;
  func_0x00010bf1d460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_c8);
  _objc_release(lVar4);
  _objc_release(param_6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_b8);
  _objc_release(param_6);
  _objc_release(uVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106307d70; end: 106307efb; -[SCOperaPerformanceTrackingPlugin _snapshotResolveOperationForPageId:playerItem:mediaVariantRegex:mediaStartDisplayTs:] */

void FUN_106307d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_2);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b7040;
  func_0x00010c22be80(PTR_PTR_1126b7040);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uStack_60 = param_1;
  _objc_copyWeak(auStack_68,auStack_58);
  puVar2 = puVar1;
  func_0x00010bf1d460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106307efc; end: 1063082ef;  */

void FUN_106307efc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107de87b4(lVar1,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar15 = 0.0;
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010beecca0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = 0;
    lVar14 = *plStack_200;
    do {
      lVar10 = 0;
      do {
        if (*plStack_200 != lVar14) {
          _objc_enumerationMutation(lVar4);
        }
        lVar13 = *(long *)(lStack_208 + lVar10 * 8);
        lVar5 = lVar13;
        func_0x00010c0decc0();
        if (0 < lVar5) {
          puVar6 = PTR_PTR_1126c9ad0;
          _objc_opt_new(PTR_PTR_1126c9ad0);
          func_0x00010c19f2c0();
          func_0x00010bf8b4a0(lVar13);
          if (0.0 <= dVar15) {
            func_0x00010bf8b4a0(lVar13);
            dVar15 = dVar15 * 1000.0;
            func_0x00010c1c53a0(puVar6);
          }
          func_0x00010befa120(puVar2);
          _objc_release(puVar6);
        }
        if (lVar11 <= lVar5) {
          lVar11 = lVar5;
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126c9ad8;
  _objc_alloc();
  dVar16 = *(double *)(param_1 + 0x40);
  _objc_retain(lVar1);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  dVar15 = 0.0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(lVar1);
  lVar4 = lVar1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar3 = *plStack_1c0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1c0 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        uVar12 = *(undefined8 *)(lStack_1c8 + lVar11 * 8);
        puVar8 = PTR_PTR_1126c9af8;
        _objc_opt_new(PTR_PTR_1126c9af8);
        func_0x00010c0c6b40(uVar12);
        dVar15 = dVar15 - dVar16;
        if (dVar15 <= 0.0) {
          dVar15 = 0.0;
        }
        func_0x00010c1c53a0(puVar8);
        func_0x00010bf8d120(uVar12);
        func_0x00010c193e80(puVar8);
        uVar9 = uVar12;
        func_0x00010c0c6fe0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220520(puVar8);
        _objc_release(uVar9);
        func_0x00010c0c6c20(uVar12);
        func_0x00010c1c5440(puVar8);
        func_0x00010befa120(puVar7);
        _objc_release(puVar8);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar1;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  func_0x00010c02a1a0();
  _objc_release(puVar7);
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  pcStack_238 = FUN_1063082f0;
  puStack_230 = &UNK_110848218;
  _objc_copyWeak(auStack_218,param_1 + 0x38);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar12);
  uStack_228 = uVar12;
  puStack_220 = puVar6;
  _objc_retain(puVar6);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_248);
  _objc_release(puStack_220);
  _objc_release(uStack_228);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_218);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lVar1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bee05a0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063082f0; end: 10630832b;  */

void FUN_1063082f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bee05a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10630832c; end: 106308413; -[SCOperaPerformanceTrackingPlugin _updateSnapshotForPageId:snapshot:] */

void FUN_10630832c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  func_0x00010be74ce0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    if (param_4 != 0) {
      lVar1 = param_4;
      func_0x00010c0c7040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_4;
        func_0x00010c0c7040(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9c00(param_1,param_2,lVar1);
        _objc_release(lVar1);
        lVar1 = param_4;
        func_0x00010bfb72e0(param_4);
        func_0x00010c19f600(param_1,param_2,lVar1);
        lVar1 = param_4;
        func_0x00010c0ea5a0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d5480(param_1,param_2,lVar1);
        _objc_release(lVar1);
      }
    }
    func_0x00010c0c6c20(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106308414; end: 10630871b; -[SCOperaPerformanceTrackingPlugin _sendPlaybackEventWithData:pageId:exitEvent:exitIntent:pageViewAbandoned:logPlaybackError:page:params:] */

void FUN_106308414(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,undefined1 param_7,undefined1 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (param_3 == 0) goto LAB_1063086e4;
  _objc_retain(param_3);
  func_0x00010c198340(param_3,param_2,param_5);
  func_0x00010c198400(param_3,param_2,param_6);
  func_0x00010bde1ca0(param_1,param_2,param_3);
  _objc_release(param_3);
  lVar7 = *(long *)(param_1 + 0xb8);
  uStack_67 = 0;
  if (lVar7 != 0) {
    uStack_67 = param_8;
  }
  _objc_retain(lVar7);
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10630871c;
  puStack_a0 = &UNK_11091c5a8;
  lStack_98 = param_1;
  _objc_retain(param_4);
  uStack_90 = param_4;
  uStack_68 = param_7;
  _objc_retain(lVar7);
  lStack_88 = lVar7;
  uStack_70 = uVar9;
  _objc_retain(param_9);
  uStack_80 = param_9;
  _objc_retain(param_10);
  uStack_78 = param_10;
  ppuVar1 = &puStack_b8;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0xd8);
  func_0x00010c0e00e0(lVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0xe0);
  func_0x00010c0e00e0(lVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar10 = 0;
  }
  else {
    lVar4 = lVar2;
    func_0x00010c06e0e0();
    uVar10 = (uint)lVar4 ^ 1;
  }
  if (lVar3 == 0) {
    uVar8 = 0;
  }
  else {
    lVar4 = lVar3;
    func_0x00010c06e0e0();
    uVar8 = (uint)lVar4 ^ 1;
  }
  if (((uVar10 | uVar8) & 1) == 0) {
LAB_106308694:
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    if ((param_5 == 6) || (param_6 == 0xc)) {
      uVar9 = *(undefined8 *)(param_1 + 0xd8);
      func_0x00010c0e00e0(uVar9,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2dba0();
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(param_1 + 0xe0);
      func_0x00010c0e00e0(uVar9,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2dba0();
      _objc_release(uVar9);
      goto LAB_106308694;
    }
    puVar5 = PTR_PTR_1126b7040;
    func_0x00010c22be80(PTR_PTR_1126b7040);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1d460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (uVar10 != 0) {
      func_0x00010bef7d60(puVar6,param_2,lVar2);
    }
    if (uVar8 != 0) {
      func_0x00010bef7d60(puVar6,param_2,lVar3);
    }
    puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa340();
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(lStack_88);
  _objc_release(uStack_90);
  _objc_release(lVar7);
LAB_1063086e4:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_4);
  return;
}



/* Entry: 10630871c; end: 10630879b;  */

void FUN_10630871c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8),param_2,0,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0),param_2,0,
                      *(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be74ce0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010be8ffe0(*(undefined8 *)(param_1 + 0x20),param_2,lVar1,
                        *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x50),
                        *(undefined1 *)(param_1 + 0x51),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10630879c; end: 106308867; -[SCOperaPerformanceTrackingPlugin _collectStallsFromData:] */

void FUN_10630879c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0cd260();
  uVar2 = param_3;
  func_0x00010c24d680();
  lVar3 = uVar1 + (uVar2 & 0xffffffff);
  lVar4 = *(long *)(param_1 + 0x38);
  lVar5 = lVar4;
  func_0x00010c24d5c0(lVar4);
  func_0x00010c2091c0(lVar4,param_2,lVar5 + lVar3);
  if (lVar3 == 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    lVar3 = lVar5;
    func_0x00010c24d620(lVar5);
    func_0x00010c209240(lVar5,param_2,lVar3 + 1);
  }
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x00010c24d5e0(lVar3);
  uVar1 = param_3;
  func_0x00010c24d680();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c24d600(param_3);
    lVar3 = uVar1 + lVar3;
  }
  uVar1 = param_3;
  func_0x00010c0cd260();
  if (0 < (long)uVar1) {
    uVar1 = param_3;
    func_0x00010c0cd280(param_3);
    lVar3 = uVar1 + lVar3;
  }
  func_0x00010c2091e0(*(undefined8 *)(param_1 + 0x38),param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106308868; end: 106308963; -[SCOperaPerformanceTrackingPlugin _reportPlaybackEventsWithData:pageId:pageViewAbandoned:shouldLogError:error:errorType:page:params:] */

void FUN_106308868(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be8f420(param_1,param_2,param_3,param_4);
  if (param_6 != 0) {
    func_0x00010be18840(param_1,param_2,param_7,param_8,param_9,param_10,1);
  }
  func_0x00010be8fa40(param_1,param_2,param_3,param_5);
  func_0x00010be8ff80(param_1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x68),param_2,param_4);
  _objc_release(param_4);
  _objc_release(param_10);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106308964; end: 10630896b; -[SCOperaPerformanceTrackingPlugin _reportBlizzardEventsWithData:pageId:] */

void FUN_106308964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ab970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_logOperaSnapPlayback__112608868);
  return;
}



/* Entry: 10630896c; end: 106308ee7; -[SCOperaPerformanceTrackingPlugin _reportPerfMetricsWithData:] */

void FUN_10630896c(undefined8 param_1,long param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
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
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_3;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c2a11e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar2 = param_3;
    func_0x00010c2a11e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010bf806e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110e4a2b8;
    ppuVar2 = param_3;
    func_0x00010c2a11e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb7320();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110e4a2d8;
    ppuVar4 = param_3;
    puStack_b0 = puVar3;
    func_0x00010c2a11e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb7360();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110e4a2f8;
    ppuVar6 = param_3;
    puStack_a8 = puVar5;
    func_0x00010c2a11e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cd900();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110e4a318;
    ppuVar8 = param_3;
    puStack_a0 = puVar7;
    func_0x00010c2a11e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c2a40();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110e4a338;
    ppuVar10 = param_3;
    puStack_98 = puVar9;
    func_0x00010c2a11e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c3e40();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110e4a358;
    ppuVar12 = param_3;
    puStack_90 = puVar11;
    func_0x00010c2a11e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1340();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110e4a378;
    ppuVar14 = param_3;
    puStack_88 = puVar13;
    func_0x00010c2a11e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cffa0();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110e4a398;
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_80 = puVar15;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar16;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c0d3c80();
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(ppuVar14);
    _objc_release(puVar13);
    _objc_release(ppuVar12);
    _objc_release(puVar11);
    _objc_release(ppuVar10);
    _objc_release(puVar9);
    _objc_release(ppuVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar6);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    ppuVar2 = param_3;
    func_0x00010c2a11e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf806e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar2);
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar2 = param_3;
      func_0x00010c2a11e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar2;
      func_0x00010bf806e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar18);
      _objc_release(ppuVar4);
      _objc_release(ppuVar2);
    }
    puVar3 = PTR_PTR_1126b1600;
    func_0x00010c22bdc0(PTR_PTR_1126b1600);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR_PTR_1126b15f8;
    _objc_alloc();
    ppuStack_110 = &PTR____CFConstantStringClassReference_110df4c78;
    ppuVar6 = param_3;
    func_0x00010c2a11e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar6;
    func_0x00010c0cff20();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_108 = &PTR____CFConstantStringClassReference_110e4a398;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110db2d38;
    if (ppuVar1 == (undefined **)0x0) {
      ppuStack_f8 = &PTR____CFConstantStringClassReference_110db1158;
    }
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_100 = ppuVar8;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010c80();
    ppuVar2 = ppuVar4;
    func_0x00010c0aa440(puVar3);
    _objc_release(ppuVar4);
    _objc_release(puVar5);
    _objc_release(ppuVar8);
    _objc_release(ppuVar6);
    _objc_release(puVar3);
    _objc_release(puVar18);
  }
  ppuVar1 = param_3;
  func_0x00010c100480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar1 = param_3;
    func_0x00010c100480();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_106308ee8;
    puStack_120 = &UNK_11091c5d8;
    _objc_retain(param_3);
    ppuVar2 = &puStack_138;
    ppuStack_118 = param_3;
    func_0x00010c297260(ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(ppuStack_118);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126b1600;
  if ((param_2 != 0) && (ppuVar2 == (undefined **)0x0)) {
    _objc_retain(param_2);
    func_0x00010c22bdc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b15f8;
    _objc_alloc(PTR_PTR_1126b15f8);
    lVar19 = param_2;
    FUN_10630e440(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_2;
    FUN_10630eb58(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c010c80(puVar5);
    func_0x00010c0aa440(puVar3);
    _objc_release(puVar5);
    _objc_release(lVar20);
    _objc_release(lVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 106308ee8; end: 106308fd3;  */

void FUN_106308ee8(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b1600;
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    func_0x00010c22bdc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b15f8;
    _objc_alloc(PTR_PTR_1126b15f8);
    lVar3 = param_2;
    FUN_10630e440(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    FUN_10630eb58(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c010c80(puVar2);
    func_0x00010c0aa440(puVar1);
    _objc_release(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106308fd4; end: 106309373; -[SCOperaPerformanceTrackingPlugin _reportGrapheneEventsWithData:pageViewAbandoned:] */

void FUN_106308fd4(double param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  uVar9 = *(undefined8 *)(param_2 + 0x78);
  lVar3 = param_4;
  func_0x00010c0ff480(param_4);
  func_0x00010bb06dfc();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  func_0x00010c0c6c20(param_4);
  func_0x00010bc90ccc();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c29e220(param_4);
  func_0x00010baf2e2c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  lVar7 = param_4;
  lVar8 = param_4;
  if (param_5 == 0) {
    FUN_10636bd94(uVar9,lVar3,lVar4,lVar5,1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    uVar9 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010c0ff480(param_4);
    func_0x00010bb06dfc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20(param_4);
    func_0x00010bc90ccc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e220(param_4);
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed820(*(undefined8 *)(param_2 + 0x50));
    FUN_10636c078(uVar9,lVar6,lVar7,lVar8,(long)(param_1 * 1000.0));
  }
  else {
    FUN_10636b814();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    uVar9 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010c0ff480(param_4);
    func_0x00010bb06dfc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20(param_4);
    func_0x00010bc90ccc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e220(param_4);
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed820(*(undefined8 *)(param_2 + 0x50));
    FUN_10636bad4(uVar9,lVar6,lVar7,lVar8,(long)(param_1 * 1000.0));
  }
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  func_0x00010be8f340(param_2);
  func_0x00010be90400(param_2);
  func_0x00010be90420(param_2);
  func_0x00010be90440(param_2);
  func_0x00010be8fbe0(param_2);
  lVar3 = param_4;
  func_0x00010c0c5f20();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4a578;
  if (lVar3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df3478;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e4a598;
  if (lVar3 != 2) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain(ppuVar2);
  lVar3 = param_4;
  func_0x00010c100f80(param_4);
  func_0x00010bb06e3c();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x78);
  lVar4 = param_4;
  func_0x00010c0ff480(param_4);
  func_0x00010bb06dfc();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c0c6c20(param_4);
  func_0x00010bc90ccc();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010c29e220(param_4);
  func_0x00010baf2e2c();
  _objc_retainAutoreleasedReturnValue();
  FUN_10636ec94(uVar9,lVar4,lVar5,ppuVar2,lVar3,lVar6,1);
  _objc_release(ppuVar2);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  uVar9 = *(undefined8 *)(param_2 + 0x78);
  lVar4 = param_4;
  func_0x00010c0ff480(param_4);
  func_0x00010bb06dfc();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c0c6c20(param_4);
  func_0x00010bc90ccc();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010c29e220(param_4);
  func_0x00010baf2e2c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_4;
  func_0x00010c29e4e0(param_4);
  FUN_10636d73c(uVar9,lVar4,lVar5,lVar6,lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010be90000(param_2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106309374; end: 10630970b; -[SCOperaPerformanceTrackingPlugin _reportLoadingIndicatorGrapheneMetrics:] */

void FUN_106309374(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ea980();
  if ((0 < (long)uVar1) && (uVar2 = param_3, func_0x00010c09cf40(), 0 < (int)uVar2)) {
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = param_3;
    func_0x00010c0ff480(param_3);
    func_0x00010bb06dfc();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0c6c20(param_3);
    func_0x00010bc90ccc();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c29e220(param_3);
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    FUN_106367ac8(uVar7,uVar3,uVar4,uVar5,1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = param_3;
    func_0x00010c0ff480(param_3);
    func_0x00010bb06dfc();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0c6c20(param_3);
    func_0x00010bc90ccc();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c29e220(param_3);
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    FUN_106367d88(uVar7,uVar3,uVar4,uVar5,uVar2 & 0xffffffff);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = param_3;
    func_0x00010c0ff480(param_3);
    func_0x00010bb06dfc();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0c6c20(param_3);
    func_0x00010bc90ccc();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c29e220(param_3);
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    FUN_106368048(uVar7,uVar3,uVar4,uVar5,uVar2 & 0xffffffff);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c09cfa0();
    if (0 < (long)uVar2) {
      uVar7 = *(undefined8 *)(param_1 + 0x78);
      uVar3 = param_3;
      func_0x00010c0ff480(param_3);
      func_0x00010bb06dfc();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0c6c20(param_3);
      func_0x00010bc90ccc();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c29e220(param_3);
      func_0x00010baf2e2c();
      _objc_retainAutoreleasedReturnValue();
      FUN_106368308(uVar7,uVar3,uVar4,uVar5,uVar2);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = param_3;
      func_0x00010c09d060();
      if (0 < (long)uVar3) {
        uVar7 = *(undefined8 *)(param_1 + 0x78);
        uVar4 = param_3;
        func_0x00010c0ff480(param_3);
        func_0x00010bb06dfc();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010c0c6c20(param_3);
        func_0x00010bc90ccc();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010c29e220(param_3);
        func_0x00010baf2e2c();
        _objc_retainAutoreleasedReturnValue();
        FUN_1063685c8(uVar7,uVar4,uVar5,uVar6,uVar3);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = (uVar2 * 100) / uVar1;
        }
        if (uVar3 < 0x65) {
          uVar7 = *(undefined8 *)(param_1 + 0x78);
          uVar1 = param_3;
          func_0x00010c0ff480(param_3);
          func_0x00010bb06dfc();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0c6c20(param_3);
          func_0x00010bc90ccc();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_3;
          func_0x00010c29e220(param_3);
          func_0x00010baf2e2c();
          _objc_retainAutoreleasedReturnValue();
          FUN_106368888(uVar7,uVar1,uVar2,uVar4,uVar3);
          _objc_release(uVar4);
          _objc_release(uVar2);
          _objc_release(uVar1);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10630970c; end: 1063098ef; -[SCOperaPerformanceTrackingPlugin _reportBSRGrapheneMetrics:] */

void FUN_10630970c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  _objc_retain(param_3);
  func_0x00010c243c60(param_3);
  lVar2 = param_1;
  func_0x00010bdfba80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0ff480(param_3);
  func_0x00010bb06dfc();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010bc90ccc();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c29e220(param_3);
  _objc_release(param_3);
  func_0x00010baf2e2c(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bde4540(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = *(undefined ***)(param_1 + 0x128);
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c083f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    else {
      _objc_retain(ppuVar8);
      ppuVar7 = ppuVar8;
    }
    _objc_release(ppuVar8);
  }
  FUN_106366bc8(*(undefined8 *)(param_1 + 0x78),lVar2,*(undefined8 *)(param_1 + 0x120),ppuVar7,lVar6
                ,uVar5,1);
  ppuVar8 = ppuVar7;
  func_0x00010c0720c0();
  if ((int)ppuVar8 != 0) {
    FUN_106366f78(*(undefined8 *)(param_1 + 0x78),lVar2,*(undefined8 *)(param_1 + 0x120),lVar6,uVar5
                  ,1);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x120);
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      FUN_1063672ac(*(undefined8 *)(param_1 + 0x78),lVar2,lVar6,uVar5,1);
    }
  }
  _objc_release(ppuVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1063098f0; end: 106309a37; -[SCOperaPerformanceTrackingPlugin _reportStallCountGrapheneMetrics:] */

void FUN_1063098f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ff480(param_3);
  func_0x00010bb06dfc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010bc90ccc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c29e220(param_3);
  func_0x00010baf2e2c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0cd260(param_3);
  FUN_10636a600(uVar5,uVar1,uVar2,uVar3,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  uVar1 = param_3;
  func_0x00010c0ff480(param_3);
  func_0x00010bb06dfc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010bc90ccc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c29e220(param_3);
  func_0x00010baf2e2c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c24d680(param_3);
  _objc_release(param_3);
  FUN_1063695b8(uVar5,uVar1,uVar2,uVar3,uVar4 & 0xffffffff);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106309a38; end: 106309c57; -[SCOperaPerformanceTrackingPlugin _reportStallDurPctGrapheneMetrics:] */

void FUN_106309a38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c24d600();
  lVar2 = param_3;
  func_0x00010c0cd280();
  lVar3 = param_3;
  func_0x00010c29e4e0();
  lVar3 = lVar2 + lVar1 + lVar3;
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c24d600(param_3);
    lVar4 = param_3;
    func_0x00010c0cd280(param_3);
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    lVar5 = param_3;
    func_0x00010c0ff480(param_3);
    func_0x00010bb06dfc();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c0c6c20(param_3);
    func_0x00010bc90ccc();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c29e220(param_3);
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = ((lVar4 + lVar2) * 100) / lVar3;
    }
    FUN_10636aea4(uVar8,lVar5,lVar6,lVar7,lVar1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    lVar2 = param_3;
    func_0x00010c0ff480(param_3);
    func_0x00010bb06dfc();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c0c6c20(param_3);
    func_0x00010bc90ccc();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c29e220(param_3);
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c24d600(param_3);
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = (lVar6 * 100) / lVar3;
    }
    FUN_106369b7c(uVar8,lVar2,lVar4,lVar5,lVar1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    lVar2 = param_3;
    func_0x00010c0ff480(param_3);
    func_0x00010bb06dfc();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c0c6c20(param_3);
    func_0x00010bc90ccc();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c29e220(param_3);
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c0cd280(param_3);
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = (lVar6 * 100) / lVar3;
    }
    FUN_10636a8e4(uVar8,lVar2,lVar4,lVar5,lVar1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106309c58; end: 106309e3b; -[SCOperaPerformanceTrackingPlugin _reportStallDurGrapheneMetrics:] */

void FUN_106309c58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0cd280(param_3);
  lVar2 = param_3;
  func_0x00010c24d600(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  lVar3 = param_3;
  func_0x00010c0ff480(param_3);
  func_0x00010bb06dfc();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010bc90ccc();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c29e220(param_3);
  func_0x00010baf2e2c();
  _objc_retainAutoreleasedReturnValue();
  FUN_10636b184(uVar6,lVar3,lVar4,lVar5,lVar2 + lVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  lVar1 = param_3;
  func_0x00010c0ff480(param_3);
  func_0x00010bb06dfc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010bc90ccc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c29e220(param_3);
  func_0x00010baf2e2c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c24d600(param_3);
  FUN_10636989c(uVar6,lVar1,lVar2,lVar3,lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  lVar1 = param_3;
  func_0x00010c0ff480(param_3);
  func_0x00010bb06dfc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010bc90ccc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c29e220(param_3);
  func_0x00010baf2e2c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0cd280(param_3);
  _objc_release(param_3);
  FUN_10636abc4(uVar6,lVar1,lVar2,lVar3,lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106309e3c; end: 10630a037; -[SCOperaPerformanceTrackingPlugin _reportPlaybackPerformanceMetrics:] */

void FUN_106309e3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0c6c20();
  if ((lVar1 == 1) || (lVar1 = param_3, func_0x00010c0c6c20(), lVar1 == 0)) {
    lVar1 = param_3;
    func_0x00010c100480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x88);
      _objc_retain(uVar6);
      lVar1 = param_3;
      func_0x00010c29e220();
      func_0x00010baf2e2c();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c100f80();
      func_0x00010bb06e3c();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c13b140();
      func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db3bb8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c2a11e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0cff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_3;
      func_0x00010c100480(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10630a038;
      puStack_80 = &UNK_11091c608;
      uStack_78 = uVar6;
      lStack_70 = lVar2;
      puStack_68 = puVar3;
      lStack_60 = lVar1;
      lStack_58 = lVar5;
      _objc_retain(lVar5);
      _objc_retain(lVar1);
      _objc_retain(puVar3);
      _objc_retain(lVar2);
      _objc_retain(uVar6);
      func_0x00010c297260(lVar4,param_2,&puStack_98,0);
      _objc_release(lVar4);
      _objc_release(lStack_58);
      _objc_release(lStack_60);
      _objc_release(puStack_68);
      _objc_release(lStack_70);
      _objc_release(uStack_78);
      _objc_release(lVar5);
      _objc_release(lVar1);
      _objc_release(puVar3);
      _objc_release(lVar2);
      _objc_release(uVar6);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10630a038; end: 10630a3df;  */

void FUN_10630a038(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(param_2);
    lVar5 = param_2;
    func_0x00010bf135c0(param_2);
    func_0x00010b297a08(uVar1,uVar3,uVar2,uVar4,(long)((int)lVar5 / 1000));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2;
    func_0x00010bf135e0(param_2);
    func_0x00010b297cc8(uVar1,uVar3,uVar2,uVar4,(long)((int)lVar5 / 1000));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2;
    func_0x00010bf672e0(param_2);
    func_0x00010b297f88(uVar1,&PTR____CFConstantStringClassReference_110de7678,uVar3,uVar2,uVar4,
                        (long)(int)lVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2;
    func_0x00010bf6d7e0(param_2);
    func_0x00010b2982bc(uVar1,&PTR____CFConstantStringClassReference_110e0ad18,uVar3,uVar2,uVar4,
                        (long)(int)lVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2;
    func_0x00010bf6d800(param_2);
    func_0x00010b2982bc(uVar1,&PTR____CFConstantStringClassReference_110de7678,uVar3,uVar2,uVar4,
                        (long)(int)lVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2;
    func_0x00010c24d5c0(param_2);
    func_0x00010b2985f0(uVar1,uVar3,uVar2,uVar4,(long)(int)lVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2;
    func_0x00010c276ce0(param_2);
    func_0x00010b2988b0(uVar1,uVar3,uVar2,uVar4,(long)((int)lVar5 / 1000));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2;
    func_0x00010bf13500(param_2);
    func_0x00010b298b70(uVar1,&PTR____CFConstantStringClassReference_110de7678,uVar3,uVar2,uVar4,
                        (long)((int)lVar5 / 1000));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2;
    func_0x00010bf13540(param_2);
    func_0x00010b298ea4(uVar1,&PTR____CFConstantStringClassReference_110de7678,uVar3,uVar2,uVar4,
                        (long)((int)lVar5 / 1000));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    lVar5 = param_2;
    func_0x00010bf13620(param_2);
    func_0x00010b2991d8(uVar1,&PTR____CFConstantStringClassReference_110de7678,uVar3,uVar2,uVar4,
                        uVar7,(long)((int)lVar5 / 1000));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2;
    func_0x00010c29b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2765a0();
    func_0x00010b299dc8(uVar1,uVar3,uVar2,uVar4,(long)(int)lVar6);
    _objc_release(lVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2;
    func_0x00010c29b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf8ab60();
    func_0x00010b299b08(uVar1,uVar3,uVar2,uVar4,(long)(int)lVar6);
    _objc_release(lVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2;
    func_0x00010bf67300(param_2);
    func_0x00010b299848(uVar1,uVar3,uVar2,uVar4,(long)(int)lVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2;
    func_0x00010c29b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf52780();
    func_0x00010b299588(uVar1,uVar3,uVar2,uVar4,(long)(int)lVar6);
    _objc_release(lVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = param_2;
    func_0x00010c29b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar6 = lVar5;
    func_0x00010c275ee0(lVar5);
    func_0x00010b29a088(uVar1,uVar3,uVar2,uVar4,(long)(int)lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 10630a3e0; end: 10630a4c7; -[SCOperaPerformanceTrackingPlugin _updateOperaNavigationType:] */

void FUN_10630a3e0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c9a20;
  _objc_retain(param_3);
  func_0x00010c0d6c60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  *(ulong *)(param_1 + 0x70) = (ulong)(uVar3 != 0);
  puVar2 = PTR_PTR_1126c9aa8;
  func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b83c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10630a4c8; end: 10630a58b; -[SCOperaPerformanceTrackingPlugin _createPlaybackSessionWithTime:] */

/* WARNING: Possible PIC construction at 0x00010630a570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010630a574) */

void FUN_10630a4c8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c9ae0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined **)(param_2 + 0x38) = puVar1;
  _objc_release(uVar2);
  func_0x000108534aa8(*(undefined8 *)(param_2 + 0x150));
  func_0x00010c222c00(*(undefined8 *)(param_2 + 0x38));
  func_0x00010c209240(*(undefined8 *)(param_2 + 0x38));
  func_0x00010c20cda0(*(undefined8 *)(param_2 + 0x38));
  func_0x00010c203cc0(*(undefined8 *)(param_2 + 0x38));
  func_0x00010c2091c0(*(undefined8 *)(param_2 + 0x38));
  func_0x00010c2091e0(*(undefined8 *)(param_2 + 0x38));
  *(undefined2 *)(param_2 + 0x110) = 0;
  func_0x00010c1d56e0(*(undefined8 *)(param_2 + 0x38));
  func_0x00010c1cba40(*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010c138190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(param_2 + 0x48),PTR_s_resetAndStartWithTime__11262ba80);
  return;
}



/* Entry: 10630a58c; end: 10630a807; -[SCOperaPerformanceTrackingPlugin _checkThatPlaylistGroupsAreUnique] */

void FUN_10630a58c(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  if (*(long *)(param_2 + 0x38) == 0) goto LAB_10630a7cc;
  lVar7 = param_2 + 0xf0;
  _objc_loadWeakRetained();
  lVar5 = lVar7;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar7);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = 0.0;
  _objc_retain(lVar2);
  lVar5 = lVar2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (lVar5 == 0) {
LAB_10630a7b4:
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        uVar9 = *(undefined8 *)(lVar12 * 8);
        uVar10 = uVar9;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf4b900();
        _objc_release(uVar10);
        if ((int)puVar4 == 0) {
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
        }
        else {
          uVar10 = *(undefined8 *)(param_2 + 0x100);
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar10);
          bVar1 = true;
        }
        _objc_release(uVar9);
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar2;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
    _objc_release(lVar2);
    if (bVar1) {
      param_1 = 0.0;
      _objc_retain(lVar2);
      lVar7 = lVar2;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (lVar7 != 0) {
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(lVar2);
          }
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        lVar7 = lVar2;
        func_0x00010bf52a60();
      }
      goto LAB_10630a7b4;
    }
  }
  _objc_release(puVar3);
  _objc_release();
LAB_10630a7cc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(lVar2 + 0x38);
  if (lVar6 != 0) {
    func_0x00010c29e220();
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed820(*(undefined8 *)(lVar2 + 0x48));
    param_1 = param_1 * 1000.0;
    func_0x00010c1fd980(*(undefined8 *)(lVar2 + 0x38));
    func_0x00010c198340(*(undefined8 *)(lVar2 + 0x38));
    func_0x00010c0ab980(*(undefined8 *)(lVar2 + 0x18));
    FUN_10636dd44(*(undefined8 *)(lVar2 + 0x78),lVar6,1);
    FUN_10636dedc(*(undefined8 *)(lVar2 + 0x78),lVar6,(long)param_1);
    uVar9 = *(undefined8 *)(lVar2 + 0x78);
    uVar10 = *(undefined8 *)(lVar2 + 0x38);
    func_0x00010c23fa00(uVar10);
    FUN_10636dbb0(uVar9,lVar6,uVar10);
    uVar9 = *(undefined8 *)(lVar2 + 0x78);
    uVar10 = *(undefined8 *)(lVar2 + 0x38);
    func_0x00010c259600(uVar10);
    FUN_10636da1c(uVar9,lVar6,uVar10);
    uVar9 = *(undefined8 *)(lVar2 + 0x78);
    uVar10 = *(undefined8 *)(lVar2 + 0x38);
    func_0x00010c24d5e0(uVar10);
    FUN_10636e2a0(uVar9,lVar6,uVar10);
    if (param_1 <= 0.0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + 0x38);
      func_0x00010c24d5e0(lVar5);
      lVar5 = (long)((double)((float)lVar5 * 100.0) / param_1);
    }
    FUN_10636e434(*(undefined8 *)(lVar2 + 0x78),lVar6,lVar5);
    uVar9 = *(undefined8 *)(lVar2 + 0x78);
    uVar10 = *(undefined8 *)(lVar2 + 0x38);
    func_0x00010c24d5c0(uVar10);
    FUN_10636e5c8(uVar9,lVar6,uVar10);
    lVar8 = *(long *)(lVar2 + 0x100);
    _objc_retain(lVar8);
    lVar5 = lVar8;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar8);
        }
        FUN_10636756c(*(undefined8 *)(lVar2 + 0x78),*(undefined8 *)(lVar11 * 8),lVar6,1);
        lVar11 = lVar11 + 1;
      } while (lVar5 != lVar11);
      lVar5 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    uVar10 = *(undefined8 *)(lVar2 + 0x38);
    *(undefined8 *)(lVar2 + 0x38) = 0;
    _objc_release(uVar10);
    *(undefined8 *)(lVar2 + 0x108) = 0;
    func_0x00010c12adc0(*(undefined8 *)(lVar2 + 0x100));
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar6 + 0x140) != 0) {
    func_0x00010bf94960(PTR_PTR_1126c98e0);
    *(undefined8 *)(lVar6 + 0x140) = 0;
  }
  return;
}



/* Entry: 10630a808; end: 10630aa63; -[SCOperaPerformanceTrackingPlugin _sendPlaybackSessionEventWithExitEvent:] */

void FUN_10630a808(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_2 + 0x38);
  if (lVar2 != 0) {
    func_0x00010c29e220();
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed820(*(undefined8 *)(param_2 + 0x48));
    param_1 = param_1 * 1000.0;
    func_0x00010c1fd980(*(undefined8 *)(param_2 + 0x38));
    func_0x00010c198340(*(undefined8 *)(param_2 + 0x38));
    func_0x00010c0ab980(*(undefined8 *)(param_2 + 0x18));
    FUN_10636dd44(*(undefined8 *)(param_2 + 0x78),lVar2,1);
    FUN_10636dedc(*(undefined8 *)(param_2 + 0x78),lVar2,(long)param_1);
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c23fa00(uVar3);
    FUN_10636dbb0(uVar6,lVar2,uVar3);
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c259600(uVar3);
    FUN_10636da1c(uVar6,lVar2,uVar3);
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c24d5e0(uVar3);
    FUN_10636e2a0(uVar6,lVar2,uVar3);
    if (param_1 <= 0.0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x38);
      func_0x00010c24d5e0(lVar4);
      lVar4 = (long)((double)((float)lVar4 * 100.0) / param_1);
    }
    FUN_10636e434(*(undefined8 *)(param_2 + 0x78),lVar2,lVar4);
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c24d5c0(uVar3);
    FUN_10636e5c8(uVar6,lVar2,uVar3);
    lVar7 = *(long *)(param_2 + 0x100);
    _objc_retain(lVar7);
    lVar4 = lVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        FUN_10636756c(*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(lVar8 * 8),lVar2,1);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    _objc_release(uVar3);
    *(undefined8 *)(param_2 + 0x108) = 0;
    func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x100));
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar2 + 0x140) != 0) {
    func_0x00010bf94960(PTR_PTR_1126c98e0);
    *(undefined8 *)(lVar2 + 0x140) = 0;
  }
  return;
}



/* Entry: 10630aa64; end: 10630aa97; -[SCOperaPerformanceTrackingPlugin _endOperaTraceForOpenedPage] */

void FUN_10630aa64(long param_1)

{
  if (*(long *)(param_1 + 0x140) != 0) {
    func_0x00010bf94960(PTR_PTR_1126c98e0);
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  return;
}



/* Entry: 10630aa98; end: 10630ab3b; -[SCOperaPerformanceTrackingPlugin _beginOperaTraceForOpenedPage:] */

void FUN_10630aa98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010be09c00(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e4a418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c98e0;
  func_0x00010bf18180(PTR_PTR_1126c98e0,param_2,puVar2);
  *(undefined **)(param_1 + 0x140) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10630ab3c; end: 10630abe7; -[SCOperaPerformanceTrackingPlugin _pauseAllStopwatches:] */

/* WARNING: Possible PIC construction at 0x00010630ab54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630ab64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630ab88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010630abb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010630ab58) */
/* WARNING: Removing unreachable block (ram,0x00010630ab68) */

void FUN_10630ab3c(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x40),PTR_s_pause_11261b0e8);
    return;
  }
  func_0x00010beed820(*(undefined8 *)(param_2 + 0x40));
  if (param_1 <= 0.0) {
    func_0x00010beed820(*(undefined8 *)(param_2 + 0x48));
    if (param_1 <= 0.0) {
      func_0x00010beed820(*(undefined8 *)(param_2 + 0x50));
      if (param_1 <= 0.0) {
        func_0x00010beed820(*(undefined8 *)(param_2 + 0x58));
        if (param_1 <= 0.0) {
          return;
        }
        uVar1 = *(undefined8 *)(param_2 + 0x58);
      }
      else {
        uVar1 = *(undefined8 *)(param_2 + 0x50);
      }
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0x48);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_start_112671080);
  return;
}



/* Entry: 10630abe8; end: 10630abef; -[SCOperaPerformanceTrackingPlugin _appWillResignActive] */

void FUN_10630abe8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be70c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pauseAllStopwatches__112579ca0,1);
  return;
}



/* Entry: 10630abf0; end: 10630abf7; -[SCOperaPerformanceTrackingPlugin _appDidBecomeActive] */

void FUN_10630abf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be70c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pauseAllStopwatches__112579ca0,0);
  return;
}



/* Entry: 10630abf8; end: 10630ad6b; -[SCOperaPerformanceTrackingPlugin _operaViewerWillAppearWithParams:] */

void FUN_10630abf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9a20;
  func_0x00010c0d27e0(PTR_PTR_1126c9a20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  if ((int)uVar3 != 0) {
    puVar1 = PTR_PTR_1126c9a20;
    func_0x00010c0f3cc0(PTR_PTR_1126c9a20);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x150);
    func_0x000107ddcac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    func_0x0001008cd514(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010795e4ac();
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10630ad6c; end: 10630ad8b; -[SCOperaPerformanceTrackingPlugin _exitEventFromLastPagedEvent] */

undefined8 FUN_10630ad6c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  if (uVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x70);
    _objc_retain();
    uVar4 = uVar3;
    if (lVar1 + 1U < 2) {
      func_0x000107cd3af8(uVar3);
    }
    else if (lVar1 == 1) {
      func_0x000107cd3c7c(uVar3);
    }
    else {
      uVar4 = 0xffffffffffffffff;
    }
    _objc_release(uVar3);
    return uVar4;
  }
  if (0x14 < uVar2) {
    return 7;
  }
  return *(undefined8 *)(&UNK_10dddb540 + uVar2 * 8);
}



/* Entry: 10630ad8c; end: 10630ada7; -[SCOperaPerformanceTrackingPlugin _exitIntentFromLastPagedEvent] */

ulong FUN_10630ad8c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x30);
  if (uVar4 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    _objc_retain();
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c0f2560(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((uVar4 & 1) == 0) {
      puVar2 = PTR_PTR_1126c9460;
      func_0x00010c0f2580(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((uVar4 & 1) == 0) {
        puVar2 = PTR_PTR_1126c9460;
        func_0x00010c0f25e0(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((uVar4 & 1) == 0) {
          puVar2 = PTR_PTR_1126c9460;
          func_0x00010c0f2620(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((uVar4 & 1) == 0) {
            puVar2 = PTR_PTR_1126c9460;
            func_0x00010c0f2600(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar1;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            if ((uVar4 & 1) == 0) {
              puVar2 = PTR_PTR_1126c9460;
              func_0x00010c0f25a0(PTR_PTR_1126c9460);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar1;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              uVar4 = 6;
              if ((int)uVar3 == 0) {
                uVar4 = 0xffffffffffffffff;
              }
            }
            else {
              uVar4 = 0;
            }
          }
          else {
            uVar4 = 3;
          }
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 4;
      }
    }
    else {
      uVar4 = 2;
    }
    _objc_release(uVar1);
    return uVar4;
  }
  if (*(long *)(param_1 + 0x70) + 1U < 2) {
    if (0x14 < uVar4) {
      return 0xffffffffffffffff;
    }
    return *(ulong *)(&UNK_10dee5718 + uVar4 * 8);
  }
  if (*(long *)(param_1 + 0x70) != 1) {
    return uVar4;
  }
  if (0x14 < uVar4) {
    return 0xffffffffffffffff;
  }
  return *(ulong *)(&UNK_10dee5670 + uVar4 * 8);
}



/* Entry: 10630ada8; end: 10630ae6f; -[SCOperaPerformanceTrackingPlugin _logGrapheneGroupViewCompletedWithViewSource:exitEvent:] */

void FUN_10630ada8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  uVar2 = param_4;
  func_0x00010baf2e2c(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10636779c(uVar1,uVar2,1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  uVar2 = param_4;
  func_0x00010baf2e2c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beed820(*(undefined8 *)(param_2 + 0x58));
  FUN_106367934(uVar1,uVar2,(long)(param_1 * 1000.0));
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010baf2e2c(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10636da1c(uVar2,param_4,*(undefined8 *)(param_2 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10630ae70; end: 10630af77; -[SCOperaPerformanceTrackingPlugin _logGraphenePageViewSucceededWithViewSource:mediaType:itemType:mediaPrepareTimeMs:] */

void FUN_10630ae70(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  _objc_retain(param_6);
  uVar3 = param_5;
  func_0x00010bc90ccc(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010baf2e2c(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10636d178(uVar2,param_6,uVar3,uVar1,1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010bc90ccc(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf2e2c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beed820(*(undefined8 *)(param_2 + 0x50));
  FUN_10636d45c(uVar3,param_6,param_5,param_4,(long)(param_1 * 1000.0));
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10630af78; end: 10630afdf; -[SCOperaPerformanceTrackingPlugin _logGrapheneNullMediaType:itemType:] */

void FUN_10630af78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_4);
  func_0x00010baf2e2c(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1063690c8(uVar1,param_4,param_3,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10630afe0; end: 10630b06f; -[SCOperaPerformanceTrackingPlugin _logGrapheneWebTopSnapLoadTimeMs:publisherId:durationMs:] */

void FUN_10630afe0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  uVar1 = param_4;
  func_0x00010baf2e2c(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10636f718(uVar2,uVar1,1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010baf2e2c(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10636f88c(uVar1,param_4,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10630b070; end: 10630b0ff; -[SCOperaPerformanceTrackingPlugin _logGrapheneWebTopSnapStallTimeMs:publisherId:durationMs:] */

void FUN_10630b070(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  uVar1 = param_4;
  func_0x00010baf2e2c(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10636fc30(uVar2,uVar1,1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010baf2e2c(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10636fda4(uVar1,param_4,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10630b100; end: 10630b18f; -[SCOperaPerformanceTrackingPlugin _logGrapheneWebTopSnapReqCount:publisherId:statusCode:] */

void FUN_10630b100(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf2e2c(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10636fa00(uVar3,puVar2,param_3,1);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10630b190; end: 10630b1d3; -[SCOperaPerformanceTrackingPlugin _logGrapheneWebTopSnapConnFailed:publisherId:] */

void FUN_10630b190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010baf2e2c(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10636f5a4(uVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10630b1d4; end: 10630b4eb; -[SCOperaPerformanceTrackingPlugin _logGrapheneError:errorType:viewSource:mediaType:itemType:visibleError:] */

void FUN_10630b1d4(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  if ((param_4 == 0) || (*(long *)(param_2 + 0xb8) != param_4)) {
    lVar1 = param_4;
    func_0x000107de8b24(param_4,0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x78);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_8;
    func_0x00010bb06dfc(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_7;
    func_0x00010bc90ccc(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_6;
    func_0x00010baf2e2c(param_6);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      FUN_10636cae0(uVar7,puVar3,uVar6,uVar4,uVar5,param_9,1);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(puVar3);
      _objc_release(puVar2);
      uVar6 = *(undefined8 *)(param_2 + 0x78);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bb06dfc(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bc90ccc(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010baf2e2c(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beed820(*(undefined8 *)(param_2 + 0x50));
      FUN_10636ce44(uVar6,puVar3,param_8,param_7,param_6,(long)(param_1 * 1000.0));
    }
    else {
      FUN_10636c358(uVar7,lVar1,puVar3,uVar6,uVar4,uVar5,param_9,1);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(puVar3);
      _objc_release(puVar2);
      uVar6 = *(undefined8 *)(param_2 + 0x78);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bb06dfc(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bc90ccc(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010baf2e2c(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beed820(*(undefined8 *)(param_2 + 0x50));
      FUN_10636c730(uVar6,lVar1,puVar3,param_8,param_7,param_6,(long)(param_1 * 1000.0));
    }
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(param_8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10630b4ec; end: 10630b503; -[SCOperaPerformanceTrackingPlugin _itemTypeFromSnapPlaybackEvent:] */

undefined * FUN_10630b4ec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c0ff480();
  if (param_3 < 7) {
    return (&PTR_PTR_110d90d78)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 10630b504; end: 10630b50b; -[SCOperaPerformanceTrackingPlugin _logPlaybackError:errorType:page:params:] */

void FUN_10630b504(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be18850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__forceLogPlaybackError_errorType_112563bb0);
  return;
}



/* Entry: 10630b50c; end: 10630c247; -[SCOperaPerformanceTrackingPlugin _forceLogPlaybackError:errorType:page:params:forceLog:] */

void FUN_10630b50c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  ulong param_6,uint param_7)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  ulong uStack_90;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar15 = *(long *)(param_1 + 0xb8);
  if (*(char *)(param_1 + 0x113) == '\x01') {
    uVar1 = param_7;
    if (param_3 != lVar15) {
      uVar1 = 1;
    }
    if ((lVar15 == 0) || ((uVar1 & 1) == 0)) goto LAB_10630c214;
  }
  else if (((param_7 & 1) == 0) && (lVar15 == 0 || param_3 == lVar15)) goto LAB_10630c214;
  uVar17 = param_5;
  if (*(char *)(param_1 + 0x114) == '\x01') {
    uVar17 = *(ulong *)(param_1 + 0xc0);
  }
  _objc_retain(uVar17);
  uVar16 = param_6;
  if (*(char *)(param_1 + 0x114) == '\x01') {
    uVar16 = *(ulong *)(param_1 + 200);
  }
  _objc_retain(uVar16);
  uVar3 = uVar17;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uStack_90 = 0;
  }
  else {
    uStack_90 = param_1;
    func_0x00010be74ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar19 = *(undefined ***)(param_1 + 0xb8);
  _objc_retain(ppuVar19);
  func_0x00010630cbc0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_retain(uVar17);
  _objc_retain(uVar16);
  uVar4 = uVar17;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  if (uVar5 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar6 = PTR_PTR_1126b2340;
    uVar4 = uVar17;
    func_0x00010c118b40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f17c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar18);
    _objc_release(puVar6);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126b2340;
    uVar4 = uVar17;
    func_0x00010c118b40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf16000();
    _objc_release(uVar4);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126c9898;
      func_0x00010bf15fe0(PTR_PTR_1126c9898);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      if (uVar4 != 0) {
        puVar6 = PTR_PTR_1126c9898;
        func_0x00010bf15fe0(PTR_PTR_1126c9898);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar16;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar7 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar6);
        uVar4 = uVar5;
        if ((uVar7 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar5);
        func_0x00010c2827c0(uVar4);
        _objc_release(uVar4);
      }
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b2348;
    func_0x00010bf15fe0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar18);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126c9ae8;
    uVar4 = uVar17;
    func_0x00010c118b40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06e4a0();
    _objc_release(uVar4);
    if ((int)puVar6 != 0) {
      uVar4 = uVar17;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar6 = PTR_PTR_1126b2390;
      _objc_opt_class(PTR_PTR_1126b2390);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar4 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar5);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (uVar4 != 0) {
        func_0x00010c08bda0(uVar5);
        func_0x00010c0df780(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126b2348;
        func_0x00010c08bda0(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar18);
        _objc_release(puVar8);
        _objc_release(puVar6);
      }
      _objc_release(uVar4);
    }
    puVar6 = PTR_PTR_1126b2348;
    func_0x00010bf8b340(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar16;
    func_0x00010c0e00e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b2348;
    func_0x00010bf8b340(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar18);
    _objc_release(puVar8);
    _objc_release(uVar4);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar16;
    func_0x00010c0e00e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar18);
    _objc_release(puVar8);
    _objc_release(uVar4);
    _objc_release(puVar6);
  }
  _objc_release(uVar16);
  _objc_release(uVar17);
  func_0x00010be39280(param_1);
  puVar6 = PTR_PTR_1126c9af0;
  _objc_opt_new(PTR_PTR_1126c9af0);
  func_0x000108534aa8(*(undefined8 *)(param_1 + 0x150));
  func_0x00010c222c00(puVar6);
  puVar8 = PTR_PTR_1126c4600;
  _objc_alloc_init(PTR_PTR_1126c4600);
  puVar9 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf88860();
  func_0x00010c16f020((double)(long)puVar10,puVar8);
  _objc_release(puVar9);
  func_0x00010c1cc120(puVar6);
  _objc_release(puVar8);
  func_0x00010630dac4(uVar17);
  func_0x00010c1ddc40(puVar6);
  func_0x00010630d890(uVar17);
  func_0x00010c1b6340(puVar6);
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (ppuVar19 == (undefined **)0x0) {
    ppuVar20 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(ppuVar19);
    ppuVar11 = ppuVar19;
    func_0x0001090967b0();
    if ((int)ppuVar11 == 0) {
      ppuVar11 = ppuVar19;
      func_0x000107de8b24(ppuVar19,1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = ppuVar11;
      func_0x00010c08fa60();
      ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      if (ppuVar20 == (undefined **)0x0) {
        _objc_opt_new();
      }
      else {
        func_0x00010c25da60();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar20 = ppuVar19;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar20;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar20);
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar20 = ppuVar13;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3ec40();
        func_0x00010bf06ba0(ppuVar12);
        _objc_release(ppuVar20);
      }
      ppuVar20 = ppuVar12;
      func_0x00010c08fa60();
      if (ppuVar20 != (undefined **)0x0) {
        func_0x00010bf06ba0(ppuVar12);
      }
      ppuVar20 = ppuVar12;
      func_0x00010c08fa60();
      if (ppuVar20 == (undefined **)0x0) {
        ppuVar20 = (undefined **)0x0;
      }
      else {
        ppuVar20 = ppuVar12;
        func_0x00010bf51e00();
      }
      _objc_release(ppuVar13);
      _objc_release(ppuVar12);
      _objc_release(ppuVar11);
    }
    else {
      ppuVar20 = ppuVar19;
      func_0x0001090967f8();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar19);
    ppuVar11 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar20 != (undefined **)0x0) {
      ppuVar11 = ppuVar20;
    }
    _objc_retain(ppuVar11);
  }
  _objc_release(ppuVar20);
  func_0x00010c1dd560(puVar6);
  puVar8 = PTR_PTR_1126b2340;
  uVar4 = uVar17;
  func_0x00010c118b40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077260(puVar8);
  func_0x00010c1c0e60(puVar6);
  _objc_release(uVar4);
  if ((((*(byte *)(param_1 + 0x113) & 1) == 0) && (*(char *)(param_1 + 0x114) != '\x01')) ||
     (uStack_90 != 0)) {
    uVar4 = uStack_90;
    func_0x00010c0c5180(uStack_90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar6);
    _objc_release(uVar4);
    uVar4 = uStack_90;
    func_0x00010bf4c700(uStack_90);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = uVar17;
    FUN_10630d2d4(uVar17,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar6);
    _objc_release(uVar4);
    uVar4 = uVar17;
    FUN_10630cf00(uVar17,0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c181f40(puVar6);
  _objc_release(uVar4);
  func_0x00010c1d8220(puVar6);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0eb3e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d56e0(puVar6);
  _objc_release(uVar14);
  uVar4 = uStack_90;
  func_0x00010c0c5ec0(uStack_90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4ee0(puVar6);
  _objc_release(uVar4);
  func_0x00010c1cba40(puVar6);
  FUN_10630276c(uVar17);
  func_0x00010c1c5440(puVar6);
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    func_0x00010c1b5880(puVar6);
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  else {
    func_0x00010c1b5880(puVar6);
  }
  puVar9 = PTR_PTR_1126c9a50;
  _objc_opt_new(PTR_PTR_1126c9a50);
  FUN_106305a48(uVar17);
  func_0x00010c1e3cc0(puVar9);
  puVar8 = PTR_PTR_1126c9a58;
  uVar4 = uVar17;
  func_0x00010c118b40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4220(puVar8);
  func_0x00010c163f80(puVar9);
  _objc_release(uVar4);
  puVar8 = PTR_PTR_1126c9a58;
  uVar4 = uVar17;
  func_0x00010c118b40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef60e0(puVar8);
  func_0x00010c164dc0(puVar9);
  _objc_release(uVar4);
  puVar8 = PTR_PTR_1126b2340;
  uVar4 = uVar17;
  func_0x00010c118b40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (puVar8 != (undefined *)0x0) {
    puVar10 = puVar8;
    func_0x00010c0844e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5f60(puVar9);
    _objc_release(puVar10);
    puVar10 = puVar8;
    func_0x00010c084c60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6360(puVar9);
    _objc_release(puVar10);
    puVar10 = puVar8;
    func_0x00010c084c80(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b63c0(puVar9);
    _objc_release(puVar10);
  }
  func_0x00010c1e3b40(puVar6);
  puVar10 = PTR_PTR_1126b2348;
  func_0x00010c0c4a80(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar16;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar10);
  uVar4 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  func_0x00010c0b4ca0(uVar4);
  _objc_release(uVar4);
  func_0x00010c214cc0(puVar6);
  if (uStack_90 != 0) {
    func_0x00010c243c60(uStack_90);
    func_0x00010c204820(puVar6);
  }
  if (uVar17 != 0) {
    func_0x00010c0ffbe0(PTR_PTR_1126c9a40);
    func_0x00010c1dd720(puVar6);
  }
  puVar10 = puVar18;
  func_0x000107cd4a6c(puVar18,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4bc0(puVar6);
  func_0x00010c231840(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c1b4080(puVar6);
  uVar14 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar14);
  ppuVar20 = ppuVar19;
  func_0x0001090967b0();
  if ((int)ppuVar20 != 0) {
    ppuVar20 = ppuVar19;
    func_0x00010909689c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1132c1770;
    _objc_release();
    if (ppuVar20 != (undefined **)puVar2) {
      uVar4 = uStack_90;
      func_0x00010c0c5180(uStack_90);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8fde0(param_1);
      _objc_release(uVar4);
    }
  }
  if (*(char *)(param_1 + 0x113) == '\x01') {
    _objc_retain(ppuVar19);
    uVar14 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined ***)(param_1 + 0xd0) = ppuVar19;
    _objc_release(uVar14);
  }
  if (param_7 != 0) {
    uVar14 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    _objc_release(uVar14);
    *(undefined8 *)(param_1 + 0xb0) = 0xffffffffffffffff;
    uVar14 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    _objc_release(uVar14);
  }
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(ppuVar11);
  _objc_release(puVar6);
  _objc_release(puVar18);
  _objc_release(ppuVar19);
  _objc_release(uStack_90);
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar17);
LAB_10630c214:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10630c248; end: 10630c52f; -[SCOperaPerformanceTrackingPlugin _stashPendingPlaybackError:errorType:page:params:userVisible:] */

void FUN_10630c248(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_7 != 0) && ((*(byte *)(param_1 + 0x114) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  if (((param_3 == 0) || ((*(byte *)(param_1 + 0x113) & 1) == 0)) ||
     (param_3 != *(long *)(param_1 + 0xd0))) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    *(long *)(param_1 + 0xb8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0xb0) = param_4;
    if (*(char *)(param_1 + 0x114) == '\x01') {
      *(char *)(param_1 + 0xa8) = (char)param_7;
    }
    else if ((*(byte *)(param_1 + 0x113) & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 0xc0) = 0;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 200);
      *(undefined8 *)(param_1 + 200) = 0;
      _objc_release(uVar2);
      goto LAB_10630c4dc;
    }
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126b2348;
    func_0x00010bf8b340();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2348;
    func_0x00010c0c4a80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c9898;
    func_0x00010bf15fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar4);
    puVar4 = puVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar7);
        }
        uVar2 = param_6;
        func_0x00010c0e00e0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(uVar2);
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = puVar7;
      func_0x00010bf52a60();
    }
    _objc_release(puVar7);
    puVar4 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
    _objc_release(param_6);
    uVar2 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar4;
    _objc_release(uVar2);
  }
LAB_10630c4dc:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (((*(char *)(param_3 + 0x113) == '\x01') && (*(long *)(param_3 + 0xb8) != 0)) &&
     ((*(long *)(param_3 + 0xc0) != 0 || (*(char *)(param_3 + 0x114) == '\x01')))) {
                    /* WARNING: Could not recover jumptable at 0x00010be18850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 10630c530; end: 10630c56b; -[SCOperaPerformanceTrackingPlugin _flushPendingPlaybackError] */

void FUN_10630c530(long param_1)

{
  if (((*(char *)(param_1 + 0x113) == '\x01') && (*(long *)(param_1 + 0xb8) != 0)) &&
     ((*(long *)(param_1 + 0xc0) != 0 || (*(char *)(param_1 + 0x114) == '\x01')))) {
                    /* WARNING: Could not recover jumptable at 0x00010be18850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__forceLogPlaybackError_errorType_112563bb0,*(long *)(param_1 + 0xb8),
               *(undefined8 *)(param_1 + 0xb0),*(long *)(param_1 + 0xc0),
               *(undefined8 *)(param_1 + 200),1);
    return;
  }
  return;
}



/* Entry: 10630c56c; end: 10630c617; -[SCOperaPerformanceTrackingPlugin _reportNonFatalNeoPlayerError:errorMessage:mediaId:] */

void FUN_10630c56c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b3e90;
  _objc_alloc_init(PTR_PTR_1126b3e90);
  func_0x00010c1cbfc0();
  lVar2 = *(long *)(param_1 + 0xa0);
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133420(lVar2,param_2,puVar1,0,param_4,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10630c618; end: 10630c61b; -[SCOperaPerformanceTrackingPlugin _informS2RInfoProviderWithPlaybackError:errorType:mediaMetaData:pageId:] */

void FUN_10630c618(void)

{
  return;
}



/* Entry: 10630c61c; end: 10630c6bf; -[SCOperaPerformanceTrackingPlugin _bandwidthRangeStringFromBps:] */

undefined ** FUN_10630c61c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  double dVar2;
  
  if (param_3 < 1) {
    return &PTR____CFConstantStringClassReference_110db8b78;
  }
  dVar2 = (double)param_3 / 1000000.0;
  if (dVar2 < 1.0) {
    return &PTR____CFConstantStringClassReference_110e4a498;
  }
  if (dVar2 < 2.5) {
    return &PTR____CFConstantStringClassReference_110e4a3f8;
  }
  if (dVar2 < 4.0) {
    return &PTR____CFConstantStringClassReference_110e4a4b8;
  }
  if (dVar2 < 8.0) {
    return &PTR____CFConstantStringClassReference_110e4a4d8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4a4f8;
  if (16.0 <= dVar2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e4a518;
  }
  return ppuVar1;
}



/* Entry: 10630c6c0; end: 10630c79f; -[SCOperaPerformanceTrackingPlugin _concatenatedStringForBSRWithItemType:mediaType:isFirstIndex:] */

void FUN_10630c6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  int param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4a538;
  if (param_5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e4a558;
  }
  _objc_retain(ppuVar1);
  _objc_retain(param_3);
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db8b78;
  if (param_4 != (undefined **)0x0) {
    ppuVar2 = param_4;
  }
  _objc_retain(ppuVar2);
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ddd478);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10630c7a0; end: 10630c7df; -[SCOperaPerformanceTrackingPlugin _determineBadSessionType] */

undefined ** FUN_10630c7a0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  bool bVar3;
  
  bVar3 = *(char *)(param_1 + 0x111) == '\0';
  ppuVar2 = &PTR____CFConstantStringClassReference_110dd2398;
  if (bVar3) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110df6578;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3e918;
  if (bVar3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dabe78;
  }
  if (*(char *)(param_1 + 0x110) == '\0') {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10630c7e0; end: 10630c9af; -[SCOperaPerformanceTrackingPlugin _onPITNTriggeredForPageId:params:] */

void FUN_10630c7e0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  *(undefined2 *)(param_2 + 0x110) = 0;
  uVar6 = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_2 + 0x120) = 0;
  _objc_retain(param_5);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126c9a68;
  func_0x00010bf157a0(PTR_PTR_1126c9a68);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c067fc0(uVar1);
  _objc_release(uVar1);
  lVar5 = param_2;
  func_0x00010bdd2940();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x120);
  *(long *)(param_2 + 0x120) = lVar5;
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126c9a68;
  func_0x00010c2a1420(PTR_PTR_1126c9a68);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    lVar5 = param_2;
    func_0x00010be74ce0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      func_0x00010c0b4ca0(uVar3);
      func_0x00010c2244e0(lVar5);
    }
    func_0x00010bf885a0(uVar3);
    if ((double)*(int *)(param_2 + 0x118) < param_1) {
      *(undefined1 *)(param_2 + 0x110) = 1;
    }
    _objc_release(lVar5);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


