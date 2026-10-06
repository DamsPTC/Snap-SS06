/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071751c4; end: 1071751ef;  */

void FUN_1071751c4(long param_1,undefined8 param_2)

{
  func_0x00010c204760(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1071751f0; end: 1071751f7;  */

void FUN_1071751f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_assetURL_1125a07a0);
  return;
}



/* Entry: 1071751f8; end: 1071752d3;  */

void FUN_1071751f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1071752d4;
  puStack_60 = &UNK_1108475b0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  uStack_50 = uVar3;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  uStack_40 = param_2;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_78);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 1071752d4; end: 1071754af;  */

void FUN_1071752d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_3 + 0x20) + 0x118;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf91760();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((int)lVar4 == 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c151a00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d75e0(*(undefined8 *)(param_3 + 0x30));
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x28);
    func_0x00010c0efd60();
    if (iVar1 == 0) {
      uVar5 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010c141d60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d75e0(*(undefined8 *)(param_3 + 0x30));
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010c151a00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7660(*(undefined8 *)(param_3 + 0x30));
    }
    else {
      lVar2 = *(long *)(param_3 + 0x20) + 0x118;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c2485a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0b8420();
      _objc_release(lVar3);
      _objc_release(lVar2);
      uVar5 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010c151a00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010c141d60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = *(long *)(param_3 + 0x20) + 0x118;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c0c6700();
      uVar7 = uVar5;
      func_0x00010854478c(param_1,param_2,0x3ff0000000000000,0x3ff0000000000000,uVar5,uVar6,0,
                          lVar4 == 2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d75e0(*(undefined8 *)(param_3 + 0x30));
      _objc_release(uVar7);
      _objc_release(lVar2);
      _objc_release(uVar6);
    }
  }
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  func_0x00010c29b880(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222140(*(undefined8 *)(param_3 + 0x30));
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_3 + 0x40));
  return;
}



/* Entry: 1071754b0; end: 107175507;  */

void FUN_1071754b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x118;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c075080();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    func_0x00010bf46b40(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x000107175504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107175508; end: 10717557b; -[SCPreviewExporter _safeGetCroppingAspectRatio] */

undefined8 FUN_107175508(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = 0x7ff0000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0xb8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5c940();
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 10717557c; end: 1071755ef; -[SCPreviewExporter _safeGetCroppingMediaOrientation] */

long FUN_10717557c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x118;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0c5ae0();
  }
  else {
    param_1 = *(long *)(param_1 + 0xb8);
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf5c600();
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1071755f0; end: 1071756eb; -[SCPreviewExporter _resizedImageForVideoFilter:image:callbackGroup:] */

void FUN_1071755f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _dispatch_group_enter(param_5);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1071756ec;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1071756ec; end: 10717581b;  */

void FUN_1071756ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  double extraout_d1;
  double extraout_d1_00;
  undefined1 auVar9 [16];
  double dVar10;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar7 = (undefined4)((ulong)param_1 >> 0x20);
  uVar5 = (undefined4)param_1;
  func_0x00010c23d0a0(*(undefined8 *)(param_2 + 0x20));
  dVar10 = (double)CONCAT44(uVar7,uVar5);
  func_0x00010c14e120(*(undefined8 *)(param_2 + 0x20));
  dVar10 = dVar10 * (double)CONCAT44(uVar7,uVar5);
  func_0x00010b690b78(SUB84(dVar10,0),extraout_d1 * (double)CONCAT44(uVar7,uVar5),0x500);
  auVar9 = NEON_fmov(0x3fe0000000000000,8);
  fVar6 = (float)(int)(dVar10 * auVar9._0_8_);
  fVar8 = (float)(int)(extraout_d1_00 * auVar9._8_8_);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c14e6c0(SUB84((double)(fVar6 + fVar6),0),(double)(fVar8 + fVar8),0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10717581c;
  puStack_60 = &UNK_110848ba8;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uStack_58 = uVar4;
  uStack_50 = uVar1;
  _objc_retain(uVar3);
  uStack_48 = uVar3;
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2,param_3,&puStack_78);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  return;
}



/* Entry: 10717581c; end: 107175843;  */

void FUN_10717581c(long param_1,undefined8 param_2)

{
  func_0x00010c204760(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107175844; end: 10717585b; -[SCPreviewExporter delegate] */

void FUN_107175844(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10717585c; end: 107175867; -[SCPreviewExporter setDelegate:] */

void FUN_10717585c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107175868; end: 10717587f; -[SCPreviewExporter displayDelegate] */

void FUN_107175868(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175880; end: 10717588b; -[SCPreviewExporter setDisplayDelegate:] */

void FUN_107175880(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10717588c; end: 1071758a3; -[SCPreviewExporter bundledLensProvider] */

void FUN_10717588c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071758a4; end: 1071758bb; -[SCPreviewExporter snapVideoFilterScopeExposer] */

void FUN_1071758a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071758bc; end: 1071758c3; -[SCPreviewExporter dialogCoordinator] */

undefined8 FUN_1071758bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1071758c4; end: 1071758f3; -[SCPreviewExporter setDialogCoordinator:] */

void FUN_1071758c4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1071758f4; end: 10717590b; -[SCPreviewExporter memoriesActivityItemProviderBuilder] */

void FUN_1071758f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10717590c; end: 107175923; -[SCPreviewExporter memoriesCloudFS] */

void FUN_10717590c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175924; end: 10717593b; -[SCPreviewExporter galleryLogger] */

void FUN_107175924(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10717593c; end: 107175943; -[SCPreviewExporter previewScopeServices] */

undefined8 FUN_10717593c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107175944; end: 10717594b; -[SCPreviewExporter overlayComposition] */

undefined8 FUN_107175944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10717594c; end: 10717597b; -[SCPreviewExporter setOverlayComposition:] */

void FUN_10717594c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10717597c; end: 107175993; -[SCPreviewExporter filterOverlayComposition] */

void FUN_10717597c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175994; end: 10717599f; -[SCPreviewExporter setFilterOverlayComposition:] */

void FUN_107175994(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 1071759a0; end: 1071759b7; -[SCPreviewExporter filterApplicationMetadataProvider] */

void FUN_1071759a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071759b8; end: 1071759c3; -[SCPreviewExporter setFilterApplicationMetadataProvider:] */

void FUN_1071759b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 1071759c4; end: 1071759db; -[SCPreviewExporter snapVideoFilterFactory] */

void FUN_1071759c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071759dc; end: 1071759e7; -[SCPreviewExporter setSnapVideoFilterFactory:] */

void FUN_1071759dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 1071759e8; end: 1071759ff; -[SCPreviewExporter viewportController] */

void FUN_1071759e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175a00; end: 107175a0b; -[SCPreviewExporter setViewportController:] */

void FUN_107175a00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 107175a0c; end: 107175a23; -[SCPreviewExporter imagePlayback] */

void FUN_107175a0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175a24; end: 107175a2f; -[SCPreviewExporter setImagePlayback:] */

void FUN_107175a24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 107175a30; end: 107175a47; -[SCPreviewExporter music] */

void FUN_107175a30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175a48; end: 107175a53; -[SCPreviewExporter setMusic:] */

void FUN_107175a48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 107175a54; end: 107175a6b; -[SCPreviewExporter voiceover] */

void FUN_107175a54(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175a6c; end: 107175a77; -[SCPreviewExporter setVoiceover:] */

void FUN_107175a6c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 107175a78; end: 107175a8f; -[SCPreviewExporter timer] */

void FUN_107175a78(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175a90; end: 107175a9b; -[SCPreviewExporter setTimer:] */

void FUN_107175a90(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 107175a9c; end: 107175ab3; -[SCPreviewExporter bounce] */

void FUN_107175a9c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175ab4; end: 107175abf; -[SCPreviewExporter setBounce:] */

void FUN_107175ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 107175ac0; end: 107175ad7; -[SCPreviewExporter videoPlayback] */

void FUN_107175ac0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175ad8; end: 107175ae3; -[SCPreviewExporter setVideoPlayback:] */

void FUN_107175ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb0,param_3);
  return;
}



/* Entry: 107175ae4; end: 107175aeb; -[SCPreviewExporter snapCrop] */

undefined8 FUN_107175ae4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107175aec; end: 107175b1b; -[SCPreviewExporter setSnapCrop:] */

void FUN_107175aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107175b1c; end: 107175b33; -[SCPreviewExporter videoPlaybackControls] */

void FUN_107175b1c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175b34; end: 107175b3f; -[SCPreviewExporter setVideoPlaybackControls:] */

void FUN_107175b34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 107175b40; end: 107175b57; -[SCPreviewExporter videoPlaybackControlsLegacy] */

void FUN_107175b40(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175b58; end: 107175b63; -[SCPreviewExporter setVideoPlaybackControlsLegacy:] */

void FUN_107175b58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 107175b64; end: 107175b7b; -[SCPreviewExporter spectaclesAuxiliaryContentServices] */

void FUN_107175b64(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175b7c; end: 107175b87; -[SCPreviewExporter setSpectaclesAuxiliaryContentServices:] */

void FUN_107175b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 107175b88; end: 107175b9f; -[SCPreviewExporter uco] */

void FUN_107175b88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175ba0; end: 107175bab; -[SCPreviewExporter setUco:] */

void FUN_107175ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd8,param_3);
  return;
}



/* Entry: 107175bac; end: 107175bc3; -[SCPreviewExporter ucoInMemories] */

void FUN_107175bac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175bc4; end: 107175bcf; -[SCPreviewExporter setUcoInMemories:] */

void FUN_107175bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xe0,param_3);
  return;
}



/* Entry: 107175bd0; end: 107175be7; -[SCPreviewExporter previewLoggingServices] */

void FUN_107175bd0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175be8; end: 107175bf3; -[SCPreviewExporter setPreviewLoggingServices:] */

void FUN_107175be8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xe8,param_3);
  return;
}



/* Entry: 107175bf4; end: 107175c0b; -[SCPreviewExporter commonLoggingParamsBuilder] */

void FUN_107175bf4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175c0c; end: 107175c17; -[SCPreviewExporter setCommonLoggingParamsBuilder:] */

void FUN_107175c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xf0,param_3);
  return;
}



/* Entry: 107175c18; end: 107175c2f; -[SCPreviewExporter memoriesPreviewShareSheetExportScopeExposer] */

void FUN_107175c18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175c30; end: 107175c3b; -[SCPreviewExporter setMemoriesPreviewShareSheetExportScopeExposer:] */

void FUN_107175c30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xf8,param_3);
  return;
}



/* Entry: 107175c3c; end: 107175c53; -[SCPreviewExporter spectaclesCustomExportScopeExposer] */

void FUN_107175c3c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175c54; end: 107175c5f; -[SCPreviewExporter setSpectaclesCustomExportScopeExposer:] */

void FUN_107175c54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x100,param_3);
  return;
}



/* Entry: 107175c60; end: 107175c77; -[SCPreviewExporter memoriesActivityController] */

void FUN_107175c60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175c78; end: 107175c83; -[SCPreviewExporter setMemoriesActivityController:] */

void FUN_107175c78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x108,param_3);
  return;
}



/* Entry: 107175c84; end: 107175c9b; -[SCPreviewExporter captionDataProvider] */

void FUN_107175c84(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175c9c; end: 107175ca7; -[SCPreviewExporter setCaptionDataProvider:] */

void FUN_107175c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x110,param_3);
  return;
}



/* Entry: 107175ca8; end: 107175cbf; -[SCPreviewExporter configuration] */

void FUN_107175ca8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175cc0; end: 107175ccb; -[SCPreviewExporter setConfiguration:] */

void FUN_107175cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x118,param_3);
  return;
}



/* Entry: 107175ccc; end: 107175ce3; -[SCPreviewExporter userSession] */

void FUN_107175ccc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175ce4; end: 107175cef; -[SCPreviewExporter setUserSession:] */

void FUN_107175ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x120,param_3);
  return;
}



/* Entry: 107175cf0; end: 107175d07; -[SCPreviewExporter videoTrackingServices] */

void FUN_107175cf0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175d08; end: 107175d13; -[SCPreviewExporter setVideoTrackingServices:] */

void FUN_107175d08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x128,param_3);
  return;
}



/* Entry: 107175d14; end: 107175d2b; -[SCPreviewExporter contentDeliveryServices] */

void FUN_107175d14(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175d2c; end: 107175d37; -[SCPreviewExporter setContentDeliveryServices:] */

void FUN_107175d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x130,param_3);
  return;
}



/* Entry: 107175d38; end: 107175d4f; -[SCPreviewExporter stickerInjector] */

void FUN_107175d38(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175d50; end: 107175d5b; -[SCPreviewExporter setStickerInjector:] */

void FUN_107175d50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x138,param_3);
  return;
}



/* Entry: 107175d5c; end: 107175d73; -[SCPreviewExporter previewABProvider] */

void FUN_107175d5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x140);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175d74; end: 107175d7f; -[SCPreviewExporter setPreviewABProvider:] */

void FUN_107175d74(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x140,param_3);
  return;
}



/* Entry: 107175d80; end: 107175d97; -[SCPreviewExporter creativeToolsABProvider] */

void FUN_107175d80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175d98; end: 107175da3; -[SCPreviewExporter setCreativeToolsABProvider:] */

void FUN_107175d98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x148,param_3);
  return;
}



/* Entry: 107175da4; end: 107175dbb; -[SCPreviewExporter textToSpeech] */

void FUN_107175da4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175dbc; end: 107175dc7; -[SCPreviewExporter setTextToSpeech:] */

void FUN_107175dbc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x150,param_3);
  return;
}



/* Entry: 107175dc8; end: 107175ddf; -[SCPreviewExporter itemViewService] */

void FUN_107175dc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175de0; end: 107175deb; -[SCPreviewExporter setItemViewService:] */

void FUN_107175de0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x158,param_3);
  return;
}



/* Entry: 107175dec; end: 107175e03; -[SCPreviewExporter imageProcessRenderingSessionFactory] */

void FUN_107175dec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x160);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107175e04; end: 107175e0f; -[SCPreviewExporter setImageProcessRenderingSessionFactory:] */

void FUN_107175e04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x160,param_3);
  return;
}



/* Entry: 107175e10; end: 107175f9f; -[SCPreviewExporter .cxx_destruct] */

void FUN_107175e10(long param_1)

{
  _objc_destroyWeak(param_1 + 0x160);
  _objc_destroyWeak(param_1 + 0x158);
  _objc_destroyWeak(param_1 + 0x150);
  _objc_destroyWeak(param_1 + 0x148);
  _objc_destroyWeak(param_1 + 0x140);
  _objc_destroyWeak(param_1 + 0x138);
  _objc_destroyWeak(param_1 + 0x130);
  _objc_destroyWeak(param_1 + 0x128);
  _objc_destroyWeak(param_1 + 0x120);
  _objc_destroyWeak(param_1 + 0x118);
  _objc_destroyWeak(param_1 + 0x110);
  _objc_destroyWeak(param_1 + 0x108);
  _objc_destroyWeak(param_1 + 0x100);
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_destroyWeak(param_1 + 0xe8);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_destroyWeak(param_1 + 200);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107175fa0; end: 107175fff; +[SCSnapVideoFilterUcoConfig makeWithFilterId:] */

void FUN_107175fa0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    _objc_alloc(param_1);
    func_0x00010c0131a0();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107176000; end: 10717617f; +[SCSnapVideoFilterUcoConfig makeWithFilterIds:] */

undefined1 * FUN_107176000(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = param_1;
        func_0x00010c0b7b20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(lVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_3;
      puVar8 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010bf529e0();
  puVar7 = (undefined *)0x0;
  if (puVar4 != (undefined *)0x0) {
    puVar7 = puVar1;
  }
  _objc_retain(puVar7);
  _objc_release(puVar1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  plVar5 = &lStack_150;
  pcStack_128 = FUN_107176180;
  puStack_140 = puVar7;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  puStack_148 = PTR_PTR_1126f8a90;
  lStack_150 = lVar2;
  _objc_msgSendSuper2(&lStack_150,PTR_s_init_1125d9248);
  if (plVar5 != (long *)0x0) {
    _objc_retain(puVar8);
    uVar6 = *(undefined8 *)((long)plVar5 + 8);
    *(undefined8 **)((long)plVar5 + 8) = puVar8;
    _objc_release(uVar6);
  }
  _objc_release(puVar8);
  return (undefined1 *)plVar5;
}



/* Entry: 107176180; end: 1071761f3; -[SCPreviewLabelCounterServices initWithPreviewLabelsCounter:] */

undefined1 * FUN_107176180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8a90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071761f4; end: 1071761fb; -[SCPreviewLabelCounterServices previewLabelsCounter] */

undefined8 FUN_1071761f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1071761fc; end: 107176207; -[SCPreviewLabelCounterServices .cxx_destruct] */

void FUN_1071761fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107176208; end: 10717627b; -[SCPreviewCameraRollSnapSavingServices initWithCoordinator:] */

undefined1 * FUN_107176208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8a98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10717627c; end: 107176283; -[SCPreviewCameraRollSnapSavingServices coordinator] */

undefined8 FUN_10717627c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107176284; end: 10717628f; -[SCPreviewCameraRollSnapSavingServices .cxx_destruct] */

void FUN_107176284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107176290; end: 1071763a3; -[SCPreviewCameraRollSnapSavingData initWithCoder:] */

undefined1 * FUN_107176290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8aa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071763a4; end: 10717649f; -[SCPreviewCameraRollSnapSavingData initWithIsImageSnap:saveSessionId:exportPolicy:watermarkProfile:watermarkLayout:isWatermarkingEnabledForImages:] */

undefined1 *
FUN_1071763a4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f8aa0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1071764a0; end: 1071764c3; -[SCPreviewCameraRollSnapSavingData copyWithZone:] */

undefined8 FUN_1071764a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


