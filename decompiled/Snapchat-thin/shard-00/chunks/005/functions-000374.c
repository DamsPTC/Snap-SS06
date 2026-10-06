/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1007d0ab8; end: 1007d0b73; +[SCCameraHDModeExperiment hdModeButtonBelowFoldToolbarEnabledWithAppStartExperimentReader:] */

undefined8 FUN_1007d0ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112ef0178,auStack_48,0,0);
  if (cRam0000000112ef0178 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112ef0178 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010f0ef2a0);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 1007d0b74; end: 1007d0b9b; -[SCCameraLazyFeatureReference lazyFeature] */

void FUN_1007d0b74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1007d0b9c; end: 1007d0ba3; -[SCCameraVerticalToolbarConfigurationImpl forcesItemsDuringStartup] */

undefined1 FUN_1007d0b9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22);
}



/* Entry: 1007d0ba4; end: 1007d0c03; -[SCCameraFeatureCapabilitiesImpl registerVerticalToolbarItemProvider:isRequiredForStartup:] */

/* WARNING: Possible PIC construction at 0x0001007d0bf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d0bf4) */

void FUN_1007d0ba4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x20;
  if (param_4 == 0) {
    lVar1 = 0x18;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c3d798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007d0c04; end: 1007d0c1f;  */

void FUN_1007d0c04(void)

{
  func_0x000107c61160(PTR_PTR_1126ce6d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007d0c20; end: 1007d0cd7; -[SCCameraFeatureCapabilityCoordinator init] */

undefined1 * FUN_1007d0c20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3760;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b81f0;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c44c44();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x000107c5e160();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x21) = 1;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1007d0cd8; end: 1007d0d6b; -[SCCameraFeatureCapabilityCoordinator addObject:] */

/* WARNING: Possible PIC construction at 0x0001007d0d50: Changing call to branch */

void FUN_1007d0cd8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1007d0d6c;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    func_0x000107c61174(param_3);
    lStack_38 = param_3;
    func_0x000107c4b944(uVar1,param_2,&puStack_60);
    param_3 = lStack_38;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007d0d6c; end: 1007d0dc3;  */

void FUN_1007d0d6c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x20) & 1) == 0) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
    func_0x000107c40404(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    if ((uVar1 & 1) == 0) {
      func_0x000107c3d798(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010befaab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_addPointer__11259c450,
                 *(undefined8 *)(param_1 + 0x28));
      return;
    }
  }
  return;
}



/* Entry: 1007d0dc4; end: 1007d0deb; -[SCCameraLazyFeatureReference feature] */

void FUN_1007d0dc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1007d0dec; end: 1007d0eaf; -[SCCameraFeatureCapabilitiesImpl registerForGestures:responderChainPriority:] */

/* WARNING: Possible PIC construction at 0x0001007d0e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d0e88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d0e9c) */
/* WARNING: Removing unreachable block (ram,0x0001007d0e8c) */

void FUN_1007d0dec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x000107c4d9c0(lVar1,param_2,param_3);
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ce6e8;
    func_0x000107c610f4(PTR_PTR_1126ce6e8);
    func_0x000107c46844();
    func_0x000107c56bcc(*(undefined8 *)(param_1 + 0x30),param_2,puVar2,param_3);
    lVar1 = *(long *)(param_1 + 8);
    func_0x000107c5c734(lVar1);
    func_0x000107c61180();
    func_0x000107c3d798();
  }
  else {
    func_0x000107c57e60(lVar1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1007d0eb0; end: 1007d0f2b; -[SCCameraGestureResponderReference initWithFeature:responderChainPriority:] */

undefined1 *
FUN_1007d0eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f3770;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007d0f2c; end: 1007d0f47;  */

void FUN_1007d0f2c(void)

{
  func_0x000107c61160(PTR_PTR_1126ce6c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007d0f48; end: 1007d103f; -[SCCameraGestureInteractionCoordinatorImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1007d0f48(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f3768;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61144(auStack_48,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_50,auStack_48);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112751be8);
    *(undefined **)((long)puVar1 + (long)_DAT_112751be8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  return puVar1;
}



/* Entry: 1007d1040; end: 1007d18d7; -[SCCameraCoreFeatureProviderPluginWorkflow configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

/* WARNING: Possible PIC construction at 0x0001007d10a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d10ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d11b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d11fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d12c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d130c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d13d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d141c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d14a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d14c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d14ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d15a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d15dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d16cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d17bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d17f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d187c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d18b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d1880) */
/* WARNING: Removing unreachable block (ram,0x0001007d1838) */
/* WARNING: Removing unreachable block (ram,0x0001007d1888) */
/* WARNING: Removing unreachable block (ram,0x0001007d184c) */
/* WARNING: Removing unreachable block (ram,0x0001007d17fc) */
/* WARNING: Removing unreachable block (ram,0x0001007d17c0) */
/* WARNING: Removing unreachable block (ram,0x0001007d1784) */
/* WARNING: Removing unreachable block (ram,0x0001007d1748) */
/* WARNING: Removing unreachable block (ram,0x0001007d170c) */
/* WARNING: Removing unreachable block (ram,0x0001007d16d0) */
/* WARNING: Removing unreachable block (ram,0x0001007d1694) */
/* WARNING: Removing unreachable block (ram,0x0001007d1658) */
/* WARNING: Removing unreachable block (ram,0x0001007d161c) */
/* WARNING: Removing unreachable block (ram,0x0001007d15e0) */
/* WARNING: Removing unreachable block (ram,0x0001007d15a4) */
/* WARNING: Removing unreachable block (ram,0x0001007d1568) */
/* WARNING: Removing unreachable block (ram,0x0001007d152c) */
/* WARNING: Removing unreachable block (ram,0x0001007d14f0) */
/* WARNING: Removing unreachable block (ram,0x0001007d14c8) */
/* WARNING: Removing unreachable block (ram,0x0001007d14a4) */
/* WARNING: Removing unreachable block (ram,0x0001007d1464) */
/* WARNING: Removing unreachable block (ram,0x0001007d1420) */
/* WARNING: Removing unreachable block (ram,0x0001007d13dc) */
/* WARNING: Removing unreachable block (ram,0x0001007d1398) */
/* WARNING: Removing unreachable block (ram,0x0001007d1354) */
/* WARNING: Removing unreachable block (ram,0x0001007d1310) */
/* WARNING: Removing unreachable block (ram,0x0001007d12cc) */
/* WARNING: Removing unreachable block (ram,0x0001007d1288) */
/* WARNING: Removing unreachable block (ram,0x0001007d1244) */
/* WARNING: Removing unreachable block (ram,0x0001007d1200) */
/* WARNING: Removing unreachable block (ram,0x0001007d11bc) */
/* WARNING: Removing unreachable block (ram,0x0001007d1178) */
/* WARNING: Removing unreachable block (ram,0x0001007d1134) */
/* WARNING: Removing unreachable block (ram,0x0001007d10f0) */
/* WARNING: Removing unreachable block (ram,0x0001007d10ac) */
/* WARNING: Removing unreachable block (ram,0x0001007d18b8) */

void FUN_1007d1040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c446a8(param_4);
  func_0x000107c61180();
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c4fc18(param_3,param_2,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1007d18d8; end: 1007d18df; -[SCMutablePublicCameraFeatureCatalog handsFreeRecording] */

undefined8 FUN_1007d18d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1007d18e0; end: 1007d18e7; -[SCMutablePublicCameraFeatureCatalog tapToFocusAndExposure] */

undefined8 FUN_1007d18e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e0);
}



/* Entry: 1007d18e8; end: 1007d18ef; -[SCMutablePublicCameraFeatureCatalog toggleCameraButton] */

undefined8 FUN_1007d18e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x208);
}



/* Entry: 1007d18f0; end: 1007d18f7; -[SCMutablePublicCameraFeatureCatalog nightMode] */

undefined8 FUN_1007d18f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 1007d18f8; end: 1007d18ff; -[SCMutablePublicCameraFeatureCatalog music] */

undefined8 FUN_1007d18f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 1007d1900; end: 1007d1907; -[SCMutablePublicCameraFeatureCatalog cameraToolbar] */

undefined8 FUN_1007d1900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1007d1908; end: 1007d190f; -[SCMutablePublicCameraFeatureCatalog speedMode] */

undefined8 FUN_1007d1908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



/* Entry: 1007d1910; end: 1007d1917; -[SCMutablePublicCameraFeatureCatalog directorMode] */

undefined8 FUN_1007d1910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x248);
}



/* Entry: 1007d1918; end: 1007d191f; -[SCCameraGestureResponderReference .cxx_destruct] */

void FUN_1007d1918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1007d1920; end: 1007d1927; -[SCMutablePublicCameraFeatureCatalog contextShortcut] */

undefined8 FUN_1007d1920(long param_1)

{
  return *(undefined8 *)(param_1 + 600);
}



/* Entry: 1007d1928; end: 1007d192f; -[SCMutablePublicCameraFeatureCatalog multiCamMode] */

undefined8 FUN_1007d1928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x250);
}



/* Entry: 1007d1930; end: 1007d1937; -[SCMutablePublicCameraFeatureCatalog remixCamMode] */

undefined8 FUN_1007d1930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x298);
}



/* Entry: 1007d1938; end: 1007d193f; -[SCMutablePublicCameraFeatureCatalog ringFlash] */

undefined8 FUN_1007d1938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x238);
}



/* Entry: 1007d1940; end: 1007d1947; -[SCMutablePublicCameraFeatureCatalog selfieSettings] */

undefined8 FUN_1007d1940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a8);
}



/* Entry: 1007d1948; end: 1007d194f; -[SCMutablePublicCameraFeatureCatalog imageSuperResolution] */

undefined8 FUN_1007d1948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b8);
}



/* Entry: 1007d1950; end: 1007d1957; -[SCMutablePublicCameraFeatureCatalog fingerDownCapture] */

undefined8 FUN_1007d1950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2e0);
}



/* Entry: 1007d1958; end: 1007d19a7; -[SCCameraFeatureCapabilitiesImpl registerForAnimatableTransitioning:] */

/* WARNING: Possible PIC construction at 0x0001007d1994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d1998) */

void FUN_1007d1958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3d798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007d19a8; end: 1007d19c3;  */

void FUN_1007d19a8(void)

{
  func_0x000107c61160(PTR_PTR_1126ce6d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007d19c4; end: 1007d19cb; -[SCMutablePublicCameraFeatureCatalog recipientName] */

undefined8 FUN_1007d19c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 1007d19cc; end: 1007d19d3; -[SCCameraVerticalToolbarConfigurationImpl forcesItemsAfterStartup] */

undefined1 FUN_1007d19cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 1007d19d4; end: 1007d19ef;  */

void FUN_1007d19d4(void)

{
  func_0x000107c61160(PTR_PTR_1126ce6d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007d19f0; end: 1007d1a27; -[SCCameraCoreFeatureProviderPluginWorkflow _shouldRegisterGreenScreen] */

ulong FUN_1007d19f0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x000107c3c794();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb5350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldRegisterGreenScreenForSna_11258ae78);
  return param_1;
}



/* Entry: 1007d1a28; end: 1007d1a7f; -[SCCameraCoreFeatureProviderPluginWorkflow _shouldRegisterGreenScreenForModularSpotlightCreate] */

undefined * FUN_1007d1a28(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c519ac();
  if (lVar1 == 0xd) {
    puVar2 = PTR_PTR_1126b9b20;
    func_0x000107c5d86c();
    if ((int)puVar2 != 0) {
      puVar2 = PTR_PTR_1126b9b20;
                    /* WARNING: Could not recover jumptable at 0x00010bfce210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR_PTR_1126b9b20,PTR_s_greenScreenInModularSpotlightCre_1125d1228,
                 *(undefined8 *)(param_1 + 0xf0));
      return puVar2;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1007d1a80; end: 1007d1ac7; -[SCCameraCoreFeatureProviderPluginWorkflow _shouldRegisterGreenScreenForSnapEditorQuickCapture] */

undefined * FUN_1007d1a80(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c3f300();
  if (lVar1 == 0xd) {
    puVar2 = PTR_PTR_1126b9b20;
                    /* WARNING: Could not recover jumptable at 0x00010c2409f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126b9b20,PTR_s_snapEditorGreenScreenEnabledWith_11266dca0,
               *(undefined8 *)(param_1 + 0xf0));
    return puVar2;
  }
  return (undefined *)0x0;
}



/* Entry: 1007d1ac8; end: 1007d1b4b; -[SCCameraFeatureCapabilitiesImpl registerVerticalToolbarUIConfigurator:] */

/* WARNING: Possible PIC construction at 0x0001007d1b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d1b08) */

void FUN_1007d1ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3d798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007d1b4c; end: 1007d1c13; -[SCCameraVerticalToolbarUIConfigurationCoordinatorImpl initWithStartupItemProviderCoordinator:afterStartupItemProviderCoordinator:areLoadingImprovementsEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1007d1b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126f3798;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112751c40;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112751c44;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112751c48) = param_5;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007d1c14; end: 1007d1c8b; -[SCCameraCoreLensFeatureProviderPlugin configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

/* WARNING: Possible PIC construction at 0x0001007d1c6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d1c70) */

void FUN_1007d1c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c4b400(param_4);
  func_0x000107c61180();
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c4fc18(param_3,param_2,param_4,5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007d1c8c; end: 1007d1c93; -[SCMutablePublicCameraFeatureCatalog lensSideButton] */

undefined8 FUN_1007d1c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 1007d1c94; end: 1007d1f93; -[SCCameraMainCameraFeatureProviderPluginWorkflow configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

/* WARNING: Possible PIC construction at 0x0001007d1d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d1f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d1f60) */
/* WARNING: Removing unreachable block (ram,0x0001007d1f10) */
/* WARNING: Removing unreachable block (ram,0x0001007d1f68) */
/* WARNING: Removing unreachable block (ram,0x0001007d1f1c) */
/* WARNING: Removing unreachable block (ram,0x0001007d1ec0) */
/* WARNING: Removing unreachable block (ram,0x0001007d1ef0) */
/* WARNING: Removing unreachable block (ram,0x0001007d1efc) */
/* WARNING: Removing unreachable block (ram,0x0001007d1e94) */
/* WARNING: Removing unreachable block (ram,0x0001007d1e50) */
/* WARNING: Removing unreachable block (ram,0x0001007d1e14) */
/* WARNING: Removing unreachable block (ram,0x0001007d1da8) */
/* WARNING: Removing unreachable block (ram,0x0001007d1de8) */
/* WARNING: Removing unreachable block (ram,0x0001007d1dbc) */
/* WARNING: Removing unreachable block (ram,0x0001007d1d7c) */
/* WARNING: Removing unreachable block (ram,0x0001007d1d48) */
/* WARNING: Removing unreachable block (ram,0x0001007d1d04) */
/* WARNING: Removing unreachable block (ram,0x0001007d1f70) */

void FUN_1007d1c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c4cc80(param_4);
  func_0x000107c61180();
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c4fc18(param_3,param_2,param_4,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1007d1f94; end: 1007d1f9b; -[SCMutablePublicCameraFeatureCatalog memoriesSideButton] */

undefined8 FUN_1007d1f94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 1007d1f9c; end: 1007d1fa3; -[SCMutablePublicCameraFeatureCatalog batchCapture] */

undefined8 FUN_1007d1f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1007d1fa4; end: 1007d209b; +[SCCameraContinuousCaptureExperiment shouldOfferDirectorModeToolbarButtonWithAppStartExperimentReader:] */

uint FUN_1007d1fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  func_0x0001007d1fe0(param_3);
  func_0x000107c615e8(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 1007d209c; end: 1007d2157; +[SCCameraHDModeExperiment hdModeG2SEnabledWithAppStartExperimentReader:] */

undefined8 FUN_1007d209c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112ef00e8,auStack_48,0,0);
  if (cRam0000000112ef00e8 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112ef00e8 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f0ef250);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 1007d2158; end: 1007d215f; -[SCMutablePublicCameraFeatureCatalog continuousCapture] */

undefined8 FUN_1007d2158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2d8);
}



/* Entry: 1007d2160; end: 1007d2163; -[_TtC16LensFullScreenUX29LensFullScreenUXFeaturePlugin configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_1007d2160(void)

{
  return;
}



/* Entry: 1007d2164; end: 1007d21bb; -[SCMainCameraPresentationNavigationFeaturePlugin configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

/* WARNING: Possible PIC construction at 0x0001007d21a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d21ac) */

void FUN_1007d2164(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61174(param_3);
  func_0x000107c42e38(uVar1);
  func_0x000107c61180();
  func_0x000107c4fc18(param_3,param_2,uVar1,0x1d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007d21bc; end: 1007d21bf; -[_TtC16ARBarIntegration29ARBarMiniCameraFeaturesPlugin configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_1007d21bc(void)

{
  return;
}



/* Entry: 1007d21c0; end: 1007d2237; -[SCMainCameraScanFeatureProvider configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

/* WARNING: Possible PIC construction at 0x0001007d2218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d221c) */

void FUN_1007d21c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c5186c(param_4);
  func_0x000107c61180();
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c4fc18(param_3,param_2,param_4,0xb);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007d2238; end: 1007d223f; -[SCMutablePublicCameraFeatureCatalog scan] */

undefined8 FUN_1007d2238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 1007d2240; end: 1007d2243; -[_TtC25GamesExplorerCameraButton38GamesExplorerCameraButtonFeaturePlugin configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_1007d2240(void)

{
  return;
}



/* Entry: 1007d2244; end: 1007d22bb; -[SCSnapKitCameraFeatureProviderPlugin configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

/* WARNING: Possible PIC construction at 0x0001007d229c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d22a0) */

void FUN_1007d2244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c5b308(param_4);
  func_0x000107c61180();
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c4fc18(param_3,param_2,param_4,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007d22bc; end: 1007d22c3; -[SCMutablePublicCameraFeatureCatalog snapKit] */

undefined8 FUN_1007d22bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 1007d22c4; end: 1007d23f3; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

/* WARNING: Possible PIC construction at 0x0001007d232c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d2350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d237c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d23c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d23d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d23cc) */
/* WARNING: Removing unreachable block (ram,0x0001007d2380) */
/* WARNING: Removing unreachable block (ram,0x0001007d2354) */
/* WARNING: Removing unreachable block (ram,0x0001007d2330) */
/* WARNING: Removing unreachable block (ram,0x0001007d23dc) */

void FUN_1007d22c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4b0ac(param_4);
  func_0x000107c61180();
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c4fc18(param_3,param_2,param_4,10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1007d23f4; end: 1007d23fb; -[SCMutablePublicCameraFeatureCatalog lensExplorerButton] */

undefined8 FUN_1007d23f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1007d23fc; end: 1007d2403; -[SCCameraGestureResponderReference setResponderChainPriority:] */

void FUN_1007d23fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1007d2404; end: 1007d2417; -[SCARBarAdapterServices arBarAdapter] */

undefined8 FUN_1007d2404(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007d2418; end: 1007d25af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d2418(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  FUN_1000d224c(&uStack_80);
  if ((char)uStack_80 == '\x01') {
    plVar4 = (long *)0x0;
    func_0x0001007d26ac();
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    FUN_1000d224c(&uStack_81);
    lVar5 = 0;
    func_0x00010381a078();
    lVar6 = lVar5;
    func_0x000107c610f8();
    func_0x000107c61614(lVar6 + _DAT_112f9f290,0);
    puVar1 = (undefined8 *)(lVar6 + _DAT_112f9f298);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar3 = _DAT_112f9f2b0;
    uVar7 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    FUN_1000c6580();
    *(undefined8 *)(lVar6 + lVar3) = uVar7;
    *(undefined8 *)(lVar6 + _DAT_112f9f2d8) = param_3;
    FUN_1007b7bf0(&uStack_80,lVar6 + _DAT_112f9f2b8);
    *(undefined8 *)(lVar6 + _DAT_112f9f2a8) = param_4;
    *(undefined1 *)(lVar6 + _DAT_112f9f2a0) = uStack_81;
    puVar1 = (undefined8 *)(lVar6 + _DAT_112f9f2c8);
    *puVar1 = &UNK_103819910;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar6 + _DAT_112f9f2d0);
    *puVar1 = &UNK_103819918;
    puVar1[1] = 0;
    puVar2 = PTR_s_init_1125d9248;
    lStack_98 = lVar6;
    lStack_90 = lVar5;
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_4);
    plVar4 = &lStack_98;
    func_0x000107c61154(plVar4,puVar2);
    func_0x0001007b7c40(&uStack_80);
  }
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1007d25b0; end: 1007d25b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d25b0(undefined1 *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_113081210);
    func_0x000107c615f0(lVar2);
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c3f238();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5ae94();
      uVar3 = (undefined1)lVar1;
      func_0x000107c615e8(lVar2);
      goto LAB_1007d2670;
    }
  }
  uVar3 = 0;
LAB_1007d2670:
  *param_1 = uVar3;
  return;
}



/* Entry: 1007d25b8; end: 1007d2687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d25b8(undefined1 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_113081210);
    func_0x000107c615f0(lVar2);
    func_0x000107c61170(param_2);
    lVar1 = lVar2;
    func_0x000107c3f238();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5ae94();
      uVar3 = (undefined1)lVar1;
      func_0x000107c615e8(lVar2);
      goto LAB_1007d2670;
    }
  }
  uVar3 = 0;
LAB_1007d2670:
  *param_1 = uVar3;
  return;
}



/* Entry: 1007d2688; end: 1007d26cb;  */

void FUN_1007d2688(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007d26cc; end: 1007d271f; -[_TtC16ARBarIntegration16ARBarNullAdapter init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d26cc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f9fa10,0);
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007d2720; end: 1007d275b;  */

void FUN_1007d2720(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007d275c; end: 1007d276b;  */

void FUN_1007d275c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007d276c; end: 1007d276f; -[_TtC32ExclusiveLensCaptureStyleFeature41ExclusiveLensCameraRingStyleFeaturePlugin configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_1007d276c(void)

{
  return;
}



/* Entry: 1007d2770; end: 1007d280b; -[SCSnapPlusLensOverlayFeatureProviderPlugin configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

/* WARNING: Possible PIC construction at 0x0001007d27ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007d27ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007d27b0) */
/* WARNING: Removing unreachable block (ram,0x0001007d27bc) */
/* WARNING: Removing unreachable block (ram,0x0001007d27f0) */
/* WARNING: Removing unreachable block (ram,0x0001007d27f8) */

void FUN_1007d2770(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61148(param_1 + 0x50);
  func_0x000107c42e38();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1007d280c; end: 1007d2997; -[SCCameraFeatureCapabilitiesImpl endFeatureRegistration] */

void FUN_1007d280c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [128];
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lVar1 = param_1;
  func_0x000107c3b1a8();
  func_0x000107c61180();
  lVar7 = lVar1;
  func_0x000107c4080c();
  if (lVar7 != 0) {
    lVar8 = *plStack_180;
    do {
      lVar9 = 0;
      do {
        if (*plStack_180 != lVar8) {
          func_0x000107c61128(lVar1);
        }
        func_0x000107c505e4(*(undefined8 *)(lStack_188 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar1;
      func_0x000107c4080c(lVar1,param_2,&uStack_190,auStack_c8,0x10);
    } while (lVar7 != 0);
  }
  func_0x000107c61170(lVar1);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  func_0x000107c3b1a8();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c4080c();
  if (lVar1 != 0) {
    lVar7 = *plStack_1c0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1c0 != lVar7) {
          func_0x000107c61128(param_1);
        }
        func_0x000107c3ff00(*(undefined8 *)(lStack_1c8 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_1;
      func_0x000107c4080c(param_1,param_2,&uStack_1d0,auStack_148,0x10);
    } while (lVar1 != 0);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  pcStack_1d8 = FUN_1007d2998;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_240 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_238 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_230 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_228 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_220 = uVar5;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_240,5);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  func_0x000107c60e78();
  pcStack_248 = FUN_1007d2abc;
  puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_270 = 0xc2000000;
  pcStack_268 = FUN_1007d2b14;
  puStack_260 = &UNK_110842e18;
  lStack_258 = lVar1;
  ppuStack_250 = &puStack_1e0;
  func_0x000107c4b944(*(undefined8 *)(lVar1 + 0x18),param_2,&puStack_278);
  return;
}



/* Entry: 1007d2998; end: 1007d2abb; -[SCCameraFeatureCapabilitiesImpl _coordinators] */

void FUN_1007d2998(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_70 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar5;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_70,5);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  func_0x000107c60e78();
  pcStack_78 = FUN_1007d2abc;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1007d2b14;
  puStack_90 = &UNK_110842e18;
  lStack_88 = lVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107c4b944(*(undefined8 *)(lVar1 + 0x18),param_2,&puStack_a8);
  return;
}



/* Entry: 1007d2abc; end: 1007d2b13; -[SCCameraFeatureCapabilityCoordinator resolveObjects] */

void FUN_1007d2abc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1007d2b14;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4b944(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 1007d2b14; end: 1007d2b2f;  */

void FUN_1007d2b14(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20) = 1;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007d2b30; end: 1007d2b33; -[SCCameraFeatureCapabilityCoordinator completed] */

void FUN_1007d2b30(void)

{
  return;
}



/* Entry: 1007d2b34; end: 1007d2deb; -[SCCameraVerticalToolbarUIConfigurationCoordinatorImpl completed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d2b34(long param_1)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  code *pcStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  long lStack_298;
  long lStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  char cStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_198;
  undefined *puStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_190 = PTR_PTR_1126f3798;
  lStack_198 = param_1;
  func_0x000107c61154(&lStack_198,PTR_s_completed_1125ae928);
  lVar3 = *(long *)(param_1 + _DAT_112751c40);
  func_0x000107c61174(lVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112751c44);
  func_0x000107c61174(uVar4);
  cVar2 = *(char *)(param_1 + _DAT_112751c48);
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_298 = param_1;
  func_0x000107c4d9f8();
  func_0x000107c61180();
  lStack_290 = param_1;
  func_0x000107c4080c();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_1 != 0) {
    lVar8 = *plStack_1d0;
    do {
      lVar5 = 0;
      do {
        if (*plStack_1d0 != lVar8) {
          func_0x000107c61128(lStack_290);
        }
        uVar6 = *(undefined8 *)(lStack_1d8 + lVar5 * 8);
        puStack_218 = puVar1;
        uStack_210 = 0xc2000000;
        pcStack_208 = FUN_10088d78c;
        puStack_200 = &UNK_110944278;
        func_0x000107c61174(lVar3);
        lStack_1f8 = lVar3;
        cStack_1e8 = cVar2;
        func_0x000107c61174(uVar4);
        uStack_1f0 = uVar4;
        func_0x000107c4db94(uVar6);
        func_0x000107c61170(uStack_1f0);
        func_0x000107c61170(lStack_1f8);
        lVar5 = lVar5 + 1;
      } while (param_1 != lVar5);
      param_1 = lStack_290;
      func_0x000107c4080c();
    } while (param_1 != 0);
  }
  func_0x000107c61170(lStack_290);
  if (cVar2 != '\0') {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    lVar8 = lStack_298;
    func_0x000107c4d9f8();
    func_0x000107c61180();
    lVar5 = lVar8;
    func_0x000107c4080c();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar5 != 0) {
      lVar7 = *plStack_250;
      do {
        lVar9 = 0;
        do {
          if (*plStack_250 != lVar7) {
            func_0x000107c61128(lVar8);
          }
          uVar6 = *(undefined8 *)(lStack_258 + lVar9 * 8);
          puStack_288 = puVar1;
          uStack_280 = 0xc2000000;
          pcStack_278 = FUN_1008b495c;
          puStack_270 = &UNK_1109442a8;
          func_0x000107c61174(uVar4);
          uStack_268 = uVar4;
          func_0x000107c4db94(uVar6);
          func_0x000107c61170(uStack_268);
          lVar9 = lVar9 + 1;
        } while (lVar5 != lVar9);
        lVar5 = lVar8;
        func_0x000107c4080c();
      } while (lVar5 != 0);
    }
    func_0x000107c61170(lVar8);
  }
  func_0x000107c61170(uVar4);
  lVar8 = lVar3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  func_0x000107c60e78();
  pcStack_2a8 = FUN_1007d2dec;
  puStack_2e8 = &uStack_2f0;
  uStack_2f0 = 0;
  uStack_2e0 = 0x3032000000;
  pcStack_2d8 = FUN_1007d2ec8;
  pcStack_2d0 = FUN_1007d2f38;
  uStack_2c8 = 0;
  uStack_2c0 = uVar4;
  lStack_2b8 = lVar3;
  puStack_2b0 = &stack0xfffffffffffffff0;
  func_0x000107c4b944(*(undefined8 *)(lVar8 + 0x18));
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if ((undefined *)puStack_2e8[5] != (undefined *)0x0) {
    puVar1 = (undefined *)puStack_2e8[5];
  }
  func_0x000107c61174(puVar1);
  func_0x000107c60bcc(&uStack_2f0,8);
  func_0x000107c61170(uStack_2c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007d2dec; end: 1007d2ec7; -[SCCameraFeatureCapabilityCoordinator objects] */

void FUN_1007d2dec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  pcStack_38 = FUN_1007d2ec8;
  pcStack_30 = FUN_1007d2f38;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1007d2ed8;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x000107c4b944(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_80);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if ((undefined *)puStack_48[5] != (undefined *)0x0) {
    puVar1 = (undefined *)puStack_48[5];
  }
  func_0x000107c61174(puVar1);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007d2ec8; end: 1007d2ed7;  */

void FUN_1007d2ec8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1007d2ed8; end: 1007d2f37;  */

void FUN_1007d2ed8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(char *)(lVar2 + 0x20) == '\x01') && (*(char *)(lVar2 + 0x21) == '\x01')) {
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c3db80();
    func_0x000107c61180();
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1007d2f38; end: 1007d2f3f;  */

void FUN_1007d2f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1007d2f40; end: 1007d2ff7; -[SCCameraFeatureScopeWorkflow _configureFeatureLayout] */

void FUN_1007d2f40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar2);
  param_1 = param_1 + 0x18;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3f290();
  func_0x000107c61180();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1007d2ff8;
  puStack_40 = &UNK_110915fa8;
  uStack_38 = uVar2;
  func_0x000107c61174(uVar2);
  func_0x000107c4db94(lVar1,param_2,&puStack_58);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1007d2ff8; end: 1007d30a7;  */

void FUN_1007d2ff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c403c8(param_2);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x000107c61174(uVar2);
  FUN_100078e94();
  func_0x000107c61180();
  func_0x000107c5dc68(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1007d30a8; end: 1007d30af; -[SCCameraFeatureCapabilitiesImpl gestureCoordinator] */

undefined8 FUN_1007d30a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007d30b0; end: 1007d30b7; -[SCCameraFeatureCapabilitiesImpl featureAnimatableTransitionCoordinator] */

undefined8 FUN_1007d30b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1007d30b8; end: 1007d31f7; -[SCCameraFeatureScopeInfo initWithPublicCameraFeatureCatalog:gestureInteractionCoordinator:featureAnimatableTransitionCoordinator:metricCoordinator:debugInfoProvider:] */

void FUN_1007d30b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x0001007d313c(param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1007d31f8; end: 1007d32ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d31f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130353e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130353e8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130353f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130353f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113035400) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113035408) = param_5;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007d32ac; end: 1007d41ab;  */

void FUN_1007d32ac(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  char *pcVar8;
  code *pcVar9;
  code *pcVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined *puVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 auStack_70 [2];
  
  uVar21 = *param_2;
  FUN_1000285a8(0x112ee93d0,&UNK_10db16868);
  puVar1 = auStack_70;
  auStack_70[0] = uVar21;
  FUN_1000838ec();
  FUN_1000285a8(0x112ee93d8,&UNK_10db16870);
  puVar2 = &UNK_1105946c8;
  func_0x000107c613fc(&UNK_1105946c8,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  puVar3 = &UNK_102abbc40;
  FUN_1000823a8(&UNK_102abbc40,puVar2);
  FUN_100082720("LensDeeplinkSendToControllingServiceProviderWrapperServiceProvider",0x42,2);
  FUN_1000285a8(0x112ee93e0,&UNK_10db16878);
  func_0x000107c6157c(puVar3);
  puVar2 = &UNK_102abbc48;
  FUN_1000823a8(&UNK_102abbc48,puVar3);
  FUN_100082720("LensDeeplinkSendToControllingServicesServiceProvider",0x34,2);
  FUN_1000285a8(0x112ee93e8,&UNK_10db16880);
  puVar11 = &UNK_1105946f0;
  func_0x000107c613fc(&UNK_1105946f0,0x28,7);
  *(undefined8 **)(puVar11 + 0x10) = puVar1;
  *(undefined8 *)(puVar11 + 0x18) = param_4;
  *(undefined8 *)(puVar11 + 0x20) = param_5;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  pcVar4 = FUN_1007d67a8;
  FUN_1000823a8(FUN_1007d67a8,puVar11);
  FUN_100082720("LensFullScreenUXServiceCameraUIEntryPointWrapperServiceProvider",0x3f,2);
  FUN_1000285a8(0x112ee93f0,&UNK_10db16c00);
  puVar11 = &UNK_110594718;
  func_0x000107c613fc(&UNK_110594718,0x40,7);
  *(undefined8 **)(puVar11 + 0x10) = puVar1;
  *(undefined8 *)(puVar11 + 0x18) = param_4;
  *(undefined8 *)(puVar11 + 0x20) = param_6;
  *(undefined8 *)(puVar11 + 0x28) = param_7;
  *(undefined8 *)(puVar11 + 0x30) = param_8;
  *(undefined8 *)(puVar11 + 0x38) = param_9;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  pcVar5 = FUN_1007d71b8;
  FUN_1000823a8(FUN_1007d71b8,puVar11);
  FUN_100082720("SCCameraSettingsSnapshotLoggerEntryPointWrapperServiceProvider",0x3e,2);
  FUN_1000285a8(0x112ee93f8,&UNK_10db16890);
  puVar11 = &UNK_110594740;
  func_0x000107c613fc(&UNK_110594740,0x70,7);
  *(undefined8 **)(puVar11 + 0x10) = puVar1;
  *(undefined8 *)(puVar11 + 0x18) = param_4;
  *(undefined8 *)(puVar11 + 0x20) = param_6;
  *(undefined8 *)(puVar11 + 0x28) = param_10;
  *(undefined8 *)(puVar11 + 0x30) = param_8;
  *(undefined8 *)(puVar11 + 0x38) = param_11;
  *(undefined8 *)(puVar11 + 0x40) = param_12;
  *(undefined8 *)(puVar11 + 0x48) = param_13;
  *(undefined8 *)(puVar11 + 0x50) = param_14;
  *(undefined8 *)(puVar11 + 0x58) = param_15;
  *(undefined8 *)(puVar11 + 0x60) = param_16;
  *(undefined8 *)(puVar11 + 0x68) = param_17;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  pcVar6 = FUN_1007e5504;
  FUN_1000823a8(FUN_1007e5504,puVar11);
  FUN_100082720("SCLegacyCameraResourceServicesEntryPointWrapperServiceProvider",0x3e,2);
  FUN_1000285a8(0x112ee9400,&UNK_10db16f60);
  puVar11 = &UNK_110594768;
  func_0x000107c613fc(&UNK_110594768,0x88,7);
  *(undefined8 **)(puVar11 + 0x10) = puVar1;
  *(undefined8 *)(puVar11 + 0x18) = param_18;
  *(undefined8 *)(puVar11 + 0x20) = param_4;
  *(undefined8 *)(puVar11 + 0x28) = param_19;
  *(undefined8 *)(puVar11 + 0x30) = param_6;
  *(undefined8 *)(puVar11 + 0x38) = param_20;
  *(undefined8 *)(puVar11 + 0x40) = param_21;
  *(undefined8 *)(puVar11 + 0x48) = param_7;
  *(undefined8 *)(puVar11 + 0x50) = param_22;
  *(undefined8 *)(puVar11 + 0x58) = param_23;
  *(undefined8 *)(puVar11 + 0x60) = param_24;
  *(undefined8 *)(puVar11 + 0x68) = param_25;
  *(undefined8 *)(puVar11 + 0x70) = param_26;
  *(undefined8 *)(puVar11 + 0x78) = param_27;
  *(undefined8 *)(puVar11 + 0x80) = param_28;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  pcVar7 = FUN_1007d84b8;
  FUN_1000823a8(FUN_1007d84b8,puVar11);
  pcVar8 = "SCLensProcessingCameraEventsEntryPointWrapperServiceProvider";
  FUN_100082720("SCLensProcessingCameraEventsEntryPointWrapperServiceProvider",0x3c,2);
  FUN_1007d44e0();
  FUN_100082720("SCQuickReplyDestinationRotationFeatureScopeServiceProvider",0x3a,2);
  FUN_1000285a8(0x112ee9408,&UNK_10db168a0);
  puVar11 = &UNK_110594790;
  func_0x000107c613fc(&UNK_110594790,0x60,7);
  *(undefined8 **)(puVar11 + 0x10) = puVar1;
  *(undefined8 *)(puVar11 + 0x18) = param_18;
  *(undefined8 *)(puVar11 + 0x20) = param_4;
  *(undefined8 *)(puVar11 + 0x28) = param_7;
  *(undefined8 *)(puVar11 + 0x30) = param_22;
  *(undefined8 *)(puVar11 + 0x38) = param_23;
  *(undefined8 *)(puVar11 + 0x40) = param_24;
  *(undefined8 *)(puVar11 + 0x48) = param_25;
  *(undefined8 *)(puVar11 + 0x50) = param_29;
  *(undefined8 *)(puVar11 + 0x58) = param_30;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  pcVar9 = FUN_1007d9c60;
  FUN_1000823a8(FUN_1007d9c60,puVar11);
  FUN_100082720("SCSponsoredLensOnCameraWarmupEntryPointWrapperServiceProvider",0x3d,2);
  FUN_1007d4540(param_31,param_32,param_33,param_30,puVar1,param_34,param_35,param_36,param_37,
                param_24,param_38,param_39,param_40,param_15,param_41,param_42,param_43,param_44,
                param_45,param_46,param_47,param_48,param_49,param_50,param_51,param_52,param_18,
                param_53,param_23);
  FUN_100082720("SCLensInfoCardsOnCameraScopedFactoryServiceProvider",0x33,2);
  FUN_1000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar10 = FUN_1007d7060;
  FUN_1000823a8(FUN_1007d7060,0);
  FUN_100082720("SCCameraFeatureScopedServicesCleanupRelayServiceProvider",0x38,2);
  FUN_1000285a8(0x112ee9410,&UNK_10db168b0);
  func_0x000107c6157c(puVar1);
  puVar11 = &UNK_102abbc50;
  FUN_1000823a8(&UNK_102abbc50,puVar1);
  FUN_100082720("WebLensRetentionStoreVendingServiceProviderWrapperServiceProvider",0x41,2);
  FUN_1000285a8(0x112ee9418,&UNK_10dbb5f50);
  func_0x000107c6157c(pcVar6);
  pcVar12 = FUN_1007e4cc4;
  FUN_1000823a8(FUN_1007e4cc4,pcVar6);
  FUN_100082720("SCLegacyCameraResourceServicesServiceProvider",0x2d,2);
  uVar13 = param_31;
  FUN_1007d4808();
  FUN_100082720("SCLensInfoCardsOnCameraScopeServicesServiceProvider",0x33,2);
  FUN_1007d4874(param_54,param_28,param_55,param_56,param_57,param_58,param_10,param_59,param_60,
                param_61,param_62,param_63,param_64,param_65,param_8,param_66,param_11,param_7,
                param_27,param_67,param_68,param_69,param_70,param_71,in_stack_000001f0,param_4,
                in_stack_000001f8,in_stack_00000200,in_stack_00000208,in_stack_00000210,param_34,
                in_stack_00000218,param_6,param_9,in_stack_00000220,in_stack_00000228,
                in_stack_00000230,in_stack_00000238,in_stack_00000240,pcVar12,param_14,param_12,
                in_stack_00000248,in_stack_00000250,param_22,in_stack_00000258,in_stack_00000260,
                param_26,in_stack_00000268,in_stack_00000270,in_stack_00000278,uVar13,
                in_stack_00000280,param_45,param_47,in_stack_00000288,in_stack_00000290,
                in_stack_00000298,in_stack_000002a0,in_stack_000002a8,in_stack_000002b0);
  FUN_100082720("SCCaptureScopedFactoryServiceProvider",0x25,2);
  FUN_1000285a8(0x112ee9420,&UNK_10db168c0);
  func_0x000107c6157c(puVar11);
  puVar14 = &UNK_102abbc58;
  FUN_1000823a8(&UNK_102abbc58,puVar11);
  FUN_100082720("WebLensRetentionStoreServiceProvider",0x24,2);
  pcVar15 = pcVar12;
  FUN_1007d4e48();
  FUN_100082720("OpaqueCameraCameraFeatureScopedServiceProvider",0x2e,2);
  uVar21 = param_54;
  FUN_1007d4e84();
  FUN_100082720("SCCaptureScopeServicesServiceProvider",0x25,2);
  puVar16 = puVar2;
  FUN_1007d4ef0(puVar2,uVar21,pcVar12,uVar13,puVar14);
  FUN_100082720("CameraFeatureScopeGraphBridgeServicesServiceProvider",0x34,2);
  FUN_1000285a8(0x112ee9428,&UNK_10db168c8);
  puVar17 = &UNK_1105947b8;
  func_0x000107c613fc(&UNK_1105947b8,0x80,7);
  *(undefined8 **)(puVar17 + 0x10) = puVar1;
  *(undefined **)(puVar17 + 0x18) = puVar16;
  *(undefined8 *)(puVar17 + 0x20) = param_4;
  *(undefined8 *)(puVar17 + 0x28) = param_6;
  *(undefined8 *)(puVar17 + 0x30) = in_stack_000002e0;
  *(undefined8 *)(puVar17 + 0x38) = in_stack_000002e8;
  *(undefined **)(puVar17 + 0x40) = puVar3;
  *(code **)(puVar17 + 0x48) = pcVar4;
  *(code **)(puVar17 + 0x50) = pcVar10;
  *(code **)(puVar17 + 0x58) = pcVar5;
  *(code **)(puVar17 + 0x60) = pcVar6;
  *(code **)(puVar17 + 0x68) = pcVar7;
  *(code **)(puVar17 + 0x70) = pcVar9;
  *(undefined **)(puVar17 + 0x78) = puVar11;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(puVar11);
  func_0x000107c6157c(puVar16);
  func_0x000107c6157c(in_stack_000002e0);
  func_0x000107c6157c(in_stack_000002e8);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar9);
  pcVar18 = FUN_1007d5688;
  FUN_1000823a8(FUN_1007d5688,puVar17);
  FUN_100082720("SCCameraFeatureScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  FUN_1000285a8(0x112ee9360,&UNK_10db16620);
  func_0x000107c6157c(pcVar18);
  pcVar19 = FUN_1007d5130;
  FUN_1000823a8(FUN_1007d5130,pcVar18);
  FUN_100082720("SCCameraFeatureScopeInitializationServiceProvider",0x31,2);
  FUN_1000285a8(0x112ee9340,&UNK_10db16610);
  puVar17 = &UNK_1105947e0;
  func_0x000107c613fc(&UNK_1105947e0,0x20,7);
  *(code **)(puVar17 + 0x10) = pcVar15;
  *(code **)(puVar17 + 0x18) = pcVar19;
  func_0x000107c6157c(pcVar15);
  func_0x000107c6157c(pcVar19);
  pcVar20 = FUN_1007d50a0;
  FUN_1000823a8(FUN_1007d50a0,puVar17);
  FUN_100082720("SCCameraFeatureScopedServicesServiceProvider",0x2c,2);
  FUN_1000285a8(0x112ee9358,&UNK_10db168d0);
  puVar17 = &UNK_110594808;
  func_0x000107c613fc(&UNK_110594808,0x20,7);
  *(code **)(puVar17 + 0x10) = pcVar20;
  *(code **)(puVar17 + 0x18) = pcVar10;
  func_0x000107c6157c(pcVar10);
  pcVar20 = FUN_1007d4ffc;
  FUN_1000823a8(FUN_1007d4ffc,puVar17);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(param_31);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(param_54);
  func_0x000107c61574(puVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(puVar16);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(pcVar19);
  FUN_100082720("SCCameraFeatureScopeEntryPointProvider",0x26,2);
  *param_1 = pcVar20;
  return;
}



/* Entry: 1007d41ac; end: 1007d41af;  */

void FUN_1007d41ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007d41b0; end: 1007d441f;  */

void FUN_1007d41b0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007d32ac(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 1007d4420; end: 1007d44df;  */

void FUN_1007d4420(void)

{
  func_0x000107c61168(&PTR_PTR_112ee9498);
  return;
}



/* Entry: 1007d44e0; end: 1007d451f;  */

void FUN_1007d44e0(void)

{
  FUN_1000285a8(0x112ee9b80,&UNK_10db17620);
  FUN_1000823a8(&UNK_102abefd4,0);
  return;
}



/* Entry: 1007d4520; end: 1007d453f;  */

void FUN_1007d4520(void)

{
  func_0x000107c61168(&PTR_PTR_112ee99a0);
  return;
}



/* Entry: 1007d4540; end: 1007d47c7;  */

void FUN_1007d4540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112eec600,&UNK_10db1a370);
  puVar1 = &UNK_110597928;
  func_0x000107c613fc(&UNK_110597928,0xf8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_14;
  *(undefined8 *)(puVar1 + 0x18) = param_17;
  *(undefined8 *)(puVar1 + 0x20) = param_24;
  *(undefined8 *)(puVar1 + 0x28) = param_29;
  *(undefined8 *)(puVar1 + 0x30) = param_28;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_25;
  *(undefined8 *)(puVar1 + 0x48) = param_4;
  *(undefined8 *)(puVar1 + 0x50) = param_27;
  *(undefined8 *)(puVar1 + 0x58) = param_5;
  *(undefined8 *)(puVar1 + 0x60) = param_19;
  *(undefined8 *)(puVar1 + 0x68) = param_10;
  *(undefined8 *)(puVar1 + 0x70) = param_12;
  *(undefined8 *)(puVar1 + 0x78) = param_18;
  *(undefined8 *)(puVar1 + 0x80) = param_11;
  *(undefined8 *)(puVar1 + 0x88) = param_6;
  *(undefined8 *)(puVar1 + 0x90) = param_8;
  *(undefined8 *)(puVar1 + 0x98) = param_22;
  *(undefined8 *)(puVar1 + 0xa0) = param_16;
  *(undefined8 *)(puVar1 + 0xa8) = param_15;
  *(undefined8 *)(puVar1 + 0xb0) = param_13;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_2;
  *(undefined8 *)(puVar1 + 200) = param_26;
  *(undefined8 *)(puVar1 + 0xd0) = param_1;
  *(undefined8 *)(puVar1 + 0xd8) = param_9;
  *(undefined8 *)(puVar1 + 0xe0) = param_3;
  *(undefined8 *)(puVar1 + 0xe8) = param_20;
  *(undefined8 *)(puVar1 + 0xf0) = param_21;
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  FUN_1000823a8(FUN_100b7de64,puVar1);
  return;
}



/* Entry: 1007d47c8; end: 1007d4807;  */

void FUN_1007d47c8(void)

{
  func_0x000107c61168(&PTR_PTR_1129a39d8);
  return;
}



/* Entry: 1007d4808; end: 1007d4853;  */

void FUN_1007d4808(undefined8 param_1)

{
  FUN_1000285a8(0x112f645c8,&UNK_10dbc0a30);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x100b7db68,param_1);
  return;
}



/* Entry: 1007d4854; end: 1007d4873;  */

void FUN_1007d4854(void)

{
  func_0x000107c61168(&PTR_PTR_1128d8240);
  return;
}



/* Entry: 1007d4874; end: 1007d4e23;  */

void FUN_1007d4874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112eea970,&UNK_10db180c0);
  puVar1 = &UNK_110595cc8;
  func_0x000107c613fc(&UNK_110595cc8,0x238,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_66;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_26;
  *(undefined8 *)(puVar1 + 0x38) = param_16;
  *(undefined8 *)(puVar1 + 0x40) = param_18;
  *(undefined8 *)(puVar1 + 0x48) = param_35;
  *(undefined8 *)(puVar1 + 0x50) = param_15;
  *(undefined8 *)(puVar1 + 0x58) = param_67;
  *(undefined8 *)(puVar1 + 0x60) = param_33;
  *(undefined8 *)(puVar1 + 0x68) = param_22;
  *(undefined8 *)(puVar1 + 0x70) = param_24;
  *(undefined8 *)(puVar1 + 0x78) = param_17;
  *(undefined8 *)(puVar1 + 0x80) = param_69;
  *(undefined8 *)(puVar1 + 0x88) = param_34;
  *(undefined8 *)(puVar1 + 0x90) = param_20;
  *(undefined8 *)(puVar1 + 0x98) = param_2;
  *(undefined8 *)(puVar1 + 0xa0) = param_21;
  *(undefined8 *)(puVar1 + 0xa8) = param_14;
  *(undefined8 *)(puVar1 + 0xb0) = param_25;
  *(undefined8 *)(puVar1 + 0xb8) = param_10;
  *(undefined8 *)(puVar1 + 0xc0) = param_19;
  *(undefined8 *)(puVar1 + 200) = param_45;
  *(undefined8 *)(puVar1 + 0xd0) = param_36;
  *(undefined8 *)(puVar1 + 0xd8) = param_61;
  *(undefined8 *)(puVar1 + 0xe0) = param_62;
  *(undefined8 *)(puVar1 + 0xe8) = param_59;
  *(undefined8 *)(puVar1 + 0xf0) = param_11;
  *(undefined8 *)(puVar1 + 0xf8) = param_38;
  *(undefined8 *)(puVar1 + 0x100) = param_53;
  *(undefined8 *)(puVar1 + 0x108) = param_48;
  *(undefined8 *)(puVar1 + 0x110) = param_12;
  *(undefined8 *)(puVar1 + 0x118) = param_63;
  *(undefined8 *)(puVar1 + 0x120) = param_68;
  *(undefined8 *)(puVar1 + 0x128) = param_32;
  *(undefined8 *)(puVar1 + 0x130) = param_40;
  *(undefined8 *)(puVar1 + 0x138) = param_58;
  *(undefined8 *)(puVar1 + 0x140) = param_41;
  *(undefined8 *)(puVar1 + 0x148) = param_23;
  *(undefined8 *)(puVar1 + 0x150) = param_64;
  *(undefined8 *)(puVar1 + 0x158) = param_65;
  *(undefined8 *)(puVar1 + 0x160) = param_37;
  *(undefined8 *)(puVar1 + 0x168) = param_60;
  *(undefined8 *)(puVar1 + 0x170) = param_8;
  *(undefined8 *)(puVar1 + 0x178) = param_42;
  *(undefined8 *)(puVar1 + 0x180) = param_57;
  *(undefined8 *)(puVar1 + 0x188) = param_13;
  *(undefined8 *)(puVar1 + 400) = param_9;
  *(undefined8 *)(puVar1 + 0x198) = param_55;
  *(undefined8 *)(puVar1 + 0x1a0) = param_1;
  *(undefined8 *)(puVar1 + 0x1a8) = param_43;
  *(undefined8 *)(puVar1 + 0x1b0) = param_44;
  *(undefined8 *)(puVar1 + 0x1b8) = param_31;
  *(undefined8 *)(puVar1 + 0x1c0) = param_3;
  *(undefined8 *)(puVar1 + 0x1c8) = param_54;
  *(undefined8 *)(puVar1 + 0x1d0) = param_28;
  *(undefined8 *)(puVar1 + 0x1d8) = param_30;
  *(undefined8 *)(puVar1 + 0x1e0) = param_29;
  *(undefined8 *)(puVar1 + 0x1e8) = param_27;
  *(undefined8 *)(puVar1 + 0x1f0) = param_47;
  *(undefined8 *)(puVar1 + 0x1f8) = param_39;
  *(undefined8 *)(puVar1 + 0x200) = param_6;
  *(undefined8 *)(puVar1 + 0x208) = param_49;
  *(undefined8 *)(puVar1 + 0x210) = param_50;
  *(undefined8 *)(puVar1 + 0x218) = param_51;
  *(undefined8 *)(puVar1 + 0x220) = param_52;
  *(undefined8 *)(puVar1 + 0x228) = param_46;
  *(undefined8 *)(puVar1 + 0x230) = param_56;
  func_0x000107c6157c();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_56);
  FUN_1000823a8(&UNK_102ac7b68,puVar1);
  return;
}



/* Entry: 1007d4e24; end: 1007d4e27;  */

void FUN_1007d4e24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007d4e28; end: 1007d4e47;  */

void FUN_1007d4e28(void)

{
  func_0x000107c61168(&PTR_PTR_11299fdd0);
  return;
}



/* Entry: 1007d4e48; end: 1007d4e63;  */

void FUN_1007d4e48(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cac0,&UNK_10dbb5ea0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1007e4b6c,param_1);
  return;
}



/* Entry: 1007d4e64; end: 1007d4e83;  */

void FUN_1007d4e64(void)

{
  func_0x000107c61168(&PTR_PTR_1129c84c0);
  return;
}


