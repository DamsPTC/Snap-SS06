/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d921a4; end: 106d921ab; -[SCMemoriesPreviewPresentingServices memoriesPreviewPresentingBuilder] */

undefined8 FUN_106d921a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d921ac; end: 106d921b7; -[SCMemoriesPreviewPresentingServices .cxx_destruct] */

void FUN_106d921ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d921b8; end: 106d92333; -[SCPreviewFeatureDirectorModeHelper restoreBaseMediaInEditor:] */

void FUN_106d921b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c09dea0();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (lVar1 != 0) {
    lVar7 = 0;
    do {
      puVar3 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c0ff580(param_3,param_2,puVar3,&PTR___NSConcreteGlobalBlock_11097afb8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      lVar5 = lVar4;
      func_0x00010bf529e0();
      if (lVar5 != 0) {
        puVar3 = PTR_PTR_1126d26a0;
        _objc_opt_new(PTR_PTR_1126d26a0);
        puVar6 = PTR_PTR_1126bfa70;
        func_0x00010bf3d7c0(PTR_PTR_1126bfa70,param_2,lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17d400(puVar3,param_2,puVar6);
        _objc_release(puVar6);
        puVar6 = PTR_PTR_1126bfa70;
        func_0x00010bf08100(PTR_PTR_1126bfa70,param_2,puVar3,5,3,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar3);
      }
      _objc_release(lVar4);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
  }
  lVar1 = param_3;
  func_0x00010bf08820(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d92334; end: 106d92377;  */

bool FUN_106d92334(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 3;
}



/* Entry: 106d92378; end: 106d9244f; +[SCSnapDocSDOMCommandFactory addOverlayCommandWithImage:atIndexEditContainer:] */

void FUN_106d92378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d26a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126d26b0;
  _objc_opt_new(PTR_PTR_1126d26b0);
  func_0x00010c193660(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126d26b8;
  _objc_opt_new(PTR_PTR_1126d26b8);
  func_0x00010c165460(puVar2,param_2,puVar3);
  func_0x00010c193680(puVar3,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1c4900(puVar3,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1cafa0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e85c98);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d92450; end: 106d9253b; +[SCSnapDocSDOMCommandFactory addPlainAssetCommandWithMedia:atIndexLayerContainer:assetType:mediaType:] */

void FUN_106d92450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d26c0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1b98e0();
  _objc_release(param_4);
  func_0x00010c1c4900(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1c5440(puVar1,param_2,param_6);
  func_0x00010c16a960(puVar1,param_2,param_5);
  puVar2 = PTR_PTR_1126d26c8;
  _objc_opt_new(PTR_PTR_1126d26c8);
  func_0x00010c1654a0();
  puVar3 = PTR_PTR_1126d26a8;
  _objc_opt_new(PTR_PTR_1126d26a8);
  func_0x00010c16a840();
  func_0x00010c1cafa0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e85cb8);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d9253c; end: 106d927df; +[SCSnapDocSDOMCommandFactory addImageSegmentCommandWithImageData:atIndex:imageDuration:replaceExistingClip:keepEdiginLayers:] */

void FUN_106d9253c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x00010c23d0a0(puVar1);
    func_0x00010c14e120(puVar1);
    func_0x00010c23d0a0(puVar1);
    func_0x00010c14e120(puVar1);
    puVar2 = PTR_PTR_1126d26d0;
    _objc_opt_new(PTR_PTR_1126d26d0);
    func_0x00010c1eaca0();
    func_0x00010c1b6a80(puVar2,param_2,param_7);
    uVar3 = param_1;
    _objc_opt_class(param_1);
    func_0x00010c0c52e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4900(puVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_opt_class(param_1);
    func_0x00010bf3d7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d400(puVar2,param_2,param_1);
    _objc_release(param_1);
    puVar6 = puVar2;
    func_0x00010c0c4a20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0();
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010c0c4a20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7d00();
    _objc_release(puVar6);
    dStack_78 = param_5[1];
    dVar7 = *param_5;
    dStack_70 = param_5[2];
    dStack_80 = dVar7;
    _CMTimeGetSeconds(&dStack_80);
    func_0x00010c1c45e0(puVar2,param_2,(int)(dVar7 * 1000.0));
    puVar4 = PTR_PTR_1126d26d8;
    _objc_opt_new(PTR_PTR_1126d26d8);
    puVar6 = PTR_PTR_1126b25e8;
    _objc_opt_new(PTR_PTR_1126b25e8);
    func_0x00010c1aa140(puVar4,param_2,puVar6);
    _objc_release(puVar6);
    uVar3 = param_3;
    func_0x0001080693fc();
    if ((int)uVar3 != 0) {
      puVar6 = PTR_PTR_1126d26e0;
      _objc_opt_new(PTR_PTR_1126d26e0);
      func_0x00010c17dd40();
      func_0x00010c1aa5c0(puVar4,param_2,puVar6);
      _objc_release(puVar6);
    }
    func_0x00010c1aa0c0(puVar2,param_2,puVar4);
    puVar5 = PTR_PTR_1126d26e8;
    _objc_opt_new(PTR_PTR_1126d26e8);
    func_0x00010c165140();
    puVar6 = PTR_PTR_1126d26a8;
    _objc_opt_new(PTR_PTR_1126d26a8);
    func_0x00010c17d3e0();
    func_0x00010c1cafa0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e85cd8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106d927e0; end: 106d92ab3; +[SCSnapDocSDOMCommandFactory addVideoSegmentCommandWithVideoUrl:atIndex:replaceExistingClip:keepEdiginLayers:] */

void FUN_106d927e0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined1 auStack_78 [24];
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x00010c29b200(PTR_PTR_1126b0010,param_3,puVar2);
    puVar3 = PTR_PTR_1126d26d0;
    _objc_opt_new(PTR_PTR_1126d26d0);
    func_0x00010c1eaca0();
    func_0x00010c1b6a80(puVar3,param_3,1);
    uVar4 = param_2;
    _objc_opt_class(param_2);
    func_0x00010c0c5300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4900(puVar3,param_3,uVar4);
    _objc_release(uVar4);
    _objc_opt_class(param_2);
    func_0x00010bf3d7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d400(puVar3,param_3,param_2);
    _objc_release(param_2);
    puVar7 = puVar3;
    func_0x00010c0c4a20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0();
    _objc_release(puVar7);
    puVar7 = puVar3;
    func_0x00010c0c4a20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7d00();
    _objc_release(puVar7);
    func_0x00010bf8b160(auStack_78,puVar2);
    _CMTimeGetSeconds(auStack_78);
    func_0x00010c1c45e0(puVar3,param_3,(int)(param_1 * 1000.0));
    puVar5 = PTR_PTR_1126d26f0;
    _objc_opt_new(PTR_PTR_1126d26f0);
    puVar7 = PTR_PTR_1126b25e8;
    _objc_opt_new(PTR_PTR_1126b25e8);
    func_0x00010c221300(puVar5,param_3,puVar7);
    _objc_release(puVar7);
    puVar7 = puVar2;
    func_0x00010c299760();
    iVar8 = 2;
    iVar1 = iVar8;
    if (puVar7 != (undefined *)0x2) {
      iVar1 = 0;
    }
    if (puVar7 == (undefined *)0x1) {
      iVar1 = 1;
    }
    if (iVar1 != 0) {
      puVar7 = PTR_PTR_1126d26f8;
      _objc_opt_new(PTR_PTR_1126d26f8);
      func_0x00010c17dd40();
      func_0x00010c221ae0(puVar5,param_3,puVar7);
      _objc_release(puVar7);
    }
    puVar7 = puVar2;
    func_0x00010bf0eec0();
    if (puVar7 != (undefined *)0x2) {
      iVar8 = 0;
    }
    if (puVar7 == (undefined *)0x1) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      puVar7 = PTR_PTR_1126d2700;
      _objc_opt_new(PTR_PTR_1126d2700);
      func_0x00010c17dd40();
      func_0x00010c16be40(puVar5,param_3,puVar7);
      _objc_release(puVar7);
    }
    func_0x00010c221160(puVar3,param_3,puVar5);
    puVar6 = PTR_PTR_1126d26e8;
    _objc_opt_new(PTR_PTR_1126d26e8);
    func_0x00010c165140();
    puVar7 = PTR_PTR_1126d26a8;
    _objc_opt_new(PTR_PTR_1126d26a8);
    func_0x00010c17d3e0();
    func_0x00010c1cafa0(puVar7,param_3,&PTR____CFConstantStringClassReference_110e85cf8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106d92ab4; end: 106d92b97; +[SCSnapDocSDOMCommandFactory addTrimCommandatClipIndex:startMs:durationMs:] */

void FUN_106d92ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126afff0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c209a20();
  func_0x00010c192d40(puVar1,param_2,param_5);
  puVar2 = PTR_PTR_1126d2708;
  _objc_opt_new(PTR_PTR_1126d2708);
  func_0x00010c17d3c0();
  _objc_release(param_3);
  func_0x00010c21a4e0(puVar2,param_2,puVar1);
  puVar3 = PTR_PTR_1126d26e8;
  _objc_opt_new(PTR_PTR_1126d26e8);
  func_0x00010c21a500();
  puVar4 = PTR_PTR_1126d26a8;
  _objc_opt_new(PTR_PTR_1126d26a8);
  func_0x00010c17d3e0();
  func_0x00010c1cafa0(puVar4,param_2,&PTR____CFConstantStringClassReference_110e85d18);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106d92b98; end: 106d92c73; +[SCSnapDocSDOMCommandFactory applyAlternativeAssetAtIndexLayerContainer:originAssetType:altAssetType:keepAlternateLayer:] */

void FUN_106d92b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d2710;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1b98e0();
  _objc_release(param_3);
  func_0x00010c1d64c0(puVar1,param_2,param_4);
  func_0x00010c1678a0(puVar1,param_2,param_5);
  func_0x00010c1b6a40(puVar1,param_2,param_6);
  puVar2 = PTR_PTR_1126d26c8;
  _objc_opt_new(PTR_PTR_1126d26c8);
  func_0x00010c169bc0();
  puVar3 = PTR_PTR_1126d26a8;
  _objc_opt_new(PTR_PTR_1126d26a8);
  func_0x00010c16a840();
  func_0x00010c1cafa0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e85d38);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d92c74; end: 106d92cd7; +[SCSnapDocSDOMCommandFactory clipIndexFromIndex:] */

void FUN_106d92c74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d2718;
  _objc_opt_new(PTR_PTR_1126d2718);
  puVar2 = PTR_PTR_1126bfab0;
  _objc_opt_new(PTR_PTR_1126bfab0);
  func_0x00010c220160();
  func_0x00010c17d420(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d92cd8; end: 106d92d4f; +[SCSnapDocSDOMCommandFactory mediaIndexFromBytes:] */

void FUN_106d92cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d2720;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126d2728;
  _objc_opt_new(PTR_PTR_1126d2728);
  func_0x00010c171c20();
  _objc_release(param_3);
  func_0x00010c1e78a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d92d50; end: 106d92de7; +[SCSnapDocSDOMCommandFactory mediaIndexFromUrl:] */

void FUN_106d92d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d2720;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126d2728;
  _objc_opt_new(PTR_PTR_1126d2728);
  uVar3 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c19bb20(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c1e78a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d92de8; end: 106d930b3; +[SCSnapDocSDOMCommandFactory importSnapClipCommandWithSnapDoc:startTime:durationMs:] */

void FUN_106d92de8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined *unaff_x25;
  long lVar12;
  undefined *unaff_x26;
  long lVar13;
  long unaff_x28;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_228 [128];
  long lStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_5;
  _objc_retain(param_3);
  if (param_5 != 0) {
    lVar11 = param_3;
    uStack_138 = param_4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar11;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar11);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = lVar12;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = 0x10;
    lVar13 = lVar1;
    func_0x00010bf52a60();
    if (lVar13 != 0) {
      unaff_x28 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != unaff_x28) {
            _objc_enumerationMutation(lVar1);
          }
          unaff_x25 = *(undefined **)(lStack_128 + lVar11 * 8);
          puVar2 = unaff_x25;
          func_0x00010c2787c0();
          if (puVar2 != (undefined *)0x0) {
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x25);
            unaff_x25 = PTR_PTR_1126afff0;
            _objc_opt_new();
            func_0x00010c209a20();
            func_0x00010c192d40(unaff_x25,param_2,param_5);
            func_0x00010c21a4e0(unaff_x26,param_2,unaff_x25);
            _objc_release(unaff_x25);
            _objc_release(unaff_x26);
          }
          lVar11 = lVar11 + 1;
        } while (lVar13 != lVar11);
        lVar11 = 0x10;
        lVar13 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0);
      } while (lVar13 != 0);
    }
    _objc_release(lVar1);
    _objc_release(lVar12);
  }
  puVar2 = PTR_PTR_1126d26e8;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126d2730;
  _objc_opt_new();
  func_0x00010c203f00();
  puVar4 = PTR_PTR_1126b25e8;
  _objc_opt_new(PTR_PTR_1126b25e8);
  func_0x00010c19ce80(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d2738;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126afff0;
  _objc_opt_new();
  func_0x00010c209a20();
  func_0x00010c160ac0(puVar4,param_2,puVar5);
  func_0x00010c214ec0(puVar3,param_2,puVar4);
  func_0x00010c1ab0a0(puVar2,param_2,puVar3);
  puVar6 = PTR_PTR_1126d26a8;
  _objc_opt_new();
  func_0x00010c1cafa0();
  puVar8 = puVar2;
  func_0x00010c17d3e0(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuStack_198 = &PTR_PTR_1126af000;
    pcStack_148 = FUN_106d930b4;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_1a0 = unaff_x28;
    puStack_190 = unaff_x26;
    puStack_188 = unaff_x25;
    puStack_180 = puVar5;
    puStack_178 = puVar4;
    puStack_170 = puVar3;
    puStack_168 = puVar2;
    puStack_160 = puVar6;
    lStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    _objc_retain(lVar11);
    puVar2 = PTR_PTR_1126d2740;
    _objc_opt_new();
    func_0x00010c1f6740();
    func_0x00010c1863a0(puVar2,param_2,puVar8);
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    _objc_retain(lVar11);
    puVar10 = auStack_228;
    lVar1 = lVar11;
    func_0x00010bf52a60(lVar11,param_2,&uStack_270,puVar10,0x10);
    if (lVar1 != 0) {
      lVar12 = *plStack_260;
      do {
        lVar13 = 0;
        do {
          if (*plStack_260 != lVar12) {
            _objc_enumerationMutation(lVar11);
          }
          puVar3 = puVar2;
          func_0x00010bf8ce00(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar3);
          lVar13 = lVar13 + 1;
        } while (lVar1 != lVar13);
        puVar10 = auStack_228;
        lVar1 = lVar11;
        func_0x00010bf52a60(lVar11,param_2,&uStack_270,puVar10,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar11);
    puVar3 = PTR_PTR_1126d2748;
    _objc_opt_new(PTR_PTR_1126d2748);
    func_0x00010c1654c0();
    puVar6 = PTR_PTR_1126d26a8;
    _objc_opt_new();
    func_0x00010c1ea6a0();
    ppuVar9 = &PTR____CFConstantStringClassReference_110e85d78;
    func_0x00010c1cafa0(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar11);
    _objc_release(puVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_retain(ppuVar9);
      puVar6 = PTR_PTR_1126bfa78;
      _objc_opt_new();
      uVar7 = *(undefined8 *)(puVar6 + 8);
      *(undefined ***)(puVar6 + 8) = ppuVar9;
      _objc_release(uVar7);
      *(undefined1 **)(puVar6 + 0x20) = puVar10;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106d930b4; end: 106d93273; +[SCSnapDocSDOMCommandFactory addRenderEffectWithCTItem:renderEffectType:effectIndex:] */

void FUN_106d930b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d2740;
  _objc_opt_new();
  func_0x00010c1f6740();
  func_0x00010c1863a0(puVar1,param_2,param_3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_5);
  puVar7 = auStack_e8;
  lVar2 = param_5;
  func_0x00010bf52a60(param_5,param_2,&uStack_130,puVar7,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_5);
        }
        puVar3 = puVar1;
        func_0x00010bf8ce00(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar7 = auStack_e8;
      lVar2 = param_5;
      func_0x00010bf52a60(param_5,param_2,&uStack_130,puVar7,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126d2748;
  _objc_opt_new(PTR_PTR_1126d2748);
  func_0x00010c1654c0();
  puVar4 = PTR_PTR_1126d26a8;
  _objc_opt_new();
  func_0x00010c1ea6a0();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e85d78;
  func_0x00010c1cafa0(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(ppuVar6);
    puVar4 = PTR_PTR_1126bfa78;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(puVar4 + 8);
    *(undefined ***)(puVar4 + 8) = ppuVar6;
    _objc_release(uVar5);
    *(undefined1 **)(puVar4 + 0x20) = puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106d93274; end: 106d932c7; +[SCSnapDocSDOMNativeCommand createAddRenderEffectCommandWithCTItem:durationMs:] */

void FUN_106d93274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bfa78;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = param_3;
  _objc_release(uVar2);
  *(undefined8 *)(puVar1 + 0x20) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d932c8; end: 106d94203; -[SCSnapDocSDOMNativeCommand runOnSnapDoc:] */

undefined * FUN_106d932c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined *puVar27;
  undefined *puVar28;
  ulong uStack_528;
  long lStack_500;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [128];
  undefined1 auStack_2f0 [128];
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) != 0) {
    uVar17 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar18;
    func_0x00010bf529e0();
    _objc_release(uVar18);
    _objc_release(uVar17);
    if (uVar25 != 0) {
      puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      lStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      plStack_3a0 = (long *)0x0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uVar17 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
      uVar17 = uVar18;
      func_0x00010bf52a60(uVar18,param_2,&uStack_3b0,auStack_f0,0x10);
      if (uVar17 != 0) {
        lVar24 = *plStack_3a0;
        do {
          uVar25 = 0;
          do {
            if (*plStack_3a0 != lVar24) {
              _objc_enumerationMutation(uVar18);
            }
            puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar22 = *(undefined8 *)(lStack_3a8 + uVar25 * 8);
            uVar23 = uVar22;
            func_0x00010c0ff5c0(uVar22);
            func_0x00010c0df820(puVar1,param_2,uVar23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar20,param_2,uVar22,puVar1);
            _objc_release(puVar1);
            uVar25 = uVar25 + 1;
          } while (uVar17 != uVar25);
          uVar17 = uVar18;
          func_0x00010bf52a60(uVar18,param_2,&uStack_3b0,auStack_f0,0x10);
        } while (uVar17 != 0);
      }
      _objc_release(uVar18);
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      lStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      plStack_3e0 = (long *)0x0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uVar17 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar18;
      func_0x00010c08c260();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar25;
      func_0x00010c2791c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar25);
      _objc_release(uVar18);
      _objc_release(uVar17);
      uStack_528 = uVar2;
      func_0x00010bf52a60(uVar2,param_2,&uStack_3f0,auStack_170,0x10);
      if (uStack_528 != 0) {
        lVar24 = *plStack_3e0;
        do {
          uVar17 = 0;
          do {
            if (*plStack_3e0 != lVar24) {
              _objc_enumerationMutation(uVar2);
            }
            lVar3 = *(long *)(lStack_3e8 + uVar17 * 8);
            lStack_428 = 0;
            uStack_430 = 0;
            uStack_418 = 0;
            plStack_420 = (long *)0x0;
            uStack_408 = 0;
            uStack_410 = 0;
            uStack_3f8 = 0;
            uStack_400 = 0;
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            lStack_500 = lVar3;
            func_0x00010bf52a60();
            if (lStack_500 != 0) {
              lVar16 = *plStack_420;
              do {
                lVar26 = 0;
                do {
                  if (*plStack_420 != lVar16) {
                    _objc_enumerationMutation(lVar3);
                  }
                  uVar25 = *(ulong *)(lStack_428 + lVar26 * 8);
                  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                  _objc_opt_new();
                  uVar18 = uVar25;
                  func_0x00010c0ff680();
                  puVar27 = (undefined *)0x0;
                  if (uVar18 != 0) {
                    uVar18 = 0;
                    do {
                      uVar5 = uVar25;
                      func_0x00010c0ff660(uVar25);
                      _objc_retainAutoreleasedReturnValue();
                      uVar6 = uVar5;
                      func_0x00010c296de0();
                      _objc_release(uVar5);
                      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
                      _objc_retainAutoreleasedReturnValue();
                      puVar8 = puVar20;
                      func_0x00010c0e00e0(puVar20,param_2,puVar7);
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(puVar7);
                      puVar7 = puVar8;
                      func_0x00010c0c3fe0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar28 = puVar7;
                      func_0x00010bf0b760();
                      _objc_release(puVar7);
                      if ((int)puVar28 == 5) {
                        puVar28 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
                        _objc_retainAutoreleasedReturnValue();
                        puVar7 = puVar27;
                        puVar27 = puVar28;
LAB_106d936b4:
                        _objc_release(puVar7);
                      }
                      else {
                        puVar7 = puVar8;
                        func_0x00010c0c3fe0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar28 = puVar7;
                        func_0x00010bf0b760();
                        _objc_release(puVar7);
                        if ((int)puVar28 == 6) {
                          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010befa120(puVar4,param_2,puVar7);
                          goto LAB_106d936b4;
                        }
                      }
                      _objc_release(puVar8);
                      uVar18 = uVar18 + 1;
                      uVar5 = uVar25;
                      func_0x00010c0ff680();
                    } while (uVar18 < uVar5);
                    if ((puVar27 != (undefined *)0x0) &&
                       (puVar7 = puVar4, func_0x00010bf529e0(), puVar7 != (undefined *)0x0)) {
                      func_0x00010c1d0640(puVar1,param_2,puVar4,puVar27);
                    }
                  }
                  _objc_release(puVar4);
                  _objc_release(puVar27);
                  lVar26 = lVar26 + 1;
                } while (lVar26 != lStack_500);
                lStack_500 = lVar3;
                func_0x00010bf52a60(lVar3,param_2,&uStack_430,auStack_1f0,0x10);
              } while (lStack_500 != 0);
            }
            _objc_release(lVar3);
            uVar17 = uVar17 + 1;
          } while (uVar17 != uStack_528);
          uStack_528 = uVar2;
          func_0x00010bf52a60(uVar2,param_2,&uStack_3f0,auStack_170,0x10);
        } while (uStack_528 != 0);
      }
      _objc_release(uVar2);
      uVar17 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar18;
      func_0x00010bf529e0();
      _objc_release(uVar18);
      _objc_release(uVar17);
      if (0 < (int)uVar25) {
        uVar17 = (uVar25 & 0x7fffffff) + 1;
        do {
          uVar18 = param_3;
          func_0x00010c0fee00();
          _objc_retainAutoreleasedReturnValue();
          uVar25 = uVar18;
          func_0x00010c0ff660();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar25;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar25);
          _objc_release(uVar18);
          uVar18 = uVar2;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar25 = uVar18;
          func_0x00010bf0b760();
          if ((int)uVar25 == 5) {
LAB_106d938d4:
            _objc_release(uVar18);
          }
          else {
            uVar25 = uVar2;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar25;
            func_0x00010bf0b760();
            if ((int)uVar5 == 2) {
LAB_106d938cc:
              _objc_release(uVar25);
              goto LAB_106d938d4;
            }
            uVar5 = uVar2;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010bf0b760();
            if ((int)uVar6 == 6) {
              _objc_release(uVar5);
              goto LAB_106d938cc;
            }
            uVar6 = param_1;
            func_0x00010be42160(param_1,param_2,uVar2);
            _objc_release(uVar5);
            _objc_release(uVar25);
            _objc_release(uVar18);
            if ((uVar6 & 1) == 0) {
              uVar18 = param_3;
              func_0x00010c0fee00(param_3);
              _objc_retainAutoreleasedReturnValue();
              uVar25 = uVar18;
              func_0x00010c0ff660();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d3c0();
              goto LAB_106d938cc;
            }
          }
          _objc_release(uVar2);
          uVar17 = uVar17 - 1;
        } while (1 < uVar17);
      }
      uVar17 = param_3;
      func_0x00010c0fee00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar18;
      func_0x00010c08c260();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar25;
      func_0x00010c2791c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12adc0();
      _objc_release(uVar2);
      _objc_release(uVar25);
      _objc_release(uVar18);
      _objc_release(uVar17);
      uVar17 = param_3;
      func_0x00010c0fee00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar18;
      func_0x00010c08c260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c218fe0();
      _objc_release(uVar25);
      _objc_release(uVar18);
      _objc_release(uVar17);
      uVar17 = param_3;
      func_0x00010c0fee00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar18;
      func_0x00010c08c260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219100();
      _objc_release(uVar25);
      _objc_release(uVar18);
      _objc_release(uVar17);
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      lStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      plStack_460 = (long *)0x0;
      uVar17 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
      uVar17 = uVar18;
      func_0x00010bf52a60(uVar18,param_2,&uStack_470,auStack_270,0x10);
      if (uVar17 != 0) {
        lVar24 = *plStack_460;
        do {
          uVar25 = 0;
          do {
            if (*plStack_460 != lVar24) {
              _objc_enumerationMutation(uVar18);
            }
            uVar19 = *(undefined8 *)(lStack_468 + uVar25 * 8);
            uVar23 = uVar19;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar22 = uVar23;
            func_0x00010bf0b760();
            _objc_release(uVar23);
            if ((int)uVar22 != 6) {
              func_0x00010c0ff5c0(uVar19);
              puVar4 = PTR_PTR_1126bce80;
              _objc_opt_new(PTR_PTR_1126bce80);
              uVar2 = param_3;
              func_0x00010c0fee00(param_3);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar2;
              func_0x00010c0c4c40();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010c08c260();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar6;
              func_0x00010c277f20();
              func_0x00010c218fe0(uVar6,param_2,(int)uVar9 + 1);
              func_0x00010c218fc0(puVar4,param_2,(int)uVar9 + 1);
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(uVar2);
              puVar27 = PTR_PTR_1126bce88;
              _objc_opt_new(PTR_PTR_1126bce88);
              uVar2 = param_3;
              func_0x00010c0fee00(param_3);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar2;
              func_0x00010c0c4c40();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010c08c260();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar6;
              func_0x00010c278760();
              func_0x00010c219100(uVar6,param_2,(int)uVar9 + 1);
              func_0x00010c2190e0(puVar27,param_2,(int)uVar9 + 1);
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(uVar2);
              if (*(long *)(param_1 + 0x20) != 0) {
                puVar7 = PTR_PTR_1126afff0;
                _objc_opt_new(PTR_PTR_1126afff0);
                func_0x00010c209a20();
                func_0x00010c192d40(puVar7,param_2,*(undefined8 *)(param_1 + 0x20));
                func_0x00010c21a4e0(puVar27,param_2,puVar7);
                _objc_release(puVar7);
              }
              puVar7 = puVar27;
              func_0x00010c0ff660(puVar27);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befc800();
              _objc_release(puVar7);
              uStack_488 = 0;
              uStack_490 = 0;
              uStack_478 = 0;
              uStack_480 = 0;
              lStack_4a8 = 0;
              uStack_4b0 = 0;
              uStack_498 = 0;
              plStack_4a0 = (long *)0x0;
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar19);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar1;
              func_0x00010c0e00e0(puVar1,param_2,puVar7);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar7);
              puVar7 = puVar8;
              func_0x00010bf52a60(puVar8,param_2,&uStack_4b0,auStack_2f0,0x10);
              if (puVar7 != (undefined *)0x0) {
                lVar3 = *plStack_4a0;
                do {
                  puVar28 = (undefined *)0x0;
                  do {
                    if (*plStack_4a0 != lVar3) {
                      _objc_enumerationMutation(puVar8);
                    }
                    uVar23 = *(undefined8 *)(lStack_4a8 + (long)puVar28 * 8);
                    puVar10 = puVar27;
                    func_0x00010c0ff660(puVar27);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c282760(uVar23);
                    func_0x00010befc800(puVar10,param_2,uVar23);
                    _objc_release(puVar10);
                    puVar28 = puVar28 + 1;
                  } while (puVar7 != puVar28);
                  puVar7 = puVar8;
                  func_0x00010bf52a60(puVar8,param_2,&uStack_4b0,auStack_2f0,0x10);
                } while (puVar7 != (undefined *)0x0);
              }
              _objc_release(puVar8);
              puVar7 = puVar4;
              func_0x00010c2787a0(puVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120();
              _objc_release(puVar7);
              uVar2 = param_3;
              func_0x00010c0fee00(param_3);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar2;
              func_0x00010c0c4c40();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010c08c260();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar6;
              func_0x00010c2791c0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120();
              _objc_release(uVar9);
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(uVar2);
              _objc_release(puVar27);
              _objc_release(puVar4);
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar17);
          uVar17 = uVar18;
          func_0x00010bf52a60(uVar18,param_2,&uStack_470,auStack_270,0x10);
        } while (uVar17 != 0);
      }
      _objc_release(uVar18);
      ppuVar11 = (undefined **)PTR_PTR_1126bcea8;
      _objc_opt_new();
      puVar4 = PTR_PTR_1126bceb0;
      _objc_opt_new();
      func_0x00010c1f6740();
      puVar27 = PTR_PTR_1126bceb8;
      _objc_opt_new();
      puVar7 = PTR_PTR_1126bcd28;
      _objc_opt_new();
      func_0x00010c1863a0();
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      lStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4d8 = 0;
      plStack_4e0 = (long *)0x0;
      uVar17 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar18;
      func_0x00010c08c260();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar25;
      func_0x00010c2791c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar25);
      _objc_release(uVar18);
      _objc_release(uVar17);
      uVar17 = uVar2;
      func_0x00010bf52a60(uVar2,param_2,&uStack_4f0,auStack_370,0x10);
      if (uVar17 != 0) {
        lVar24 = *plStack_4e0;
        do {
          uVar18 = 0;
          do {
            if (*plStack_4e0 != lVar24) {
              _objc_enumerationMutation(uVar2);
            }
            uVar21 = *(undefined8 *)(lStack_4e8 + uVar18 * 8);
            uVar23 = uVar21;
            func_0x00010c2787a0(uVar21);
            _objc_retainAutoreleasedReturnValue();
            uVar22 = uVar23;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar23);
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar23 = uVar22;
            func_0x00010c0ff660(uVar22);
            _objc_retainAutoreleasedReturnValue();
            uVar19 = uVar23;
            func_0x00010c296de0();
            func_0x00010c0df820(puVar8,param_2,uVar19);
            _objc_retainAutoreleasedReturnValue();
            puVar28 = puVar20;
            func_0x00010c0e00e0(puVar20,param_2,puVar8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            _objc_release(uVar23);
            puVar8 = puVar28;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar8;
            func_0x00010bf0b760();
            if ((int)puVar10 == 2) {
LAB_106d94004:
              _objc_release(puVar8);
            }
            else {
              uVar25 = param_1;
              func_0x00010be42160(param_1,param_2,puVar28);
              _objc_release(puVar8);
              if ((uVar25 & 1) == 0) {
                puVar8 = PTR_PTR_1126bcd38;
                _objc_opt_new(PTR_PTR_1126bcd38);
                func_0x00010c277f00(uVar21);
                func_0x00010c218fc0(puVar8,param_2,uVar21);
                puVar10 = puVar7;
                func_0x00010c066480(puVar7);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120();
                _objc_release(puVar10);
                goto LAB_106d94004;
              }
            }
            _objc_release(puVar28);
            _objc_release(uVar22);
            uVar18 = uVar18 + 1;
          } while (uVar17 != uVar18);
          uVar17 = uVar2;
          func_0x00010bf52a60(uVar2,param_2,&uStack_4f0,auStack_370,0x10);
        } while (uVar17 != 0);
      }
      _objc_release(uVar2);
      puVar8 = puVar7;
      func_0x00010c0eee00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010c12faa0(ppuVar11);
      func_0x00010c1ea720(ppuVar11,param_2,(int)ppuVar12 + 1);
      func_0x00010befc800(puVar8,param_2,(int)ppuVar12 + 1);
      _objc_release(puVar8);
      puVar8 = puVar27;
      func_0x00010c12fa40(puVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar8);
      puVar8 = puVar4;
      func_0x00010c12f9a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar8);
      ppuVar12 = ppuVar11;
      func_0x00010c12fb00(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(ppuVar12);
      uVar17 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010c1ea760();
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(puVar7);
      _objc_release(puVar27);
      _objc_release(puVar4);
      _objc_release(ppuVar11);
      _objc_release(puVar1);
      _objc_release(puVar20);
      puVar20 = (undefined *)0x0;
      goto LAB_106d941bc;
    }
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110e85d98;
  puVar20 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
LAB_106d941bc:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(ppuVar12);
    ppuVar11 = ppuVar12;
    func_0x00010c08c3a0();
    if ((int)ppuVar11 == 4) {
      ppuVar11 = ppuVar12;
      func_0x00010bf5cc00(ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar11;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar13;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar14;
      func_0x00010bf96ee0();
      puVar20 = (undefined *)(ulong)((int)ppuVar15 == 7);
      _objc_release(ppuVar14);
      _objc_release(ppuVar13);
      _objc_release(ppuVar11);
    }
    else {
      puVar20 = (undefined *)0x0;
    }
    _objc_release(ppuVar12);
    return puVar20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return puVar20;
}



/* Entry: 106d94204; end: 106d942b3; -[SCSnapDocSDOMNativeCommand _isMusicTrackPlaybackLayer:] */

bool FUN_106d94204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c08c3a0();
  if ((int)uVar2 == 4) {
    uVar2 = param_3;
    func_0x00010bf5cc00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf96ee0();
    bVar1 = (int)uVar5 == 7;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106d942b4; end: 106d942e3; -[SCSnapDocSDOMNativeCommand .cxx_destruct] */

void FUN_106d942b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d942e4; end: 106d957ab;  */

undefined *
FUN_106d942e4(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9
             ,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
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
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  float fVar21;
  double dVar22;
  undefined *puStack_3e0;
  undefined *puStack_3c0;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined **ppuStack_368;
  undefined *puStack_360;
  undefined **ppuStack_358;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar2 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfc1340();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (puVar3 == (undefined *)0x0) {
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = param_1;
    func_0x00010bfaebe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfc1340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_106d957ac;
  puStack_1a8 = &UNK_11097afd8;
  _objc_retain(param_1);
  puStack_1a0 = param_1;
  _objc_retain(puVar19);
  puVar4 = puVar3;
  puStack_198 = puVar19;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (param_7 != 0) {
    puVar2 = param_1;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2a04c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_106d95888;
    puStack_1d0 = &UNK_11097b008;
    _objc_retain(param_1);
    puVar5 = puVar3;
    puStack_1c8 = param_1;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c249de0();
    _objc_retainAutoreleasedReturnValue();
    puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_208 = 0xc2000000;
    uStack_200 = 0x106d958dc;
    puStack_1f8 = &UNK_11097b038;
    _objc_retain(param_1);
    puVar6 = puVar3;
    puStack_1f0 = param_1;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c297ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf1f3c0();
    puVar10 = PTR____NSArray0__struct_11034ab48;
    if ((int)puVar7 != 0) {
      puVar8 = param_1;
      func_0x00010bfaebe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c297c00();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar9;
      func_0x00010c2981c0();
      _objc_retainAutoreleasedReturnValue();
      puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_230 = 0xc2000000;
      pcStack_228 = FUN_106d95930;
      puStack_220 = &UNK_11097b068;
      _objc_retain(param_1);
      puVar10 = puVar20;
      puStack_218 = param_1;
      func_0x00010bfaea20(puVar20);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_368 = &puStack_218;
      _objc_release(puVar20);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d2750;
    puVar3 = param_1;
    func_0x00010bfaebe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c297c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1e00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c220b60();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126bcd48;
    puVar3 = param_1;
    func_0x00010bfaebe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1c40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c223ee0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c207d20(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a2c80(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c220800(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126bcd60;
    func_0x00010c2b1de0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c19c8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar20);
    _objc_release(puVar10);
    if ((int)puVar7 != 0) {
      _objc_release(*ppuStack_368);
    }
    _objc_release(puVar6);
    _objc_release(puStack_1f0);
    _objc_release(puVar5);
    _objc_release(puStack_1c8);
    param_1 = puVar11;
  }
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_106d959d8;
  uStack_248 = 0x106d959e8;
  uStack_240 = 0;
  puVar2 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4e780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puStack_3e0 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b38b8;
    func_0x00010bfe5de0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010914e1a4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c2a0480();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0720c0();
    _objc_release(puVar6);
    _objc_release(puVar2);
    if ((int)puVar7 == 0) {
      puStack_3e0 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar5);
      puVar2 = PTR_PTR_1126c40c0;
      _objc_alloc();
      func_0x00010b7448e4();
      uVar18 = puStack_260[5];
      puStack_260[5] = puVar2;
      _objc_release(uVar18);
      puStack_3e0 = puVar5;
    }
    _objc_release(puVar5);
  }
  puVar2 = param_1;
  func_0x00010bfaebe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2a04c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(puStack_3e0);
  func_0x00010bf97e80(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar2);
  dVar22 = 0.0;
  puVar2 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bfedce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puStack_370 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puStack_370 == (undefined *)0x0) {
    puStack_378 = (undefined *)0x0;
    puStack_3b0 = (undefined *)0x0;
    puStack_3a0 = (undefined *)0x0;
    puStack_3c0 = (undefined *)0x0;
  }
  else {
    puStack_3b0 = (undefined *)0x0;
    puStack_3a0 = (undefined *)0x0;
    puStack_3c0 = (undefined *)0x0;
    puStack_378 = (undefined *)0x0;
    do {
      ppuStack_358 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        puStack_360 = *(undefined **)((long)ppuStack_358 * 8);
        puVar2 = puStack_360;
        func_0x00010c27dde0();
        if (puVar2 == (undefined *)0x73b7c3d4) {
          puVar2 = PTR_PTR_1126d2758;
          _objc_alloc();
          puVar6 = puStack_360;
          func_0x00010c2a2c20();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf345a0();
          ppuStack_368 = (undefined **)puStack_360;
          func_0x00010c2a2c20();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = (undefined *)ppuStack_368;
          func_0x00010bf9fa80(ppuStack_368);
          puVar8 = puStack_360;
          func_0x00010c2a2c20(puStack_360);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c09f000();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puStack_360;
          func_0x00010c2a2c20(puStack_360);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar20;
          func_0x00010bfe4800();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puStack_360;
          func_0x00010c2a2c20(puStack_360);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010bf632c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2a2c20(puStack_360);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c29e680();
          dVar22 = (double)(ulong)(uint)(float)(int)puVar7;
          func_0x00010bffd3e0(dVar22,(float)(int)puVar10);
          _objc_release(puStack_378);
          _objc_release(puStack_360);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar20);
          _objc_release(puVar9);
          _objc_release(puVar8);
          puStack_378 = puVar2;
          puStack_360 = puVar6;
          goto LAB_106d94c98;
        }
        puVar2 = puStack_360;
        func_0x00010c27dde0();
        if (puVar2 == (undefined *)0x1fe7ae) {
          puVar2 = PTR_PTR_1126d2760;
          _objc_alloc();
          puVar6 = param_2;
          func_0x00010bf313a0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 == (undefined *)0x0) {
            puStack_3a8 = param_2;
            func_0x00010bf59960();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar10 = PTR__OBJC_CLASS___NSLocale_1126af788;
          func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
          puVar8 = param_2;
          func_0x00010c26fd20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26fda0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c009540();
          _objc_release(puStack_3a0);
          _objc_release(puVar7);
          _objc_release(puVar8);
          _objc_release(puVar10);
          if (puVar6 == (undefined *)0x0) {
            _objc_release(puStack_3a8);
          }
          _objc_release(puVar6);
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27dde0(puStack_360);
          func_0x00010c21acc0(puVar2);
          puStack_3a0 = puVar2;
LAB_106d94e1c:
          _objc_release(puStack_360);
        }
        else {
          puVar2 = puStack_360;
          func_0x00010c27dde0();
          if (puVar2 == (undefined *)0x170d39ed) {
            func_0x00010bf17400();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c098a20(puStack_360);
            func_0x00010bdc2200();
            goto LAB_106d94e1c;
          }
          puVar2 = puStack_360;
          func_0x00010c27dde0();
          fVar21 = SUB84(dVar22,0);
          if (puVar2 == (undefined *)0xffffffffa8093aa2) {
            puVar6 = PTR_PTR_1126d2768;
            _objc_alloc();
            puVar7 = puStack_360;
            func_0x00010bf01f00();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_368 = (undefined **)puVar7;
            func_0x00010bf01f00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80(ppuStack_368);
            puVar10 = puStack_360;
            func_0x00010bf01f00(puStack_360);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c280800();
            func_0x00010bdc20a0();
            puVar2 = PTR_PTR_1126bab40;
            func_0x00010bf01f00(puStack_360);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c27dde0();
            func_0x00010bdc20e0(puVar2);
            dVar22 = (double)fVar21;
            func_0x00010bff2c20(dVar22);
            _objc_release(puStack_3b0);
            _objc_release(puStack_360);
            _objc_release(puVar10);
            puStack_3b0 = puVar6;
            puStack_360 = puVar7;
LAB_106d94c98:
            _objc_release(ppuStack_368);
            goto LAB_106d94e1c;
          }
          func_0x00010c27dde0();
          puVar2 = PTR_PTR_1126bb2f0;
          if (puStack_360 == (undefined *)0x4dc724f) {
            func_0x000108edeff0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0fdb00();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_368 = (undefined **)puStack_3c0;
            puStack_3c0 = puVar2;
            goto LAB_106d94c98;
          }
        }
        ppuStack_358 = (undefined **)((long)ppuStack_358 + 1);
      } while ((undefined **)puStack_370 != ppuStack_358);
      puStack_370 = puVar5;
      func_0x00010bf52a60();
    } while (puStack_370 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  puVar2 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bfedca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (puVar5 == (undefined *)0x0) {
LAB_106d9503c:
    ppuStack_358 = (undefined **)0x0;
  }
  else {
    puVar2 = param_1;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfedcc0();
    _objc_release(puVar2);
    if (puVar5 != (undefined *)0x4dc724f) goto LAB_106d9503c;
    ppuStack_358 = &PTR____CFConstantStringClassReference_110f274f8;
    _objc_retain();
  }
  puVar2 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c249da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (puVar5 == (undefined *)0x0) {
    puStack_360 = (undefined *)0x0;
  }
  else {
    puVar2 = param_1;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c249dc0();
    _objc_release(puVar2);
    if (puVar5 == (undefined *)0xffffffff91f66c27) {
      puStack_360 = (undefined *)0x0;
    }
    else if (puVar5 == (undefined *)0x7b2e3000) {
      puStack_360 = (undefined *)0x2;
    }
    else {
      if (puVar5 != (undefined *)0x7b2e2fc2) {
        puStack_360 = (undefined *)0x0;
        goto LAB_106d95108;
      }
      puStack_360 = (undefined *)0x1;
    }
    func_0x000108edf4d4();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_106d95108:
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010bfaebe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c249de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  func_0x00010bf97e80(puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c140120();
  if ((int)puVar6 != 0) {
    puVar6 = param_1;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c140160();
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfc1320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c297c00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x000108d10868();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c297ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c25bfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c25bf80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c25be40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  func_0x00010b5fa088();
  puVar5 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bfc1340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = param_2;
  func_0x00010b5fa088();
  if (((puVar5 != (undefined *)0x0) &&
      (puVar5 = param_2, func_0x000109024128(), ((ulong)puVar5 & 1) == 0)) &&
     (puVar5 = param_2, func_0x00010b5fa088(), puVar5 != (undefined *)0x1)) {
    func_0x0001090240d4();
  }
  puVar5 = param_2;
  func_0x000109024128();
  if ((((ulong)puVar5 & 1) == 0) && (puVar5 = param_2, func_0x0001090240d4(), (int)puVar5 == 0)) {
    puStack_110 = PTR_PTR_1133c92a8;
    puStack_108 = PTR_PTR_1133c92c8;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = param_2;
    func_0x00010902417c(param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf298a0();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(puVar4);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  puVar8 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar8 != (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      uVar18 = *(undefined8 *)((long)puVar20 * 8);
      func_0x000108d3ee18(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(puVar9);
      _objc_release(uVar18);
      puVar20 = puVar20 + 1;
    } while (puVar8 != puVar20);
    puVar8 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  puVar8 = PTR_PTR_1126b62b0;
  _objc_alloc();
  func_0x00010c0ed100(param_2);
  func_0x00010c0487e0();
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(puStack_360);
  _objc_release(ppuStack_358);
  _objc_release(puStack_3c0);
  _objc_release(puStack_3a0);
  _objc_release(puStack_3b0);
  _objc_release(puStack_378);
  _objc_release(puStack_3e0);
  _objc_release(param_1);
  _objc_release(puStack_3e0);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_268,8);
  _objc_release(uStack_240);
  _objc_release(puVar4);
  _objc_release(puStack_198);
  _objc_release(puStack_1a0);
  _objc_release(puVar19);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  uVar17 = 8;
  __Block_object_dispose(&uStack_268);
  __Unwind_Resume();
  _objc_retain(uVar17);
  uVar14 = uVar17;
  func_0x00010bfe5e40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfaebe0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar15;
  func_0x00010bfc1320();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010c0720c0();
  if ((uVar16 & 1) == 0) {
    puVar19 = *(undefined **)(param_1 + 0x28);
    uVar16 = uVar17;
    func_0x00010bfe5e40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(puVar19);
    _objc_release(uVar16);
  }
  else {
    puVar19 = (undefined *)0x1;
  }
  _objc_release(uVar18);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar17);
  return puVar19;
}



/* Entry: 106d957ac; end: 106d95887;  */

undefined8 FUN_106d957ac(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfe5e40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfaebe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc1320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = param_2;
    func_0x00010bfe5e40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar5);
    _objc_release(uVar4);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 106d95888; end: 106d9592f;  */

bool FUN_106d95888(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c27dde0(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfaebe0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a04a0();
  _objc_release(lVar1);
  return param_2 == lVar2;
}



/* Entry: 106d95930; end: 106d959d7;  */

undefined8 FUN_106d95930(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c297e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfaebe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c297c00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15a3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 106d959d8; end: 106d959ef;  */

void FUN_106d959d8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106d959f0; end: 106d95abf;  */

void FUN_106d959f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010c27dde0();
  lVar1 = param_2;
  func_0x00010c27dde0();
  _objc_release(param_2);
  func_0x000108d3fc9c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2a04a0();
    _objc_release(lVar2);
    if (lVar6 == lVar3) {
      puVar4 = PTR_PTR_1126c40c0;
      _objc_alloc();
      func_0x00010b7448e4();
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined **)(lVar6 + 0x28) = puVar4;
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d95ac0; end: 106d95b07;  */

void FUN_106d95ac0(long param_1,long param_2)

{
  func_0x00010c29a920();
  func_0x000108086f60();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d95b08; end: 106d963d3;  */

void FUN_106d95b08(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_358;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  pcStack_128 = FUN_106d959d8;
  uStack_120 = 0x106d959e8;
  uStack_118 = 0;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x2020000000;
  uStack_148 = 0;
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x3032000000;
  pcStack_178 = FUN_106d959d8;
  uStack_170 = 0x106d959e8;
  uStack_168 = 0;
  puStack_1a8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x2020000000;
  uStack_198 = 0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = &uStack_1e0;
  uStack_1e0 = 0;
  uStack_1d0 = 0x3032000000;
  pcStack_1c8 = FUN_106d959d8;
  uStack_1c0 = 0x106d959e8;
  uStack_1b8 = 0;
  puVar2 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfaec40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_208 = &uStack_210;
  uStack_210 = 0;
  uStack_200 = 0x3032000000;
  pcStack_1f8 = FUN_106d959d8;
  uStack_1f0 = 0x106d959e8;
  uStack_1e8 = 0;
  _objc_retain(lVar3);
  lVar11 = lVar3;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(lVar3);
      }
      uVar14 = *(undefined8 *)(lVar15 * 8);
      _objc_retain(puVar2);
      _objc_retain(puVar4);
      _objc_retain(puVar1);
      _objc_retain(puVar2);
      _objc_retain(puVar4);
      func_0x00010c0bd2a0(uVar14);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar4);
      _objc_release(puVar2);
      lVar15 = lVar15 + 1;
    } while (lVar11 != lVar15);
    lVar11 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126bcd50;
  lVar11 = param_1;
  func_0x00010c2a2d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a2d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  puVar6 = PTR_PTR_1126d2768;
  _objc_alloc();
  lVar11 = param_1;
  func_0x00010c09ea00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01f00();
  func_0x00010bff2c20();
  _objc_release(lVar11);
  puVar7 = param_2;
  func_0x00010c26fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c08fa60();
  puVar9 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  if (puVar8 == (undefined *)0x0) {
    puStack_358 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c09e0c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar8 = param_2;
    func_0x00010c26fd20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fda0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 == (undefined *)0x0) {
      puStack_358 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
      func_0x00010c09e0c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar9);
      puStack_358 = puVar9;
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  puVar9 = PTR_PTR_1126d2760;
  _objc_alloc();
  lVar11 = param_1;
  func_0x00010bf5a600(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009540();
  _objc_release(puVar7);
  _objc_release(lVar11);
  func_0x00010bf17720(param_1);
  func_0x00010bf17780();
  puVar7 = param_2;
  func_0x00010b5fa088();
  if (((puVar7 != (undefined *)0x0) &&
      (puVar7 = param_2, func_0x000109024128(), ((ulong)puVar7 & 1) == 0)) &&
     (puVar7 = param_2, func_0x00010b5fa088(), puVar7 != (undefined *)0x1)) {
    func_0x0001090240d4();
  }
  puVar7 = param_2;
  func_0x000109024128();
  if ((((ulong)puVar7 & 1) == 0) && (puVar7 = param_2, func_0x0001090240d4(), (int)puVar7 == 0)) {
    puStack_110 = PTR_PTR_1133c92a8;
    puStack_108 = PTR_PTR_1133c92c8;
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = param_2;
    func_0x00010902417c(param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf298a0();
  func_0x00010b5fa088();
  puVar8 = PTR_PTR_1126b62b0;
  _objc_alloc(PTR_PTR_1126b62b0);
  func_0x00010c0ed100(param_2);
  uVar14 = 7;
  func_0x00010c0487e0(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release(puStack_358);
  _objc_release(puVar6);
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_210,8);
  _objc_release(uStack_1e8);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(lVar3);
  __Block_object_dispose(&uStack_1e0,8);
  _objc_release(uStack_1b8);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_1b0,8);
  __Block_object_dispose(&uStack_190,8);
  _objc_release(uStack_168);
  __Block_object_dispose(&uStack_160,8);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(uStack_118);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_210,8);
  __Block_object_dispose(&uStack_1e0,8);
  __Block_object_dispose(&uStack_1b0,8);
  __Block_object_dispose(&uStack_190,8);
  __Block_object_dispose(&uStack_160,8);
  lVar11 = 8;
  __Block_object_dispose(&uStack_140);
  __Unwind_Resume();
  _objc_retain(lVar11);
  _objc_retain(uVar14);
  uVar12 = uVar14;
  func_0x00010c0cc820();
  if ((int)uVar12 == 7) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
    puVar1 = PTR_PTR_1126bcd50;
    func_0x00010c297d00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar12 = *(undefined8 *)(lVar13 + 0x28);
    *(undefined **)(lVar13 + 0x28) = puVar1;
    _objc_release(uVar12);
    lVar13 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110f274f8);
    uVar12 = *(undefined8 *)(lVar13 + 0x28);
    *(undefined ***)(lVar13 + 0x28) = &PTR____CFConstantStringClassReference_110f274f8;
    _objc_release(uVar12);
  }
  lVar13 = lVar11;
  func_0x00010bfadea0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar13 == 0) {
    lVar13 = lVar11;
    func_0x00010bfd55a0();
    if ((int)lVar13 == 0) goto LAB_106d96610;
    puVar2 = PTR_PTR_1126bcd50;
    func_0x00010c2467c0();
    puVar1 = puVar2;
    func_0x000108d3fc9c();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126c40c0;
      _objc_alloc();
      func_0x00010b7448e4();
      lVar13 = *(long *)(*(long *)(param_1 + 0x58) + 8);
      uVar12 = *(undefined8 *)(lVar13 + 0x28);
      *(undefined **)(lVar13 + 0x28) = puVar2;
      _objc_release(uVar12);
    }
    puVar2 = PTR_PTR_1126bcd50;
    func_0x00010c246680();
    if (puVar2 != (undefined *)0x0) {
      func_0x000108086f60();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
      }
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126bcd50;
    func_0x00010c140040();
    *(char *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x18) = (char)puVar2;
  }
  else {
    func_0x00010bfadea0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    if (*(long *)(lVar13 + 0x28) == 0) {
      _objc_retain(puVar1);
      uVar12 = *(undefined8 *)(lVar13 + 0x28);
      *(undefined **)(lVar13 + 0x28) = puVar1;
      _objc_release(uVar12);
    }
    uVar10 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf4b900();
    if ((uVar10 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
      puVar2 = PTR_PTR_1126d2770;
      _objc_alloc(PTR_PTR_1126d2770);
      func_0x00010c012f60();
      puVar4 = PTR_PTR_1126d2778;
      func_0x00010bfc1400(PTR_PTR_1126d2778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
  }
  _objc_release(puVar1);
LAB_106d96610:
  _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 106d963d4; end: 106d96633;  */

void FUN_106d963d4(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010c0cc820();
  if ((int)uVar5 == 7) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
    puVar1 = PTR_PTR_1126bcd50;
    func_0x00010c297d00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar1;
    _objc_release(uVar5);
    lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110f274f8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined ***)(lVar6 + 0x28) = &PTR____CFConstantStringClassReference_110f274f8;
    _objc_release(uVar5);
  }
  lVar6 = param_2;
  func_0x00010bfadea0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar6 == 0) {
    lVar6 = param_2;
    func_0x00010bfd55a0();
    if ((int)lVar6 == 0) goto LAB_106d96610;
    puVar4 = PTR_PTR_1126bcd50;
    func_0x00010c2467c0();
    puVar1 = puVar4;
    func_0x000108d3fc9c();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126c40c0;
      _objc_alloc();
      func_0x00010b7448e4();
      lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 8);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined **)(lVar6 + 0x28) = puVar4;
      _objc_release(uVar5);
    }
    puVar4 = PTR_PTR_1126bcd50;
    func_0x00010c246680();
    if (puVar4 != (undefined *)0x0) {
      func_0x000108086f60();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
      }
      _objc_release(puVar4);
    }
    puVar4 = PTR_PTR_1126bcd50;
    func_0x00010c140040();
    *(char *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x18) = (char)puVar4;
  }
  else {
    func_0x00010bfadea0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    if (*(long *)(lVar6 + 0x28) == 0) {
      _objc_retain(puVar1);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined **)(lVar6 + 0x28) = puVar1;
      _objc_release(uVar5);
    }
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf4b900();
    if ((uVar2 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
      puVar4 = PTR_PTR_1126d2770;
      _objc_alloc(PTR_PTR_1126d2770);
      func_0x00010c012f60();
      puVar3 = PTR_PTR_1126d2778;
      func_0x00010bfc1400(PTR_PTR_1126d2778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar3);
      _objc_release(puVar4);
    }
  }
  _objc_release(puVar1);
LAB_106d96610:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d96634; end: 106d9673f;  */

void FUN_106d96634(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  return;
}



/* Entry: 106d96740; end: 106d96827;  */

void FUN_106d96740(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe5ea0();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  if (*(long *)(lVar5 + 0x28) == 0) {
    _objc_retain(puVar1);
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar1;
    _objc_release(uVar2);
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf4b900();
  if ((uVar3 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
  puVar4 = PTR_PTR_1126b3898;
  _objc_alloc(PTR_PTR_1126b3898);
  func_0x00010c013160();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d96828; end: 106d96adf; -[SCGalleryPrivateLockedTabController initWithContainerViewController:configuration:delegate:tabType:privateLockedTabService:memoriesPrivateGallerySetupFlowScopeExposer:] */

undefined8 *
FUN_106d96828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f6d70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xf,param_5);
    puVar1[0x10] = param_6;
    puVar1[5] = 0x10000000000000;
    _objc_retain(param_7);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xd,param_8);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = puVar1[0xc];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0c94c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c252740();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar6 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar7 = puVar1[0xc];
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c0653c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106d96ae0; end: 106d96b3f;  */

void FUN_106d96ae0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c067fc0(param_2);
  _objc_release(param_2);
  func_0x00010be2e700(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d96b40; end: 106d96b47; -[SCGalleryPrivateLockedTabController scrollBarTopOffset] */

undefined8 FUN_106d96b40(void)

{
  return 0;
}



/* Entry: 106d96b48; end: 106d96b4f; -[SCGalleryPrivateLockedTabController isPrivate] */

undefined8 FUN_106d96b48(void)

{
  return 1;
}



/* Entry: 106d96b50; end: 106d96c33; -[SCGalleryPrivateLockedTabController shouldDisplay] */

uint FUN_106d96b50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfbd4e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    uVar5 = 1;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0c94c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07b280();
    uVar5 = (uint)uVar4 ^ 1;
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  return uVar5;
}



/* Entry: 106d96c34; end: 106d96c43; -[SCGalleryPrivateLockedTabController isViewLoaded] */

bool FUN_106d96c34(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}



/* Entry: 106d96c44; end: 106d9734b; -[SCGalleryPrivateLockedTabController loadViewIfNeeded] */

void FUN_106d96c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_5;
  func_0x00010c0834c0();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x000100841590(param_3,param_4);
    func_0x00010c013de0();
    uVar22 = *(undefined8 *)(param_5 + 0x20);
    *(undefined **)(param_5 + 0x20) = puVar2;
    _objc_release(uVar22);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x20));
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_5 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d2780;
    _objc_alloc();
    lVar4 = param_5 + 8;
    _objc_loadWeakRetained();
    uVar22 = uVar3;
    func_0x00010c121fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf6c400();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2639e0();
    uVar8 = uVar3;
    func_0x00010c246fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010c0869e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010c0c94c0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010bf63f40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010bfbd160();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010c0c94e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar3;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar3;
    func_0x00010c0c94a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar3;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002a60();
    uVar23 = *(undefined8 *)(param_5 + 0x38);
    *(undefined **)(param_5 + 0x38) = puVar2;
    _objc_release(uVar23);
    _objc_release(uVar24);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar22);
    _objc_release(lVar4);
    puVar2 = PTR_PTR_1126d2788;
    _objc_alloc();
    lVar4 = param_5 + 8;
    _objc_loadWeakRetained();
    uVar22 = uVar3;
    func_0x00010c121fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf6c400();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c263a00();
    uVar8 = uVar3;
    func_0x00010c246fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010c0869e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010c0c94c0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010bf63f40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010bfbd160();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010c0c94e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar3;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar3;
    func_0x00010c0c94a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002a80();
    uVar24 = *(undefined8 *)(param_5 + 0x40);
    *(undefined **)(param_5 + 0x40) = puVar2;
    _objc_release(uVar24);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar22);
    _objc_release(lVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_5 + 0x40));
    puVar2 = PTR_PTR_1126c3a20;
    _objc_alloc();
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c062200();
    uVar22 = *(undefined8 *)(param_5 + 0x48);
    *(undefined **)(param_5 + 0x48) = puVar2;
    _objc_release(uVar22);
    _objc_release(uVar3);
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar19;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar25 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar19);
        }
        uVar22 = *(undefined8 *)((long)puVar25 * 8);
        func_0x00010c29bf00(uVar22);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7f60();
        func_0x00010befbb60(*(undefined8 *)(param_5 + 0x20));
        func_0x00010c0bbfc0(uVar22);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar22);
        puVar25 = puVar25 + 1;
      } while (puVar2 != puVar25);
      puVar2 = puVar19;
      func_0x00010bf52a60();
    }
    _objc_release(puVar19);
    func_0x00010be188a0(param_5);
    func_0x00010bea37c0(param_5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_6;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar21;
  (**(code **)(lVar21 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar4;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar20 + 0x10))(0,0,lVar20);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar20);
  _objc_release(lVar4);
  _objc_release(lVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106d9734c; end: 106d97407;  */

void FUN_106d9734c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar3 + 0x10))(0,0,param_3,0,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106d97408; end: 106d9742f; -[SCGalleryPrivateLockedTabController view] */

void FUN_106d97408(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d97430; end: 106d97437; -[SCGalleryPrivateLockedTabController collectionView] */

undefined8 FUN_106d97430(void)

{
  return 0;
}



/* Entry: 106d97438; end: 106d9743f; -[SCGalleryPrivateLockedTabController allItems] */

undefined8 FUN_106d97438(void)

{
  return 0;
}



/* Entry: 106d97440; end: 106d97447; -[SCGalleryPrivateLockedTabController galleryItemIdToSnapsMap] */

undefined8 FUN_106d97440(void)

{
  return 0;
}



/* Entry: 106d97448; end: 106d9744f; -[SCGalleryPrivateLockedTabController galleryItemIdToPHAssetsMap] */

undefined8 FUN_106d97448(void)

{
  return 0;
}



/* Entry: 106d97450; end: 106d97457; -[SCGalleryPrivateLockedTabController itemIdsToExclude] */

undefined8 FUN_106d97450(void)

{
  return 0;
}



/* Entry: 106d97458; end: 106d9745f; -[SCGalleryPrivateLockedTabController prefersAllItemsAreNotIterated] */

undefined8 FUN_106d97458(void)

{
  return 0;
}



/* Entry: 106d97460; end: 106d97467; -[SCGalleryPrivateLockedTabController allItemsCount] */

undefined8 FUN_106d97460(void)

{
  return 0;
}



/* Entry: 106d97468; end: 106d9746f; -[SCGalleryPrivateLockedTabController itemsInRect:] */

undefined8 FUN_106d97468(void)

{
  return 0;
}



/* Entry: 106d97470; end: 106d97477; -[SCGalleryPrivateLockedTabController indexPathForId:itemLevelIdentifier:] */

undefined8 FUN_106d97470(void)

{
  return 0;
}



/* Entry: 106d97478; end: 106d974bb; -[SCGalleryPrivateLockedTabController setScrollContentInset:] */

void FUN_106d97478(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  ushort uVar1;
  
  uVar1 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_5 + 0xa0) == param_4),
                              CONCAT24(-(ushort)(*(double *)(param_5 + 0x98) == param_3),
                                       CONCAT22(-(ushort)(*(double *)(param_5 + 0x90) == param_2),
                                                -(ushort)(*(double *)(param_5 + 0x88) == param_1))))
                     ,2);
  if ((uVar1 & 1) == 0) {
    *(double *)(param_5 + 0x88) = param_1;
    *(double *)(param_5 + 0x90) = param_2;
    *(double *)(param_5 + 0x98) = param_3;
    *(double *)(param_5 + 0xa0) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bee4c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__updateWithScrollContentInset_112596ca8);
    return;
  }
  return;
}



/* Entry: 106d974bc; end: 106d974c7; -[SCGalleryPrivateLockedTabController scrollContentOffset] */

double FUN_106d974bc(long param_1)

{
  return -*(double *)(param_1 + 0x88);
}



/* Entry: 106d974c8; end: 106d974cf; -[SCGalleryPrivateLockedTabController contentHeight] */

undefined8 FUN_106d974c8(void)

{
  return 0;
}



/* Entry: 106d974d0; end: 106d974db; -[SCGalleryPrivateLockedTabController setScrollContentOffset:] */

void FUN_106d974d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setScrollContentOffset_animated__11265b8b8,0,0);
  return;
}



/* Entry: 106d974dc; end: 106d974f3; -[SCGalleryPrivateLockedTabController setScrollContentOffset:animated:completion:] */

void FUN_106d974dc(void)

{
  char *pcVar1;
  long in_x3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  char *pcStack_28;
  
  if (in_x3 != 0) {
    pcVar1 = "APPSTORE";
    func_0x0001000d77b8("APPSTORE",in_x3);
    func_0x000107c61180();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    puStack_38 = &UNK_100c3b500;
    puStack_30 = &UNK_110849530;
    pcStack_28 = pcVar1;
    func_0x000107c61174();
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
    func_0x000107c61170(pcStack_28);
    func_0x000107c61170(pcVar1);
    return;
  }
  return;
}



/* Entry: 106d974f4; end: 106d974fb; -[SCGalleryPrivateLockedTabController scrollContentDistanceToTop] */

undefined8 FUN_106d974f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106d974fc; end: 106d97527; -[SCGalleryPrivateLockedTabController setFocused:] */

void FUN_106d974fc(long param_1,undefined8 param_2,uint param_3)

{
  if (((*(byte *)(param_1 + 0x71) != param_3) &&
      (*(char *)(param_1 + 0x71) = (char)param_3, (param_3 & 1) == 0)) &&
     (*(long *)(param_1 + 0x30) == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_reset_11262ba18);
    return;
  }
  return;
}



/* Entry: 106d97528; end: 106d9752b; -[SCGalleryPrivateLockedTabController changeSelected:forGalleryItem:] */

void FUN_106d97528(void)

{
  return;
}



/* Entry: 106d9752c; end: 106d97533; -[SCGalleryPrivateLockedTabController selectedGalleryItems] */

undefined8 FUN_106d9752c(void)

{
  return 0;
}



/* Entry: 106d97534; end: 106d97537; -[SCGalleryPrivateLockedTabController scrollToGalleryItem:animated:] */

void FUN_106d97534(void)

{
  return;
}



/* Entry: 106d97538; end: 106d9753f; -[SCGalleryPrivateLockedTabController isDragging] */

undefined8 FUN_106d97538(void)

{
  return 0;
}



/* Entry: 106d97540; end: 106d97547; -[SCGalleryPrivateLockedTabController isTracking] */

undefined8 FUN_106d97540(void)

{
  return 0;
}



/* Entry: 106d97548; end: 106d97563; -[SCGalleryPrivateLockedTabController isEditing] */

undefined8 FUN_106d97548(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010c0712d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_isEditingPassphrase_1125f9ec0);
    return uVar1;
  }
  return 0;
}



/* Entry: 106d97564; end: 106d9757b; -[SCGalleryPrivateLockedTabController endEditing] */

void FUN_106d97564(long param_1)

{
  if (*(long *)(param_1 + 0x30) == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c255f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_stopEditingPassphrase_1126731e8);
    return;
  }
  return;
}



/* Entry: 106d9757c; end: 106d97583; -[SCGalleryPrivateLockedTabController isInLineSearchable] */

undefined8 FUN_106d9757c(void)

{
  return 0;
}



/* Entry: 106d97584; end: 106d9758b; -[SCGalleryPrivateLockedTabController shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController] */

undefined8 FUN_106d97584(void)

{
  return 0;
}



/* Entry: 106d9758c; end: 106d97593; -[SCGalleryPrivateLockedTabController shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController] */

undefined8 FUN_106d9758c(void)

{
  return 0;
}



/* Entry: 106d97594; end: 106d97597; -[SCGalleryPrivateLockedTabController deeplinkToOperaWithDestinationInfo:] */

void FUN_106d97594(void)

{
  return;
}



/* Entry: 106d97598; end: 106d9759b; -[SCGalleryPrivateLockedTabController galleryViewWillAppear] */

void FUN_106d97598(void)

{
  return;
}



/* Entry: 106d9759c; end: 106d9759f; -[SCGalleryPrivateLockedTabController galleryViewDidAppear] */

void FUN_106d9759c(void)

{
  return;
}



/* Entry: 106d975a0; end: 106d975a3; -[SCGalleryPrivateLockedTabController galleryViewDidDisappear] */

void FUN_106d975a0(void)

{
  return;
}



/* Entry: 106d975a4; end: 106d975a7; -[SCGalleryPrivateLockedTabController didTriggerCreateMashupForStory:] */

void FUN_106d975a4(void)

{
  return;
}



/* Entry: 106d975a8; end: 106d975ab; -[SCGalleryPrivateLockedTabController didTriggerRefetchLatestFeaturedStories] */

void FUN_106d975a8(void)

{
  return;
}



/* Entry: 106d975ac; end: 106d975b3; -[SCGalleryPrivateLockedTabController pageViewName] */

undefined8 FUN_106d975ac(void)

{
  return 0x7d;
}



/* Entry: 106d975b4; end: 106d975b7; -[SCGalleryPrivateLockedTabController scrollToTop] */

void FUN_106d975b4(void)

{
  return;
}



/* Entry: 106d975b8; end: 106d975eb; -[SCGalleryPrivateLockedTabController lockedTopSecretStateControllerDidBeginEditing:] */

void FUN_106d975b8(long param_1)

{
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2679a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d975ec; end: 106d9761f; -[SCGalleryPrivateLockedTabController lockedTopSecretStateControllerDidEndEditing:] */

void FUN_106d975ec(long param_1)

{
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010c267a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d97620; end: 106d979db; -[SCGalleryPrivateLockedTabController _handlePrivateGalleryManagerStateChange:] */

/* WARNING: Possible PIC construction at 0x000106d97928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d9792c) */

void FUN_106d97620(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (1 < param_7) {
    if (param_7 == 2) {
      if (*(long *)(param_5 + 0x30) != 0) {
        return;
      }
    }
    else {
      if (param_7 != 3) {
        return;
      }
      if (1 < *(long *)(param_5 + 0x30) - 1U) {
        return;
      }
      lVar6 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      param_1 = param_1 + *(double *)(param_5 + 0x90);
      param_2 = *(double *)(param_5 + 0x88) + param_2;
      param_3 = param_3 - (*(double *)(param_5 + 0x90) + *(double *)(param_5 + 0xa0));
      param_4 = param_4 - (*(double *)(param_5 + 0x88) + *(double *)(param_5 + 0x98));
      _objc_release(lVar6);
      lVar6 = param_5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010c13a180(param_1,param_2,param_3,param_4,
                          *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                          *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                          *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                          *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      lVar6 = param_5 + 8;
      _objc_loadWeakRetained(lVar6);
      lVar2 = lVar6;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf513e0(param_1,param_2,param_3,param_4,lVar2);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar6);
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4,lVar5);
      lVar6 = param_5 + 8;
      _objc_loadWeakRetained(lVar6);
      lVar2 = lVar6;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar2);
      _objc_release(lVar6);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_retain(lVar5);
      _objc_retain(lVar5);
      func_0x00010bf03440(0x3fd3333333333333,0,puVar1);
      if (*(long *)(param_5 + 0x30) == 1) {
        lVar6 = 0x38;
      }
      else {
        if (*(long *)(param_5 + 0x30) != 2) goto code_r0x00010be886e0;
        lVar6 = 0x40;
      }
      uVar4 = *(undefined8 *)(param_5 + lVar6);
      func_0x00010c29bf00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar4);
      func_0x00010c137fe0(*(undefined8 *)(param_5 + lVar6));
    }
code_r0x00010be886e0:
                    /* WARNING: Could not recover jumptable at 0x00010be886f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__refreshLatestState_11257fb58);
    return;
  }
  if (param_7 == 0) {
    if (*(long *)(param_5 + 0x30) != 3 && *(long *)(param_5 + 0x30) != 0) {
      return;
    }
    func_0x00010becadc0(param_5);
    goto code_r0x00010be886e0;
  }
  if (param_7 != 1) {
    return;
  }
  if (1 < *(long *)(param_5 + 0x30) - 1U) {
    return;
  }
  lVar6 = param_5;
  func_0x00010bdf7200();
  lVar5 = *(long *)(param_5 + 0x30);
  if (lVar5 == lVar6) {
    return;
  }
  if (lVar5 == 1) {
    lVar5 = 0x38;
  }
  else {
    if (lVar5 != 2) goto LAB_106d97994;
    lVar5 = 0x40;
  }
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar4);
  func_0x00010c137fe0(*(undefined8 *)(param_5 + lVar5));
LAB_106d97994:
  *(long *)(param_5 + 0x30) = lVar6;
  func_0x00010bec26c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106d979dc; end: 106d97a37;  */

void FUN_106d979dc(long param_1,undefined8 param_2)

{
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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3ff8000000000000,0x3ff8000000000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106d97a38; end: 106d97a3f;  */

void FUN_106d97a38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 106d97a40; end: 106d97b47; -[SCGalleryPrivateLockedTabController _setDisabledView] */

void FUN_106d97a40(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d2790;
  _objc_alloc();
  func_0x00010c013de0(param_1 + 0.0,param_2 + 0.0,param_3,param_4);
  uVar5 = *(undefined8 *)(param_5 + 0x58);
  *(undefined **)(param_5 + 0x58) = puVar1;
  _objc_release(uVar5);
  func_0x00010befbb60(*(undefined8 *)(param_5 + 0x20),param_6,*(undefined8 *)(param_5 + 0x58));
  uVar2 = *(undefined8 *)(param_5 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0653c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07d540();
  func_0x00010be01de0(param_5,param_6,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d97b48; end: 106d97b4b; -[SCGalleryPrivateLockedTabController _updateWithScrollContentInset] */

void FUN_106d97b48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be65010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyScrollContentOffsetChange_112576da0);
  return;
}



/* Entry: 106d97b4c; end: 106d97bb3; -[SCGalleryPrivateLockedTabController _notifyScrollContentOffsetChange] */

void FUN_106d97b4c(double param_1,long param_2)

{
  func_0x00010c151ea0();
  if (*(double *)(param_2 + 0x28) != param_1) {
    *(double *)(param_2 + 0x28) = param_1;
    param_2 = param_2 + 0x78;
    _objc_loadWeakRetained(param_2);
    func_0x00010c2679c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106d97bb4; end: 106d97bfb; -[SCGalleryPrivateLockedTabController _forceRefreshLatestState] */

void FUN_106d97bb4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdf7200();
  *(long *)(param_1 + 0x30) = lVar1;
  func_0x00010bec26c0(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d97bfc; end: 106d97c5b; -[SCGalleryPrivateLockedTabController _refreshLatestState] */

void FUN_106d97bfc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdf7200();
  if (*(long *)(param_1 + 0x30) == lVar1) {
    return;
  }
  *(long *)(param_1 + 0x30) = lVar1;
  func_0x00010bec26c0(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d97c5c; end: 106d97d5f; -[SCGalleryPrivateLockedTabController _currentState] */

undefined8 FUN_106d97c5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfbd4e0();
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    uVar7 = 3;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0c94c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar5 = uVar6;
    func_0x00010c07b280();
    if ((uVar5 & 1) == 0) {
      uVar5 = uVar6;
      func_0x00010c07b260();
      uVar7 = 1;
      if ((int)uVar5 != 0) {
        uVar7 = 2;
      }
    }
    else {
      uVar7 = 0;
    }
    _objc_release(uVar6);
  }
  return uVar7;
}



/* Entry: 106d97d60; end: 106d97db7; -[SCGalleryPrivateLockedTabController _stateViewForState:] */

void FUN_106d97d60(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 3) {
    func_0x00010beadf80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 == 2) {
      uVar1 = *(undefined8 *)(param_1 + 0x40);
    }
    else {
      if (param_3 != 1) goto LAB_106d97db0;
      uVar1 = *(undefined8 *)(param_1 + 0x38);
    }
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_106d97db0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d97db8; end: 106d97e17; -[SCGalleryPrivateLockedTabController _tearDownMEOOnboarding] */

void FUN_106d97db8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x50),param_2,1);
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12b760();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d97e18; end: 106d97edf; -[SCGalleryPrivateLockedTabController emptyStateViewDidTapButton] */

void FUN_106d97e18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126c3220;
  _objc_alloc(PTR_PTR_1126c3220);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c016880(puVar3,param_2,lVar1,param_1);
  _objc_release(lVar1);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106d97ee0; end: 106d9824b; -[SCGalleryPrivateLockedTabController _setupMEOOnboardingView] */

void FUN_106d97ee0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *(long *)(param_1 + 0x50);
  if (lVar21 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c013de0();
    uVar19 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar1;
    _objc_release(uVar19);
    if (*(long *)(param_1 + 0x48) == 0) {
      puVar1 = PTR_PTR_1126c3a20;
      _objc_alloc();
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar2;
      func_0x00010bf5f860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c062200(puVar1,param_2,4,param_1,uVar19);
      uVar20 = *(undefined8 *)(param_1 + 0x48);
      *(undefined **)(param_1 + 0x48) = puVar1;
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar2);
    }
    lVar21 = param_1 + 8;
    _objc_loadWeakRetained(lVar21);
    func_0x00010bef76e0();
    _objc_release(lVar21);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar19;
    func_0x00010bf493c0(0,uVar19,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uStack_88 = uVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar20;
    func_0x00010bf493a0(uVar20,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    uStack_80 = uVar7;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493a0(uVar9,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    uStack_78 = uVar11;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf1ff80(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493a0(uVar13,param_2,uVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar16);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar20);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar19);
    _objc_release(uVar3);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x50));
    lVar21 = *(long *)(param_1 + 0x50);
  }
  lVar17 = lVar21;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar21);
    return;
  }
  ___stack_chk_fail();
  func_0x00010be886e0();
  lVar21 = lVar17 + 0x68;
  _objc_loadWeakRetained();
  lVar18 = lVar21;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar21);
  if (lVar18 != 0) {
    lVar17 = lVar17 + 0x68;
    _objc_loadWeakRetained(lVar17);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar17);
    return;
  }
  return;
}



/* Entry: 106d9824c; end: 106d982cb; -[SCGalleryPrivateLockedTabController privateGallerySetupFlowDidCancel:] */

void FUN_106d9824c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010be886e0();
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x68;
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



/* Entry: 106d982cc; end: 106d98353; -[SCGalleryPrivateLockedTabController privateGallerySetupFlowDidFinish:] */

void FUN_106d982cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010becadc0();
  func_0x00010be188a0(param_1);
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x68;
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



/* Entry: 106d98354; end: 106d9837f; -[SCGalleryPrivateLockedTabController memoriesInlineSearchDataSource:didChangeSearchResults:] */

void FUN_106d98354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c07d540(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be01df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__disableViewForActiveSearchQuery_11255e118,param_3);
  return;
}



/* Entry: 106d98380; end: 106d983b3; -[SCGalleryPrivateLockedTabController _disableViewForActiveSearchQuery:] */

void FUN_106d98380(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c21e900(*(undefined8 *)(param_1 + 0x20),param_2,(uint)param_3 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010c18ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_setDisabled__112641538,param_3);
  return;
}



/* Entry: 106d983b4; end: 106d983bf; -[SCGalleryPrivateLockedTabController scrollContentInset] */

undefined8 FUN_106d983b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106d983c0; end: 106d983c7; -[SCGalleryPrivateLockedTabController visible] */

undefined1 FUN_106d983c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* Entry: 106d983c8; end: 106d983cf; -[SCGalleryPrivateLockedTabController setVisible:] */

void FUN_106d983c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 106d983d0; end: 106d983d7; -[SCGalleryPrivateLockedTabController focused] */

undefined1 FUN_106d983d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x71);
}



/* Entry: 106d983d8; end: 106d983df; -[SCGalleryPrivateLockedTabController loading] */

undefined1 FUN_106d983d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x72);
}



/* Entry: 106d983e0; end: 106d983e7; -[SCGalleryPrivateLockedTabController setLoading:] */

void FUN_106d983e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x72) = param_3;
  return;
}



/* Entry: 106d983e8; end: 106d983ef; -[SCGalleryPrivateLockedTabController selectMode] */

undefined1 FUN_106d983e8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x73);
}



/* Entry: 106d983f0; end: 106d983f7; -[SCGalleryPrivateLockedTabController setSelectMode:] */

void FUN_106d983f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x73) = param_3;
  return;
}


