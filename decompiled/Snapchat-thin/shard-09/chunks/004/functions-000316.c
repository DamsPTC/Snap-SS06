/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106dc0010; end: 106dc0017; -[SCComposerMediaLoadTask completion] */

undefined8 FUN_106dc0010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106dc0018; end: 106dc001f; -[SCComposerMediaLoadTask setCompletion:] */

void FUN_106dc0018(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106dc0020; end: 106dc004f; -[SCComposerMediaLoadTask .cxx_destruct] */

void FUN_106dc0020(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106dc0050; end: 106dc00e7; -[SCComposerMediaCameraRollRequest initWithAssetId:targetSize:deliveryMode:] */

undefined1 *
FUN_106dc0050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f6ee0;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106dc00e8; end: 106dc00ef; -[SCComposerMediaCameraRollRequest assetId] */

undefined8 FUN_106dc00e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106dc00f0; end: 106dc00f7; -[SCComposerMediaCameraRollRequest targetSize] */

undefined1  [16] FUN_106dc00f0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 106dc00f8; end: 106dc00ff; -[SCComposerMediaCameraRollRequest deliveryMode] */

undefined8 FUN_106dc00f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106dc0100; end: 106dc010b; -[SCComposerMediaCameraRollRequest .cxx_destruct] */

void FUN_106dc0100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106dc010c; end: 106dc0177; -[SCComposerMediaCameraRollDownloader supportedURLSchemes] */

void FUN_106dc010c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e86b18;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_sync_enter(puVar1);
    while( true ) {
      lVar3 = *(long *)(puVar1 + 0x10);
      func_0x00010bf529e0();
      if (lVar3 == 0) break;
      uVar4 = *(ulong *)(puVar1 + 0x10);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3c0(*(undefined8 *)(puVar1 + 0x10),param_2,0);
      uVar5 = uVar4;
      func_0x00010bf2f680();
      if ((uVar5 & 1) == 0) {
        func_0x00010befa120(puVar2,param_2,uVar4);
      }
      _objc_release(uVar4);
    }
    _objc_sync_exit(puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106dc0178; end: 106dc023f; -[SCComposerMediaCameraRollDownloader _collectLoadTasks] */

void FUN_106dc0178(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  while( true ) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (lVar2 == 0) break;
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x10),param_2,0);
    uVar4 = uVar3;
    func_0x00010bf2f680();
    if ((uVar4 & 1) == 0) {
      func_0x00010befa120(puVar1,param_2,uVar3);
    }
    _objc_release(uVar3);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dc0240; end: 106dc06cf; -[SCComposerMediaCameraRollDownloader flushLoads] */

void FUN_106dc0240(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bde1c40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf529e0();
  if (uVar11 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    _objc_retain(param_3);
    uVar11 = param_3;
    func_0x00010bf52a60();
    if (uVar11 != 0) {
      lVar12 = *plStack_1e0;
      do {
        uVar14 = 0;
        do {
          if (*plStack_1e0 != lVar12) {
            _objc_enumerationMutation(param_3);
          }
          uVar3 = *(undefined8 *)(lStack_1e8 + uVar14 * 8);
          func_0x00010c134680(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar3;
          func_0x00010bf0b260();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar13);
          _objc_release(uVar3);
          uVar14 = uVar14 + 1;
        } while (uVar11 != uVar14);
        uVar11 = param_3;
        func_0x00010bf52a60();
      } while (uVar11 != 0);
    }
    _objc_release(param_3);
    puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x00010bfa50e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    dVar16 = 0.0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    _objc_retain(puVar4);
    param_5 = &uStack_230;
    puVar6 = puVar4;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      lVar12 = *plStack_220;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_220 != lVar12) {
            _objc_enumerationMutation(puVar4);
          }
          uVar13 = *(undefined8 *)(lStack_228 + (long)puVar15 * 8);
          func_0x00010c09da80(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar5);
          _objc_release(uVar13);
          puVar15 = puVar15 + 1;
        } while (puVar6 != puVar15);
        param_5 = &uStack_230;
        puVar6 = puVar4;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    uVar11 = param_3;
    func_0x00010bf529e0();
    if (uVar11 != 0) {
      uVar11 = 0;
      dVar17 = *(double *)PTR__CGSizeZero_110347620;
      dVar18 = *(double *)(PTR__CGSizeZero_110347620 + 8);
      do {
        puVar6 = puVar2;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = param_3;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar15 == (undefined *)0x0) {
          ppuVar10 = &PTR____CFConstantStringClassReference_110e86ab8;
          func_0x000108543ce4(&PTR____CFConstantStringClassReference_110e86ab8);
          _objc_retainAutoreleasedReturnValue();
          param_5 = (undefined8 *)0x0;
          func_0x00010c0dce80(uVar14);
        }
        else {
          uVar7 = uVar14;
          func_0x00010c134680(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26a0e0();
          _objc_release(uVar7);
          bVar1 = false;
          if ((dVar16 == dVar17) && (bVar1 = false, !NAN(param_2) && !NAN(dVar18))) {
            bVar1 = param_2 == dVar18;
          }
          if (bVar1) {
            puVar8 = puVar15;
            func_0x00010c0fce40();
            dVar16 = (double)puVar8;
            puVar8 = puVar15;
            func_0x00010c0fcaa0();
            param_2 = (double)puVar8;
          }
          uVar7 = uVar14;
          func_0x00010c134680(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6d200();
          _objc_release(uVar7);
          ppuVar10 = (undefined **)PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
          _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
          func_0x00010c18ba80();
          func_0x00010c1ec960(ppuVar10);
          func_0x00010c1cc000(ppuVar10);
          puVar9 = (undefined8 *)PTR__OBJC_CLASS___PHImageManager_1126bfc70;
          func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(uVar14);
          param_5 = puVar9;
          func_0x00010c1357a0(puVar9);
          _objc_release(puVar9);
          func_0x00010c1aa820(uVar14);
          _objc_release(uVar14);
        }
        _objc_release(ppuVar10);
        _objc_release(puVar15);
        _objc_release(uVar14);
        _objc_release(puVar6);
        uVar11 = uVar11 + 1;
        uVar14 = param_3;
        func_0x00010bf529e0();
      } while (uVar11 < uVar14);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_4);
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dce80(uVar13);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106dc06d0; end: 106dc0743;  */

void FUN_106dc06d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dce80(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dc0744; end: 106dc08a3; -[SCComposerMediaCameraRollDownloader requestPayloadWithURL:error:] */

void FUN_106dc0744(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e86b98;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar4 = (undefined *)0x0;
    *param_5 = ppuVar3;
  }
  else {
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110e86b38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar5 = param_1;
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110e86b58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010bf885a0(lVar2);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110e86b78);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c067fc0(lVar2);
    }
    puVar4 = PTR_PTR_1126d2978;
    _objc_alloc(PTR_PTR_1126d2978);
    func_0x00010bff44c0(param_1,uVar5);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106dc08a4; end: 106dc09af; -[SCComposerMediaCameraRollDownloader loadImageWithRequestPayload:parameters:completion:] */

void FUN_106dc08a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d2980;
  _objc_alloc(PTR_PTR_1126d2980);
  func_0x00010c03eae0();
  func_0x00010c17fb20();
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10));
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar2 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106dc09b0;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_1;
    func_0x00010007380c(*(undefined8 *)(param_1 + 8),&puStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dc09b0; end: 106dc09b7;  */

void FUN_106dc09b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_flushLoads_1125ca5b8)
  ;
  return;
}



/* Entry: 106dc09b8; end: 106dc0ab7; +[SCComposerMediaCameraRollDownloader imageURLForAssetId:] */

void FUN_106dc09b8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  long lVar12;
  long lStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = &PTR____CFConstantStringClassReference_110daafd8;
  plVar11 = (long *)0x0;
  if (param_5 != 0) {
    lStack_40 = param_5;
    _objc_retain(param_5);
    plVar11 = &lStack_40;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e86b18;
    func_0x000108543d00(&PTR____CFConstantStringClassReference_110e86b18,puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar10 = ppuVar3;
    }
    _objc_retain(ppuVar10);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(puVar1);
    param_3 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = &PTR____CFConstantStringClassReference_110daafd8;
    if (plVar11 != (long *)0x0) {
      _objc_retain(plVar11);
      func_0x00010c0df720(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(plVar11);
      ppuVar2 = &PTR____CFConstantStringClassReference_110e86b18;
      func_0x000108543d00(&PTR____CFConstantStringClassReference_110e86b18,puVar9);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar3 != (undefined **)0x0) {
        ppuVar10 = ppuVar3;
      }
      _objc_retain(ppuVar10);
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar1);
      param_3 = puVar1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return;
}



/* Entry: 106dc0ab8; end: 106dc0cbf; +[SCComposerMediaCameraRollDownloader imageURLForAssetId:targetSize:deliveryMode:] */

void FUN_106dc0ab8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_5 != 0) {
    _objc_retain(param_5);
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e86b18;
    func_0x000108543d00(&PTR____CFConstantStringClassReference_110e86b18,puVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar11 = ppuVar9;
    }
    _objc_retain(ppuVar11);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    param_3 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106dc0cc0; end: 106dc0cef; -[SCComposerMediaCameraRollDownloader .cxx_destruct] */

void FUN_106dc0cc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106dc0cf0; end: 106dc1fe7; -[SCGallerySendController initWithUserSession:cloudFS:memoriesCloudFSServices:encryptedContentManager:dataObjectContext:autoSaveMutating:cameraActiveVideoPaths:circumstanceEngine:contentDelivery:musicSelectionLoader:musicMediaLoader:grapheneRegistry:conversationDestinationParser:currrentPageTracker:customStoriesDataFetcher:customStoriesDataMutator:ephemeralMediaFactory:featureSettingsService:memoriesAutosaveMigrator:galleryMediaSender:imageProcessCommandProvider:legacyEphemeralMediaFactory:snapchattersSynchronousDataFetcher:legacyGalleryStorySaver:lensAssetsDeliveryServices:myStoriesDataCoordinator:memoriesStoryMessageSender:offPlatformLinkGenerationService:performerProvider:previewCameraSourceOverlayService:snapchatterPublicInfoFetcher:previewAssetVideoProviderFactory:previewURLVideoProviderFactory:userInfoServices:snapProUserProfileIdProvider:userTrackedLogger:videoImporter:imageImporter:targetTrajectoryFactory:legacySendToScopeExposer:inviteService:shareYoursClient:snapDocManager:externalMediaLinkSendingService:memoriesThumbnailLogger:memoriesEngagementLogger:snapVideoFilterScopeExposer:snapVideoFilterServices:mergedDataSource:galleryLogger:cachingMediaManager:networker:galleryEncryptedDatabase:reverseAudioCache:galleryStorySaver:memoriesSnapTranscoder:memoriesMediaRetriever:memoriesEntryThumbnailGeneratorBuilder:memoriesTranscodingHelper:memoriesCachingMediaHelper:memoriesSnapDocSaveManager:memoriesSaveManager:memoriesExperimentService:memoriesSnapDocTranscodingManager:memoriesSnapDocParser:videoTrackingServices:storyQuickPostScopeExposer:snapDocDownloadingService:creativeToolsMemoriesResources:usernameToSnapchatterFetcher:topicTrackerCreator:snapDocEditorServices:importEditsResolver:offPlatformShareServices:sendToMentionsConfiguration:snapchatterFetcher:watermarkGenerator:shareScopeExposer:previewSnapSenderFactory:contentPostSendUpsellServices:sendToMemoriesThumbnailGenerator:spotlightNavigationService:createPostScopeExposer:genAIDreamsServices:applicationStorageServices:dreamsSessionService:genAiAnalyticsService:previewABProvider:spotlightAutoShareService:sendToMassSnapNotificationService:valdiRuntimeProvider:mediaVideoImportServices:temporaryFileWriter:spotlightTileServices:memoriesTweaksServices:] */

undefined8 *
FUN_106dc0cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined8 param_69,undefined8 param_70)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000248);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000268);
  _objc_retain(in_stack_00000270);
  _objc_retain(in_stack_00000278);
  _objc_retain(in_stack_00000280);
  _objc_retain(in_stack_00000288);
  _objc_retain(in_stack_00000290);
  _objc_retain(in_stack_00000298);
  _objc_retain();
  _objc_retain(in_stack_000002a8);
  _objc_retain();
  _objc_retain(in_stack_000002b8);
  _objc_retain();
  puStack_70 = PTR_PTR_1126f6ef0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_33;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f8);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = in_stack_000001f8;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_41;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x27,param_42);
    _objc_retain(param_43);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[10];
    puVar1[10] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x46];
    puVar1[0x46] = param_59;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_31);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_58;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x42,param_49);
    _objc_retain(param_50);
    uVar2 = puVar1[0x43];
    puVar1[0x43] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_60);
    uVar2 = puVar1[0x47];
    puVar1[0x47] = param_60;
    _objc_release(uVar2);
    _objc_retain(param_61);
    uVar2 = puVar1[0x48];
    puVar1[0x48] = param_61;
    _objc_release(uVar2);
    _objc_retain(param_62);
    uVar2 = puVar1[0x49];
    puVar1[0x49] = param_62;
    _objc_release(uVar2);
    _objc_retain(param_63);
    uVar2 = puVar1[0x4a];
    puVar1[0x4a] = param_63;
    _objc_release(uVar2);
    _objc_retain(param_64);
    uVar2 = puVar1[0x4b];
    puVar1[0x4b] = param_64;
    _objc_release(uVar2);
    _objc_retain(param_65);
    uVar2 = puVar1[0x4c];
    puVar1[0x4c] = param_65;
    _objc_release(uVar2);
    _objc_retain(param_66);
    uVar2 = puVar1[0x4d];
    puVar1[0x4d] = param_66;
    _objc_release(uVar2);
    _objc_retain(param_67);
    uVar2 = puVar1[0x4e];
    puVar1[0x4e] = param_67;
    _objc_release(uVar2);
    _objc_retain(param_68);
    uVar2 = puVar1[0x4f];
    puVar1[0x4f] = param_68;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x54,param_69);
    _objc_retain(param_70);
    uVar2 = puVar1[0x50];
    puVar1[0x50] = param_70;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f0);
    uVar2 = puVar1[0x51];
    puVar1[0x51] = in_stack_000001f0;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000200);
    uVar2 = puVar1[0x59];
    puVar1[0x59] = in_stack_00000200;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000208);
    uVar2 = puVar1[0x52];
    puVar1[0x52] = in_stack_00000208;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000210);
    uVar2 = puVar1[0x53];
    puVar1[0x53] = in_stack_00000210;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x5b,0);
    _objc_retain(in_stack_00000218);
    uVar2 = puVar1[0x5d];
    puVar1[0x5d] = in_stack_00000218;
    _objc_release(uVar2);
    uVar2 = in_stack_00000218;
    func_0x00010bfa2a40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x5e];
    puVar1[0x5e] = uVar2;
    _objc_release(uVar4);
    _objc_retain(in_stack_00000220);
    uVar2 = puVar1[0x60];
    puVar1[0x60] = in_stack_00000220;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000228);
    uVar2 = puVar1[0x5a];
    puVar1[0x5a] = in_stack_00000228;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000230);
    uVar2 = puVar1[0x61];
    puVar1[0x61] = in_stack_00000230;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000238);
    uVar2 = puVar1[0x62];
    puVar1[0x62] = in_stack_00000238;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000240);
    uVar2 = puVar1[99];
    puVar1[99] = in_stack_00000240;
    _objc_release(uVar2);
    uVar4 = in_stack_00000248;
    func_0x00010c2bd4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[100];
    puVar1[100] = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_retain(in_stack_00000250);
    uVar2 = puVar1[0x65];
    puVar1[0x65] = in_stack_00000250;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000258);
    uVar2 = puVar1[0x66];
    puVar1[0x66] = in_stack_00000258;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000260);
    uVar2 = puVar1[0x71];
    puVar1[0x71] = in_stack_00000260;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000268);
    uVar2 = puVar1[0x67];
    puVar1[0x67] = in_stack_00000268;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000270);
    uVar2 = puVar1[0x68];
    puVar1[0x68] = in_stack_00000270;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000278);
    uVar2 = puVar1[0x69];
    puVar1[0x69] = in_stack_00000278;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000280);
    uVar2 = puVar1[0x6a];
    puVar1[0x6a] = in_stack_00000280;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000288);
    uVar2 = puVar1[0x6b];
    puVar1[0x6b] = in_stack_00000288;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000290);
    uVar2 = puVar1[0x6d];
    puVar1[0x6d] = in_stack_00000290;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000298);
    uVar2 = puVar1[0x6c];
    puVar1[0x6c] = in_stack_00000298;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002a0);
    uVar2 = puVar1[0x70];
    puVar1[0x70] = in_stack_000002a0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002a8);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = in_stack_000002a8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002b0);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = in_stack_000002b0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002b8);
    uVar2 = puVar1[0x6e];
    puVar1[0x6e] = in_stack_000002b8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002c0);
    uVar2 = puVar1[0x6f];
    puVar1[0x6f] = in_stack_000002c0;
    _objc_release(uVar2);
    _objc_release(param_31);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(in_stack_000002c0);
  _objc_release(in_stack_000002b8);
  _objc_release(in_stack_000002b0);
  _objc_release(in_stack_000002a8);
  _objc_release(in_stack_000002a0);
  _objc_release(in_stack_00000298);
  _objc_release(in_stack_00000290);
  _objc_release(in_stack_00000288);
  _objc_release(in_stack_00000280);
  _objc_release(in_stack_00000278);
  _objc_release(in_stack_00000270);
  _objc_release(in_stack_00000268);
  _objc_release(in_stack_00000260);
  _objc_release(in_stack_00000258);
  _objc_release(in_stack_00000250);
  _objc_release(in_stack_00000248);
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000238);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(param_70);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
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



/* Entry: 106dc1fe8; end: 106dc202f;  */

void FUN_106dc1fe8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106dc2030; end: 106dc20eb; -[SCGallerySendController presentSendViewControllerWithGalleryEntry:sourcePage:fromViewController:userContext:preselectedShareDestination:] */

void FUN_106dc2030(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (param_3 != 0) {
    _objc_retain(param_5);
    func_0x00010c2268e0(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10e1c0(param_1,param_2,puVar1,0,0,param_4,param_5,0,param_6,0,0,0,0,0);
    _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106dc20ec; end: 106dc21b3; -[SCGallerySendController presentSendViewControllerWithGallerySnap:sourcePage:fromViewController:userContext:preselectedShareDestination:] */

void FUN_106dc20ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (param_3 != 0) {
    _objc_retain(param_5);
    func_0x00010c2268e0(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10e1c0(param_1,param_2,0,puVar1,0,param_4,param_5,0,param_6,0,0,0,0,0);
    _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106dc21b4; end: 106dc280f; -[SCGallerySendController presentSendViewControllerWithGalleryItems:gallerySnaps:orderedGallerySnaps:sourcePage:fromViewController:contextSessionId:userContext:quickPostType:assetIdToCRFeaturedStory:sendControllerDelegate:quickPostFlowDelegate:fromActionMenu:preselectedShareDestination:isPrivate:] */

void FUN_106dc21b4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char in_stack_00000038;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  lVar2 = param_3;
  func_0x00010bf529e0();
  lVar3 = param_4;
  func_0x00010bf529e0();
  if (lVar2 + lVar3 != 0) {
    _objc_storeWeak(param_1 + 0x2d8,in_stack_00000018);
    lVar2 = param_1 + 0x2e0;
    _objc_storeWeak(lVar2,in_stack_00000020);
    *(undefined8 *)(param_1 + 0x18) = param_6;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lVar9 * 8);
        lVar4 = lVar7;
        func_0x00010bfbd100();
        if (lVar4 == 2) {
          uVar8 = *(undefined8 *)(param_1 + 0x200);
          _objc_retain(lVar7);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a7320();
LAB_106dc23d4:
          _objc_release(lVar7);
          _objc_release(uVar8);
        }
        else {
          lVar4 = lVar7;
          func_0x00010bfbd100();
          if (lVar4 == 1) {
            uVar8 = *(undefined8 *)(param_1 + 0x200);
            _objc_retain(lVar7);
            func_0x00010c269d40(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a7340();
            goto LAB_106dc23d4;
          }
          lVar4 = lVar7;
          func_0x00010bfbd100();
          if (lVar4 == 3) {
            uVar8 = *(undefined8 *)(param_1 + 0x200);
            _objc_retain(lVar7);
            func_0x00010c269d40(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a7360();
            goto LAB_106dc23d4;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    _objc_retain(param_4);
    lVar3 = param_4;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        uVar8 = *(undefined8 *)(param_1 + 0x200);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a7380();
        _objc_release(uVar8);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    lVar3 = param_3;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010bfbd100();
    if (in_stack_00000038 != '\0') {
      func_0x000108faa3b4();
    }
    _objc_storeWeak(param_1 + 0x2d8,in_stack_00000018);
    uVar8 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(in_stack_00000010);
    _objc_retain(param_8);
    func_0x00010c0f7fc0(uVar8);
    _objc_release(uVar8);
    _objc_release(param_8);
    _objc_release(in_stack_00000010);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  _objc_retain(uVar1);
  uVar10 = *(undefined8 *)(param_3 + 0x48);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_3 + 0x50);
  _objc_retain(uVar11);
  func_0x00010be81320(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar1);
  return;
}



/* Entry: 106dc2810; end: 106dc2a5f;  */

void FUN_106dc2810(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = param_2;
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106dc2a60;
  puStack_80 = &UNK_110848868;
  _objc_retain(param_3);
  ppuVar3 = &puStack_98;
  lStack_78 = param_3;
  _objc_retainBlock();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106dc2aa0;
  puStack_a8 = &UNK_110848868;
  _objc_retain(param_3);
  ppuVar4 = &puStack_c0;
  lStack_a0 = param_3;
  _objc_retainBlock();
  if (*(long *)(param_1 + 0x40) == 1) {
    ppuVar5 = ppuVar3;
    (*(code *)ppuVar3[2])();
    if ((((ulong)ppuVar5 & 1) != 0) ||
       (ppuVar5 = ppuVar4, (*(code *)ppuVar4[2])(), (int)ppuVar5 != 0)) {
      func_0x00010be0d1c0(*(undefined8 *)(param_1 + 0x20));
      goto LAB_106dc2a04;
    }
  }
  else if (*(long *)(param_1 + 0x40) == 2) {
    lVar6 = param_3;
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      lVar6 = param_4;
      func_0x00010bf529e0();
      if (lVar6 != 0) {
        func_0x00010be0ccc0(*(undefined8 *)(param_1 + 0x20));
      }
    }
    else {
      func_0x00010be0cca0(*(undefined8 *)(param_1 + 0x20));
    }
    goto LAB_106dc2a04;
  }
  func_0x000107ade4e4(param_3,param_4,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0));
  func_0x000107ade6f8(0,param_4);
  func_0x00010bebda20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be34240(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be33f60(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x48) == 7) {
    func_0x00010be27980();
  }
  else {
    func_0x00010be7e6a0(*(undefined8 *)(param_1 + 0x20));
  }
LAB_106dc2a04:
  _objc_release(ppuVar4);
  _objc_release(lStack_a0);
  _objc_release(ppuVar3);
  _objc_release(lStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106dc2a60; end: 106dc2a9f;  */

undefined8 FUN_106dc2a60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010b5f8c08();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106dc2aa0; end: 106dc2b6b;  */

long FUN_106dc2aa0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lStack_38 = 0;
    lVar3 = lVar2;
    func_0x000108020568(lVar2,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0 || lStack_38 != 0) {
      lVar1 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x00010bf8c3a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010bfdc300();
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return lVar1;
}



/* Entry: 106dc2b6c; end: 106dc2bcf; -[SCGallerySendController cleanupIfNecessary] */

void FUN_106dc2b6c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x2a0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bddf9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupQuickPost_112555808);
    return;
  }
  return;
}



/* Entry: 106dc2bd0; end: 106dc301f; -[SCGallerySendController _handleCopyLinkFromViewController:fromActionMenu:assetIdToCRFeaturedStory:isPrivate:] */

void FUN_106dc2bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0c5100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0c5100();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x000107adcb3c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(uVar10);
  }
  else {
    puVar14 = (undefined *)0x0;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
  func_0x000108f3de48();
  if (iVar1 == 0) {
    puVar13 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0c5100();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar15;
    func_0x000107add198();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    puVar15 = puVar13;
    func_0x000100504554(puVar13,&PTR___NSConcreteGlobalBlock_11097be70);
    _objc_release(uVar10);
  }
  puVar5 = puVar14;
  func_0x00010b5f8c3c(puVar14);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
  uVar10 = *(undefined8 *)(param_1 + 0x180);
  func_0x000108c7c620();
  if (iVar1 != 0) {
    puVar6 = puVar14;
    func_0x00010bf529e0();
    if (puVar6 == (undefined *)0x1) {
      func_0x000108f3dd80();
    }
    puVar6 = puVar15;
    func_0x00010bf529e0();
    if (puVar6 == (undefined *)0x1) {
      func_0x000108f3dd94();
    }
  }
  puVar6 = puVar14;
  func_0x00010bf529e0();
  if ((undefined *)0x1 < puVar6) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c0c5100();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 == 1) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0c5100();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcf460();
      _objc_release(uVar4);
      _objc_release(uVar7);
    }
    _objc_release(lVar2);
  }
  lVar3 = param_1;
  func_0x00010bfc0040();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    puVar6 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar8 = puVar6;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b3ee8;
    _objc_alloc(PTR_PTR_1126b3ee8);
    func_0x00010c045aa0();
    uVar7 = *(undefined8 *)(param_1 + 0x2f0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf57580();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x2f8);
    *(undefined8 *)(param_1 + 0x2f8) = uVar4;
    _objc_release(uVar12);
    _objc_release(uVar7);
    func_0x00010bfd26e0(*(undefined8 *)(param_1 + 0x2f8));
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
  }
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(puVar13);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    puVar14 = PTR_DAT_1126a4ec0;
    _objc_retain(uVar10);
    uVar7 = uVar10;
    func_0x00010010fab4(uVar10,puVar14);
    uVar4 = uVar10;
    if ((int)uVar7 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  return;
}



/* Entry: 106dc3020; end: 106dc3073;  */

void FUN_106dc3020(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_1126a4ec0;
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010010fab4(param_2,puVar2);
  uVar1 = param_2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106dc3074; end: 106dc3987; -[SCGallerySendController _processGalleryItemsForSendingAndShowAlertsWhenFails:gallerySnaps:orderedGallerySnaps:shouldShowToast:fromViewController:userContext:assetIdToCRFeaturedStory:sendItemsTaskBlock:] */

void FUN_106dc3074(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,long param_8,
                  undefined **param_9,long param_10)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_628 [8];
  undefined8 uStack_620;
  undefined1 uStack_618;
  long lStack_610;
  long lStack_608;
  long lStack_600;
  undefined8 uStack_5f8;
  undefined **ppuStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  undefined1 *puStack_5d0;
  code *pcStack_5c8;
  long lStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  long lStack_5a8;
  undefined **ppuStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined **ppuStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined **ppuStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined **ppuStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined4 uStack_1f4;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined **ppuStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 auStack_170 [8];
  long lStack_168;
  undefined1 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  long lStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_200 = param_8;
  uStack_1f4 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  lStack_1d0 = param_10;
  _objc_retain(param_10);
  puVar7 = PTR_PTR_1126d2988;
  lStack_1e0 = *(long *)(param_1 + 0x378);
  lStack_108 = 0;
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x50);
  lStack_1f0 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1d8 = param_9;
  ppuStack_5a0 = param_9;
  lStack_5c0 = lVar2;
  uStack_5b8 = uVar9;
  uStack_5b0 = uVar3;
  lStack_5a8 = lVar4;
  lStack_1e8 = param_3;
  func_0x00010c15daa0(puVar7);
  lVar8 = lStack_108;
  _objc_retain(lStack_108);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar5 = lVar8;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    if (lStack_100 == 1) {
      func_0x000108df88c4(param_7);
    }
    else if (lStack_100 == 0) {
      lVar2 = lVar8;
      func_0x000107adcb3c();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x000107add198();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar8;
      lStack_1e0 = lVar5;
      func_0x000107adcdb4();
      _objc_retainAutoreleasedReturnValue();
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_138 = 0;
      puStack_140 = (undefined8 *)0x0;
      lStack_148 = 0;
      uStack_150 = 0;
      lStack_208 = lVar6;
      _objc_retain(lVar2);
      lVar5 = lVar2;
      func_0x00010bf52a60();
      if (lVar5 != 0) {
        param_9 = (undefined **)*puStack_140;
        do {
          lVar4 = 0;
          do {
            if ((undefined **)*puStack_140 != param_9) {
              _objc_enumerationMutation(lVar2);
            }
            lVar6 = *(long *)(lStack_148 + lVar4 * 8);
            func_0x00010c0e0160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar6 == 0) {
              func_0x000108df9400(param_7);
              _objc_release(lVar2);
              _objc_release(lStack_208);
              _objc_release(lStack_1e0);
              _objc_release(lVar2);
              goto LAB_106dc38e8;
            }
            lVar4 = lVar4 + 1;
          } while (lVar5 != lVar4);
          lVar5 = lVar2;
          func_0x00010bf52a60();
        } while (lVar5 != 0);
      }
      _objc_release(lVar2);
      lVar5 = lVar2;
      func_0x00010bf529e0();
      if (lVar5 == 0) {
        puVar7 = PTR_PTR_1126d2988;
        _objc_alloc();
        lStack_268 = *(long *)(lStack_1f0 + 0xc0);
        ppuStack_270 = *(undefined ***)(lStack_1f0 + 8);
        uVar3 = *(undefined8 *)(lStack_1f0 + 0x60);
        puStack_260 = puVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(lStack_1f0 + 0x30);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(lStack_1f0 + 0x40);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(lStack_1f0 + 0x48);
        uStack_210 = uVar10;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(lStack_1f0 + 0x70);
        uStack_218 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(lStack_1f0 + 0x58);
        uStack_220 = uVar10;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(lStack_1f0 + 0x50);
        uStack_228 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(lStack_1f0 + 0x68);
        uStack_230 = uVar10;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uStack_278 = *(undefined8 *)(lStack_1f0 + 0x90);
        uStack_280 = *(undefined8 *)(lStack_1f0 + 0x98);
        uStack_288 = *(undefined8 *)(lStack_1f0 + 0xa0);
        uStack_290 = *(undefined8 *)(lStack_1f0 + 0xd0);
        uStack_298 = *(undefined8 *)(lStack_1f0 + 0xe0);
        uStack_2a0 = *(undefined8 *)(lStack_1f0 + 0xe8);
        uStack_2a8 = *(undefined8 *)(lStack_1f0 + 0xf0);
        uStack_2b0 = *(undefined8 *)(lStack_1f0 + 0x330);
        uStack_2b8 = *(undefined8 *)(lStack_1f0 + 0x100);
        uStack_2c0 = *(undefined8 *)(lStack_1f0 + 0x108);
        uStack_2c8 = *(undefined8 *)(lStack_1f0 + 0x110);
        uStack_2d0 = *(undefined8 *)(lStack_1f0 + 0x118);
        uStack_2d8 = *(undefined8 *)(lStack_1f0 + 0x120);
        uStack_2e0 = *(undefined8 *)(lStack_1f0 + 0x128);
        uStack_2e8 = *(undefined8 *)(lStack_1f0 + 0x130);
        uStack_2f0 = *(undefined8 *)(lStack_1f0 + 0x140);
        uStack_2f8 = *(undefined8 *)(lStack_1f0 + 0x148);
        uStack_300 = *(undefined8 *)(lStack_1f0 + 0x150);
        uStack_308 = *(undefined8 *)(lStack_1f0 + 0x1b8);
        uStack_310 = *(undefined8 *)(lStack_1f0 + 0x170);
        uStack_318 = *(undefined8 *)(lStack_1f0 + 0x178);
        uVar10 = *(undefined8 *)(lStack_1f0 + 0x78);
        uStack_238 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uStack_320 = *(undefined8 *)(lStack_1f0 + 0x160);
        uStack_328 = *(undefined8 *)(lStack_1f0 + 400);
        uStack_330 = *(undefined8 *)(lStack_1f0 + 0x198);
        uStack_338 = *(undefined8 *)(lStack_1f0 + 0x1a0);
        uStack_340 = *(undefined8 *)(lStack_1f0 + 0x1c0);
        uStack_348 = *(undefined8 *)(lStack_1f0 + 0x1c8);
        uStack_350 = *(undefined8 *)(lStack_1f0 + 0x1d0);
        uStack_358 = *(undefined8 *)(lStack_1f0 + 0x1d8);
        lVar5 = lStack_1f0 + 0x210;
        uStack_240 = uVar10;
        _objc_loadWeakRetained();
        uStack_368 = *(undefined8 *)(lStack_1f0 + 0x230);
        uStack_370 = *(undefined8 *)(lStack_1f0 + 0x240);
        uStack_380 = *(undefined8 *)(lStack_1f0 + 0x248);
        uStack_388 = *(undefined8 *)(lStack_1f0 + 0x250);
        uStack_390 = *(undefined8 *)(lStack_1f0 + 600);
        uStack_398 = *(undefined8 *)(lStack_1f0 + 0x260);
        uStack_3a0 = *(undefined8 *)(lStack_1f0 + 0x268);
        uStack_360 = *(undefined8 *)(lStack_1f0 + 0x270);
        uStack_3a8 = *(undefined8 *)(lStack_1f0 + 0x168);
        uVar13 = *(undefined8 *)(lStack_1f0 + 0x288);
        uVar12 = *(undefined8 *)(lStack_1f0 + 0x290);
        lVar4 = *(long *)(lStack_1f0 + 0x318);
        uStack_378 = *(undefined8 *)(lStack_1f0 + 200);
        uVar10 = *(undefined8 *)(lStack_1f0 + 0x338);
        lStack_248 = lVar5;
        func_0x00010bfbe800();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(lStack_1f0 + 0x340);
        uStack_250 = uVar10;
        func_0x00010bf87660();
        _objc_retainAutoreleasedReturnValue();
        param_9 = *(undefined ***)(lStack_1f0 + 0x348);
        uStack_258 = uVar11;
        func_0x00010bf8a8a0();
        _objc_retainAutoreleasedReturnValue();
        uStack_3d0 = *(undefined8 *)(lStack_1f0 + 0x358);
        uStack_3d8 = *(undefined8 *)(lStack_1f0 + 0x350);
        uStack_3c8 = *(undefined8 *)(lStack_1f0 + 0x368);
        uStack_3c0 = *(undefined8 *)(lStack_1f0 + 0x360);
        uStack_3b8 = *(undefined8 *)(lStack_1f0 + 0x380);
        uStack_3b0 = *(undefined8 *)(lStack_1f0 + 0x378);
        uStack_418 = uStack_3a8;
        uStack_438 = uStack_398;
        uStack_430 = uStack_3a0;
        uStack_448 = uStack_388;
        uStack_440 = uStack_390;
        uStack_458 = uStack_370;
        uStack_450 = uStack_380;
        uStack_478 = uStack_350;
        uStack_470 = uStack_358;
        uStack_488 = uStack_340;
        uStack_480 = uStack_348;
        uStack_498 = uStack_330;
        uStack_490 = uStack_338;
        uStack_3e8 = uStack_258;
        uStack_3f8 = uStack_378;
        uStack_3f0 = uStack_250;
        uStack_428 = uStack_360;
        ppuStack_420 = ppuStack_1d8;
        lStack_468 = lStack_248;
        uStack_460 = uStack_368;
        uStack_4a8 = uStack_320;
        uStack_4a0 = uStack_328;
        uStack_4b8 = uStack_318;
        uStack_4b0 = uStack_240;
        uStack_4c8 = uStack_308;
        uStack_4c0 = uStack_310;
        uStack_4d8 = uStack_2f8;
        uStack_4d0 = uStack_300;
        uStack_4e8 = uStack_2e8;
        uStack_4e0 = uStack_2f0;
        uStack_4f8 = uStack_2d8;
        uStack_4f0 = uStack_2e0;
        uStack_508 = uStack_2c8;
        uStack_500 = uStack_2d0;
        uStack_518 = uStack_2b8;
        uStack_510 = uStack_2c0;
        uStack_528 = uStack_2a8;
        uStack_520 = uStack_2b0;
        uStack_538 = uStack_298;
        uStack_530 = uStack_2a0;
        uStack_548 = uStack_288;
        uStack_540 = uStack_290;
        uStack_558 = uStack_278;
        uStack_550 = uStack_280;
        uStack_568 = uStack_230;
        uStack_560 = uStack_238;
        uStack_578 = uStack_220;
        uStack_570 = uStack_228;
        uStack_588 = uStack_210;
        uStack_580 = uStack_218;
        lStack_5a8 = lStack_200;
        ppuStack_5a0 = ppuStack_270;
        uStack_5b0 = CONCAT71(uStack_5b0._1_7_,(char)uStack_1f4);
        lStack_5c0 = lStack_268;
        uStack_5b8 = 0;
        puVar7 = puStack_260;
        uStack_598 = uVar3;
        uStack_590 = uVar9;
        uStack_410 = uVar13;
        uStack_408 = uVar12;
        lStack_400 = lVar4;
        ppuStack_3e0 = param_9;
        func_0x00010c044600();
        _objc_release(param_9);
        _objc_release(uStack_258);
        _objc_release(uStack_250);
        _objc_release(lStack_248);
        _objc_release(uStack_240);
        _objc_release(uStack_238);
        _objc_release(uStack_230);
        _objc_release(uStack_228);
        _objc_release(uStack_220);
        _objc_release(uStack_218);
        _objc_release(uStack_210);
        _objc_release(uVar9);
        _objc_release(uVar3);
        (**(code **)(lStack_1d0 + 0x10))(lStack_1d0,puVar7,lVar2,lStack_1e0);
        _objc_release(puVar7);
      }
      else {
        _objc_initWeak(auStack_158,lStack_1f0);
        uVar3 = *(undefined8 *)(lStack_1f0 + 0x80);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1c0 = 0xc2000000;
        pcStack_1b8 = FUN_106dc3988;
        puStack_1b0 = &UNK_11097bef0;
        param_9 = &puStack_1c8;
        _objc_copyWeak(auStack_170,auStack_158);
        _objc_retain(lVar8);
        lVar5 = lStack_208;
        lStack_1a8 = lVar8;
        _objc_retain(lStack_208);
        lStack_1a0 = lVar5;
        _objc_retain(lVar2);
        lStack_198 = lVar2;
        _objc_retain(param_7);
        ppuVar1 = ppuStack_1d8;
        uStack_160 = (undefined1)uStack_1f4;
        lStack_168 = lStack_200;
        uStack_190 = param_7;
        _objc_retain(ppuStack_1d8);
        lVar6 = lStack_1d0;
        ppuStack_188 = ppuVar1;
        _objc_retain(lStack_1d0);
        lVar5 = lStack_1e0;
        lStack_178 = lVar6;
        _objc_retain(lStack_1e0);
        lStack_180 = lVar5;
        func_0x00010c0f7fc0(uVar3);
        _objc_release(uVar3);
        _objc_release(lStack_180);
        _objc_release(lStack_178);
        _objc_release(ppuStack_188);
        _objc_release(uStack_190);
        _objc_release(lStack_198);
        _objc_release(lStack_1a0);
        _objc_release(lStack_1a8);
        _objc_destroyWeak(auStack_170);
        _objc_destroyWeak(auStack_158);
      }
      _objc_release(lStack_208);
      _objc_release(lStack_1e0);
      _objc_release(lVar2);
    }
  }
LAB_106dc38e8:
  _objc_release(lVar8);
  _objc_release(lStack_1d0);
  _objc_release(ppuStack_1d8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar5 = lStack_1e8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_9 + 0xb);
  _objc_destroyWeak(auStack_158);
  lVar6 = lVar5;
  __Unwind_Resume();
  lStack_608 = lVar8;
  pcStack_5c8 = FUN_106dc3988;
  lVar8 = lVar6 + 0x58;
  lStack_610 = lVar2;
  lStack_600 = lVar4;
  uStack_5f8 = param_7;
  ppuStack_5f0 = param_9;
  uStack_5e8 = param_5;
  uStack_5e0 = param_4;
  lStack_5d8 = lVar5;
  puStack_5d0 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (lVar8 != 0) {
    puVar7 = PTR_PTR_1126d2990;
    _objc_alloc();
    func_0x00010c0294e0();
    lVar4 = lVar8;
    func_0x00010be0aa80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    if (lVar5 == 0) {
      uVar9 = 0;
      uVar3 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar6 + 0x28);
      uVar3 = *(undefined8 *)(lVar8 + 0x40);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107da0820(uVar9,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_628,lVar6 + 0x58);
    uVar11 = *(undefined8 *)(lVar6 + 0x30);
    _objc_retain(uVar11);
    _objc_retain(uVar9);
    _objc_retain(lVar4);
    uVar12 = *(undefined8 *)(lVar6 + 0x38);
    _objc_retain(uVar12);
    uStack_618 = *(undefined1 *)(lVar6 + 0x68);
    _objc_retain(puVar7);
    uVar13 = *(undefined8 *)(lVar6 + 0x20);
    _objc_retain(uVar13);
    uStack_620 = *(undefined8 *)(lVar6 + 0x60);
    uVar14 = *(undefined8 *)(lVar6 + 0x40);
    _objc_retain(uVar14);
    uVar15 = *(undefined8 *)(lVar6 + 0x50);
    _objc_retain(uVar15);
    uVar10 = *(undefined8 *)(lVar6 + 0x48);
    _objc_retain(uVar10);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar10);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar7);
    _objc_release(uVar12);
    _objc_release(lVar4);
    _objc_release(uVar9);
    _objc_release(uVar11);
    _objc_destroyWeak(auStack_628);
    _objc_release(uVar9);
    _objc_release(lVar4);
    _objc_release(puVar7);
  }
  _objc_release(lVar8);
  return;
}



/* Entry: 106dc3988; end: 106dc3bc3;  */

void FUN_106dc3988(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d2990;
    _objc_alloc();
    func_0x00010c0294e0();
    lVar3 = lVar1;
    func_0x00010be0aa80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = *(undefined8 *)(lVar1 + 0x40);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107da0820(uVar6,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
    }
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,param_1 + 0x58);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar8);
    _objc_retain(uVar6);
    _objc_retain(lVar3);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar9);
    uStack_58 = *(undefined1 *)(param_1 + 0x68);
    _objc_retain(puVar2);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar10);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar12);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar7);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar2);
    _objc_release(uVar9);
    _objc_release(lVar3);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106dc3bc4; end: 106dc3da3;  */

void FUN_106dc3bc4(undefined8 param_1,long param_2)

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
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar1 = param_2 + 0x68;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b24c8;
    _objc_alloc(PTR_PTR_1126b24c8);
    func_0x00010c017280();
    _CACurrentMediaTime();
    _objc_copyWeak(auStack_70,param_2 + 0x68);
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    uStack_68 = param_1;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_2 + 0x48);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    _objc_retain(uVar7);
    uStack_58 = *(undefined1 *)(param_2 + 0x78);
    uStack_60 = *(undefined8 *)(param_2 + 0x70);
    uVar8 = *(undefined8 *)(param_2 + 0x50);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_2 + 0x60);
    _objc_retain(uVar9);
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    _objc_retain(uVar3);
    func_0x00010c142c20(puVar2);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106dc3da4; end: 106dc43db;  */

void FUN_106dc3da4(double param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
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
  double dVar16;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    dVar16 = *(double *)(param_2 + 0x60);
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar2;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d9fdf0((param_1 - dVar16) * 1000.0,1,uVar15,*(undefined8 *)(lVar1 + 400));
    _objc_release(uVar15);
    _objc_release(uVar2);
    if ((param_3 & 1) == 0) {
      if (param_9 == 0) {
        lVar3 = lVar1;
        func_0x00010bec02c0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(lVar1 + 0x220);
        *(long *)(lVar1 + 0x220) = lVar3;
        _objc_release(uVar15);
        puVar4 = PTR_PTR_1126d2988;
        _objc_alloc();
        uVar15 = *(undefined8 *)(lVar1 + 0x60);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(lVar1 + 0x30);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(lVar1 + 0x40);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(lVar1 + 0x48);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(lVar1 + 0x70);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(lVar1 + 0x58);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(lVar1 + 0x50);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(lVar1 + 0x68);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(lVar1 + 0x78);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1 + 0x210;
        _objc_loadWeakRetained();
        uVar12 = *(undefined8 *)(lVar1 + 0x338);
        func_0x00010bfbe800();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(lVar1 + 0x340);
        func_0x00010bf87660();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(lVar1 + 0x348);
        func_0x00010bf8a8a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c044600();
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(lVar3);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar2);
        _objc_release(uVar15);
        (**(code **)(*(long *)(param_2 + 0x50) + 0x10))
                  (*(long *)(param_2 + 0x50),puVar4,*(undefined8 *)(param_2 + 0x28),
                   *(undefined8 *)(param_2 + 0x48));
        _objc_release(puVar4);
      }
      else {
        lVar3 = param_9;
        func_0x00010bf3ec40();
        if (lVar3 == 0xda) {
          func_0x00010c23ab00(PTR_PTR_1126b2518);
        }
        else {
          func_0x000107dffcbc(*(undefined8 *)(param_2 + 0x20),param_9);
        }
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106dc43dc; end: 106dc4447; -[SCGallerySendController _spotlightThumbnailFutureIfEnabledForStoriesPostingConfig:] */

void FUN_106dc43dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010846ba3c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900();
  _objc_release(param_3);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x398);
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106dc4448; end: 106dc45ab; -[SCGallerySendController _handleSpotlightCrossPostingEligibilityForConfig:crossPostEligibility:additionalText:] */

void FUN_106dc4448(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar4 = param_4;
  func_0x00010c071400();
  if ((int)lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_4;
    func_0x00010c0dac00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar4 = param_4;
    if (lVar1 == 0) {
      func_0x00010bf8d5a0(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf51e00(uVar2);
      func_0x00010c18b5e0();
      lVar1 = param_4;
      func_0x00010bf8d5a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_4;
      func_0x00010bf8d5a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebf0e0(param_1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15d440(uVar2,param_2,PTR____NSArray0__struct_11034ab48,
                          PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,lVar1,
                          PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
                          param_5,0x100);
      _objc_release(param_1);
      _objc_release(lVar3);
      _objc_release(lVar1);
      func_0x00010c0dac00(param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106dc45ac; end: 106dc49df; -[SCGallerySendController _sendTaskWithRecipients:massSnapRecipients:storiesPostingConfig:businessIds:groups:additionalText:] */

void FUN_106dc45ac(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11097bf20);
  uVar3 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11097bf40);
  uVar4 = *(ulong *)(param_1 + 0x368);
  func_0x00010c24b000();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c071400();
  if ((int)uVar5 == 0) {
    uVar14 = param_6;
    func_0x00010bf529e0(param_6);
    uVar6 = param_3;
    func_0x00010bf529e0(param_3);
    uVar7 = param_7;
    func_0x00010bf529e0(param_7);
    uVar5 = param_5;
    func_0x000108469fc8(param_5,uVar14,uVar6,uVar7,*(undefined8 *)(param_1 + 0xa0));
    if ((int)uVar5 == 0) goto LAB_106dc47ec;
    uVar5 = param_5;
    func_0x0001084694d8(param_5,*(undefined8 *)(param_1 + 0xa0));
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf51e00();
    func_0x00010c18b5e0();
    uVar8 = uVar5;
    func_0x00010c24af80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c24af80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_1;
    func_0x00010bebf0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15d440(uVar14);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    uVar8 = uVar5;
    func_0x00010c13bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(uVar14);
  }
  else {
    uVar8 = param_1;
    func_0x00010be30a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    uVar5 = uVar4;
    func_0x00010c0dac00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  param_5 = uVar8;
LAB_106dc47ec:
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x10));
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = param_1;
  func_0x00010bebf0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15d440(uVar14);
  _objc_release(param_4);
  _objc_release(uVar5);
  func_0x00010846b590(param_5);
  func_0x00010bf529e0(uVar2);
  func_0x00010bf529e0(uVar3);
  func_0x00010bf529e0(param_6);
  func_0x00010bf529e0(param_7);
  uVar5 = param_1;
  func_0x00010beeb320();
  if ((uVar5 & 1) == 0) {
    func_0x00010be9f7a0(param_1);
  }
  else {
    uVar5 = param_5;
    func_0x00010846bd94(param_5,*(undefined8 *)(param_1 + 0xa0),param_6);
    puVar1 = PTR_PTR_1126afca8;
    if ((uVar5 & 1) == 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110e1f218;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c238780(puVar1);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(ppuVar11);
    }
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dc49e0; end: 106dc49ef;  */

void FUN_106dc49e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_name_112612df0);
  return;
}



/* Entry: 106dc49f0; end: 106dc4aab; -[SCGallerySendController sendItemsTaskDidSendChatOrStoryWithSuccess:storiesPostingConfig:completion:] */

void FUN_106dc49f0(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  if (param_3 == 0) {
    func_0x00010be92b80(param_1,param_2,param_5);
  }
  else {
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010c0ee300();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4b900();
    _objc_release(uVar1);
    _objc_release(param_4);
    if ((int)uVar2 != 0) {
      func_0x00010c251700(*(undefined8 *)(param_1 + 800),param_2,1,0);
    }
    func_0x00010be9f7a0(param_1,param_2,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106dc4aac; end: 106dc4ad7; -[SCGallerySendController sendItemsTaskDidAutoSaveDraft] */

void FUN_106dc4aac(long param_1)

{
  param_1 = param_1 + 0x2d8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbd6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dc4ad8; end: 106dc4baf; -[SCGallerySendController _sendMemoriesLinkToPhoneNumbers:] */

void FUN_106dc4ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 2;
  _dispatch_get_global_queue(2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106dc4bb0;
  puStack_50 = &UNK_110848708;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106dc4bb0; end: 106dc4be3;  */

void FUN_106dc4bb0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9f7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dc4be4; end: 106dc4deb; -[SCGallerySendController _sendMemoriesLinkToPhoneNumbersHelper:] */

void FUN_106dc4be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x1e8);
  func_0x00010bf529e0();
  if ((lVar2 == 0) || ((*(long *)(param_1 + 0x1f0) == 0 && (*(long *)(param_1 + 0x1f8) == 0))))
  goto LAB_106dc4da8;
  uVar5 = *(undefined8 *)(param_1 + 0x1e8);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar6);
  _objc_initWeak(auStack_68,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x1e0);
  _objc_retain(uVar7);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106dc4dec;
  puStack_90 = &UNK_11097bfc0;
  _objc_retain(uVar7);
  uStack_88 = uVar7;
  _objc_retain(uVar5);
  uStack_80 = uVar5;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  ppuVar3 = &puStack_a8;
  uStack_78 = param_3;
  _objc_retainBlock();
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
  func_0x000108faa364();
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
    func_0x000108faa350();
    if (iVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x1f0);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar3[2])(ppuVar3,uVar4);
      goto LAB_106dc4d5c;
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x1f8);
    uVar4 = uVar6;
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar8);
LAB_106dc4d5c:
    _objc_release(uVar4);
  }
  _objc_release(ppuVar3);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar6);
  _objc_release(uVar5);
LAB_106dc4da8:
  _objc_release(param_3);
  return;
}



/* Entry: 106dc4dec; end: 106dc4f6f;  */

void FUN_106dc4dec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106dc4f70;
  puStack_78 = &UNK_11097bf60;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar1;
  _objc_retain(uVar2);
  uStack_68 = uVar2;
  _objc_copyWeak(auStack_58,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_98,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0be4e0(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  return;
}



/* Entry: 106dc4f70; end: 106dc514f;  */

void FUN_106dc4f70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3840;
  uVar1 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfe9520(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c15c180(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be92b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dc5150; end: 106dc5163;  */

void FUN_106dc5150(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106dc5160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106dc5164; end: 106dc51db; -[SCGallerySendController _resetExternalLinkSendingParameters:] */

void FUN_106dc5164(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  _objc_release(uVar2);
  uVar3 = *(ulong *)(param_1 + 0xa0);
  func_0x000108faa364();
  if ((uVar3 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
    func_0x000108faa350();
    if (iVar1 == 0) goto LAB_106dc51bc;
    lVar4 = 0x1f0;
  }
  else {
    lVar4 = 0x1f8;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar2);
LAB_106dc51bc:
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dc51dc; end: 106dc5363; -[SCGallerySendController _presentSendViewControllerFromViewController:spectaclesOnly:sourcePage:hasMusicSnaps:hasImageSnaps:isShortVideo:hasLongVideo:contextSessionId:snapSource:assetIdToCRFeaturedStory:preselectedShareDestination:] */

void FUN_106dc51dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_initWeak(auStack_70,param_1);
  _objc_copyWeak(auStack_98,auStack_70);
  _objc_retain(param_3);
  uStack_74 = param_9;
  uStack_90 = param_5;
  uStack_78 = param_4;
  uStack_77 = param_6;
  uStack_76 = param_7;
  uStack_75 = param_8;
  _objc_retain(param_11);
  uStack_88 = param_12;
  _objc_retain(param_13);
  uStack_80 = param_14;
  func_0x00010bdf30a0(param_1);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_3);
  return;
}



/* Entry: 106dc5364; end: 106dc5487;  */

void FUN_106dc5364(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bdef320(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1 + 0x138;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf9d620();
    _objc_release(lVar3);
    _objc_storeWeak(lVar1 + 0x20,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dc5488; end: 106dc557f; -[SCGallerySendController _createSendPreviewModel:] */

void FUN_106dc5488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106dc5580; end: 106dc5b57;  */

void FUN_106dc5580(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_71;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) goto LAB_106dc5b14;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_71 = 0;
  lVar3 = *(long *)(puVar1 + 0x10);
  func_0x00010c0c5100();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  uVar5 = *(ulong *)(puVar1 + 0x10);
  func_0x00010c0c5100();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 1) {
    uVar9 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar14;
    func_0x000107adcb3c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar7 = puVar6;
    func_0x000106df1044(puVar6,*(undefined8 *)(puVar1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar12 = puVar6;
    func_0x000106df728c(puVar6,*(undefined8 *)(puVar1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar9;
    func_0x00010bfbd240();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    if (uVar8 == 1) {
      uVar5 = uVar9;
      func_0x00010bfbd240();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar2 = PTR_DAT_1126a5228;
      _objc_retain(uVar8);
      uVar5 = uVar8;
      func_0x00010010fab4(uVar8,puVar2);
      _objc_release(uVar8);
      puVar14 = PTR_PTR_1126d2998;
      if (((int)uVar5 == 0) || (uVar8 == 0)) {
        puVar2 = PTR_PTR_1126c4650;
        _objc_opt_class(PTR_PTR_1126c4650);
        uVar5 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar2);
        if ((uVar5 & 1) == 0) {
          puVar2 = PTR_PTR_1126d29a8;
          _objc_opt_class(PTR_PTR_1126d29a8);
          uVar5 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar2);
          if ((uVar5 & 1) == 0) {
            puVar13 = (undefined *)0x0;
            puVar14 = (undefined *)0x0;
            goto LAB_106dc5a0c;
          }
          uVar5 = uVar8;
          func_0x00010bfbd940(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar5;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          puVar14 = PTR_PTR_1126d2998;
          _objc_alloc(PTR_PTR_1126d2998);
          func_0x00010c0170e0();
          _objc_release(uVar10);
        }
        else {
          puVar14 = PTR_PTR_1126d29a0;
          _objc_alloc(PTR_PTR_1126d29a0);
          func_0x00010c02aca0();
        }
        puVar13 = (undefined *)0x0;
      }
      else {
        _objc_retain(uVar8);
        _objc_alloc(puVar14);
        func_0x00010c0170e0();
        puVar13 = puVar1;
        func_0x00010bdf4ee0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
      }
LAB_106dc5a0c:
      _objc_release(uVar8);
    }
    else {
      uVar5 = uVar9;
      func_0x00010bfcf460();
      if (uVar5 == 0) {
        puVar14 = PTR_PTR_1126d29b0;
        _objc_alloc(PTR_PTR_1126d29b0);
        func_0x00010c016f20();
      }
      else {
        uVar5 = uVar9;
        func_0x00010bfbd240();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        func_0x00010bf529e0();
        _objc_release(uVar5);
        if (uVar8 < 2) {
          puVar13 = (undefined *)0x0;
          puVar14 = (undefined *)0x0;
          goto LAB_106dc5a14;
        }
        uVar5 = uVar9;
        func_0x00010bfcf460();
        if (uVar5 == 1) {
          puVar14 = puVar1;
          func_0x00010bdf03a0(puVar1);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar14 = PTR_PTR_1126d29b8;
          _objc_alloc(PTR_PTR_1126d29b8);
          uVar11 = *(undefined8 *)(puVar1 + 0x10);
          func_0x00010c0c5100(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c016f40(puVar14);
          _objc_release(uVar11);
        }
      }
      puVar13 = (undefined *)0x0;
    }
LAB_106dc5a14:
    _objc_release(puVar6);
    _objc_release(uVar9);
    puVar2 = puVar7;
  }
  else {
    uVar9 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    if (uVar9 < 2) {
      puVar12 = (undefined *)0x0;
      puVar13 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126d29b8;
      _objc_alloc(PTR_PTR_1126d29b8);
      uVar11 = *(undefined8 *)(puVar1 + 0x10);
      func_0x00010c0c5100(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c016f40(puVar14);
      _objc_release(uVar11);
      puVar12 = (undefined *)0x0;
      puVar13 = (undefined *)0x0;
    }
  }
  puVar6 = puVar1;
  func_0x00010be616e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106dc5b58;
  puStack_a8 = &UNK_11097c050;
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar11);
  uStack_78 = uStack_71;
  puStack_a0 = puVar6;
  puStack_98 = puVar13;
  puStack_90 = puVar2;
  puStack_88 = puVar12;
  uStack_80 = uVar11;
  _objc_retain(puVar12);
  _objc_retain(puVar2);
  _objc_retain(puVar13);
  _objc_retain(puVar6);
  func_0x000100162d98("APPSTORE",&puStack_c0);
  _objc_release(puStack_88);
  _objc_release(puStack_90);
  _objc_release(puStack_98);
  _objc_release(puStack_a0);
  _objc_release(uStack_80);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar13);
LAB_106dc5b14:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106dc5b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1 + 0x40) + 0x10))
              (*(long *)(puVar1 + 0x40),*(undefined8 *)(puVar1 + 0x20),
               *(undefined8 *)(puVar1 + 0x28),*(undefined8 *)(puVar1 + 0x30),
               *(undefined8 *)(puVar1 + 0x38),puVar1[0x48]);
    return;
  }
  return;
}



/* Entry: 106dc5b58; end: 106dc5b73;  */

void FUN_106dc5b58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106dc5b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x48));
  return;
}



/* Entry: 106dc5b74; end: 106dc5ccf; -[SCGallerySendController _thumbnailPreviewModelForGalleryMedia:] */

void FUN_106dc5b74(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5228);
  uVar3 = param_3;
  if ((int)uVar1 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  puVar4 = PTR_PTR_1126d29a8;
  _objc_opt_class(PTR_PTR_1126d29a8);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar2 = uVar3;
  if ((uVar1 & 1) != 0) {
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010bfbd940();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_release(uVar1);
  }
  if (uVar2 == 0) {
    puVar4 = PTR_PTR_1126c4650;
    _objc_opt_class(PTR_PTR_1126c4650);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((uVar3 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126d29a0;
      _objc_alloc(PTR_PTR_1126d29a0);
      func_0x00010c02aca0();
    }
  }
  else {
    puVar4 = PTR_PTR_1126d2998;
    _objc_alloc(PTR_PTR_1126d2998);
    func_0x00010c0170e0();
  }
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106dc5cd0; end: 106dc5e8f; -[SCGallerySendController _firstThumbnailPreviewModel] */

void FUN_106dc5cd0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long unaff_x21;
  ulong uVar11;
  long unaff_x22;
  undefined *puVar12;
  long unaff_x23;
  undefined8 *puVar13;
  long unaff_x25;
  long lVar14;
  long unaff_x26;
  long lVar15;
  long unaff_x27;
  long unaff_x28;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 *puStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar1 = param_1[2];
  func_0x00010c0c5100();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &uStack_1b0;
  uVar11 = 0;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x25 = *plStack_1a0;
    unaff_x21 = lVar2;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_1a0 != unaff_x25) {
          _objc_enumerationMutation(lVar1);
        }
        unaff_x22 = *(long *)(lStack_1a8 + unaff_x26 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010bfbd240();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = 0;
        lVar2 = unaff_x22;
        func_0x00010bf52a60();
        if (lVar2 != 0) {
          unaff_x27 = *plStack_1e0;
          unaff_x23 = lVar2;
          do {
            unaff_x28 = 0;
            do {
              if (*plStack_1e0 != unaff_x27) {
                _objc_enumerationMutation(unaff_x22);
              }
              puVar9 = *(undefined8 **)(lStack_1e8 + unaff_x28 * 8);
              puVar13 = param_1;
              func_0x00010becbd00();
              _objc_retainAutoreleasedReturnValue();
              if (puVar13 != (undefined8 *)0x0) {
                _objc_release(unaff_x22);
                goto LAB_106dc5e48;
              }
              unaff_x28 = unaff_x28 + 1;
            } while (unaff_x23 != unaff_x28);
            uVar11 = 0;
            unaff_x23 = unaff_x22;
            func_0x00010bf52a60();
          } while (unaff_x23 != 0);
        }
        _objc_release(unaff_x22);
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x26 != unaff_x21);
      puVar9 = &uStack_1b0;
      uVar11 = 0;
      unaff_x21 = lVar1;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
  puVar13 = (undefined8 *)0x0;
LAB_106dc5e48:
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar7 = &uStack_320;
  pcStack_1f8 = FUN_106dc5e90;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar9;
  lStack_250 = unaff_x28;
  lStack_248 = unaff_x27;
  lStack_240 = unaff_x26;
  lStack_238 = unaff_x25;
  puStack_230 = puVar13;
  lStack_228 = unaff_x23;
  lStack_220 = unaff_x22;
  lStack_218 = unaff_x21;
  puStack_210 = param_1;
  lStack_208 = lVar1;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  puVar13 = puVar9;
  if ((puVar9 == (undefined8 *)0x0) || ((uVar11 & 1) == 0)) {
LAB_106dc602c:
    _objc_retain(puVar9);
  }
  else {
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    lStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    plStack_310 = (long *)0x0;
    lVar3 = *(long *)(lVar2 + 0x10);
    func_0x00010c0c5100();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf52a60();
    if (lVar1 == 0) {
      _objc_release(lVar3);
      puVar10 = puVar7;
      goto LAB_106dc602c;
    }
    uVar11 = 0;
    lVar14 = *plStack_310;
    do {
      lVar15 = 0;
      do {
        if (*plStack_310 != lVar14) {
          _objc_enumerationMutation(lVar3);
        }
        lVar4 = *(long *)(lStack_318 + lVar15 * 8);
        func_0x00010bfbd240();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf529e0();
        uVar11 = lVar5 + uVar11;
        _objc_release(lVar4);
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar15);
      lVar1 = lVar3;
      puVar10 = &uStack_320;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    _objc_release(lVar3);
    if (uVar11 < 2) goto LAB_106dc602c;
    uVar6 = *(ulong *)(lVar2 + 0x358);
    func_0x00010c077a20();
    if ((uVar6 & 1) == 0) goto LAB_106dc602c;
    func_0x00010be17de0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_retain(puVar9);
    }
    else {
      puVar7 = (undefined8 *)PTR_PTR_1126d29c0;
      _objc_alloc();
      func_0x000108dfdf74();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bff6ee0();
      _objc_release(uVar11);
      if (puVar7 != (undefined8 *)0x0) {
        puVar13 = puVar7;
      }
      _objc_retain(puVar13);
      _objc_release(puVar7);
    }
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_258) {
    ___stack_chk_fail();
    _objc_retain(puVar10);
    puVar13 = puVar10;
    func_0x00010bfbd240();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar12 = PTR_DAT_1126a5228;
    _objc_retain(puVar7);
    puVar13 = puVar7;
    func_0x00010010fab4(puVar7,puVar12);
    _objc_release(puVar7);
    puVar12 = PTR_PTR_1126af4c0;
    if ((int)puVar13 == 0 || puVar7 == (undefined8 *)0x0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      uVar8 = puVar9[8];
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7060(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
    }
    puVar13 = (undefined8 *)PTR_PTR_1126d29c8;
    _objc_alloc(PTR_PTR_1126d29c8);
    func_0x00010c016f00();
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar12);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106dc5e90; end: 106dc6097; -[SCGallerySendController _multiSelectPreviewModelWithBasePreviewModel:isMultiSelect:] */

void FUN_106dc5e90(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined *puVar13;
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
  long lStack_68;
  
  puVar11 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined8 *)param_3;
  _objc_retain(param_3);
  puVar6 = param_3;
  if ((param_3 != (undefined *)0x0) && ((param_4 & 1) != 0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c0c5100();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 == 0) {
      _objc_release(lVar1);
      puVar10 = puVar11;
    }
    else {
      uVar12 = 0;
      lVar14 = *plStack_120;
      do {
        lVar15 = 0;
        do {
          if (*plStack_120 != lVar14) {
            _objc_enumerationMutation(lVar1);
          }
          lVar3 = *(long *)(lStack_128 + lVar15 * 8);
          func_0x00010bfbd240();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf529e0();
          uVar12 = lVar4 + uVar12;
          _objc_release(lVar3);
          lVar15 = lVar15 + 1;
        } while (lVar2 != lVar15);
        lVar2 = lVar1;
        puVar10 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
      _objc_release(lVar1);
      if (1 < uVar12) {
        uVar5 = *(ulong *)(param_1 + 0x358);
        func_0x00010c077a20();
        if ((uVar5 & 1) != 0) {
          func_0x00010be17de0();
          _objc_retainAutoreleasedReturnValue();
          if (param_1 == 0) {
            _objc_retain(param_3);
          }
          else {
            puVar13 = PTR_PTR_1126d29c0;
            _objc_alloc();
            func_0x000108dfdf74();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = (undefined8 *)param_3;
            func_0x00010bff6ee0();
            _objc_release(uVar12);
            if (puVar13 != (undefined *)0x0) {
              puVar6 = puVar13;
            }
            _objc_retain(puVar6);
            _objc_release(puVar13);
          }
          _objc_release(param_1);
          goto LAB_106dc6038;
        }
      }
    }
  }
  _objc_retain(param_3);
LAB_106dc6038:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar10);
    puVar6 = (undefined *)puVar10;
    func_0x00010bfbd240();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_DAT_1126a5228;
    _objc_retain(puVar7);
    puVar8 = puVar7;
    func_0x00010010fab4(puVar7,puVar6);
    _objc_release(puVar7);
    puVar13 = PTR_PTR_1126af4c0;
    if ((int)puVar8 == 0 || puVar7 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      uVar9 = *(undefined8 *)(param_3 + 0x40);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7060(puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
    }
    puVar6 = PTR_PTR_1126d29c8;
    _objc_alloc(PTR_PTR_1126d29c8);
    func_0x00010c016f00();
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106dc6098; end: 106dc61e7; -[SCGallerySendController _createMultiSnapPreviewModel:] */

void FUN_106dc6098(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfbd240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_DAT_1126a5228;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010010fab4(lVar2,puVar5);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126af4c0;
  if ((int)lVar1 == 0 || lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7060(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  puVar4 = PTR_PTR_1126d29c8;
  _objc_alloc(PTR_PTR_1126d29c8);
  func_0x00010c016f00();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106dc61e8; end: 106dc6c9b; -[SCGallerySendController _createLegacySendToScope:fromViewController:spectaclesOnly:sourcePage:hasMusicSnaps:hasImageSnaps:isShortVideo:hasLongVideo:contextSessionId:snapSource:topicTracker:userMentions:lensIds:hasUserTaggedVenue:assetIdToCRFeaturedStory:preselectedShareDestination:] */

void FUN_106dc61e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  uint uVar23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined *puStack_170;
  undefined *puStack_128;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000038);
  uVar3 = *(ulong *)(param_1 + 0x10);
  func_0x00010c0c5100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  if (uVar4 < 2) {
    lVar11 = *(long *)(param_1 + 0x10);
    func_0x00010c0c5100();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar11;
    func_0x00010bf529e0();
    _objc_release(lVar11);
    if (lVar5 == 1) {
      uVar3 = *(ulong *)(param_1 + 0x10);
      func_0x00010c0c5100();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_78 = uVar4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_110 = puVar6;
      func_0x000107adcb3c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_80 = uVar4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x000107add198();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = puStack_110;
      func_0x00010b5f8ce0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar6;
      func_0x00010bf529e0();
      if (((puVar21 == (undefined *)0x1) &&
          (puVar21 = puVar7, func_0x00010bf529e0(), puVar21 == (undefined *)0x0)) ||
         (uVar3 = uVar4, func_0x00010bfcf460(), uVar3 == 3)) {
        bVar1 = false;
      }
      else {
        uVar3 = uVar4;
        func_0x00010bfbd240();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010bf529e0();
        bVar1 = 1 < uVar8;
        _objc_release(uVar3);
      }
      _objc_release(puVar6);
      _objc_release(puVar7);
      _objc_release(uVar4);
    }
    else {
      bVar1 = false;
      puStack_110 = (undefined *)0x0;
    }
  }
  else {
    puStack_110 = (undefined *)0x0;
    bVar1 = true;
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0xa0);
  func_0x000108f3de48();
  if (iVar2 == 0) {
    puStack_118 = (undefined *)0x0;
    puStack_128 = (undefined *)0x0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0c5100();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar10;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar6;
    func_0x000107add198();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puStack_128 = puStack_118;
    func_0x000100504554(puStack_118,&PTR___NSConcreteGlobalBlock_11097c080);
    _objc_release(uVar10);
  }
  puVar6 = puStack_110;
  func_0x00010b5f8c3c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf8a940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(puVar7);
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  func_0x000108c7c620(uVar10,*(undefined8 *)(param_1 + 0x180));
  if ((int)uVar10 != 0) {
    puVar7 = puStack_110;
    func_0x00010bf529e0();
    if (puVar7 == (undefined *)0x1) {
      func_0x000108f3dd80(*(undefined8 *)(param_1 + 0xa0));
    }
    puVar7 = puStack_128;
    func_0x00010bf529e0();
    if (puVar7 == (undefined *)0x1) {
      func_0x000108f3dd94(*(undefined8 *)(param_1 + 0xa0));
    }
  }
  puVar7 = puStack_110;
  func_0x00010bf529e0();
  if ((undefined *)0x1 < puVar7) {
    lVar11 = *(long *)(param_1 + 0x10);
    func_0x00010c0c5100();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar11;
    func_0x00010bf529e0();
    if (lVar5 == 1) {
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0c5100();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcf460();
      _objc_release(uVar10);
      _objc_release(uVar9);
    }
    _objc_release(lVar11);
  }
  lVar5 = param_1;
  func_0x00010bfc0040();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ec0dbc();
  puVar7 = PTR_PTR_1126b1a18;
  _objc_alloc();
  func_0x00010c048740();
  puVar21 = puVar7;
  func_0x00010c15d5c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fc880(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar21);
  puVar21 = puStack_110;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puStack_118;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_106dc6cf0;
  uStack_98 = 0x106dc6d00;
  uStack_90 = 0;
  if (bVar1) {
LAB_106dc6744:
    puStack_170 = (undefined *)0x0;
  }
  else if (puVar21 == (undefined *)0x0) {
    if (puVar12 == (undefined *)0x0) goto LAB_106dc6744;
    puVar13 = puVar12;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puStack_b0[5];
    puStack_b0[5] = puVar13;
    _objc_release(uVar10);
    puStack_170 = puVar12;
    func_0x00010bf5a700();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_170 = puVar21;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar21;
    func_0x00010bfd89e0();
    if ((int)puVar13 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar21;
      func_0x00010c241220(puVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c135bc0(uVar10);
      _objc_release(puVar13);
      _objc_release(uVar10);
    }
  }
  puVar13 = puVar21;
  func_0x00010b5f7abc();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  if (bVar1) {
LAB_106dc68ec:
    iVar2 = (int)*(undefined8 *)(param_1 + 0xa0);
    func_0x000108c2c398();
    if (((iVar2 != 0) && (lVar15 = in_stack_00000020, func_0x00010bf529e0(), lVar15 != 0)) &&
       (puVar22 = puVar21, func_0x00010bf3d2a0(), (long)(int)puVar22 - 6U < 0xb)) {
      puVar22 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be79c40();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = 0;
      goto LAB_106dc6964;
    }
    lVar11 = 0;
    puVar22 = (undefined *)0x0;
  }
  else {
    puVar22 = puVar13;
    func_0x00010c292720();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar22;
    func_0x00010bf529e0();
    _objc_release(puVar22);
    puVar22 = PTR_PTR_1126ae6b8;
    if (puVar14 == (undefined *)0x0) goto LAB_106dc68ec;
    puVar14 = puVar13;
    func_0x00010c292720(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = puVar13;
    func_0x00010c292720(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be79c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
  }
  uVar23 = 1;
LAB_106dc6964:
  lVar15 = in_stack_00000020;
  func_0x00010bf529e0();
  puVar14 = puVar22;
  if (lVar15 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x300);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bfa2380();
    _objc_release(uVar9);
    if ((uVar23 & (uint)uVar10) != 0) {
      if (puVar22 == (undefined *)0x0) {
        puVar14 = PTR_PTR_1126ae6b8;
        func_0x00010c0860a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(in_stack_00000020);
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar22);
        _objc_release(in_stack_00000020);
      }
    }
  }
  puVar22 = PTR_PTR_1126b1a20;
  _objc_alloc(PTR_PTR_1126b1a20);
  func_0x00010bf529e0();
  func_0x00010c01d660(puVar22);
  lVar15 = param_1;
  func_0x00010be1ae60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 != 0) {
    lVar16 = lVar15;
    func_0x00010bf4c1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x398);
    *(long *)(param_1 + 0x398) = lVar19;
    _objc_release(uVar10);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
  }
  puVar20 = PTR_PTR_1126b1a28;
  _objc_alloc();
  func_0x00010c038ea0();
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar20;
  _objc_release(uVar10);
  puVar20 = PTR_PTR_1126b1a30;
  _objc_alloc(PTR_PTR_1126b1a30);
  func_0x00010bff5040();
  _objc_release(lVar15);
  _objc_release(puVar22);
  _objc_release(puVar14);
  _objc_release(lVar11);
  _objc_release(puVar13);
  _objc_release(puStack_170);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(puVar12);
  _objc_release(puVar21);
  _objc_release(puVar7);
  _objc_release(lVar5);
  _objc_release(puVar6);
  _objc_release(puStack_118);
  _objc_release(puStack_128);
  _objc_release(puStack_110);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000008);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar21 = (undefined *)0x8;
    __Block_object_dispose(&uStack_b8);
    __Unwind_Resume(param_3);
    puVar6 = PTR_DAT_1126a4ec0;
    _objc_retain(puVar21);
    puVar7 = puVar21;
    func_0x00010010fab4(puVar21,puVar6);
    puVar20 = puVar21;
    if ((int)puVar7 == 0) {
      puVar20 = (undefined *)0x0;
    }
    _objc_retain(puVar20);
    _objc_release(puVar21);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 106dc6c9c; end: 106dc6cef;  */

void FUN_106dc6c9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_1126a4ec0;
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010010fab4(param_2,puVar2);
  uVar1 = param_2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106dc6cf0; end: 106dc6d07;  */

void FUN_106dc6cf0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106dc6d08; end: 106dc6d3f;  */

void FUN_106dc6d08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dc6d40; end: 106dc6d4b;  */

void FUN_106dc6d40(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_arrayByAddingObjectsFromArray__1125a0188,*(undefined8 *)(param_1 + 0x20))
  ;
  return;
}



/* Entry: 106dc6d4c; end: 106dc70df; -[SCGallerySendController _tileCoverSnapDocFromEditor:localVideoURL:] */

ulong FUN_106dc6d4c(long param_1,undefined8 *param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [176];
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    uVar14 = param_3;
    func_0x00010c23fe00(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x290);
    func_0x00010bf9f4a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      uVar14 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___AVAsset_1126aff38;
      func_0x00010bf0b9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126aff40;
      _objc_alloc();
      puVar5 = PTR_PTR_1126aff30;
      func_0x00010c29be40(PTR_PTR_1126aff30);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      if (puVar3 == (undefined *)0x0) {
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_140,puVar3);
      }
      uStack_158 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_160 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_150 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      param_2 = &uStack_140;
      _CMTimeRangeMake(auStack_128,&uStack_160);
      func_0x00010c297240(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01d3c0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar6 = PTR_PTR_1126b25c0;
      _objc_opt_new(PTR_PTR_1126b25c0);
      uVar7 = uVar2;
      func_0x00010bf8cb40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126d29d0;
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfea400();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      if (puVar8 == (undefined *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar9 = param_3;
        func_0x00010c0ff5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar9;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (uVar14 != 0) {
          uVar15 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(uVar9);
            }
            uVar10 = param_3;
            func_0x00010c0ff640();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010bf51e00();
            _objc_release(uVar10);
            if (uVar11 != 0) {
              func_0x00010c1dd680(uVar11);
              func_0x00010befbf60(uVar7);
              _objc_unsafeClaimAutoreleasedReturnValue();
            }
            _objc_release(uVar11);
            uVar15 = uVar15 + 1;
          } while (uVar14 != uVar15);
          uVar14 = uVar9;
          func_0x00010bf52a60();
        }
        uVar14 = uVar7;
        func_0x00010c23fe00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
      }
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
    return uVar14;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar12 = param_2;
  func_0x00010c08c3a0();
  if ((int)puVar12 == 1) {
    puVar12 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf0b760();
    uVar14 = (ulong)((int)puVar13 != 5);
    _objc_release(puVar12);
  }
  else {
    uVar14 = 1;
  }
  _objc_release(param_2);
  return uVar14;
}



/* Entry: 106dc70e0; end: 106dc7157;  */

bool FUN_106dc70e0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c08c3a0();
  if ((int)uVar2 == 1) {
    uVar2 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0b760();
    bVar1 = (int)uVar3 != 5;
    _objc_release(uVar2);
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106dc7158; end: 106dc72ff; -[SCGallerySendController _exportedLocalVideoURLForSnap:] */

void FUN_106dc7158(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf3e240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010b5fa088();
  puVar8 = (undefined *)0x0;
  if ((((0xc < uVar2) || ((1L << (uVar2 & 0x3f) & 0x1566U) == 0)) ||
      (puVar8 = (undefined *)0x0, lVar3 == 0)) || (lVar1 == 0)) goto LAB_106dc72cc;
  puVar4 = PTR_PTR_1126c3c70;
  _objc_alloc();
  func_0x00010c046e40();
  puVar5 = puVar4;
  func_0x00010c2bd7e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d2e0(puVar4,param_2,puVar5);
  if (puVar5 == (undefined *)0x0) {
LAB_106dc72b8:
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0f5800(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010bfacbe0(puVar8,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar8);
    if ((int)puVar7 == 0) goto LAB_106dc72b8;
    _objc_retain(puVar5);
    puVar8 = puVar5;
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_106dc72cc:
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106dc7300; end: 106dc76ff; -[SCGallerySendController _currentSnapDocLazyFuture] */

void FUN_106dc7300(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar10);
  uVar6 = *(undefined8 *)(param_1 + 0x290);
  _objc_retain(uVar6);
  _objc_initWeak(auStack_70,param_1);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0c5100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107adcb3c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c0c5100();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x000107add198();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar4);
    if (lVar1 == 0) {
      puVar13 = (undefined *)0x0;
      goto LAB_106dc7678;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x1a8);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x1b0);
    _objc_retain(uVar8);
    puVar5 = PTR_PTR_1126b2470;
    _objc_retain(uVar10);
    _objc_retain(lVar1);
    _objc_retain(uVar7);
    _objc_retain(uVar8);
    _objc_retain(uVar6);
    func_0x00010c2adce0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126ae820;
    _objc_alloc(PTR_PTR_1126ae820);
    func_0x00010c060400();
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar1);
    uVar9 = uVar10;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x280);
    _objc_retain(uVar9);
    uVar11 = *(undefined8 *)(param_1 + 0x298);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0xa0);
    _objc_retain(uVar12);
    puVar5 = PTR_PTR_1126b2470;
    _objc_retain(uVar10);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(uVar9);
    _objc_retain(uVar6);
    _objc_retain(lVar3);
    _objc_retain(uVar12);
    _objc_retain(lVar1);
    _objc_retain(uVar7);
    _objc_retain(uVar8);
    _objc_retain(uVar11);
    func_0x00010c2adce0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126ae820;
    _objc_alloc(PTR_PTR_1126ae820);
    func_0x00010c060400();
    _objc_release(puVar5);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar1);
    _objc_release(uVar12);
    _objc_release(lVar3);
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(uVar11);
  }
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
LAB_106dc7678:
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar6);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106dc7700; end: 106dc78b3;  */

void FUN_106dc7700(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar10);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106dc78b4; end: 106dc7b27;  */

void FUN_106dc78b4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (lVar3 == 0 || lVar4 == 0)) {
    uVar11 = 0;
    (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(*(long *)(param_1 + 0x68),0,0);
    goto LAB_106dc7ad4;
  }
  uVar5 = *(ulong *)(param_1 + 0x30);
  func_0x00010b5fa088();
  if (uVar5 < 0xd && (1L << (uVar5 & 0x3f) & 0x1566U) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x00010bf1f440();
    if (iVar1 == 0) goto LAB_106dc79a0;
    lVar14 = lVar2;
    func_0x00010be0ca00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_106dc79a0:
    lVar14 = 0;
  }
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar15);
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar16);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar13);
  _objc_retain(lVar14);
  uVar11 = 0;
  func_0x000107e614a0(puVar6,0,uVar7,uVar9,uVar8,lVar3,lVar4,uVar10);
  _objc_release(uVar10);
  _objc_release(puVar6);
  _objc_release(uVar13);
  _objc_release(lVar14);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
LAB_106dc7ad4:
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar11);
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_106dc6cf0;
  uStack_150 = 0x106dc6d00;
  uStack_148 = 0;
  uVar7 = uVar11;
  func_0x00010bfb1920(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfea600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be500();
  _objc_release(uVar8);
  _objc_release(uVar7);
  if (puStack_168[5] == 0) {
    (**(code **)(*(long *)(lVar2 + 0x40) + 0x10))(*(long *)(lVar2 + 0x40),0,0);
  }
  else {
    uVar8 = *(undefined8 *)(lVar2 + 0x20);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puStack_168[5];
    func_0x00010c23fe00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c12ee80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar2 + 0x40);
    _objc_retain(uVar13);
    uVar15 = *(undefined8 *)(lVar2 + 0x30);
    _objc_retain(*(undefined8 *)(lVar2 + 0x30));
    uVar10 = *(undefined8 *)(lVar2 + 0x38);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar7);
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar15);
    _objc_release(uVar13);
  }
  __Block_object_dispose(&uStack_170,8);
  _objc_release(uStack_148);
  _objc_release(uVar11);
  return;
}



/* Entry: 106dc7b28; end: 106dc7d57;  */

void FUN_106dc7b28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106dc6cf0;
  uStack_70 = 0x106dc6d00;
  uStack_68 = 0;
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfea600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be500();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (puStack_88[5] == 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_88[5];
    func_0x00010c23fe00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c12ee80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(*(undefined8 *)(param_1 + 0x30));
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 106dc7d58; end: 106dc7d8f;  */

void FUN_106dc7d58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dc7d90; end: 106dc7e2b;  */

void FUN_106dc7d90(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_2;
  if (param_2 == 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(lVar2);
  _objc_retain(param_2);
  func_0x00010becbe20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,uVar3);
  _objc_release(lVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dc7e2c; end: 106dc7f4b;  */

void FUN_106dc7e2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 106dc7f4c; end: 106dc80d7;  */

void FUN_106dc7f4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar11;
  func_0x000107e6b1c4(puVar11,lVar6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(puVar11);
  if (puVar1 == (undefined *)0x0) {
    lVar6 = 0;
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,0);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar10);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar1);
    _objc_release(uVar2);
    _objc_release(uVar10);
    _objc_release(uVar9);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar6);
  lVar3 = *(long *)(puVar1 + 0x20);
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = (undefined *)0x0;
  if ((lVar6 != 0) && (lVar3 != 0)) {
    puVar11 = PTR_PTR_1126b25c0;
    _objc_opt_new(PTR_PTR_1126b25c0);
    lVar4 = lVar3;
    func_0x00010bf8cb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar8 = PTR_PTR_1126d29d0;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfea400();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  (**(code **)(*(long *)(puVar1 + 0x28) + 0x10))(*(long *)(puVar1 + 0x28),0,puVar11);
  _objc_release(lVar3);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)(lVar6 + 0x10);
  func_0x00010c0c5100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010bf529e0();
  puVar11 = PTR_PTR_1126ae720;
  if (lVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar6 + 0x328);
    _objc_retain(uVar2);
    func_0x00010bf11fe0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d29d8;
    _objc_alloc(PTR_PTR_1126d29d8);
    func_0x00010bdf7120(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002e40(puVar8);
    _objc_release(lVar6);
    _objc_release(puVar11);
    _objc_release(uVar2);
  }
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106dc80d8; end: 106dc823b;  */

void FUN_106dc80d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined *)0x0;
  if ((param_2 != 0) && (lVar1 != 0)) {
    puVar7 = PTR_PTR_1126b25c0;
    _objc_opt_new(PTR_PTR_1126b25c0);
    lVar2 = lVar1;
    func_0x00010bf8cb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar5 = PTR_PTR_1126d29d0;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfea400();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,puVar7);
  _objc_release(lVar1);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(param_2 + 0x10);
  func_0x00010c0c5100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf529e0();
  puVar7 = PTR_PTR_1126ae720;
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x328);
    _objc_retain(uVar6);
    func_0x00010bf11fe0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d29d8;
    _objc_alloc(PTR_PTR_1126d29d8);
    func_0x00010bdf7120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002e40(puVar5);
    _objc_release(param_2);
    _objc_release(puVar7);
    _objc_release(uVar6);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106dc823c; end: 106dc834f; -[SCGallerySendController _generateContentConfiguration:cameraRollGalleryItems:cameraRollPHAssets:] */

void FUN_106dc823c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0c5100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  puVar3 = PTR_PTR_1126ae720;
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x328);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106dc8350;
    puStack_58 = &UNK_11097c1e0;
    lStack_50 = lVar1;
    uStack_48 = uVar5;
    _objc_retain(uVar5);
    func_0x00010bf11fe0(puVar3,param_2,&puStack_70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d29d8;
    _objc_alloc(PTR_PTR_1126d29d8);
    func_0x00010bdf7120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002e40(puVar4,param_2,puVar3,0,param_1);
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(uVar5);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106dc8350; end: 106dc8557;  */

void FUN_106dc8350(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined8 in_x5;
  int iVar20;
  undefined8 in_x6;
  int iVar21;
  undefined8 in_x7;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  undefined *puVar31;
  undefined *puStack_3b0;
  undefined1 auStack_348 [8];
  undefined *puStack_340;
  undefined8 uStack_338;
  code *pcStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 uStack_300;
  undefined1 uStack_2ff;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b7;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined8 *puStack_290;
  undefined1 auStack_288 [8];
  undefined1 auStack_280 [16];
  undefined8 uStack_1f0;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar24 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar24);
  puVar17 = &uStack_1b0;
  puVar18 = auStack_f0;
  lVar19 = 0x10;
  puVar25 = puVar24;
  func_0x00010bf52a60();
  iVar20 = (int)in_x6;
  iVar21 = (int)in_x7;
  if (puVar25 != (undefined *)0x0) {
    lVar22 = *plStack_1a0;
    do {
      puVar31 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar22) {
          _objc_enumerationMutation(puVar24);
        }
        lVar4 = *(long *)(lStack_1a8 + (long)puVar31 * 8);
        uStack_1f0 = 0;
        func_0x00010bfbd240();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar4;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar19 != 0) {
          lVar30 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar4);
            }
            lVar5 = *(long *)(param_1 + 0x28);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010bfbffc0(0x3f800000);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            if (lVar6 != 0) {
              func_0x00010befa120(puVar23);
            }
            _objc_release(lVar6);
            lVar30 = lVar30 + 1;
          } while (lVar19 != lVar30);
          lVar19 = lVar4;
          func_0x00010bf52a60();
        }
        _objc_release(lVar4);
        puVar31 = puVar31 + 1;
      } while (puVar31 != puVar25);
      puVar17 = &uStack_1b0;
      puVar18 = auStack_f0;
      lVar19 = 0x10;
      puVar25 = puVar24;
      func_0x00010bf52a60();
      iVar20 = (int)in_x6;
      iVar21 = (int)in_x7;
    } while (puVar25 != (undefined *)0x0);
  }
  puVar25 = puVar24;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar17);
  _objc_retain(puVar18);
  _objc_retain(lVar19);
  _objc_retain(in_x5);
  _objc_retain(puVar24);
  puVar7 = puVar17;
  func_0x00010bf529e0();
  if ((((uStack_1f0 & 0x100) == 0) && (puVar7 != (undefined8 *)0x0)) &&
     (puVar7 = puVar17, func_0x000109023ef8(), ((ulong)puVar7 & 1) == 0)) {
    puVar7 = puVar17;
    func_0x00010b5f9920();
    uVar26 = (uint)puVar7 ^ 1;
    if (iVar20 == 0) goto LAB_106dc8630;
LAB_106dc8600:
    puVar7 = puVar17;
    func_0x00010bf529e0();
    if (puVar7 != (undefined8 *)0x0) goto LAB_106dc8630;
    lVar22 = lVar19;
    func_0x00010bf529e0();
    bVar2 = lVar22 != 0;
  }
  else {
    uVar26 = 0;
    if (iVar20 != 0) goto LAB_106dc8600;
LAB_106dc8630:
    bVar2 = false;
  }
  if ((uVar26 & 1) == 0 && !bVar2) {
    puVar23 = (undefined *)0x0;
  }
  else {
    if (uVar26 == 0) {
      _objc_initWeak(auStack_280,puVar25);
      puStack_3b0 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_348,auStack_280);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = puVar25;
      func_0x00010be1bc00();
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_348);
      _objc_destroyWeak(auStack_280);
    }
    else {
      _objc_initWeak(auStack_280,puVar25);
      puVar7 = puVar17;
      FUN_106df7d90(puVar17,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_3b0 = PTR_PTR_1126ae720;
      if ((uStack_1f0 & 1) == 0) {
        puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2a8 = 0xc2000000;
        pcStack_2a0 = FUN_106dc8c4c;
        puStack_298 = &UNK_110942308;
        _objc_copyWeak(auStack_288,auStack_280);
        _objc_retain(puVar7);
        puStack_290 = puVar7;
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_290);
        _objc_destroyWeak(auStack_288);
      }
      else {
        puStack_3b0 = (undefined *)0x0;
      }
      uVar27 = *(undefined8 *)(puVar25 + 0x88);
      _objc_retain(uVar27);
      uVar28 = *(undefined8 *)(puVar25 + 0x98);
      _objc_retain(uVar28);
      uVar29 = *(undefined8 *)(puVar25 + 0x220);
      _objc_retain(uVar29);
      uVar3 = (undefined1)*(undefined8 *)(puVar25 + 0xa0);
      func_0x00010bf1f440();
      puVar23 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2f0 = 0xc2000000;
      pcStack_2e8 = FUN_106dc8fec;
      puStack_2e0 = &UNK_11097c2a0;
      uStack_2b8 = uVar3;
      _objc_retain(uVar29);
      uStack_2d8 = uVar29;
      uStack_2d0 = uVar27;
      _objc_retain(puVar7);
      uStack_2b7 = uStack_1f0._1_1_;
      puStack_2c8 = puVar7;
      _objc_retain(uVar28);
      ppuVar8 = &puStack_2f8;
      uStack_2c0 = uVar28;
      _objc_retainBlock();
      puStack_340 = puVar23;
      uStack_338 = 0xc2000000;
      pcStack_330 = FUN_106dc9160;
      puStack_328 = &UNK_11097c350;
      _objc_retain(puVar7);
      puStack_320 = puVar7;
      uStack_300 = uVar3;
      _objc_retain(uVar29);
      uStack_2ff = uStack_1f0._1_1_;
      uStack_318 = uVar29;
      uStack_310 = uVar27;
      _objc_retain(uVar28);
      ppuVar9 = &puStack_340;
      uStack_308 = uVar28;
      _objc_retainBlock();
      uVar10 = *(undefined8 *)(puVar25 + 0x40);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar7;
      FUN_106df7718(puVar7,uVar10);
      _objc_release(uVar10);
      if ((int)puVar11 == 0) {
        uVar10 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(puVar25 + 0x308);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar12;
        func_0x00010bfbeb40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
      }
      ppuVar13 = ppuVar8;
      (*(code *)ppuVar8[2])(ppuVar8,uVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar9;
      (*(code *)ppuVar9[2])(ppuVar9,uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar31 = PTR_PTR_1126b2490;
      _objc_alloc();
      func_0x000106df748c(puVar7);
      puVar11 = puVar7;
      FUN_106df75f8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c028f20();
      _objc_release(puVar11);
      _objc_release(ppuVar14);
      _objc_release(ppuVar13);
      _objc_release(uVar10);
      _objc_release(ppuVar9);
      _objc_release(uStack_308);
      _objc_release(uStack_318);
      _objc_release(puStack_320);
      _objc_release(ppuVar8);
      _objc_release(uStack_2c0);
      _objc_release(puStack_2c8);
      _objc_release(uStack_2d8);
      _objc_release(uVar29);
      _objc_release(uVar28);
      _objc_release(uVar27);
      _objc_release(puVar7);
      _objc_destroyWeak(auStack_280);
    }
    if (iVar21 != 0) {
      iVar20 = (int)*(undefined8 *)(puVar25 + 0xa0);
      func_0x000108faa364();
      puVar23 = puVar31;
      if (iVar20 == 0) {
        iVar20 = (int)*(undefined8 *)(puVar25 + 0xa0);
        func_0x000108faa350();
        puVar16 = PTR_PTR_1126ae720;
        if (iVar20 == 0) goto LAB_106dc8b28;
        _objc_retain(puVar31);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(puVar25 + 0x1f0);
        *(undefined **)(puVar25 + 0x1f0) = puVar16;
        _objc_release(uVar10);
      }
      else {
        func_0x00010c0c45e0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar23;
        func_0x00010c08d600();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar16;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(puVar25 + 0x1f8);
        *(undefined **)(puVar25 + 0x1f8) = puVar15;
        _objc_release(uVar10);
        _objc_release(puVar16);
      }
      _objc_release(puVar23);
    }
LAB_106dc8b28:
    iVar20 = (int)*(undefined8 *)(puVar25 + 0xa0);
    func_0x000108ec1954();
    if (iVar20 == 0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      puVar25 = PTR_PTR_1126b2498;
      _objc_alloc(PTR_PTR_1126b2498);
      func_0x00010c037ea0();
    }
    puVar23 = PTR_PTR_1126b0808;
    _objc_alloc(PTR_PTR_1126b0808);
    func_0x00010c051820();
    _objc_release(puVar25);
    _objc_release(puVar31);
    _objc_release(puStack_3b0);
  }
  _objc_release(puVar24);
  _objc_release(in_x5);
  _objc_release(lVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 106dc8558; end: 106dc8c4b; -[SCGallerySendController generateShareSheetConfiguration:externalShareDreamsMetadata:cameraRollGalleryItems:cameraRollPHAssets:offPlatformShareOnCameraRollEnabled:enableSelectableContacts:assetIdToCRFeaturedStory:preselectedShareDestination:isPrivate:isMultiSnapStory:] */

void FUN_106dc8558(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,int param_7,int param_8,undefined8 param_9,
                  undefined4 param_10,undefined4 param_11,uint param_12)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puStack_1b0;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  uVar4 = param_3;
  func_0x00010bf529e0();
  if ((((param_12 & 0x100) == 0) && (uVar4 != 0)) &&
     (uVar4 = param_3, func_0x000109023ef8(), (uVar4 & 1) == 0)) {
    uVar4 = param_3;
    func_0x00010b5f9920();
    uVar17 = (uint)uVar4 ^ 1;
    if (param_7 == 0) goto LAB_106dc8630;
LAB_106dc8600:
    uVar4 = param_3;
    func_0x00010bf529e0();
    if (uVar4 != 0) goto LAB_106dc8630;
    lVar5 = param_5;
    func_0x00010bf529e0();
    bVar1 = lVar5 != 0;
  }
  else {
    uVar17 = 0;
    if (param_7 != 0) goto LAB_106dc8600;
LAB_106dc8630:
    bVar1 = false;
  }
  if ((uVar17 & 1) == 0 && !bVar1) {
    puVar15 = (undefined *)0x0;
    goto LAB_106dc8bb4;
  }
  if (uVar17 == 0) {
    _objc_initWeak(auStack_80,param_1);
    puStack_1b0 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_148,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010be1bc00();
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_80);
  }
  else {
    _objc_initWeak(auStack_80,param_1);
    uVar4 = param_3;
    FUN_106df7d90(param_3,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = PTR_PTR_1126ae720;
    if ((param_12 & 1) == 0) {
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_106dc8c4c;
      puStack_98 = &UNK_110942308;
      _objc_copyWeak(auStack_88,auStack_80);
      _objc_retain(uVar4);
      uStack_90 = uVar4;
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_90);
      _objc_destroyWeak(auStack_88);
    }
    else {
      puStack_1b0 = (undefined *)0x0;
    }
    uVar18 = *(undefined8 *)(param_1 + 0x88);
    _objc_retain(uVar18);
    uVar19 = *(undefined8 *)(param_1 + 0x98);
    _objc_retain(uVar19);
    uVar20 = *(undefined8 *)(param_1 + 0x220);
    _objc_retain(uVar20);
    uVar2 = (undefined1)*(undefined8 *)(param_1 + 0xa0);
    func_0x00010bf1f440();
    puVar15 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_106dc8fec;
    puStack_e0 = &UNK_11097c2a0;
    uStack_b8 = uVar2;
    _objc_retain(uVar20);
    uStack_d8 = uVar20;
    uStack_d0 = uVar18;
    _objc_retain(uVar4);
    uStack_c8 = uVar4;
    _objc_retain(uVar19);
    ppuVar7 = &puStack_f8;
    uStack_c0 = uVar19;
    _objc_retainBlock();
    puStack_140 = puVar15;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_106dc9160;
    puStack_128 = &UNK_11097c350;
    _objc_retain(uVar4);
    uStack_120 = uVar4;
    uStack_100 = uVar2;
    _objc_retain(uVar20);
    uStack_118 = uVar20;
    uStack_110 = uVar18;
    _objc_retain(uVar19);
    ppuVar8 = &puStack_140;
    uStack_108 = uVar19;
    _objc_retainBlock();
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    FUN_106df7718(uVar4,uVar9);
    _objc_release(uVar9);
    if ((int)uVar10 == 0) {
      uVar9 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0x308);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar11;
      func_0x00010bfbeb40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
    }
    ppuVar12 = ppuVar7;
    (*(code *)ppuVar7[2])(ppuVar7,uVar9);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar8;
    (*(code *)ppuVar8[2])(ppuVar8,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2490;
    _objc_alloc();
    func_0x000106df748c(uVar4);
    uVar10 = uVar4;
    FUN_106df75f8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c028f20();
    _objc_release(uVar10);
    _objc_release(ppuVar13);
    _objc_release(ppuVar12);
    _objc_release(uVar9);
    _objc_release(ppuVar8);
    _objc_release(uStack_108);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
    _objc_release(ppuVar7);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d8);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
  }
  if (param_8 != 0) {
    iVar3 = (int)*(undefined8 *)(param_1 + 0xa0);
    func_0x000108faa364();
    puVar15 = puVar6;
    if (iVar3 == 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0xa0);
      func_0x000108faa350();
      puVar16 = PTR_PTR_1126ae720;
      if (iVar3 == 0) goto LAB_106dc8b28;
      _objc_retain(puVar6);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x1f0);
      *(undefined **)(param_1 + 0x1f0) = puVar16;
      _objc_release(uVar9);
    }
    else {
      func_0x00010c0c45e0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010c08d600();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar16;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x1f8);
      *(undefined **)(param_1 + 0x1f8) = puVar14;
      _objc_release(uVar9);
      _objc_release(puVar16);
    }
    _objc_release(puVar15);
  }
LAB_106dc8b28:
  iVar3 = (int)*(undefined8 *)(param_1 + 0xa0);
  func_0x000108ec1954();
  if (iVar3 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = PTR_PTR_1126b2498;
    _objc_alloc(PTR_PTR_1126b2498);
    func_0x00010c037ea0();
  }
  puVar15 = PTR_PTR_1126b0808;
  _objc_alloc(PTR_PTR_1126b0808);
  func_0x00010c051820();
  _objc_release(puVar16);
  _objc_release(puVar6);
  _objc_release(puStack_1b0);
LAB_106dc8bb4:
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106dc8c4c; end: 106dc8dbb;  */

void FUN_106dc8c4c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x20);
    FUN_106df70a4(puVar2,*(undefined8 *)(lVar1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_106df7030();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106dc8dbc;
    puStack_60 = &UNK_11097c210;
    ppuVar4 = &puStack_78;
    lStack_58 = lVar1;
    _objc_retainBlock();
    puVar6 = PTR_PTR_1126ae558;
    ppuVar5 = ppuVar4;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)ppuVar4[2])(ppuVar4,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(ppuVar4);
      puVar6 = puVar3;
      func_0x00010c0b8600(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106dc8dbc; end: 106dc8fdf;  */

void FUN_106dc8dbc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c097b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x180);
  func_0x00010c2946e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x158);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bfbf720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar1;
    func_0x00010beec820(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010842d260(lVar3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  else {
    lVar2 = lVar1;
    func_0x00010842d1cc(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126b24a8;
  _objc_alloc(PTR_PTR_1126b24a8);
  lVar4 = param_2;
  func_0x00010c0922e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024300(puVar5);
  _objc_release(lVar6);
  _objc_release(lVar4);
  puVar7 = PTR_PTR_1126b24b0;
  _objc_alloc(PTR_PTR_1126b24b0);
  lVar4 = param_2;
  func_0x00010c0922e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c027880(puVar7);
  _objc_release(lVar4);
  puVar8 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  func_0x00010c051840();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106dc8fe0; end: 106dc8feb;  */

void FUN_106dc8fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106dc8fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106dc8fec; end: 106dc90eb;  */

void FUN_106dc8fec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae720;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dc90ec; end: 106dc915f;  */

void FUN_106dc90ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010bf2dc80(*(undefined8 *)(param_1 + 0x20));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc0100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106dc9160; end: 106dc928b;  */

void FUN_106dc9160(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(*(undefined8 *)(param_1 + 0x38));
  _objc_retain(param_2);
  func_0x00010bf43280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf43280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2478;
  _objc_alloc(PTR_PTR_1126b2478);
  func_0x00010c021e80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106dc928c; end: 106dc938f;  */

void FUN_106dc928c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b2470;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010c2adce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dc9390; end: 106dc946b;  */

void FUN_106dc9390(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010bf2dc80(*(undefined8 *)(param_1 + 0x20));
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106dc946c;
  puStack_40 = &UNK_11097bff0;
  uStack_38 = param_2;
  _objc_retain(param_2);
  ppuVar1 = &puStack_58;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc00c0();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106dc946c; end: 106dc949b;  */

void FUN_106dc946c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106dc9480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106dc9490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0,param_2);
  return;
}



/* Entry: 106dc949c; end: 106dc9573;  */

void FUN_106dc949c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae558;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1a820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dc9574; end: 106dc976f; -[SCGallerySendController _createTopicTrackerForGallerySnap:hasUserTaggedVenue:] */

void FUN_106dc9574(long param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    uVar8 = 0;
    goto LAB_106dc974c;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x2c8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf59a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bc7b8;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160(puVar3,param_2,param_3,0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = puVar3;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x000106dee558();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar9 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e86c58,0,0);
    if ((int)uVar2 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar4 = param_3;
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x000106deefe4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puVar9 != (undefined *)0x0) goto LAB_106dc9644;
    }
  }
  else {
LAB_106dc9644:
    func_0x00010befa940(uVar8,param_2,puVar9);
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 1;
    }
  }
  puVar4 = puVar3;
  func_0x00010c0ef4a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010c23ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bddb440(param_1,param_2,puVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar7 = lVar6;
  func_0x00010bf529e0();
  if (lVar7 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
    func_0x000108f48804();
    if (iVar1 != 0) {
      func_0x00010c284240(uVar8,param_2,lVar6);
    }
  }
  _objc_release(lVar6);
  _objc_release(puVar9);
  _objc_release(puVar3);
LAB_106dc974c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 106dc9770; end: 106dc9903; -[SCGallerySendController _captionTopicModelsFromOverlay:snapDocData:] */

void FUN_106dc9770(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x000106deeb8c(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      puVar5 = PTR_PTR_1126c0e38;
      _objc_alloc(PTR_PTR_1126c0e38);
      func_0x00010c019f00();
      func_0x00010befa120(puVar2);
      _objc_release(puVar5);
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    uVar6 = *(undefined8 *)(param_3 + 0x180);
    func_0x00010c2946e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_3 + 0x158);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfbf720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar7;
    func_0x00010beec820(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010842d260(uVar8,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126b0800;
    _objc_alloc(PTR_PTR_1126b0800);
    func_0x00010c051840();
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106dc9904; end: 106dc9a17; -[SCGallerySendController _generateAddFriendLinkShareTextConfiguration] */

void FUN_106dc9904(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010c2946e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbf720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010842d260(uVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  func_0x00010c051840();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106dc9a18; end: 106dc9bdb; -[SCGallerySendController _generateShareMediaConfigurationWithCameraRollGalleryItems:cameraRollPHAssets:] */

void FUN_106dc9a18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar6);
  _objc_retain(param_4);
  FUN_106df7ea4(param_3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain();
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf43280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf43280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2478;
  _objc_alloc(PTR_PTR_1126b2478);
  func_0x00010c021e80();
  func_0x000106df7c34(param_4);
  _objc_release(param_4);
  puVar5 = PTR_PTR_1126b2490;
  _objc_alloc(PTR_PTR_1126b2490);
  func_0x00010c028f20();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106dc9bdc; end: 106dc9c2b;  */

void FUN_106dc9bdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106dc9c2c; end: 106dc9d8f;  */

void FUN_106dc9c2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b2470;
  _objc_retain(param_2);
  func_0x00010c2adce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dc9d90; end: 106dc9dbf;  */

void FUN_106dc9d90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106dc9da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106dc9db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0,param_2);
  return;
}



/* Entry: 106dc9dc0; end: 106dc9ed3; -[SCGallerySendController _hasMusicSnaps:] */

undefined * FUN_106dc9dc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_448;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_328;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  puVar14 = auStack_c8;
  lVar19 = param_3;
  func_0x00010bf52a60();
  puVar16 = (undefined *)0x0;
  if (lVar19 != 0) {
    lVar17 = *plStack_100;
    do {
      lVar18 = 0;
      do {
        if (*plStack_100 != lVar17) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar18 * 8);
        func_0x00010b697ae8(uVar2,2);
        if ((uVar2 & 1) != 0) {
          puVar16 = (undefined *)0x1;
          goto LAB_106dc9e8c;
        }
        lVar18 = lVar18 + 1;
      } while (lVar19 != lVar18);
      puVar14 = auStack_c8;
      lVar19 = param_3;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar19 != 0);
    puVar16 = (undefined *)0x0;
  }
LAB_106dc9e8c:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar16;
  }
  ___stack_chk_fail();
  puVar25 = &uStack_2e0;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar14);
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  _objc_retain(puVar4);
  puVar20 = &uStack_2a0;
  puVar3 = (undefined1 *)puVar4;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    lVar19 = *plStack_290;
    do {
      puVar21 = (undefined1 *)0x0;
      do {
        if (*plStack_290 != lVar19) {
          _objc_enumerationMutation(puVar4);
        }
        uVar2 = *(ulong *)(lStack_298 + (long)puVar21 * 8);
        func_0x00010b5fa088();
        func_0x00010b5fa4c8();
        if ((uVar2 & 1) != 0) {
          puVar16 = (undefined *)0x1;
          puVar3 = (undefined1 *)puVar4;
          puVar25 = puVar20;
          goto LAB_106dca054;
        }
        puVar21 = puVar21 + 1;
      } while (puVar3 != puVar21);
      puVar20 = &uStack_2a0;
      puVar3 = (undefined1 *)puVar4;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar4);
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  plStack_2d0 = (long *)0x0;
  _objc_retain(puVar14);
  puVar21 = puVar14;
  func_0x00010bf52a60();
  puVar16 = (undefined *)0x0;
  puVar3 = puVar14;
  if (puVar21 != (undefined1 *)0x0) {
    lVar19 = *plStack_2d0;
    do {
      puVar22 = (undefined1 *)0x0;
      do {
        if (*plStack_2d0 != lVar19) {
          _objc_enumerationMutation(puVar14);
        }
        lVar17 = *(long *)(lStack_2d8 + (long)puVar22 * 8);
        func_0x00010c0c6c20();
        if (lVar17 == 1) {
          puVar16 = (undefined *)0x1;
          goto LAB_106dca054;
        }
        puVar22 = puVar22 + 1;
      } while (puVar21 != puVar22);
      puVar21 = puVar14;
      puVar25 = &uStack_2e0;
      func_0x00010bf52a60();
    } while (puVar21 != (undefined1 *)0x0);
    puVar16 = (undefined *)0x0;
  }
LAB_106dca054:
  _objc_release(puVar3);
  _objc_release(puVar14);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return puVar16;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_3f0;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = puVar25;
  _objc_retain(puVar25);
  puVar4 = puVar25;
  func_0x00010bf529e0();
  if (puVar4 == (undefined8 *)0x0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    lStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    plStack_3e0 = (long *)0x0;
    _objc_retain(puVar25);
    puVar4 = puVar25;
    func_0x00010bf52a60();
    if (puVar4 != (undefined8 *)0x0) {
      lVar19 = *plStack_3e0;
      do {
        puVar20 = (undefined8 *)0x0;
        do {
          if (*plStack_3e0 != lVar19) {
            _objc_enumerationMutation(puVar25);
          }
          lVar17 = *(long *)(lStack_3e8 + (long)puVar20 * 8);
          func_0x00010b5fa088();
          if (10 < lVar17 - 2U) {
            puVar16 = (undefined *)0x0;
            goto LAB_106dca180;
          }
          puVar20 = (undefined8 *)((long)puVar20 + 1);
        } while (puVar4 != puVar20);
        puVar4 = puVar25;
        puVar13 = &uStack_3f0;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined8 *)0x0);
    }
    puVar16 = (undefined *)0x1;
LAB_106dca180:
    _objc_release(puVar25);
    puVar20 = puVar13;
  }
  _objc_release(puVar25);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return puVar16;
  }
  ___stack_chk_fail();
  puVar25 = &uStack_510;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar20);
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_508 = 0;
  uStack_510 = 0;
  uStack_4f8 = 0;
  plStack_500 = (long *)0x0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  _objc_retain(puVar20);
  puVar4 = puVar20;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar19 = *plStack_500;
    do {
      puVar25 = (undefined8 *)0x0;
      do {
        if (*plStack_500 != lVar19) {
          _objc_enumerationMutation(puVar20);
        }
        lVar18 = *(long *)(lStack_508 + (long)puVar25 * 8);
        lVar17 = lVar18;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        if (lVar17 == 8) {
          func_0x00010bf97200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar16);
          _objc_release(lVar18);
        }
        puVar25 = (undefined8 *)((long)puVar25 + 1);
      } while (puVar4 != puVar25);
      puVar4 = puVar20;
      puVar25 = &uStack_510;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar20);
  puVar24 = puVar16;
  func_0x00010bf51e00();
  _objc_release(puVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_448) {
    ___stack_chk_fail();
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar25);
    lVar17 = puVar20[0x5a];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar17;
    func_0x00010c0ee9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar17);
    ppuVar12 = &PTR___NSConcreteGlobalBlock_11097c470;
    lVar17 = lVar19;
    func_0x000100504554();
    lVar18 = lVar17;
    func_0x00010bf529e0();
    if (lVar18 == 0) {
      puVar24 = (undefined *)0x0;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
      func_0x00010c0ecd40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      _objc_retain(lVar17);
      lVar18 = lVar17;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar18 != 0) {
        lVar23 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar17);
          }
          uVar26 = *(ulong *)(lVar23 * 8);
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar26;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = puVar20[1];
          func_0x00010c2923e0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar2;
          func_0x00010c0720c0();
          _objc_release(uVar6);
          _objc_release(uVar2);
          _objc_release(uVar26);
          if ((uVar7 & 1) == 0) {
            puVar24 = PTR_PTR_1126b3568;
            _objc_alloc(PTR_PTR_1126b3568);
            func_0x00010c03d400();
            func_0x00010befa120(puVar5);
            _objc_release(puVar24);
          }
          lVar23 = lVar23 + 1;
        } while (lVar18 != lVar23);
        lVar18 = lVar17;
        func_0x00010bf52a60();
      }
      _objc_release(lVar17);
      puVar24 = puVar5;
      func_0x00010bf51e00();
      _objc_release(puVar5);
      _objc_release(puVar16);
    }
    _objc_release(lVar17);
    _objc_release(lVar19);
    _objc_release(puVar25);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
      ___stack_chk_fail();
      _objc_retain(ppuVar12);
      ppuVar8 = ppuVar12;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c08fa60();
      _objc_release(ppuVar8);
      if (ppuVar9 == (undefined **)0x0) {
        puVar24 = (undefined *)0x0;
      }
      else {
        puVar16 = PTR_PTR_1126b3558;
        _objc_alloc(PTR_PTR_1126b3558);
        ppuVar8 = ppuVar12;
        func_0x00010c2923e0(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03d4e0(puVar16);
        _objc_release(ppuVar8);
        puVar24 = PTR_PTR_1126b3560;
        _objc_alloc(PTR_PTR_1126b3560);
        ppuVar8 = ppuVar12;
        func_0x00010c294420(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar12;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar9;
        func_0x00010c08fa60();
        ppuVar11 = ppuVar12;
        if (ppuVar10 == (undefined **)0x0) {
          func_0x00010c294420(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf85d80(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c01bce0(puVar24);
        _objc_release(ppuVar11);
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
        _objc_release(puVar16);
      }
      _objc_release(ppuVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
  return puVar24;
}



/* Entry: 106dc9ed4; end: 106dca09f; -[SCGallerySendController _hasImageSnaps:phAssets:] */

undefined * FUN_106dc9ed4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_338;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_218;
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
  long lStack_48;
  
  puVar21 = &uStack_1d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  _objc_retain(param_3);
  puVar3 = &uStack_190;
  lVar14 = param_3;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    lVar15 = *plStack_180;
    do {
      lVar17 = 0;
      do {
        if (*plStack_180 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        uVar1 = *(ulong *)(lStack_188 + lVar17 * 8);
        func_0x00010b5fa088();
        func_0x00010b5fa4c8();
        if ((uVar1 & 1) != 0) {
          puVar13 = (undefined *)0x1;
          lVar14 = param_3;
          puVar21 = puVar3;
          goto LAB_106dca054;
        }
        lVar17 = lVar17 + 1;
      } while (lVar14 != lVar17);
      puVar3 = &uStack_190;
      lVar14 = param_3;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  _objc_release(param_3);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  _objc_retain(param_4);
  lVar15 = param_4;
  func_0x00010bf52a60();
  puVar13 = (undefined *)0x0;
  lVar14 = param_4;
  if (lVar15 != 0) {
    lVar17 = *plStack_1c0;
    do {
      lVar18 = 0;
      do {
        if (*plStack_1c0 != lVar17) {
          _objc_enumerationMutation(param_4);
        }
        lVar2 = *(long *)(lStack_1c8 + lVar18 * 8);
        func_0x00010c0c6c20();
        if (lVar2 == 1) {
          puVar13 = (undefined *)0x1;
          goto LAB_106dca054;
        }
        lVar18 = lVar18 + 1;
      } while (lVar15 != lVar18);
      lVar15 = param_4;
      puVar21 = &uStack_1d0;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
    puVar13 = (undefined *)0x0;
  }
LAB_106dca054:
  _objc_release(lVar14);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar13;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_2e0;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = puVar21;
  _objc_retain(puVar21);
  puVar3 = puVar21;
  func_0x00010bf529e0();
  if (puVar3 == (undefined8 *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    lStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    plStack_2d0 = (long *)0x0;
    _objc_retain(puVar21);
    puVar3 = puVar21;
    func_0x00010bf52a60();
    if (puVar3 != (undefined8 *)0x0) {
      lVar14 = *plStack_2d0;
      do {
        puVar16 = (undefined8 *)0x0;
        do {
          if (*plStack_2d0 != lVar14) {
            _objc_enumerationMutation(puVar21);
          }
          lVar15 = *(long *)(lStack_2d8 + (long)puVar16 * 8);
          func_0x00010b5fa088();
          if (10 < lVar15 - 2U) {
            puVar13 = (undefined *)0x0;
            goto LAB_106dca180;
          }
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (puVar3 != puVar16);
        puVar3 = puVar21;
        puVar12 = &uStack_2e0;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined8 *)0x0);
    }
    puVar13 = (undefined *)0x1;
LAB_106dca180:
    _objc_release(puVar21);
    puVar16 = puVar12;
  }
  _objc_release(puVar21);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return puVar13;
  }
  ___stack_chk_fail();
  puVar21 = &uStack_400;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar16);
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  plStack_3f0 = (long *)0x0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  _objc_retain(puVar16);
  puVar3 = puVar16;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    lVar14 = *plStack_3f0;
    do {
      puVar21 = (undefined8 *)0x0;
      do {
        if (*plStack_3f0 != lVar14) {
          _objc_enumerationMutation(puVar16);
        }
        lVar17 = *(long *)(lStack_3f8 + (long)puVar21 * 8);
        lVar15 = lVar17;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        if (lVar15 == 8) {
          func_0x00010bf97200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar13);
          _objc_release(lVar17);
        }
        puVar21 = (undefined8 *)((long)puVar21 + 1);
      } while (puVar3 != puVar21);
      puVar3 = puVar16;
      puVar21 = &uStack_400;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(puVar16);
  puVar20 = puVar13;
  func_0x00010bf51e00();
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
    ___stack_chk_fail();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar21);
    lVar15 = puVar16[0x5a];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar15;
    func_0x00010c0ee9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    ppuVar11 = &PTR___NSConcreteGlobalBlock_11097c470;
    lVar15 = lVar14;
    func_0x000100504554();
    lVar17 = lVar15;
    func_0x00010bf529e0();
    if (lVar17 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
      func_0x00010c0ecd40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      _objc_retain(lVar15);
      lVar17 = lVar15;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar17 != 0) {
        lVar19 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar15);
          }
          uVar22 = *(ulong *)(lVar19 * 8);
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar22;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = puVar16[1];
          func_0x00010c2923e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar1;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          _objc_release(uVar1);
          _objc_release(uVar22);
          if ((uVar6 & 1) == 0) {
            puVar20 = PTR_PTR_1126b3568;
            _objc_alloc(PTR_PTR_1126b3568);
            func_0x00010c03d400();
            func_0x00010befa120(puVar4);
            _objc_release(puVar20);
          }
          lVar19 = lVar19 + 1;
        } while (lVar17 != lVar19);
        lVar17 = lVar15;
        func_0x00010bf52a60();
      }
      _objc_release(lVar15);
      puVar20 = puVar4;
      func_0x00010bf51e00();
      _objc_release(puVar4);
      _objc_release(puVar13);
    }
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(puVar21);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
      ___stack_chk_fail();
      _objc_retain(ppuVar11);
      ppuVar7 = ppuVar11;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c08fa60();
      _objc_release(ppuVar7);
      if (ppuVar8 == (undefined **)0x0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR_PTR_1126b3558;
        _objc_alloc(PTR_PTR_1126b3558);
        ppuVar7 = ppuVar11;
        func_0x00010c2923e0(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03d4e0(puVar13);
        _objc_release(ppuVar7);
        puVar20 = PTR_PTR_1126b3560;
        _objc_alloc(PTR_PTR_1126b3560);
        ppuVar7 = ppuVar11;
        func_0x00010c294420(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar11;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        func_0x00010c08fa60();
        ppuVar10 = ppuVar11;
        if (ppuVar9 == (undefined **)0x0) {
          func_0x00010c294420(ppuVar11);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf85d80(ppuVar11);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c01bce0(puVar20);
        _objc_release(ppuVar10);
        _objc_release(ppuVar8);
        _objc_release(ppuVar7);
        _objc_release(puVar13);
      }
      _objc_release(ppuVar11);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return puVar20;
}



/* Entry: 106dca0a0; end: 106dca1cf; -[SCGallerySendController _snapsAreSpectaclesOnly:] */

undefined * FUN_106dca0a0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar13 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = param_3;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf529e0();
  if (puVar2 == (undefined1 *)0x0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar16 = *plStack_100;
      do {
        puVar17 = (undefined1 *)0x0;
        do {
          if (*plStack_100 != lVar16) {
            _objc_enumerationMutation(param_3);
          }
          lVar3 = *(long *)(lStack_108 + (long)puVar17 * 8);
          func_0x00010b5fa088();
          if (10 < lVar3 - 2U) {
            puVar15 = (undefined *)0x0;
            goto LAB_106dca180;
          }
          puVar17 = puVar17 + 1;
        } while (puVar2 != puVar17);
        puVar2 = param_3;
        puVar13 = &uStack_110;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    puVar15 = (undefined *)0x1;
LAB_106dca180:
    _objc_release(param_3);
    puVar17 = (undefined1 *)puVar13;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar15;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_230;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar17);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  _objc_retain(puVar17);
  puVar2 = puVar17;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar16 = *plStack_220;
    do {
      puVar21 = (undefined1 *)0x0;
      do {
        if (*plStack_220 != lVar16) {
          _objc_enumerationMutation(puVar17);
        }
        lVar18 = *(long *)(lStack_228 + (long)puVar21 * 8);
        lVar3 = lVar18;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        if (lVar3 == 8) {
          func_0x00010bf97200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar15);
          _objc_release(lVar18);
        }
        puVar21 = puVar21 + 1;
      } while (puVar2 != puVar21);
      puVar2 = puVar17;
      puVar13 = &uStack_230;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(puVar17);
  puVar20 = puVar15;
  func_0x00010bf51e00();
  _objc_release(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
    ___stack_chk_fail();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar13);
    lVar3 = *(long *)(puVar17 + 0x2d0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar3;
    func_0x00010c0ee9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    ppuVar12 = &PTR___NSConcreteGlobalBlock_11097c470;
    lVar3 = lVar16;
    func_0x000100504554();
    lVar18 = lVar3;
    func_0x00010bf529e0();
    if (lVar18 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar15 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
      func_0x00010c0ecd40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      _objc_retain(lVar3);
      lVar18 = lVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar18 != 0) {
        lVar19 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar3);
          }
          uVar22 = *(ulong *)(lVar19 * 8);
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar22;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(puVar17 + 8);
          func_0x00010c2923e0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar22);
          if ((uVar7 & 1) == 0) {
            puVar20 = PTR_PTR_1126b3568;
            _objc_alloc(PTR_PTR_1126b3568);
            func_0x00010c03d400();
            func_0x00010befa120(puVar4);
            _objc_release(puVar20);
          }
          lVar19 = lVar19 + 1;
        } while (lVar18 != lVar19);
        lVar18 = lVar3;
        func_0x00010bf52a60();
      }
      _objc_release(lVar3);
      puVar20 = puVar4;
      func_0x00010bf51e00();
      _objc_release(puVar4);
      _objc_release(puVar15);
    }
    _objc_release(lVar3);
    _objc_release(lVar16);
    _objc_release(puVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      ___stack_chk_fail();
      _objc_retain(ppuVar12);
      ppuVar8 = ppuVar12;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c08fa60();
      _objc_release(ppuVar8);
      if (ppuVar9 == (undefined **)0x0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar15 = PTR_PTR_1126b3558;
        _objc_alloc(PTR_PTR_1126b3558);
        ppuVar8 = ppuVar12;
        func_0x00010c2923e0(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03d4e0(puVar15);
        _objc_release(ppuVar8);
        puVar20 = PTR_PTR_1126b3560;
        _objc_alloc(PTR_PTR_1126b3560);
        ppuVar8 = ppuVar12;
        func_0x00010c294420(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar12;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar9;
        func_0x00010c08fa60();
        ppuVar11 = ppuVar12;
        if (ppuVar10 == (undefined **)0x0) {
          func_0x00010c294420(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf85d80(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c01bce0(puVar20);
        _objc_release(ppuVar11);
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
        _objc_release(puVar15);
      }
      _objc_release(ppuVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return puVar20;
}



/* Entry: 106dca1d0; end: 106dca337; -[SCGallerySendController _entryIdsForEntryLevelSnapDocs:] */

void FUN_106dca1d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar12 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_118 = 0;
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
    lVar15 = *plStack_110;
    do {
      lVar18 = 0;
      do {
        if (*plStack_110 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        lVar14 = *(long *)(lStack_118 + lVar18 * 8);
        lVar13 = lVar14;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        if (lVar13 == 8) {
          func_0x00010bf97200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(lVar14);
        }
        lVar18 = lVar18 + 1;
      } while (lVar2 != lVar18);
      lVar2 = param_3;
      puVar12 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar17 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar12);
    lVar15 = *(long *)(param_3 + 0x2d0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar15;
    func_0x00010c0ee9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    ppuVar11 = &PTR___NSConcreteGlobalBlock_11097c470;
    lVar15 = lVar2;
    func_0x000100504554();
    lVar18 = lVar15;
    func_0x00010bf529e0();
    if (lVar18 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
      func_0x00010c0ecd40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      _objc_retain(lVar15);
      lVar18 = lVar15;
      func_0x00010bf52a60();
      lVar14 = lRam0000000000000000;
      while (lVar18 != 0) {
        lVar16 = 0;
        do {
          if (lRam0000000000000000 != lVar14) {
            _objc_enumerationMutation(lVar15);
          }
          uVar19 = *(ulong *)(lVar16 * 8);
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar19;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_3 + 8);
          func_0x00010c2923e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar19);
          if ((uVar6 & 1) == 0) {
            puVar17 = PTR_PTR_1126b3568;
            _objc_alloc(PTR_PTR_1126b3568);
            func_0x00010c03d400();
            func_0x00010befa120(puVar3);
            _objc_release(puVar17);
          }
          lVar16 = lVar16 + 1;
        } while (lVar18 != lVar16);
        lVar18 = lVar15;
        func_0x00010bf52a60();
      }
      _objc_release(lVar15);
      puVar17 = puVar3;
      func_0x00010bf51e00();
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
    _objc_release(lVar15);
    _objc_release(lVar2);
    _objc_release(puVar12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
      ___stack_chk_fail();
      _objc_retain(ppuVar11);
      ppuVar7 = ppuVar11;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c08fa60();
      _objc_release(ppuVar7);
      if (ppuVar8 == (undefined **)0x0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar1 = PTR_PTR_1126b3558;
        _objc_alloc(PTR_PTR_1126b3558);
        ppuVar7 = ppuVar11;
        func_0x00010c2923e0(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03d4e0(puVar1);
        _objc_release(ppuVar7);
        puVar17 = PTR_PTR_1126b3560;
        _objc_alloc(PTR_PTR_1126b3560);
        ppuVar7 = ppuVar11;
        func_0x00010c294420(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar11;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        func_0x00010c08fa60();
        ppuVar10 = ppuVar11;
        if (ppuVar9 == (undefined **)0x0) {
          func_0x00010c294420(ppuVar11);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf85d80(ppuVar11);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c01bce0(puVar17);
        _objc_release(ppuVar10);
        _objc_release(ppuVar8);
        _objc_release(ppuVar7);
        _objc_release(puVar1);
      }
      _objc_release(ppuVar11);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 106dca338; end: 106dca597; -[SCGallerySendController _preselectedItemsForUserIds:] */

void FUN_106dca338(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x2d0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ee9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  ppuVar14 = &PTR___NSConcreteGlobalBlock_11097c470;
  lVar2 = lVar3;
  func_0x000100504554();
  lVar4 = lVar2;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    _objc_retain(lVar2);
    lVar4 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar18 = *(ulong *)(lVar16 * 8);
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar18;
        func_0x00010c122b80();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + 8);
        func_0x00010c2923e0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar7;
        func_0x00010c0720c0();
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar18);
        if ((uVar9 & 1) == 0) {
          puVar17 = PTR_PTR_1126b3568;
          _objc_alloc(PTR_PTR_1126b3568);
          func_0x00010c03d400();
          func_0x00010befa120(puVar6);
          _objc_release(puVar17);
        }
        lVar16 = lVar16 + 1;
      } while (lVar4 != lVar16);
      lVar4 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
    puVar17 = puVar6;
    func_0x00010bf51e00();
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    _objc_retain(ppuVar14);
    ppuVar10 = ppuVar14;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010c08fa60();
    _objc_release(ppuVar10);
    if (ppuVar11 == (undefined **)0x0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126b3558;
      _objc_alloc(PTR_PTR_1126b3558);
      ppuVar10 = ppuVar14;
      func_0x00010c2923e0(ppuVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03d4e0(puVar5);
      _objc_release(ppuVar10);
      puVar17 = PTR_PTR_1126b3560;
      _objc_alloc(PTR_PTR_1126b3560);
      ppuVar10 = ppuVar14;
      func_0x00010c294420(ppuVar14);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar14;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010c08fa60();
      ppuVar13 = ppuVar14;
      if (ppuVar12 == (undefined **)0x0) {
        func_0x00010c294420(ppuVar14);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf85d80(ppuVar14);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c01bce0(puVar17);
      _objc_release(ppuVar13);
      _objc_release(ppuVar11);
      _objc_release(ppuVar10);
      _objc_release(puVar5);
    }
    _objc_release(ppuVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 106dca598; end: 106dca6f3;  */

void FUN_106dca598(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b3558;
    _objc_alloc(PTR_PTR_1126b3558);
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03d4e0(puVar3);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126b3560;
    _objc_alloc(PTR_PTR_1126b3560);
    lVar1 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    lVar5 = param_2;
    if (lVar4 == 0) {
      func_0x00010c294420(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf85d80(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c01bce0(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106dca6f4; end: 106dca98f; -[SCGallerySendController _preselectedItemsByAddingSpotlight:] */

void FUN_106dca6f4(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **unaff_x26;
  undefined **unaff_x27;
  ulong unaff_x28;
  long lVar15;
  undefined1 auStack_440 [8];
  undefined1 auStack_438 [8];
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined1 ***pppuStack_400;
  code *pcStack_3f8;
  undefined **ppuStack_3e8;
  undefined *puStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined *apuStack_3a0 [16];
  long lStack_320;
  ulong uStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *apuStack_220 [16];
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_e8 [16];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(&PTR____CFConstantStringClassReference_110f52df8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  ppuVar10 = apuStack_e8;
  ppuVar14 = param_3;
  func_0x00010bf52a60();
  if (ppuVar14 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_120;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        ppuVar2 = *(undefined ***)(lStack_128 + (long)unaff_x27 * 8);
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar2;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar13;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar3;
        ppuVar11 = &PTR____CFConstantStringClassReference_110f52df8;
        func_0x00010c0720c0();
        _objc_release(ppuVar3);
        _objc_release(ppuVar13);
        _objc_release(ppuVar2);
        ppuVar13 = param_3;
        if (((ulong)ppuVar7 & 1) != 0) goto LAB_106dca940;
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar14 != unaff_x27);
      ppuVar10 = apuStack_e8;
      ppuVar14 = param_3;
      func_0x00010bf52a60();
    } while (ppuVar14 != (undefined **)0x0);
  }
  _objc_release(param_3);
  puVar8 = PTR_PTR_1126b3558;
  _objc_alloc();
  puVar4 = puVar8;
  func_0x00010853f4ac();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d4e0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b3560;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000108f5833c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bce0();
  _objc_release(puVar5);
  ppuVar14 = (undefined **)PTR_PTR_1126b3568;
  _objc_alloc();
  ppuVar10 = (undefined **)0x0;
  func_0x00010c03d400();
  if (param_3 == (undefined **)0x0) {
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = param_3;
    func_0x00010c0d3c80();
  }
  ppuVar11 = ppuVar14;
  func_0x00010befa120();
  ppuVar13 = ppuVar7;
  func_0x00010bf51e00();
  _objc_release(ppuVar7);
  _objc_release(ppuVar14);
  _objc_release(puVar4);
  _objc_release(puVar8);
LAB_106dca940:
  _objc_release(&PTR____CFConstantStringClassReference_110f52df8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_138 = FUN_106dca990;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar10);
  *(undefined1 *)(param_3 + 0x45) = 0;
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (undefined8 *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  _objc_retain(ppuVar11);
  ppuVar3 = &puStack_260;
  ppuVar2 = apuStack_220;
  ppuVar6 = ppuVar11;
  func_0x00010bf52a60();
  ppuVar14 = ppuVar13;
  if (ppuVar6 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_250;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != unaff_x26) {
          _objc_enumerationMutation(ppuVar11);
        }
        ppuVar14 = *(undefined ***)(lStack_258 + (long)unaff_x27 * 8);
        ppuVar7 = ppuVar14;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar7;
        func_0x00010c08fa60();
        if (ppuVar13 == (undefined **)0x0) {
LAB_106dcaa90:
          _objc_release(ppuVar7);
        }
        else {
          ppuVar13 = ppuVar14;
          func_0x00010c23ff80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = (ulong)(ppuVar13 == (undefined **)0x0);
          _objc_release();
          if (ppuVar13 != (undefined **)0x0) goto LAB_106dcaa90;
          ppuVar13 = ppuVar14;
          func_0x00010b5fa088();
          unaff_x28 = (ulong)(ppuVar13 == (undefined **)0x1);
          _objc_release(ppuVar7);
          if (ppuVar13 == (undefined **)0x1) {
            func_0x00010befa120(ppuVar12);
          }
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar6 != unaff_x27);
      ppuVar3 = &puStack_260;
      ppuVar2 = apuStack_220;
      ppuVar6 = ppuVar11;
      func_0x00010bf52a60();
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar11);
  ppuVar13 = ppuVar12;
  func_0x00010bf529e0();
  if (ppuVar13 == (undefined **)0x0) {
LAB_106dcac64:
    ppuVar13 = (undefined **)0x0;
  }
  else {
    iVar1 = (int)param_3[0x14];
    ppuVar3 = &PTR____CFConstantStringClassReference_110e86bb8;
    ppuVar2 = (undefined **)0x0;
    func_0x00010bf1f440();
    if (iVar1 == 0) goto LAB_106dcac64;
    ppuVar13 = (undefined **)PTR_PTR_1126d29e0;
    _objc_alloc();
    ppuVar14 = param_3 + 0x42;
    _objc_loadWeakRetained(ppuVar14);
    ppuVar7 = (undefined **)param_3[0x43];
    func_0x00010c243b20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = ppuVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = unaff_x26;
    func_0x00010c041fc0();
    _objc_release(unaff_x26);
    _objc_release(ppuVar7);
    _objc_release(ppuVar14);
    _objc_initWeak(auStack_268,param_3);
    puVar8 = param_3[0x10];
    func_0x00010c269d40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2a0 = 0xc2000000;
    pcStack_298 = FUN_106dcacec;
    puStack_290 = &UNK_110850cf8;
    ppuVar14 = &puStack_2a8;
    _objc_copyWeak(auStack_270,auStack_268);
    _objc_retain(ppuVar12);
    ppuStack_288 = ppuVar12;
    _objc_retain(ppuVar13);
    ppuStack_280 = ppuVar13;
    _objc_retain(ppuVar10);
    ppuVar3 = &puStack_2a8;
    ppuStack_278 = ppuVar10;
    func_0x00010c0f7fc0(puVar8);
    _objc_release(puVar8);
    param_3 = ppuStack_278;
    _objc_retain(ppuVar13);
    _objc_release(param_3);
    _objc_release(ppuStack_280);
    _objc_release(ppuStack_288);
    _objc_release(ppuVar13);
    _objc_destroyWeak(auStack_270);
    _objc_destroyWeak(auStack_268);
  }
  _objc_release(ppuVar12);
  _objc_release(ppuVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar14 + 7);
    _objc_destroyWeak(auStack_268);
    ppuVar9 = ppuVar11;
    __Unwind_Resume();
    pcStack_2b8 = FUN_106dcacec;
    lStack_320 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar6 = ppuVar9 + 7;
    uStack_310 = unaff_x28;
    ppuStack_308 = unaff_x27;
    ppuStack_300 = unaff_x26;
    ppuStack_2f8 = ppuVar7;
    ppuStack_2f0 = ppuVar14;
    ppuStack_2e8 = ppuVar13;
    ppuStack_2e0 = param_3;
    ppuStack_2d8 = ppuVar12;
    ppuStack_2d0 = ppuVar10;
    ppuStack_2c8 = ppuVar11;
    ppuStack_2c0 = &puStack_140;
    _objc_loadWeakRetained();
    if (ppuVar6 != (undefined **)0x0) {
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      lStack_3d8 = 0;
      puStack_3e0 = (undefined *)0x0;
      uStack_3c8 = 0;
      plStack_3d0 = (long *)0x0;
      ppuVar12 = (undefined **)ppuVar9[4];
      ppuStack_3e8 = ppuVar6;
      _objc_retain(ppuVar12);
      ppuVar3 = &puStack_3e0;
      ppuVar2 = apuStack_3a0;
      ppuVar10 = ppuVar12;
      func_0x00010bf52a60();
      if (ppuVar10 != (undefined **)0x0) {
        lVar15 = *plStack_3d0;
        do {
          ppuVar11 = (undefined **)0x0;
          do {
            if (*plStack_3d0 != lVar15) {
              _objc_enumerationMutation(ppuVar12);
            }
            ppuVar13 = *(undefined ***)(lStack_3d8 + (long)ppuVar11 * 8);
            ppuVar14 = (undefined **)ppuVar9[5];
            puVar8 = ppuVar9[6];
            ppuVar3 = ppuVar13;
            func_0x00010c241220(ppuVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar13;
            func_0x00010c241220(ppuVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c251460(ppuVar14);
            _objc_release(ppuVar7);
            _objc_release(puVar8);
            _objc_release(ppuVar3);
            ppuVar11 = (undefined **)((long)ppuVar11 + 1);
          } while (ppuVar10 != ppuVar11);
          ppuVar3 = &puStack_3e0;
          ppuVar2 = apuStack_3a0;
          ppuVar10 = ppuVar12;
          func_0x00010bf52a60();
          param_3 = (undefined **)0x0;
        } while (ppuVar10 != (undefined **)0x0);
      }
      _objc_release(ppuVar12);
      ppuVar6 = ppuStack_3e8;
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_320) {
      ___stack_chk_fail();
      pcStack_3f8 = FUN_106dcae74;
      ppuStack_430 = ppuVar14;
      ppuStack_428 = ppuVar13;
      ppuStack_420 = param_3;
      ppuStack_418 = ppuVar12;
      ppuStack_410 = ppuVar9;
      ppuStack_408 = ppuVar11;
      pppuStack_400 = &ppuStack_2c0;
      _objc_retain(ppuVar3);
      _objc_retain(ppuVar2);
      if (((ulong)ppuVar6[0x45] & 1) == 0) {
        func_0x00010bf2dc80(ppuVar6[0x44]);
        puVar8 = ppuVar6[0x44];
        ppuVar6[0x44] = (undefined *)0x0;
        _objc_release(puVar8);
      }
      _objc_initWeak(auStack_438,ppuVar6);
      ppuVar10 = ppuVar6 + 0x27;
      _objc_loadWeakRetained(ppuVar10);
      ppuVar14 = ppuVar10;
      func_0x00010c12e1c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_440,auStack_438);
      func_0x00010c2a4ae0(ppuVar14);
      _objc_release(ppuVar14);
      _objc_release(ppuVar10);
      puVar8 = ppuVar6[5];
      ppuVar6[5] = (undefined *)0x0;
      _objc_release(puVar8);
      _objc_destroyWeak(auStack_440);
      _objc_destroyWeak(auStack_438);
      _objc_release(ppuVar2);
      _objc_release(ppuVar3);
      return;
    }
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
  return;
}



/* Entry: 106dca990; end: 106dcaceb; -[SCGallerySendController _startLegacyEagerTranscodingIfEnabledForSnaps:cloudFiles:] */

void FUN_106dca990(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined *unaff_x27;
  ulong unaff_x28;
  long lVar11;
  undefined1 auStack_310 [8];
  undefined1 auStack_308 [8];
  undefined **ppuStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *apuStack_270 [16];
  long lStack_1f0;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0x228) = 0;
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  ppuVar2 = &puStack_130;
  ppuVar8 = apuStack_f0;
  puVar10 = param_3;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    unaff_x26 = (undefined **)*puStack_120;
    do {
      unaff_x27 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(undefined ***)(lStack_128 + (long)unaff_x27 * 8);
        unaff_x25 = unaff_x24;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = unaff_x25;
        func_0x00010c08fa60();
        if (ppuVar2 == (undefined **)0x0) {
LAB_106dcaa90:
          _objc_release(unaff_x25);
        }
        else {
          ppuVar2 = unaff_x24;
          func_0x00010c23ff80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = (ulong)(ppuVar2 == (undefined **)0x0);
          _objc_release();
          if (ppuVar2 != (undefined **)0x0) goto LAB_106dcaa90;
          ppuVar2 = unaff_x24;
          func_0x00010b5fa088();
          unaff_x28 = (ulong)(ppuVar2 == (undefined **)0x1);
          _objc_release(unaff_x25);
          if (ppuVar2 == (undefined **)0x1) {
            func_0x00010befa120(puVar9);
          }
        }
        unaff_x27 = unaff_x27 + 1;
      } while (puVar10 != unaff_x27);
      ppuVar2 = &puStack_130;
      ppuVar8 = apuStack_f0;
      puVar10 = param_3;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar10 = puVar9;
  func_0x00010bf529e0();
  if (puVar10 != (undefined *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e86bb8;
    ppuVar8 = (undefined **)0x0;
    func_0x00010bf1f440();
    if (iVar1 != 0) {
      puVar10 = PTR_PTR_1126d29e0;
      _objc_alloc();
      lVar11 = param_1 + 0x210;
      _objc_loadWeakRetained(lVar11);
      unaff_x25 = *(undefined ***)(param_1 + 0x218);
      func_0x00010c243b20();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x25;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = unaff_x26;
      func_0x00010c041fc0();
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      _objc_release(lVar11);
      _objc_initWeak(auStack_138,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_106dcacec;
      puStack_160 = &UNK_110850cf8;
      unaff_x24 = &puStack_178;
      _objc_copyWeak(auStack_140,auStack_138);
      _objc_retain(puVar9);
      puStack_158 = puVar9;
      _objc_retain(puVar10);
      puStack_150 = puVar10;
      _objc_retain(param_4);
      ppuVar2 = &puStack_178;
      lStack_148 = param_4;
      func_0x00010c0f7fc0(uVar3);
      _objc_release(uVar3);
      param_1 = lStack_148;
      _objc_retain(puVar10);
      _objc_release(param_1);
      _objc_release(puStack_150);
      _objc_release(puStack_158);
      _objc_release(puVar10);
      _objc_destroyWeak(auStack_140);
      _objc_destroyWeak(auStack_138);
      goto LAB_106dcac68;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_106dcac68:
  _objc_release(puVar9);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 7);
  _objc_destroyWeak(auStack_138);
  puVar4 = param_3;
  __Unwind_Resume();
  pcStack_188 = FUN_106dcacec;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4 + 0x38;
  uStack_1e0 = unaff_x28;
  puStack_1d8 = unaff_x27;
  ppuStack_1d0 = unaff_x26;
  ppuStack_1c8 = unaff_x25;
  ppuStack_1c0 = unaff_x24;
  puStack_1b8 = puVar10;
  lStack_1b0 = param_1;
  puStack_1a8 = puVar9;
  lStack_1a0 = param_4;
  puStack_198 = param_3;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (puVar5 != (undefined *)0x0) {
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    lStack_2a8 = 0;
    puStack_2b0 = (undefined *)0x0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    puVar9 = *(undefined **)(puVar4 + 0x20);
    puStack_2b8 = puVar5;
    _objc_retain(puVar9);
    ppuVar2 = &puStack_2b0;
    ppuVar8 = apuStack_270;
    puVar5 = puVar9;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar11 = *plStack_2a0;
      do {
        param_3 = (undefined *)0x0;
        do {
          if (*plStack_2a0 != lVar11) {
            _objc_enumerationMutation(puVar9);
          }
          puVar10 = *(undefined **)(lStack_2a8 + (long)param_3 * 8);
          unaff_x24 = *(undefined ***)(puVar4 + 0x28);
          uVar3 = *(undefined8 *)(puVar4 + 0x30);
          puVar6 = puVar10;
          func_0x00010c241220(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar10;
          func_0x00010c241220(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c251460(unaff_x24);
          _objc_release(puVar7);
          _objc_release(uVar3);
          _objc_release(puVar6);
          param_3 = param_3 + 1;
        } while (puVar5 != param_3);
        ppuVar2 = &puStack_2b0;
        ppuVar8 = apuStack_270;
        puVar5 = puVar9;
        func_0x00010bf52a60();
        param_1 = 0;
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar9);
    puVar5 = puStack_2b8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2c8 = FUN_106dcae74;
  ppuStack_300 = unaff_x24;
  puStack_2f8 = puVar10;
  lStack_2f0 = param_1;
  puStack_2e8 = puVar9;
  puStack_2e0 = puVar4;
  puStack_2d8 = param_3;
  ppuStack_2d0 = &puStack_190;
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar8);
  if ((puVar5[0x228] & 1) == 0) {
    func_0x00010bf2dc80(*(undefined8 *)(puVar5 + 0x220));
    uVar3 = *(undefined8 *)(puVar5 + 0x220);
    *(undefined8 *)(puVar5 + 0x220) = 0;
    _objc_release(uVar3);
  }
  _objc_initWeak(auStack_308,puVar5);
  puVar9 = puVar5 + 0x138;
  _objc_loadWeakRetained(puVar9);
  puVar10 = puVar9;
  func_0x00010c12e1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_310,auStack_308);
  func_0x00010c2a4ae0(puVar10);
  _objc_release(puVar10);
  _objc_release(puVar9);
  uVar3 = *(undefined8 *)(puVar5 + 0x28);
  *(undefined8 *)(puVar5 + 0x28) = 0;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_310);
  _objc_destroyWeak(auStack_308);
  _objc_release(ppuVar8);
  _objc_release(ppuVar2);
  return;
}


