/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d88b90; end: 106d88c57;  */

uint FUN_106d88b90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c10aa80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106d88c58; end: 106d88c5b;  */

void FUN_106d88c58(void)

{
  return;
}



/* Entry: 106d88c5c; end: 106d88d9b; -[SCGalleryPreviewController _updateSnapDocWithSnapDocEditor:userContext:] */

void FUN_106d88c5c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  func_0x00010b5f57a8();
  if (param_5 == 0x17) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    _objc_release(puVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc0000000;
    uStack_48 = 0x106d88d14;
    puStack_40 = &UNK_11097ad18;
    lStack_38 = (long)(param_1 * 1000.0);
    func_0x00010c28a040(param_4,param_3,&puStack_58);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106d88d9c; end: 106d88e67; -[SCGalleryPreviewController _snapEditorCaptureLocationWithLegacyConfig:] */

void FUN_106d88d9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = param_3;
    func_0x00010c2440e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c23f6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  else {
    _objc_retain(lVar3);
    lVar5 = lVar3;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 106d88e68; end: 106d88f7b; -[SCGalleryPreviewController _snapEditorCaptureDateWithLegacyConfig:] */

void FUN_106d88e68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = param_3;
    func_0x00010bf5aac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c2440e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010b5f7a24();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else {
      lVar4 = param_3;
      func_0x00010bf5aac0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(lVar3);
    lVar4 = lVar3;
  }
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106d88f7c; end: 106d8902b; -[SCGalleryPreviewController _snapEditorSaveConfigWithSnapId:userContext:] */

void FUN_106d88f7c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (func_0x00010b5f57a8(), param_4 == 0x17)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126d2670;
    _objc_alloc_init(PTR_PTR_1126d2670);
    puVar2 = PTR_PTR_1126b3540;
    func_0x00010c13b080(PTR_PTR_1126b3540,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eacc0(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1d5240(puVar3,param_2,PTR____kCFBooleanTrue_11034ab68);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d8902c; end: 106d891d7; -[SCGalleryPreviewController _snapEditorLoggingParamsWithLegacyConfig:userContext:] */

void FUN_106d8902c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126c4258;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c131e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0d32a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c247a20();
  func_0x00010bc9107c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1ca4e0(puVar1,param_2,uVar5);
  func_0x00010b5f57a8(param_4);
  func_0x00010bafa2a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1aa0(puVar1,param_2,param_4);
  _objc_release(param_4);
  puVar6 = PTR_PTR_1126c81a8;
  _objc_opt_new(PTR_PTR_1126c81a8);
  func_0x00010c165a60(puVar1,param_2,puVar6);
  uVar2 = param_3;
  func_0x00010bf429e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c27c4a0(uVar2);
  func_0x00010baf8a44();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a480(puVar6,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d891d8; end: 106d893e7; -[SCGalleryPreviewController _attachPreviewUIWithLegacyConfig:snapAssets:fromViewController:transitioningDelegate:previewViewController:] */

void FUN_106d891d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010bddbde0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + 0x1e8);
  *(long *)(param_1 + 0x1e8) = lVar1;
  _objc_release(uVar2);
  lVar3 = lVar1;
  func_0x00010c1111c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c127e00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2440e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf0afe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203980(lVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c219b20(*(undefined8 *)(param_1 + 0x1e8));
  func_0x00010c1c8b80(*(undefined8 *)(param_1 + 0x1e8));
  _objc_initWeak(auStack_68,param_1);
  func_0x00010be40200(param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c10eda0(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d893e8; end: 106d89467;  */

void FUN_106d893e8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    uVar2 = uVar1;
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbd400();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d89468; end: 106d8a037; -[SCGalleryPreviewController _presentPreviewWithPHAsset:contentEditingInput:image:videoAsset:videoURL:embeddedMetadata:externalMediaSource:orientation:fromViewController:shouldShowPostStorySelection:transitioningDelegate:animated:userContext:preselectedPreviewTool:memoriesCRFeaturedStory:replyConfiguration:importedContentId:musicSelection:triggeringSection:] */

void FUN_106d89468(double param_1,double param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  long param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 in_stack_00000010;
  byte in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 auStack_f8 [8];
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000058);
  if ((*(byte *)(param_3 + 0x41) & 1) != 0) goto LAB_106d89f24;
  func_0x00010be7ffe0(param_3);
  uVar1 = *(undefined8 *)(param_3 + 0xf0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a72a0();
  _objc_release(uVar1);
  *(undefined8 *)(param_3 + 0x38) = in_stack_00000028;
  puVar2 = PTR_PTR_1126afee0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004180();
  _objc_release(puVar3);
  func_0x00010c201280(puVar2);
  func_0x00010c1ab140(puVar2);
  lVar4 = param_5;
  func_0x00010c0c6c20();
  if (lVar4 == 2) {
    func_0x00010c1c5440(puVar2);
    func_0x000107f703c4(param_8);
    func_0x00010c1c5240(puVar2);
    uVar5 = *(undefined8 *)(param_3 + 0xe0);
    func_0x00010c1104a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c29aec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221d20(puVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
    func_0x00010c16c080(puVar2);
    func_0x00010c221ca0(puVar2);
    func_0x00010c221700(puVar2);
  }
  else {
    func_0x00010c1c5440(puVar2);
    func_0x00010c23d0a0(param_7);
    func_0x00010c1c5240(puVar2);
    func_0x00010c1a1640(puVar2);
  }
  func_0x00010c0c6700(puVar2);
  dVar16 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar16 = INFINITY;
    }
    else {
      dVar16 = param_1 / param_2;
    }
  }
  func_0x00010c1c40c0(dVar16,puVar2);
  func_0x00010c1c4ca0(puVar2);
  func_0x00010c1996c0(puVar2);
  func_0x00010c1c9fc0(puVar2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106d8a038;
  puStack_88 = &UNK_11097a648;
  _objc_retain(puVar2);
  puStack_80 = puVar2;
  func_0x00010c0bcaa0(in_stack_00000048);
  lVar4 = param_10;
  func_0x00010c0664c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0946a0();
  _objc_release(lVar4);
  if (lVar6 != 0) {
    puVar7 = PTR_PTR_1126b0820;
    _objc_opt_new(PTR_PTR_1126b0820);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar4 = param_10;
    func_0x00010c0664c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c094680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296de0();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar6);
    _objc_release(lVar4);
    puVar3 = PTR_PTR_1126b13a0;
    _objc_opt_new(PTR_PTR_1126b13a0);
    puVar8 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2620(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010c2b2680(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be380(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar7);
  }
  puVar3 = puVar2;
  func_0x00010bfbbbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c0c5ae0(puVar2);
  uVar14 = *(undefined8 *)(param_3 + 8);
  uVar15 = *(undefined8 *)(param_3 + 0x150);
  uVar13 = *(undefined8 *)(param_3 + 0x100);
  uVar1 = *(undefined8 *)(param_3 + 0x1b0);
  uVar5 = *(undefined8 *)(param_3 + 0x1b8);
  puVar8 = puVar2;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x000107f7047c(puVar3,puVar7,uVar14,param_5,uVar15,uVar13,uVar1,uVar5,puVar10,
                      *(undefined8 *)(param_3 + 0x108));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(puVar2);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar3);
  if (in_stack_00000030 == 0xf) {
    func_0x00010c204fa0(puVar2);
    uVar1 = in_stack_00000048;
    func_0x00010c2720a0(in_stack_00000048);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb140(puVar2);
    _objc_release(uVar1);
    func_0x00010c2056c0(puVar2);
  }
  else {
    if (in_stack_00000030 == 0xe) {
      func_0x00010c204fa0(puVar2);
      puVar3 = PTR_PTR_1126b1010;
      _objc_alloc(PTR_PTR_1126b1010);
      func_0x00010c02ec80();
      func_0x00010c1eb140(puVar2);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c131e40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165620();
      _objc_release(puVar3);
      func_0x00010c2056c0(puVar2);
    }
    func_0x00010c204fa0(puVar2);
    func_0x00010c2056c0(puVar2);
    uVar1 = in_stack_00000048;
    func_0x00010c2720a0(in_stack_00000048);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb140(puVar2);
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126b5fa8;
  _objc_alloc_init(PTR_PTR_1126b5fa8);
  func_0x00010c205d00(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c2440e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a7a0();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c2440e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181e60();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c2440e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e120();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c2440e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5ca0();
  _objc_release(puVar3);
  func_0x00010c1e0c00(puVar2);
  func_0x00010be42f00(param_3);
  puVar7 = puVar2;
  func_0x00010c167e00(puVar2);
  func_0x0001008e4748();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bbc40();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c242400(puVar2);
  func_0x00010c2b9b80(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f520(puVar2);
  _objc_release(puVar3);
  lVar4 = param_10;
  func_0x00010c0664c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0d3a20();
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126b0008;
  if (lVar6 != 0) {
    lVar4 = param_10;
    func_0x00010c0664c0(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d3a20();
    func_0x00010c0d3780(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f3c0(puVar2);
    _objc_release(puVar3);
    _objc_release(lVar4);
  }
  if (((in_stack_00000018 & 1) == 0) &&
     (in_stack_00000030 == 0x11 || 0xfffffffffffffffd < in_stack_00000030 - 3U)) {
    func_0x00010beb6420(param_3);
  }
  func_0x00010c202080(puVar2);
  uVar12 = param_3;
  func_0x00010beb3840();
  if ((uVar12 & 1) == 0) {
    uVar12 = *(ulong *)(param_3 + 0x150);
    func_0x00010bf510c0();
    if (((uVar12 & 1) != 0) ||
       ((lVar4 = param_5, func_0x00010c0c6c20(), param_8 != 0 && (lVar4 == 2)))) goto LAB_106d89d28;
    lVar4 = param_5;
    func_0x00010c0c6c20();
    if ((lVar4 == 2) && (lVar4 = param_5, func_0x000107f701a8(), (int)lVar4 != 0)) {
      func_0x00010be7d880(param_3);
    }
    else {
      func_0x00010be0d140(param_3);
    }
  }
  else {
LAB_106d89d28:
    lVar4 = param_5;
    func_0x00010c0c6c20();
    uVar1 = *(undefined8 *)(param_3 + 0x148);
    puVar3 = PTR_PTR_1126affc0;
    if ((param_8 == 0) || (lVar4 != 2)) {
      uStack_b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x00010c27eee0(PTR_PTR_1126affc0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c29a0a0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf8cb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_initWeak(&uStack_c0,param_3);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x106d8a068;
    puStack_d0 = &UNK_11084e6e0;
    _objc_retain(puVar2);
    puStack_c8 = puVar2;
    func_0x00010c28a040(uVar1);
    uVar5 = *(undefined8 *)(param_3 + 0x98);
    _objc_copyWeak(auStack_f8,&uStack_c0);
    _objc_retain(uVar1);
    _objc_retain(puVar2);
    _objc_retain(param_5);
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(in_stack_00000010);
    _objc_retain(in_stack_00000020);
    lStack_f0 = in_stack_00000030;
    func_0x00010c0f7fc0(uVar5);
    _objc_release(in_stack_00000020);
    _objc_release(in_stack_00000010);
    _objc_release(param_7);
    _objc_release(param_8);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_f8);
    _objc_release(puStack_c8);
    _objc_destroyWeak(&uStack_c0);
    _objc_release(uVar1);
  }
  _objc_release(puVar7);
  _objc_release(puStack_80);
  _objc_release(puVar2);
LAB_106d89f24:
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000010);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106d8a038; end: 106d8a10b;  */

void FUN_106d8a038(long param_1,long param_2)

{
  func_0x00010c243400(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1b4a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setIsSpotlightPreselectedInSendT_11264aca8,
             param_2 == 0x6a);
  return;
}



/* Entry: 106d8a10c; end: 106d8a367; -[SCGalleryPreviewController _importGalleryAssetWithSnapDocEditor:legacyConfig:phAsset:videoAsset:image:fromViewController:transitioningDelegate:userContext:] */

void FUN_106d8a10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_5;
  func_0x00010bf5a700(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be79260(param_1);
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_3;
  func_0x00010c2a1480(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = param_9;
  _objc_retain(param_9);
  uStack_70 = param_10;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d8a368; end: 106d8a403;  */

void FUN_106d8a368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126affe8;
  _objc_retain(param_2);
  func_0x00010c09e180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0ff580(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106d8a404; end: 106d8a443;  */

undefined8 FUN_106d8a404(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfd8fc0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106d8a444; end: 106d8a61b;  */

void FUN_106d8a444(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_106d8a500;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c242400();
  if (lVar3 == 0xb) {
LAB_106d8a498:
    func_0x00010c288840(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c242400();
    if (lVar3 == 0x10) goto LAB_106d8a498;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x000107f701a8();
  if (iVar1 == 0) {
    func_0x00010beaba20(lVar2);
  }
  else {
    func_0x00010be7d880(lVar2);
  }
LAB_106d8a500:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d8a61c; end: 106d8ab33; -[SCGalleryPreviewController _getMultisnapSegmentsWithAsset:placeholderImage:legacyConfig:completion:] */

void FUN_106d8a61c(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (param_5 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100c2bc40();
    func_0x00010c14cfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    _objc_retain(param_5);
    puVar2 = param_5;
  }
  if (param_4 == 0) {
    uStack_c0 = 0;
    puStack_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_c0,param_4);
  }
  _CMTimeGetSeconds(&uStack_c0);
  dVar11 = param_1;
  func_0x00010be5dda0(param_2);
  uVar10 = 0x3fd3333340000000;
  if (dVar11 + 0.30000001192092896 < param_1) {
    uVar6 = param_6;
    func_0x00010c2440e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar6);
    uVar6 = param_6;
    func_0x00010c2440e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010c270320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(uVar9);
    _objc_release(uVar6);
    uVar6 = param_6;
    func_0x00010c2440e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c073be0();
    _objc_release(uVar6);
    uVar6 = param_6;
    func_0x00010c2440e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010c0d2400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(uVar9);
    _objc_release(uVar6);
    uVar6 = param_6;
    func_0x00010c2440e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07f160();
    _objc_release(uVar6);
  }
  puVar1 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  _objc_alloc(PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170);
  func_0x00010bff41a0();
  func_0x00010c169b80();
  uVar9 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar7 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_c0 = uVar7;
  puStack_b8 = (undefined8 *)uVar9;
  uStack_b0 = uVar6;
  func_0x00010c1ec3e0(puVar1);
  uStack_c0 = uVar7;
  puStack_b8 = (undefined8 *)uVar9;
  uStack_b0 = uVar6;
  func_0x00010c1ec3c0(puVar1);
  func_0x00010c07e880(param_6);
  uVar6 = param_6;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c07f160();
  _objc_release(uVar6);
  if ((int)uVar9 == 0) {
    func_0x000100c2bc40();
    func_0x00010c1c3cc0(puVar1);
  }
  else {
    uVar6 = param_6;
    func_0x00010c249660(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_6;
    func_0x00010c2440e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e180();
    uVar8 = uVar7;
    func_0x000100c2bc40();
    func_0x000107fb9ea4(uVar7,uVar8,uVar10,uVar6);
    func_0x00010c1c3cc0(puVar1);
    _objc_release(uVar9);
    _objc_release(uVar6);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if (0.0 < param_1) {
    dVar11 = 0.0;
    do {
      puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      _CMTimeMakeWithSeconds(&uStack_c0,dVar11,1);
      func_0x00010c297200(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(puVar4);
      dVar11 = dVar11 + 10.0;
    } while (dVar11 < param_1);
  }
  puVar4 = puVar3;
  func_0x00010bf529e0();
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_106d7cd20;
  uStack_a0 = 0x106d7cd30;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bffc4a0();
  puStack_98 = puVar5;
  _objc_initWeak(auStack_c8,param_2);
  _objc_copyWeak(auStack_d8,auStack_c8);
  _objc_retain(puVar3);
  puStack_d0 = puVar4;
  _objc_retain(puVar2);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bfbf180(puVar1);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(puStack_98);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106d8ab34; end: 106d8ad63;  */

void FUN_106d8ab34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = param_3 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_106d8ad40;
  lVar7 = *(long *)(param_3 + 0x20);
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_60 = param_4[2];
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(puVar2);
  if (lVar7 == 0x7fffffffffffffff) goto LAB_106d8ad40;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uVar8 = 0xc2000000;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106d8ad64;
  puStack_b0 = &UNK_11097adc8;
  uStack_78 = *(undefined8 *)(param_3 + 0x58);
  uStack_88 = *(undefined8 *)(param_3 + 0x48);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  lStack_80 = lVar7;
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  uStack_a8 = uVar5;
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  uStack_a0 = uVar6;
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_3 + 0x40);
  uStack_98 = uVar5;
  _objc_retain(uVar6);
  ppuVar3 = &puStack_c8;
  uStack_90 = uVar6;
  _objc_retainBlock();
  puVar2 = (undefined *)0x0;
  if (param_5 == 0) {
LAB_106d8ad00:
    (*(code *)ppuVar3[2])(ppuVar3,puVar2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) goto LAB_106d8ad00;
    uVar6 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c07f160();
    _objc_release(uVar6);
    if ((int)uVar5 == 0) goto LAB_106d8ad00;
    uVar6 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c249660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c2440e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e180();
    uVar5 = uVar8;
    func_0x000100c2bc40();
    func_0x000107fb9efc(uVar8,uVar5,param_2,puVar2,uVar6,ppuVar3);
    _objc_release(uVar4);
    _objc_release(uVar6);
  }
  _objc_release(puVar2);
  _objc_release(ppuVar3);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
LAB_106d8ad40:
  _objc_release(lVar1);
  return;
}



/* Entry: 106d8ad64; end: 106d8aedf;  */

void FUN_106d8ad64(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [48];
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(ulong *)(param_1 + 0x48) < *(ulong *)(param_1 + 0x50)) {
    if (param_2 == 0) {
      param_2 = *(long *)(param_1 + 0x28);
    }
    func_0x00010c1d04c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),param_2,
                        param_2);
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010bf529e0();
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar1 == lVar2) {
      puVar3 = PTR_PTR_1126affb8;
      _objc_alloc();
      if (*(long *)(param_1 + 0x30) == 0) {
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_c0);
      }
      uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      _CMTimeRangeMake(auStack_70,&uStack_90,&uStack_c0);
      uStack_b8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
      uStack_c0 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
      uStack_a8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
      uStack_b0 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
      uStack_98 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
      uStack_a0 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
      func_0x00010c0525a0();
      lVar1 = *(long *)(param_1 + 0x38);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_40 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be031d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106d8aee0; end: 106d8aee7; -[SCGalleryPreviewController _dismissPreview] */

void FUN_106d8aee0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be031d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreviewWithCompletion__11255e610,0);
  return;
}



/* Entry: 106d8aee8; end: 106d8b163; -[SCGalleryPreviewController _dismissPreviewWithCompletion:] */

void FUN_106d8aee8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x1f0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfbd460();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x1e8) != 0) {
    lVar1 = param_1;
    func_0x00010be402e0();
    if ((int)lVar1 == 0) {
      func_0x00010bf84280(PTR_PTR_1126cb718);
      lVar1 = param_1 + 0x1f0;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bfbd3e0();
      _objc_release(lVar1);
      func_0x00010be8cee0(param_1);
    }
    else {
      lVar1 = param_1 + 0x1f0;
      _objc_loadWeakRetained();
      lVar2 = param_1 + 0xa8;
      _objc_loadWeakRetained();
      uVar3 = *(undefined8 *)(param_1 + 0x1e8);
      func_0x00010c10fd00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      func_0x00010bf84b00(uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar5 = *(long *)(param_1 + 0x120);
    _objc_retain(lVar5);
    lVar1 = lVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(undefined8 *)(lVar7 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0xd8);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0899c0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12f0c0(uVar3);
        _objc_release(uVar6);
        _objc_release(uVar3);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    _objc_release(uVar3);
    *(undefined1 *)(param_1 + 0x41) = 0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfbd3e0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c12e1c0(*(undefined8 *)(param_3 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_3 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106d8b1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x38) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106d8b164; end: 106d8b1b3;  */

void FUN_106d8b164(long param_1,undefined8 param_2)

{
  func_0x00010bfbd3e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106d8b1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106d8b1b4; end: 106d8b1bb; -[SCGalleryPreviewController _isEnterTransitionAnimated:] */

uint FUN_106d8b1b4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return param_3 & 1;
}



/* Entry: 106d8b1bc; end: 106d8b1c3; -[SCGalleryPreviewController _isExitTransitionAnimated:] */

ulong FUN_106d8b1bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return param_3 >> 1 & 1;
}



/* Entry: 106d8b1c4; end: 106d8b1cb; -[SCGalleryPreviewController _isPreviewToolbarAnimated:] */

ulong FUN_106d8b1c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return param_3 >> 2 & 1;
}



/* Entry: 106d8b1cc; end: 106d8b277; -[SCGalleryPreviewController _ucoDataFetcher] */

void FUN_106d8b1cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ae560;
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar4);
  _objc_opt_new(puVar1);
  uVar2 = uVar4;
  func_0x00010c27e5e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d8b278; end: 106d8b2af; -[SCGalleryPreviewController _isUcoFeatureEnabledForVideoSnap:] */

bool FUN_106d8b278(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010b5fa088();
  return ((7 < param_3 - 2U && param_3 != 0) && param_3 != 9999) && param_3 != 0xb;
}



/* Entry: 106d8b2b0; end: 106d8b32b; -[SCGalleryPreviewController _removePreviewScopeIfExposed] */

void FUN_106d8b2b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0xa8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106d8b32c; end: 106d8b36f; -[SCGalleryPreviewController _maxVideoDurationSecondAllowedForImporting] */

double FUN_106d8b32c(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  func_0x000107f6fef4(*(undefined8 *)(param_2 + 200));
  lVar1 = *(long *)(param_2 + 200);
  func_0x000109127d28();
  dVar2 = (double)lVar1;
  if ((double)lVar1 <= param_1) {
    dVar2 = param_1;
  }
  return dVar2;
}



/* Entry: 106d8b370; end: 106d8b3c7; -[SCGalleryPreviewController _shouldReadCameraRollImageMetadata:] */

bool FUN_106d8b370(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0fce40();
  if (uVar2 < 0x961) {
    uVar2 = param_3;
    func_0x00010c0fcaa0(param_3);
    bVar1 = uVar2 < 0x961;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106d8b3c8; end: 106d8b40f; -[SCGalleryPreviewController _launchUpsellFlow] */

void FUN_106d8b3c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010bf4b900(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9100);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c251710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x1a0),PTR_s_startUpsellFlowWithContentType_s_112671fe8,1,1
              );
    return;
  }
  return;
}



/* Entry: 106d8b410; end: 106d8b7b3; -[SCGalleryPreviewController _prepareSnapDocEditorForPreview:legacyConfig:captureDate:] */

void FUN_106d8b410(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined4 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c23fe00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd9fe0(param_2,param_3,uVar1,param_5);
  _objc_release(uVar1);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)param_2 == 0) goto LAB_106d8b778;
  if (param_6 != 0) {
    func_0x00010c26f320(param_6);
    lStack_80 = (long)(param_1 * 1000.0);
    puStack_a0 = puVar9;
    param_1 = 1.59149684322395e-314;
    uStack_98 = 0xc0000000;
    pcStack_90 = FUN_106d8b7b4;
    puStack_88 = &UNK_11097ad18;
    func_0x00010c28a040(param_4,param_3,&puStack_a0);
  }
  lVar2 = param_5;
  func_0x00010c242400();
  uVar10 = 2;
  if (lVar2 < 0x5a) {
    uVar11 = lVar2 - 0xb;
    if (uVar11 < 0x3c) {
      if ((1L << (uVar11 & 0x3f) & 0x400000000000006U) != 0) goto LAB_106d8b558;
      if ((1L << (uVar11 & 0x3f) & 0x800000000000021U) != 0) goto LAB_106d8b554;
    }
  }
  else {
    if ((lVar2 != 0x5a) && (lVar2 != 0x76)) {
      if (lVar2 != 0x77) goto LAB_106d8b588;
LAB_106d8b554:
      uVar10 = 1;
    }
LAB_106d8b558:
    uStack_a8 = uVar10;
    puStack_c8 = puVar9;
    param_1 = 1.59149684322395e-314;
    uStack_c0 = 0xc0000000;
    uStack_b8 = 0x106d8b868;
    puStack_b0 = &UNK_11097ae28;
    func_0x00010c28a040(param_4,param_3,&puStack_c8);
  }
LAB_106d8b588:
  lVar2 = param_5;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
LAB_106d8b624:
    lVar4 = param_5;
    func_0x00010c0d32a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar2 = lVar4;
      func_0x00010c15a4a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c277f60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
      }
      else {
        func_0x00010bf0ffa0(&uStack_108,lVar2);
      }
      _CMTimeGetSeconds(&uStack_108);
      lVar5 = lVar2;
      func_0x00010bf0ef80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126bf6f0;
      if (lVar5 != 0) {
        lVar6 = lVar2;
        func_0x00010c277e80(lVar2);
        lVar7 = lVar3;
        func_0x00010c278a00(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar3;
        func_0x00010bf0a460(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d3860(puVar9,param_3,lVar6,lVar7,lVar8,1,(long)(param_1 * 1000.0),0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        _objc_release(lVar7);
        func_0x00010bef9ec0(PTR_PTR_1126bf6f0,param_3,param_4,lVar5,puVar9);
        _objc_release(puVar9);
        _objc_release(lVar5);
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
  }
  else {
    lVar2 = param_5;
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar4;
    func_0x00010c0b4ca0();
    if (lVar2 != 0) {
      puStack_f0 = puVar9;
      param_1 = 1.59149684322395e-314;
      uStack_e8 = 0xc0000000;
      uStack_e0 = 0x106d8b8f4;
      puStack_d8 = &UNK_11097ad18;
      lStack_d0 = lVar2;
      func_0x00010c28a040(param_4,param_3,&puStack_f0);
      _objc_release(lVar4);
      goto LAB_106d8b624;
    }
  }
  _objc_release(lVar4);
LAB_106d8b778:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106d8b7b4; end: 106d8b95f;  */

void FUN_106d8b7b4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfdd660();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126bcf30;
    _objc_alloc_init(PTR_PTR_1126bcf30);
    func_0x00010c216040(param_2);
    _objc_release(puVar2);
  }
  uVar1 = param_2;
  func_0x00010c270d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0c4300();
  _objc_release(uVar1);
  if (uVar3 == 0) {
    uVar1 = param_2;
    func_0x00010c270d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4200();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d8b960; end: 106d8bb5f; -[SCGalleryPreviewController _timelineConfigurationFromVideoProviders:usageType:segmentsEditable:snapSource:] */

void FUN_106d8b960(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c8570;
  _objc_alloc(PTR_PTR_1126c8570);
  func_0x00010c05a540();
  func_0x00010c210200();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x120);
  *(undefined **)(param_1 + 0x120) = puVar3;
  _objc_release(uVar6);
  uVar6 = 0;
  _dispatch_semaphore_create();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      _objc_retain(uVar6);
      func_0x00010bdc8200(param_1);
      _dispatch_semaphore_wait(uVar6,0xffffffffffffffff);
      _objc_release(uVar6);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 106d8bb60; end: 106d8bb67;  */

void FUN_106d8bb60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106d8bb68; end: 106d8bd7b; -[SCGalleryPreviewController _addSegmentForVideoProvider:toTimelineConfiguration:timeRange:snapSource:completion:] */

void FUN_106d8bb68(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2bd7e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d2e0(param_3,param_2,lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0899c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc900(uVar2,param_2,lVar3);
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010bf09f60(uVar4,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = uVar4;
  _objc_release(uVar5);
  lVar3 = param_3;
  func_0x00010c0d9500();
  _objc_release(param_3);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_78,lVar3);
  }
  _objc_release(lVar3);
  uStack_88 = uStack_70;
  uStack_90 = uStack_78;
  uStack_80 = uStack_68;
  uVar4 = param_4;
  func_0x00010c0d9540(param_4,param_2,lVar1,&uStack_90,0,param_6,0,0);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106d8bd7c;
  puStack_b8 = &UNK_1108465d0;
  uStack_b0 = param_5;
  uStack_a8 = uVar4;
  uStack_a0 = param_4;
  uStack_98 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(uVar4);
  _objc_retain(param_5);
  func_0x00010c285d60(uVar4,param_2,&puStack_d0);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106d8bd7c; end: 106d8be3b;  */

void FUN_106d8bd7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106d8be3c;
  puStack_48 = &UNK_1108465d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = uVar3;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  return;
}



/* Entry: 106d8be3c; end: 106d8bfe7;  */

void FUN_106d8be3c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf4d860();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_60,lVar1);
    }
    func_0x00010c209a60(uVar3);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf4d860();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_60,lVar1);
    }
    func_0x00010c1faa00(uVar3);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c27c940();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_60,lVar1);
    }
    func_0x00010c21a5e0(uVar3);
    _objc_release(lVar1);
  }
  puVar2 = PTR_PTR_1126ae558;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar4;
  func_0x00010bfb6cc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19d080(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar3);
  func_0x00010c179260(*(undefined8 *)(param_1 + 0x28));
  func_0x00010befb2c0(*(undefined8 *)(param_1 + 0x30));
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}



/* Entry: 106d8bfe8; end: 106d8c04b; -[SCGalleryPreviewController _removeFirstSegmentFromTimelineConfiguration:] */

void FUN_106d8bfe8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bf6c780(param_3,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d8c04c; end: 106d8c227; -[SCGalleryPreviewController _addToActiveUrlOfVideosInTimelineConfiguration:] */

void FUN_106d8c04c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar3 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x120);
  *(undefined **)(param_1 + 0x120) = puVar11;
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar14 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar1);
        }
        uVar12 = *(undefined8 *)(lStack_128 + lVar15 * 8);
        uVar13 = uVar12;
        func_0x00010bf0b7e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar13;
        func_0x00010c0899c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc900(uVar9,param_2,uVar10);
        _objc_release(uVar10);
        _objc_release(uVar13);
        uVar13 = *(undefined8 *)(param_1 + 0x120);
        func_0x00010bf0b7e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf09f60(uVar13,param_2,uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + 0x120);
        *(undefined8 *)(param_1 + 0x120) = uVar13;
        _objc_release(uVar10);
        _objc_release(uVar12);
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = lVar1;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(uVar9);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c13e280();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)puVar3;
  func_0x00010c0e00e0(puVar3,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar4 == (undefined1 *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar4;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c096c60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5ea0();
    func_0x00010c14de00(puVar11,param_2,&PTR____CFConstantStringClassReference_110db3bb8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106d8c228; end: 106d8c35b; -[SCGalleryPreviewController _globalUcoIDWithParser:] */

void FUN_106d8c228(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  func_0x00010c13e280();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c096c60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5ea0();
    func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110db3bb8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106d8c35c; end: 106d8c477; -[SCGalleryPreviewController progressOverlayViewDidCancel:] */

void FUN_106d8c35c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106d8c42c;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x98),param_2,&puStack_48);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf2f5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf2f5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + 0x1f0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbd3c0();
  _objc_release(param_1);
  return;
}



/* Entry: 106d8c478; end: 106d8c707; -[SCGalleryPreviewController _setSizeOrientationOnLegacyConfig:fromBaseMediaOfSnapDoc:] */

void FUN_106d8c478(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  puVar9 = &uStack_140;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  dVar15 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_6;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 == 0) {
    _objc_release(lVar3);
  }
  else {
    iVar12 = 0;
    dVar15 = *(double *)PTR__CGSizeZero_110347620;
    param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    lVar13 = *plStack_130;
    bVar1 = NAN(dVar15);
    bVar2 = NAN(param_2);
    do {
      lVar14 = 0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(lVar3);
        }
        uVar11 = *(ulong *)(lStack_138 + lVar14 * 8);
        uVar5 = uVar11;
        func_0x00010c08c3a0();
        if ((int)uVar5 == 1) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar11;
          func_0x00010bf0b760();
          if ((int)uVar5 == 5) {
            iVar12 = iVar12 + 1;
            uVar5 = uVar11;
            func_0x00010bf7ee20();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c2a5040();
            if (bVar1 || bVar2) {
              uVar6 = uVar11;
              func_0x00010bf7ee20(uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe0640();
              _objc_release(uVar6);
              _objc_release(uVar5);
            }
            else {
              dVar15 = (double)(uVar6 & 0xffffffff);
              uVar6 = uVar11;
              func_0x00010bf7ee20();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x00010bfe0640();
              param_2 = (double)(uVar7 & 0xffffffff);
              func_0x00010c1c5240(param_5);
              _objc_release(uVar6);
              _objc_release(uVar5);
              func_0x00010c0ed100();
              func_0x00010c1c4ca0(param_5);
            }
          }
          _objc_release(uVar11);
        }
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      lVar4 = lVar3;
      puVar9 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
    _objc_release(lVar3);
    if (1 < iVar12) {
      puVar9 = (undefined8 *)0x0;
      func_0x00010c1c4ca0(param_5);
    }
  }
  func_0x00010c0c6700(param_5);
  dVar16 = 0.0;
  if (dVar15 != 0.0) {
    if (param_2 == 0.0) {
      dVar16 = INFINITY;
    }
    else {
      dVar16 = dVar15 / param_2;
    }
  }
  func_0x00010c1c40c0(dVar16,param_5);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(puVar9);
  puVar8 = (undefined1 *)puVar9;
  func_0x000107e61fac();
  puVar10 = (undefined1 *)puVar9;
  if ((int)puVar8 != 0) {
    puVar8 = (undefined1 *)puVar9;
    func_0x000107e62d94(puVar9,5000);
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 != (undefined1 *)0x0) {
      _objc_retain(puVar8);
      _objc_release(puVar9);
      puVar10 = puVar8;
    }
    _objc_release(puVar8);
  }
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106d8c708; end: 106d8c793; -[SCGalleryPreviewController _snapDocCompatibleForPreview:] */

void FUN_106d8c708(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000107e61fac();
  lVar2 = param_3;
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x000107e62d94(param_3,5000);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_retain(lVar1);
      _objc_release(param_3);
      lVar2 = lVar1;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106d8c794; end: 106d8c853; -[SCGalleryPreviewController _getBaseMediaPlaybackLayer:snapDocEditor:] */

void FUN_106d8c794(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010c09e180(PTR_PTR_1126affe8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010c0ff580(param_4,param_2,puVar1,&PTR___NSConcreteGlobalBlock_11097ae78);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_4;
    func_0x00010c0ff640(param_4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106d8c854; end: 106d8c897;  */

bool FUN_106d8c854(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 106d8c898; end: 106d8c9c3; -[SCGalleryPreviewController _getPreviewConfigRecordedVideoFuture:snapDocEditor:] */

void FUN_106d8c898(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  func_0x00010be1d2c0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0c3fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0c6f80(param_4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106d8c9c4;
    puStack_50 = &UNK_11086f208;
    _objc_retain(param_1);
    uVar4 = uVar3;
    lStack_48 = param_1;
    func_0x00010c0b8600(uVar3,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_48);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106d8c9c4; end: 106d8ca63;  */

void FUN_106d8c9c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = PTR_PTR_1126b5fb0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0c3fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c4bc0();
  func_0x00010c0613a0((double)(uVar3 & 0xffffffff) / 1000.0,puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d8ca64; end: 106d8cb47; -[SCGalleryPreviewController _getPreviewConfigImageFuture:snapDocEditor:] */

void FUN_106d8ca64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010be1d2c0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0c3fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0c7240(param_4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106d8cb48; end: 106d8cb57;  */

void FUN_106d8cb48(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_sc_imageWithData__112630e30,param_2);
  return;
}



/* Entry: 106d8cb58; end: 106d8cb87; -[SCGalleryPreviewController snapEditorDidStartSendWithSnapDoc:] */

void FUN_106d8cb58(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106d8cb88; end: 106d8cdff; -[SCGalleryPreviewController snapEditorDidDismissWithDidSend:didPost:postedClientIds:postedStoryIds:precaptureLensIds:isCrossPostingSpotlightToStories:] */

void FUN_106d8cb88(long param_1,undefined8 param_2,int param_3,int param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  
  uVar8 = *(ulong *)(param_1 + 0x1e0);
  _objc_retain(uVar8);
  uVar2 = uVar8;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar8;
  func_0x00010c2440e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar8;
  func_0x00010c0792e0();
  lVar9 = *(long *)(param_1 + 0x48);
  _objc_retain(lVar9);
  if (param_3 == 0) {
    bVar11 = false;
    lVar10 = 0;
  }
  else {
    uVar3 = uVar4;
    func_0x00010c08fa60();
    lVar10 = 0;
    bVar11 = false;
    if ((uVar3 != 0 && (uVar2 & 1) == 0) && (lVar9 != 0)) {
      lVar6 = *(long *)(param_1 + 0x1d8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar6;
      func_0x00010c12f620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      bVar11 = true;
    }
  }
  lVar6 = *(long *)(param_1 + 0x160);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x160));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  _objc_release(uVar7);
  *(undefined1 *)(param_1 + 0x41) = 0;
  bVar1 = false;
  if (lVar10 != 0) {
    bVar1 = bVar11;
  }
  if (bVar1) {
    func_0x00010bebafa0(param_1);
  }
  lVar6 = param_1 + 0x1f8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar6 == 0) goto LAB_106d8cdc0;
  if (param_3 == 0) {
    if (param_4 != 0) {
      uVar2 = param_1 + 0x1f8;
      _objc_loadWeakRetained();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        param_1 = param_1 + 0x1f8;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf78540();
        goto LAB_106d8cdb8;
      }
    }
    param_1 = param_1 + 0x1f8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf72d00();
  }
  else {
    param_1 = param_1 + 0x1f8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7b520();
  }
LAB_106d8cdb8:
  _objc_release(param_1);
LAB_106d8cdc0:
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 106d8ce00; end: 106d8cf27; -[SCGalleryPreviewController _showSnapEditorMemorySaveDialogWithSaveRenderResponse:originalSnapId:originalEntryId:] */

void FUN_106d8ce00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106d8cf28;
  puStack_68 = &UNK_11089eec8;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_80;
  _objc_retainBlock(ppuVar1);
  FUN_106d8e92c(0x3ff0000000000000,0,0,0,ppuVar1,&PTR___NSConcreteGlobalBlock_11097aeb8,
                *(undefined8 *)(param_1 + 8),0,0,0,0,*(undefined8 *)(param_1 + 0x130),
                *(undefined8 *)(param_1 + 0x138),0,*(undefined8 *)(param_1 + 0x90));
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d8cf28; end: 106d8cf47;  */

void FUN_106d8cf28(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be98f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__saveEditedSnapDocToMemoryWithRe_112583d68,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x38));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106d8cf48; end: 106d8d123; -[SCGalleryPreviewController _saveEditedSnapDocToMemoryWithRenderResponse:snapId:entryId:] */

void FUN_106d8cf48(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + 0x1d0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = param_5;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)(param_1 + 0x178);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0xf8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c13cb40(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106d8d124;
      puStack_90 = &UNK_1108fe130;
      _objc_retain(lVar1);
      lStack_88 = lVar1;
      uStack_80 = uVar3;
      lStack_78 = lVar2;
      uStack_70 = uVar4;
      uStack_68 = uVar5;
      _objc_retain(uVar5);
      _objc_retain(uVar4);
      _objc_retain(lVar2);
      uVar7 = uVar3;
      _objc_retain(uVar3);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(lVar6,param_2,&puStack_a8,uVar7);
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
      _objc_release(lStack_78);
      _objc_release(uStack_80);
      _objc_release(lStack_88);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(lVar2);
      _objc_release(uVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d8d124; end: 106d8d22f;  */

void FUN_106d8d124(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) && (param_2 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c14a440(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = uVar3;
    _objc_retain(uVar3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106d8d230; end: 106d8d26f;  */

void FUN_106d8d230(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c289fa0();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c128b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_reloadDataAfterMutating_112627d00);
      return;
    }
  }
  return;
}



/* Entry: 106d8d270; end: 106d8d2e7; -[SCGalleryPreviewController snapEditorDidSaveMemoriesWithEntryId:snapId:] */

void FUN_106d8d270(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c289fa0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106d8d2e8; end: 106d8d363; -[SCGalleryPreviewController _canSnapEditorSupportMemoriesEditWithSnapDoc:legacyConfig:] */

undefined8 FUN_106d8d2e8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  func_0x00010bf8c3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfdc300();
  if ((uVar1 & 1) == 0) {
    func_0x00010beb3840(param_1,param_2,param_4);
  }
  else {
    param_1 = 1;
  }
  _objc_release(param_3);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106d8d364; end: 106d8d3eb; -[SCGalleryPreviewController _shouldEnableSnapEditorMemories:] */

undefined8 FUN_106d8d364(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c242400();
  if ((lVar1 == 0xb) && (lVar1 = param_3, func_0x00010c243400(), lVar1 == 7)) {
    uVar2 = *(undefined8 *)(param_1 + 0x158);
    func_0x00010c27d8a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c240b60();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106d8d3ec; end: 106d8d41f; -[SCGalleryPreviewController _snapEditorEditMode:] */

void FUN_106d8d3ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c6c20(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,param_3 != 0);
  return;
}



/* Entry: 106d8d420; end: 106d8d427; -[SCGalleryPreviewController previewViewController] */

undefined8 FUN_106d8d420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 106d8d428; end: 106d8d43f; -[SCGalleryPreviewController delegate] */

void FUN_106d8d428(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d8d440; end: 106d8d44b; -[SCGalleryPreviewController setDelegate:] */

void FUN_106d8d440(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1f0,param_3);
  return;
}



/* Entry: 106d8d44c; end: 106d8d463; -[SCGalleryPreviewController previewWorkflowDelegate] */

void FUN_106d8d44c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d8d464; end: 106d8d46f; -[SCGalleryPreviewController setPreviewWorkflowDelegate:] */

void FUN_106d8d464(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1f8,param_3);
  return;
}



/* Entry: 106d8d470; end: 106d8d74b; -[SCGalleryPreviewController .cxx_destruct] */

void FUN_106d8d470(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1f8);
  _objc_destroyWeak(param_1 + 0x1f0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106d8d74c; end: 106d8df1b; -[SCGalleryPreviewSaveEditsThumbnailView initWithFrame:aspectRatio:thumbnailFuture:isCircularSpectacles:videoNoSoundLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106d8d74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             double param_5,undefined8 param_6,undefined8 param_7,long param_8,int param_9,
             undefined **param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined **ppuVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  _objc_retain(param_10);
  puStack_f8 = PTR_PTR_1126f6d58;
  puVar1 = &uStack_100;
  puVar3 = (undefined8 *)PTR_s_initWithFrame__1125e2948;
  uStack_100 = param_6;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4);
  ppuVar20 = param_10;
  if (puVar1 != (undefined8 *)0x0) {
    lVar19 = (long)_DAT_11275dc08;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined ***)((long)puVar1 + lVar19) = param_10;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4020000000000000);
    _objc_release(puVar3);
    dVar21 = 0.5625;
    if (0.5625 <= param_5) {
      dVar21 = param_5;
    }
    dVar22 = 1.0;
    if (param_9 == 0) {
      dVar22 = dVar21;
    }
    *(double *)((long)puVar1 + (long)_DAT_11275dc0c) = dVar22;
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(puVar4);
    puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    puStack_c0 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    puStack_b8 = puVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    puStack_b0 = puVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar17);
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
    _objc_release(puVar3);
    _objc_release(puVar5);
    if (param_9 != 0) {
      puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar17 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      _objc_release(puVar17);
      func_0x00010befbb60(puVar1);
      func_0x00010c219b60(puVar5);
      puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar6 = puVar5;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      puStack_e0 = puVar7;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar5;
      puStack_d8 = puVar10;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar1;
      func_0x00010bf1ff80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar5;
      puStack_d0 = puVar13;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar1;
      func_0x00010c2793a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c8 = puVar16;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar17);
      _objc_release(puVar18);
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(puVar11);
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    puVar5 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    func_0x00010c24dbc0();
    func_0x00010befbb60(puVar4);
    func_0x00010c182220(puVar4);
    func_0x00010c219b60(puVar5);
    puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf34860(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    puStack_f0 = puVar9;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010bf348e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_e8 = puVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar17);
    _objc_release(puVar15);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_initWeak(&uStack_108,puVar1);
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_106d8df1c;
    puStack_128 = &UNK_110859d38;
    ppuVar20 = &puStack_140;
    puVar3 = &uStack_108;
    _objc_copyWeak(auStack_110);
    _objc_retain(puVar5);
    puVar17 = puVar4;
    puStack_120 = puVar5;
    _objc_retain(puVar4);
    puStack_118 = puVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_8);
    _objc_release(puVar17);
    _objc_release(puStack_118);
    _objc_release(puStack_120);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(&uStack_108);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar20 + 6);
  _objc_destroyWeak(&uStack_108);
  __Unwind_Resume();
  _objc_retain(puVar3);
  lVar19 = param_8 + 0x30;
  _objc_loadWeakRetained();
  if (lVar19 != 0) {
    func_0x00010c2558c0(*(undefined8 *)(param_8 + 0x20));
    func_0x00010c12c960(*(undefined8 *)(param_8 + 0x20));
    if (puVar3 != (undefined8 *)0x0) {
      func_0x00010c1a9f00(*(undefined8 *)(param_8 + 0x28));
    }
  }
  _objc_release(lVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return puVar3;
}



/* Entry: 106d8df1c; end: 106d8df87;  */

void FUN_106d8df1c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
    if (param_2 != 0) {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x28));
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d8df88; end: 106d8e433; -[SCGalleryPreviewSaveEditsThumbnailView initWithFrame:aspectRatio:previewBlob:isLaguna:userSession:captionDataProvider:videoNoSoundLogger:videoTrackingServices:contentDeliveryServices:stickerInjector:creativeToolsABProvider:itemViewService:imageProcessRenderingSessionFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106d8df88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
             int param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_c8 = PTR_PTR_1126f6d58;
  puVar1 = &uStack_d0;
  uStack_d0 = param_6;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar16 = (long)_DAT_11275dc08;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined8 *)((long)puVar1 + lVar16) = param_12;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4020000000000000);
    _objc_release(puVar3);
    uVar2 = 0x3ff0000000000000;
    if (param_9 == 0) {
      uVar2 = param_5;
    }
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275dc0c) = uVar2;
    puVar4 = PTR_PTR_1126d2678;
    _objc_alloc();
    func_0x00010c039740();
    lVar16 = (long)_DAT_11275dc10;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar4;
    _objc_release(uVar2);
    if (param_9 != 0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar16));
      _objc_release(puVar4);
    }
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar16));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar2;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar8;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar11;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar5);
    func_0x00010c0fe360(*(undefined8 *)((long)puVar1 + lVar16));
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar1;
  }
  ___stack_chk_fail();
  return param_8;
}



/* Entry: 106d8e434; end: 106d8e44b; -[SCGalleryPreviewSaveEditsThumbnailView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d8e434(void)

{
  return;
}



/* Entry: 106d8e44c; end: 106d8e4c3; -[SCGalleryPreviewSaveEditsThumbnailView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d8e44c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + _DAT_11275dc10));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275dc08);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e760();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f6d58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106d8e4c4; end: 106d8e4d3; -[SCGalleryPreviewSaveEditsThumbnailView aspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d8e4c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275dc0c);
}



/* Entry: 106d8e4d4; end: 106d8e513; -[SCGalleryPreviewSaveEditsThumbnailView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d8e4d4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275dc08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275dc10,0);
  return;
}



/* Entry: 106d8e514; end: 106d8e8e3;  */

void FUN_106d8e514(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  unkuint9 Var1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126af4d8;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85c78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf547e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126af4e0;
  func_0x00010bf4c880(0,0,0x4020000000000000,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d2680;
  _objc_alloc();
  func_0x00010c013ee0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1);
  _objc_release(param_4);
  _objc_release(param_2);
  puVar6 = PTR_PTR_1126af4e0;
  func_0x000106d8f8bc();
  Var1 = (unkuint9)param_2;
  func_0x000106d8f8bc();
  func_0x00010bf4c880(0x4020000000000000,(double)(unkint9)Var1,0x4020000000000000,(double)param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db2cf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2cf8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126af180;
  _objc_retain(param_5);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  puVar9 = PTR_PTR_1126af180;
  ppuVar8 = &PTR____CFConstantStringClassReference_110e85c58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c58,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  func_0x00010c160fc0(puVar9);
  puVar10 = PTR_PTR_1126af4f8;
  _objc_alloc(PTR_PTR_1126af4f8);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003660(puVar10);
  _objc_release(puVar12);
  _objc_release(puVar11);
  func_0x00010c160fc0(puVar10);
  puVar11 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236180();
  _objc_release(puVar11);
  (**(code **)(param_6 + 0x10))(param_6);
  _objc_release(param_6);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(ppuVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106d8e8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar3 + 0x20) + 0x10))(*(long *)(puVar3 + 0x20),1);
  return;
}



/* Entry: 106d8e8e4; end: 106d8e903;  */

void FUN_106d8e8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d8e8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 106d8e904; end: 106d8e92b;  */

void FUN_106d8e904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106d8e92c; end: 106d8ee17;  */

void FUN_106d8e92c(undefined8 param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15)

{
  unkuint9 Var1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puVar3 = PTR_PTR_1126af4d8;
  _objc_retain(param_6);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85c78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf547e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126af4e0;
  func_0x00010bf4c880(0,0,0x4020000000000000,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126d2680;
    _objc_alloc(PTR_PTR_1126d2680);
    func_0x00010c013ec0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1);
    puVar11 = PTR_PTR_1126af4e0;
    puVar6 = puVar5;
    func_0x000106d8f8bc();
    Var1 = ZEXT89(puVar6);
    func_0x000106d8f8bc();
    func_0x00010bf4c880(0x4020000000000000,(double)(unkint9)Var1,0x4020000000000000,(double)puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85c38;
  if (param_4 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db2cf8;
  }
  func_0x00010bcbeaa8(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010c160fc0(puVar5);
  puVar6 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85c58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c58,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010c160fc0(puVar6);
  puVar7 = PTR_PTR_1126af4f8;
  _objc_alloc(PTR_PTR_1126af4f8);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a120(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003660(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c160fc0(puVar7);
  puVar8 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236180();
  _objc_release(puVar8);
  (**(code **)(param_6 + 0x10))(param_6);
  _objc_release(param_6);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106d8ee24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),1);
    return;
  }
  return;
}



/* Entry: 106d8ee18; end: 106d8ee37;  */

void FUN_106d8ee18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d8ee24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 106d8ee38; end: 106d8ee5f;  */

void FUN_106d8ee38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106d8ee60; end: 106d8f2ab;  */

void FUN_106d8ee60(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  unkuint9 Var1;
  undefined **ppuVar2;
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
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126af4d8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85c78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf547e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126af4e0;
  func_0x00010bf4c880(0,0,0x4020000000000000,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d2680;
  _objc_alloc();
  func_0x00010c013ee0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar6 = PTR_PTR_1126af4e0;
  func_0x000106d8f8bc();
  Var1 = (unkuint9)param_2;
  func_0x000106d8f8bc();
  func_0x00010bf4c880(0x4020000000000000,(double)(unkint9)Var1,0x4020000000000000,(double)param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85c18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c18,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010c160fc0(puVar7);
  puVar8 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85c38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c38,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010c160fc0(puVar8);
  puVar9 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85c58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c58,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010c160fc0(puVar9);
  puVar10 = PTR_PTR_1126af4f8;
  _objc_alloc(PTR_PTR_1126af4f8);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003660(puVar10);
  _objc_release(puVar12);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236180();
  _objc_release(puVar11);
  (**(code **)(param_5 + 0x10))(param_5);
  _objc_release(param_5);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)(puVar3 + 0x20);
  if (lVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106d8f2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 0x10))(lVar13,0);
    return;
  }
  return;
}



/* Entry: 106d8f2ac; end: 106d8f2f3;  */

void FUN_106d8f2ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106d8f2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 106d8f2f4; end: 106d8f31b;  */

void FUN_106d8f2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106d8f31c; end: 106d8f84b;  */

void FUN_106d8f31c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined8 param_13)

{
  unkuint9 Var1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  puVar3 = PTR_PTR_1126af4d8;
  _objc_retain(param_12);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85c78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf547e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126af4e0;
  func_0x00010bf4c880(0,0,0x4020000000000000,0,PTR_PTR_1126af4e0);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126d2680;
    _objc_alloc(PTR_PTR_1126d2680);
    func_0x00010c013ec0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1);
    puVar12 = PTR_PTR_1126af4e0;
    puVar6 = puVar5;
    func_0x000106d8f8bc();
    Var1 = ZEXT89(puVar6);
    func_0x000106d8f8bc();
    func_0x00010bf4c880(0x4020000000000000,(double)(unkint9)Var1,0x4020000000000000,(double)puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85c18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c18,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_11);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010c160fc0(puVar5);
  puVar6 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85c38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c38,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_11);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010c160fc0(puVar6);
  puVar7 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85c58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c58,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_11);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010c160fc0(puVar7);
  puVar8 = PTR_PTR_1126af4f8;
  _objc_alloc(PTR_PTR_1126af4f8);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a120(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003660(puVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236180();
  _objc_release(puVar9);
  (**(code **)(param_12 + 0x10))(param_12);
  _objc_release(param_12);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_11);
  _objc_release(puVar6);
  _objc_release(param_11);
  _objc_release(puVar5);
  _objc_release(param_11);
  _objc_release(param_11);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)(param_2 + 0x20);
  if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106d8f85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar11 + 0x10))(lVar11,0);
    return;
  }
  return;
}



/* Entry: 106d8f84c; end: 106d8f893;  */

void FUN_106d8f84c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106d8f85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 106d8f894; end: 106d8f91f;  */

void FUN_106d8f894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106d8f920; end: 106d8fa0f; -[SCMemoriesPreviewPresenterServiceProvider provide] */

void FUN_106d8f920(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126d2688;
  _objc_alloc(PTR_PTR_1126d2688);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02aae0(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d8fa10; end: 106d8fa4f;  */

void FUN_106d8fa10(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d8fa50; end: 106d904af; -[SCMemoriesPreviewPresenterServiceProvider _memoriesPreviewPresentingBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d8fa50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
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
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  undefined8 uStack_220;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_160;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_11275dc18;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar32;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar32);
  puVar2 = PTR_PTR_1126d2690;
  _objc_alloc();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_11275dc1c;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar32;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_11275dc54;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar33;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_11275dc20;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar34;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_11275dc24;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar35;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar36 = 0;
  }
  else {
    lVar36 = param_1 + _DAT_11275dc48;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar36;
  func_0x00010c0c88c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    lVar37 = 0;
  }
  else {
    uStack_a0 = *(undefined8 *)(param_1 + _DAT_11275dca8);
    _objc_retain();
    uStack_a8 = param_1 + _DAT_11275dca4;
    _objc_loadWeakRetained();
    uStack_b0 = param_1 + _DAT_11275dc28;
    _objc_loadWeakRetained();
    uStack_b8 = param_1 + _DAT_11275dc2c;
    _objc_loadWeakRetained();
    uStack_c0 = param_1 + _DAT_11275dc30;
    _objc_loadWeakRetained();
    lVar37 = param_1 + _DAT_11275dc34;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar37;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_1 + _DAT_11275dc3c;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar38;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_d8 = 0;
    lVar39 = 0;
  }
  else {
    uStack_d8 = param_1 + _DAT_11275dc40;
    _objc_loadWeakRetained();
    lVar39 = param_1 + _DAT_11275dc38;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar39;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_e8 = 0;
    lVar40 = 0;
  }
  else {
    uStack_e8 = param_1 + _DAT_11275dc44;
    _objc_loadWeakRetained();
    lVar40 = param_1 + _DAT_11275dc4c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar40;
  func_0x00010c15a860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar41 = 0;
  }
  else {
    lVar41 = param_1 + _DAT_11275dc50;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar41;
  func_0x00010c0c64e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_f8 = 0;
    lVar42 = 0;
  }
  else {
    uStack_f8 = param_1 + _DAT_11275dc58;
    _objc_loadWeakRetained();
    lVar42 = param_1 + _DAT_11275dc5c;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar42;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar43 = 0;
  }
  else {
    lVar43 = param_1 + _DAT_11275dc60;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar43;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_138 = 0;
    lVar44 = 0;
  }
  else {
    uStack_138 = *(undefined8 *)(param_1 + _DAT_11275dcac);
    _objc_retain();
    lVar44 = param_1 + _DAT_11275dc14;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar44;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar45 = 0;
  }
  else {
    lVar45 = param_1 + _DAT_11275dc6c;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar45;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_128 = 0;
    uStack_148 = 0;
    uStack_200 = 0;
    lVar46 = 0;
  }
  else {
    uStack_148 = param_1 + _DAT_11275dc70;
    _objc_loadWeakRetained();
    uStack_200 = *(undefined8 *)(param_1 + _DAT_11275dcb0);
    _objc_retain();
    uStack_128 = param_1 + _DAT_11275dcb8;
    _objc_loadWeakRetained();
    lVar46 = param_1 + _DAT_11275dc68;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar46;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar47 = 0;
  }
  else {
    lVar47 = param_1 + _DAT_11275dc74;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar47;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar48 = 0;
  }
  else {
    lVar48 = param_1 + _DAT_11275dc78;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar48;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar49 = 0;
  }
  else {
    lVar49 = param_1 + _DAT_11275dc7c;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar49;
  func_0x00010c2400a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_208 = 0;
    uStack_160 = 0;
    lVar50 = 0;
  }
  else {
    uStack_160 = param_1 + _DAT_11275dc80;
    _objc_loadWeakRetained();
    uStack_208 = param_1 + _DAT_11275dc84;
    _objc_loadWeakRetained();
    lVar50 = param_1 + _DAT_11275dc88;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar50;
  func_0x00010c0ec340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_220 = 0;
    lVar51 = 0;
  }
  else {
    uStack_220 = param_1 + _DAT_11275dc98;
    _objc_loadWeakRetained();
    lVar51 = param_1 + _DAT_11275dc8c;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar51;
  func_0x00010c27e600();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  FUN_106d904b0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  FUN_106d904b0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar52 = 0;
  }
  else {
    lVar52 = param_1 + _DAT_11275dc94;
    _objc_loadWeakRetained();
  }
  lVar27 = lVar52;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar53 = 0;
  }
  else {
    lVar53 = param_1 + _DAT_11275dc9c;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar53;
  func_0x00010c270e80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar54 = 0;
  }
  else {
    lVar54 = param_1 + _DAT_11275dc64;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar54;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar55 = 0;
  }
  else {
    lVar55 = param_1 + _DAT_11275dca0;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar55;
  func_0x00010c1308e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar56 = 0;
  }
  else {
    lVar56 = param_1 + _DAT_11275dcb4;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar56;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar57 = 0;
    param_1 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_11275dcbc;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_11275dcc0;
    _objc_loadWeakRetained();
  }
  func_0x00010bff85e0(puVar2,param_2,lVar3,lVar4,lVar5,lVar6,lVar1,lVar7,uStack_a0,uStack_a8,
                      uStack_b0,uStack_b8,uStack_c0,lVar8,lVar9,uStack_d8,lVar10,uStack_e8,lVar11,
                      lVar12,uStack_f8,lVar13,lVar14,uStack_138,lVar15,lVar16,uStack_148,uStack_200,
                      uStack_128,lVar17,lVar18,lVar19,lVar20,uStack_160,uStack_208,lVar21,uStack_220
                      ,lVar22,lVar24,lVar26,lVar27,lVar28,lVar29,lVar30,lVar31,lVar57,param_1);
  _objc_release(uStack_200);
  _objc_release(param_1);
  _objc_release(lVar57);
  _objc_release(lVar31);
  _objc_release(lVar56);
  _objc_release(lVar30);
  _objc_release(lVar55);
  _objc_release(lVar29);
  _objc_release(lVar54);
  _objc_release(lVar28);
  _objc_release(lVar53);
  _objc_release(lVar27);
  _objc_release(lVar52);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar51);
  _objc_release(uStack_220);
  _objc_release(lVar21);
  _objc_release(lVar50);
  _objc_release(uStack_208);
  _objc_release(uStack_160);
  _objc_release(lVar20);
  _objc_release(lVar49);
  _objc_release(lVar19);
  _objc_release(lVar48);
  _objc_release(lVar18);
  _objc_release(lVar47);
  _objc_release(lVar17);
  _objc_release(lVar46);
  _objc_release(uStack_128);
  _objc_release(uStack_138);
  _objc_release(uStack_148);
  _objc_release(lVar16);
  _objc_release(lVar45);
  _objc_release(lVar15);
  _objc_release(lVar44);
  _objc_release(lVar14);
  _objc_release(lVar43);
  _objc_release(lVar13);
  _objc_release(lVar42);
  _objc_release(uStack_f8);
  _objc_release(lVar12);
  _objc_release(lVar41);
  _objc_release(lVar11);
  _objc_release(lVar40);
  _objc_release(uStack_e8);
  _objc_release(lVar10);
  _objc_release(lVar39);
  _objc_release(uStack_d8);
  _objc_release(lVar9);
  _objc_release(lVar38);
  _objc_release(lVar8);
  _objc_release(lVar37);
  _objc_release(uStack_c0);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a8);
  _objc_release(uStack_a0);
  _objc_release(lVar7);
  _objc_release(lVar36);
  _objc_release(lVar6);
  _objc_release(lVar35);
  _objc_release(lVar5);
  _objc_release(lVar34);
  _objc_release(lVar4);
  _objc_release(lVar33);
  _objc_release(lVar3);
  _objc_release(lVar32);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d904b0; end: 106d904d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d904b0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275dc90);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d904d4; end: 106d9070f; -[SCMemoriesPreviewPresenterServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d904d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275dcc0);
  _objc_destroyWeak(param_1 + _DAT_11275dcbc);
  _objc_destroyWeak(param_1 + _DAT_11275dcb8);
  _objc_destroyWeak(param_1 + _DAT_11275dcb4);
  _objc_storeStrong(param_1 + _DAT_11275dcb0,0);
  _objc_storeStrong(param_1 + _DAT_11275dcac,0);
  _objc_storeStrong(param_1 + _DAT_11275dca8,0);
  _objc_destroyWeak(param_1 + _DAT_11275dca4);
  _objc_destroyWeak(param_1 + _DAT_11275dca0);
  _objc_destroyWeak(param_1 + _DAT_11275dc9c);
  _objc_destroyWeak(param_1 + _DAT_11275dc98);
  _objc_destroyWeak(param_1 + _DAT_11275dc94);
  _objc_destroyWeak(param_1 + _DAT_11275dc90);
  _objc_destroyWeak(param_1 + _DAT_11275dc8c);
  _objc_destroyWeak(param_1 + _DAT_11275dc88);
  _objc_destroyWeak(param_1 + _DAT_11275dc84);
  _objc_destroyWeak(param_1 + _DAT_11275dc80);
  _objc_destroyWeak(param_1 + _DAT_11275dc7c);
  _objc_destroyWeak(param_1 + _DAT_11275dc78);
  _objc_destroyWeak(param_1 + _DAT_11275dc74);
  _objc_destroyWeak(param_1 + _DAT_11275dc70);
  _objc_destroyWeak(param_1 + _DAT_11275dc6c);
  _objc_destroyWeak(param_1 + _DAT_11275dc68);
  _objc_destroyWeak(param_1 + _DAT_11275dc64);
  _objc_destroyWeak(param_1 + _DAT_11275dc60);
  _objc_destroyWeak(param_1 + _DAT_11275dc5c);
  _objc_destroyWeak(param_1 + _DAT_11275dc58);
  _objc_destroyWeak(param_1 + _DAT_11275dc54);
  _objc_destroyWeak(param_1 + _DAT_11275dc50);
  _objc_destroyWeak(param_1 + _DAT_11275dc4c);
  _objc_destroyWeak(param_1 + _DAT_11275dc48);
  _objc_destroyWeak(param_1 + _DAT_11275dc44);
  _objc_destroyWeak(param_1 + _DAT_11275dc40);
  _objc_destroyWeak(param_1 + _DAT_11275dc3c);
  _objc_destroyWeak(param_1 + _DAT_11275dc38);
  _objc_destroyWeak(param_1 + _DAT_11275dc34);
  _objc_destroyWeak(param_1 + _DAT_11275dc30);
  _objc_destroyWeak(param_1 + _DAT_11275dc2c);
  _objc_destroyWeak(param_1 + _DAT_11275dc28);
  _objc_destroyWeak(param_1 + _DAT_11275dc24);
  _objc_destroyWeak(param_1 + _DAT_11275dc20);
  _objc_destroyWeak(param_1 + _DAT_11275dc1c);
  _objc_destroyWeak(param_1 + _DAT_11275dc18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275dc14);
  return;
}



/* Entry: 106d90710; end: 106d90f9f; -[SCMemoriesPreviewPresentingBuilder initWithBlizzardLogger:cachingMediaManager:dataObjectContext:encryptedContentManager:userSession:memoriesEngagementLogger:previewScopeExposer:previewScopeBuilderServices:ucoMemoriesServices:spectaclesAuxiliaryContentServices:videoImportServices:snapDocManager:circumstanceEngine:complianceEngine:activeVideoPaths:previewVideoProviderServices:musicSelectionLoader:memoriesMediaRetriever:ucoServices:cameraConfiguration:stickerInjector:mediaImportEditorScopeExposer:applicationLifecycleEvents:previewABProvider:snapEditorTweakServices:snapEditorScopeExposer:snapEditorScopeServices:snapDocEditorFactory:snapchatterFetcher:memoriesExperimentService:memoriesSnapDocEncryptionManager:memoriesCloudFSServices:deckServices:checkInOptionFetcher:contentPostSendUpsellServices:ucoDataStore:userLocationPermissionManager:locationProvider:memoriesEncryptedDatabase:tinsel:creativeToolsABProvider:imageProcessRenderingSessionFactory:memoriesMergedDataSource:memoriesSaveServices:previewRewriteSnapRendererServices:] */

undefined8 *
FUN_106d90710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined8 param_45,undefined8 param_46,undefined8 param_47)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  puStack_70 = PTR_PTR_1126f6d60;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_9);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_47;
    _objc_release(uVar2);
  }
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106d90fa0; end: 106d910ff; -[SCMemoriesPreviewPresentingBuilder buildMemoriesPreviewControllerWithDelegate:chatSendDelegate:] */

void FUN_106d90fa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar7 = PTR_PTR_1126d2630;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  lVar8 = param_1 + 0x38;
  _objc_loadWeakRetained();
  func_0x00010bff85e0(puVar7,param_2,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,lVar8,
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                      *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),
                      *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                      *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                      *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                      *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                      *(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8),
                      *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x108),
                      *(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                      *(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),
                      *(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x138),
                      *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148));
  _objc_release(lVar8);
  func_0x00010c18b5e0(puVar7,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1e24c0(puVar7,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106d91100; end: 106d91103; -[SCMemoriesPreviewPresentingBuilder buildMemoriesPreviewPresenterWithDelegate:chatSendDelegate:] */

void FUN_106d91100(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf22430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_buildMemoriesPreviewControllerWi_1125a62b0);
  return;
}



/* Entry: 106d91104; end: 106d91333; -[SCMemoriesPreviewPresentingBuilder .cxx_destruct] */

void FUN_106d91104(long param_1)

{
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 106d91334; end: 106d91423; -[SCMemoriesPreviewPresentingServiceProvider provide] */

void FUN_106d91334(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126d2698;
  _objc_alloc(PTR_PTR_1126d2698);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ab40(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d91424; end: 106d91463;  */

void FUN_106d91424(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d91464; end: 106d91ec3; -[SCMemoriesPreviewPresentingServiceProvider _memoriesPreviewPresentingBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d91464(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
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
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  undefined8 uStack_220;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_160;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_11275dd80;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar32;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar32);
  puVar2 = PTR_PTR_1126d2690;
  _objc_alloc();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_11275dd84;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar32;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_11275ddbc;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar33;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_11275dd88;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar34;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_11275dd8c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar35;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar36 = 0;
  }
  else {
    lVar36 = param_1 + _DAT_11275dd9c;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar36;
  func_0x00010c0c88c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    lVar37 = 0;
  }
  else {
    uStack_a0 = *(undefined8 *)(param_1 + _DAT_11275de10);
    _objc_retain();
    uStack_a8 = param_1 + _DAT_11275de0c;
    _objc_loadWeakRetained();
    uStack_b0 = param_1 + _DAT_11275dd90;
    _objc_loadWeakRetained();
    uStack_b8 = param_1 + _DAT_11275dd94;
    _objc_loadWeakRetained();
    uStack_c0 = param_1 + _DAT_11275dd98;
    _objc_loadWeakRetained();
    lVar37 = param_1 + _DAT_11275dda0;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar37;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_1 + _DAT_11275dda8;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar38;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_d8 = 0;
    lVar39 = 0;
  }
  else {
    uStack_d8 = param_1 + _DAT_11275ddac;
    _objc_loadWeakRetained();
    lVar39 = param_1 + _DAT_11275dda4;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar39;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_e8 = 0;
    lVar40 = 0;
  }
  else {
    uStack_e8 = param_1 + _DAT_11275ddb0;
    _objc_loadWeakRetained();
    lVar40 = param_1 + _DAT_11275ddb4;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar40;
  func_0x00010c15a860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar41 = 0;
  }
  else {
    lVar41 = param_1 + _DAT_11275ddb8;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar41;
  func_0x00010c0c64e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_f8 = 0;
    lVar42 = 0;
  }
  else {
    uStack_f8 = param_1 + _DAT_11275ddc0;
    _objc_loadWeakRetained();
    lVar42 = param_1 + _DAT_11275ddc4;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar42;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar43 = 0;
  }
  else {
    lVar43 = param_1 + _DAT_11275ddc8;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar43;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_138 = 0;
    lVar44 = 0;
  }
  else {
    uStack_138 = *(undefined8 *)(param_1 + _DAT_11275de14);
    _objc_retain();
    lVar44 = param_1 + _DAT_11275dd7c;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar44;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar45 = 0;
  }
  else {
    lVar45 = param_1 + _DAT_11275ddd4;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar45;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_128 = 0;
    uStack_148 = 0;
    uStack_200 = 0;
    lVar46 = 0;
  }
  else {
    uStack_148 = param_1 + _DAT_11275ddd8;
    _objc_loadWeakRetained();
    uStack_200 = *(undefined8 *)(param_1 + _DAT_11275de18);
    _objc_retain();
    uStack_128 = param_1 + _DAT_11275de1c;
    _objc_loadWeakRetained();
    lVar46 = param_1 + _DAT_11275ddd0;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar46;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar47 = 0;
  }
  else {
    lVar47 = param_1 + _DAT_11275dddc;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar47;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar48 = 0;
  }
  else {
    lVar48 = param_1 + _DAT_11275dde4;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar48;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar49 = 0;
  }
  else {
    lVar49 = param_1 + _DAT_11275dde8;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar49;
  func_0x00010c2400a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_208 = 0;
    uStack_160 = 0;
    lVar50 = 0;
  }
  else {
    uStack_160 = param_1 + _DAT_11275dde0;
    _objc_loadWeakRetained();
    uStack_208 = param_1 + _DAT_11275ddf0;
    _objc_loadWeakRetained();
    lVar50 = param_1 + _DAT_11275ddec;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar50;
  func_0x00010c0ec340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_220 = 0;
    lVar51 = 0;
  }
  else {
    uStack_220 = param_1 + _DAT_11275ddfc;
    _objc_loadWeakRetained();
    lVar51 = param_1 + _DAT_11275ddf4;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar51;
  func_0x00010c27e600();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  FUN_106d91ec4();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  FUN_106d91ec4();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar52 = 0;
  }
  else {
    lVar52 = param_1 + _DAT_11275de00;
    _objc_loadWeakRetained();
  }
  lVar27 = lVar52;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar53 = 0;
  }
  else {
    lVar53 = param_1 + _DAT_11275de04;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar53;
  func_0x00010c270e80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar54 = 0;
  }
  else {
    lVar54 = param_1 + _DAT_11275ddcc;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar54;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar55 = 0;
  }
  else {
    lVar55 = param_1 + _DAT_11275de08;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar55;
  func_0x00010c1308e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar56 = 0;
  }
  else {
    lVar56 = param_1 + _DAT_11275de20;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar56;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar57 = 0;
    param_1 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_11275de24;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_11275de28;
    _objc_loadWeakRetained();
  }
  func_0x00010bff85e0(puVar2,param_2,lVar3,lVar4,lVar5,lVar6,lVar1,lVar7,uStack_a0,uStack_a8,
                      uStack_b0,uStack_b8,uStack_c0,lVar8,lVar9,uStack_d8,lVar10,uStack_e8,lVar11,
                      lVar12,uStack_f8,lVar13,lVar14,uStack_138,lVar15,lVar16,uStack_148,uStack_200,
                      uStack_128,lVar17,lVar18,lVar19,lVar20,uStack_160,uStack_208,lVar21,uStack_220
                      ,lVar22,lVar24,lVar26,lVar27,lVar28,lVar29,lVar30,lVar31,lVar57,param_1);
  _objc_release(uStack_200);
  _objc_release(param_1);
  _objc_release(lVar57);
  _objc_release(lVar31);
  _objc_release(lVar56);
  _objc_release(lVar30);
  _objc_release(lVar55);
  _objc_release(lVar29);
  _objc_release(lVar54);
  _objc_release(lVar28);
  _objc_release(lVar53);
  _objc_release(lVar27);
  _objc_release(lVar52);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar51);
  _objc_release(uStack_220);
  _objc_release(lVar21);
  _objc_release(lVar50);
  _objc_release(uStack_208);
  _objc_release(uStack_160);
  _objc_release(lVar20);
  _objc_release(lVar49);
  _objc_release(lVar19);
  _objc_release(lVar48);
  _objc_release(lVar18);
  _objc_release(lVar47);
  _objc_release(lVar17);
  _objc_release(lVar46);
  _objc_release(uStack_128);
  _objc_release(uStack_138);
  _objc_release(uStack_148);
  _objc_release(lVar16);
  _objc_release(lVar45);
  _objc_release(lVar15);
  _objc_release(lVar44);
  _objc_release(lVar14);
  _objc_release(lVar43);
  _objc_release(lVar13);
  _objc_release(lVar42);
  _objc_release(uStack_f8);
  _objc_release(lVar12);
  _objc_release(lVar41);
  _objc_release(lVar11);
  _objc_release(lVar40);
  _objc_release(uStack_e8);
  _objc_release(lVar10);
  _objc_release(lVar39);
  _objc_release(uStack_d8);
  _objc_release(lVar9);
  _objc_release(lVar38);
  _objc_release(lVar8);
  _objc_release(lVar37);
  _objc_release(uStack_c0);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a8);
  _objc_release(uStack_a0);
  _objc_release(lVar7);
  _objc_release(lVar36);
  _objc_release(lVar6);
  _objc_release(lVar35);
  _objc_release(lVar5);
  _objc_release(lVar34);
  _objc_release(lVar4);
  _objc_release(lVar33);
  _objc_release(lVar3);
  _objc_release(lVar32);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d91ec4; end: 106d91ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d91ec4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275ddf8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d91ee8; end: 106d9212f; -[SCMemoriesPreviewPresentingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d91ee8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275de28);
  _objc_destroyWeak(param_1 + _DAT_11275de24);
  _objc_destroyWeak(param_1 + _DAT_11275de20);
  _objc_destroyWeak(param_1 + _DAT_11275de1c);
  _objc_storeStrong(param_1 + _DAT_11275de18,0);
  _objc_storeStrong(param_1 + _DAT_11275de14,0);
  _objc_storeStrong(param_1 + _DAT_11275de10,0);
  _objc_destroyWeak(param_1 + _DAT_11275de0c);
  _objc_destroyWeak(param_1 + _DAT_11275de08);
  _objc_destroyWeak(param_1 + _DAT_11275de04);
  _objc_destroyWeak(param_1 + _DAT_11275de00);
  _objc_destroyWeak(param_1 + _DAT_11275ddfc);
  _objc_destroyWeak(param_1 + _DAT_11275ddf8);
  _objc_destroyWeak(param_1 + _DAT_11275ddf4);
  _objc_destroyWeak(param_1 + _DAT_11275ddf0);
  _objc_destroyWeak(param_1 + _DAT_11275ddec);
  _objc_destroyWeak(param_1 + _DAT_11275dde8);
  _objc_destroyWeak(param_1 + _DAT_11275dde4);
  _objc_destroyWeak(param_1 + _DAT_11275dde0);
  _objc_destroyWeak(param_1 + _DAT_11275dddc);
  _objc_destroyWeak(param_1 + _DAT_11275ddd8);
  _objc_destroyWeak(param_1 + _DAT_11275ddd4);
  _objc_destroyWeak(param_1 + _DAT_11275ddd0);
  _objc_destroyWeak(param_1 + _DAT_11275ddcc);
  _objc_destroyWeak(param_1 + _DAT_11275ddc8);
  _objc_destroyWeak(param_1 + _DAT_11275ddc4);
  _objc_destroyWeak(param_1 + _DAT_11275ddc0);
  _objc_destroyWeak(param_1 + _DAT_11275ddbc);
  _objc_destroyWeak(param_1 + _DAT_11275ddb8);
  _objc_destroyWeak(param_1 + _DAT_11275ddb4);
  _objc_destroyWeak(param_1 + _DAT_11275ddb0);
  _objc_destroyWeak(param_1 + _DAT_11275ddac);
  _objc_destroyWeak(param_1 + _DAT_11275dda8);
  _objc_destroyWeak(param_1 + _DAT_11275dda4);
  _objc_destroyWeak(param_1 + _DAT_11275dda0);
  _objc_destroyWeak(param_1 + _DAT_11275dd9c);
  _objc_destroyWeak(param_1 + _DAT_11275dd98);
  _objc_destroyWeak(param_1 + _DAT_11275dd94);
  _objc_destroyWeak(param_1 + _DAT_11275dd90);
  _objc_destroyWeak(param_1 + _DAT_11275dd8c);
  _objc_destroyWeak(param_1 + _DAT_11275dd88);
  _objc_destroyWeak(param_1 + _DAT_11275dd84);
  _objc_destroyWeak(param_1 + _DAT_11275dd80);
  _objc_destroyWeak(param_1 + _DAT_11275dd7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275dd78);
  return;
}



/* Entry: 106d92130; end: 106d921a3; -[SCMemoriesPreviewPresentingServices initWithMemoriesPreviewPresentingBuilder:] */

undefined1 * FUN_106d92130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6d68;
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


