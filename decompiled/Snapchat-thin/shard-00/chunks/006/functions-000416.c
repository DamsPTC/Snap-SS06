/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10089fee0; end: 10089feef; -[SCScalingButton setOnlyScaleImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10089fee0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e134) = param_3;
  return;
}



/* Entry: 10089fef0; end: 10089ff3f; -[SCCameraToolbarItemImpl didChangeSelectedEvent] */

void FUN_10089fef0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0x60);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10089ff40; end: 10089ffbf; -[SCHTTPRequestCallback _finishBandwidthUsageUpdateWithAllHeaderFields:] */

/* WARNING: Possible PIC construction at 0x00010089ffa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010089ffa4) */

void FUN_10089ff40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7410;
  func_0x000107c5a9bc(PTR_PTR_1126b7410);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar2);
  func_0x000107c61180();
  func_0x000107c4a8c4();
  func_0x000107c61180();
  func_0x000107c43598(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10089ffc0; end: 1008a000f; -[SCCameraToolbarItemImpl needsDisplayEvent] */

void FUN_10089ffc0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    *(undefined **)(param_1 + 0x98) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0x98);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1008a0010; end: 1008a0083; -[SCBandwidthEstimatorExperiment finishDownloadBandwidthEstimationWithRequestKey:] */

void FUN_1008a0010(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    puVar1 = param_1;
    func_0x000107c4a9bc();
    puVar3 = PTR_PTR_1126dfe40;
    puVar2 = param_1;
    func_0x000107c3ef4c(param_1);
    func_0x000107c43f08(puVar3,param_2,puVar2);
    if (puVar1 != puVar3) {
      func_0x000107c4225c(param_1,param_2,puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008a0084; end: 1008a00d3; -[SCCameraToolbarItemImpl didChangeToolbarItemEvent] */

void FUN_1008a0084(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0x70);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1008a00d4; end: 1008a0123; -[SCCameraToolbarItemImpl didChangeLoadingStateEvent] */

void FUN_1008a00d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0x80);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1008a0124; end: 1008a0133; -[SCCameraToolbarButtonImpl setProvidesHapticFeedback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a0124(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127429cc) = param_3;
  return;
}



/* Entry: 1008a0134; end: 1008a0147; -[SCCameraToolbarButtonImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a0134(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742a2c,param_3);
  return;
}



/* Entry: 1008a0148; end: 1008a016b; -[SCCameraToolbarItemImpl copyWithZone:] */

undefined8 FUN_1008a0148(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 1008a016c; end: 1008a02fb; -[SCCameraVerticalToolbar _shouldHideToolbarItem:withButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1008a016c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = param_3;
  func_0x000107c4e35c();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 == 0) {
LAB_1008a0264:
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112742b3c);
    func_0x000107c5dfc4(uVar5);
    lVar1 = param_3;
    func_0x000107c4a3b4(param_3);
    func_0x000107c3bb30(param_1,param_2,uVar5,param_3,lVar1);
    if (((int)param_1 == 0) || (uVar5 = param_4, func_0x000107c49c70(), (int)uVar5 != 0)) {
      lVar1 = param_3;
      func_0x000107c4a404(param_3);
      uVar4 = (uint)lVar1 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112742b84);
    lVar1 = param_3;
    func_0x000107c4e35c(param_3);
    func_0x000107c61180();
    func_0x000107c4d9e8(uVar5,param_2,lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = param_3;
    func_0x000107c4e35c(param_3);
    func_0x000107c61180();
    uVar2 = param_1;
    func_0x000107c3babc(param_1,param_2,lVar1);
    if ((uVar2 & 1) == 0) {
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uVar5);
    }
    else {
      lVar3 = param_3;
      func_0x000107c4e35c(param_3);
      func_0x000107c61180();
      uVar2 = param_1;
      func_0x000107c3c75c(param_1,param_2,lVar3,uVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uVar5);
      if ((uVar2 & 1) == 0) goto LAB_1008a0264;
    }
    uVar4 = 1;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return uVar4;
}



/* Entry: 1008a02fc; end: 1008a035f; +[SCConnectionClassManagerV2 getBandwidthClass:] */

undefined8 FUN_1008a02fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 5;
  if (0xf9ffff < param_3) {
    uVar1 = 6;
  }
  uVar2 = 4;
  if (0x7cffff < param_3) {
    uVar2 = uVar1;
  }
  uVar1 = 3;
  if (0x3e7fff < param_3) {
    uVar1 = uVar2;
  }
  uVar2 = 2;
  if (0x18ffff < param_3) {
    uVar2 = uVar1;
  }
  uVar1 = 1;
  if (0xc7fff < param_3) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (0x63fff < param_3) {
    uVar2 = uVar1;
  }
  uVar1 = 0xffffffffffffd8f1;
  if ((param_3 & 0x8000000000000000) == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1008a0360; end: 1008a03df; -[SCBandwidthEstimatorExperiment downloadConnectionClassDidChange:] */

void FUN_1008a0360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1008a0f7c;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_1;
  uStack_28 = param_3;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_50);
  puVar1 = PTR_PTR_1126dfd70;
  func_0x000107c3ab20(PTR_PTR_1126dfd70,param_2,param_3);
  func_0x000107c4d884(param_1,param_2,puVar1);
  return;
}



/* Entry: 1008a03e0; end: 1008a03ef; -[SCCameraToolbarButtonImpl isDisappearing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1008a03e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127429c8);
}



/* Entry: 1008a03f0; end: 1008a0453; -[SCBandwidthEstimatorExperiment notifyDownloadListeners:] */

void FUN_1008a03f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_38 = 0xc2000000;
    pcStack_30 = FUN_1008a0454;
    puStack_28 = &UNK_110848c48;
    lStack_20 = param_1;
    uStack_18 = param_3;
    func_0x000107c4e590(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_40);
  }
  return;
}



/* Entry: 1008a0454; end: 1008a054f;  */

void FUN_1008a0454(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x000107c61174(lVar3);
  lVar1 = lVar3;
  func_0x000107c4080c();
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          func_0x000107c61128(lVar3);
        }
        func_0x000107c4dbf0(*(undefined8 *)(lStack_108 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      puVar2 = &uStack_110;
      func_0x000107c4080c();
    } while (lVar1 != 0);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  (**(code **)(**(long **)(lVar3 + 0x18) + 0x10))(*(long **)(lVar3 + 0x18),puVar2);
  return;
}



/* Entry: 1008a0550; end: 1008a05af; -[SCNNetworkTypesBandwidthChangeListener onDownloadBandwidthChanged:] */

void FUN_1008a0550(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 1008a05b0; end: 1008a05ff; -[SCCameraToolbarItemImpl didChangeShowingWidgetEvent] */

void FUN_1008a05b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0x68);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1008a0600; end: 1008a064f; -[SCCameraToolbarItemImpl needsCheckVisibilityOfChildItemEvent] */

void FUN_1008a0600(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xa8);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined **)(param_1 + 0xa8) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0xa8);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1008a0650; end: 1008a07fb; -[SCCameraVerticalToolbar _updateTitleVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a0650(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar3 = param_1 + _DAT_112742be0;
  func_0x000107c61148();
  func_0x000107c61170();
  lVar4 = *(long *)(param_1 + _DAT_112742bac);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(lVar4);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112742b84);
  func_0x000107c3dbc0();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1008a07fc;
  puStack_78 = &UNK_110845ce0;
  func_0x000107c61174();
  ppuVar7 = &puStack_90;
  uStack_70 = uVar6;
  uStack_68 = lVar3 != 0;
  func_0x000107c61184();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1008a6ec8;
  puStack_a8 = &UNK_110845ce0;
  ppuVar8 = &puStack_c0;
  lStack_a0 = param_1;
  uStack_98 = lVar3 != 0;
  func_0x000107c61184();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (lVar5 == 0) {
    (*(code *)ppuVar7[2])(ppuVar7);
    (*(code *)ppuVar8[2])(ppuVar8);
  }
  else {
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    puStack_d8 = &UNK_1061e6b64;
    puStack_d0 = &UNK_110842508;
    func_0x000107c61174(ppuVar8);
    ppuStack_c8 = ppuVar8;
    func_0x000107c3dcd0(0x3fd999999999999a,puVar2,param_2,ppuVar7,&puStack_e8);
    func_0x000107c61170(ppuStack_c8);
  }
  func_0x000107c61170(ppuVar8);
  func_0x000107c61170(ppuVar7);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1008a07fc; end: 1008a08f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a07fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = 0xf0;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar5);
  lVar2 = lVar5;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar5);
      }
      func_0x000107c59e50(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    uVar3 = 0xf0;
    func_0x000107c4080c();
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  func_0x000107c60e78();
  *(undefined1 *)(lVar5 + _DAT_1127429fc) = uVar3;
  func_0x000107c3cce8();
                    /* WARNING: Could not recover jumptable at 0x00010be49990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar5,PTR_s__layoutTitleLabelWithNewBadgeVie_112570000);
  return;
}



/* Entry: 1008a08f4; end: 1008a0923; -[SCCameraToolbarButtonImpl setTitleVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a08f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127429fc) = param_3;
  func_0x000107c3cce8();
                    /* WARNING: Could not recover jumptable at 0x00010be49990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__layoutTitleLabelWithNewBadgeVie_112570000);
  return;
}



/* Entry: 1008a0924; end: 1008a0c0b; -[SCCameraToolbarButtonImpl _updateTitle] */

/* WARNING: Possible PIC construction at 0x0001008a0ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a0b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a0b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a0bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a0abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a09b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a09e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a0a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a0a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a0a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a0a40) */
/* WARNING: Removing unreachable block (ram,0x0001008a0a4c) */
/* WARNING: Removing unreachable block (ram,0x0001008a0a14) */
/* WARNING: Removing unreachable block (ram,0x0001008a09ec) */
/* WARNING: Removing unreachable block (ram,0x0001008a09f0) */
/* WARNING: Removing unreachable block (ram,0x0001008a09b4) */
/* WARNING: Removing unreachable block (ram,0x0001008a0a20) */
/* WARNING: Removing unreachable block (ram,0x0001008a09d4) */
/* WARNING: Removing unreachable block (ram,0x0001008a0bd4) */
/* WARNING: Removing unreachable block (ram,0x0001008a0b9c) */
/* WARNING: Removing unreachable block (ram,0x0001008a0b2c) */
/* WARNING: Removing unreachable block (ram,0x0001008a0ae8) */
/* WARNING: Removing unreachable block (ram,0x0001008a0aec) */
/* WARNING: Removing unreachable block (ram,0x0001008a0afc) */
/* WARNING: Removing unreachable block (ram,0x0001008a0b04) */
/* WARNING: Removing unreachable block (ram,0x0001008a0b08) */
/* WARNING: Removing unreachable block (ram,0x0001008a0b30) */
/* WARNING: Removing unreachable block (ram,0x0001008a0b34) */
/* WARNING: Removing unreachable block (ram,0x0001008a0b44) */
/* WARNING: Removing unreachable block (ram,0x0001008a0b58) */
/* WARNING: Removing unreachable block (ram,0x0001008a0b60) */
/* WARNING: Removing unreachable block (ram,0x0001008a0bf0) */
/* WARNING: Removing unreachable block (ram,0x0001008a0c00) */
/* WARNING: Removing unreachable block (ram,0x0001008a0c04) */
/* WARNING: Removing unreachable block (ram,0x0001008a0b68) */
/* WARNING: Removing unreachable block (ram,0x0001008a0b6c) */
/* WARNING: Removing unreachable block (ram,0x0001008a0b0c) */
/* WARNING: Removing unreachable block (ram,0x0001008a0a78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a0924(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112742a00);
  lVar2 = (long)_DAT_112742a10;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x000107c4adac();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x000107c51c54();
    if ((int)lVar1 != 0) {
      func_0x000107c5cbb0(param_1);
      func_0x000107c61180();
      func_0x000107c3e360();
      func_0x000107c61180();
      func_0x000107c4adac();
      goto code_r0x000107c61170;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x000107c61174(lVar1);
    if (lVar1 != 0) {
      func_0x000107c5cac0(param_1);
      func_0x000107c61180();
      func_0x000107c59c6c();
      goto code_r0x000107c61170;
    }
  }
  func_0x000107c5cbb0(param_1);
  func_0x000107c61180();
  if (lVar3 == 2) {
    func_0x000107c42b98();
    func_0x000107c61180();
  }
  else {
    func_0x000107c4d754();
    func_0x000107c61180();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008a0c0c; end: 1008a0c1b; -[SCCameraToolbarButtonImpl selected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1008a0c0c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112742a18);
}



/* Entry: 1008a0c1c; end: 1008a0c2b; -[SCCameraToolbarButtonImpl toolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008a0c1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127429d0);
}



/* Entry: 1008a0c2c; end: 1008a0f6b; -[SCCameraToolbarButtonImpl titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a0c2c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112742a30;
  lVar5 = *(long *)(param_1 + lVar7);
  if (lVar5 == 0) {
    lVar6 = (long)_DAT_1127429d0;
    lVar1 = *(long *)(param_1 + lVar6);
    func_0x000107c4d754();
    func_0x000107c61180();
    lVar5 = lVar1;
    func_0x000107c4adac();
    func_0x000107c61170(lVar1);
    if (lVar5 == 0) {
      lVar1 = *(long *)(param_1 + lVar6);
      func_0x000107c51cb0();
      func_0x000107c61180();
      lVar5 = lVar1;
      func_0x000107c4adac();
      func_0x000107c61170(lVar1);
      if (lVar5 == 0) {
        lVar1 = *(long *)(param_1 + lVar6);
        func_0x000107c3e360();
        func_0x000107c61180();
        lVar5 = lVar1;
        func_0x000107c4adac();
        func_0x000107c61170(lVar1);
        if (lVar5 == 0) {
          lVar1 = *(long *)(param_1 + lVar6);
          func_0x000107c42b98();
          func_0x000107c61180();
          lVar5 = lVar1;
          func_0x000107c4adac();
          func_0x000107c61170(lVar1);
          if (lVar5 == 0) {
            lVar5 = 0;
            goto LAB_1008a0f48;
          }
        }
      }
    }
    puVar2 = PTR_PTR_1126aea58;
    func_0x000107c610f4();
    func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar2;
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x000107c4d754(uVar4);
    func_0x000107c61180();
    func_0x000107c59c6c(*(undefined8 *)(param_1 + lVar7));
    func_0x000107c61170(uVar4);
    func_0x000107c59c74(*(undefined8 *)(param_1 + lVar7));
    func_0x000107c53840(*(undefined8 *)(param_1 + lVar7));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5e2ac(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c59c78(*(undefined8 *)(param_1 + lVar7));
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126b08d8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if ((*(long *)(param_1 + _DAT_1127429dc) == 0) ||
       (*(char *)(param_1 + _DAT_1127429e0) != '\x01')) {
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      FUN_100b74f58(0x4000000000000000,0x3fd3333333333333,0,0x3ff0000000000000,puVar2,uVar4,puVar3);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      FUN_10085b3c8(0x4010000000000000,0x3fc3333333333333,0,0x3ff0000000000000,puVar2,uVar4,puVar3);
    }
    func_0x000107c61170(puVar3);
    func_0x000107c5a100(*(undefined8 *)(param_1 + lVar7));
    func_0x000107c56ba8(*(undefined8 *)(param_1 + lVar7));
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar5 = param_1;
    func_0x000107c3cf00();
    func_0x000107c61180();
    func_0x000107c51804(puVar2);
    func_0x000107c61180();
    func_0x000107c520f4(*(undefined8 *)(param_1 + lVar7));
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar5);
    lVar5 = param_1;
    func_0x000107c5cbb0(param_1);
    func_0x000107c61180();
    lVar1 = lVar5;
    func_0x000107c4a404();
    func_0x000107c526c0((double)((uint)lVar1 ^ 1),*(undefined8 *)(param_1 + lVar7));
    func_0x000107c61170(lVar5);
    lVar5 = param_1;
    func_0x000107c4a95c(param_1);
    func_0x000107c61180();
    func_0x000107c3d89c();
    func_0x000107c61170(lVar5);
    func_0x000107c5a050(*(undefined8 *)(param_1 + lVar7));
    func_0x000107c3bc10(param_1);
    lVar5 = *(long *)(param_1 + lVar7);
  }
  func_0x000107c61174(lVar5);
LAB_1008a0f48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1008a0f6c; end: 1008a0f73; -[SCCameraToolbarItemImpl selectedTitle] */

undefined8 FUN_1008a0f6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 1008a0f74; end: 1008a0f8b; -[SCCameraToolbarItemImpl attributedSelectedTitle] */

undefined8 FUN_1008a0f74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1008a0f8c; end: 1008a112b; -[SCRequestManagerRunningTaskState finishRequest:requestType:] */

void FUN_1008a0f8c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174();
  puVar4 = PTR____NSDictionary0__struct_11034ab58;
  if (param_3 != 0) {
    FUN_10068d8a0();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c49820();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if ((uVar3 < 4) || (puVar4 = PTR____NSDictionary0__struct_11034ab58, uVar3 == 5)) {
      func_0x000107c6071c();
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x3032000000;
      pcStack_68 = FUN_1008a112c;
      uStack_60 = 0x1008a18ac;
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c41988();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      puStack_58 = puVar4;
      func_0x000107c61174(param_3);
      func_0x000107c4e530(uVar5);
      puVar4 = (undefined *)puStack_78[5];
      func_0x000107c61174(puVar4);
      func_0x000107c61170(param_3);
      func_0x000107c60bcc(&uStack_80,8);
      func_0x000107c61170(puStack_58);
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1008a112c; end: 1008a113b;  */

void FUN_1008a112c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1008a113c; end: 1008a11c7;  */

/* WARNING: Possible PIC construction at 0x0001008a11b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a11b4) */

void FUN_1008a113c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3af94(*(undefined8 *)(param_1 + 0x38),uVar1,param_2,*(undefined8 *)(param_1 + 0x28))
  ;
  func_0x000107c61180();
  func_0x000107c3d66c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),param_2,uVar1
                     );
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3af9c(*(undefined8 *)(param_1 + 0x38),uVar1,param_2,*(undefined8 *)(param_1 + 0x28))
  ;
  func_0x000107c61180();
  func_0x000107c3d66c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),param_2,uVar1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008a11c8; end: 1008a11cf; -[SCRequestManagerRunningTaskState _calculateAverageConcurrencyForRequest:withFinishTimestamp:] */

void FUN_1008a11c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__calculateAverageConcurrencyForR_112553aa0,param_3,1);
  return;
}



/* Entry: 1008a11d0; end: 1008a17af; -[SCRequestManagerRunningTaskState _calculateAverageConcurrencyForRequest:withFinishTimestamp:includeTTFB:] */

void FUN_1008a11d0(double param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [128];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar18 = param_1;
  func_0x000107c61174(param_4);
  lVar12 = *(long *)(param_2 + 0x20);
  func_0x000107c61174(lVar12);
  lVar13 = lVar12;
  if (param_5 != 0) {
    lVar13 = *(long *)(param_2 + 0x18);
    func_0x000107c61174(lVar13);
    func_0x000107c61170(lVar12);
  }
  lVar12 = lVar13;
  func_0x000107c4d9e8(lVar13,param_3,param_4);
  func_0x000107c61180();
  puVar9 = PTR____NSDictionary0__struct_11034ab58;
  if (lVar12 != 0) {
    func_0x000107c5d5d8(param_1,lVar12);
    func_0x000107c4ff88(lVar13,param_3,param_4);
    lVar1 = lVar13;
    func_0x000107c3db60();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c40794();
    func_0x000107c61170(lVar1);
    dVar18 = 0.0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    func_0x000107c61174(lVar2);
    lVar1 = lVar2;
    func_0x000107c4080c(lVar2,param_3,&uStack_250,auStack_130,0x10);
    if (lVar1 != 0) {
      lVar14 = *plStack_240;
      do {
        lVar15 = 0;
        do {
          if (*plStack_240 != lVar14) {
            func_0x000107c61128(lVar2);
          }
          lVar3 = lVar13;
          func_0x000107c4d9e8(lVar13,param_3,*(undefined8 *)(lStack_248 + lVar15 * 8));
          func_0x000107c61180();
          func_0x000107c435b4(lVar12);
          dVar16 = dVar18;
          func_0x000107c5bbf4(lVar12);
          dVar17 = dVar16;
          func_0x000107c5bbf4(lVar3);
          if (dVar17 <= dVar16) {
            dVar17 = dVar16;
          }
          dVar18 = dVar18 - dVar17;
          func_0x000107c5d3c4(dVar18,lVar12,param_3,lVar3);
          func_0x000107c5d3c4(lVar3,param_3,lVar12);
          func_0x000107c61170(lVar3);
          lVar15 = lVar15 + 1;
        } while (lVar1 != lVar15);
        lVar1 = lVar2;
        func_0x000107c4080c(lVar2,param_3,&uStack_250,auStack_130,0x10);
      } while (lVar1 != 0);
    }
    func_0x000107c61170(lVar2);
    func_0x000107c435b4(lVar12);
    func_0x000107c5bbf4(lVar12);
    func_0x000107c3cf3c(lVar12);
    func_0x000107c3cf48(lVar12);
    func_0x000107c3cf34(lVar12);
    func_0x000107c3cf38(lVar12);
    func_0x000107c3cf4c(lVar12);
    func_0x000107c3cf40(lVar12);
    func_0x000107c3cf44(lVar12);
    puStack_258 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (param_5 == 0) {
      ppuStack_210 = &PTR____CFConstantStringClassReference_110f9cc98;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuStack_208 = &PTR____CFConstantStringClassReference_110f9ccf8;
      puStack_260 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_1d8 = puStack_258;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuStack_200 = &PTR____CFConstantStringClassReference_110f9ccb8;
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_1d0 = puStack_260;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuStack_1f8 = &PTR____CFConstantStringClassReference_110f9ccd8;
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_1c8 = puVar4;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuStack_1f0 = &PTR____CFConstantStringClassReference_110f9cd18;
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_1c0 = puVar5;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuStack_1e8 = &PTR____CFConstantStringClassReference_110f9cd38;
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_1b8 = puVar6;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuStack_1e0 = &PTR____CFConstantStringClassReference_110f9cd58;
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_1b0 = puVar7;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuVar10 = &puStack_1d8;
      pppuVar11 = &ppuStack_210;
      puStack_1a8 = puVar8;
    }
    else {
      ppuStack_1a0 = &PTR____CFConstantStringClassReference_110f9cbb8;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuStack_198 = &PTR____CFConstantStringClassReference_110f9cc18;
      puStack_260 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_168 = puStack_258;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuStack_190 = &PTR____CFConstantStringClassReference_110f9cbd8;
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_160 = puStack_260;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuStack_188 = &PTR____CFConstantStringClassReference_110f9cbf8;
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_158 = puVar4;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuStack_180 = &PTR____CFConstantStringClassReference_110f9cc38;
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_150 = puVar5;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuStack_178 = &PTR____CFConstantStringClassReference_110f9cc58;
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_148 = puVar6;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuStack_170 = &PTR____CFConstantStringClassReference_110f9cc78;
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_140 = puVar7;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          &PTR____CFConstantStringClassReference_110e29f18);
      func_0x000107c61180();
      ppuVar10 = &puStack_168;
      pppuVar11 = &ppuStack_1a0;
      puStack_138 = puVar8;
    }
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,ppuVar10,pppuVar11,7);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puStack_260);
    func_0x000107c61170(puStack_258);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar13);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  func_0x000107c60e78();
  *(double *)(param_4 + 0x10) = dVar18;
  return;
}



/* Entry: 1008a17b0; end: 1008a17b7; -[SCRequestConcurrencyLoggingItem updateRequestConcurrencyLoggingItemWithFinishTimestamp:] */

void FUN_1008a17b0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1008a17b8; end: 1008a17bf; -[SCRequestConcurrencyLoggingItem finishTimestamp] */

undefined8 FUN_1008a17b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1008a17c0; end: 1008a17c7; -[SCRequestConcurrencyLoggingItem startTimestamp] */

undefined8 FUN_1008a17c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008a17c8; end: 1008a17cf; -[SCRequestConcurrencyLoggingItem accumulatedOverlappedDownloadDurationOfOtherRequests] */

undefined8 FUN_1008a17c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1008a17d0; end: 1008a17d7; -[SCRequestConcurrencyLoggingItem accumulatedOverlappedUploadDurationOfOtherRequests] */

undefined8 FUN_1008a17d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1008a17d8; end: 1008a17df; -[SCRequestConcurrencyLoggingItem accumulatedOverlappedDownloadDurationOfOtherDownloadRequests] */

undefined8 FUN_1008a17d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1008a17e0; end: 1008a17e7; -[SCRequestConcurrencyLoggingItem accumulatedOverlappedDownloadDurationOfOtherMetadataRequests] */

undefined8 FUN_1008a17e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1008a17e8; end: 1008a17ef; -[SCRequestConcurrencyLoggingItem accumulatedOverlappedUploadDurationOfOtherUploadRequests] */

undefined8 FUN_1008a17e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1008a17f0; end: 1008a17f7; -[SCRequestConcurrencyLoggingItem accumulatedOverlappedUploadDurationOfOtherAnalyticsRequests] */

undefined8 FUN_1008a17f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1008a17f8; end: 1008a17ff; -[SCRequestConcurrencyLoggingItem accumulatedOverlappedUploadDurationOfOtherAnalyticsV2Requests] */

undefined8 FUN_1008a17f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1008a1800; end: 1008a18a3; -[SCRequestManagerRunningTaskState _calculateAverageTransmitConcurrencyForRequest:withFinishTimestamp:] */

void FUN_1008a1800(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_4);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x000107c4d9e8(lVar1,param_3,param_4);
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c50438(lVar1);
    func_0x000107c3cc9c(param_2,param_3,lVar2,0);
  }
  func_0x000107c3af98(param_1,param_2,param_3,param_4,0);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1008a18a4; end: 1008a18b3; -[SCRequestConcurrencyLoggingItem requestType] */

undefined8 FUN_1008a18a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1008a18b4; end: 1008a193b; -[SCAPISessionTaskBookkeeper removeSCRequestTaskForNNM:] */

/* WARNING: Possible PIC construction at 0x0001008a18f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1924: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a18f8) */
/* WARNING: Removing unreachable block (ram,0x0001008a1928) */
/* WARNING: Removing unreachable block (ram,0x0001008a18fc) */

void FUN_1008a18b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c50300(param_3);
  func_0x000107c61180();
  FUN_10068b028();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008a193c; end: 1008a19f3; -[SCAPISessionTaskBookkeeper _removeTask:forSession:] */

void FUN_1008a193c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1008a1ff8;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_68);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008a19f4; end: 1008a1ab7; +[SIGTypography styleForTypography:] */

void FUN_1008a19f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  
  puVar1 = (undefined8 *)PTR__UIFontTextStyleLargeTitle_110345c08;
  switch(param_3) {
  case 0:
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_110f97658);
    puVar1 = (undefined8 *)PTR__UIFontTextStyleLargeTitle_110345c08;
    break;
  case 1:
    break;
  case 2:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x1a:
    puVar1 = (undefined8 *)PTR__UIFontTextStyleTitle1_110345c18;
    break;
  case 3:
  case 0xd:
  case 0xe:
  case 0xf:
    puVar1 = (undefined8 *)PTR__UIFontTextStyleTitle2_110345c20;
    break;
  case 4:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    puVar1 = (undefined8 *)PTR__UIFontTextStyleTitle3_110345c28;
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    puVar1 = (undefined8 *)PTR__UIFontTextStyleBody_110345bd8;
    break;
  case 0x17:
  case 0x18:
    puVar1 = (undefined8 *)PTR__UIFontTextStyleCaption1_110345be8;
    break;
  case 0x19:
  case 0x21:
  case 0x22:
    puVar1 = (undefined8 *)PTR__UIFontTextStyleCaption2_110345bf0;
    break;
  default:
    goto LAB_1008a1aa4;
  }
  unaff_x19 = *puVar1;
  func_0x000107c61174(unaff_x19);
LAB_1008a1aa4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1008a1ab8; end: 1008a1ac3;  */

void FUN_1008a1ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_demiBoldAvenirNextFontOfSize_for_1125b8f60,param_3,1,param_4);
  return;
}



/* Entry: 1008a1ac4; end: 1008a1b43; +[SCFontCacheKey keyForScaledFontWithName:pointSize:style:] */

void FUN_1008a1ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1948;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c610f4(puVar1);
  func_0x000107c478ec(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008a1b44; end: 1008a1c8f; -[SCRequestScheduler didRunTask:withData:withResponse:withError:] */

/* WARNING: Possible PIC construction at 0x0001008a1bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1c74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a1c68) */
/* WARNING: Removing unreachable block (ram,0x0001008a1bf8) */
/* WARNING: Removing unreachable block (ram,0x0001008a1c28) */
/* WARNING: Removing unreachable block (ram,0x0001008a1c00) */
/* WARNING: Removing unreachable block (ram,0x0001008a1bcc) */
/* WARNING: Removing unreachable block (ram,0x0001008a1bbc) */
/* WARNING: Removing unreachable block (ram,0x0001008a1c78) */

void FUN_1008a1b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c50300(param_3);
  func_0x000107c61180();
  func_0x000107c4a8c4();
  func_0x000107c61180();
  func_0x000107c50300(param_3);
  func_0x000107c61180();
  func_0x000107c4bbe0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008a1c90; end: 1008a1c97; -[SCNetworkClock syncClockWithServerResponse:] */

void FUN_1008a1c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c265cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_syncClockWithServerResponse__112677150);
  return;
}



/* Entry: 1008a1c98; end: 1008a1ff7; -[SCServerNetworkClockProviderImpl syncClockWithServerResponse:] */

/* WARNING: Possible PIC construction at 0x0001008a1d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1ea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a2078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a1dd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a1dc4) */
/* WARNING: Removing unreachable block (ram,0x0001008a207c) */
/* WARNING: Removing unreachable block (ram,0x0001008a1f9c) */
/* WARNING: Removing unreachable block (ram,0x0001008a1fd8) */
/* WARNING: Removing unreachable block (ram,0x0001008a1ff0) */
/* WARNING: Removing unreachable block (ram,0x0001008a201c) */
/* WARNING: Removing unreachable block (ram,0x0001008a2028) */
/* WARNING: Removing unreachable block (ram,0x0001008a20b0) */
/* WARNING: Removing unreachable block (ram,0x0001008a2030) */
/* WARNING: Removing unreachable block (ram,0x0001008a1fb4) */
/* WARNING: Removing unreachable block (ram,0x0001008a1f7c) */
/* WARNING: Removing unreachable block (ram,0x0001008a1f44) */
/* WARNING: Removing unreachable block (ram,0x0001008a1f58) */
/* WARNING: Removing unreachable block (ram,0x0001008a1eac) */
/* WARNING: Removing unreachable block (ram,0x0001008a1f74) */
/* WARNING: Removing unreachable block (ram,0x0001008a1edc) */
/* WARNING: Removing unreachable block (ram,0x0001008a1ee4) */
/* WARNING: Removing unreachable block (ram,0x0001008a1ee8) */
/* WARNING: Removing unreachable block (ram,0x0001008a1ef8) */
/* WARNING: Removing unreachable block (ram,0x0001008a1f00) */
/* WARNING: Removing unreachable block (ram,0x0001008a1e6c) */
/* WARNING: Removing unreachable block (ram,0x0001008a1e14) */
/* WARNING: Removing unreachable block (ram,0x0001008a1f8c) */
/* WARNING: Removing unreachable block (ram,0x0001008a1e20) */
/* WARNING: Removing unreachable block (ram,0x0001008a1f84) */
/* WARNING: Removing unreachable block (ram,0x0001008a1e3c) */
/* WARNING: Removing unreachable block (ram,0x0001008a1d7c) */
/* WARNING: Removing unreachable block (ram,0x0001008a1d24) */
/* WARNING: Removing unreachable block (ram,0x0001008a1d34) */
/* WARNING: Removing unreachable block (ram,0x0001008a1d38) */
/* WARNING: Removing unreachable block (ram,0x0001008a1dd4) */
/* WARNING: Removing unreachable block (ram,0x0001008a1f94) */
/* WARNING: Removing unreachable block (ram,0x0001008a1de0) */

void FUN_1008a1c98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c4d5f4();
  func_0x000107c61180();
  if (lVar1 == 0) {
    param_1 = param_3;
    func_0x000107c3abfc();
    func_0x000107c61180();
    func_0x000107c44f08();
    func_0x000107c61180();
    lVar1 = param_1;
    func_0x000107c49d0c();
    if ((int)lVar1 == 0) {
      func_0x000107c3abfc(param_3);
      func_0x000107c61180();
      func_0x000107c44f08();
      func_0x000107c61180();
      func_0x000107c49d0c();
      param_1 = param_3;
    }
  }
  else {
    func_0x000107c40f00(*(undefined8 *)(param_1 + 0x10));
    func_0x000107c4d5f4(param_1);
    func_0x000107c61180();
    func_0x000107c40c58();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008a1ff8; end: 1008a20bf;  */

/* WARNING: Possible PIC construction at 0x0001008a2078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a207c) */

void FUN_1008a1ff8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x20) == '\x01') {
    func_0x000107c4ff88(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                        *(undefined8 *)(param_1 + 0x28));
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x000107c44c3c();
    func_0x000107c4d974(puVar2,param_2,lVar1);
    func_0x000107c61180();
    func_0x000107c4d9e8(uVar3,param_2,puVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1008a20c0; end: 1008a2133; -[SCAPISessionTaskBackgroundWrapper dealloc] */

void FUN_1008a20c0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = param_1 + 0x18;
    func_0x000107c61148(lVar1);
    func_0x000107c427f4();
    func_0x000107c61170(lVar1);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  }
  puStack_28 = PTR_PTR_112705f78;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1008a2134; end: 1008a2157; -[SCBackgroundTaskWrapper endBackgroundTask:] */

void FUN_1008a2134(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != -1) && (param_3 != *(long *)PTR__UIBackgroundTaskInvalid_110345af0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be09790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endBackgroundTaskWhenGroupBackg_11255ff80)
    ;
    return;
  }
  return;
}



/* Entry: 1008a2158; end: 1008a2257; -[SCBackgroundTaskWrapper _endBackgroundTaskWhenGroupBackgroundTaskEnabled:] */

void FUN_1008a2158(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  lVar2 = *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1008a2260;
  puStack_70 = &UNK_11084a858;
  lStack_68 = param_1;
  uStack_58 = param_3;
  puStack_48 = puStack_60;
  lStack_38 = lVar2;
  FUN_10006eaa4(*(undefined8 *)(param_1 + 0x38),&puStack_88);
  if (puStack_48[3] != lVar2) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c61180();
    func_0x000107c427f4();
    func_0x000107c61170(puVar1);
  }
  func_0x000107c3c318(param_1);
  func_0x000107c60bcc(&uStack_50,8);
  return;
}



/* Entry: 1008a2258; end: 1008a225f; -[SCRequestScheduler _removeTaskForKey:] */

void FUN_1008a2258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_removeTaskForKey__112629488);
  return;
}



/* Entry: 1008a2260; end: 1008a22ef;  */

void FUN_1008a2260(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x000107c61180();
  func_0x000107c4ff88(uVar3,param_2,puVar1);
  func_0x000107c61170(puVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x000107c40808();
  if (lVar2 == 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
         *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) =
         *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  }
  return;
}



/* Entry: 1008a22f0; end: 1008a2393; -[SCRequestTaskPool removeTaskForKey:] */

void FUN_1008a22f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c5c79c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c5c79c(param_1);
    func_0x000107c61180();
    func_0x000107c4ff88();
    func_0x000107c61170(param_1);
    func_0x000107c61174(lVar2);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1008a2394; end: 1008a243b; -[SCRequestSuccessFailureTask completeTask] */

void FUN_1008a2394(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar2 = &puStack_50;
  uVar1 = param_1;
  func_0x000107c50300();
  func_0x000107c61180();
  func_0x000107c41aa8();
  func_0x000107c61170(uVar1);
  func_0x000107c61144(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1008a2444;
  puStack_38 = &UNK_1108b22a8;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c61184(&puStack_50);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1008a243c; end: 1008a2443; -[SCRequest didComplete] */

void FUN_1008a243c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f68d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSchedulingState__11265b458,5);
  return;
}



/* Entry: 1008a2444; end: 1008a2a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a2444(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if ((uVar1 != 0) && (uVar10 = uVar1, func_0x000107c49b80(), (uVar10 & 1) == 0)) {
    func_0x000107c4d8c8(uVar1);
    func_0x000107c56b78(uVar1);
    uVar10 = uVar1;
    func_0x000107c4d8c8();
    uVar5 = uVar1;
    func_0x000107c4d8e0();
    if (uVar5 < uVar10) {
      uVar10 = uVar1;
      func_0x000107c4bfcc(uVar1);
      func_0x000107c61180();
      func_0x000107c5c778();
      func_0x000107c61170(uVar10);
      if (param_5 == 0) {
        lVar9 = (long)_DAT_11278dd3c;
        lVar2 = *(long *)(uVar1 + lVar9);
        func_0x000107c40808();
        if (lVar2 != 0) {
          uVar10 = 0;
          do {
            func_0x000107c3f984(uVar1);
            uVar3 = *(undefined8 *)(uVar1 + (long)_DAT_11278dd44);
            func_0x000107c4d9a4();
            func_0x000107c61180();
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c61180();
            uVar4 = param_2;
            func_0x000107c4a8c4(param_2);
            func_0x000107c61180();
            func_0x000107c4bbe0(param_2);
            func_0x000107c61180();
            func_0x000107c61170();
            func_0x000107c61170(uVar4);
            func_0x000107c61170(puVar6);
            uVar4 = param_2;
            func_0x000107c50384(param_2);
            func_0x000107c61180();
            puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
            func_0x000107c61180();
            func_0x000107c5c9e4();
            func_0x000107c59ddc(uVar4);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(uVar4);
            puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_100 = 0xc2000000;
            pcStack_f8 = FUN_1008a31d8;
            puStack_f0 = &UNK_110852488;
            func_0x000107c61174(param_2);
            uStack_e8 = param_2;
            uStack_e0 = uVar1;
            uStack_c8 = uVar3;
            func_0x000107c61174(param_3);
            uStack_d8 = param_3;
            func_0x000107c61174(param_4);
            uStack_d0 = param_4;
            func_0x000107c61174(uVar3);
            ppuVar7 = &puStack_108;
            func_0x000107c61184(ppuVar7);
            uVar4 = *(undefined8 *)(uVar1 + lVar9);
            func_0x000107c4d9a4(uVar4);
            func_0x000107c61180();
            FUN_10007380c();
            func_0x000107c61170(uVar4);
            uVar11 = *(undefined8 *)(uVar1 + (long)_DAT_11278dd4c);
            uVar4 = param_2;
            func_0x000107c50384(param_2);
            func_0x000107c61180();
            uVar8 = param_2;
            func_0x000107c4e430(param_2);
            func_0x000107c61180();
            FUN_1008a2e48(uVar11,uVar4,uVar8,1,0);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(ppuVar7);
            func_0x000107c61170(uStack_d0);
            func_0x000107c61170(uStack_d8);
            func_0x000107c61170(uStack_c8);
            func_0x000107c61170(uStack_e8);
            func_0x000107c61170(uVar3);
            uVar10 = uVar10 + 1;
            uVar5 = *(ulong *)(uVar1 + lVar9);
            func_0x000107c40808();
          } while (uVar10 < uVar5);
        }
      }
      else {
        lVar9 = (long)_DAT_11278dd40;
        lVar2 = *(long *)(uVar1 + lVar9);
        func_0x000107c40808();
        if (lVar2 != 0) {
          uVar10 = 0;
          do {
            func_0x000107c3f984(uVar1);
            uVar3 = *(undefined8 *)(uVar1 + (long)_DAT_11278dd48);
            func_0x000107c4d9a4();
            func_0x000107c61180();
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c61180();
            uVar4 = param_2;
            func_0x000107c4a8c4(param_2);
            func_0x000107c61180();
            func_0x000107c4bbe0(param_2);
            func_0x000107c61180();
            func_0x000107c61170();
            func_0x000107c61170(uVar4);
            func_0x000107c61170(puVar6);
            uVar4 = param_2;
            func_0x000107c50384(param_2);
            func_0x000107c61180();
            puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
            func_0x000107c61180();
            func_0x000107c5c9e4();
            func_0x000107c59ddc(uVar4);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(uVar4);
            puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b8 = 0xc2000000;
            puStack_b0 = &UNK_10b26e4b4;
            puStack_a8 = &UNK_110852488;
            func_0x000107c61174(param_2);
            uStack_a0 = param_2;
            uStack_98 = uVar1;
            uStack_80 = uVar3;
            func_0x000107c61174(param_3);
            uStack_90 = param_3;
            func_0x000107c61174(param_5);
            lStack_88 = param_5;
            func_0x000107c61174(uVar3);
            ppuVar7 = &puStack_c0;
            func_0x000107c61184(ppuVar7);
            uVar4 = *(undefined8 *)(uVar1 + lVar9);
            func_0x000107c4d9a4(uVar4);
            func_0x000107c61180();
            FUN_10007380c();
            func_0x000107c61170(uVar4);
            uVar11 = *(undefined8 *)(uVar1 + (long)_DAT_11278dd4c);
            uVar4 = param_2;
            func_0x000107c50384(param_2);
            func_0x000107c61180();
            uVar8 = param_2;
            func_0x000107c4e430(param_2);
            func_0x000107c61180();
            FUN_1008a2e48(uVar11,uVar4,uVar8,0,0);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(ppuVar7);
            func_0x000107c61170(lStack_88);
            func_0x000107c61170(uStack_90);
            func_0x000107c61170(uStack_80);
            func_0x000107c61170(uStack_a0);
            func_0x000107c61170(uVar3);
            uVar10 = uVar10 + 1;
            uVar5 = *(ulong *)(uVar1 + lVar9);
            func_0x000107c40808();
          } while (uVar10 < uVar5);
        }
      }
      uVar4 = param_2;
      func_0x000107c4a8c4(param_2);
      func_0x000107c61180();
      func_0x000107c4bbe0(param_2);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(uVar4);
      func_0x000107c555c8(uVar1);
    }
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008a2a18; end: 1008a2a1f; -[SCRequestTask isCompleteTaskExecuted] */

undefined1 FUN_1008a2a18(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 1008a2a20; end: 1008a2a27; -[SCRequestTask numHTTPRequestCompleted] */

undefined8 FUN_1008a2a20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1008a2a28; end: 1008a2a2f; -[SCRequestTask setNumHTTPRequestCompleted:] */

void FUN_1008a2a28(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 1008a2a30; end: 1008a2a37; -[SCRequestTask numOfRequestAttemptsPaused] */

undefined8 FUN_1008a2a30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1008a2a38; end: 1008a2a3b; -[SCRequestTaskLogger taskDidFinish:error:] */

void FUN_1008a2a38(void)

{
  return;
}



/* Entry: 1008a2a3c; end: 1008a2b9f; -[SCRequestTask checkInterceptors:withRequest:response:data:error:] */

/* WARNING: Possible PIC construction at 0x0001008a2b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a2b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a2b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a2b64) */
/* WARNING: Removing unreachable block (ram,0x0001008a2b9c) */
/* WARNING: Removing unreachable block (ram,0x0001008a2bb4) */
/* WARNING: Removing unreachable block (ram,0x00010002a2fc) */
/* WARNING: Removing unreachable block (ram,0x00010002a370) */
/* WARNING: Removing unreachable block (ram,0x00010002a380) */
/* WARNING: Removing unreachable block (ram,0x00010002a330) */
/* WARNING: Removing unreachable block (ram,0x0001008a2bb0) */
/* WARNING: Removing unreachable block (ram,0x0001008a2b7c) */
/* WARNING: Removing unreachable block (ram,0x0001008a2b54) */
/* WARNING: Removing unreachable block (ram,0x0001008a2b44) */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_1008a2a3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  if (param_3 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = param_3;
    func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar1 != 0) {
      lVar2 = *plStack_120;
      do {
        lVar3 = 0;
        do {
          if (*plStack_120 != lVar2) {
            func_0x000107c61128(param_3);
          }
          func_0x000107c49890(*(undefined8 *)(lStack_128 + lVar3 * 8),param_2,param_4,param_5,
                              param_6,param_7);
          lVar3 = lVar3 + 1;
        } while (lVar1 != lVar3);
        lVar1 = param_3;
        func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar1 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1008a2ba0; end: 1008a2bdf; -[SCNetworkRateLimitedInterceptor interceptWithRequest:response:data:error:] */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_1008a2ba0(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  if (lRam00000001137f4448 == -1) {
    return;
  }
  ppuVar2 = &PTR___NSConcreteGlobalBlock_110ccbcb0;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110ccbcb0);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  FUN_10002a3a8(&PTR___NSConcreteGlobalBlock_110ccbcb0);
  func_0x000107c61180();
  (*pcVar3)(0x1137f4448,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 1008a2be0; end: 1008a2e3f; -[SCNetworkClientDeprecationInterceptor interceptWithRequest:response:data:error:] */

void FUN_1008a2be0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5
                  ,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_6);
  func_0x000107c5bd10();
  if (param_5 == 0x1d0) {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c3ab8c(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    func_0x000107c61180();
    func_0x000107c61174(0);
    iVar1 = param_2;
    func_0x000107c4a2e0();
    if ((iVar1 != 0) && (func_0x000107c44700(), param_2 != 0)) {
      puVar3 = PTR_PTR_1126af178;
      func_0x000107c5a9e0(PTR_PTR_1126af178);
      func_0x000107c61180();
      ppuVar4 = &PTR____CFConstantStringClassReference_110e27678;
      func_0x000107c312f4(&PTR____CFConstantStringClassReference_110e27678,0);
      func_0x000107c61180();
      puVar5 = puVar2;
      func_0x000107c4d9c0(puVar2);
      func_0x000107c61180();
      puVar7 = PTR_PTR_1126af180;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e276b8;
      func_0x000107c312f4(&PTR____CFConstantStringClassReference_110e276b8,0);
      func_0x000107c61180();
      func_0x000107c3cff8();
      func_0x000107c61180();
      puVar9 = PTR_PTR_1126af180;
      ppuVar8 = &PTR____CFConstantStringClassReference_110e276d8;
      func_0x000107c312f4(&PTR____CFConstantStringClassReference_110e276d8,0);
      func_0x000107c61180();
      func_0x000107c3cff8();
      func_0x000107c61180();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c61180();
      func_0x000107c5ae2c(puVar3);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(ppuVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(ppuVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(ppuVar4);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61170(0);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    func_0x000107c60e78();
    *(undefined8 *)(param_6 + 0x90) = param_1;
    return;
  }
  return;
}



/* Entry: 1008a2e40; end: 1008a2e47; -[SCRequestInfoContainer setTimestampSubmitToFeatureTaskQueue:] */

void FUN_1008a2e40(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x90) = param_1;
  return;
}



/* Entry: 1008a2e48; end: 1008a31cf;  */

/* WARNING: Possible PIC construction at 0x0001008a3194: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a3198) */

void FUN_1008a2e48(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c5ca80(param_3);
  bVar2 = param_1 == 0.0;
  if (bVar2) {
    func_0x000107c2bf3c(param_2,param_4,param_5,&PTR____CFConstantStringClassReference_110f60498);
  }
  func_0x000107c5ca7c(param_3);
  bVar3 = param_1 == 0.0;
  if (bVar3) {
    func_0x000107c2bf3c(param_2,param_4,param_5,&PTR____CFConstantStringClassReference_110f604b8);
  }
  func_0x000107c5ca6c(param_3);
  bVar4 = param_1 == 0.0;
  if (bVar4) {
    func_0x000107c2bf3c(param_2,param_4,param_5,&PTR____CFConstantStringClassReference_110f604d8);
  }
  func_0x000107c5ca78(param_3);
  bVar1 = param_1 == 0.0 || (bVar4 || (bVar3 || bVar2));
  if (((param_6 & 1) == 0) && (param_1 == 0.0)) {
    func_0x000107c2bf3c(param_2,param_4,param_5,&PTR____CFConstantStringClassReference_110f604f8);
    bVar1 = true;
  }
  func_0x000107c5ca74(param_3);
  bVar5 = param_1 == 0.0;
  if (((param_6 & 1) == 0) && (bVar5)) {
    func_0x000107c2bf3c(param_2,param_4,param_5,&PTR____CFConstantStringClassReference_110f60518);
    bVar5 = true;
  }
  func_0x000107c5ca70(param_3);
  if (param_1 == 0.0) {
    bVar5 = true;
  }
  if (((param_6 & 1) == 0) && (param_1 == 0.0)) {
    func_0x000107c2bf3c(param_2,param_4,param_5,&PTR____CFConstantStringClassReference_110f60538);
    bVar5 = true;
  }
  func_0x000107c5ca7c(param_3);
  dVar8 = param_1;
  func_0x000107c5ca80(param_3);
  dVar9 = dVar8;
  func_0x000107c5ca6c(param_3);
  dVar10 = dVar9;
  func_0x000107c5ca7c(param_3);
  dVar11 = dVar10;
  func_0x000107c5ca78(param_3);
  dVar12 = dVar11;
  func_0x000107c5ca6c(param_3);
  dVar13 = dVar12;
  func_0x000107c5ca70(param_3);
  dVar14 = dVar13;
  func_0x000107c5ca74(param_3);
  if (!bVar3 && !bVar2) {
    uVar6 = param_4;
    FUN_1005a8bf0();
    uVar7 = param_3;
    func_0x000107c43628(param_3);
    if ((int)uVar6 == 0) {
      if (param_2 != 0) {
        FUN_1008a3748(param_2,uVar7,param_5,(long)((param_1 - dVar8) * 1000.0));
      }
    }
    else {
      func_0x000107c2bf78(param_1 - dVar8,param_2,uVar7,param_4,param_5);
    }
  }
  if (!bVar4 && (!bVar3 && !bVar2)) {
    uVar6 = param_4;
    FUN_1005a8bf0();
    uVar7 = param_3;
    func_0x000107c43624(param_3);
    if ((int)uVar6 == 0) {
      if (param_2 != 0) {
        FUN_1008a38fc(param_2,uVar7,param_5,(long)((dVar9 - dVar10) * 1000.0));
      }
    }
    else {
      func_0x000107c2bf74(dVar9 - dVar10,param_2,uVar7,param_4,param_5);
    }
  }
  if (!bVar1) {
    uVar6 = param_4;
    FUN_1005a8bf0();
    uVar7 = param_3;
    func_0x000107c4361c(param_3);
    if ((int)uVar6 == 0) {
      if (param_2 != 0) {
        FUN_1008a3ab0(param_2,uVar7,param_5,(long)((dVar11 - dVar12) * 1000.0));
      }
    }
    else {
      func_0x000107c2bf70(dVar11 - dVar12,param_2,uVar7,param_4,param_5);
    }
  }
  if (!bVar5) {
    uVar6 = param_4;
    FUN_1005a8bf0();
    func_0x000107c43620(param_3);
    if ((int)uVar6 == 0) {
      if (param_2 != 0) {
        FUN_1008a3c64(param_2,param_3,param_5,(long)((dVar13 - dVar14) * 1000.0));
      }
    }
    else {
      func_0x000107c2bf6c(dVar13 - dVar14,param_2,param_3,param_4,param_5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1008a31d0; end: 1008a31d7; -[SCRequestInfoContainer timestampNSURLSessionFinished] */

undefined8 FUN_1008a31d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1008a31d8; end: 1008a32a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a31d8(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  dVar4 = param_1;
  func_0x000107c50384(uVar2);
  func_0x000107c61180();
  func_0x000107c5ca78();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)_DAT_11278dd4c);
  func_0x000107c4e430(uVar2);
  func_0x000107c61180();
  FUN_1008a32b4(param_1 - dVar4,uVar3,uVar2,1);
  func_0x000107c61170(uVar2);
  (**(code **)(*(long *)(param_2 + 0x40) + 0x10))
            (*(long *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x20),
             *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bf39f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x20),PTR_s_cleanUp_1125ac188);
  return;
}



/* Entry: 1008a32a4; end: 1008a32ab; -[SCRequestInfoContainer timestampSubmitToFeatureTaskQueue] */

undefined8 FUN_1008a32a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1008a32ac; end: 1008a32b3; -[SCRequestInfoContainer timestampParsingStart] */

undefined8 FUN_1008a32ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1008a32b4; end: 1008a33eb;  */

void FUN_1008a32b4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  puStack_68 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1008a33f4;
  puStack_70 = &UNK_110847658;
  puStack_58 = puStack_68;
  if (lRam00000001137f4578 != -1) {
    FUN_10002a2fc(0x1137f4578,&puStack_88);
  }
  uVar1 = param_3;
  FUN_1005a8bf0();
  if ((int)uVar1 == 0) {
    if (param_2 != 0) {
      FUN_1008a3408(param_2,*(undefined1 *)(puStack_58 + 3),param_4,(long)(param_1 * 1000.0));
    }
  }
  else {
    func_0x000107c2bf7c(param_1,param_2,*(undefined1 *)(puStack_58 + 3),param_3,param_4);
  }
  func_0x000107c60bcc(&uStack_60,8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008a33ec; end: 1008a3407; -[SCRequestInfoContainer timestampParsingEnd] */

undefined8 FUN_1008a33ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1008a3408; end: 1008a35af;  */

undefined8 ** FUN_1008a3408(long param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 **ppuVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x21;
  char *pcVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined8 **)0x0;
  if (param_1 != 0) {
    ppuVar2 = *(undefined8 ***)(param_1 + 8);
    (*(code *)(*ppuVar2)[5])(ppuVar2,&UNK_110cccbe8);
    unaff_x21 = param_3;
    if ((int)ppuVar2 != 0) {
      plVar4 = *(long **)(param_1 + 8);
      puVar1 = &UNK_10f73f4d1;
      if (param_2 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      FUN_10002b838(auStack_78,puVar1);
      puVar1 = &UNK_10f73f4d1;
      if ((int)param_3 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      FUN_10002b838(alStack_60,puVar1);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      unaff_x21 = &uStack_98;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110cccbe8,&uStack_98,param_4);
      ppuVar2 = &puStack_80;
      puStack_80 = unaff_x21;
      FUN_10007e5dc();
      lVar3 = 0;
      do {
        if ((&cStack_49)[lVar3] < '\0') {
          ppuVar2 = *(undefined8 ***)((long)alStack_60 + lVar3);
          func_0x000107c60e14();
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  func_0x000107c60e78();
  puStack_80 = unaff_x21;
  FUN_10007e5dc(&puStack_80);
  lVar3 = -0x30;
  pcVar5 = &cStack_49;
  do {
    if (*pcVar5 < '\0') {
      func_0x000107c60e14(*(undefined8 *)(pcVar5 + -0x17));
    }
    lVar3 = lVar3 + 0x18;
    pcVar5 = pcVar5 + -0x18;
  } while (lVar3 != 0);
  func_0x000107c60bd8();
  return (undefined8 **)(ulong)(*(byte *)(ppuVar2 + 7) & 1);
}



/* Entry: 1008a35b0; end: 1008a35bb; -[SCRequestInfoContainer firstHitSubmitToNm] */

byte FUN_1008a35b0(long param_1)

{
  return *(byte *)(param_1 + 0x38) & 1;
}



/* Entry: 1008a35bc; end: 1008a3747;  */

void FUN_1008a35bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar4 = param_1 + 0x38;
  func_0x000107c61148(lVar4);
  func_0x000107c3be5c(*(undefined8 *)(param_1 + 0x40));
  func_0x000107c61170(lVar4);
  lVar4 = param_1 + 0x38;
  func_0x000107c61148(lVar4);
  func_0x000107c3be34();
  func_0x000107c61170(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c610f4();
  uStack_48 = 0;
  func_0x000107c4636c();
  func_0x000107c61170(param_4);
  uVar3 = uStack_48;
  func_0x000107c61174(uStack_48);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1008a4d48;
  puStack_78 = &UNK_110852488;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar2);
  uStack_60 = uVar3;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_58 = uVar5;
  uStack_50 = uVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  FUN_10007380c(uVar1,&puStack_90);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008a3748; end: 1008a38ef;  */

undefined8 ** FUN_1008a3748(long param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 **ppuVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x21;
  char *pcVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined8 **)0x0;
  if (param_1 != 0) {
    ppuVar2 = *(undefined8 ***)(param_1 + 8);
    (*(code *)(*ppuVar2)[5])(ppuVar2,&UNK_110cccb48);
    unaff_x21 = param_3;
    if ((int)ppuVar2 != 0) {
      plVar4 = *(long **)(param_1 + 8);
      puVar1 = &UNK_10f73f4d1;
      if (param_2 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      FUN_10002b838(auStack_78,puVar1);
      puVar1 = &UNK_10f73f4d1;
      if ((int)param_3 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      FUN_10002b838(alStack_60,puVar1);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      unaff_x21 = &uStack_98;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110cccb48,&uStack_98,param_4);
      ppuVar2 = &puStack_80;
      puStack_80 = unaff_x21;
      FUN_10007e5dc();
      lVar3 = 0;
      do {
        if ((&cStack_49)[lVar3] < '\0') {
          ppuVar2 = *(undefined8 ***)((long)alStack_60 + lVar3);
          func_0x000107c60e14();
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  func_0x000107c60e78();
  puStack_80 = unaff_x21;
  FUN_10007e5dc(&puStack_80);
  lVar3 = -0x30;
  pcVar5 = &cStack_49;
  do {
    if (*pcVar5 < '\0') {
      func_0x000107c60e14(*(undefined8 *)(pcVar5 + -0x17));
    }
    lVar3 = lVar3 + 0x18;
    pcVar5 = pcVar5 + -0x18;
  } while (lVar3 != 0);
  func_0x000107c60bd8();
  return (undefined8 **)(ulong)(*(byte *)((long)ppuVar2 + 0x39) & 1);
}



/* Entry: 1008a38f0; end: 1008a38fb; -[SCRequestInfoContainer firstHitSubmitToNSURLSession] */

byte FUN_1008a38f0(long param_1)

{
  return *(byte *)(param_1 + 0x39) & 1;
}



/* Entry: 1008a38fc; end: 1008a3aa3;  */

undefined8 ** FUN_1008a38fc(long param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 **ppuVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x21;
  char *pcVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined8 **)0x0;
  if (param_1 != 0) {
    ppuVar2 = *(undefined8 ***)(param_1 + 8);
    (*(code *)(*ppuVar2)[5])(ppuVar2,&UNK_110ccc9b8);
    unaff_x21 = param_3;
    if ((int)ppuVar2 != 0) {
      plVar4 = *(long **)(param_1 + 8);
      puVar1 = &UNK_10f73f4d1;
      if (param_2 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      FUN_10002b838(auStack_78,puVar1);
      puVar1 = &UNK_10f73f4d1;
      if ((int)param_3 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      FUN_10002b838(alStack_60,puVar1);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      unaff_x21 = &uStack_98;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110ccc9b8,&uStack_98,param_4);
      ppuVar2 = &puStack_80;
      puStack_80 = unaff_x21;
      FUN_10007e5dc();
      lVar3 = 0;
      do {
        if ((&cStack_49)[lVar3] < '\0') {
          ppuVar2 = *(undefined8 ***)((long)alStack_60 + lVar3);
          func_0x000107c60e14();
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  func_0x000107c60e78();
  puStack_80 = unaff_x21;
  FUN_10007e5dc(&puStack_80);
  lVar3 = -0x30;
  pcVar5 = &cStack_49;
  do {
    if (*pcVar5 < '\0') {
      func_0x000107c60e14(*(undefined8 *)(pcVar5 + -0x17));
    }
    lVar3 = lVar3 + 0x18;
    pcVar5 = pcVar5 + -0x18;
  } while (lVar3 != 0);
  func_0x000107c60bd8();
  return (undefined8 **)(ulong)(*(byte *)((long)ppuVar2 + 0x3a) & 1);
}



/* Entry: 1008a3aa4; end: 1008a3aaf; -[SCRequestInfoContainer firstHitNSURLSessionFinished] */

byte FUN_1008a3aa4(long param_1)

{
  return *(byte *)(param_1 + 0x3a) & 1;
}



/* Entry: 1008a3ab0; end: 1008a3c57;  */

undefined8 ** FUN_1008a3ab0(long param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 **ppuVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x21;
  char *pcVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined8 **)0x0;
  if (param_1 != 0) {
    ppuVar2 = *(undefined8 ***)(param_1 + 8);
    (*(code *)(*ppuVar2)[5])(ppuVar2,&UNK_110ccc878);
    unaff_x21 = param_3;
    if ((int)ppuVar2 != 0) {
      plVar4 = *(long **)(param_1 + 8);
      puVar1 = &UNK_10f73f4d1;
      if (param_2 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      FUN_10002b838(auStack_78,puVar1);
      puVar1 = &UNK_10f73f4d1;
      if ((int)param_3 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      FUN_10002b838(alStack_60,puVar1);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      unaff_x21 = &uStack_98;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110ccc878,&uStack_98,param_4);
      ppuVar2 = &puStack_80;
      puStack_80 = unaff_x21;
      FUN_10007e5dc();
      lVar3 = 0;
      do {
        if ((&cStack_49)[lVar3] < '\0') {
          ppuVar2 = *(undefined8 ***)((long)alStack_60 + lVar3);
          func_0x000107c60e14();
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x30);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  func_0x000107c60e78();
  puStack_80 = unaff_x21;
  FUN_10007e5dc(&puStack_80);
  lVar3 = -0x30;
  pcVar5 = &cStack_49;
  do {
    if (*pcVar5 < '\0') {
      func_0x000107c60e14(*(undefined8 *)(pcVar5 + -0x17));
    }
    lVar3 = lVar3 + 0x18;
    pcVar5 = pcVar5 + -0x18;
  } while (lVar3 != 0);
  func_0x000107c60bd8();
  return (undefined8 **)(ulong)(*(byte *)((long)ppuVar2 + 0x3b) & 1);
}



/* Entry: 1008a3c58; end: 1008a3c63; -[SCRequestInfoContainer firstHitParsingStart] */

byte FUN_1008a3c58(long param_1)

{
  return *(byte *)(param_1 + 0x3b) & 1;
}



/* Entry: 1008a3c64; end: 1008a3e0b;  */

void FUN_1008a3c64(long param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 **ppuVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x21;
  char *pcVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined8 **)0x0;
  puVar4 = param_3;
  if (param_1 != 0) {
    ppuVar2 = *(undefined8 ***)(param_1 + 8);
    (*(code *)(*ppuVar2)[5])(ppuVar2,&UNK_110ccc7d8);
    unaff_x21 = param_3;
    if ((int)ppuVar2 != 0) {
      plVar6 = *(long **)(param_1 + 8);
      puVar1 = &UNK_10f73f4d1;
      if (param_2 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      FUN_10002b838(auStack_78,puVar1);
      puVar1 = &UNK_10f73f4d1;
      if ((int)param_3 == 0) {
        puVar1 = &UNK_10f73f4d6;
      }
      FUN_10002b838(alStack_60,puVar1);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      unaff_x21 = &uStack_98;
      puVar4 = &uStack_98;
      (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110ccc7d8,puVar4,param_4);
      ppuVar2 = &puStack_80;
      puStack_80 = unaff_x21;
      FUN_10007e5dc();
      lVar5 = 0;
      do {
        if ((&cStack_49)[lVar5] < '\0') {
          ppuVar2 = *(undefined8 ***)((long)alStack_60 + lVar5);
          func_0x000107c60e14();
        }
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x30);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  puStack_80 = unaff_x21;
  FUN_10007e5dc(&puStack_80);
  lVar5 = -0x30;
  pcVar7 = &cStack_49;
  do {
    if (*pcVar7 < '\0') {
      func_0x000107c60e14(*(undefined8 *)(pcVar7 + -0x17));
    }
    uVar3 = SUB81(puVar4,0);
    lVar5 = lVar5 + 0x18;
    pcVar7 = pcVar7 + -0x18;
  } while (lVar5 != 0);
  func_0x000107c60bd8();
  *(undefined1 *)((long)ppuVar2 + 0xd) = uVar3;
  return;
}



/* Entry: 1008a3e0c; end: 1008a3e13; -[SCRequestTask setIsCompleteTaskExecuted:] */

void FUN_1008a3e0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 1008a3e14; end: 1008a3e23; -[SCRequest tracingId] */

undefined8 FUN_1008a3e14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 1008a3e24; end: 1008a3e2b; -[SCStoriesProtobufRequestManager _logFetchResultWithRequestSource:fetchResult:] */

void FUN_1008a3e24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0aadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logNetworkFetchWithClassIdentifi_112608580);
  return;
}



/* Entry: 1008a3e2c; end: 1008a3e87; -[SCStoriesGrapheneMetricsEmitter logNetworkFetchWithClassIdentifier:fetchResult:] */

void FUN_1008a3e2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  func_0x000107c61180();
  FUN_1008a3e88(*(undefined8 *)(param_1 + 8),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008a3e88; end: 1008a401f;  */

undefined * FUN_1008a3e88(long param_1,undefined *param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
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
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a038f8);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a038f8,&uStack_80,param_3 * 100);
      puStack_68 = (undefined1 *)&uStack_80;
      FUN_10007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        func_0x000107c60e14(auStack_60[0]);
      }
    }
  }
  puVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(puVar2);
  FUN_1000ff348(puVar2 + 0x220);
  FUN_1008a4048();
  return puVar2;
}



/* Entry: 1008a4020; end: 1008a4047;  */

long FUN_1008a4020(long param_1)

{
  FUN_1000ff348(param_1 + 0x220);
  FUN_1008a4048();
  return param_1;
}



/* Entry: 1008a4048; end: 1008a4057;  */

long FUN_1008a4048(void)

{
  long unaff_x19;
  
  FUN_100687584(unaff_x19 + 0x1f8);
  func_0x0001006875dc(unaff_x19 + 400);
  FUN_100687608(unaff_x19 + 0xd8);
  if (*(char *)(unaff_x19 + 0xd0) == '\x01') {
    FUN_100687628(unaff_x19 + 0x28);
  }
  return unaff_x19 + 0x10;
}



/* Entry: 1008a4058; end: 1008a423b;  */

void FUN_1008a4058(long param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  long *plVar7;
  long lStack_168;
  long lStack_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [72];
  undefined1 uStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined8 uStack_58;
  
  plVar4 = &lStack_140;
  uVar6 = param_3;
  func_0x00010089124c();
  iVar5 = (int)uVar6;
  uStack_58 = extraout_x8;
  FUN_100895ac0();
  lVar2 = lStack_140;
  if (lStack_140 != 0) {
    uVar6 = param_5;
    FUN_1008a423c(lStack_140,param_2);
    iVar5 = (int)uVar6;
  }
  iVar1 = (int)lVar2;
  FUN_100670378();
  if ((*(long *)(param_1 + 0x2a8) == 0) || (FUN_10060f0d8(), iVar1 == 0)) {
    FUN_1008a42cc(param_1,param_2,param_3,param_4,param_5);
    iVar5 = (int)param_3;
  }
  else {
    plVar7 = *(long **)(param_1 + 0x2a8);
    lStack_140 = param_1;
    func_0x000107c60c94(auStack_138,param_2);
    func_0x000107c396d0(auStack_120);
    func_0x000107c300cc(auStack_108,param_4);
    uStack_c0 = (undefined1)param_5;
    puStack_b8 = &UNK_10b4a6358;
    ppuStack_b0 = &PTR_DAT_110cee110;
    plVar3 = (long *)0x88;
    func_0x000107c60e20();
    *plVar3 = lStack_140;
    func_0x000107c60c94(plVar3 + 1,auStack_138);
    func_0x000107c60c94(plVar3 + 4,auStack_120);
    func_0x000107c300cc(plVar3 + 7,auStack_108);
    *(undefined1 *)(plVar3 + 0x10) = uStack_c0;
    param_2 = &puStack_b8;
    plStack_a8 = plVar3;
    (**(code **)(*plVar7 + 0x10))(plVar7,param_2);
    func_0x000107c39688(ppuStack_b0);
    func_0x000107c30090();
  }
  FUN_100892a50(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c39688(ppuStack_b0);
  func_0x000107c30090();
  func_0x000107c39678();
  if (*(char *)((long)plVar4 + 0xa0) == '\x01') {
    func_0x000100895acc();
    lVar2 = lStack_168 + 0x18;
    func_0x000107373894(lVar2,param_2);
    if (lVar2 != 0) {
      if ((iVar5 != 0) && (*(char *)(lStack_168 + 0x10) == '\x01')) {
        *(long *)(lStack_168 + 8) = *(long *)(lStack_168 + 8) + *(long *)(lVar2 + 0x28);
      }
      func_0x000107c30124(lStack_168 + 0x18);
    }
    FUN_10067046c();
  }
  return;
}



/* Entry: 1008a423c; end: 1008a42bf;  */

void FUN_1008a423c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    func_0x000100895acc();
    lVar1 = uStack_28 + 0x18;
    func_0x000107373894(lVar1,param_2);
    if (lVar1 != 0) {
      if ((param_3 != 0) && (*(char *)(uStack_28 + 0x10) == '\x01')) {
        *(long *)(uStack_28 + 8) = *(long *)(uStack_28 + 8) + *(long *)(lVar1 + 0x28);
      }
      func_0x000107c30124(uStack_28 + 0x18);
    }
    FUN_10067046c();
  }
  return;
}



/* Entry: 1008a42c0; end: 1008a42cb;  */

void FUN_1008a42c0(void)

{
  return;
}



/* Entry: 1008a42cc; end: 1008a4623;  */

void FUN_1008a42cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 **ppuVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  
  ppuVar5 = &puStack_70;
  puStack_70 = (undefined8 *)0x0;
  puStack_68 = (undefined8 *)0x0;
  puStack_60 = (undefined8 *)0x0;
  FUN_10060fc68();
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  if ((param_5 & 1) == 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  }
  plVar4 = (long *)(param_1 + 0xb0);
  FUN_100896fc8();
  if (plVar4 != (long *)0x0) {
    uVar9 = *(ulong *)(param_1 + 0xb8);
    lVar7 = *plVar4;
    uVar8 = plVar4[1];
    uVar11 = uVar9 - 1;
    if ((uVar9 & uVar11) == 0) {
      uVar8 = uVar11 & uVar8;
    }
    else if (uVar9 <= uVar8) {
      uVar13 = 0;
      if (uVar9 != 0) {
        uVar13 = uVar8 / uVar9;
      }
      uVar8 = uVar8 - uVar13 * uVar9;
    }
    lVar12 = *(long *)(param_1 + 0xb0);
    plVar2 = *(long **)(lVar12 + uVar8 * 8);
    do {
      plVar10 = plVar2;
      plVar2 = (long *)*plVar10;
    } while ((long *)*plVar10 != plVar4);
    if (plVar10 == (long *)(param_1 + 0xc0)) {
LAB_1008a43a8:
      if (lVar7 == 0) {
LAB_1008a43dc:
        *(undefined8 *)(lVar12 + uVar8 * 8) = 0;
        lVar7 = *plVar4;
        goto LAB_1008a43e4;
      }
      uVar13 = *(ulong *)(lVar7 + 8);
      if ((uVar9 & uVar11) == 0) {
        uVar14 = uVar13 & uVar11;
      }
      else {
        uVar14 = uVar13;
        if (uVar9 <= uVar13) {
          uVar14 = 0;
          if (uVar9 != 0) {
            uVar14 = uVar13 / uVar9;
          }
          uVar14 = uVar13 - uVar14 * uVar9;
        }
      }
      if (uVar14 != uVar8) goto LAB_1008a43dc;
LAB_1008a43ec:
      if ((uVar9 & uVar11) == 0) {
        uVar13 = uVar13 & uVar11;
      }
      else if (uVar9 <= uVar13) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar13 / uVar9;
        }
        uVar13 = uVar13 - uVar11 * uVar9;
      }
      if (uVar13 != uVar8) {
        *(long **)(lVar12 + uVar13 * 8) = plVar10;
        lVar7 = *plVar4;
      }
    }
    else {
      uVar13 = plVar10[1];
      if ((uVar9 & uVar11) == 0) {
        uVar13 = uVar13 & uVar11;
      }
      else if (uVar9 <= uVar13) {
        uVar14 = 0;
        if (uVar9 != 0) {
          uVar14 = uVar13 / uVar9;
        }
        uVar13 = uVar13 - uVar14 * uVar9;
      }
      if (uVar13 != uVar8) goto LAB_1008a43a8;
LAB_1008a43e4:
      if (lVar7 != 0) {
        uVar13 = *(ulong *)(lVar7 + 8);
        goto LAB_1008a43ec;
      }
    }
    *plVar10 = lVar7;
    *plVar4 = 0;
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + -1;
    FUN_1008a4624();
    FUN_10068eee8();
  }
  plVar4 = (long *)(param_1 + 0xd8);
  FUN_1008a465c(plVar4,param_2);
  if (plVar4 == (long *)0x0) goto LAB_1008a4554;
  uVar9 = *(ulong *)(param_1 + 0xe0);
  lVar7 = *plVar4;
  uVar8 = plVar4[1];
  uVar11 = uVar9 - 1;
  if ((uVar9 & uVar11) == 0) {
    uVar8 = uVar11 & uVar8;
  }
  else if (uVar9 <= uVar8) {
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = uVar8 / uVar9;
    }
    uVar8 = uVar8 - uVar13 * uVar9;
  }
  lVar12 = *(long *)(param_1 + 0xd8);
  plVar2 = *(long **)(lVar12 + uVar8 * 8);
  do {
    plVar10 = plVar2;
    plVar2 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar4);
  if (plVar10 == (long *)(param_1 + 0xe8)) {
LAB_1008a44c4:
    if (lVar7 == 0) {
LAB_1008a44f8:
      *(undefined8 *)(lVar12 + uVar8 * 8) = 0;
      lVar7 = *plVar4;
      goto LAB_1008a4500;
    }
    uVar13 = *(ulong *)(lVar7 + 8);
    if ((uVar9 & uVar11) == 0) {
      uVar14 = uVar13 & uVar11;
    }
    else {
      uVar14 = uVar13;
      if (uVar9 <= uVar13) {
        uVar14 = 0;
        if (uVar9 != 0) {
          uVar14 = uVar13 / uVar9;
        }
        uVar14 = uVar13 - uVar14 * uVar9;
      }
    }
    if (uVar14 != uVar8) goto LAB_1008a44f8;
LAB_1008a4508:
    if ((uVar9 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar9 <= uVar13) {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar13 / uVar9;
      }
      uVar13 = uVar13 - uVar11 * uVar9;
    }
    if (uVar13 != uVar8) {
      *(long **)(lVar12 + uVar13 * 8) = plVar10;
      lVar7 = *plVar4;
    }
  }
  else {
    uVar13 = plVar10[1];
    if ((uVar9 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar9 <= uVar13) {
      uVar14 = 0;
      if (uVar9 != 0) {
        uVar14 = uVar13 / uVar9;
      }
      uVar13 = uVar13 - uVar14 * uVar9;
    }
    if (uVar13 != uVar8) goto LAB_1008a44c4;
LAB_1008a4500:
    if (lVar7 != 0) {
      uVar13 = *(ulong *)(lVar7 + 8);
      goto LAB_1008a4508;
    }
  }
  *plVar10 = lVar7;
  *plVar4 = 0;
  *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
  FUN_1008a4624();
  func_0x000107c30100();
LAB_1008a4554:
  lVar7 = *(long *)(param_1 + 0x238);
  lVar12 = *(long *)(param_1 + 0x240);
  if (lVar7 != lVar12) {
    lVar6 = lVar12 - lVar7 >> 4;
    func_0x000107c300c0();
    if ((ulong)ppuVar5 >> 0x3c != 0) {
      func_0x000107c300c4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a4600);
      (*pcVar3)();
    }
    func_0x000107c300c8();
    puStack_60 = ppuVar5 + lVar6 * 2;
    puStack_70 = ppuVar5;
    puStack_68 = ppuVar5;
    func_0x000107c300bc(&puStack_70,lVar7,lVar12);
  }
  func_0x000107c60d8c(param_1 + 0x50);
  puVar1 = puStack_68;
  puVar15 = puStack_70;
  if (puStack_70 != puStack_68) {
    for (; puVar15 != puVar1; puVar15 = puVar15 + 2) {
      (**(code **)(*(long *)*puVar15 + 0x10))((long *)*puVar15,param_3,param_4,param_5);
    }
  }
  FUN_1008a470c(&puStack_70);
  return;
}


