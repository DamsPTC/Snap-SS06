/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100805538; end: 100805607; +[SCLensDataProviderUpdateEvent didAssignWithLensDataProvider:shouldNotifyUI:lensIdToRestore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100805538(long param_1,long param_2,undefined8 param_3,undefined1 param_4,long param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c614ec();
  lVar3 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11307d138) = 1;
  *(undefined8 *)(lVar3 + _DAT_11307d140) = 0;
  *(undefined8 *)(lVar3 + _DAT_11307d148) = param_3;
  *(undefined1 *)(lVar3 + _DAT_11307d150) = param_4;
  plVar1 = (long *)(lVar3 + _DAT_11307d158);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = param_1;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_50,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100805608; end: 10080569b; -[SCLensDataProviderProxy initWithLensDataProviderSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100805608(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c611a0(param_1 + _DAT_112783220,param_3);
  return param_1;
}



/* Entry: 10080569c; end: 100805797; -[SCLensCarouselLensStudioNotificationsHandler initWithLensUserProvider:notificationManager:lensCarouselManager:startupInfoService:] */

undefined1 *
FUN_10080569c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f58a8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100805798; end: 1008059af; -[SCLensCarouselLensStudioNotificationsHandler startHandleLensStudioNotifications] */

void FUN_100805798(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c3d7bc();
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c3d7bc();
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c3d7bc();
  func_0x000107c61170(puVar1);
  func_0x000107c61144(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4b46c();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4b458();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c4c188(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4da80();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar6 = uVar5;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 1008059b0; end: 1008059b7; -[SCLensUserProvider lensStudioUser] */

void FUN_1008059b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 1008059b8; end: 100805a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008059b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bb8d8;
    func_0x000107c610f4(PTR_PTR_1126bb8d8);
    lVar1 = param_1 + _DAT_1127262f4;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c4ec80();
    func_0x000107c61180();
    func_0x000107c492d4(puVar3,param_2,lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100805a50; end: 100805adf; -[SCLensStudioUserSettings initWithUserPreferences:] */

undefined1 * FUN_100805a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e92e0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100805ae0; end: 100805ae7; -[SCLensStudioUserSettings lensStudioIdObservable] */

undefined8 FUN_100805ae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100805ae8; end: 100805af7; -[SCCameraViewController storiesLegacySnapInfoCollector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100805ae8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276263c);
}



/* Entry: 100805af8; end: 100805b27; -[SCCameraViewControllerInternalState setSearchEventAnnouncerCreator:] */

void FUN_100805af8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 100805b28; end: 100805b37; -[SCCameraViewController cameraHardwareServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100805b28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624f4);
}



/* Entry: 100805b38; end: 100805bf7; +[SCCameraViewfinderLayoutExperiment tieredAnchorViewfinderLayoutEnabledWithAppStartExperimentReader:] */

long FUN_100805b38(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fea080,auStack_48,0,0);
  if (cRam0000000112fea080 != '\0') {
    if (cRam0000000112fea080 == '\x01') {
      return 1;
    }
    if (param_3 != 0) {
      func_0x000107c615f0(param_3);
      uVar1 = 0xd000000000000032;
      func_0x000107c5fadc(0xd000000000000032,0x800000010f19e030);
      lVar2 = param_3;
      func_0x000107c3ebd4(param_3);
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(param_3);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 100805bf8; end: 100805c0f;  */

void FUN_100805bf8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de3ab8;
  FUN_1000f5ff4(&PTR____CFConstantStringClassReference_110de3ab8,
                &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    FUN_10002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100805c10; end: 100805c67;  */

void FUN_100805c10(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  func_0x000107c61134(param_1,PTR_s_sc_navigationItem_DEPRECATED_112630fb8);
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126e0168;
    func_0x000107c610fc(PTR_PTR_1126e0168);
    func_0x000107c5a84c(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100805c68; end: 100805c77;  */

void FUN_100805c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)
            (param_1,PTR_s_sc_navigationItem_DEPRECATED_112630fb8,param_3,1);
  return;
}



/* Entry: 100805c78; end: 100805ccb; -[SCNavigationItem_DEPRECATED setTitle:] */

/* WARNING: Possible PIC construction at 0x000100805c9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100805ca0) */

void FUN_100805c78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100805ccc; end: 100805ce3; -[SCNavigationItem_DEPRECATED delegate] */

void FUN_100805ccc(long param_1)

{
  func_0x000107c61148(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100805ce4; end: 100805ffb; -[SCMainCameraViewControllerStartupWorkflow _setupCameraLifecycleObervables:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100805ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  func_0x000107c61174(param_3);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  func_0x000107c61144(auStack_a0,param_1);
  uVar2 = param_3;
  func_0x000107c3f1ac(param_3);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5de90();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10085656c;
  puStack_b8 = &UNK_1109151f8;
  puStack_b0 = &uStack_98;
  func_0x000107c6111c(auStack_a8,auStack_a0);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61144(auStack_d8,param_3);
  lVar8 = (long)_DAT_11276238c;
  lVar5 = param_1 + lVar8;
  func_0x000107c61148(lVar5);
  lVar6 = lVar5;
  func_0x000107c419f0();
  func_0x000107c61180();
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  puStack_100 = &UNK_100c788cc;
  puStack_f8 = &UNK_110987f90;
  func_0x000107c6111c(auStack_e8,auStack_d8);
  func_0x000107c6111c(auStack_e0,auStack_a0);
  puStack_f0 = &uStack_98;
  lVar7 = lVar6;
  func_0x000107c5c320(lVar6);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  param_1 = param_1 + lVar8;
  func_0x000107c61148(param_1);
  lVar5 = param_1;
  func_0x000107c41b80();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_120,auStack_d8);
  func_0x000107c6111c(auStack_118,auStack_a0);
  lVar6 = lVar5;
  func_0x000107c5c320(lVar5);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_118);
  func_0x000107c61120(auStack_120);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61120(auStack_e8);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_a0);
  func_0x000107c60bcc(&uStack_98,8);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100805ffc; end: 10080603f;  */

/* WARNING: Possible PIC construction at 0x000100806028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010080602c) */

void FUN_100805ffc(long param_1,long param_2)

{
  func_0x000107c60bc8(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 100806040; end: 100806113; -[SCCameraViewController _subscribeOnLensCarouselState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806040(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112762550);
  puVar1 = auStack_40;
  func_0x000107c6111c(puVar1,auStack_38);
  FUN_100078e94();
  func_0x000107c61180();
  func_0x000107c5dc64(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100806114; end: 10080627f; -[SCCameraViewController _setupCameraModeActivationInfoObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806114(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + _DAT_112762578) != 0) {
    puVar1 = PTR_PTR_1126b9b20;
    func_0x000107c4064c();
    if ((int)puVar1 != 0) {
      func_0x000107c61144(auStack_58,param_1);
      param_1 = param_1 + _DAT_112762568;
      func_0x000107c61148(param_1);
      lVar2 = param_1;
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c40650();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c421ac();
      func_0x000107c61180();
      func_0x000107c6111c(auStack_60,auStack_58);
      lVar5 = lVar4;
      func_0x000107c5c320(lVar4);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(param_1);
      func_0x000107c61120(auStack_60);
      func_0x000107c61120(auStack_58);
    }
  }
  return;
}



/* Entry: 100806280; end: 1008062bb;  */

void FUN_100806280(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1006881cc();
  func_0x000107c613fc();
  FUN_1008062bc();
  *param_1 = uVar1;
  return;
}



/* Entry: 1008062bc; end: 100806373;  */

void FUN_1008062bc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = 0x112ee2d10;
  FUN_1000285a8(0x112ee2d10,&UNK_10db0dee0);
  lVar2 = lVar1;
  func_0x000107c613fc();
  FUN_1000c2754();
  *(long *)(unaff_x20 + 0x10) = lVar2;
  uVar3 = 0x112ee2d18;
  FUN_1000285a8(0x112ee2d18,&UNK_10db0dee8);
  func_0x000107c613fc();
  FUN_1000c2754();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  func_0x000107c613fc(lVar1,*(undefined4 *)(lVar1 + 0x30),*(undefined2 *)(lVar1 + 0x34));
  FUN_1000c2754();
  *(long *)(unaff_x20 + 0x20) = lVar1;
  *(undefined2 *)(unaff_x20 + 0x28) = 0x202;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined4 *)(unaff_x20 + 0x40) = 0x202;
  return;
}



/* Entry: 100806374; end: 10080639f;  */

undefined1  [16] FUN_100806374(void)

{
  return ZEXT816(0x1106d00d0);
}



/* Entry: 1008063a0; end: 10080640f; -[_TtC24CameraModeActivationImpl30CameraModeActivationController continuousCaptureStateObservableObjc] */

void FUN_1008063a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = 0;
  FUN_1002ed07c(0);
  func_0x000107c6157c(param_1);
  puVar2 = &UNK_102a32edc;
  FUN_1000bfde0(&UNK_102a32edc,0,uVar1);
  puVar3 = puVar2;
  FUN_1004575f0();
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100806410; end: 10080650f; -[SCCameraViewController _setupContinuousCaptureSegmentEventObservable] */

void FUN_100806410(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  func_0x000107c3f0bc(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c40648();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4ac54();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c4db94(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100806510; end: 10080651f; -[SCCameraViewController cameraFeatureCatalog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100806510(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624f0);
}



/* Entry: 100806520; end: 100806597; -[SCLegacyMainCameraFeatureDelegateProviderImpl initWithCameraViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100806520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f8330;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithCameraViewController__1125dc9d8,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_112762300),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100806598; end: 100806603; -[SCLegacyFeatureDelegateProviderImpl initWithCameraViewController:] */

undefined1 * FUN_100806598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f8348;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100806604; end: 10080669b; -[SCModalUIContainer initWithPresentingViewController:animated:] */

undefined1 *
FUN_100806604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e230;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    puVar2 = PTR_PTR_1126e2de0;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10080669c; end: 10080670f; -[SCGrapheneModalUiContainerMetric2 init] */

undefined1 * FUN_10080669c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e2a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100806710; end: 10080677b; -[SCOverlayUIContainer initWithPresentingViewController:] */

undefined1 * FUN_100806710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270e258;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10080677c; end: 10080678b; -[_TtC18SCCameraUIServices18SCCameraUIServices cameraUIScopeViewContainerResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10080677c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130385c8));
  return;
}



/* Entry: 10080678c; end: 10080679b; -[SCCameraViewController cameraOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10080678c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2a1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624bc),PTR_s_cameraOverlay_1125a8210);
  return;
}



/* Entry: 10080679c; end: 1008068ff; -[SCCameraUIScopeViewContainerImpl resolveContainerView:modalUIContainer:nonAnimatedModalUIContainer:trayContainer:legacyDelegateProvider:] */

/* WARNING: Possible PIC construction at 0x00010080689c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008068ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008068bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008068cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008068dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008068d0) */
/* WARNING: Removing unreachable block (ram,0x0001008068c0) */
/* WARNING: Removing unreachable block (ram,0x0001008068b0) */
/* WARNING: Removing unreachable block (ram,0x0001008068a0) */
/* WARNING: Removing unreachable block (ram,0x0001008068e0) */

void FUN_10080679c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_100806900;
  puStack_88 = &UNK_110868f80;
  lStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_7;
  uStack_58 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4b944(uVar1,param_2,&puStack_a0);
  func_0x000107c3fefc(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  func_0x000107c3fefc(*(undefined8 *)(param_1 + 8),param_2,param_4);
  func_0x000107c3fefc(*(undefined8 *)(param_1 + 0x48),param_2,param_6);
  func_0x000107c3fefc(*(undefined8 *)(param_1 + 0x18),param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_58);
  return;
}



/* Entry: 100806900; end: 1008069a7;  */

/* WARNING: Possible PIC construction at 0x000100806928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100806944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100806960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010080697c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100806964) */
/* WARNING: Removing unreachable block (ram,0x000100806948) */
/* WARNING: Removing unreachable block (ram,0x00010080692c) */
/* WARNING: Removing unreachable block (ram,0x000100806980) */

void FUN_100806900(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x40);
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1008069a8; end: 1008069ef;  */

/* WARNING: Possible PIC construction at 0x0001008069bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008069cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008069dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008069d0) */
/* WARNING: Removing unreachable block (ram,0x0001008069c0) */
/* WARNING: Removing unreachable block (ram,0x0001008069e0) */

void FUN_1008069a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 1008069f0; end: 100806a4b;  */

void FUN_1008069f0(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  if ((param_3 == 0) &&
     (uVar1 = param_2, func_0x000107c61164(param_2,PTR_s_attachFeatureLayoutToLegacyOverl_1125a0b48)
     , (uVar1 & 1) != 0)) {
    func_0x000107c3e2a4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100806a4c; end: 100806b5b; -[SCCameraOverlayView attachFeatureLayoutToLegacyOverlayView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127627e4);
  func_0x000107c61174(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112762870);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar1);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c4db94(uVar2);
  func_0x000107c61120(auStack_40);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100806b5c; end: 100806b6f; -[SCMainCameraViewController setTooltipState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762354,param_3);
  return;
}



/* Entry: 100806b70; end: 100806b83; -[SCCameraViewController setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806b70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762610,param_3);
  return;
}



/* Entry: 100806b84; end: 100806b8f; -[_TtC17SCMainCameraScope17SCMainCameraScope sendSnapDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806b84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130766b0;
  func_0x000107c61428(param_1 + _DAT_1130766b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100806b90; end: 100806ba3; -[SCCameraViewController setPreviewWorkflowDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806b90(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762604,param_3);
  return;
}



/* Entry: 100806ba4; end: 100806bab; -[SCCameraFeatureLoggingServices cameraScreenshotLogger] */

undefined8 FUN_100806ba4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100806bac; end: 100806beb; -[SCCameraViewController setScreenshotLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762630;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100806bec; end: 100806bf3; -[SCCameraFeatureLoggingServices cameraOpenLogger] */

undefined8 FUN_100806bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100806bf4; end: 100806c07; -[SCCameraViewController setCameraOpenLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762614,param_3);
  return;
}



/* Entry: 100806c08; end: 100806c1b; -[SCCameraViewController setCameraUserBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806c08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762618,param_3);
  return;
}



/* Entry: 100806c1c; end: 100806c2f; -[SCCameraViewController setSnapDocManagerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762608,param_3);
  return;
}



/* Entry: 100806c30; end: 100806c37; -[SCCameraFeatureLoggingServices permissionStateLogger] */

undefined8 FUN_100806c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100806c38; end: 100806c4b; -[SCCameraViewController setPermissionStateLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806c38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762620,param_3);
  return;
}



/* Entry: 100806c4c; end: 100806c5f; -[SCCameraViewController setLaunchDataStore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762634,param_3);
  return;
}



/* Entry: 100806c60; end: 100806c9f; -[SCCameraViewController setCameraGrapheneLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276261c;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100806ca0; end: 100806cdf; -[SCCameraViewController setPreviewFilterDataProviderFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762648;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100806ce0; end: 100806cef; -[SCMainCameraViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100806ce0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762310);
}



/* Entry: 100806cf0; end: 100806f9f; -[SCMainCameraEntryPoint _createHeaderLayoutController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  FUN_1007f240c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3f0d0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4d1e4();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c42e38();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5b5fc();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  puVar7 = PTR_PTR_1126c8d70;
  func_0x000107c610f4();
  lVar1 = param_1;
  FUN_1007ef0cc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5b03c();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    uStack_80 = param_1 + _DAT_11274328c;
    func_0x000107c61148();
    uStack_88 = param_1 + _DAT_11274325c;
    func_0x000107c61148();
  }
  lVar4 = param_1;
  FUN_10080d1cc();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c3f2a4();
  func_0x000107c61180();
  lVar8 = lVar5;
  func_0x000107c3f274();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_112743220;
  func_0x000107c61148();
  lVar9 = lVar3;
  func_0x000107c4f3e4();
  func_0x000107c61180();
  lVar10 = param_1;
  func_0x0001007ee88c();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112743304;
    func_0x000107c61148();
  }
  lVar12 = param_1;
  func_0x000107c5bf3c();
  func_0x000107c61180();
  func_0x000107c46cb4(puVar7,param_2,param_3,lVar2,uStack_80,uStack_88,lVar8,lVar9,lVar6,lVar11,
                      lVar12);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100806fa0; end: 100806faf; -[SCLazyLoadingProxy forwardingTargetForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100806fa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796a2c),PTR_s_target_112678178);
  return;
}



/* Entry: 100806fb0; end: 100807047;  */

void FUN_100806fb0(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100807048; end: 1008072f3; -[SCCameraDefaultFeatureActivatorImpl _wrapFeature:] */

void FUN_100807048(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_3);
  lVar2 = param_1 + 0x40;
  func_0x000107c61148();
  lVar1 = lVar2;
  func_0x000107c3f0b8();
  func_0x000107c61170(lVar2);
  if ((int)lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61144(auStack_78,param_1);
    puStack_c0 = &uStack_98;
    uStack_98 = 0;
    dVar4 = 6.81691147847594e-313;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    puStack_c8 = &uStack_b8;
    uStack_b8 = 0;
    uStack_a8 = 0x2020000000;
    uStack_a0 = 0;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_100807340;
    puStack_d8 = &UNK_110876070;
    lStack_d0 = param_1;
    puStack_b0 = puStack_c8;
    puStack_90 = puStack_c0;
    func_0x000107c4b944(*(undefined8 *)(param_1 + 0x38));
    if ((*(byte *)(puStack_b0 + 3) & 1) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        dVar5 = 0.0;
      }
      else {
        func_0x000107c6071c();
        dVar5 = dVar4;
      }
      lVar2 = param_3;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(puStack_90 + 3) & 1) == 0)) &&
         (lVar2 != 0)) {
        func_0x000107c6071c();
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        lVar1 = lVar2;
        func_0x000107c61158(lVar2);
        func_0x000107c60b14();
        func_0x000107c61180();
        FUN_10080aeb8(dVar4 - dVar5,uVar3,lVar1);
        func_0x000107c61170(lVar1);
      }
      param_1 = param_1 + 0x18;
      func_0x000107c61148();
      lVar1 = param_1;
      FUN_100078e94();
      func_0x000107c61180();
      func_0x000107c6111c(auStack_f8,auStack_78);
      func_0x000107c61174(lVar2);
      func_0x000107c61174(param_1);
      func_0x000107c4e590(lVar1);
      func_0x000107c61170(lVar1);
      func_0x000107c61174(lVar2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61120(auStack_f8);
      func_0x000107c61170(param_1);
    }
    else {
      lVar2 = 0;
    }
    func_0x000107c60bcc(&uStack_b8,8);
    func_0x000107c60bcc(&uStack_98,8);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1008072f4; end: 1008072fb; -[_TtC39ConditionalCameraServicesImplementation47CameraFeatureScopeWorkflowServiceImplementation cameraFeatureActivatorIsValid:] */

undefined8 FUN_1008072f4(void)

{
  return 1;
}



/* Entry: 1008072fc; end: 10080733f;  */

/* WARNING: Possible PIC construction at 0x000100807324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100807328) */

void FUN_1008072fc(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  return;
}



/* Entry: 100807340; end: 100807367;  */

void FUN_100807340(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x31);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) =
       *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x58);
  return;
}



/* Entry: 100807368; end: 1008073e7;  */

void FUN_100807368(long param_1)

{
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x30),8);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1008073e8; end: 100807513; -[SCCameraLegacyDelegateProvidingActivatorImpl _wrapFeatureWithDelegateProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008073e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  param_1 = param_1 + _DAT_112751bf4;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    lVar3 = 0;
    if (lVar1 != 0) {
      lVar3 = param_1;
      func_0x000107c4ad24();
      func_0x000107c61180();
      lVar1 = param_3;
      func_0x000107c5c734(param_3);
      func_0x000107c61180();
      lVar2 = lVar3;
      func_0x000107c49d74(lVar3,param_2,lVar1);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar3);
      if ((int)lVar2 != 0) {
        lVar3 = param_1;
        func_0x000107c4ad24(param_1);
        func_0x000107c61180();
        lVar1 = param_3;
        func_0x000107c5c734(param_3);
        func_0x000107c61180();
        func_0x000107c40168(lVar3,param_2,lVar1);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar3);
      }
      lVar3 = param_3;
      func_0x000107c5c734(param_3);
      func_0x000107c61180();
    }
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100807514; end: 10080755b;  */

void FUN_100807514(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3ce40();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10080755c; end: 100807607; -[SCCameraLazyFeatureReference _wrapFeature:] */

void FUN_10080755c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  (**(code **)(lVar1 + 0x10))();
  if ((int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x000107c5c734(param_3);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100807608; end: 100807b13;  */

void FUN_100807608(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar7 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar7 == 0) {
    puVar39 = (undefined *)0x0;
  }
  else {
    puVar39 = PTR_PTR_1126c7ab0;
    func_0x000107c610f4();
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_100807b14;
    puStack_88 = &UNK_11084e7d0;
    uVar36 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar36);
    ppuVar8 = &puStack_a0;
    uStack_80 = uVar36;
    FUN_100807b14();
    func_0x000107c61180();
    puStack_c8 = puVar6;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_100807c94;
    puStack_b0 = &UNK_11084e7d0;
    uVar36 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar36);
    ppuVar9 = &puStack_c8;
    uStack_a8 = uVar36;
    FUN_100807c94();
    func_0x000107c61180();
    puStack_f0 = puVar6;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_100807d70;
    puStack_d8 = &UNK_11084e7d0;
    uVar36 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar36);
    ppuVar10 = &puStack_f0;
    uStack_d0 = uVar36;
    FUN_100807d70();
    func_0x000107c61180();
    puStack_118 = puVar6;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_100807e4c;
    puStack_100 = &UNK_11084e7d0;
    uVar36 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar36);
    ppuVar11 = &puStack_118;
    uStack_f8 = uVar36;
    FUN_100807e4c();
    func_0x000107c61180();
    uVar36 = *(undefined8 *)(lVar7 + 0x10);
    uVar2 = *(undefined8 *)(lVar7 + 0x18);
    uVar30 = *(undefined8 *)(lVar7 + 0x1d0);
    uVar31 = *(undefined8 *)(lVar7 + 8);
    func_0x000107c5de90();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(lVar7 + 0x20);
    func_0x000107c4c168();
    func_0x000107c61180();
    uVar35 = *(undefined8 *)(lVar7 + 0x50);
    uVar1 = *(undefined8 *)(lVar7 + 0x90);
    uVar3 = *(undefined8 *)(lVar7 + 0x98);
    uVar32 = *(undefined8 *)(lVar7 + 0x130);
    uVar13 = *(undefined8 *)(lVar7 + 0x78);
    func_0x000107c3f0f4();
    func_0x000107c61180();
    uVar14 = *(undefined8 *)(lVar7 + 0x78);
    func_0x000107c3f0fc();
    func_0x000107c61180();
    uVar33 = *(undefined8 *)(lVar7 + 0x28);
    puStack_140 = puVar6;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_100807f28;
    puStack_128 = &UNK_11084e7d0;
    uVar37 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar37);
    ppuVar15 = &puStack_140;
    uStack_120 = uVar37;
    FUN_100807f28();
    func_0x000107c61180();
    uVar37 = *(undefined8 *)(lVar7 + 0x110);
    uVar4 = *(undefined8 *)(lVar7 + 0x118);
    uVar16 = *(undefined8 *)(lVar7 + 0x10);
    func_0x000107c519ac();
    puStack_168 = puVar6;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_100808004;
    puStack_150 = &UNK_11084e7d0;
    uVar38 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar38);
    ppuVar17 = &puStack_168;
    uStack_148 = uVar38;
    FUN_100808004();
    func_0x000107c61180();
    uVar38 = *(undefined8 *)(lVar7 + 0x168);
    uVar5 = *(undefined8 *)(lVar7 + 0x170);
    uVar18 = *(undefined8 *)(lVar7 + 0x38);
    func_0x000107c407b0();
    func_0x000107c61180();
    uVar34 = *(undefined8 *)(lVar7 + 0xf0);
    uVar19 = *(undefined8 *)(lVar7 + 0x1d8);
    func_0x000107c51b3c();
    func_0x000107c61180();
    uVar20 = *(undefined8 *)(lVar7 + 0x1e8);
    func_0x000107c4cf54();
    func_0x000107c61180();
    uVar21 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4f5c0();
    func_0x000107c61180();
    uVar22 = uVar21;
    func_0x000107c3e6cc();
    func_0x000107c61180();
    uVar23 = uVar22;
    func_0x000107c42e38();
    func_0x000107c61180();
    uVar24 = uVar23;
    func_0x000107c499a4();
    func_0x000107c61180();
    uVar42 = *(undefined8 *)(lVar7 + 0x200);
    uVar41 = *(undefined8 *)(lVar7 + 0x208);
    uVar25 = *(undefined8 *)(lVar7 + 0x210);
    func_0x000107c5d0d0();
    func_0x000107c61180();
    uVar43 = *(undefined8 *)(lVar7 + 0x30);
    uVar26 = *(undefined8 *)(lVar7 + 400);
    func_0x000107c4ac68();
    func_0x000107c61180();
    uVar27 = *(undefined8 *)(lVar7 + 0x1c8);
    func_0x000107c3d0d8();
    func_0x000107c61180();
    uVar40 = *(undefined8 *)(lVar7 + 0xd8);
    uVar28 = *(undefined8 *)(lVar7 + 0x218);
    func_0x000107c5d91c();
    func_0x000107c61180();
    uVar29 = *(undefined8 *)(lVar7 + 0xa0);
    func_0x000107c4d1f8();
    func_0x000107c61180();
    func_0x000107c49614(puVar39,param_2,ppuVar8,ppuVar9,ppuVar10,ppuVar11,uVar2,uVar30,uVar31,uVar36
                        ,uVar12,uVar35,uVar1,uVar3,uVar32,uVar13,uVar14,uVar33,ppuVar15,uVar37,uVar4
                        ,uVar16,ppuVar17,uVar38,uVar5,uVar18,uVar34,uVar19,uVar20,uVar24,uVar42,
                        uVar41,uVar25,uVar43,uVar26,uVar27,uVar40,uVar28,uVar29);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(ppuVar17);
    func_0x000107c61170(uStack_148);
    func_0x000107c61170(ppuVar15);
    func_0x000107c61170(uStack_120);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar36);
    func_0x000107c61170(ppuVar11);
    func_0x000107c61170(uStack_f8);
    func_0x000107c61170(ppuVar10);
    func_0x000107c61170(uStack_d0);
    func_0x000107c61170(ppuVar9);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(ppuVar8);
    func_0x000107c61170(uStack_80);
  }
  func_0x000107c61170(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar39);
  return;
}



/* Entry: 100807b14; end: 100807bef;  */

void FUN_100807b14(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100807bf0; end: 100807c1b; -[SCPublicCameraFeatureCatalogProviderImpl publicCameraFeatureCatalog] */

void FUN_100807bf0(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000107c61148(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100807c1c; end: 100807c93; -[SCFeatureReference initWithReferenceBlock:] */

undefined1 * FUN_100807c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701d00;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100807c94; end: 100807d6f;  */

void FUN_100807c94(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100807d70; end: 100807e4b;  */

void FUN_100807d70(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100807e4c; end: 100807f27;  */

void FUN_100807e4c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100807f28; end: 100808003;  */

void FUN_100807f28(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100808004; end: 1008080df;  */

void FUN_100808004(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008080e0; end: 1008080ef; -[_TtC31SCSecretFeatureCheckingServices31SCSecretFeatureCheckingServices secretFeatureCheckingFactoryService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008080e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113054650));
  return;
}



/* Entry: 1008080f0; end: 1008080ff; -[_TtC33MiniCameraActivationStateServices35SCMiniCameraActivationStateServices miniCameraActivationStateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008080f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035b60));
  return;
}



/* Entry: 100808100; end: 10080819f;  */

undefined8 FUN_100808100(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4008c(uVar1);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c3e6cc();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c426e0();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_1);
  return uVar4;
}



/* Entry: 1008081a0; end: 100808557;  */

void FUN_1008081a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar28 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b0220;
    func_0x000107c610f4();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4f5c0();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c3f58c();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c42e38();
    func_0x000107c61180();
    uVar26 = *(undefined8 *)(lVar1 + 0x180);
    uVar22 = *(undefined8 *)(lVar1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4f5c0();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c4d1a8();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c42e38();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(lVar1 + 0x40);
    func_0x000107c5da1c();
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar28 = PTR___NSConcreteStackBlock_11034bd00;
    uVar23 = *(undefined8 *)(lVar1 + 0x60);
    uVar24 = *(undefined8 *)(lVar1 + 0x18);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10080867c;
    puStack_88 = &UNK_11084e7d0;
    uVar27 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar27);
    ppuVar11 = &puStack_a0;
    uStack_80 = uVar27;
    FUN_10080867c();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(lVar1 + 8);
    func_0x000107c3f300();
    uVar13 = *(undefined8 *)(lVar1 + 0x90);
    func_0x000107c3d1d8();
    func_0x000107c61180();
    uVar14 = *(undefined8 *)(lVar1 + 0x98);
    func_0x000107c3f0f4();
    func_0x000107c61180();
    uVar27 = uVar14;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar15 = uVar27;
    func_0x000107c41930();
    func_0x000107c61180();
    uVar25 = *(undefined8 *)(lVar1 + 0xb0);
    uVar16 = *(undefined8 *)(lVar1 + 0x98);
    func_0x000107c3f0f4();
    func_0x000107c61180();
    uVar17 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar18 = *(undefined8 *)(lVar1 + 0x98);
    func_0x000107c3f0fc();
    func_0x000107c61180();
    uVar19 = *(undefined8 *)(lVar1 + 8);
    func_0x000107c5de90();
    func_0x000107c61180();
    uVar20 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c4c168();
    func_0x000107c61180();
    puStack_c8 = puVar28;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_100808760;
    puStack_b0 = &UNK_11084e7d0;
    uVar29 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar29);
    ppuVar21 = &puStack_c8;
    uStack_a8 = uVar29;
    FUN_100808760();
    func_0x000107c61180();
    uVar30 = *(undefined8 *)(lVar1 + 0x78);
    uVar31 = *(undefined8 *)(lVar1 + 0x198);
    uVar29 = *(undefined8 *)(lVar1 + 0x268);
    func_0x000107c3d0d8();
    func_0x000107c61180();
    func_0x000107c45cec(puVar2,param_2,uVar5,uVar26,uVar22,uVar8,uVar10,uVar23,uVar24,ppuVar11,
                        uVar12,uVar13,uVar15,uVar25,uVar16,uVar17,uVar18,uVar19,uVar20,ppuVar21,
                        uVar30,uVar31,uVar29,*(undefined8 *)(lVar1 + 0x290));
    puVar28 = puVar2;
    func_0x000107c4b6f4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(ppuVar21);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(ppuVar11);
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar28);
  return;
}



/* Entry: 100808558; end: 10080855f; -[SCMutablePublicCameraFeatureCatalog multiSnap] */

undefined8 FUN_100808558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 100808560; end: 100808567; -[SCUserPreferenceTimeProviderServices userPreferenceTimeProvider] */

undefined8 FUN_100808560(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100808568; end: 1008085a7;  */

void FUN_100808568(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3cd78();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1008085a8; end: 100808607; -[SCUserPreferenceTimeProviderEntryPoint _userPreferenceTimeProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008085a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c0210;
  func_0x000107c610f4(PTR_PTR_1126c0210);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11272c244;
    func_0x000107c61148(lVar2);
  }
  func_0x000107c493e4(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100808608; end: 10080867b; -[SCUserPreferenceTimeProviderImpl initWithUserStorageServices:] */

undefined1 * FUN_100808608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126eae60;
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



/* Entry: 10080867c; end: 100808757;  */

void FUN_10080867c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100808758; end: 10080875f; -[SCCameraHardwareResourceImpl deviceMotionManager] */

undefined8 FUN_100808758(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 100808760; end: 10080883b;  */

void FUN_100808760(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10080883c; end: 100808c7f; -[SCCameraBatchCaptureFeatureInitializer initWithCaptureComponent:cameraSnapModelServices:userSession:multiSnap:userPreferenceTimeProvider:coreCameraLogger:applicationLifecycleEvents:cameraUserActionLogger:cameraViewType:cameraActiveVideoPaths:deviceMotionManager:cameraUserBlizzardLogger:cameraHardwareResource:cameraConfiguration:cameraHardwareServicesAPI:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:coolRecording:footerItem:locationProvider:cameraModeActivationController:lensPlusSnapDocRecordProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10080883c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  puStack_70 = PTR_PTR_1126eff00;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740d98,param_3);
    lVar3 = (long)_DAT_112740d9c;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740da0,param_5);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740da4,param_6);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740da8,param_8);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740dac,param_9);
    lVar3 = (long)_DAT_112740db0;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740db4;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740db8) = param_11;
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740dbc,param_12);
    lVar3 = (long)_DAT_112740dc0;
    func_0x000107c61174(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740dc4,param_14);
    lVar3 = (long)_DAT_112740dc8;
    func_0x000107c61174(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_15;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740dcc;
    func_0x000107c61174(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740dd0;
    func_0x000107c61174(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740dd4,param_18);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740dd8,param_19);
    lVar3 = (long)_DAT_112740ddc;
    func_0x000107c61174(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_20;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740de0;
    func_0x000107c61174(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_21;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740de4;
    func_0x000107c61174(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740de8,param_23);
    lVar3 = (long)_DAT_112740dec;
    func_0x000107c61174(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_24;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100808c80; end: 100808cbb; -[SCFeatureInitializer load] */

void FUN_100808c80(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c426e0();
  if ((int)uVar1 != 0) {
    func_0x000107c40a40(param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100808cbc; end: 100808cc3; -[SCCameraBatchCaptureFeatureInitializer enabled] */

undefined8 FUN_100808cbc(void)

{
  return 1;
}



/* Entry: 100808cc4; end: 100808eb3; -[SCCameraBatchCaptureFeatureInitializer createInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100808cc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar1 = PTR_PTR_1126c8640;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112740d98;
  func_0x000107c61148();
  uVar12 = *(undefined8 *)(param_1 + _DAT_112740d9c);
  lVar3 = param_1 + _DAT_112740da0;
  func_0x000107c61148();
  lVar4 = param_1 + _DAT_112740da4;
  func_0x000107c61148();
  uVar13 = *(undefined8 *)(param_1 + _DAT_112740db0);
  lVar5 = param_1 + _DAT_112740da8;
  func_0x000107c61148();
  lVar6 = param_1 + _DAT_112740dac;
  func_0x000107c61148();
  uVar14 = *(undefined8 *)(param_1 + _DAT_112740db4);
  lVar7 = param_1 + _DAT_112740dbc;
  func_0x000107c61148();
  uVar15 = *(undefined8 *)(param_1 + _DAT_112740dc0);
  lVar8 = param_1 + _DAT_112740dc4;
  func_0x000107c61148();
  uVar16 = *(undefined8 *)(param_1 + _DAT_112740dc8);
  uVar20 = *(undefined8 *)(param_1 + _DAT_112740dcc);
  uVar17 = *(undefined8 *)(param_1 + _DAT_112740db8);
  lVar9 = param_1 + _DAT_112740dd4;
  func_0x000107c61148();
  lVar10 = param_1 + _DAT_112740dd8;
  func_0x000107c61148();
  uVar21 = *(undefined8 *)(param_1 + _DAT_112740ddc);
  uVar18 = *(undefined8 *)(param_1 + _DAT_112740de0);
  uVar19 = *(undefined8 *)(param_1 + _DAT_112740de4);
  lVar11 = param_1 + _DAT_112740de8;
  func_0x000107c61148();
  func_0x000107c45ce8(puVar1,param_2,lVar2,uVar12,lVar3,lVar4,uVar13,lVar5,lVar6,uVar14,lVar7,uVar15
                      ,lVar8,uVar16,uVar20,uVar17,lVar9,lVar10,uVar21,uVar18,uVar19,lVar11,
                      *(undefined8 *)(param_1 + _DAT_112740dec));
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100808eb4; end: 1008092c7; -[SCFeatureBatchCaptureImpl initWithCaptureComponent:cameraSnapModelServices:userSession:multiSnap:userPreferenceTimeProvider:coreCameraLogger:applicationLifecycleEvents:cameraUserActionLogger:cameraActiveVideoPaths:deviceMotionManager:cameraUserBlizzardLogger:cameraHardwareResource:cameraConfiguration:cameraViewType:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:coolRecording:footerItem:locationProvider:cameraModeActivationController:lensPlusSnapDocRecordProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100808eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(in_stack_00000050);
  func_0x000107c61174(in_stack_00000058);
  func_0x000107c61174(in_stack_00000060);
  func_0x000107c61174(in_stack_00000068);
  func_0x000107c61174(in_stack_00000070);
  puStack_70 = PTR_PTR_1126efdc0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127403d0,param_3);
    lVar4 = (long)_DAT_1127403d4;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127403d8,param_5);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127403dc,param_6);
    lVar4 = (long)_DAT_1127403e0;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_1127403e4;
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_1127403e8;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_1127403ec;
    func_0x000107c61174(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_1127403f0;
    func_0x000107c61174(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_1127403f4;
    func_0x000107c61174(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127403f8) = param_17;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127403fc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127403fc) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740400,param_14);
    lVar4 = (long)_DAT_112740404;
    func_0x000107c61174(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740408;
    func_0x000107c61174(in_stack_00000050);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = in_stack_00000050;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_11274040c;
    func_0x000107c61174(in_stack_00000058);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = in_stack_00000058;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112740410;
    func_0x000107c61174(in_stack_00000060);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = in_stack_00000060;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740414);
    *(undefined **)((long)puVar1 + (long)_DAT_112740414) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740418,in_stack_00000068);
    lVar4 = (long)_DAT_11274041c;
    func_0x000107c61174(in_stack_00000070);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = in_stack_00000070;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(in_stack_00000070);
  func_0x000107c61170(in_stack_00000068);
  func_0x000107c61170(in_stack_00000060);
  func_0x000107c61170(in_stack_00000058);
  func_0x000107c61170(in_stack_00000050);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008092c8; end: 10080940f; -[SCCameraBatchCaptureFeatureInitializer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008092f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100809344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010080939c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008093c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008093e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008093f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008093e4) */
/* WARNING: Removing unreachable block (ram,0x0001008093c8) */
/* WARNING: Removing unreachable block (ram,0x0001008093a0) */
/* WARNING: Removing unreachable block (ram,0x000100809348) */
/* WARNING: Removing unreachable block (ram,0x0001008092fc) */
/* WARNING: Removing unreachable block (ram,0x0001008093fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008092c8(long param_1)

{
  func_0x000107c6119c(param_1 + _DAT_112740dec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112740de8);
  return;
}



/* Entry: 100809410; end: 1008094db; -[SCCameraUIScopeViewContainerImpl legacyDelegateProviderImmediateValue] */

void FUN_100809410(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1008094dc;
  pcStack_30 = FUN_100809520;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1008094ec;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x000107c4b944(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008094dc; end: 1008094eb;  */

void FUN_1008094dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1008094ec; end: 10080951f;  */

void FUN_1008094ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  func_0x000107c61174(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100809520; end: 100809527;  */

void FUN_100809520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100809528; end: 10080960b; -[SCLegacyMainCameraFeatureDelegateProviderImpl isFeatureSupported:] */

uint FUN_100809528(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar3 = 0;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f8330;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_isFeatureSupported__1125fa510,param_3);
  puVar2 = PTR_DAT_1126a5810;
  func_0x000107c61174(param_3);
  lVar4 = param_3;
  FUN_10010fab4(param_3,puVar2);
  lVar1 = param_3;
  if ((int)lVar4 == 0) {
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  func_0x000107c61170(param_3);
  puVar2 = PTR_DAT_1126a5818;
  if (lVar1 == 0) {
    func_0x000107c61174(param_3);
    lVar4 = param_3;
    FUN_10010fab4(param_3,puVar2);
    func_0x000107c61170(param_3);
    uVar5 = 0;
    if (param_3 != 0) {
      uVar5 = (uint)lVar4;
    }
    uVar5 = uVar5 | uVar3;
  }
  else {
    uVar5 = 1;
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  return uVar5 & 1;
}



/* Entry: 10080960c; end: 100809b6b; -[SCLegacyFeatureDelegateProviderImpl isFeatureSupported:] */

undefined4 FUN_10080960c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  func_0x000107c61174(param_3);
  uVar2 = param_3;
  FUN_10010fab4(param_3,PTR_DAT_1126a5830);
  puVar1 = PTR_DAT_1126a58d8;
  if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
    func_0x000107c61174(param_3);
    uVar2 = param_3;
    FUN_10010fab4(param_3,puVar1);
    func_0x000107c61170(param_3);
    puVar1 = PTR_DAT_1126a5838;
    if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
      func_0x000107c61174(param_3);
      uVar2 = param_3;
      FUN_10010fab4(param_3,puVar1);
      func_0x000107c61170(param_3);
      puVar1 = PTR_DAT_1126a5840;
      if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
        func_0x000107c61174(param_3);
        uVar2 = param_3;
        FUN_10010fab4(param_3,puVar1);
        func_0x000107c61170(param_3);
        puVar1 = PTR_DAT_1126a5848;
        if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
          func_0x000107c61174(param_3);
          uVar2 = param_3;
          FUN_10010fab4(param_3,puVar1);
          func_0x000107c61170(param_3);
          puVar1 = PTR_DAT_1126a5850;
          if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
            func_0x000107c61174(param_3);
            uVar2 = param_3;
            FUN_10010fab4(param_3,puVar1);
            func_0x000107c61170(param_3);
            puVar1 = PTR_DAT_1126a5858;
            if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
              func_0x000107c61174(param_3);
              uVar2 = param_3;
              FUN_10010fab4(param_3,puVar1);
              func_0x000107c61170(param_3);
              puVar1 = PTR_DAT_1126a5860;
              if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                func_0x000107c61174(param_3);
                uVar2 = param_3;
                FUN_10010fab4(param_3,puVar1);
                func_0x000107c61170(param_3);
                puVar1 = PTR_DAT_1126a5810;
                if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                  func_0x000107c61174(param_3);
                  uVar2 = param_3;
                  FUN_10010fab4(param_3,puVar1);
                  func_0x000107c61170(param_3);
                  puVar1 = PTR_DAT_1126a5868;
                  if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                    func_0x000107c61174(param_3);
                    uVar2 = param_3;
                    FUN_10010fab4(param_3,puVar1);
                    func_0x000107c61170(param_3);
                    puVar1 = PTR_DAT_1126a5870;
                    if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                      func_0x000107c61174(param_3);
                      uVar2 = param_3;
                      FUN_10010fab4(param_3,puVar1);
                      func_0x000107c61170(param_3);
                      puVar1 = PTR_DAT_1126a5878;
                      if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                        func_0x000107c61174(param_3);
                        uVar2 = param_3;
                        FUN_10010fab4(param_3,puVar1);
                        func_0x000107c61170(param_3);
                        puVar1 = PTR_DAT_1126a5880;
                        if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                          func_0x000107c61174(param_3);
                          uVar2 = param_3;
                          FUN_10010fab4(param_3,puVar1);
                          func_0x000107c61170(param_3);
                          puVar1 = PTR_DAT_1126a5888;
                          if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                            func_0x000107c61174(param_3);
                            uVar2 = param_3;
                            FUN_10010fab4(param_3,puVar1);
                            func_0x000107c61170(param_3);
                            puVar1 = PTR_DAT_1126a5610;
                            if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                              func_0x000107c61174(param_3);
                              uVar2 = param_3;
                              FUN_10010fab4(param_3,puVar1);
                              func_0x000107c61170(param_3);
                              puVar1 = PTR_DAT_1126a5890;
                              if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                                func_0x000107c61174(param_3);
                                uVar2 = param_3;
                                FUN_10010fab4(param_3,puVar1);
                                func_0x000107c61170(param_3);
                                puVar1 = PTR_DAT_1126a58e0;
                                if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                                  func_0x000107c61174(param_3);
                                  uVar2 = param_3;
                                  FUN_10010fab4(param_3,puVar1);
                                  func_0x000107c61170(param_3);
                                  puVar1 = PTR_DAT_1126a5898;
                                  if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                                    func_0x000107c61174(param_3);
                                    uVar2 = param_3;
                                    FUN_10010fab4(param_3,puVar1);
                                    func_0x000107c61170(param_3);
                                    puVar1 = PTR_DAT_1126a58a0;
                                    if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                                      func_0x000107c61174(param_3);
                                      uVar2 = param_3;
                                      FUN_10010fab4(param_3,puVar1);
                                      func_0x000107c61170(param_3);
                                      puVar1 = PTR_DAT_1126a52b8;
                                      if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                                        func_0x000107c61174(param_3);
                                        uVar2 = param_3;
                                        FUN_10010fab4(param_3,puVar1);
                                        func_0x000107c61170(param_3);
                                        puVar1 = PTR_DAT_1126a58b0;
                                        if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                                          func_0x000107c61174(param_3);
                                          uVar2 = param_3;
                                          FUN_10010fab4(param_3,puVar1);
                                          func_0x000107c61170(param_3);
                                          puVar1 = PTR_DAT_1126a58a8;
                                          if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                                            func_0x000107c61174(param_3);
                                            uVar2 = param_3;
                                            FUN_10010fab4(param_3,puVar1);
                                            func_0x000107c61170(param_3);
                                            puVar1 = PTR_DAT_1126a58e8;
                                            if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                                              func_0x000107c61174(param_3);
                                              uVar2 = param_3;
                                              FUN_10010fab4(param_3,puVar1);
                                              func_0x000107c61170(param_3);
                                              puVar1 = PTR_DAT_1126a58b8;
                                              if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                                                func_0x000107c61174(param_3);
                                                uVar2 = param_3;
                                                FUN_10010fab4(param_3,puVar1);
                                                func_0x000107c61170(param_3);
                                                puVar1 = PTR_DAT_1126a58c0;
                                                if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                                                  func_0x000107c61174(param_3);
                                                  uVar2 = param_3;
                                                  FUN_10010fab4(param_3,puVar1);
                                                  func_0x000107c61170(param_3);
                                                  puVar1 = PTR_DAT_1126a58c8;
                                                  if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                                                    func_0x000107c61174(param_3);
                                                    uVar2 = param_3;
                                                    FUN_10010fab4(param_3,puVar1);
                                                    func_0x000107c61170(param_3);
                                                    puVar1 = PTR_DAT_1126a58f0;
                                                    if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                                                      func_0x000107c61174(param_3);
                                                      uVar2 = param_3;
                                                      FUN_10010fab4(param_3,puVar1);
                                                      func_0x000107c61170(param_3);
                                                      puVar1 = PTR_DAT_1126a58d0;
                                                      if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
                                                        func_0x000107c61174(param_3);
                                                        uVar2 = param_3;
                                                        FUN_10010fab4(param_3,puVar1);
                                                        func_0x000107c61170(param_3);
                                                        uVar3 = 0;
                                                        if (param_3 != 0) {
                                                          uVar3 = (undefined4)uVar2;
                                                        }
                                                        goto LAB_100809b20;
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
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 1;
LAB_100809b20:
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 100809b6c; end: 100809d5b; -[SCLegacyMainCameraFeatureDelegateProviderImpl configureLegacyCameraViewControllerDelegateForFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100809b6c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_90;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f8330;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_configureLegacyCameraViewControl_1125af620,param_3);
  puVar1 = PTR_DAT_1126a5810;
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  FUN_10010fab4(param_3,puVar1);
  func_0x000107c61170(param_3);
  puVar1 = PTR_DAT_1126a5818;
  if ((param_3 == 0) || ((int)lVar2 == 0)) {
    func_0x000107c61174(param_3);
    lVar2 = param_3;
    FUN_10010fab4(param_3,puVar1);
    func_0x000107c61170(param_3);
    if ((param_3 == 0) || ((int)lVar2 == 0)) goto LAB_100809d40;
    param_1 = param_1 + _DAT_112762300;
    func_0x000107c61148(param_1);
    lVar2 = param_1;
    func_0x000107c51874();
    func_0x000107c61180();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    puStack_80 = &SUB_106fe6ba0;
    puStack_78 = &UNK_110987ee0;
    func_0x000107c61174(param_3);
    lStack_70 = param_3;
    func_0x000106fe6ba0(&puStack_90);
    func_0x000107c61180();
    func_0x000107c530e4();
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
    lVar2 = lStack_70;
  }
  else {
    param_1 = param_1 + _DAT_112762300;
    func_0x000107c61148(param_1);
    lVar2 = param_1;
    func_0x000107c51874();
    func_0x000107c61180();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    puStack_58 = &SUB_106fe6b40;
    puStack_50 = &UNK_110987eb0;
    func_0x000107c61174(param_3);
    ppuVar3 = &puStack_68;
    lStack_48 = param_3;
    func_0x000106fe6b40(ppuVar3);
    func_0x000107c61180();
    func_0x000107c530e4();
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
    lVar2 = lStack_48;
  }
  func_0x000107c61170(lVar2);
LAB_100809d40:
  func_0x000107c61170(param_3);
  return;
}


