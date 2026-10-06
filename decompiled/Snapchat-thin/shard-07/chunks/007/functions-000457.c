/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10586dd78; end: 10586e06b; -[SCSnapDocOverlayImageGenerator initWithSnapDocEditorServices:previewCameraSourceOverlayService:targetTrajectoryFactory:stickerInjector:ctpItemViewService:previewABProvider:creativeToolsABProvider:userInfoServices:snapDocConverter:userSession:circumstanceEngine:snapchatterFetcher:] */

undefined8 *
FUN_10586dd78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126eaa60;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bf718;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 10586e06c; end: 10586e113; -[SCSnapDocOverlayImageGenerator generateOverlayImageForSnapDoc:overlaySize:] */

void FUN_10586e06c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 8);
  _objc_retain(param_5);
  func_0x00010bf9f4a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar2);
  func_0x00010bfbfde0(param_1,param_2,param_3,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10586e114; end: 10586e3ff; -[SCSnapDocOverlayImageGenerator generateOverlayUIImageForSnapDocEditor:overlaySize:] */

void FUN_10586e114(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  double dStack_80;
  double dStack_78;
  
  _objc_retain(param_5);
  dVar11 = *(double *)PTR__CGSizeZero_110347620;
  dVar12 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  bVar1 = false;
  if ((param_1 == dVar11) && (bVar1 = false, !NAN(param_2) && !NAN(dVar12))) {
    bVar1 = param_2 == dVar12;
  }
  if (bVar1) {
    func_0x00010bdf9580(param_3);
    param_2 = dVar12;
    param_1 = dVar11;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar3 = param_3;
  func_0x00010be966a0(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010be07060(param_1,param_2,param_3,param_4,param_5,uVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010beb3e40(param_3,param_4,param_5,puVar4);
  _objc_release(puVar4);
  if ((int)uVar6 != 0) {
    uVar6 = param_3;
    func_0x00010be88fa0(param_1,param_2,param_3,param_4,uVar5,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_4,uVar6);
    _objc_release(uVar6);
  }
  lVar7 = param_5;
  func_0x00010c09dea0();
  if (lVar7 != 0) {
    lVar10 = 0;
    do {
      puVar4 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8,param_4,lVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010beb3e40(param_3,param_4,param_5,puVar4);
      if ((int)uVar6 != 0) {
        uVar6 = param_3;
        func_0x00010be07060(param_1,param_2,param_3,param_4,param_5,uVar3,puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_3;
        func_0x00010be88fa0(param_1,param_2,param_3,param_4,uVar6,param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_4,uVar8);
        _objc_release(uVar8);
        _objc_release(uVar6);
      }
      _objc_release(puVar4);
      lVar10 = lVar10 + 1;
    } while (lVar7 != lVar10);
  }
  puVar4 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar9 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10586e400;
  puStack_90 = &UNK_1108b9160;
  puStack_88 = puVar4;
  dStack_80 = param_1;
  dStack_78 = param_2;
  _objc_retain(puVar4);
  func_0x00010c297260(puVar9,param_4,&puStack_a8,0);
  _objc_release(puVar9);
  puVar9 = puVar4;
  func_0x00010bfbc3e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_88);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10586e400; end: 10586e49f;  */

void FUN_10586e400(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108b9140);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe6cc0(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),param_1,puVar2
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_2 + 0x20));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10586e4a0; end: 10586e4ef;  */

uint FUN_10586e4a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  return (uint)uVar2 & 1;
}



/* Entry: 10586e4f0; end: 10586e8af; -[SCSnapDocOverlayImageGenerator generateOverlayImageForSnapDocEditor:overlaySize:] */

void FUN_10586e4f0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_98 [8];
  double dStack_90;
  undefined1 auStack_88 [8];
  
  dVar12 = param_1;
  _objc_retain(param_5);
  _CACurrentMediaTime();
  dVar13 = *(double *)PTR__CGSizeZero_110347620;
  dVar14 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  bVar1 = false;
  if ((param_1 == dVar13) && (bVar1 = false, !NAN(param_2) && !NAN(dVar14))) {
    bVar1 = param_2 == dVar14;
  }
  if (bVar1) {
    func_0x00010bdf9580(param_3);
    param_1 = dVar13;
    param_2 = dVar14;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = param_3;
  func_0x00010be966a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010be07060(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010beb3e40();
  _objc_release(puVar4);
  if ((int)uVar6 != 0) {
    puVar4 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010be1a920(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010befa120(puVar2);
    _objc_release(uVar6);
  }
  lVar7 = param_5;
  func_0x00010c09dea0();
  if (lVar7 != 0) {
    lVar11 = 0;
    do {
      puVar4 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010beb3e40();
      if ((int)uVar6 != 0) {
        uVar6 = param_3;
        func_0x00010be07060(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_3;
        func_0x00010be5f9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_3;
        func_0x00010be1a920(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar6);
      }
      _objc_release(puVar4);
      lVar11 = lVar11 + 1;
    } while (lVar7 != lVar11);
  }
  _objc_initWeak(auStack_88,param_3);
  puVar4 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar10 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_88);
  dStack_90 = dVar12;
  _objc_retain(puVar2);
  _objc_retain(puVar4);
  _objc_retain(param_5);
  func_0x00010c297260(puVar10);
  _objc_release(puVar10);
  puVar10 = puVar4;
  func_0x00010bfbc3e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10586e8b0; end: 10586e9cb;  */

void FUN_10586e8b0(double param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_4);
  lVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if ((param_3 == 0) || (param_4 != 0)) {
    func_0x00010bf43ca0(*(undefined8 *)(param_2 + 0x28));
  }
  else {
    _CACurrentMediaTime();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    dVar5 = *(double *)(param_2 + 0x40);
    uVar4 = *(undefined8 *)(lVar1 + 0x60);
    func_0x00010bf529e0(*(undefined8 *)(param_2 + 0x20));
    func_0x00010c0df840(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    FUN_10586fd3c(uVar4,puVar3,0,(long)((param_1 - dVar5) * 1000.0));
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bf43d60(*(undefined8 *)(param_2 + 0x28));
  }
  func_0x00010bf529e0(*(undefined8 *)(param_2 + 0x20));
  func_0x00010be38480(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10586e9cc; end: 10586eb1f; -[SCSnapDocOverlayImageGenerator _getSOJUOverlayFromSnapDocWithEditor:atIndex:] */

void FUN_10586e9cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ff580(param_3,param_2,param_4,&PTR___NSConcreteGlobalBlock_1108b91c0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0ff640(param_3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08eee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    uStack_48 = 0;
    puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar5,0,&uStack_48);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126bcdd8;
      _objc_alloc(PTR_PTR_1126bcdd8);
      func_0x00010c0206e0();
    }
    _objc_release(puVar6);
    _objc_release(lVar5);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10586eb20; end: 10586eb9b;  */

bool FUN_10586eb20(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08eee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar3 != 0;
}



/* Entry: 10586eb9c; end: 10586ec9f; -[SCSnapDocOverlayImageGenerator _generateAndReplaceOverlayImageWithEditingState:atIndex:snapDocEditor:overlaySize:] */

void FUN_10586eb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010be88fa0(param_1,param_2,param_3,param_4,param_5,param_7);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10586eca0;
  puStack_60 = &UNK_1108b91e0;
  uStack_58 = param_3;
  uStack_50 = param_7;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = uVar1;
  func_0x00010bfb2660(uVar1,param_4,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10586eca0; end: 10586ecef;  */

void FUN_10586eca0(long param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,0,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c130fc0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                        param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10586ecf0; end: 10586ef83; -[SCSnapDocOverlayImageGenerator _mergeLocalEditingState:withGlobalEditingState:] */

void FUN_10586ecf0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    _objc_retain(param_3);
    param_4 = param_3;
  }
  else {
    func_0x00010bf51e00(param_4);
    if (param_3 == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010c26f040(&uStack_68,param_3);
    }
    func_0x00010c214c20(param_4,param_2,&uStack_68);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c2553e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c2553e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c20bc80(param_4,param_2,puVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf308c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf308c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c178c80(param_4,param_2,puVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf8a020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf8a020(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c191a20(param_4,param_2,puVar4);
    lVar2 = param_3;
    func_0x00010bf5c9c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186260(param_4,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bfaee40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c23ec00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010bfaee40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203460();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    func_0x00010c1b3ee0(param_4,param_2,1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10586ef84; end: 10586f143; -[SCSnapDocOverlayImageGenerator _editingStateWithOverlaySize:snapDocEditor:timeRange:segment:] */

void FUN_10586ef84(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  dVar9 = param_1;
  dVar10 = param_2;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  lVar4 = param_3;
  func_0x00010be22400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = 1;
  uStack_88 = 1;
  uStack_98 = 1;
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  dVar3 = dVar10 * 0.5625;
  if (dVar9 <= dVar10 * 0.5625) {
    dVar10 = dVar9 / 0.5625;
    dVar3 = dVar9;
  }
  uVar5 = param_5;
  func_0x00010c23fe00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  uVar6 = *(undefined8 *)(param_3 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x000107ffa35c(param_1,param_2,dVar3,dVar10,lVar4,uVar5,param_6,uVar2,param_5,param_7,
                      &uStack_88,&uStack_90,&uStack_98,uVar1,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010be391a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_5);
  lVar8 = lVar7;
  func_0x00010bfaee40(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203460();
  _objc_release(lVar8);
  _objc_release(param_3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10586f144; end: 10586f37b; -[SCSnapDocOverlayImageGenerator _regenerateOverlayImageEditingState:overlaySize:snapDocEditor:] */

void FUN_10586f144(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_5);
  _objc_opt_new();
  lVar2 = param_3 + 0x50;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c2946e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010bf85f80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  func_0x000108084048(param_1,param_2,param_5,lVar2,uVar5,uVar8,*(undefined8 *)(param_3 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar10 = PTR_PTR_1126bf728;
  param_3 = param_3 + 0x50;
  _objc_loadWeakRetained(param_3);
  _objc_retain(puVar1);
  func_0x00010c0ef540(param_1,param_2,param_1,param_2,0x3ff0000000000000,puVar10);
  _objc_release(param_3);
  puVar10 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10586f37c; end: 10586f387;  */

void FUN_10586f37c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 10586f388; end: 10586f583; -[SCSnapDocOverlayImageGenerator replaceOverlayInSnapDocEditor:image:atIndex:] */

void FUN_10586f388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_5 == 0) {
    _objc_opt_class(param_2);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar4,param_3,param_2,&PTR____CFConstantStringClassReference_110e09158,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar5 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80(PTR_PTR_1126ae558,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf6c5c0(param_4,param_3,param_6,&PTR___NSConcreteGlobalBlock_1108b9240);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _CACurrentMediaTime();
    puVar4 = PTR_PTR_1126b3080;
    func_0x00010bf64b00(PTR_PTR_1126b3080,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b25c8;
    _objc_alloc_init(PTR_PTR_1126b25c8);
    func_0x00010c16a960();
    uVar2 = param_4;
    func_0x00010c265b80(param_4,param_3,puVar4,0xb);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    func_0x00010c1c4020();
    func_0x00010befa9a0(param_4,param_3,puVar3,param_6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bdc8a60(param_1,param_2);
    func_0x00010be388c0(param_2,param_3,1);
    puVar5 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10586f584; end: 10586f5c7;  */

bool FUN_10586f584(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 6;
}



/* Entry: 10586f5c8; end: 10586f7bb; -[SCSnapDocOverlayImageGenerator _retrieveFirstSegmentTimeRangeFromSnapDocEditor:] */

void FUN_10586f5c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [48];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_PTR_1126affe8;
  _objc_retain(param_3);
  func_0x00010c09e180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ff580(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c0ff640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar10 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar9 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_60 = uVar9;
  uStack_58 = uVar10;
  uStack_50 = uVar8;
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x00010c0c3fe0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0c4bc0();
    _CMTimeMakeWithSeconds(&uStack_60,(double)(uVar5 & 0xffffffff) / 1000.0,600);
    _objc_release(uVar4);
  }
  puVar6 = PTR_PTR_1126bf730;
  _objc_alloc(PTR_PTR_1126bf730);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uStack_c8 = uStack_58;
  uStack_d0 = uStack_60;
  uStack_c0 = uStack_50;
  uStack_b0 = uVar9;
  uStack_a8 = uVar10;
  uStack_a0 = uVar8;
  _CMTimeRangeMake(auStack_90,&uStack_b0,&uStack_d0);
  func_0x00010c297240(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uStack_c8 = uStack_58;
  uStack_d0 = uStack_60;
  uStack_c0 = uStack_50;
  uStack_b0 = uVar9;
  uStack_a8 = uVar10;
  uStack_a0 = uVar8;
  _CMTimeRangeMake(auStack_90,&uStack_b0,&uStack_d0);
  func_0x00010c297240(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055780(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10586f7bc; end: 10586f833;  */

bool FUN_10586f7bc(undefined8 param_1,undefined8 param_2)

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
    bVar1 = (int)uVar3 == 5;
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10586f834; end: 10586f8c7; -[SCSnapDocOverlayImageGenerator _defaultOverlaySize] */

undefined1  [16] FUN_10586f834(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c119b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efd80();
  dVar4 = param_1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar3);
  auVar5._8_8_ = param_2 * dVar4;
  auVar5._0_8_ = param_1 * dVar4;
  return auVar5;
}



/* Entry: 10586f8c8; end: 10586f97b; -[SCSnapDocOverlayImageGenerator _incrementGenerateOverlayCounterWithSucceeded:overlayCount:] */

void FUN_10586f8c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_10586ff6c(uVar5,puVar2,puVar4,0,1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10586f97c; end: 10586f9e7; -[SCSnapDocOverlayImageGenerator _incrementSnapDocUpdateCountWithSucceeded:] */

void FUN_10586f97c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1058703a0(uVar3,puVar2,0,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10586f9e8; end: 10586fa2f; -[SCSnapDocOverlayImageGenerator _addTimerForSnapDocEditWithStartTime:] */

/* WARNING: Removing unreachable block (ram,0x00010587027c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10586f9e8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  double dVar7;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  dVar7 = param_1;
  _CACurrentMediaTime();
  puVar3 = (undefined *)(long)((dVar7 - param_1) * 1000.0);
  lVar1 = *(long *)(param_2 + 0x60);
  puVar2 = (undefined *)0x0;
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar3;
  _objc_retain(0);
  if (lVar1 != 0) {
    plVar6 = *(long **)(lVar1 + 8);
    _objc_retain(0);
    _objc_release(0);
    func_0x00010002b838(auStack_60,&UNK_10f303b24);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_1108b9340;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108b9340,&uStack_80,puVar3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined *)puVar5;
    param_5 = puVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined *)puVar5;
      param_5 = puVar3;
    }
  }
  lVar1 = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(0);
  _objc_release(0);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  _objc_retain(puVar4);
  if (lVar1 != 0) {
    plVar6 = *(long **)(lVar1 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f303b24;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_f8,puVar3);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar3 = &UNK_10f303b24;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar3 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108b9390,&uStack_118,param_5);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar1 = 0;
    do {
      if ((&cStack_c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar4);
  puVar3 = puVar2;
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    _objc_release(puVar4);
    _objc_release(puVar2);
    __Unwind_Resume(puVar3);
    _objc_destroyWeak(puVar3 + _DAT_11272af94);
    _objc_destroyWeak(puVar3 + _DAT_11272af90);
    _objc_destroyWeak(puVar3 + _DAT_11272af8c);
    _objc_destroyWeak(puVar3 + _DAT_11272af88);
    _objc_destroyWeak(puVar3 + _DAT_11272af84);
    _objc_destroyWeak(puVar3 + _DAT_11272af80);
    _objc_destroyWeak(puVar3 + _DAT_11272af7c);
    _objc_destroyWeak(puVar3 + _DAT_11272af78);
    _objc_destroyWeak(puVar3 + _DAT_11272af74);
    _objc_destroyWeak(puVar3 + _DAT_11272af70);
    _objc_destroyWeak(puVar3 + _DAT_11272af6c);
    _objc_destroyWeak(puVar3 + _DAT_11272af68);
    _objc_destroyWeak(puVar3 + _DAT_11272af64);
    _objc_destroyWeak(puVar3 + _DAT_11272af60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_destroyWeak_11034d218)(puVar3 + _DAT_11272af5c);
    return;
  }
  return;
}



/* Entry: 10586fa30; end: 10586fabb; -[SCSnapDocOverlayImageGenerator _shouldGenerateOverlayWithEditor:atIndex:] */

bool FUN_10586fa30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010c0ff580(param_3,param_2,param_4,&PTR___NSConcreteGlobalBlock_1108b9280);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 10586fabc; end: 10586fc0b; -[SCSnapDocOverlayImageGenerator _infoStickerMetadataWithSnapDocEditor:atSegment:] */

void FUN_10586fabc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126affe8;
  _objc_retain(param_3);
  func_0x00010bfccec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be22400(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = lVar2;
  func_0x00010bfaebe0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf5a600(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x000108e5a4cc(lVar3,uVar4,puVar5,0,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(lVar3);
  func_0x00010c2868e0(lVar6);
  _objc_release(param_3);
  lVar3 = lVar6;
  func_0x000108e5a28c(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10586fc0c; end: 10586fcc7; -[SCSnapDocOverlayImageGenerator .cxx_destruct] */

void FUN_10586fc0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 10586fcc8; end: 10586fd3b; -[SCGrapheneOverlayImageGenerationServiceMetric2 init] */

undefined1 * FUN_10586fcc8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eaa68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10586fd3c; end: 10586ff6b;  */

/* WARNING: Removing unreachable block (ram,0x0001058701f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10586fd3c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined *puStack_210;
  long *plStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f303b24;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f303b24;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1108b92a0;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_160;
  pcStack_a8 = FUN_10586ff6c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar4 = puVar2;
  puVar11 = puVar10;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar10);
  if (puVar3 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f303b24;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_140,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f303b24;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_128,puVar4);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f303b24;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar4 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_110,puVar4);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    puVar7 = &UNK_1108b92f0;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108b92f0,&uStack_160,param_5);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar12 = 0;
    puVar4 = puVar5;
    puVar11 = param_5;
    do {
      if ((&cStack_f9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_160;
    } while (lVar12 != -0x48);
  }
  _objc_release(puVar10);
  _objc_release(puVar2);
  puVar5 = (undefined8 *)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(puVar10);
    puVar14 = auStack_140;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puVar14);
    _objc_release(puVar10);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar6 = (undefined *)puVar5;
    __Unwind_Resume();
    puVar9 = &uStack_1e0;
    pcStack_168 = FUN_10587022c;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar7;
    puVar8 = puVar4;
    puStack_1a0 = unaff_x24;
    puStack_198 = puVar14;
    puStack_190 = (undefined *)puVar5;
    puStack_188 = puVar10;
    puStack_180 = puVar2;
    puStack_178 = puVar1;
    ppuStack_170 = &puStack_b0;
    _objc_retain(puVar7);
    plVar13 = (long *)0x0;
    if (puVar6 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar6 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f303b24;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      puVar14 = auStack_1c0;
      func_0x00010002b838(auStack_1c0,puVar1);
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      func_0x00010007e1e8(&uStack_1e0,auStack_1c0,&lStack_1a8,1);
      puVar3 = &UNK_1108b9340;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108b9340,&uStack_1e0,puVar4);
      puStack_1c8 = (undefined1 *)&uStack_1e0;
      func_0x00010007e5dc(&puStack_1c8);
      puVar8 = puVar9;
      puVar11 = puVar4;
      puVar5 = &uStack_1e0;
      if (cStack_1a9 < '\0') {
        __ZdlPv(auStack_1c0[0]);
        puVar8 = puVar9;
        puVar11 = puVar4;
        puVar5 = &uStack_1e0;
      }
    }
    puVar1 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    _objc_release(puVar7);
    puVar6 = puVar1;
    __Unwind_Resume();
    pcStack_1e8 = FUN_1058703a0;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_220 = unaff_x24;
    puStack_218 = puVar14;
    puStack_210 = (undefined *)puVar5;
    plStack_208 = plVar13;
    puStack_200 = puVar1;
    puStack_1f8 = puVar7;
    pppuStack_1f0 = &ppuStack_170;
    _objc_retain(puVar3);
    _objc_retain(puVar8);
    if (puVar6 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar6 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f303b24;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_258,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f303b24;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar2 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_240,puVar2);
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108b9390,&uStack_278,puVar11);
      puStack_260 = &uStack_278;
      func_0x00010007e5dc(&puStack_260);
      lVar12 = 0;
      do {
        if ((&cStack_229)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(puVar8);
    puVar1 = puVar3;
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      if (cStack_241 < '\0') {
        __ZdlPv(auStack_258[0]);
      }
      _objc_release(puVar8);
      _objc_release(puVar3);
      __Unwind_Resume(puVar1);
      _objc_destroyWeak(puVar1 + _DAT_11272af94);
      _objc_destroyWeak(puVar1 + _DAT_11272af90);
      _objc_destroyWeak(puVar1 + _DAT_11272af8c);
      _objc_destroyWeak(puVar1 + _DAT_11272af88);
      _objc_destroyWeak(puVar1 + _DAT_11272af84);
      _objc_destroyWeak(puVar1 + _DAT_11272af80);
      _objc_destroyWeak(puVar1 + _DAT_11272af7c);
      _objc_destroyWeak(puVar1 + _DAT_11272af78);
      _objc_destroyWeak(puVar1 + _DAT_11272af74);
      _objc_destroyWeak(puVar1 + _DAT_11272af70);
      _objc_destroyWeak(puVar1 + _DAT_11272af6c);
      _objc_destroyWeak(puVar1 + _DAT_11272af68);
      _objc_destroyWeak(puVar1 + _DAT_11272af64);
      _objc_destroyWeak(puVar1 + _DAT_11272af60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_destroyWeak_11034d218)(puVar1 + _DAT_11272af5c);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10586ff6c; end: 10587022b;  */

/* WARNING: Removing unreachable block (ram,0x0001058701f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10586ff6c(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x24;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  long *plStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar2 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  puVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f303b24;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f303b24;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f303b24;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_1108b92f0;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108b92f0,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar9 = 0;
    puVar5 = (undefined *)puVar2;
    puVar4 = param_5;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar9 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = (undefined8 *)param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar11 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar11);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = (undefined *)puVar2;
  __Unwind_Resume();
  puVar8 = &uStack_140;
  pcStack_c8 = FUN_10587022c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar5;
  puStack_100 = unaff_x24;
  puStack_f8 = puVar11;
  puStack_f0 = (undefined *)puVar2;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar4 = &UNK_10f303b24;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar11 = auStack_120;
    func_0x00010002b838(auStack_120,puVar4);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_108,1);
    puVar6 = &UNK_1108b9340;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108b9340,&uStack_140,puVar5);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    puVar7 = (undefined *)puVar8;
    puVar4 = puVar5;
    puVar2 = &uStack_140;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      puVar7 = (undefined *)puVar8;
      puVar4 = puVar5;
      puVar2 = &uStack_140;
    }
  }
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_1058703a0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = unaff_x24;
  puStack_178 = puVar11;
  puStack_170 = (undefined *)puVar2;
  plStack_168 = plVar10;
  puStack_160 = puVar5;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_d0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar3 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f303b24;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f303b24;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar1 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108b9390,&uStack_1d8,puVar4);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar9 = 0;
    do {
      if ((&cStack_189)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(puVar7);
  puVar1 = puVar6;
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    if (cStack_1a1 < '\0') {
      __ZdlPv(auStack_1b8[0]);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    __Unwind_Resume(puVar1);
    _objc_destroyWeak(puVar1 + _DAT_11272af94);
    _objc_destroyWeak(puVar1 + _DAT_11272af90);
    _objc_destroyWeak(puVar1 + _DAT_11272af8c);
    _objc_destroyWeak(puVar1 + _DAT_11272af88);
    _objc_destroyWeak(puVar1 + _DAT_11272af84);
    _objc_destroyWeak(puVar1 + _DAT_11272af80);
    _objc_destroyWeak(puVar1 + _DAT_11272af7c);
    _objc_destroyWeak(puVar1 + _DAT_11272af78);
    _objc_destroyWeak(puVar1 + _DAT_11272af74);
    _objc_destroyWeak(puVar1 + _DAT_11272af70);
    _objc_destroyWeak(puVar1 + _DAT_11272af6c);
    _objc_destroyWeak(puVar1 + _DAT_11272af68);
    _objc_destroyWeak(puVar1 + _DAT_11272af64);
    _objc_destroyWeak(puVar1 + _DAT_11272af60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_destroyWeak_11034d218)(puVar1 + _DAT_11272af5c);
    return;
  }
  return;
}



/* Entry: 10587022c; end: 10587039f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10587022c(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f303b24;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108b9340;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108b9340,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar4;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar5 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f303b24;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f303b24;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar2 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108b9390,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar6 = 0;
    do {
      if ((&cStack_c9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  __Unwind_Resume(puVar2);
  _objc_destroyWeak(puVar2 + _DAT_11272af94);
  _objc_destroyWeak(puVar2 + _DAT_11272af90);
  _objc_destroyWeak(puVar2 + _DAT_11272af8c);
  _objc_destroyWeak(puVar2 + _DAT_11272af88);
  _objc_destroyWeak(puVar2 + _DAT_11272af84);
  _objc_destroyWeak(puVar2 + _DAT_11272af80);
  _objc_destroyWeak(puVar2 + _DAT_11272af7c);
  _objc_destroyWeak(puVar2 + _DAT_11272af78);
  _objc_destroyWeak(puVar2 + _DAT_11272af74);
  _objc_destroyWeak(puVar2 + _DAT_11272af70);
  _objc_destroyWeak(puVar2 + _DAT_11272af6c);
  _objc_destroyWeak(puVar2 + _DAT_11272af68);
  _objc_destroyWeak(puVar2 + _DAT_11272af64);
  _objc_destroyWeak(puVar2 + _DAT_11272af60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(puVar2 + _DAT_11272af5c);
  return;
}



/* Entry: 1058703a0; end: 1058705cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058703a0(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f303b24;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f303b24;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108b9390,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar2 = 0;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(param_3);
  puVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(puVar1);
  _objc_destroyWeak(puVar1 + _DAT_11272af94);
  _objc_destroyWeak(puVar1 + _DAT_11272af90);
  _objc_destroyWeak(puVar1 + _DAT_11272af8c);
  _objc_destroyWeak(puVar1 + _DAT_11272af88);
  _objc_destroyWeak(puVar1 + _DAT_11272af84);
  _objc_destroyWeak(puVar1 + _DAT_11272af80);
  _objc_destroyWeak(puVar1 + _DAT_11272af7c);
  _objc_destroyWeak(puVar1 + _DAT_11272af78);
  _objc_destroyWeak(puVar1 + _DAT_11272af74);
  _objc_destroyWeak(puVar1 + _DAT_11272af70);
  _objc_destroyWeak(puVar1 + _DAT_11272af6c);
  _objc_destroyWeak(puVar1 + _DAT_11272af68);
  _objc_destroyWeak(puVar1 + _DAT_11272af64);
  _objc_destroyWeak(puVar1 + _DAT_11272af60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(puVar1 + _DAT_11272af5c);
  return;
}



/* Entry: 1058705d0; end: 1058706a3; -[SCCloudSyncDependencyProvidingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058705d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272af94);
  _objc_destroyWeak(param_1 + _DAT_11272af90);
  _objc_destroyWeak(param_1 + _DAT_11272af8c);
  _objc_destroyWeak(param_1 + _DAT_11272af88);
  _objc_destroyWeak(param_1 + _DAT_11272af84);
  _objc_destroyWeak(param_1 + _DAT_11272af80);
  _objc_destroyWeak(param_1 + _DAT_11272af7c);
  _objc_destroyWeak(param_1 + _DAT_11272af78);
  _objc_destroyWeak(param_1 + _DAT_11272af74);
  _objc_destroyWeak(param_1 + _DAT_11272af70);
  _objc_destroyWeak(param_1 + _DAT_11272af6c);
  _objc_destroyWeak(param_1 + _DAT_11272af68);
  _objc_destroyWeak(param_1 + _DAT_11272af64);
  _objc_destroyWeak(param_1 + _DAT_11272af60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272af5c);
  return;
}



/* Entry: 1058706a4; end: 1058706af; +[SCCMemoriesBackupFactory modulePath] */

undefined ** FUN_1058706a4(void)

{
  return &PTR____CFConstantStringClassReference_110e09178;
}



/* Entry: 1058706b0; end: 1058706b7; +[SCCMemoriesBackupFactory asyncStrictMode] */

undefined8 FUN_1058706b0(void)

{
  return 0;
}



/* Entry: 1058706b8; end: 105870727; -[SCCMemoriesBackupFactory createBackupServiceWithDependencies:] */

void FUN_1058706b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105870728; end: 105870897; +[SCCMemoriesBackupFactory invokeWithJSRuntimeProvider:dependencies:completionHandler:] */

void FUN_105870728(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10587080c;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105870898; end: 1058708bb; +[SCCMemoriesBackupFactory valdiMarshallableObjectDescriptor] */

void FUN_105870898(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108b9460;
  param_1[1] = &PTR_DAT_1108b9490;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1058708bc; end: 10587096b;  */

void FUN_1058708bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f303bc4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x11,0,0xc);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10587096c; end: 1058709db;  */

void FUN_10587096c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010becea20(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1058709dc; end: 105870a23;  */

void FUN_1058709dc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bee8e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105870a24; end: 105870aab;  */

void FUN_105870a24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bdd25a0(lVar3,param_2,uVar1,uVar2,uVar4,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105870aac; end: 105870adb;  */

void FUN_105870aac(void)

{
  _objc_alloc(PTR_PTR_1126bf748);
  func_0x00010c055240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105870adc; end: 105870af7;  */

void FUN_105870adc(void)

{
  _objc_opt_new(PTR_PTR_1126bf750);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105870af8; end: 105870e57; -[SCMemoriesBackupTranscodingServiceProvider _backupTranscoderWithTranscodingCache:bitrateCalculator:performer:videoProcessor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105870af8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  lVar1 = param_2;
  FUN_105870e58();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x000108ec00e4(lVar3);
  lVar1 = lVar3;
  func_0x000108ec011c();
  lVar2 = lVar3;
  func_0x000108ec0144();
  puVar4 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_3,&PTR___NSConcreteGlobalBlock_1108b9618);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bf768;
  _objc_alloc();
  lVar6 = param_2;
  FUN_105870e88();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_2 + _DAT_11272afac;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar17;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x000105870eac();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_2;
  func_0x000105870ed0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_2 + _DAT_11272af9c;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar18;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_2 + _DAT_11272afc0;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar19;
  func_0x00010bface80();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_2 + _DAT_11272afc4;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar20;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105870ef4();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0610e0(param_1,puVar5,param_3,param_7,lVar7,lVar8,lVar10,lVar12,puVar4,lVar1,param_4,
                      (char)lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(lVar16);
  _objc_release(param_2);
  _objc_release(lVar15);
  _objc_release(lVar20);
  _objc_release(lVar14);
  _objc_release(lVar19);
  _objc_release(lVar13);
  _objc_release(lVar18);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105870e58; end: 105870e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105870e58(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272afb8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105870e7c; end: 105870e87;  */

void FUN_105870e7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bf760,PTR_s_sharedInstance_1126688c8);
  return;
}



/* Entry: 105870e88; end: 105870f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105870e88(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272afa4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105870f18; end: 105871257; -[SCMemoriesBackupTranscodingServiceProvider _videoProcessorWithBitrateCalculator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105870f18(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be07480();
  uVar2 = param_1;
  FUN_105870e58();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf14e60();
  }
  else {
    func_0x00010c260700();
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126bf770;
  _objc_alloc();
  uVar1 = param_1;
  FUN_105871258();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_105870e88();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + (long)_DAT_11272afa8;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar22;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x000105870eac();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x000105870ed0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_105871258();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0b3820();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_105870e58();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf14e40();
  uVar17 = param_1;
  FUN_105870e58();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf14ea0();
  func_0x000105870ef4();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055200(puVar5,param_2,uVar2,uVar4,lVar6,uVar8,param_3,uVar10,uVar12,uVar16,
                      (char)uVar20);
  _objc_release(param_3);
  _objc_release(uVar21);
  _objc_release(param_1);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar22);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105871258; end: 10587127b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105871258(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272afa0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10587127c; end: 10587131b; -[SCMemoriesBackupTranscodingServiceProvider _transcodingCacheWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10587127c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bf778;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11272afbc;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf4c240(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0031c0(puVar1,param_2,lVar3,param_3);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10587131c; end: 1058714bf; -[SCMemoriesBackupTranscodingServiceProvider _bitrateCalculator] */

void FUN_10587131c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  FUN_105870e58();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14e00();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_105870e58(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14dc0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_105870e58();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14de0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  FUN_105870e58(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14da0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_alloc(PTR_PTR_1126bf780);
  func_0x00010c028d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058714c0; end: 1058715cf; -[SCMemoriesBackupTranscodingServiceProvider _eligibleForSubscriptionBackupQuality] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1058714c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11272afcc;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar4;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf018a0();
  _objc_release(lVar4);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_105870e58(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf91f00();
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  return lVar4;
}



/* Entry: 1058715d0; end: 105871697; -[SCMemoriesBackupTranscodingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058715d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272afcc);
  _objc_destroyWeak(param_1 + _DAT_11272afc8);
  _objc_destroyWeak(param_1 + _DAT_11272afc4);
  _objc_destroyWeak(param_1 + _DAT_11272afc0);
  _objc_destroyWeak(param_1 + _DAT_11272afbc);
  _objc_destroyWeak(param_1 + _DAT_11272afb8);
  _objc_destroyWeak(param_1 + _DAT_11272afb4);
  _objc_destroyWeak(param_1 + _DAT_11272afb0);
  _objc_destroyWeak(param_1 + _DAT_11272afac);
  _objc_destroyWeak(param_1 + _DAT_11272afa8);
  _objc_destroyWeak(param_1 + _DAT_11272afa4);
  _objc_destroyWeak(param_1 + _DAT_11272afa0);
  _objc_destroyWeak(param_1 + _DAT_11272af9c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272af98);
  return;
}



/* Entry: 105871698; end: 10587170b; -[SCMemoriesBackupBatchTranscoder initWithTranscoder:] */

undefined1 * FUN_105871698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eaa70;
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



/* Entry: 10587170c; end: 10587194f; -[SCMemoriesBackupBatchTranscoder transcodeAndEncryptSnaps:] */

void FUN_10587170c(long param_1,undefined1 *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **unaff_x25;
  long lVar6;
  long lVar7;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x000107f19580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    puVar4 = (undefined *)0x0;
    if (lVar2 != 0) {
      lVar6 = *plStack_130;
      unaff_x25 = &puStack_178;
      do {
        lVar7 = 0;
        puVar1 = puVar4;
        do {
          if (*plStack_130 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          uVar5 = *(undefined8 *)(lStack_138 + lVar7 * 8);
          if (puVar1 == (undefined *)0x0) {
            puVar1 = *(undefined **)(param_1 + 8);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar1;
            func_0x00010c2799a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar1);
          }
          else {
            _objc_initWeak(auStack_148,param_1);
            puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_170 = 0xc2000000;
            pcStack_168 = FUN_105871950;
            puStack_160 = &UNK_1108648d8;
            param_2 = auStack_148;
            _objc_copyWeak(auStack_150,param_2);
            puVar4 = puVar1;
            uStack_158 = uVar5;
            func_0x00010bfb2660();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar1);
            _objc_destroyWeak(auStack_150);
            _objc_destroyWeak(auStack_148);
          }
          lVar7 = lVar7 + 1;
          puVar1 = puVar4;
        } while (lVar2 != lVar7);
        lVar2 = param_3;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 5);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (param_3 == 0) {
    uVar5 = 7;
    func_0x000107f19b68(7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    puStack_208 = &uStack_210;
    uStack_210 = 0;
    uStack_200 = 0x3032000000;
    pcStack_1f8 = FUN_105871be4;
    uStack_1f0 = 0x105871bf4;
    uStack_1e8 = 0;
    puStack_238 = &uStack_240;
    uStack_240 = 0;
    uStack_230 = 0x3032000000;
    pcStack_228 = FUN_105871be4;
    uStack_220 = 0x105871bf4;
    uStack_218 = 0;
    func_0x00010c0c0800(param_2);
    if (puStack_238[5] == 0) {
      lVar2 = puStack_208[5];
      func_0x00010bf529e0();
      if (lVar2 == 0) goto LAB_105871a38;
      puVar3 = *(undefined **)(param_3 + 8);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010c2799a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    else {
LAB_105871a38:
      puVar4 = PTR_PTR_1126ae6b8;
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_240,8);
    _objc_release(uStack_218);
    __Block_object_dispose(&uStack_210,8);
    uVar5 = uStack_1e8;
  }
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(param_2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105871950; end: 105871be3;  */

void FUN_105871950(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if (param_1 == 0) {
    uVar1 = 7;
    func_0x000107f19b68(7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    goto LAB_105871b7c;
  }
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105871be4;
  uStack_70 = 0x105871bf4;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_105871be4;
  uStack_a0 = 0x105871bf4;
  uStack_98 = 0;
  func_0x00010c0c0800(param_2);
  if (puStack_b8[5] == 0) {
    lVar4 = puStack_88[5];
    func_0x00010bf529e0();
    if (lVar4 == 0) goto LAB_105871a38;
    puVar5 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c2799a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
LAB_105871a38:
    puVar3 = PTR_PTR_1126ae6b8;
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  uVar1 = uStack_68;
LAB_105871b7c:
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105871be4; end: 105871bfb;  */

void FUN_105871be4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105871bfc; end: 105871c6b;  */

void FUN_105871bfc(long param_1,undefined8 param_2)

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



/* Entry: 105871c6c; end: 105871e1b;  */

void FUN_105871c6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105871be4;
  uStack_40 = 0x105871bf4;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105871be4;
  uStack_70 = 0x105871bf4;
  uStack_68 = 0;
  func_0x00010c0c0800(param_2);
  lVar1 = puStack_58[5];
  func_0x00010bf529e0();
  if ((lVar1 == 1) && (puStack_88[5] == 0)) {
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    func_0x00010c0d3c80(uVar2);
    func_0x00010bef7f60();
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105871e1c; end: 105871e8b;  */

void FUN_105871e1c(long param_1,undefined8 param_2)

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



/* Entry: 105871e8c; end: 105871edf; -[SCMemoriesBackupBatchTranscoder transcodeAndEncryptMemoriesSnaps:] */

void FUN_105871e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af2564c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2799c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105871ee0; end: 105871eeb; -[SCMemoriesBackupBatchTranscoder .cxx_destruct] */

void FUN_105871ee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105871eec; end: 1058721cb; -[SCMemoriesBackupTranscoder initWithVideoProcessor:encryptedContentManager:dataVault:temporaryFileWriter:grapheneRegistry:timeoutInSeconds:transcodeConcurrencyCounter:maxTranscodeConcurrency:transcodingCache:shouldStopOnLowMemory:appLifecycleObservable:fileManager:memoriesDataObjectContext:circumstanceEngine:performer:] */

undefined8 *
FUN_105871eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_80 = PTR_PTR_1126eaa78;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
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
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    puVar1[6] = param_1;
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    puVar1[9] = param_10;
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xe) = param_12;
    _objc_retain(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[1];
    puVar1[1] = param_18;
    _objc_release(uVar2);
    func_0x00010bec7c80(puVar1);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1058721cc; end: 1058722ef; -[SCMemoriesBackupTranscoder _subscribeToLowMemoryWarning:] */

void FUN_1058721cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = param_3;
  func_0x00010bf79200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1058722f0; end: 105872363;  */

void FUN_1058722f0(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105872364;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105872364; end: 10587236b;  */

void FUN_105872364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2bdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleLowMemoryWarning_112568918);
  return;
}



/* Entry: 10587236c; end: 1058723ff; -[SCMemoriesBackupTranscoder transcodeAndEncryptSnap:] */

void FUN_10587236c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0b5a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be962c0(param_1,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105872400; end: 10587261b; -[SCMemoriesBackupTranscoder transcodeVideoData:timeRange:identifier:] */

void FUN_105872400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar8);
  _objc_retain(uVar7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b5a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae6b8;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10587261c;
  puStack_80 = &UNK_11088e668;
  uStack_78 = uVar3;
  _objc_retain(uVar3);
  func_0x00010bf54280(puVar4,param_2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be96300(param_1,param_2,param_5,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar6;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105872728;
  puStack_b8 = &UNK_110898518;
  uStack_b0 = param_5;
  uStack_a8 = uVar8;
  puStack_a0 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_5);
  lVar5 = param_1;
  func_0x00010c25ff60(param_1,param_2,&puStack_d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(param_1);
  puVar6 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_a0);
  _objc_release(uStack_b0);
  _objc_release(uStack_78);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10587261c; end: 105872727;  */

void FUN_10587261c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c297260(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105872728; end: 105872803;  */

void FUN_105872728(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105872804; end: 105872947;  */

void FUN_105872804(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf64ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105872948; end: 105872957; -[SCMemoriesBackupTranscoder transcodeVideoAsset:identifier:] */

void FUN_105872948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c279df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_transcodeVideoAsset_timeRange_id_11267c1a0,param_3,0,param_4,0);
  return;
}



/* Entry: 105872958; end: 10587295f; -[SCMemoriesBackupTranscoder transcodeVideoAsset:timeRange:identifier:] */

void FUN_105872958(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c279df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_transcodeVideoAsset_timeRange_id_11267c1a0);
  return;
}



/* Entry: 105872960; end: 105872b6b; -[SCMemoriesBackupTranscoder transcodeVideoAsset:timeRange:identifier:isORT:] */

void FUN_105872960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ae6b8;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105872b6c;
  puStack_a0 = &UNK_1108b96c8;
  uStack_98 = uVar5;
  uStack_90 = param_3;
  uStack_88 = param_4;
  _objc_retain(param_5);
  uStack_80 = param_5;
  uStack_78 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar2,param_2,&puStack_b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be96300(param_1,param_2,param_5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar4;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_105872cbc;
  puStack_d8 = &UNK_110898518;
  uStack_d0 = param_5;
  uStack_c8 = uVar6;
  puStack_c0 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_5);
  lVar3 = param_1;
  func_0x00010c25ff60(param_1,param_2,&puStack_f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar3);
  _objc_release(param_1);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_c0);
  _objc_release(uStack_d0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105872b6c; end: 105872c5b;  */

void FUN_105872b6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retain(param_2);
  func_0x00010c297260(uVar2);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105872c5c; end: 105872cbb;  */

void FUN_105872c5c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105872cbc; end: 105872d97;  */

void FUN_105872cbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105872d98; end: 105872edb;  */

void FUN_105872d98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf64ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105872edc; end: 1058730ab; -[SCMemoriesBackupTranscoder _retrieveCacheOrTranscodeSnapDocWithLoggingWithTimeoutsWithIdentifier:videoProcessorTranscodeObservable:] */

undefined * FUN_105872edc(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_1;
  func_0x00010be962e0();
  _objc_retainAutoreleasedReturnValue();
  if (*(double *)(param_1 + 0x30) <= 0.0) {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  else {
    func_0x00010becc1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae6b8;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar2;
    puStack_60 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cab40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    puVar3 = puVar4;
    func_0x00010bfad7a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    __Block_object_dispose(&uStack_88,8);
    _objc_release(puVar4);
    _objc_release(param_1);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_88,8);
  __Unwind_Resume();
  lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  bVar1 = *(byte *)(lVar5 + 0x18);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(lVar5 + 0x18) = 1;
  }
  return (undefined *)(ulong)(bVar1 ^ 1);
}



/* Entry: 1058730ac; end: 1058730cb;  */

byte FUN_1058730ac(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  bVar1 = *(byte *)(lVar2 + 0x18);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x18) = 1;
  }
  return bVar1 ^ 1;
}



/* Entry: 1058730cc; end: 10587329b; -[SCMemoriesBackupTranscoder _retrieveCacheOrTranscodeGallerySnapWithLoggingWithTimeoutsWithSnap:videoProcessorTranscodeObservable:] */

undefined * FUN_1058730cc(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_1;
  func_0x00010be962a0();
  _objc_retainAutoreleasedReturnValue();
  if (*(double *)(param_1 + 0x30) <= 0.0) {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  else {
    func_0x00010becc1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae6b8;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar2;
    puStack_60 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cab40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    puVar3 = puVar4;
    func_0x00010bfad7a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    __Block_object_dispose(&uStack_88,8);
    _objc_release(puVar4);
    _objc_release(param_1);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_88,8);
  __Unwind_Resume();
  lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  bVar1 = *(byte *)(lVar5 + 0x18);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(lVar5 + 0x18) = 1;
  }
  return (undefined *)(ulong)(bVar1 ^ 1);
}



/* Entry: 10587329c; end: 1058732bb;  */

byte FUN_10587329c(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  bVar1 = *(byte *)(lVar2 + 0x18);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x18) = 1;
  }
  return bVar1 ^ 1;
}



/* Entry: 1058732bc; end: 105873373; -[SCMemoriesBackupTranscoder _timeoutObservableWithTimeout:] */

void FUN_1058732bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105873374; end: 1058734f3;  */

void FUN_105873374(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = param_2;
    func_0x000107f19c58(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_2);
    func_0x00010c0f7fe0(*(undefined8 *)(param_1 + 0x30),uVar2);
    puVar1 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058734f4; end: 1058736e7; -[SCMemoriesBackupTranscoder _retrieveCacheOrTranscodeSnapDocWithLoggingWithIdentifier:videoProcessorTranscodeObservable:] */

void FUN_1058734f4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if ((*(char *)(param_2 + 0x70) == '\x01') && (*(char *)(param_2 + 0x71) == '\x01')) {
    uVar1 = 0x11;
    func_0x000107f19b68(0x11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  else {
    func_0x00010be51a60(param_2);
    _CACurrentMediaTime();
    _objc_initWeak(auStack_58,param_2);
    puVar2 = *(undefined **)(param_2 + 0x50);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c13e760();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_4);
    uStack_60 = param_1;
    _objc_retain(param_5);
    puVar4 = puVar3;
    func_0x00010bfb2660(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058736e8; end: 10587393b;  */

void FUN_1058736e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    uVar4 = 7;
    func_0x000107f19b68(7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_10587393c;
    uStack_90 = 0x10587394c;
    uStack_88 = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    func_0x00010c0c0800(param_2);
    func_0x00010be51a60(lVar1);
    func_0x00010be50fc0(*(undefined8 *)(param_1 + 0x38),lVar1);
    puVar3 = (undefined *)puStack_a8[5];
    _objc_retain(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    __Block_object_dispose(&uStack_80,8);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10587393c; end: 105873953;  */

void FUN_10587393c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105873954; end: 105873a2b;  */

void FUN_105873954(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf8a80(uVar1,param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar2 = uVar1;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar5);
  return;
}



/* Entry: 105873a2c; end: 105873b77;  */

void FUN_105873a2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10587393c;
  uStack_60 = 0x10587394c;
  uStack_58 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105873b78; end: 105873c9b;  */

void FUN_105873b78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be98e60();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105873c9c; end: 105873de7;  */

void FUN_105873c9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10587393c;
  uStack_60 = 0x10587394c;
  uStack_58 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0800(param_2);
  func_0x00010be56b40(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105873de8; end: 105873ecb;  */

void FUN_105873de8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar2;
  _objc_release(uVar4);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28) = puVar2;
  _objc_release(uVar4);
  *(undefined1 *)(*(long *)(*(long *)(puVar1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 105873ecc; end: 105873f23;  */

void FUN_105873ecc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 105873f24; end: 105873fe3;  */

void FUN_105873f24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_2);
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 105873fe4; end: 105874077;  */

void FUN_105873fe4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_2);
  func_0x00010be56b40(uVar3,uVar2);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 105874078; end: 10587413b;  */

void FUN_105874078(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0;
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bece840(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10587413c; end: 10587422f;  */

void FUN_10587413c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  func_0x00010be59e60(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  func_0x00010be56b40(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20));
  __Block_object_dispose(&uStack_40,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105874230; end: 105874253;  */

void FUN_105874230(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105874254; end: 105874487; -[SCMemoriesBackupTranscoder _retrieveCacheOrTranscodeGallerySnapWithLoggingWithSnap:videoProcessorTranscodeObservable:] */

void FUN_105874254(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af5d0;
  puVar5 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    uVar2 = 2;
  }
  else {
    if ((*(char *)(param_2 + 0x70) != '\x01') || (*(char *)(param_2 + 0x71) != '\x01')) {
      func_0x00010be51a60(param_2);
      _CACurrentMediaTime();
      _objc_initWeak(auStack_68,param_2);
      puVar3 = *(undefined **)(param_2 + 0x50);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c13e760();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(param_4);
      uStack_70 = param_1;
      _objc_retain(param_5);
      puVar5 = puVar4;
      func_0x00010bfb2660(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_78);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_68);
      goto LAB_105874428;
    }
    uVar2 = 0x11;
  }
  func_0x000107f19b68(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar2);
LAB_105874428:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105874488; end: 1058746db;  */

void FUN_105874488(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    uVar4 = 7;
    func_0x000107f19b68(7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_10587393c;
    uStack_90 = 0x10587394c;
    uStack_88 = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    func_0x00010c0c0800(param_2);
    func_0x00010be51a60(lVar1);
    func_0x00010be50fc0(*(undefined8 *)(param_1 + 0x38),lVar1);
    puVar3 = (undefined *)puStack_a8[5];
    _objc_retain(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    __Block_object_dispose(&uStack_80,8);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


