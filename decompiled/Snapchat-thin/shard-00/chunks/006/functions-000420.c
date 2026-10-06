/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008b4234; end: 1008b4293;  */

void FUN_1008b4234(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  FUN_10010fab4(lVar2,PTR_DAT_1126a5868);
  if ((int)lVar1 == 0 || lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107c61174(lVar2);
    lVar1 = lVar2;
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1008b4294; end: 1008b42a7; -[SCFeatureCaptureComponentImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b4294(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112740558,param_3);
  return;
}



/* Entry: 1008b42a8; end: 1008b42bb; -[SCFeatureCaptureComponentImpl setCaptureConfigurationDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b42a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274056c,param_3);
  return;
}



/* Entry: 1008b42bc; end: 1008b431f; -[SCFeatureHighDefinitionModeImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b42bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126efec8;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_configureWithView__1125af8f0,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740c88);
  *(undefined8 *)(param_1 + _DAT_112740c88) = param_3;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1008b4320; end: 1008b439b; -[SCFeatureHighDefinitionModeImpl configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b4320(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112740c8c;
  func_0x000107c61174(param_3);
  func_0x000107c611a0(param_1 + lVar1,param_3);
  lVar1 = param_1;
  func_0x000107c3b3a8(param_1);
  func_0x000107c61180();
  func_0x000107c3d914(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee2590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateToolbarItemAppearanceWith_112596308,0)
  ;
  return;
}



/* Entry: 1008b439c; end: 1008b466b; -[SCFeatureHighDefinitionModeImpl _createToolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b439c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar5 = (long)_DAT_112740c9c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c7918;
    func_0x000107c610f4();
    func_0x000107c47fa4();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    func_0x000107c61170(uVar3);
    func_0x000107c56ad8(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c58df0(uVar3);
    FUN_1008b466c();
    func_0x000107c61180();
    func_0x000107c56ae0(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar3);
    func_0x0001008b4684();
    func_0x000107c61180();
    func_0x000107c58e18(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c520f4(uVar3);
    FUN_1008b466c();
    func_0x000107c61180();
    func_0x000107c520fc(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar3);
    func_0x0001008b0f58();
    func_0x000107c61180();
    func_0x000107c52108(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar3);
    func_0x0001008b0f70();
    func_0x000107c61180();
    func_0x000107c5210c(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar3);
    func_0x000107c530e8(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61144(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c3f45c(uVar2);
    func_0x000107c61180();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    puStack_80 = &UNK_106173fd4;
    puStack_78 = &UNK_11090ba70;
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar3 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c41d8c(uVar2);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_98,auStack_68);
    uVar3 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    lVar4 = *(long *)(param_1 + lVar5);
    func_0x000107c61174(lVar4);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  else {
    func_0x000107c61174(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1008b466c; end: 1008b469b;  */

void FUN_1008b466c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5bc98;
  FUN_1000f5ff4(&PTR____CFConstantStringClassReference_110f5bc98,
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



/* Entry: 1008b469c; end: 1008b4767; -[SCFeatureHighDefinitionModeImpl _updateToolbarItemAppearanceWithCurrentCameraPosition:] */

/* WARNING: Possible PIC construction at 0x0001008b46f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b46f8) */
/* WARNING: Removing unreachable block (ram,0x0001008b4724) */
/* WARNING: Removing unreachable block (ram,0x0001008b4710) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b469c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740c3c);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5bcc0();
  func_0x000107c61180();
  func_0x000107c4193c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008b4768; end: 1008b48e3; -[SCCameraVerticalToolbar showToolbarItem:animated:] */

/* WARNING: Possible PIC construction at 0x0001008b4850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b4880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b48c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b48c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b4854) */
/* WARNING: Removing unreachable block (ram,0x0001008b4858) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b4768(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c61174(param_3);
  lVar4 = param_3;
  if (param_3 != 0) {
    lVar4 = param_1;
    func_0x000107c3af74(param_1,param_2,param_3);
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742b3c);
    func_0x000107c5dfc4(uVar1);
    lVar2 = lVar4;
    func_0x000107c51c54(lVar4);
    lVar3 = param_1;
    func_0x000107c3bb30(param_1,param_2,uVar1,param_3,lVar2);
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + _DAT_112742b94);
      func_0x000107c4d9c0(lVar4,param_2,param_3);
      func_0x000107c61180();
      func_0x000107c550d8();
    }
    else {
      lVar2 = param_1;
      func_0x000107c49f5c(param_1,param_2,param_3);
      func_0x000107c5560c(lVar4,param_2,0);
      func_0x000107c550d8(lVar4,param_2,0);
      if (((uint)lVar2 & (uint)lVar3) == 1) {
        if ((int)param_4 != 0) {
          func_0x000107c3dcb4(lVar4);
        }
        lVar2 = param_3;
        func_0x000107c3f9d0();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c4fda8(param_1,param_2,param_4);
        }
        else {
          func_0x000107c3babc(param_1,param_2,param_3);
          lVar4 = lVar2;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1008b48e4; end: 1008b493f; -[SCCameraToolbarButtonImpl setHidden:] */

void FUN_1008b48e4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0488;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_setHidden__1126479f8);
  if (param_3 != 0) {
    func_0x000107c5560c(param_1);
  }
  func_0x000107c3cce8(param_1);
  return;
}



/* Entry: 1008b4940; end: 1008b4953; -[SCCameraVerticalToolbar _endToolbarBulkLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b4940(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112742b98) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c129070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadToolbar__112627e38,0);
  return;
}



/* Entry: 1008b4954; end: 1008b495b; -[SCCameraVerticalToolbar reloadToolbar:] */

void FUN_1008b4954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reloadToolbar_completion__112580530,param_3,0);
  return;
}



/* Entry: 1008b495c; end: 1008b49d3;  */

/* WARNING: Possible PIC construction at 0x0001008b49b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b49b8) */

void FUN_1008b495c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4d9f8();
  func_0x000107c61180();
  func_0x000107c40190(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008b49d4; end: 1008b4a47; -[SCMainCameraViewController viewDidPartiallyAppear] */

/* WARNING: Possible PIC construction at 0x0001008b4a24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b4a28) */

void FUN_1008b49d4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c5bcbc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c8d40;
  func_0x000107c61158(PTR_PTR_1126c8d40);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008b4a48; end: 1008b4cf7; -[SCMainCameraViewControllerStartupWorkflow performViewDidPartiallyAppear:] */

/* WARNING: Possible PIC construction at 0x0001008b4ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b4ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b4af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b4b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b4b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b4b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b4c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b4c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b4c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b4c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b4c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b4cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008b4cd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b4c64) */
/* WARNING: Removing unreachable block (ram,0x0001008b4c28) */
/* WARNING: Removing unreachable block (ram,0x0001008b4c2c) */
/* WARNING: Removing unreachable block (ram,0x0001008b4c18) */
/* WARNING: Removing unreachable block (ram,0x0001008b4c08) */
/* WARNING: Removing unreachable block (ram,0x0001008b4ba0) */
/* WARNING: Removing unreachable block (ram,0x0001008b4c74) */
/* WARNING: Removing unreachable block (ram,0x0001008b4ba4) */
/* WARNING: Removing unreachable block (ram,0x0001008b4b90) */
/* WARNING: Removing unreachable block (ram,0x0001008b4af4) */
/* WARNING: Removing unreachable block (ram,0x0001008b4b40) */
/* WARNING: Removing unreachable block (ram,0x0001008b4af8) */
/* WARNING: Removing unreachable block (ram,0x0001008b4acc) */
/* WARNING: Removing unreachable block (ram,0x0001008b4cd4) */
/* WARNING: Removing unreachable block (ram,0x0001008b4ad0) */
/* WARNING: Removing unreachable block (ram,0x0001008b4abc) */
/* WARNING: Removing unreachable block (ram,0x0001008b4cc4) */

void FUN_1008b4a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c3f0f8(param_3);
  func_0x000107c61180();
  func_0x000107c3f0f4();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3ddc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008b4cf8; end: 1008b4d33; -[SCMemoriesNavigationServiceImpl galleryViewVisible] */

undefined8 FUN_1008b4cf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3bf08();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c43c9c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1008b4d34; end: 1008b4d6f; -[SCMemoriesNavigationServiceImpl _memoriesNavigationAdapter] */

void FUN_1008b4d34(long param_1)

{
  long lVar1;
  
  func_0x000107c611ec(param_1 + 0x10);
  lVar1 = param_1 + 8;
  func_0x000107c61148(lVar1);
  func_0x000107c611f0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1008b4d70; end: 1008b4db7; -[SCFeatureMemoriesImpl galleryViewVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008b4d70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a2c);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4a05c();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1008b4db8; end: 1008b4e4f; -[SCCameraToGallerySwipeTransitionCoordinator isMemoriesViewVisible] */

bool FUN_1008b4db8(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  func_0x000107c4a214();
  if (((int)lVar2 == 0) || (func_0x000107c4e510(param_2), param_1 != 1.0)) {
    bVar1 = false;
  }
  else {
    func_0x000107c43c98(param_2);
    func_0x000107c61180();
    lVar2 = param_2;
    func_0x000107c5de64();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c42c();
    func_0x000107c61180();
    bVar1 = lVar3 != 0;
    func_0x000107c61170();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_2);
  }
  return bVar1;
}



/* Entry: 1008b4e50; end: 1008b4eb3; -[SCSwipeTransitionCoordinatorImpl isPresenting] */

bool FUN_1008b4e50(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x000107c4f090();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c4f078();
    func_0x000107c61180();
    bVar1 = lVar3 == *(long *)(param_1 + 0x18);
    func_0x000107c61170();
    func_0x000107c61170(lVar2);
  }
  return bVar1;
}



/* Entry: 1008b4eb4; end: 1008b4ebb; -[SCCameraViewControllerStartupWorkflow startCamera:context:] */

void FUN_1008b4eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_startCamera_context_completion__1126712c0,param_3,param_4,0);
  return;
}



/* Entry: 1008b4ebc; end: 1008b4ecb; -[SCCameraViewControllerStartupWorkflow startCamera:context:completion:] */

void FUN_1008b4ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_startCamera_devicePosition_conte_1126712d0,param_3,0xffffffffffffffff,
             param_4,param_5);
  return;
}



/* Entry: 1008b4ecc; end: 1008b5167; -[SCMainCameraViewControllerStartupWorkflow startCamera:devicePosition:context:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b4ecc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar2 = PTR_PTR_1126c8d50;
  func_0x000107c61174(param_3);
  func_0x000107c61158(puVar2);
  uVar3 = param_3;
  func_0x000107c6115c(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_3);
  if (lRam000000011383a308 == 2 && lRam000000011383a310 != 1) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar2;
    func_0x000107c3dfc0();
    func_0x000107c61170(puVar2);
    if (puVar4 != (undefined *)0x0) {
      *(undefined1 *)(param_1 + _DAT_1127623b0) = 1;
      goto LAB_1008b5128;
    }
  }
  lVar9 = (long)_DAT_112762388;
  lVar5 = *(long *)(param_1 + lVar9);
  func_0x000107c3dfc4();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c3dfc0();
  if (lVar6 == 2) {
    lVar9 = *(long *)(param_1 + lVar9);
    func_0x000107c3dfc4();
    func_0x000107c61180();
    lVar6 = lVar9;
    func_0x000107c4d668();
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) goto LAB_1008b5128;
  }
  else {
    func_0x000107c61170(lVar5);
  }
  uVar3 = uVar1;
  func_0x000107c3f0f8(uVar1);
  func_0x000107c61180();
  uVar7 = uVar3;
  func_0x000107c3f0fc();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c58fbc();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  uVar3 = uVar1;
  func_0x000107c49b1c();
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar1;
    func_0x000107c49b18();
    uVar10 = (uint)uVar3 ^ 1;
  }
  else {
    uVar10 = 0;
  }
  uVar3 = uVar1;
  func_0x000107c4f078();
  func_0x000107c61180();
  if (uVar3 == 0) {
    uVar11 = 1;
  }
  else {
    uVar7 = uVar1;
    func_0x000107c4f078();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c4d05c();
    uVar11 = (uint)(uVar8 == 0);
    func_0x000107c61170(uVar7);
  }
  func_0x000107c61170(uVar3);
  if ((uVar10 & uVar11) == 1) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
  }
  else {
    puStack_68 = PTR_PTR_1126f8340;
    lStack_70 = param_1;
    func_0x000107c61154(&lStack_70,PTR_s_startCamera_devicePosition_conte_1126712d0,param_3,param_4,
                        param_5,param_6);
  }
LAB_1008b5128:
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008b5168; end: 1008b51a3; -[SCCameraHardwareServicesAPIImpl setSessionFixingEnabled:] */

void FUN_1008b5168(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c59304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008b51a4; end: 1008b51ab; -[SCManagedCaptureSessionImpl setSkipSessionFix:] */

void FUN_1008b51a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x7a) = param_3;
  return;
}



/* Entry: 1008b51ac; end: 1008b51f3; -[SCMainCameraViewController isCameraViewPartiallyVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1008b51ac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11276230c;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4a174();
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 1008b51f4; end: 1008b51f7; -[SCSwipeViewContainerViewController isPartiallyVisible:] */

void FUN_1008b51f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isPartiallyVisible_1125fc080);
  return;
}



/* Entry: 1008b51f8; end: 1008b5207; -[SCSwipeViewContainerViewController isPartiallyVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1008b51f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112776ad4);
}



/* Entry: 1008b5208; end: 1008b5873; -[SCCameraViewControllerStartupWorkflow startCamera:devicePosition:context:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b5208(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar1 = param_3;
  func_0x000107c3f0bc(param_3);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5cb3c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c42e38();
  func_0x000107c61180();
  lVar13 = (long)_DAT_1127626ec;
  func_0x000107c3f2f4();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((*(byte *)(param_1 + lVar13) & 1) != 0) goto LAB_1008b56f8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_10700bb08;
  puStack_88 = &UNK_110842508;
  func_0x000107c61174(param_6);
  ppuVar4 = &puStack_a0;
  uStack_80 = param_6;
  func_0x000107c61184();
  puVar2 = param_3;
  func_0x000107c3f1ac();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4e62c();
  func_0x000107c61180();
  puVar5 = puVar3;
  func_0x000107c3e1e8();
  func_0x000107c61170(puVar3);
  if ((int)puVar5 == 0) {
    puVar1 = puVar2;
    func_0x000107c3f084();
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c4008c();
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c3f05c();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c5ad38();
    if ((int)puVar7 == 0) {
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar3);
LAB_1008b55bc:
      func_0x000107c61170(puVar1);
    }
    else {
      puVar7 = param_3;
      func_0x000107c3f060();
      func_0x000107c61180();
      puVar8 = puVar7;
      func_0x000107c5194c();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar1);
      if (puVar8 == (undefined *)0x0) {
        puVar1 = PTR_PTR_1126aead8;
        func_0x000107c610f4(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        func_0x000107c61144(auStack_a8,param_1);
        func_0x000107c61144(auStack_e0,param_3);
        puVar3 = param_3;
        func_0x000107c3f068(param_3);
        func_0x000107c61180();
        puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_108 = 0xc2000000;
        puStack_100 = &UNK_10700bb74;
        puStack_f8 = &UNK_110854350;
        func_0x000107c6111c(auStack_f0,auStack_e0);
        func_0x000107c6111c(auStack_e8,auStack_a8);
        puVar5 = puVar3;
        func_0x000107c3ed94(puVar3);
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        puVar3 = param_3;
        func_0x000107c3f060(param_3);
        func_0x000107c61180();
        func_0x000107c42c1c();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar5);
        func_0x000107c61120(auStack_e8);
        func_0x000107c61120(auStack_f0);
        func_0x000107c61120(auStack_e0);
        func_0x000107c61120(auStack_a8);
        goto LAB_1008b55bc;
      }
    }
    lVar13 = (long)_DAT_1127626d0;
    uVar9 = *(undefined8 *)(param_1 + lVar13);
    func_0x000107c3e47c();
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar11 = uVar10;
    func_0x000107c4a6dc();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    if ((int)uVar11 != 0) {
      func_0x000107c61144(auStack_a8,param_1);
      uVar11 = *(undefined8 *)(param_1 + lVar13);
      func_0x000107c3e47c(uVar11);
      func_0x000107c61180();
      uVar10 = uVar11;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c6111c(auStack_118,auStack_a8);
      func_0x000107c61174(param_3);
      func_0x000107c61174(puVar2);
      func_0x000107c61174(ppuVar4);
      func_0x000107c3e49c(uVar10);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(ppuVar4);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(param_3);
      puVar12 = auStack_118;
      goto LAB_1008b56d4;
    }
    uVar9 = *(undefined8 *)(param_1 + lVar13);
    func_0x000107c3e47c();
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar11 = uVar10;
    func_0x000107c4a6e0();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    if ((int)uVar11 == 0) {
      puVar1 = param_3;
      func_0x000107c3f07c();
      func_0x000107c61180();
      puVar3 = puVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      puVar5 = puVar3;
      func_0x000107c43048();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar1);
      if (((ulong)puVar5 & 1) == 0) {
        puVar1 = puVar2;
        func_0x000107c4e62c(puVar2);
        func_0x000107c61180();
        func_0x000107c5291c();
        func_0x000107c61170(puVar1);
        func_0x000107c4d894(param_3);
      }
      (*(code *)ppuVar4[2])(ppuVar4,0);
    }
    else {
      func_0x000107c3ba48(param_1);
    }
  }
  else {
    func_0x000107c61144(auStack_a8,param_1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    puStack_c8 = &UNK_10700bb1c;
    puStack_c0 = &UNK_110867030;
    func_0x000107c6111c(auStack_b0,auStack_a8);
    func_0x000107c61174(puVar2);
    puStack_b8 = puVar2;
    func_0x000107c3e4fc(puVar3);
    func_0x000107c61180();
    puVar1 = param_3;
    func_0x000107c4e634(param_3);
    func_0x000107c61180();
    func_0x000107c3d69c();
    func_0x000107c61170(puVar1);
    puVar1 = param_3;
    func_0x000107c4c000(param_3);
    func_0x000107c61180();
    func_0x000107c4ba74();
    func_0x000107c61170(puVar1);
    (*(code *)ppuVar4[2])(ppuVar4,0);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puStack_b8);
    puVar12 = auStack_b0;
LAB_1008b56d4:
    func_0x000107c61120(puVar12);
    func_0x000107c61120(auStack_a8);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(uStack_80);
LAB_1008b56f8:
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008b5874; end: 1008b587b; -[SCMutablePublicCameraFeatureCatalog toSnappableLogger] */

undefined8 FUN_1008b5874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x210);
}



/* Entry: 1008b587c; end: 1008b58ab;  */

bool FUN_1008b587c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 1008b58ac; end: 1008b5a1f;  */

void FUN_1008b58ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126b0160;
    func_0x000107c610f4(PTR_PTR_1126b0160);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x000107c3e47c(uVar2);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    func_0x000107c3f0fc(uVar3);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5cb44(uVar4);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    func_0x000107c500a0(uVar5);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5de90(uVar6);
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c4c168();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_1 + 0x80);
    func_0x000107c4c15c();
    func_0x000107c61180();
    func_0x000107c45cf0(puVar9,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar1,uVar7,uVar8,
                        *(undefined8 *)(param_1 + 0x1a0),
                        &PTR____CFConstantStringClassReference_110f59ad8);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1008b5a20; end: 1008b5a3f; -[_TtC18SCCameraUIServices18SCCameraUIServices toSnappableStabilityMonitor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b5a20(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_1130385e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008b5a40; end: 1008b5c07; -[SCFeatureCameraToSnappableLoggingWithNavigationTrackingImpl initWithCaptureDeviceAuthorizationChecker:hardwareServicesAPI:toSnappableMonitor:renderAgent:cameraLifecycleEvents:appLifecycleEvents:mainCameraViewControllerLifecycleEvents:mainCameraScreenUIContainers:currentPageTracker:pageName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008b5a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126c8740;
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  func_0x000107c48dbc();
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_7);
  puVar2 = puVar1;
  func_0x000107c3f138(puVar1);
  func_0x000107c61180();
  puStack_68 = PTR_PTR_1126effd0;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar3,PTR_s_initWithCaptureDeviceAuthorizati_1125dcbb8,param_3,param_4,
                      param_5,param_6,puVar2,param_8,param_11,param_12);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11274140c;
    func_0x000107c61174(puVar1);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined **)((long)puVar3 + lVar5) = puVar1;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 1008b5c08; end: 1008b5fc3; -[SCToSnappableMonitorNavigationTypeHandler initWithToSnappableMonitor:cameraLifecycleEvents:appLifecycleEvents:mainCameraViewControllerLifecycleEvents:mainCameraScreenUIContainers:] */

undefined8 *
FUN_1008b5c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_80 = PTR_PTR_1126effe0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 2,param_7);
    *(undefined1 *)(puVar1 + 6) = 1;
    func_0x000107c4d534(param_3);
    puVar2 = puVar1;
    func_0x000107c3bfac();
    puVar1[3] = puVar2;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar7 = puVar1[1];
    puVar1[1] = puVar3;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_3);
    uVar7 = puVar1[5];
    puVar1[5] = param_3;
    func_0x000107c61170(uVar7);
    func_0x000107c61144(auStack_90,puVar1);
    uVar7 = param_5;
    func_0x000107c5e370(param_5);
    func_0x000107c61180();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_106196e78;
    puStack_a0 = &UNK_110846510;
    func_0x000107c6111c(auStack_98,auStack_90);
    uVar4 = uVar7;
    func_0x000107c5c320(uVar7);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar7);
    uVar7 = param_5;
    func_0x000107c41b80(param_5);
    func_0x000107c61180();
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_106196ea4;
    puStack_c8 = &UNK_110846510;
    func_0x000107c6111c(auStack_c0,auStack_90);
    uVar4 = uVar7;
    func_0x000107c5c320(uVar7);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar7);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    func_0x000107c6111c(auStack_e8,auStack_90);
    puVar5 = puVar3;
    func_0x000107c5c320(puVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(puVar5);
    uVar7 = param_4;
    func_0x000107c5c310(param_4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar7);
    func_0x000107c61174(puVar3);
    uVar7 = puVar1[7];
    puVar1[7] = puVar3;
    func_0x000107c61170(uVar7);
    if (param_6 != 0) {
      func_0x000107c61174(puVar3);
      lVar6 = param_6;
      func_0x000107c5c320(param_6);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c3aec8(puVar1);
    func_0x000107c61120(auStack_e8);
    func_0x000107c61170(puVar3);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008b5fc4; end: 1008b6007; -[SCCameraToSnappableStabilityMonitorImpl navigationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008b5fc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed6798;
  func_0x000107c61428(param_1 + _DAT_112ed6798,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1008b6008; end: 1008b6017; -[SCToSnappableMonitorNavigationTypeHandler _nextNavigationType:] */

long FUN_1008b6008(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x26;
  if (param_3 != 0x25) {
    lVar1 = param_3;
  }
  return lVar1;
}



/* Entry: 1008b6018; end: 1008b611b;  */

void FUN_1008b6018(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1008b611c;
  puStack_60 = &UNK_110849200;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c4c7b0(param_2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008b611c; end: 1008b6147;  */

void FUN_1008b611c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3cdf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008b6148; end: 1008b615f; -[SCToSnappableMonitorNavigationTypeHandler _viewWillAppear] */

void FUN_1008b6148(long param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setNavigationType__1126508b8,
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1008b6160; end: 1008b62c3; -[SCToSnappableMonitorNavigationTypeHandler _beginObservingOperaPresentation] */

void FUN_1008b6160(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61148();
  func_0x000107c61170();
  if (lVar1 != 0) {
    func_0x000107c61144(auStack_58,param_1);
    lVar1 = param_1 + 0x10;
    func_0x000107c61148();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c4df6c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c4a210();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_60,auStack_58);
    lVar6 = lVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar6;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  return;
}



/* Entry: 1008b62c4; end: 1008b6323;  */

/* WARNING: Possible PIC construction at 0x0001008b6300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b6304) */

void FUN_1008b62c4(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3ebcc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008b6324; end: 1008b6333; -[SCToSnappableMonitorNavigationTypeHandler _operaPresented:] */

void FUN_1008b6324(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0x1b;
  }
  return;
}



/* Entry: 1008b6334; end: 1008b633b; -[SCToSnappableMonitorNavigationTypeHandler cameraLifecycleEvents] */

undefined8 FUN_1008b6334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1008b633c; end: 1008b6563; -[SCFeatureToSnappableLoggingImpl initWithCaptureDeviceAuthorizationChecker:hardwareServicesAPI:toSnappableMonitor:renderAgent:cameraLifecycleEvents:appLifecycleEvents:currentPageTracker:pageName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008b633c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_1126effd8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112741410;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112741414;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112741418;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_11274141c;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112741420;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741424);
    *(undefined **)((long)puVar1 + (long)_DAT_112741424) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c03c(puVar1);
    func_0x000107c3bff8(puVar1);
    uVar2 = param_9;
    func_0x000107c40fa4(param_9);
    func_0x000107c61180();
    func_0x000107c3c008(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c4bd3c();
    func_0x000107c61170(uVar2);
  }
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



/* Entry: 1008b6564; end: 1008b666b; -[SCFeatureToSnappableLoggingImpl _observeViewLifecycle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b6564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274142c);
  *(undefined **)(param_1 + _DAT_11274142c) = puVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61144(auStack_48,param_1);
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar2 = param_3;
  func_0x000107c5c320(param_3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008b666c; end: 1008b6817;  */

void FUN_1008b666c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_106196d54;
  puStack_80 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_78,param_1 + 0x20);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1008b6818;
  puStack_a8 = &UNK_110849200;
  func_0x000107c6111c(auStack_a0,param_1 + 0x20);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1008ca33c;
  puStack_d0 = &UNK_110849200;
  func_0x000107c6111c(auStack_c8,param_1 + 0x20);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  puStack_100 = &UNK_106196d80;
  puStack_f8 = &UNK_110849200;
  func_0x000107c6111c(auStack_f0,param_1 + 0x20);
  func_0x000107c6111c(auStack_118,param_1 + 0x20);
  func_0x000107c4c7b0(param_2);
  func_0x000107c61120(auStack_118);
  func_0x000107c61120(auStack_f0);
  func_0x000107c61120(auStack_c8);
  func_0x000107c61120(auStack_a0);
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008b6818; end: 1008b6843;  */

void FUN_1008b6818(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3afd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008b6844; end: 1008b68c7; -[SCFeatureToSnappableLoggingImpl _cameraViewWillAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b6844(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = param_1;
  func_0x000107c3bb1c();
  if (((uVar1 & 1) == 0) && ((*(byte *)(param_1 + (long)_DAT_112741428) & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112741410);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    lVar3 = (long)_DAT_112741414;
    func_0x000107c4bd3c();
    func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf2bc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar3),PTR_s_cameraViewWillAppear_1125a88b0);
    return;
  }
  return;
}



/* Entry: 1008b68c8; end: 1008b6947; -[SCFeatureToSnappableLoggingImpl _isHeadlessMode] */

bool FUN_1008b68c8(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3dfc0();
  if (puVar3 == (undefined *)0x2) {
    puVar3 = PTR_PTR_1126ae520;
    func_0x000107c5a9bc(PTR_PTR_1126ae520);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c4d668();
    bVar1 = puVar4 != (undefined *)0x0;
    func_0x000107c61170(puVar3);
  }
  else {
    bVar1 = false;
  }
  func_0x000107c61170(puVar2);
  return bVar1;
}



/* Entry: 1008b6948; end: 1008b69d7; -[SCCameraViewfinderRenderAgentImpl logOnNextFrameRenderedWithToSnappableMonitor:] */

void FUN_1008b6948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1008b6d58;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008b69d8; end: 1008b69ff; -[SCCameraToSnappableStabilityMonitorImpl cameraViewWillAppear] */

void FUN_1008b69d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1008b6a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008b6a00; end: 1008b6a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b6a00(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 2;
  if (*(char *)(unaff_x20 + _DAT_112ed6800) == '\0') {
    uVar1 = 0;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112ed6830) = uVar1;
  if (*(long *)(unaff_x20 + _DAT_112ed67d0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112ed67d0),PTR_s_handleEvent__1125d1dd0,2);
    return;
  }
  return;
}



/* Entry: 1008b6a40; end: 1008b6a47; -[SCStateMachine handleEvent:] */

void FUN_1008b6a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd10f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handleEvent_withData__1125d1de0,param_3,0);
  return;
}



/* Entry: 1008b6a48; end: 1008b6d1f; -[SCStateMachine handleEvent:withData:] */

undefined8 FUN_1008b6a48(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  lVar9 = *(long *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (lVar9 == 0) {
    if (*(char *)(param_1 + 0xc) == '\x01') {
      func_0x000107c3c17c(param_1);
    }
  }
  else {
    func_0x000107c61174(lVar9);
    lVar3 = lVar9;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(lVar9);
        }
        uVar10 = *(ulong *)(lVar11 * 8);
        uVar4 = param_1;
        func_0x000107c5bcc0();
        uVar5 = uVar10;
        func_0x000107c43b2c();
        if (uVar4 == uVar5) {
          *(undefined1 *)(param_1 + 8) = 1;
          func_0x000107c5cb48(uVar10);
          func_0x000107c59840(param_1);
          uVar4 = uVar10;
          func_0x000107c5c734();
          func_0x000107c61180();
          uVar5 = uVar10;
          func_0x000107c3cf80(uVar10);
          uVar6 = uVar4;
          func_0x000107c61164(uVar4,uVar5);
          func_0x000107c61170(uVar4);
          puVar2 = PTR__OBJC_CLASS___NSInvocation_1126b71d0;
          if ((uVar6 & 1) != 0) {
            uVar4 = uVar10;
            func_0x000107c5c734(uVar10);
            func_0x000107c61180();
            func_0x000107c3cf80(uVar10);
            uVar5 = uVar4;
            func_0x000107c4ce68(uVar4);
            func_0x000107c61180();
            func_0x000107c49944(puVar2);
            func_0x000107c61180();
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar4);
            uVar4 = uVar10;
            func_0x000107c5c734(uVar10);
            func_0x000107c61180();
            func_0x000107c59c08(puVar2);
            func_0x000107c61170(uVar4);
            if ((param_4 != 0) && (uVar4 = uVar10, func_0x000107c3f3dc(), (int)uVar4 != 0)) {
              func_0x000107c528e0(puVar2);
            }
            func_0x000107c3cf80(uVar10);
            func_0x000107c58e48(puVar2);
            func_0x000107c49948(puVar2);
            func_0x000107c61170(puVar2);
          }
          *(undefined1 *)(param_1 + 8) = 0;
          func_0x000107c61170(lVar9);
          uVar8 = 1;
          goto LAB_1008b6cd0;
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar9;
      func_0x000107c4080c();
    }
    func_0x000107c61170(lVar9);
  }
  uVar8 = 0;
LAB_1008b6cd0:
  func_0x000107c61170(lVar9);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar8;
  }
  func_0x000107c60e78();
  return *(undefined8 *)(param_4 + 0x10);
}



/* Entry: 1008b6d20; end: 1008b6d27; -[SCStateMachine state] */

undefined8 FUN_1008b6d20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1008b6d28; end: 1008b6d2f; -[SCStateMachineTransition fromState] */

undefined8 FUN_1008b6d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1008b6d30; end: 1008b6d37; -[SCStateMachineTransition toState] */

undefined8 FUN_1008b6d30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008b6d38; end: 1008b6d4f; -[SCStateMachineTransition target] */

void FUN_1008b6d38(long param_1)

{
  func_0x000107c61148(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008b6d50; end: 1008b6d57; -[SCStateMachineTransition action] */

undefined8 FUN_1008b6d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1008b6d58; end: 1008b6d9f;  */

void FUN_1008b6d58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x68);
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  func_0x000107c61170(uVar3);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x41) = 1;
  return;
}



/* Entry: 1008b6da0; end: 1008b6dc7; -[SCCameraToSnappableStabilityMonitorImpl attempt] */

void FUN_1008b6da0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1008b6dc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008b6dc8; end: 1008b708f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b6dc8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  
  puVar1 = (undefined8 *)0x112ed6868;
  FUN_1000285a8(0x112ed6868,&UNK_10db00e60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(puVar1[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  puVar3 = &UNK_1029f44f0;
  FUN_10029cef4(&UNK_1029f44f0,auStack_70);
  func_0x000107c61170(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed67e0);
  *puVar1 = puVar3;
  *(undefined1 *)(puVar1 + 1) = 0;
  FUN_1008b7090(&DAT_112ed67f0,0x19,0x646e65722d69753a,0xea00000000007265);
  FUN_1008b7214(puVar6);
  lVar4 = 0;
  FUN_1005d3d88();
  lVar8 = *(long *)(lVar4 + -8);
  (**(code **)(lVar8 + 0x38))(puVar6,0,1,lVar4);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed67c0);
  func_0x000107c61428(puVar1,auStack_70,0x21,0);
  FUN_1008b7318(puVar6,puVar1);
  func_0x000107c614a8(auStack_70);
  FUN_1008b7578(puVar6);
  func_0x000107c61428(puVar1,auStack_70,0x21,0);
  puVar5 = puVar1;
  (**(code **)(lVar8 + 0x30))(puVar1,1,lVar4);
  if ((int)puVar5 == 0) {
    puVar5 = (undefined8 *)(unaff_x20 + _DAT_112ed67a0);
    func_0x000107c61428(puVar5,auStack_88,0,0);
    uVar7 = puVar1[1];
    uVar2 = puVar5[1];
    uVar9 = *puVar5;
    puVar1[1] = puVar5[1];
    *puVar1 = uVar9;
    func_0x000107c61434(uVar2);
    func_0x000107c6142c(uVar7);
  }
  func_0x000107c614a8(auStack_70);
  if (*(long *)(unaff_x20 + _DAT_112ed67d8) != 0) {
    func_0x000107c445f0();
  }
  puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  func_0x000107c51930(*(undefined8 *)(unaff_x20 + _DAT_112ed6818));
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ed67c8);
  *(undefined **)(unaff_x20 + _DAT_112ed67c8) = puVar3;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ed6810);
  func_0x000107c61428(unaff_x20 + _DAT_112ed6798,auStack_70,0,0);
  func_0x000107c4bf30(uVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ed6848);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ed6808);
  func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112ed6808))[1]);
  func_0x000107c5d95c(uVar7);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1008b7090; end: 1008b71f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b7090(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_68 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_1);
  if (*(char *)(puVar1 + 1) == '\x01') {
    FUN_1000298f0();
    puVar5 = auStack_68;
    func_0x000107c61428();
    lVar2 = *param_1;
    func_0x000107c61174(lVar2);
    func_0x000107c602fc(param_2);
    func_0x000107c6142c(0xe000000000000000);
    lVar3 = *(long *)(unaff_x20 + _DAT_112ed67a8);
    FUN_1008b71f4();
    func_0x000107c61180();
    if (lVar3 == 0) {
      puVar5 = (undefined1 *)0x800000010f0d8370;
      lVar6 = -0x2fffffffffffffed;
    }
    else {
      lVar6 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
    }
    func_0x000107c5fb78(lVar6,puVar5);
    func_0x000107c6142c(puVar5);
    func_0x000107c5fb78(param_3,param_4);
    uVar4 = 0x7070616e732d6f74;
    func_0x000100029b28(0x7070616e732d6f74,0xed00003a656c6261);
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(0xed00003a656c6261);
    *puVar1 = uVar4;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  return;
}



/* Entry: 1008b71f4; end: 1008b7213;  */

undefined * FUN_1008b71f4(ulong param_1)

{
  if (param_1 < 0x11) {
    return (&PTR_PTR_110d8b200)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 1008b7214; end: 1008b7317;  */

void FUN_1008b7214(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 8) = 0;
  lVar1 = 0;
  FUN_1005d3d88();
  func_0x000107c5eea0((long)param_1 + (long)*(int *)(lVar1 + 0x2c));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x30)) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x34)) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x38)) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x3c)) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x40)) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x44)) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x48)) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x4c)) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x50)) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x54)) = 0xffffffffffffffff;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x58)) = 0;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x5c)) = 0;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x60)) = 0;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 100)) = 0;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x68)) = 0;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x6c)) = 0;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x70)) = 0;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x74)) = 0;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x78)) = 0;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x7c)) = 0;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x80)) = 0;
  return;
}



/* Entry: 1008b7318; end: 1008b7367;  */

undefined8 FUN_1008b7318(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ed6868;
  FUN_1000285a8(0x112ed6868,&UNK_10db00e60);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1008b7368; end: 1008b7373;  */

void FUN_1008b7368(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1008b7374; end: 1008b73fb;  */

ulong FUN_1008b7374(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  lVar2 = 0;
  func_0x000107c5eea4();
  uVar3 = param_1 + *(int *)(param_3 + 0x2c);
                    /* WARNING: Could not recover jumptable at 0x0001008b73f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Entry: 1008b73fc; end: 1008b7577;  */

undefined8 * FUN_1008b73fc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  uVar5 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar5;
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  iVar2 = *(int *)(param_3 + 0x2c);
  lVar3 = 0;
  func_0x000107c5eea4();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar5);
  (*pcVar4)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  iVar2 = *(int *)(param_3 + 0x34);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
  iVar2 = *(int *)(param_3 + 0x3c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
  iVar2 = *(int *)(param_3 + 0x44);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
  iVar2 = *(int *)(param_3 + 0x4c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
  iVar2 = *(int *)(param_3 + 0x54);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x50)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x50));
  *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
  iVar2 = *(int *)(param_3 + 0x5c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x58)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x58));
  *(undefined1 *)((long)param_1 + (long)iVar2) = *(undefined1 *)((long)param_2 + (long)iVar2);
  iVar2 = *(int *)(param_3 + 100);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x60)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x60));
  *(undefined1 *)((long)param_1 + (long)iVar2) = *(undefined1 *)((long)param_2 + (long)iVar2);
  iVar2 = *(int *)(param_3 + 0x6c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x68)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x68));
  *(undefined1 *)((long)param_1 + (long)iVar2) = *(undefined1 *)((long)param_2 + (long)iVar2);
  iVar2 = *(int *)(param_3 + 0x74);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x70)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x70));
  *(undefined1 *)((long)param_1 + (long)iVar2) = *(undefined1 *)((long)param_2 + (long)iVar2);
  iVar2 = *(int *)(param_3 + 0x7c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x78)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x78));
  *(undefined1 *)((long)param_1 + (long)iVar2) = *(undefined1 *)((long)param_2 + (long)iVar2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x80)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x80));
  return param_1;
}



/* Entry: 1008b7578; end: 1008b760b;  */

undefined8 FUN_1008b7578(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ed6868;
  FUN_1000285a8(0x112ed6868,&UNK_10db00e60);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1008b760c; end: 1008b7667; -[SCCameraStabilityLogger logToSnappableAttemptWith:cameraType:cameraDirection:initialCameraState:] */

void FUN_1008b760c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174();
  FUN_1008b7668(param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008b7668; end: 1008b79c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b7668(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126e2a88;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c569f8();
  func_0x000107c530e0(puVar1);
  func_0x000107c52ff0(puVar1);
  func_0x000107c553c4(puVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed6708);
  if (lVar2 != 0) {
    func_0x000107c43bf4();
    func_0x000107c61180();
    puVar3 = &UNK_110581fc0;
    func_0x000107c613fc(&UNK_110581fc0,0x18,7);
    *(undefined **)(puVar3 + 0x10) = puVar1;
    puStack_70 = &UNK_100c6a9e0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100c6a968;
    puStack_78 = &UNK_110581fd8;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_68;
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar3);
    pcVar5 = "logToBlizzard(event:)";
    func_0x0001000c10c0("logToBlizzard(event:)");
    func_0x000107c61180();
    func_0x000107c5dc64(lVar2);
    func_0x000107c615e8(pcVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
  }
  uVar6 = 1;
  FUN_1008b7c24(*(undefined8 *)(unaff_x20 + _DAT_112ed6710));
  puStack_90 = (undefined *)0xd000000000000022;
  uStack_88 = 0x800000010f0d7ea0;
  FUN_1008b71f4();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar2 = 0;
    uVar9 = 0xe000000000000000;
    uVar7 = uVar6;
  }
  else {
    lVar2 = param_2;
    func_0x000107c5faec();
    uVar7 = uVar6;
    func_0x000107c61170(param_2);
    uVar9 = uVar6;
  }
  FUN_1008b7a44();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar10 = 0;
    uVar8 = 0xe000000000000000;
    uVar6 = uVar7;
  }
  else {
    lVar10 = param_1;
    func_0x000107c5faec();
    uVar6 = uVar7;
    func_0x000107c61170(param_1);
    uVar8 = uVar7;
  }
  FUN_1008b7be4();
  func_0x000107c61180();
  if (param_4 == 0) {
    lVar11 = 0;
    uVar6 = 0xe000000000000000;
  }
  else {
    lVar11 = param_4;
    func_0x000107c5faec();
    func_0x000107c61170(param_4);
  }
  func_0x000107c602fc(0x28);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0x206172656d614320,0xed0000206d6f7266);
  func_0x000107c5fb78(lVar10,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f0d7ed0);
  func_0x000107c5fb78(lVar11,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  func_0x000107c61434(uVar9);
  func_0x000107c5fb78(0x6c6c616974696e69,0xea00000000002079);
  func_0x000107c6142c(uVar9);
  func_0x000107c6142c(0xea00000000002079);
  func_0x000107c5fb78(lVar2,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c61170(puVar1);
  func_0x000107c6142c(uStack_88);
  return;
}



/* Entry: 1008b79c4; end: 1008b7a43; -[SCAToSnappableBase setNavigationType:] */

/* WARNING: Possible PIC construction at 0x0001008b7a2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b7a30) */

void FUN_1008b79c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_1008b7a44(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110fba518,6,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008b7a44; end: 1008b7a63;  */

undefined * FUN_1008b7a44(ulong param_1)

{
  if (param_1 < 0x2d) {
    return (&PTR_PTR_110d8af98)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 1008b7a64; end: 1008b7ae3; -[SCAToSnappableBase setCameraType:] */

/* WARNING: Possible PIC construction at 0x0001008b7acc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b7ad0) */

void FUN_1008b7a64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_1008b71f4(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110f4bd58,4,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008b7ae4; end: 1008b7b63; -[SCAToSnappableBase setCameraDirection:] */

/* WARNING: Possible PIC construction at 0x0001008b7b4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b7b50) */

void FUN_1008b7ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x0001003996f0(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110fb96f8,2,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008b7b64; end: 1008b7be3; -[SCAToSnappableBase setInitialCameraState:] */

/* WARNING: Possible PIC construction at 0x0001008b7bcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b7bd0) */

void FUN_1008b7b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_1008b7be4(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110fbb938,5,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008b7be4; end: 1008b7c17;  */

undefined * FUN_1008b7be4(ulong param_1)

{
  if (param_1 < 10) {
    return (&PTR_PTR_110d8ae48)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 1008b7c18; end: 1008b7c23; -[SCMainQueuePerformerImpl .cxx_destruct] */

void FUN_1008b7c18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1008b7c24; end: 1008b7c9b;  */

void FUN_1008b7c24(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110a58430,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_10007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1008b7c9c; end: 1008b7e3f; -[SCFeatureToSnappableLoggingImpl _observeAppLifecycle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b7c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_68,param_1);
  uVar1 = param_3;
  func_0x000107c41b80(param_3);
  func_0x000107c61180();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_106196ce4;
  puStack_78 = &UNK_110846510;
  func_0x000107c6111c(auStack_70,auStack_68);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  func_0x000107c5e3d8(param_3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_98,auStack_68);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008b7e40; end: 1008b7f4f; -[SCFeatureToSnappableLoggingImpl _observeCurrentPageEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b7e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = param_3;
  func_0x000107c421ac(param_3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008b7f50; end: 1008b800b;  */

void FUN_1008b7f50(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4c730(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008b800c; end: 1008b8067;  */

/* WARNING: Possible PIC construction at 0x0001008b8054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008b8058) */

void FUN_1008b800c(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x000107c441b4(PTR_PTR_1126afdd8);
  func_0x000107c61180();
  func_0x000107c3b4dc(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008b8068; end: 1008b80bf; -[SCFeatureToSnappableLoggingImpl _didPresentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b8068(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c49d0c(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112741420));
  if ((uVar1 & 1) == 0) {
    func_0x000107c55b20(*(undefined8 *)(param_1 + _DAT_112741414),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008b80c0; end: 1008b81c7; -[SCCameraToSnappableStabilityMonitorImpl setLaunchedFromPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b80c0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [32];
  long alStack_58 [3];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ed67a0);
  plVar4 = alStack_58;
  func_0x000107c61428(plVar1,plVar4,1,0);
  lVar5 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c6142c(lVar5);
  pcVar2 = (code *)auStack_78;
  FUN_1008b81c8();
  lVar5 = 0;
  FUN_1005d3d88();
  plVar3 = plVar4;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(plVar4,1,lVar5);
  if ((int)plVar3 == 0) {
    func_0x000107c61428(plVar1,auStack_90,0,0);
    lVar6 = plVar4[1];
    lVar5 = plVar1[1];
    lVar7 = *plVar1;
    plVar4[1] = plVar1[1];
    *plVar4 = lVar7;
    func_0x000107c61434(lVar5);
    func_0x000107c6142c(lVar6);
  }
  (*pcVar2)(auStack_78,0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1008b81c8; end: 1008b8233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1008b81c8(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar2 = 0x40;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x40,0x3d5a);
  }
  *param_1 = lVar2;
  lVar1 = _DAT_112ed67c0;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  *(long *)(lVar2 + 0x38) = lVar1;
  func_0x000107c61428(unaff_x20 + lVar1,lVar2,0x21,0);
  auVar3._8_8_ = unaff_x20 + lVar1;
  auVar3._0_8_ = FUN_1008b8234;
  return auVar3;
}



/* Entry: 1008b8234; end: 1008b82f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b8234(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar7 = *param_1;
  func_0x000107c614a8(lVar7);
  if ((param_2 & 1) == 0) {
    lVar5 = *(long *)(lVar7 + 0x30);
    lVar3 = *(long *)(lVar7 + 0x38);
    func_0x000107c61428(lVar5 + lVar3,lVar7,0x21,0);
    lVar4 = 0;
    FUN_1005d3d88();
    lVar5 = lVar5 + lVar3;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar5,1,lVar4);
    if ((int)lVar5 == 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + *(long *)(lVar7 + 0x38));
      puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + _DAT_112ed67a0);
      func_0x000107c61428(puVar2,lVar7 + 0x18,0,0);
      uVar8 = puVar1[1];
      uVar6 = puVar2[1];
      uVar9 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar9;
      func_0x000107c61434(uVar6);
      func_0x000107c6142c(uVar8);
    }
    func_0x000107c614a8(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar7);
  return;
}



/* Entry: 1008b82f4; end: 1008b8303; -[SCFeatureToSnappableLoggingImpl cameraViewIsBeingDismissed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b82f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741414),PTR_s_cameraViewIsBeingDismissed__1125a8878);
  return;
}



/* Entry: 1008b8304; end: 1008b839f; -[SCCameraToSnappableStabilityMonitorImpl cameraViewIsBeingDismissed:] */

void FUN_1008b8304(undefined8 param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [32];
  
  pcVar1 = (code *)auStack_60;
  func_0x000107c61174();
  FUN_1008b81c8();
  lVar2 = 0;
  FUN_1005d3d88();
  lVar3 = param_2;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_2,1,lVar2);
  if ((int)lVar3 == 0) {
    *(char *)(param_2 + *(int *)(lVar2 + 0x74)) = (char)param_3;
    *(ulong *)(param_2 + *(int *)(lVar2 + 0x3c)) = param_3 & 0xffffffff;
  }
  (*pcVar1)(auStack_60,0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1008b83a0; end: 1008b83a7; -[SCLegacyCameraResourcesImpl permissionService] */

void FUN_1008b83a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1008b83a8; end: 1008b83e7;  */

void FUN_1008b83a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c160();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1008b83e8; end: 1008b8483; -[SCLegacyCameraResourceServicesEntryPoint _premissionServicesImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b83e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c82d8;
  func_0x000107c610f4(PTR_PTR_1126c82d8);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11273fd64;
    func_0x000107c61148(lVar2);
  }
  lVar3 = lVar2;
  func_0x000107c3f178(lVar2);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c483b8(puVar1,param_2,lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008b8484; end: 1008b84c3;  */

void FUN_1008b8484(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b2fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1008b84c4; end: 1008b8603; -[SCLegacyPermissionRequestEntryPoint _createPermissionRequestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b84c4(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d5068;
  func_0x000107c610f4(PTR_PTR_1126d5068);
  lVar2 = param_1 + _DAT_11276516c;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c52030();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_112765170;
  func_0x000107c61148(lVar4);
  lVar5 = lVar4;
  func_0x000107c5da04();
  func_0x000107c61180();
  lVar6 = param_1 + _DAT_112765174;
  func_0x000107c61148(lVar6);
  lVar7 = lVar6;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_112765178;
    func_0x000107c61148(lVar8);
  }
  lVar9 = lVar8;
  func_0x000107c3e47c(lVar8);
  func_0x000107c61180();
  func_0x000107c45858(puVar1,param_2,lVar3,lVar5,lVar7,lVar9);
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



/* Entry: 1008b8604; end: 1008b889b; -[SCPermissionRequestManager initWithAudioSession:userNotTrackedLogger:applicationLifecycleEvents:captureAuthorizationChecker:] */

undefined8 *
FUN_1008b8604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_78 = PTR_PTR_1126f8b70;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[7];
    puVar1[7] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_88,puVar1);
    uVar2 = param_5;
    func_0x000107c41b80(param_5);
    func_0x000107c61180();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    puStack_a0 = &UNK_1071bd70c;
    puStack_98 = &UNK_110846510;
    func_0x000107c6111c(auStack_90,auStack_88);
    uVar4 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c5e370(param_5);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_b8,auStack_88);
    uVar4 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008b889c; end: 1008b890f; -[SCCameraPermissionsServicesImplementation initWithRequester:] */

undefined1 * FUN_1008b889c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126efce8;
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



/* Entry: 1008b8910; end: 1008b8917; -[SCCameraPermissionsServicesImplementation askingVideoCapturePermissions] */

undefined1 FUN_1008b8910(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 1008b8918; end: 1008b891f; -[SCCameraConfigurationImpl cameraBIPAConfig] */

undefined8 FUN_1008b8918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}


