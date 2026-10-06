/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c78618; end: 100c7861b; -[SCFeedAppUserLifecycleObserver onAppDidBecomeActive] */

void FUN_100c78618(void)

{
  return;
}



/* Entry: 100c7861c; end: 100c786a3;  */

void FUN_100c7861c(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_100c786a4;
    puStack_30 = &UNK_110842e18;
    func_0x000107c61174(param_1);
    lStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
    func_0x000107c61170(lStack_28);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100c786a4; end: 100c786ab;  */

void FUN_100c786a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be67c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onApplicationStateChange_1125778a8);
  return;
}



/* Entry: 100c786ac; end: 100c7873b; -[SCLocationSharingServiceV2 _onApplicationStateChange] */

void FUN_100c786ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x100c78e0c;
  puStack_48 = &UNK_110848c48;
  lStack_40 = param_1;
  puStack_38 = puVar2;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_60);
  return;
}



/* Entry: 100c7873c; end: 100c7878b;  */

void FUN_100c7873c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') {
    param_1 = param_1 + 0x30;
    func_0x000107c61148(param_1);
    func_0x000107c3c32c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100c7878c; end: 100c7878f; -[SCStoriesAppUserLifecycleObserver onAppDidBecomeActive] */

void FUN_100c7878c(void)

{
  return;
}



/* Entry: 100c78790; end: 100c787c3;  */

void FUN_100c78790(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c3ada4(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c787c4; end: 100c7884b; -[SCLensLogger _applicationDidBecomeActive] */

void FUN_100c787c4(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar1 = param_2;
  func_0x000107c4b3f8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4adac();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c6071c();
    dVar3 = param_1;
    func_0x000107c40f54(param_2);
    param_1 = param_1 - dVar3;
    func_0x000107c5ccf4(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c2184b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (dVar3 + param_1,param_2,PTR_s_setTotalInactiveTime__112663b50);
    return;
  }
  return;
}



/* Entry: 100c7884c; end: 100c7888f; -[SCLensLogger lensSessionId] */

void FUN_100c7884c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c40ff0();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c52060();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c78890; end: 100c788cb; -[SCLensLogger currentSessionInfo] */

void FUN_100c78890(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c611ec(param_1 + 0x158);
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  func_0x000107c61174(uVar1);
  func_0x000107c611f0(param_1 + 0x158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c788cc; end: 100c789ab;  */

/* WARNING: Possible PIC construction at 0x000100c78938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c78990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7893c) */
/* WARNING: Removing unreachable block (ram,0x000100c78994) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c788cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  lVar2 = param_1 + 0x30;
  func_0x000107c61148();
  if ((lVar2 != 0) && (lVar1 != 0)) {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) == '\x01') {
      lVar2 = lVar2 + _DAT_11276239c;
      func_0x000107c61148(lVar2);
      func_0x000107c43c9c();
    }
    else {
      lVar4 = (long)_DAT_1127623b0;
      if ((*(byte *)(lVar2 + lVar4) & 1) == 0) {
        bVar3 = *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
      }
      else {
        bVar3 = 1;
      }
      func_0x000107c3ada8(lVar2,param_2,lVar1,bVar3 & 1);
      *(undefined1 *)(lVar2 + lVar4) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100c789ac; end: 100c78a3b; -[SCMainCameraViewControllerStartupWorkflow _applicationDidBecomeActive:shouldStartCamera:] */

/* WARNING: Possible PIC construction at 0x000100c78a1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c78a20) */

void FUN_100c789ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_4 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c51804(puVar1,param_2,&PTR____CFConstantStringClassReference_110db92b8);
    func_0x000107c61180();
    func_0x000107c5ba90(param_1,param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 100c78a3c; end: 100c78a3f;  */

void FUN_100c78a3c(void)

{
  return;
}



/* Entry: 100c78a40; end: 100c78a6b;  */

void FUN_100c78a40(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c5deac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c78a6c; end: 100c78abf; -[SCCameraViewController viewDidBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c78a6c(long param_1,undefined8 param_2)

{
  func_0x000107c557ec(*(undefined8 *)(param_1 + _DAT_1127624bc),param_2,0);
  func_0x000107c5bad8(*(undefined8 *)(param_1 + _DAT_1127624cc));
                    /* WARNING: Could not recover jumptable at 0x00010be511d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logCameraCreationStep__112571e10,
             &PTR____CFConstantStringClassReference_110f4c418);
  return;
}



/* Entry: 100c78ac0; end: 100c78b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c78ac0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d33e8;
    func_0x000107c610f4(PTR_PTR_1126d33e8);
    lVar1 = param_1 + _DAT_112761348;
    func_0x000107c61148(lVar1);
    lVar2 = param_1 + _DAT_11276134c;
    func_0x000107c61148(lVar2);
    lVar3 = lVar2;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c487d0(puVar4,param_2,lVar1,lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c78b80; end: 100c78b97;  */

void FUN_100c78b80(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bed3bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s__updateBackgroundStartPageViewsO_1125928a0);
  return;
}



/* Entry: 100c78b98; end: 100c78da7; -[SCBatteryPageViewLogger _updateBackgroundStartPageViewsOnAppActiveAtTimestamp:cpuTime:] */

void FUN_100c78b98(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_3 + 0x30);
  func_0x000107c40808();
  lVar6 = 0;
  if (lVar1 != 0) {
    func_0x000107c49b10();
    func_0x000107c49b10();
    func_0x000107c3b818(param_3);
    lVar2 = *(long *)(param_3 + 0x30);
    func_0x000107c3db60();
    func_0x000107c61180();
    lVar6 = lVar2;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(lVar2);
        }
        uVar3 = *(undefined8 *)(param_3 + 0x30);
        func_0x000107c4d9e8(uVar3);
        func_0x000107c61180();
        puVar4 = PTR_PTR_1126b6fb0;
        func_0x000107c610f4(PTR_PTR_1126b6fb0);
        uVar8 = uVar3;
        func_0x000107c4f1fc(uVar3);
        func_0x000107c61180();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61180();
        func_0x000107c47d38(param_1,0xbf800000,param_2,puVar4);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar8);
        func_0x000107c56bd8(*(undefined8 *)(param_3 + 0x20));
        func_0x000107c5bb88(*(undefined8 *)(param_3 + 0x18));
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar3);
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      lVar6 = lVar2;
      func_0x000107c4080c();
    }
    func_0x000107c61170(lVar2);
    lVar6 = *(long *)(param_3 + 0x30);
    func_0x000107c4fe7c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  func_0x000107c60e78();
  if (*(char *)(*(long *)(lVar6 + 0x20) + 0x58) == *(char *)(lVar6 + 0x28)) {
    return;
  }
  *(char *)(*(long *)(lVar6 + 0x20) + 0x58) = *(char *)(lVar6 + 0x28);
  if ((*(byte *)(lVar6 + 0x28) & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x60);
    *(undefined **)(*(long *)(lVar6 + 0x20) + 0x60) = puVar4;
    func_0x000107c61170(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar6 + 0x20),PTR_s__updatePollingState_112594fa0);
  return;
}



/* Entry: 100c78da8; end: 100c78ecf;  */

void FUN_100c78da8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x58) == *(char *)(param_1 + 0x28)) {
    return;
  }
  *(char *)(*(long *)(param_1 + 0x20) + 0x58) = *(char *)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x60) = puVar1;
    func_0x000107c61170(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePollingState_112594fa0);
  return;
}



/* Entry: 100c78ed0; end: 100c78fbb; -[SCLocationSharingServiceV2 _logAppStateChangeGrapheneMetrics:] */

/* WARNING: Possible PIC construction at 0x000100c78f64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c78f68) */
/* WARNING: Removing unreachable block (ram,0x000100c78f80) */

void FUN_100c78ed0(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x000107c4a994();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e31418;
  if (lVar2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e313f8;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110db8b78;
  if (lVar2 != 2) {
    ppuVar3 = ppuVar1;
  }
  func_0x000107c61174(ppuVar3);
  if (param_3 == 0) {
    FUN_100c78ff0(*(undefined8 *)(param_1 + 0xf8),ppuVar3,1);
  }
  else {
    func_0x000105f16564(*(undefined8 *)(param_1 + 0xf8),1);
    if (*(long *)(param_1 + 0x108) != 0) {
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      func_0x000107c5c9ec();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 100c78fbc; end: 100c78fe7; -[SCDeviceLocationPermissionsManager lastAuthorizationStatus] */

undefined1 FUN_100c78fbc(int param_1)

{
  undefined1 uVar1;
  
  func_0x000107c407bc();
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = param_1 - 3U < 2;
  }
  return uVar1;
}



/* Entry: 100c78fe8; end: 100c78fef; -[SCDeviceLocationPermissionsManager coreLocationAuthorizationStatus] */

void FUN_100c78fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c088390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_lastAuthorizationStatus_1125ffaf0);
  return;
}



/* Entry: 100c78ff0; end: 100c79163;  */

void FUN_100c78ff0(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f34eb3c;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1108f86e0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(puVar1);
  return;
}



/* Entry: 100c79164; end: 100c79167;  */

void FUN_100c79164(void)

{
  return;
}



/* Entry: 100c79168; end: 100c791b3;  */

void FUN_100c79168(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c791b4; end: 100c791bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c791b4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  puVar3 = (undefined *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010ef85d60);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar5);
    puVar3 = puVar4;
    func_0x000107c5ed2c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c3fef8(uVar2);
  }
  else {
    uStack_80 = uVar5;
    puStack_78 = puVar3;
    uStack_70 = uVar2;
    uStack_68 = param_1;
    func_0x000100087bd4(FUN_100c7943c,auStack_90,PTR___sytN_11034f1b0 + 8);
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 100c791c0; end: 100c792db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c791c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010ef85d60);
    func_0x000107c466bc(puVar2);
    func_0x000107c61170(uVar3);
    puVar1 = puVar2;
    func_0x000107c5ed2c(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c3fef8(param_3);
  }
  else {
    uStack_80 = param_4;
    puStack_78 = puVar1;
    uStack_70 = param_3;
    uStack_68 = param_1;
    func_0x000100087bd4(FUN_100c7943c,auStack_90,PTR___sytN_11034f1b0 + 8);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100c792dc; end: 100c7943b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c792dc(long param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (param_1 == *(long *)(param_2 + _DAT_112da6f18)) {
    lVar2 = *(long *)(param_2 + _DAT_112da6ee8);
    func_0x000107c3dfc0();
    lVar1 = _DAT_112da6f00;
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_2 + _DAT_112da6ef8);
      *(undefined8 *)(param_2 + _DAT_112da6ef8) = *(undefined8 *)(param_2 + _DAT_112da6f00);
      func_0x000107c61174();
      func_0x000107c61170(uVar3);
      uVar3 = *(undefined8 *)(param_2 + lVar1);
      *(undefined **)(param_2 + lVar1) = param_4;
      func_0x000107c61174(param_4);
      func_0x000107c61170(uVar3);
      FUN_100c79458();
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + _DAT_112da6f08);
      *(undefined8 *)(param_2 + _DAT_112da6f08) = 0;
      func_0x000107c61170(uVar3);
    }
    *(undefined1 *)(param_2 + _DAT_112da6f10) = 0;
    FUN_100c79574(param_4);
    func_0x000107c3fefc(param_3);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010ef85d60);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar3);
    param_4 = puVar4;
    func_0x000107c5ed2c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c3fef8(param_3);
  }
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100c7943c; end: 100c79457;  */

void FUN_100c7943c(void)

{
  long unaff_x20;
  
  FUN_100c792dc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 100c79458; end: 100c79573;  */

/* WARNING: Possible PIC construction at 0x000100c794d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c794e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c79518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7953c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7951c) */
/* WARNING: Removing unreachable block (ram,0x000100c794ec) */
/* WARNING: Removing unreachable block (ram,0x000100c794dc) */
/* WARNING: Removing unreachable block (ram,0x000100c79540) */
/* WARNING: Removing unreachable block (ram,0x000100c79544) */
/* WARNING: Removing unreachable block (ram,0x000100c79558) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c79458(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c610f8(PTR_PTR_1126a7370);
  func_0x000107c458ac();
  lVar2 = *(long *)(unaff_x20 + _DAT_112da6f00);
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112da6ef8);
    lVar1 = lVar2;
    func_0x000107c61174(lVar2);
    FUN_100c79574(lVar2);
  }
  else {
    lVar1 = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61174();
    FUN_100c79574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c79574; end: 100c7972f;  */

void FUN_100c79574(long param_1)

{
  if (param_1 == 0) {
    func_0x000107c610f8(PTR_PTR_1126a7370);
    func_0x000107c458ac();
  }
  else {
    func_0x000107c61174();
    func_0x000107c3e640();
    func_0x000107c5b618();
    func_0x000107c3dae8();
    func_0x000107c4d7c8();
    func_0x000107c4b954();
    func_0x000107c5ca10();
    func_0x000107c41e4c();
    func_0x000107c5191c();
    func_0x000107c3daf0();
    func_0x000107c3e488();
    func_0x000107c610f8(PTR_PTR_1126a7370);
    func_0x000107c458ac();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100c79730; end: 100c79773;  */

void FUN_100c79730(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da6f68 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a7370;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112da6f68 = puVar1;
  return;
}



/* Entry: 100c79774; end: 100c7988b; -[SCNotificationOSSettingsInfo isEqual:] */

bool FUN_100c79774(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      func_0x000107c61158(param_1);
      uVar3 = param_3;
      func_0x000107c6115c(param_3,uVar2);
      if ((((uVar3 & 1) == 0) ||
          ((((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
             (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
            (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
           ((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20) ||
            (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))))))) ||
         ((*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30) ||
          (((*(long *)(param_1 + 0x38) != *(long *)(param_3 + 0x38) ||
            (*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40))) ||
           (*(long *)(param_1 + 0x48) != *(long *)(param_3 + 0x48))))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50);
      }
    }
  }
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 100c7988c; end: 100c79897;  */

void FUN_100c7988c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c79898; end: 100c798e7;  */

void FUN_100c79898(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c798e8; end: 100c79943; -[SCLocationSharingServiceV2 _publishDeviceDataAfterDelayIfNecessary] */

void FUN_100c798e8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  puStack_28 = &UNK_105f0c558;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e528(0x4008000000000000,*(undefined8 *)(param_1 + 0x48),param_2,&puStack_38);
  return;
}



/* Entry: 100c79944; end: 100c799cb; -[SCLocationSharingServiceV2 _updatePollingState] */

void FUN_100c79944(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c114();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 != 0) {
    func_0x000107c3caf8();
                    /* WARNING: Could not recover jumptable at 0x00010bedd810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePollingStateWithStreaming_112594fa8)
    ;
    return;
  }
  func_0x000107c3cafc(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bedd830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePollingStateWithoutStream_112594fb0);
  return;
}



/* Entry: 100c799cc; end: 100c79a8f; -[SCMapGRPCValisService streamActive] */

byte FUN_100c799cc(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x000107c49be8();
  if (iVar2 == 0) {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    func_0x000107c4e530(*(undefined8 *)(param_1 + 0x18));
    bVar1 = *(byte *)(puStack_38 + 3);
    func_0x000107c60bcc(&uStack_40,8);
  }
  else {
    bVar1 = *(long *)(param_1 + 0x20) != 0;
  }
  return bVar1 & 1;
}



/* Entry: 100c79a90; end: 100c79bf7; -[SCCameraViewController _logCameraCreationStep:] */

/* WARNING: Possible PIC construction at 0x000100c79af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c79bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c79bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c79bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c79b20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c79bc8) */
/* WARNING: Removing unreachable block (ram,0x000100c79bb8) */
/* WARNING: Removing unreachable block (ram,0x000100c79af4) */
/* WARNING: Removing unreachable block (ram,0x000100c79b24) */
/* WARNING: Removing unreachable block (ram,0x000100c79bd8) */
/* WARNING: Removing unreachable block (ram,0x000100c79b30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c79a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  lVar3 = (long)_DAT_1127624bc;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x000107c45058();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3f5f4();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x000107c5dd70(lVar1);
    func_0x000107c61180();
    func_0x000107c3f5f4();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c79bf8; end: 100c79bff; -[SCCameraViewControllerInternalState imageCaptureConfiguration] */

undefined8 FUN_100c79bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 100c79c00; end: 100c79c07; -[SCCameraViewControllerInternalState videoCaptureConfiguration] */

undefined8 FUN_100c79c00(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 100c79c08; end: 100c79c33;  */

void FUN_100c79c08(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3ada4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c79c34; end: 100c79ccf; -[SCFeatureRingFlashImpl _applicationDidBecomeActive] */

void FUN_100c79c34(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  puStack_28 = &UNK_106184ba0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  FUN_100c749e0(0x3e4ccccd,"APPSTORE",&puStack_38);
  return;
}



/* Entry: 100c79cd0; end: 100c79cd3;  */

void FUN_100c79cd0(void)

{
  return;
}



/* Entry: 100c79cd4; end: 100c79d63;  */

/* WARNING: Possible PIC construction at 0x000100c79d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c79d4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c79d34) */
/* WARNING: Removing unreachable block (ram,0x000100c79d3c) */

void FUN_100c79cd4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c3b550(lVar1);
    param_1 = param_1 + 0x28;
    func_0x000107c61148();
    if (param_1 != 0) {
      func_0x000107c5bcc0(param_1);
      func_0x000107c61180();
      func_0x000107c3ded8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c79d64; end: 100c79d97; -[SCCameraViewControllerStartupWorkflow _disposeRecoveryDeferredUntilActiveObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c79d64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127626c8;
  func_0x000107c4218c(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c79d98; end: 100c79da7; -[SCPublishSubject unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c79d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796804),PTR_s_removeObserver__112628f78);
  return;
}



/* Entry: 100c79da8; end: 100c79df7;  */

/* WARNING: Possible PIC construction at 0x000100c79de4: Changing call to branch */

void FUN_100c79da8(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c4168c(param_1);
    func_0x000107c61180();
    func_0x000107c4b16c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c79df8; end: 100c79e17; -[SCFeatureLensFeedImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c79df8(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112742870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c79e18; end: 100c79e1f; -[SCFeatureLensFeedDelegateHandler lensFeedFeatureDidResignActive:] */

void FUN_100c79e18(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 100c79e20; end: 100c79e57;  */

void FUN_100c79e20(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    func_0x000107c3c460(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c79e58; end: 100c79f33; -[SCBlackCameraNoOutputDetectorImpl _scheduleCheck] */

void FUN_100c79e58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x000107c61144(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    puStack_40 = &UNK_1085a8150;
    puStack_38 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_30,auStack_28);
    uVar1 = 0;
    func_0x0001008553e8(0,&puStack_50);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    func_0x000107c61170(uVar2);
    uVar1 = 0x4008000000000000;
    if (*(char *)(param_1 + 9) == '\0') {
      uVar1 = 0x3fe0000000000000;
    }
    func_0x000107c4e528(uVar1,*(undefined8 *)(param_1 + 0x38));
    func_0x000107c61120(auStack_30);
    func_0x000107c61120(auStack_28);
  }
  return;
}



/* Entry: 100c79f34; end: 100c79fff;  */

void FUN_100c79f34(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    puVar2 = &UNK_1105e9af8;
    func_0x000107c613fc(&UNK_1105e9af8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,lVar1);
    func_0x0001001ca524(5,0,0x58,1,0,0,&UNK_10db65090,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574(puVar2);
    if ((*(int *)(lVar1 + 0x40) == 6) || (*(int *)(lVar1 + 0x40) == 1)) {
      func_0x000102f2a7a0();
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100c7a000; end: 100c7a007;  */

void FUN_100c7a000(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    puVar2 = &UNK_110472330;
    func_0x000107c613fc(&UNK_110472330,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,lVar1);
    pcStack_58 = FUN_100c7a33c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104723b0;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c61174(uVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 100c7a008; end: 100c7a103;  */

void FUN_100c7a008(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    puVar1 = &UNK_110472330;
    func_0x000107c613fc(&UNK_110472330,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_2);
    pcStack_58 = FUN_100c7a33c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104723b0;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_50;
    func_0x000107c61174(uVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 100c7a104; end: 100c7a107;  */

void FUN_100c7a104(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100c7a108; end: 100c7a10b; -[SCNotificationAppUserLifecycleObserver onAppDidBecomeActive] */

void FUN_100c7a108(void)

{
  return;
}



/* Entry: 100c7a10c; end: 100c7a12b;  */

void FUN_100c7a10c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c7a12c; end: 100c7a12f; -[_TtC25SCBlizzardGeoSignalFeeder42SCBlizzardGeoSignalFeederLifecycleObserver onAppDidBecomeActive] */

void FUN_100c7a12c(void)

{
  return;
}



/* Entry: 100c7a130; end: 100c7a133; -[SCApplicationLoggerWithUserLifecycleObserver onAppDidBecomeActive] */

void FUN_100c7a130(void)

{
  return;
}



/* Entry: 100c7a134; end: 100c7a153; -[SCTIVAppUserLifecycleObserver onAppDidBecomeActive] */

void FUN_100c7a134(void)

{
  return;
}



/* Entry: 100c7a154; end: 100c7a1bb; -[SCLocationSharingServiceV2 _turnOffStreamingUpdates] */

/* WARNING: Possible PIC construction at 0x000100c7a18c: Changing call to branch */

void FUN_100c7a154(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    func_0x000107c3c2e8(param_1);
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    if (*(long *)(param_1 + 0x98) == 0) {
      return;
    }
    func_0x000107c498f8();
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  else {
    func_0x000107c498f8();
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c7a1bc; end: 100c7a1f7; -[SCLocationSharingServiceV2 _removeRequestForDeviceLocation] */

void FUN_100c7a1bc(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    func_0x000107c5d320();
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 100c7a1f8; end: 100c7a33b; -[SCLocationSharingServiceV2 _updatePollingStateWithoutStreaming] */

/* WARNING: Possible PIC construction at 0x000100c7a230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7a2f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7a234) */
/* WARNING: Removing unreachable block (ram,0x000100c7a238) */
/* WARNING: Removing unreachable block (ram,0x000100c7a24c) */
/* WARNING: Removing unreachable block (ram,0x000100c7a244) */
/* WARNING: Removing unreachable block (ram,0x000100c7a250) */
/* WARNING: Removing unreachable block (ram,0x000100c7a264) */
/* WARNING: Removing unreachable block (ram,0x000100c7a258) */
/* WARNING: Removing unreachable block (ram,0x000100c7a268) */
/* WARNING: Removing unreachable block (ram,0x000100c7a288) */
/* WARNING: Removing unreachable block (ram,0x000100c7a300) */
/* WARNING: Removing unreachable block (ram,0x000100c7a28c) */
/* WARNING: Removing unreachable block (ram,0x000100c7a298) */
/* WARNING: Removing unreachable block (ram,0x000100c7a29c) */
/* WARNING: Removing unreachable block (ram,0x000100c7a324) */
/* WARNING: Removing unreachable block (ram,0x000107c3c4f0) */
/* WARNING: Removing unreachable block (ram,0x00010be9f660) */
/* WARNING: Removing unreachable block (ram,0x000100c7a2a0) */
/* WARNING: Removing unreachable block (ram,0x000100c7a274) */
/* WARNING: Removing unreachable block (ram,0x000100c7a2f8) */
/* WARNING: Removing unreachable block (ram,0x000100c7a310) */

void FUN_100c7a1f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5c114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c7a33c; end: 100c7a343;  */

void FUN_100c7a33c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x38) & 1) == 0) {
      lVar4 = *(long *)(lVar1 + 0x18);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar2 = lVar4;
        func_0x000107c3ebc0();
        if ((int)lVar2 == 0) {
          func_0x000107c615e8(lVar4);
        }
        else {
          lVar2 = *(long *)(lVar1 + 0x20);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar2 != 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c45a48();
            func_0x000107c5490c(lVar2);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(puVar3);
          }
          func_0x000107c615e8(lVar4);
          *(undefined1 *)(lVar1 + 0x38) = 1;
        }
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 100c7a344; end: 100c7a447;  */

void FUN_100c7a344(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar1 = lVar3;
        func_0x000107c3ebc0();
        if ((int)lVar1 == 0) {
          func_0x000107c615e8(lVar3);
        }
        else {
          lVar1 = *(long *)(param_1 + 0x20);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar1 != 0) {
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c45a48();
            func_0x000107c5490c(lVar1);
            func_0x000107c61170(lVar1);
            func_0x000107c61170(puVar2);
          }
          func_0x000107c615e8(lVar3);
          *(undefined1 *)(param_1 + 0x38) = 1;
        }
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 100c7a448; end: 100c7a483; -[SCAppGroupPlistStorage boolForKey:] */

undefined8 FUN_100c7a448(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3bfec();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3ebcc();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100c7a484; end: 100c7a4d7; -[SCAInstallSessionMetadata setEnableAdTracking:] */

void FUN_100c7a484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_11102c938,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c7a4d8; end: 100c7a4ef; -[SCAInstallSessionMetadata setAdvertisingId:] */

void FUN_100c7a4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad558,2,param_3,0);
  return;
}



/* Entry: 100c7a4f0; end: 100c7a507; -[SCAInstallSessionMetadata setAppsScopeId:] */

void FUN_100c7a4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad578,4,param_3,0);
  return;
}



/* Entry: 100c7a508; end: 100c7a50f; -[KSCrash applicationDidBecomeActive] */

/* WARNING: Removing unreachable block (ram,0x000100c7a54c) */

void FUN_100c7a508(undefined8 param_1)

{
  if (cRam000000011381b4f8 == '\x01') {
    uRam000000011381b4d8 = 1;
    FUN_100c7a588();
    uRam000000011381b4d0 = param_1;
  }
  return;
}



/* Entry: 100c7a510; end: 100c7a587;  */

void FUN_100c7a510(double param_1,int param_2)

{
  double dVar1;
  
  dVar1 = dRam000000011381b4d0;
  if (cRam000000011381b4f8 == '\x01') {
    uRam000000011381b4d8 = (undefined1)param_2;
    if (param_2 == 0) {
      FUN_100c7a588();
      dRam000000011381b4b8 = dRam000000011381b4b8 + (param_1 - dVar1);
      dRam000000011381b4a0 = (param_1 - dVar1) + dRam000000011381b4a0;
    }
    else {
      FUN_100c7a588();
      dRam000000011381b4d0 = param_1;
    }
  }
  return;
}



/* Entry: 100c7a588; end: 100c7a5cb;  */

double FUN_100c7a588(void)

{
  long lStack_20;
  int iStack_18;
  
  func_0x000107c61020(&lStack_20,0);
  return (double)iStack_18 / 1000000.0 + (double)lStack_20;
}



/* Entry: 100c7a5cc; end: 100c7a65f; -[SCBlizzardEventLoggerAdapter _applicationDidBecomeActive] */

void FUN_100c7a5cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc890;
  func_0x000107c51930(0x4014000000000000,PTR_PTR_1126bc890,param_2,param_1,
                      PTR_s__notifyLoggersToMaybeFlushWithTi_112533238,0,1);
  func_0x000107c61180();
  func_0x000107c54b30(param_1);
  func_0x000107c61170(puVar1);
  uVar2 = param_1;
  func_0x000107c3e5a8(param_1);
  func_0x000107c61180();
  func_0x000107c498f8();
  func_0x000107c61170(uVar2);
  func_0x000107c52b5c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c16e630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setBackgroundFlushCounter__1126393a8,0);
  return;
}



/* Entry: 100c7a660; end: 100c7a68f; -[SCBlizzardEventLoggerAdapter setForegroundDiskFlushTimer:] */

void FUN_100c7a660(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c7a690; end: 100c7a6bf; -[SCBlizzardEventLoggerAdapter setBackgroundDiskFlushTimer:] */

void FUN_100c7a690(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c7a6c0; end: 100c7a6c7; -[SCAppNotificationProvider applicationDidBecomeActive] */

void FUN_100c7a6c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf077d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_applicationDidChangeState__11259f798,1);
  return;
}



/* Entry: 100c7a6c8; end: 100c7a863; -[SCAppNotificationProvider applicationDidChangeState:] */

void FUN_100c7a6c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c3c91c();
  func_0x000107c4b9fc(PTR_PTR_1126b7550);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5b568();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000107c5b568();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61144(auStack_48,param_1);
  puVar4 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x000107c40f90(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_58,auStack_48);
  uStack_50 = param_3;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c4401c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_58);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100c7a864; end: 100c7a8bf; -[SCAppNotificationProvider _storeForegroundStateForExtensions:] */

void FUN_100c7a864(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_100c7a9e0;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010007380c(*(undefined8 *)(param_1 + 0x50),&puStack_40);
  return;
}



/* Entry: 100c7a8c0; end: 100c7a8cb; +[SCNotificationDebuggerLogger logAppState:] */

void FUN_100c7a8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be503b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAppState_logMethod__112571a88,param_3,
             &PTR___NSConcreteGlobalBlock_11098d098);
  return;
}



/* Entry: 100c7a8cc; end: 100c7a9df; +[SCNotificationDebuggerLogger _logAppState:logMethod:] */

/* WARNING: Possible PIC construction at 0x000100c7a984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7a9bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7a988) */
/* WARNING: Removing unreachable block (ram,0x000100c7a9c0) */

void FUN_100c7a8cc(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61174(param_4);
  func_0x000107c61160(puVar2);
  func_0x000107c56bcc();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  func_0x000107c56bcc(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110e9f778);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x000107c4b834(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  func_0x000107c61180();
  func_0x000107c3ce94();
  func_0x000107c61180();
  func_0x000107c56bcc(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110dd1bd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 100c7a9e0; end: 100c7aa57;  */

void FUN_100c7a9e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c52de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c7aa58; end: 100c7aacb; -[SCAppExtensionDefaultsImpl initWithNSUserDefaults:] */

undefined1 * FUN_100c7aa58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702b48;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c7aacc; end: 100c7aad3; -[SCAppExtensionDefaultsImpl setBool:forKey:] */

void FUN_100c7aacc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c172ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBool_forKey__11263a618);
  return;
}



/* Entry: 100c7aad4; end: 100c7ab87; +[SCNotificationDebuggerLogger _getJsonFromDictionary:] */

void FUN_100c7aad4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c41300();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4adac();
  puVar3 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c46368();
    puVar3 = puVar2;
    func_0x000107c5c184();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c7ab88; end: 100c7ab8b;  */

void FUN_100c7ab88(void)

{
  return;
}



/* Entry: 100c7ab8c; end: 100c7ac57; -[SCAppNotificationSequencer snapshotForAppStateChangeClear] */

void FUN_100c7ab8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c40808(lVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x000107c40808(lVar2);
  func_0x000107c3e170(puVar3,param_2,lVar1 + lVar2 + 1);
  func_0x000107c61180();
  func_0x000107c3d7a0();
  func_0x000107c3d7a0(puVar3,param_2,*(undefined8 *)(param_1 + 0x28));
  lVar1 = param_1;
  func_0x000107c3d164();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 != 0) {
    func_0x000107c3d164(param_1);
    func_0x000107c61180();
    func_0x000107c3d798(puVar3,param_2,param_1);
    func_0x000107c61170(param_1);
  }
  puVar4 = puVar3;
  func_0x000107c40794(puVar3);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c7ac58; end: 100c7ac5f; -[SCAppNotificationSequencer activeNotification] */

undefined8 FUN_100c7ac58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 100c7ac60; end: 100c7ac67; -[SCUserNotificationCenterController snapshotForAppStateChangeClear] */

void FUN_100c7ac60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c245f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_snapshotPendingNotifications_11266f1e8);
  return;
}



/* Entry: 100c7ac68; end: 100c7aca7; -[SCAppNotificationBatcher snapshotPendingNotifications] */

void FUN_100c7ac68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c3dbc0(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c40794();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100c7aca8; end: 100c7b003; -[SCFrameRateMonitor _didDisplayLinkFired:] */

void FUN_100c7aca8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61174(param_4);
  func_0x000107c5ca64(param_4);
  func_0x000107c4f2a0(*(undefined8 *)(param_2 + 0x38));
  uVar1 = *(ulong *)(param_2 + 0x40);
  dVar10 = param_1;
  func_0x000107c4f2a0(param_1);
  if (*(char *)(param_2 + 0x11) == '\x01') {
    uVar1 = *(ulong *)(param_2 + 0x48);
    func_0x000107c5c750(param_4);
    func_0x000107c4f2a4(param_1,dVar10);
  }
  dVar10 = *(double *)(param_2 + 0x18);
  if (dVar10 <= 0.0) {
    uVar9 = *(ulong *)(param_2 + 0x30);
    FUN_100c7b330();
    puVar2 = PTR_PTR_1126dd6c0;
    func_0x000107c5ca64(param_4);
    func_0x000107c41b40(puVar2);
    func_0x000107c61180();
    func_0x000107c61144(auStack_68,param_2);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x100c7b628;
    puStack_78 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_70,auStack_68);
    func_0x000107c61184();
    puVar4 = (undefined1 *)ppuVar3;
    FUN_100c7b4ac();
    func_0x000107c6106c();
    *(undefined1 **)(param_2 + 0x20) = puVar4;
    if (((*(byte *)(param_2 + 0x28) & 1) == 0) && ((uVar1 & 0xffffffff) <= uVar9)) {
      param_1 = (double)(long)puVar4;
      func_0x000100c7b6e4();
      *(undefined1 *)(param_2 + 0x28) = 1;
    }
    func_0x000107c61170(ppuVar3);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  else {
    param_1 = param_1 - dVar10;
    puVar2 = PTR_PTR_1126dd6a0;
    func_0x000107c4a8b8();
    if (param_1 <= dVar10) {
      uVar1 = *(long *)(param_2 + 0x30) + 1;
      *(ulong *)(param_2 + 0x30) = uVar1;
    }
    else {
      *(undefined8 *)(param_2 + 0x30) = 0;
      func_0x000107c6106c();
      *(undefined **)(param_2 + 0x20) = puVar2;
      func_0x000107c2ba88();
      uVar1 = *(ulong *)(param_2 + 0x30);
    }
    FUN_100c7b330();
    if (((*(byte *)(param_2 + 0x28) & 1) == 0) && (((ulong)puVar2 & 0xffffffff) <= uVar1)) {
      dVar10 = (double)*(long *)(param_2 + 0x20);
      func_0x000100c7b6e4();
      *(undefined1 *)(param_2 + 0x28) = 1;
    }
    puVar2 = PTR_PTR_1126dd6c0;
    func_0x000107c5ca64(param_4);
    func_0x000107c41b44(puVar2);
    func_0x000107c61180();
    func_0x000107c4a9cc(*(undefined8 *)(param_2 + 0x38));
    dVar11 = dVar10;
    func_0x000107c43618(*(undefined8 *)(param_2 + 0x38));
    dVar10 = dVar10 - dVar11;
    if (1.0 < dVar10) {
      uVar8 = *(undefined8 *)(param_2 + 0x50);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      func_0x000107c5caf4(uVar5);
      func_0x000107c61180();
      func_0x000107c428e0(uVar8);
      func_0x000107c61170(uVar5);
      func_0x000107c504e8(*(undefined8 *)(param_2 + 0x38));
    }
    func_0x000107c4a9cc(*(undefined8 *)(param_2 + 0x40));
    param_1 = dVar10;
    func_0x000107c43618(*(undefined8 *)(param_2 + 0x40));
    param_1 = dVar10 - param_1;
    if (0.5 < param_1) {
      func_0x000107c43904(*(undefined8 *)(param_2 + 0x40));
      func_0x000107c504e8(*(undefined8 *)(param_2 + 0x40));
      puVar6 = PTR_PTR_1126b3130;
      func_0x000107c5aa04(PTR_PTR_1126b3130);
      func_0x000107c61180();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d954(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61180();
      func_0x000107c3df04(puVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
    }
  }
  func_0x000107c5c750(param_4);
  *(double *)(param_2 + 0x18) = param_1;
  func_0x000107c3bfdc(param_2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100c7b004; end: 100c7b0cf; -[SCFrameRateLogger processFrameTime:] */

void FUN_100c7b004(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  func_0x000107c61174();
  func_0x000107c611a4(param_2);
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x48) = 1;
    *(double *)(param_2 + 0x50) = param_1;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  else {
    dVar1 = *(double *)(param_2 + 0x40);
    dVar2 = (param_1 - *(double *)(param_2 + 0x58)) - dVar1;
    if (*(double *)(param_2 + 8) < dVar2) {
      *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + 1;
      dVar3 = dVar2;
      if (dVar2 <= *(double *)(param_2 + 0x10)) {
        dVar3 = *(double *)(param_2 + 0x10);
      }
      *(double *)(param_2 + 0x10) = dVar3;
      *(double *)(param_2 + 0x18) = dVar2 + *(double *)(param_2 + 0x18);
      if (dVar1 * 4.0 < dVar2) {
        *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + (long)(dVar2 / dVar1);
      }
    }
  }
  *(double *)(param_2 + 0x58) = param_1;
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  func_0x000107c611a8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c7b0d0; end: 100c7b1e3; -[SCBadFrameRateStatsTracker processFrameTimestamp:frameTargetTimestamp:] */

void FUN_100c7b0d0(double param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((*(byte *)(param_3 + 0x80) & 1) == 0) {
    *(undefined1 *)(param_3 + 0x80) = 1;
    *(undefined8 *)(param_3 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x30) = 0;
    *(undefined8 *)(param_3 + 0x28) = 0;
  }
  else if (*(char *)(param_3 + 0x81) == '\x01') {
    *(undefined1 *)(param_3 + 0x81) = 0;
  }
  else {
    dVar2 = param_1 - *(double *)(param_3 + 0x40);
    func_0x000107c3ba58(dVar2,param_3);
    dVar1 = *(double *)(param_3 + 0x38);
    dVar3 = param_1 - dVar1;
    func_0x000107c4a8b8(PTR_PTR_1126dd6a0);
    if (dVar1 < dVar3) {
      func_0x000107c3c520(dVar2,param_3);
      *(double *)(param_3 + 0x28) = dVar2 + *(double *)(param_3 + 0x28);
      *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 1;
      if ((0.25 < dVar2) &&
         (*(double *)(param_3 + 0x30) = dVar2 + *(double *)(param_3 + 0x30),
         *(double *)(param_3 + 0x50) < dVar2)) {
        *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + 1;
      }
      func_0x000107c3ba50(dVar2,param_3);
    }
  }
  *(undefined8 *)(param_3 + 0x38) = param_2;
  *(double *)(param_3 + 0x40) = param_1;
  *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdf5b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__createWatchdogTimerIfNecessary_11255b080);
  return;
}



/* Entry: 100c7b1e4; end: 100c7b32f; -[SCBadFrameRateStatsTracker _createWatchdogTimerIfNecessary] */

/* WARNING: Possible PIC construction at 0x000100c7b2a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7b2ac) */

void FUN_100c7b1e4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x70);
    if (lVar3 == 0) {
      puVar2 = PTR___dispatch_source_type_timer_11034be38;
      func_0x000107c60f84(PTR___dispatch_source_type_timer_11034be38,0,0,
                          *(undefined8 *)(param_1 + 0x78));
      uVar1 = *(undefined8 *)(param_1 + 0x70);
      *(undefined **)(param_1 + 0x70) = puVar2;
      func_0x000107c61170(uVar1);
      lVar3 = *(long *)(param_1 + 0x70);
      uVar1 = 0;
      func_0x000107c60f94(0,(long)(*(double *)(param_1 + 0x50) * 1000000000.0));
    }
    else {
      uVar1 = 0;
      func_0x000107c60f94(0,(long)(*(double *)(param_1 + 0x50) * 1000000000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_source_set_timer_11034c1a0)(lVar3,uVar1,0xffffffffffffffff,0);
    return;
  }
  return;
}



/* Entry: 100c7b330; end: 100c7b397;  */

undefined4 FUN_100c7b330(void)

{
  if (lRam00000001137fc0a0 != -1) {
    func_0x00010002a2fc(0x1137fc0a0,&PTR___NSConcreteGlobalBlock_110d663f8);
  }
  return uRam00000001137fc024;
}



/* Entry: 100c7b398; end: 100c7b48f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7b398(undefined8 param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_2;
  func_0x0001000b5fdc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_11307ccd0) = 0;
  plVar1 = (long *)(lVar4 + _DAT_11307ccd8);
  *plVar1 = param_2;
  *(undefined1 *)(plVar1 + 1) = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11307cce0);
  *puVar2 = param_1;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined1 *)(lVar4 + _DAT_11307cce8) = param_3;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11307ccf0);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11307ccf8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307cd00) = 2;
  *(undefined1 *)(lVar4 + _DAT_11307cd08) = 2;
  puVar2 = (undefined8 *)(lVar4 + _DAT_11307cd10);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c7b490; end: 100c7b4ab; +[SCFrameInfo didDisplayFirstFrameWithState:timestamp:hasUIStabilized:] */

void FUN_100c7b490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100c7b398(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c7b4ac; end: 100c7b5d7;  */

void FUN_100c7b4ac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uStack_38;
  uint uStack_34;
  
  lVar1 = param_1;
  func_0x000107c61174();
  if ((bRam0000000113839501 & 1) == 0) {
    func_0x000107c6106c();
    func_0x000107c6109c(&uStack_38);
    uRam00000001138394b8 = 0;
    if ((ulong)uStack_34 * 1000 != 0) {
      uRam00000001138394b8 = (lVar1 * (ulong)uStack_38) / ((ulong)uStack_34 * 1000);
    }
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c4e460();
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c427e8();
    func_0x000107c61170(puVar2);
    uRam0000000113839440 = 0;
    if (param_1 != 0) {
      (**(code **)(param_1 + 0x10))(param_1);
    }
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c50718();
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c4e460();
    func_0x000107c61170(puVar2);
    bRam0000000113839501 = 1;
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100c7b5d8; end: 100c7b677; -[SCTracer pauseAsyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7b5d8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_11309bf58;
    func_0x000107c61618();
    if (param_1 != 0) {
      func_0x000107c4e460();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 100c7b678; end: 100c7b693; -[SCStartupCompleteTrigger firstUIFrameRendered] */

void FUN_100c7b678(long param_1)

{
  *(undefined1 *)(param_1 + 9) = 1;
  if (*(char *)(param_1 + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bec23f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startupComplete_11258e2a0);
    return;
  }
  return;
}


